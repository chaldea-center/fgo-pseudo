void __fastcall BonusSelectSummonPartyServantSelectMenu___ctor(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AFF1D & 1) == 0 )
  {
    sub_B52984(&BaseMenu_TypeInfo);
    byte_42AFF1D = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
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
  if ( (byte_42AFF1A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__);
    this = (BonusSelectSummonPartyServantSelectMenu_o *)sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFF1A = 1;
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
  this = (BonusSelectSummonPartyServantSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_14:
    sub_B52A5C(this, item);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)v4, Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__, 0LL);
  BaseMenu__Close((BaseMenu_o *)v4, v7, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__Init(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *partyServantListViewManager; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  partyServantListViewManager = (ListViewManager_o *)this->fields.partyServantListViewManager;
  if ( !partyServantListViewManager )
    sub_B52A5C(0LL, method);
  ListViewManager__DestroyList(partyServantListViewManager, 0LL);
  this->fields.state = 0;
  this->fields.organizationItem = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.organizationItem, 0LL, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_42AFF1B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__);
    sub_B52984(&Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFF1B = 1;
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
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B5298C(Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_B52968(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    partyServantListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( partyServantListViewManager )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)partyServantListViewManager, 1, 0LL);
      v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v6,
        (Il2CppObject *)this,
        Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__,
        0LL);
      BaseMenu__Close((BaseMenu_o *)this, v6, 0LL);
      return;
    }
LABEL_12:
    sub_B52A5C(partyServantListViewManager, method);
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

  if ( (byte_42AFF1C & 1) == 0 )
  {
    sub_B52984(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__);
    byte_42AFF1C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
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
      sub_B52A5C(partyServantListViewManager, v5);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v20; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v22; // x2
  UILabel_o *guideMsgLabel; // x20
  System_Action_o *v24; // x20

  if ( (byte_42AFF19 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_12511/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/);
    byte_42AFF19 = 1;
  }
  this->fields.organizationItem = memberItem;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.organizationItem,
    (System_Int32_array **)memberItem,
    (System_String_array **)notPossibleSvtIdList,
    (System_String_array **)closeCallbackFunc,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.closeCallbackFunc = closeCallbackFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallbackFunc,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 88, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setBackBtnSprite_18269200(titleInfo, 1, 0, 0, 0LL);
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0LL);
  if ( !memberItem )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  this->fields.isSelectedSvt = memberItem->fields.servantEntity != 0LL;
  if ( !titleInfo )
    goto LABEL_17;
  BonusSelectSummonPartyServantListViewManager__CreateList(
    (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
    memberItem->fields.gachaBonusSelectEntity,
    notPossibleSvtIdList,
    v20);
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  if ( !titleInfo )
    goto LABEL_17;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  titleInfo = (TitleInfoControl_o *)BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
                                      (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
                                      v18);
  if ( !scaleChangeTabSprite )
    goto LABEL_17;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfo, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  if ( !titleInfo )
    goto LABEL_17;
  BonusSelectSummonPartyServantListViewManager__SetMode(
    (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
    2,
    v22);
  guideMsgLabel = this->fields.guideMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleInfo = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12511/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/, 0LL);
  if ( !guideMsgLabel
    || (UILabel__set_text(guideMsgLabel, (System_String_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B52A5C(titleInfo, v18);
  }
  CommonUI__SetFadeMaskCollider((CommonUI_o *)titleInfo, 1, 0LL);
  v24 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v24, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___Close_b__14_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AFF1F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFF1F = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___OnClickCancel_b__15_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AFF20 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFF20 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___Open_b__13_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AFF1E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFF1E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
  this->fields.state = 2;
}


BonusSelectSummonPartyOrganizationListViewItem_o *__fastcall BonusSelectSummonPartyServantSelectMenu__get_BaseItem(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.organizationItem;
}