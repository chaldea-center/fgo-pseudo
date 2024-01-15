void __fastcall BonusSelectSummonPartyServantSelectMenu___ctor(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB137 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FB137 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  BonusSelectSummonPartyOrganizationListViewItem_o *organizationItem; // x0
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FB134 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, item);
    sub_B16FFC(&Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FB134 = 1;
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
  organizationItem = this->fields.organizationItem;
  if ( !organizationItem )
    goto LABEL_14;
  if ( (_DWORD)servantEntity )
    BonusSelectSummonPartyOrganizationListViewItem__Empty(organizationItem, (const MethodInfo *)item);
  else
    BonusSelectSummonPartyOrganizationListViewItem__Modify(organizationItem, item, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_14:
    sub_B170D4();
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
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
    sub_B170D4();
  ListViewManager__DestroyList(partyServantListViewManager, 0LL);
  this->fields.state = 0;
  this->fields.organizationItem = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.organizationItem, 0LL, v4, v5, v6, v7, v8, v9);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__OnClickCancel(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x20

  if ( (byte_40FB135 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__, v3);
    sub_B16FFC(&Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FB135 = 1;
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
    v7 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B17004(Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
      v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
      System_Action___ctor(
        v14,
        (Il2CppObject *)this,
        Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__,
        0LL);
      BaseMenu__Close((BaseMenu_o *)this, v14, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
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
  const MethodInfo *v7; // x1
  BonusSelectSummonPartyServantListViewManager_o *v8; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  if ( (byte_40FB136 & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__, method);
    byte_40FB136 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (BonusSelectSummonPartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v5),
          (v8 = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          ScaleButtonSpriteName = BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(v8, v7),
          !scaleChangeTabSprite) )
    {
      sub_B170D4();
    }
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x3
  BonusSelectSummonPartyServantListViewManager_o *partyServantListViewManager; // x0
  const MethodInfo *v27; // x1
  BonusSelectSummonPartyServantListViewManager_o *v28; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleButtonSpriteName; // x0
  const MethodInfo *v31; // x2
  BonusSelectSummonPartyServantListViewManager_o *v32; // x0
  UILabel_o *guideMsgLabel; // x20
  System_String_o *v34; // x0
  CommonUI_o *Instance; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x20

  if ( (byte_40FB133 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, memberItem);
    sub_B16FFC(&Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&StringLiteral_12367/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/, v15);
    byte_40FB133 = 1;
  }
  this->fields.organizationItem = memberItem;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.organizationItem,
    (System_Int32_array **)memberItem,
    (System_String_array **)notPossibleSvtIdList,
    (System_String_array **)closeCallbackFunc,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.closeCallbackFunc = closeCallbackFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallbackFunc,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 88, 0LL);
  v23 = this->fields.titleInfo;
  if ( !v23 )
    goto LABEL_17;
  TitleInfoControl__setBackBtnSprite_19608808(v23, 1, 0, 0, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !memberItem )
    goto LABEL_17;
  partyServantListViewManager = this->fields.partyServantListViewManager;
  this->fields.isSelectedSvt = memberItem->fields.servantEntity != 0LL;
  if ( !partyServantListViewManager )
    goto LABEL_17;
  BonusSelectSummonPartyServantListViewManager__CreateList(
    partyServantListViewManager,
    memberItem->fields.gachaBonusSelectEntity,
    notPossibleSvtIdList,
    v25);
  v28 = this->fields.partyServantListViewManager;
  if ( !v28 )
    goto LABEL_17;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  ScaleButtonSpriteName = BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(v28, v27);
  if ( !scaleChangeTabSprite )
    goto LABEL_17;
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  v32 = this->fields.partyServantListViewManager;
  if ( !v32 )
    goto LABEL_17;
  BonusSelectSummonPartyServantListViewManager__SetMode(v32, 2, v31);
  guideMsgLabel = this->fields.guideMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12367/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/, 0LL);
  if ( !guideMsgLabel
    || (UILabel__set_text(guideMsgLabel, v34, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v40, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___Close_b__14_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FB139 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FB139 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___OnClickCancel_b__15_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FB13A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FB13A = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___Open_b__13_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FB138 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FB138 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
  this->fields.state = 2;
}


BonusSelectSummonPartyOrganizationListViewItem_o *__fastcall BonusSelectSummonPartyServantSelectMenu__get_BaseItem(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.organizationItem;
}