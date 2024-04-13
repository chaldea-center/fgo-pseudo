void __fastcall BonusSelectSummonPartyServantSelectMenu___ctor(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E86A2 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E86A2 = 1;
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
  __int64 v3; // x3
  BonusSelectSummonPartyServantSelectMenu_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct ServantEntity_o *servantEntity; // x8
  struct BonusSelectSummonPartyOrganizationListViewItem_o *baseItem; // x9
  System_Action_o *v14; // x20

  v5 = this;
  if ( (byte_42E869F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__, v6, v7, v8);
    this = (BonusSelectSummonPartyServantSelectMenu_o *)sub_B5D5C4(
                                                          &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                          v9,
                                                          v10,
                                                          v11);
    byte_42E869F = 1;
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
  this = (BonusSelectSummonPartyServantSelectMenu_o *)v5->fields.organizationItem;
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
  this = (BonusSelectSummonPartyServantSelectMenu_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_14:
    sub_B5D69C(this, item);
  CommonUI__SetFadeMaskCollider((CommonUI_o *)this, 1, 0LL);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_BonusSelectSummonPartyServantSelectMenu__Close_b__14_0__, 0LL);
  BaseMenu__Close((BaseMenu_o *)v5, v14, 0LL);
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
    sub_B5D69C(0LL, method);
  ListViewManager__DestroyList(partyServantListViewManager, 0LL);
  this->fields.state = 0;
  this->fields.organizationItem = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.organizationItem, 0LL, v4, v5, v6, v7, v8, v9);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__OnClickCancel(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ListViewManager_o *partyServantListViewManager; // x0
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  System_Action_o *v17; // x20

  if ( (byte_42E86A0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__, v5, v6, v7);
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E86A0 = 1;
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
    v15 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__ + 75) & 2) != 0 )
      v15 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonPartyServantSelectMenu_OnClickCancel__);
    v16 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v15, v15[3]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0LL);
    partyServantListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( partyServantListViewManager )
    {
      CommonUI__SetFadeMaskCollider((CommonUI_o *)partyServantListViewManager, 1, 0LL);
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)this,
        Method_BonusSelectSummonPartyServantSelectMenu__OnClickCancel_b__15_0__,
        0LL);
      BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(partyServantListViewManager, method);
  }
}


void __fastcall BonusSelectSummonPartyServantSelectMenu__OnClickScaleChange(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  BonusSelectSummonPartyServantListViewManager_o *partyServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_42E86A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__, (_DWORD)method, v2, v3);
    byte_42E86A1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonPartyServantSelectMenu_OnClickScaleChange__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    partyServantListViewManager = this->fields.partyServantListViewManager;
    if ( !partyServantListViewManager
      || (BonusSelectSummonPartyServantListViewManager__ChangeIconScale(partyServantListViewManager, v7),
          (partyServantListViewManager = this->fields.partyServantListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          partyServantListViewManager = (BonusSelectSummonPartyServantListViewManager_o *)BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
                                                                                            partyServantListViewManager,
                                                                                            v7),
          !scaleChangeTabSprite) )
    {
      sub_B5D69C(partyServantListViewManager, v7);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v32; // x3
  UISprite_o *scaleChangeTabSprite; // x20
  const MethodInfo *v34; // x2
  UILabel_o *guideMsgLabel; // x20
  System_Action_o *v36; // x20

  if ( (byte_42E869E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)memberItem, (_DWORD)notPossibleSvtIdList, closeCallbackFunc);
    sub_B5D5C4(&Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_12570/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/, v21, v22, v23);
    byte_42E869E = 1;
  }
  this->fields.organizationItem = memberItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.organizationItem,
    (System_Int32_array **)memberItem,
    (System_String_array **)notPossibleSvtIdList,
    (System_String_array **)closeCallbackFunc,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  this->fields.closeCallbackFunc = closeCallbackFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)closeCallbackFunc,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 88, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setBackBtnSprite_18313300(titleInfo, 1, 0, 0, 0LL);
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
    v32);
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  if ( !titleInfo )
    goto LABEL_17;
  scaleChangeTabSprite = this->fields.scaleChangeTabSprite;
  titleInfo = (TitleInfoControl_o *)BonusSelectSummonPartyServantListViewManager__GetScaleButtonSpriteName(
                                      (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
                                      v30);
  if ( !scaleChangeTabSprite )
    goto LABEL_17;
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)titleInfo, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.partyServantListViewManager;
  if ( !titleInfo )
    goto LABEL_17;
  BonusSelectSummonPartyServantListViewManager__SetMode(
    (BonusSelectSummonPartyServantListViewManager_o *)titleInfo,
    2,
    v34);
  guideMsgLabel = this->fields.guideMsgLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleInfo = (TitleInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12570/*"SUMMON_BONUS_SELECT_MENU_GUIDE_MESSAGE"*/, 0LL);
  if ( !guideMsgLabel
    || (UILabel__set_text(guideMsgLabel, (System_String_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(titleInfo, v30);
  }
  CommonUI__SetFadeMaskCollider((CommonUI_o *)titleInfo, 1, 0LL);
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)this, Method_BonusSelectSummonPartyServantSelectMenu__Open_b__13_0__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v36, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___Close_b__14_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E86A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E86A4 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___OnClickCancel_b__15_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E86A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E86A5 = 1;
  }
  ActionExtensions__Call(this->fields.closeCallbackFunc, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonPartyServantSelectMenu___Open_b__13_0(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E86A3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E86A3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
  this->fields.state = 2;
}


BonusSelectSummonPartyOrganizationListViewItem_o *__fastcall BonusSelectSummonPartyServantSelectMenu__get_BaseItem(
        BonusSelectSummonPartyServantSelectMenu_o *this,
        const MethodInfo *method)
{
  return this->fields.organizationItem;
}