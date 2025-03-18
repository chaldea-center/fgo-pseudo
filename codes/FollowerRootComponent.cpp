void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct FollowerRootComponent_StaticFields *static_fields; // x8

  if ( (byte_4C1CF08 & 1) == 0 )
  {
    sub_1C3B764(&FollowerRootComponent_TypeInfo, v1);
    byte_4C1CF08 = 1;
  }
  static_fields = FollowerRootComponent_TypeInfo->static_fields;
  static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  *(_QWORD *)&static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 0xA0000001BLL;
  static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C1CF07 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1CF07 = 1;
  }
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(&this->fields.backupBgmName);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C1CEEE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, result);
    byte_4C1CEEE = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, 0LL);
}


void __fastcall FollowerRootComponent__CallbackInitRecommendFollowerRequest(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x1

  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  this->fields.isInitRecommendRequest = 1;
  if ( !operationItemListViewManager )
    sub_1C3B9C0(0LL, result);
  ListViewManager__SetEmptyMessageBase(operationItemListViewManager, 1, 0LL);
  FollowerRootComponent__Init(this, v5);
}


void __fastcall FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v8; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerSelectItemListViewManager_o *v10; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x21

  if ( (byte_4C1CEFF & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, result);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1C3B764(&RandomLimitCountManager_TypeInfo, v5);
    byte_4C1CEFF = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_12;
  v8 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo
    || !v8
    || (FollowerSelectItemListViewManager__CreateList(
          v8,
          (int32_t)operationItemListViewManager,
          battleSetupInfo->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          battleSetupInfo->fields.questRestrictionInfo,
          0LL),
        v10 = this->fields.operationItemListViewManager,
        v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v10)
    || (FollowerSelectItemListViewManager__SetMode(v10, 2, v11, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_12:
    sub_1C3B9C0(operationItemListViewManager, v6);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1CEF3 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4C1CEF3 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C3B9C0(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServantEquip(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1CEF6 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4C1CEF6 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C3B9C0(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_4C1CF01 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_8803/*"Mesh data array start index can't be negative."*/, method);
    byte_4C1CF01 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_1C3B9C0(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8803/*"Mesh data array start index can't be negative."*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v6; // x20

  if ( (byte_4C1CEE6 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v4);
    byte_4C1CEE6 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_1C3B9C0(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v6 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v6, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4C1CEE8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v4);
    byte_4C1CEE8 = 1;
  }
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v5, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4C1CEE7 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&AtlasManager_TypeInfo, v3);
    sub_1C3B764(&Method_FollowerRootComponent_EndLoadEventAtlas__, v4);
    byte_4C1CEE7 = 1;
  }
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v5, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadPartyOrganizationAtlas(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C1CEE9 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4C1CEE9 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_15;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_40100344((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_15;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v5);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_15;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v6);
        return;
      }
    }
LABEL_15:
    sub_1C3B9C0(operationItemListViewManager, method);
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1CF05 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4C1CF05 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C3B9C0(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRecommendRefreshConfirm(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  FollowerRecommendSupportListRequest_o *v13; // x20
  struct BattleSetupInfo_o *v14; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21

  v4 = this;
  if ( (byte_4C1CEFE & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1C3B764(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1C3B764(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1C3B764(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4C1CEFE = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v4->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_18;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v4->fields.titleInfo;
      if ( !this )
        goto LABEL_18;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v13 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v14 = v4->fields.battleSetupInfo;
      if ( v14 )
      {
        if ( v13 )
        {
          FollowerRecommendSupportListRequest__beginRequest(v13, 1, (int32_t)this, v14->fields.questPhase, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1C3B9C0(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v16, 0LL);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRefreshConfirm(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  FollowerListRequest_o *v13; // x20
  struct BattleSetupInfo_o *v14; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21

  v4 = this;
  if ( (byte_4C1CEFD & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide);
    sub_1C3B764(&Method_FollowerRootComponent_CallbackRefresh__, v5);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v6);
    sub_1C3B764(&Method_NetworkManager_getRequest_FollowerListRequest___, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    this = (FollowerRootComponent_o *)sub_1C3B764(
                                        &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                        v10);
    byte_4C1CEFD = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v4->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_18;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v4->fields.titleInfo;
      if ( !this )
        goto LABEL_18;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_18;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
    }
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)v4,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v4->fields.battleSetupInfo )
    {
      v13 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
      v14 = v4->fields.battleSetupInfo;
      if ( v14 )
      {
        if ( v13 )
        {
          FollowerListRequest__beginRequest(v13, 1, (int32_t)this, v14->fields.questPhase, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1C3B9C0(this, isDecide);
  }
  operationItemListViewManager = v4->fields.operationItemListViewManager;
  v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)v4,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v16, 0LL);
  this = (FollowerRootComponent_o *)v4->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_18;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1CF00 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4C1CF00 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C3B9C0(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServant(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C1CEF2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_FollowerRootComponent_EndCloseShowServant__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1CEF2 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_1C3B9C0(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServantEquip(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_4C1CEF5 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, isDecide);
    sub_1C3B764(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1CEF5 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_1C3B9C0(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4C1CF06 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4C1CF06 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v5 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_1C3B9C0(v6, v7);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v5, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v6; // x21

  if ( (byte_4C1CF03 & 1) == 0 )
  {
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v3);
    byte_4C1CF03 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v6 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_1C3B9C0(titleInfo, method);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  bool IsUnderVista; // w22
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21
  float v10; // s0
  float v11; // s3
  float v12; // s4
  int v13; // s1
  int v14; // s5
  int v15; // s6

  if ( (byte_4C1CF04 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&FSUtility_TypeInfo, v3);
    sub_1C3B764(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C1CF04 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  IsUnderVista = FSUtility__IsUnderVista(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !Instance )
LABEL_12:
    sub_1C3B9C0(tutorialMaskBase2, method);
  v10 = -12.0;
  v11 = -492.0;
  if ( IsUnderVista )
    v11 = -500.0;
  if ( IsUnderVista )
    v10 = -20.0;
  v12 = -14.0;
  v13 = 1120403456;
  v14 = 1148846080;
  v15 = 1125515264;
  CommonUI__OpenTutorialArrowMark(
    (CommonUI_o *)Instance,
    *(UnityEngine_Vector2_o *)&v10,
    0.0,
    *(UnityEngine_Rect_o *)&v11,
    v9,
    0LL);
}


BattleSetupInfo_o *__fastcall FollowerRootComponent__GetBattleSetupInfo(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSetupInfo;
}


void __fastcall FollowerRootComponent__Init(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 battleSetupInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v19; // x8
  int32_t InitialDisplayClass; // w20
  Il2CppObject *v21; // x20
  struct BattleSetupInfo_o *v22; // x8
  FollowerSelectItemListViewManager_o *v23; // x20
  struct BattleSetupInfo_o *v24; // x8
  PartyOrganizationUtility_o *v25; // x20
  FollowerRootComponent___c_c *v26; // x8
  System_Action_o *_9__50_0; // x21
  Il2CppObject *v28; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  FollowerSelectItemListViewManager_o *v30; // x20
  System_Action_o *v31; // x21
  NetworkManager_ResultCallbackFunc_o *v32; // x20
  FollowerRecommendSupportListRequest_o *v33; // x20
  struct BattleSetupInfo_o *v34; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C1CEEF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&ClassButtonControlComponent_TypeInfo, v3);
    sub_1C3B764(&Method_DataManager_GetMaster_UserRecommendFollowerMaster___, v4);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(
      &Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1C3B764(&Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__, v7);
    sub_1C3B764(&Method_FollowerRootComponent_OnMoveEnd__, v8);
    sub_1C3B764(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v9);
    sub_1C3B764(&NetworkManager_TypeInfo, v10);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1C3B764(&Method_FollowerRootComponent___c__Init_b__50_0__, v14);
    sub_1C3B764(&FollowerRootComponent___c_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_8803/*"Mesh data array start index can't be negative."*/, v16);
    byte_4C1CEEF = 1;
  }
  entity = 0LL;
  if ( !this->fields.state )
  {
    if ( this->fields.isInitRecommendRequest )
      goto LABEL_19;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    operationItemListViewManager = this->fields.operationItemListViewManager;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v19 = this->fields.battleSetupInfo;
    if ( !v19 || !operationItemListViewManager )
      goto LABEL_50;
    InitialDisplayClass = FollowerSelectItemListViewManager__GetInitialDisplayClass(
                            operationItemListViewManager,
                            battleSetupInfo,
                            v19->fields.questPhase,
                            1,
                            0LL);
    if ( !ClassButtonControlComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ClassButtonControlComponent_TypeInfo);
    if ( !ClassButtonControlComponent__IsRecommendSupportGroupType(InitialDisplayClass, 0LL) )
      goto LABEL_19;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    battleSetupInfo = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserRecommendFollowerMaster___);
    if ( !battleSetupInfo )
      goto LABEL_50;
    if ( !DataMasterBase_object__object__long___TryGetSingleEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)battleSetupInfo,
            &entity,
            (const MethodInfo_329D4D0 *)Method_DataMasterBase_UserRecommendFollowerMaster__UserRecommendFollowerEntity__long__TryGetSingleEntity__) )
      goto LABEL_41;
    battleSetupInfo = (__int64)this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_50;
    v21 = entity;
    battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
    v22 = this->fields.battleSetupInfo;
    if ( !v22 || !v21 )
      goto LABEL_50;
    if ( UserRecommendFollowerEntity__IsEnableSupport(
           (UserRecommendFollowerEntity_o *)v21,
           battleSetupInfo,
           v22->fields.questPhase,
           0LL) )
    {
LABEL_19:
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      battleSetupInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)battleSetupInfo, 0LL);
      if ( !battleSetupInfo )
        goto LABEL_50;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleSetupInfo, 1, 0LL);
      battleSetupInfo = (__int64)this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_50;
      v23 = this->fields.operationItemListViewManager;
      battleSetupInfo = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)battleSetupInfo, 0LL);
      v24 = this->fields.battleSetupInfo;
      if ( !v24 )
        goto LABEL_50;
      if ( !v23 )
        goto LABEL_50;
      FollowerSelectItemListViewManager__CreateList(
        v23,
        battleSetupInfo,
        v24->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v24->fields.questRestrictionInfo,
        0LL);
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      if ( ListViewManager__get_ItemSum((ListViewManager_o *)battleSetupInfo, 0LL) > 0 )
        goto LABEL_28;
      battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
      if ( !battleSetupInfo )
        goto LABEL_50;
      if ( FollowerSelectItemListViewManager__GetItemCount((FollowerSelectItemListViewManager_o *)battleSetupInfo, 0LL) < 1 )
      {
        battleSetupInfo = (__int64)this->fields.myFSM;
        this->fields.selectItemNum = -1;
        if ( battleSetupInfo )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)battleSetupInfo, (System_String_o *)StringLiteral_8803/*"Mesh data array start index can't be negative."*/, 0LL);
          return;
        }
      }
      else
      {
LABEL_28:
        battleSetupInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !battleSetupInfo )
          goto LABEL_50;
        if ( *(_BYTE *)(battleSetupInfo + 148) )
        {
          battleSetupInfo = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          v25 = (PartyOrganizationUtility_o *)battleSetupInfo;
          v26 = FollowerRootComponent___c_TypeInfo;
          if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
            v26 = FollowerRootComponent___c_TypeInfo;
          }
          _9__50_0 = v26->static_fields->__9__50_0;
          if ( !_9__50_0 )
          {
            if ( !v26->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v26);
              v26 = FollowerRootComponent___c_TypeInfo;
            }
            v28 = (Il2CppObject *)v26->static_fields->__9;
            _9__50_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
            System_Action___ctor(_9__50_0, v28, Method_FollowerRootComponent___c__Init_b__50_0__, 0LL);
            static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            static_fields->__9__50_0 = _9__50_0;
            battleSetupInfo = sub_1C3B708(&static_fields->__9__50_0);
          }
          if ( !v25 )
            goto LABEL_50;
          PartyOrganizationUtility__OpenFriendshipUpItemExpiredDialog(v25, _9__50_0, 0LL);
        }
        this->fields.state = 2;
        v30 = this->fields.operationItemListViewManager;
        v31 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
        if ( v30 )
        {
          FollowerSelectItemListViewManager__SetMode_31886048(v30, 1, v31, 0LL);
          return;
        }
      }
    }
    else
    {
LABEL_41:
      v32 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v32,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_CallbackInitRecommendFollowerRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      battleSetupInfo = (__int64)NetworkManager__getRequest_object_(
                                   v32,
                                   (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( this->fields.battleSetupInfo )
      {
        v33 = (FollowerRecommendSupportListRequest_o *)battleSetupInfo;
        battleSetupInfo = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v34 = this->fields.battleSetupInfo;
        if ( v34 )
        {
          if ( v33 )
          {
            FollowerRecommendSupportListRequest__beginRequest(v33, 0, battleSetupInfo, v34->fields.questPhase, 0LL);
            battleSetupInfo = (__int64)this->fields.operationItemListViewManager;
            if ( battleSetupInfo )
            {
              ListViewManager__SetEmptyMessageBase((ListViewManager_o *)battleSetupInfo, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C3B9C0(battleSetupInfo, method);
  }
}


void __fastcall FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  void *Instance; // x0
  __int64 v24; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 methodPtr_low; // x10
  UnityEngine_Component_o *v27; // x20
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  _QWORD *monitor; // x8
  int v31; // w8
  void *v32; // x19
  unsigned int v33; // w20
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v37; // x8
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  TerminalPramsManager_c *v40; // x0
  int lastPlayQuestConsumeAp; // w21
  System_String_o **v42; // x8
  System_String_o *v43; // x20
  System_String_o *v44; // x21
  Il2CppObject *v45; // x22
  System_String_o *v46; // x23
  System_String_o *v47; // x24
  CommonConfirmDialog_ClickDelegate_o *v48; // x25

  if ( (byte_4C1CF02 & 1) == 0 )
  {
    sub_1C3B764(&BattleRootComponent_TypeInfo, method);
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v4);
    sub_1C3B764(&Method_FollowerRootComponent_OnClickBack__, v5);
    sub_1C3B764(&Method_FollowerRootComponent__OnClickBack_b__71_0__, v6);
    sub_1C3B764(&FollowerRootComponent_TypeInfo, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v14);
    sub_1C3B764(&StringLiteral_6569/*"Field "*/, v15);
    sub_1C3B764(&StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, v16);
    sub_1C3B764(&StringLiteral_6568/*"Fgo_20240306_1"*/, v17);
    sub_1C3B764(&StringLiteral_6567/*"Fgo_20230514_1"*/, v18);
    sub_1C3B764(&StringLiteral_3802/*"COSTUME_SERVANT_LIST_MSG"*/, v19);
    sub_1C3B764(&StringLiteral_3807/*"CP00858"*/, v20);
    sub_1C3B764(&StringLiteral_1/*""*/, v21);
    sub_1C3B764(&StringLiteral_3567/*"COMBINE_HELP_COMBINE_NP"*/, v22);
    byte_4C1CF02 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    if ( !*((_BYTE *)Instance + 148) )
      goto LABEL_34;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_62;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0LL);
    if ( StackedRootComponent
      && (methodPtr_low = LOBYTE(BattleRootComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(StackedRootComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleRootComponent_TypeInfo )
        v27 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
    {
      v28 = Method_FollowerRootComponent_OnClickBack__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnClickBack__);
      v29 = (System_Reflection_MethodBase_o *)sub_1C3B748(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0, 0LL);
      this->fields.state = 4;
      if ( v27 )
      {
        Instance = UnityEngine_Component__get_gameObject(v27, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          monitor = v27[3].monitor;
          if ( monitor )
          {
            Instance = (void *)monitor[64];
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v27, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_object__50230908(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_2FE767C *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v31 = *((_DWORD *)Instance + 6);
                    v32 = Instance;
                    if ( v31 < 1 )
                      return;
                    v33 = 0;
                    while ( 1 )
                    {
                      if ( v33 >= v31 )
                        sub_1C3B9C8(Instance, v24);
                      Instance = (void *)*((_QWORD *)v32 + (int)v33 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      v31 = *((_DWORD *)v32 + 6);
                      if ( (int)++v33 >= v31 )
                        return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
LABEL_34:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_40;
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_62;
      if ( *((_BYTE *)Instance + 161) )
      {
LABEL_40:
        v34 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnClickBack__);
        v35 = (System_Reflection_MethodBase_o *)sub_1C3B748(v34, v34[4]);
        OverwriteAssetSoundName__PlaySystemSe(v35, 1, 0, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          Instance = this->fields.myFSM;
          if ( Instance )
          {
            if ( battleSetupInfo->fields.isChildFollower )
              v37 = &StringLiteral_3567/*"COMBINE_HELP_COMBINE_NP"*/;
            else
              v37 = &StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/;
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v37, 0LL);
            return;
          }
        }
      }
      else
      {
        v38 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 83) & 2) != 0 )
          v38 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnClickBack__);
        v39 = (System_Reflection_MethodBase_o *)sub_1C3B748(v38, v38[4]);
        OverwriteAssetSoundName__PlaySystemSe(v39, 1, 0, 0LL);
        v40 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v40 = TerminalPramsManager_TypeInfo;
        }
        lastPlayQuestConsumeAp = v40->static_fields->lastPlayQuestConsumeAp;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v42 = (System_String_o **)&StringLiteral_6568/*"Fgo_20240306_1"*/;
        if ( lastPlayQuestConsumeAp <= 0 )
          v42 = (System_String_o **)&StringLiteral_6569/*"Field "*/;
        v43 = LocalizationManager__Get(*v42, 0LL);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_6567/*"Fgo_20230514_1"*/, 0LL);
        v45 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3807/*"CP00858"*/, 0LL);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3802/*"COSTUME_SERVANT_LIST_MSG"*/, 0LL);
        v48 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v48,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__71_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v45 )
        {
          CommonUI__OpenConfirmDecideDlg(
            (CommonUI_o *)v45,
            v44,
            v43,
            v46,
            v47,
            v48,
            *(_DWORD *)(*((_QWORD *)Instance + 23) + 16LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 20LL),
            (float)*(int *)(*((_QWORD *)Instance + 23) + 24LL),
            0,
            0,
            0,
            240,
            0,
            1,
            0,
            0,
            0LL);
          return;
        }
      }
    }
LABEL_62:
    sub_1C3B9C0(Instance, v24);
  }
}


void __fastcall FollowerRootComponent__OnMoveEnd(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t tutorialMode; // w8
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x21
  System_Action_o *v16; // x0
  __int64 *v17; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v20; // x8
  struct BattleSetupInfo_o *v21; // x8
  int32_t v22; // w20
  System_Action_o *v23; // x21
  struct BattleSetupInfo_o *v24; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v26; // x21
  const MethodInfo *v27; // x1
  System_Action_o *v28; // x22

  if ( (byte_4C1CEFB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1C3B764(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v4);
    sub_1C3B764(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v5);
    sub_1C3B764(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v6);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v7);
    sub_1C3B764(&LocalizationManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1C3B764(&StringLiteral_13789/*"The operation was canceled."*/, v11);
    sub_1C3B764(&StringLiteral_13788/*"The operation is not allowed on non-stream oriented sockets."*/, v12);
    byte_4C1CEFB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13789/*"The operation was canceled."*/, 0LL);
        v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        v17 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_25:
        v28 = v16;
        System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0LL);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog((CommonUI_o *)Instance, v15, -1, v28, 0LL);
          return;
        }
LABEL_27:
        sub_1C3B9C0(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_13788/*"The operation is not allowed on non-stream oriented sockets."*/, 0LL);
        v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        v17 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
        goto LABEL_25;
      }
    }
    else
    {
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_27;
      eventId = battleSetupInfo->fields.eventId;
      battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
      v20 = this->fields.battleSetupInfo;
      if ( !v20 )
        goto LABEL_27;
      battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                               eventId,
                                               15,
                                               (int32_t)battleSetupInfo,
                                               v20->fields.questPhase,
                                               0,
                                               0,
                                               0LL);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v21 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v21 )
        {
          v22 = v21->fields.eventId;
          v23 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
          System_Action___ctor(
            v23,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
            0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
            v24 = this->fields.battleSetupInfo;
            if ( v24 )
            {
              EventTutorialMaster__CheckTutorial(
                v22,
                15,
                v23,
                (int32_t)battleSetupInfo,
                v24->fields.questPhase,
                0,
                0,
                0LL);
              return;
            }
          }
        }
        goto LABEL_27;
      }
      this->fields.state = 3;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v26 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_27;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v26, 0LL);
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_27;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0LL) )
        FollowerRootComponent__StartBattleSetupMenu(this, v27);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__OnSelectFollowerItem(
        FollowerRootComponent_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  FollowerRootComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  __int64 v47; // x8
  __int64 v48; // x20
  SkillInfo_o *v49; // x22
  _QWORD *v50; // x0
  System_Reflection_MethodBase_o *v51; // x0
  Il2CppObject *v52; // x20
  System_String_o *v53; // x20
  System_String_o *v54; // x21
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  int32_t v60; // w20
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v64; // x0
  intptr_t v65; // w2
  _QWORD *v66; // x0
  System_Reflection_MethodBase_o *v67; // x0
  const MethodInfo *v68; // x2
  __int64 v69; // x20
  SkillInfo_o *v70; // x24
  Il2CppObject *Entity; // x21
  FollowerRootComponent_o *v72; // x20
  System_String_o *v73; // x21
  System_String_o *v74; // x22
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  FollowerRootComponent_o *v83; // x21
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  int32_t tutorialMode; // w21
  System_String_o *v87; // x20
  _QWORD *v88; // x0
  System_Reflection_MethodBase_o *v89; // x0
  bool v90; // w22
  CommonConfirmDialog_ClickDelegate_o *v91; // x21
  bool v92; // w20
  CommonConfirmDialog_o *commonConfirmDialog; // x19
  System_String_o *v94; // x20
  FollowerRootComponent_o *v95; // x22
  int32_t v96; // w8
  _QWORD *v97; // x0
  System_Reflection_MethodBase_o *v98; // x0
  FollowerRootComponent_o *v99; // x20
  FollowerRootComponent_o *v100; // x20
  FollowerRootComponent___c_c *v101; // x8
  System_Action_o *_9__65_0; // x21
  Il2CppObject *v103; // x22
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0
  _QWORD *v105; // x0
  System_Reflection_MethodBase_o *v106; // x0
  int32_t v107; // w8
  __int64 *v108; // x8
  FollowerRootComponent_o *v109; // x20
  _QWORD *v110; // x0
  System_Reflection_MethodBase_o *v111; // x0
  const MethodInfo *v112; // x2
  _QWORD *v113; // x0
  System_Reflection_MethodBase_o *v114; // x0
  int32_t v115; // w8
  struct BattleSetupInfo_o *v116; // x8
  NetworkManager_ResultCallbackFunc_o *v117; // x20
  FollowerRecommendSupportListRequest_o *v118; // x20
  struct BattleSetupInfo_o *v119; // x8
  Il2CppObject *Instance; // x20
  System_String_o *v121; // x21
  System_String_o *v122; // x22
  System_Action_o *v123; // x23
  int tutorialMode_low; // w20
  _QWORD *v125; // x0
  FollowerSelectItemListViewItem_o *v126; // x20
  const MethodInfo *v127; // x1
  __int64 v128; // x21
  __int64 v129; // x22
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t userEquipId; // x21
  __int64 v132; // x22
  const MethodInfo *v133; // x1
  const MethodInfo *v134; // x1
  EquipTargetInfo_o *EquipInfo; // x21
  __int64 v136; // x22
  __int64 v137; // x23
  _QWORD *v138; // x0
  System_Reflection_MethodBase_o *v139; // x0
  const MethodInfo *v140; // x3
  struct FollowerInfo_o *followerInfo; // x8
  int32_t type; // w8
  int32_t v143; // w2
  _QWORD *v144; // x0
  FollowerSelectItemListViewManager_CallbackFunc_o *v145; // x21
  int32_t v146; // w1
  _QWORD *v147; // x0
  System_Reflection_MethodBase_o *v148; // x0
  Il2CppObject *v149; // x20
  System_Action_o *v150; // x21
  int m_CancellationTokenSource; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+34h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+40h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+48h] [xbp-58h] BYREF
  System_String_o *v156; // [xsp+50h] [xbp-50h] BYREF
  System_String_o *v157; // [xsp+58h] [xbp-48h] BYREF
  SkillInfo_array *v158; // [xsp+68h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16

  v6 = this;
  if ( (byte_4C1CEFC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C3B764(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillLvMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillLvMaster___, v11);
    sub_1C3B764(&Method_DataManager_GetMaster_SkillMaster___, v12);
    sub_1C3B764(&DataManager_TypeInfo, v13);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v14);
    sub_1C3B764(&FollowerListRequest_TypeInfo, v15);
    sub_1C3B764(&FollowerRecommendSupportListRequest_TypeInfo, v16);
    sub_1C3B764(&Method_FollowerRootComponent_CallbackRefresh__, v17);
    sub_1C3B764(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v18);
    sub_1C3B764(&Method_FollowerRootComponent_EndRecommendRefreshConfirm__, v19);
    sub_1C3B764(&Method_FollowerRootComponent_EndRefreshConfirm__, v20);
    sub_1C3B764(&Method_FollowerRootComponent_EndRefreshRest__, v21);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v22);
    sub_1C3B764(&FollowerRootComponent_TypeInfo, v23);
    sub_1C3B764(&int_TypeInfo, v24);
    sub_1C3B764(&LocalizationManager_TypeInfo, v25);
    sub_1C3B764(&Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___, v26);
    sub_1C3B764(&NetworkManager_TypeInfo, v27);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v29);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v32);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v33);
    sub_1C3B764(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, v34);
    sub_1C3B764(&FollowerRootComponent___c_TypeInfo, v35);
    sub_1C3B764(&StringLiteral_6592/*"File name too long"*/, v36);
    sub_1C3B764(&StringLiteral_8803/*"Mesh data array start index can't be negative."*/, v37);
    sub_1C3B764(&StringLiteral_8812/*"Message too long"*/, v38);
    sub_1C3B764(&StringLiteral_6589/*"Figure"*/, v39);
    sub_1C3B764(&StringLiteral_117/*"   "*/, v40);
    sub_1C3B764(&StringLiteral_6590/*"File must be smaller than 4K"*/, v41);
    sub_1C3B764(&StringLiteral_8699/*"Mapping for neutral culture "*/, v42);
    sub_1C3B764(&StringLiteral_3012/*"BZip2InputStream Write not supported"*/, v43);
    sub_1C3B764(&StringLiteral_1/*""*/, v44);
    this = (FollowerRootComponent_o *)sub_1C3B764(&StringLiteral_6591/*"File name cannot be null."*/, v45);
    byte_4C1CEFC = 1;
  }
  v158 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  if ( v6->fields.state != 3 )
    return;
  v6->fields.selectItemNum = n;
  switch ( kind )
  {
    case 1:
      if ( v6->fields.tutorialState )
        goto LABEL_107;
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_189;
      v109 = this;
      if ( LOBYTE(this->fields.tutorialMode)
        || FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) <= 0 )
      {
        goto LABEL_168;
      }
      v110 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v110 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v111 = (System_Reflection_MethodBase_o *)sub_1C3B748(v110, v110[4]);
      OverwriteAssetSoundName__PlaySystemSe(v111, 0, 0, 0LL);
      FollowerRootComponent__SelectShowServant(v6, (FollowerSelectItemListViewItem_o *)v109, v112);
      return;
    case 2:
    case 3:
    case 4:
      v66 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v66 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v67 = (System_Reflection_MethodBase_o *)sub_1C3B748(v66, v66[4]);
      OverwriteAssetSoundName__PlaySystemSe(v67, 0, 0, 0LL);
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          v6->fields.selectItemNum,
                                          0LL);
      v69 = kind == 3 ? 1LL : 2LL * (kind == 4);
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &v158,
                                          v68);
      if ( !v158 )
        goto LABEL_189;
      if ( (unsigned int)v69 >= v158->max_length )
        goto LABEL_190;
      v70 = v158->m_Items[v69];
      if ( !v70 || v70->fields.id < 1 || v70->fields.lv < 1 )
        goto LABEL_156;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !this )
        goto LABEL_189;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                 v70->fields.id,
                 (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)this,
                                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                          (SkillLvMaster_o *)this,
                                          v70->fields.id,
                                          v70->fields.lv,
                                          0LL);
      if ( !Entity )
        goto LABEL_189;
      v72 = this;
      SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &v157, &v156, v70->fields.lv, 0LL);
      v73 = v157;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"Mapping for neutral culture "*/, 0LL);
      lv = v70->fields.lv;
      v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v75, v76, v77);
      v79 = System_String__Format(v74, v78, 0LL);
      v157 = System_String__Concat_63379872(v73, (System_String_o *)StringLiteral_117/*"   "*/, v79, 0LL);
      this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3012/*"BZip2InputStream Write not supported"*/, 0LL);
      if ( !v72 )
        goto LABEL_189;
      v83 = this;
      m_CancellationTokenSource = (int)v72->fields.m_CancellationTokenSource;
      v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v80, v81, v82);
      v85 = System_String__Format((System_String_o *)v83, v84, 0LL);
      tutorialMode = v6->fields.tutorialMode;
      v87 = v85;
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_189;
      if ( tutorialMode == 3 )
        CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)this, v157, v87, v156, 0LL);
      else
        CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)this, v157, v87, v156, 1, 0, 0LL);
LABEL_156:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v64 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v65 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_173;
    case 5:
      if ( !v6->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_189;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_189;
        tutorialMode_low = LOBYTE(this->fields.tutorialMode);
        v125 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v125 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v98 = (System_Reflection_MethodBase_o *)sub_1C3B748(v125, v125[4]);
        if ( !tutorialMode_low )
          goto LABEL_134;
        goto LABEL_171;
      }
      v96 = v6->fields.tutorialMode;
      if ( v96 == 3 )
      {
        v147 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v147 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v148 = (System_Reflection_MethodBase_o *)sub_1C3B748(v147, v147[4]);
        OverwriteAssetSoundName__PlaySystemSe(v148, 2, 0, 0LL);
        goto LABEL_180;
      }
      if ( v96 == 2 )
      {
        v97 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v97 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v98 = (System_Reflection_MethodBase_o *)sub_1C3B748(v97, v97[4]);
LABEL_134:
        OverwriteAssetSoundName__PlaySystemSe(v98, 0, 0, 0LL);
        this = (FollowerRootComponent_o *)v6->fields.myFSM;
        if ( this )
        {
          v108 = &StringLiteral_8812/*"Message too long"*/;
          goto LABEL_136;
        }
        goto LABEL_189;
      }
      return;
    case 6:
      if ( !v6->fields.tutorialState )
      {
        this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
        if ( !this )
          goto LABEL_189;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                            (FollowerSelectItemListViewManager_o *)this,
                                            n,
                                            0LL);
        if ( !this )
          goto LABEL_189;
        v126 = (FollowerSelectItemListViewItem_o *)this;
        if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                (FollowerSelectItemListViewItem_o *)this,
                *(const MethodInfo **)&kind) )
          goto LABEL_157;
        this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v126, v127);
        if ( !this )
          goto LABEL_189;
        v129 = *(_QWORD *)&this->fields.manualWidth;
        v128 = *(_QWORD *)&this->fields.kind;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v159.fields.currentCryptoKey = v129;
        *(_QWORD *)&v159.fields.fakeValue = v128;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v159, 0LL) >= 1 )
        {
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v126, v127);
          if ( !this )
            goto LABEL_189;
          if ( !this->fields.battleSetupInfo )
            goto LABEL_168;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(
                                              v126,
                                              *(const MethodInfo **)&kind);
          if ( !this )
            goto LABEL_189;
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( !battleSetupInfo )
            goto LABEL_189;
          v132 = *(_QWORD *)&battleSetupInfo->fields.boostId;
          userEquipId = battleSetupInfo->fields.userEquipId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v160.fields.currentCryptoKey = v132;
          *(_QWORD *)&v160.fields.fakeValue = userEquipId;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v160, 0LL) < 1 )
            goto LABEL_168;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v126, v133);
          if ( !this )
            goto LABEL_189;
          if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)this, 0LL) )
            goto LABEL_168;
          this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__get_ServantLeader(v126, v134);
          if ( !this )
            goto LABEL_189;
          EquipInfo = (EquipTargetInfo_o *)this->fields.battleSetupInfo;
        }
        else
        {
LABEL_157:
          EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v126, v127);
        }
        if ( EquipInfo )
        {
          v137 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v136 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v161.fields.currentCryptoKey = v137;
          *(_QWORD *)&v161.fields.fakeValue = v136;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v161, 0LL) >= 1 )
          {
            v138 = Method_FollowerRootComponent_OnSelectFollowerItem__;
            if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
              v138 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
            v139 = (System_Reflection_MethodBase_o *)sub_1C3B748(v138, v138[4]);
            OverwriteAssetSoundName__PlaySystemSe(v139, 0, 0, 0LL);
            followerInfo = v126->fields.followerInfo;
            if ( followerInfo )
            {
              type = followerInfo->fields.type;
              if ( type == 1 )
              {
                v143 = 13;
                goto LABEL_186;
              }
              if ( type == 5 )
              {
                v143 = 14;
LABEL_186:
                FollowerRootComponent__SelectShowServantEquip(v6, EquipInfo, v143, v140);
                return;
              }
            }
            if ( v126->fields.isNpc )
              v143 = 19;
            else
              v143 = 16;
            goto LABEL_186;
          }
        }
LABEL_168:
        v144 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v144 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v98 = (System_Reflection_MethodBase_o *)sub_1C3B748(v144, v144[4]);
LABEL_171:
        OverwriteAssetSoundName__PlaySystemSe(v98, 2, 0, 0LL);
LABEL_172:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v64 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        v65 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
LABEL_173:
        v145 = v64;
        FollowerSelectItemListViewManager_CallbackFunc___ctor(v64, (Il2CppObject *)v6, v65, 0LL);
        if ( !operationItemListViewManager )
          goto LABEL_189;
        v146 = 2;
        goto LABEL_175;
      }
LABEL_107:
      v113 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v113 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v114 = (System_Reflection_MethodBase_o *)sub_1C3B748(v113, v113[4]);
      OverwriteAssetSoundName__PlaySystemSe(v114, 2, 0, 0LL);
      v115 = v6->fields.tutorialMode;
      if ( v115 == 3 )
      {
LABEL_180:
        operationItemListViewManager = v6->fields.operationItemListViewManager;
        v145 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v145,
          (Il2CppObject *)v6,
          (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL);
        if ( !operationItemListViewManager )
          goto LABEL_189;
        v146 = 4;
LABEL_175:
        FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, v146, v145, 0LL);
        return;
      }
      if ( v115 == 2 )
        goto LABEL_172;
      return;
    case 7:
    case 13:
      v88 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v88 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v89 = (System_Reflection_MethodBase_o *)sub_1C3B748(v88, v88[4]);
      OverwriteAssetSoundName__PlaySystemSe(v89, 0, 0, 0LL);
      if ( !FollowerListRequest_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
      v90 = FollowerListRequest__checkRefreshRate(0LL);
      v91 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(
        v91,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_EndRefreshConfirm__,
        0LL);
      if ( kind == 13 )
      {
        if ( !FollowerRecommendSupportListRequest_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FollowerRecommendSupportListRequest_TypeInfo);
        v92 = FollowerRecommendSupportListRequest__CheckRefreshRate(0LL);
        v91 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C3B9B0(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v91,
          (Il2CppObject *)v6,
          Method_FollowerRootComponent_EndRecommendRefreshConfirm__,
          0LL);
        if ( v92 )
        {
LABEL_62:
          commonConfirmDialog = v6->fields.commonConfirmDialog;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_6592/*"File name too long"*/, 0LL);
          this = (FollowerRootComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6589/*"Figure"*/, 0LL);
          v95 = this;
          if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_31207640(
              commonConfirmDialog,
              v94,
              (System_String_o *)v95,
              1,
              v91,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0LL);
            return;
          }
          goto LABEL_189;
        }
      }
      else if ( v90 )
      {
        goto LABEL_62;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v121 = LocalizationManager__Get((System_String_o *)StringLiteral_6591/*"File name cannot be null."*/, 0LL);
      v122 = LocalizationManager__Get((System_String_o *)StringLiteral_6590/*"File must be smaller than 4K"*/, 0LL);
      v123 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v123, (Il2CppObject *)v6, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenNotificationDialog(
          (CommonUI_o *)Instance,
          v121,
          v122,
          v123,
          -1,
          0,
          0,
          0,
          0,
          0,
          1,
          0,
          0LL,
          0.0,
          0LL);
        return;
      }
      goto LABEL_189;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      v47 = (unsigned int)(kind - 9);
      v48 = (unsigned int)v47 < 4 ? v47 + 1 : 0LL;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                          (FollowerSelectItemListViewItem_o *)this,
                                          &skillInfoList,
                                          this->fields.tutorialMode,
                                          v46);
      if ( !skillInfoList )
        goto LABEL_189;
      if ( (unsigned int)v48 >= skillInfoList->max_length )
LABEL_190:
        sub_1C3B9C8(this, *(_QWORD *)&kind);
      v49 = skillInfoList->m_Items[v48];
      if ( v49 && v49->fields.id >= 1 && v49->fields.lv >= 1 )
      {
        v50 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v50 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v51 = (System_Reflection_MethodBase_o *)sub_1C3B748(v50, v50[4]);
        OverwriteAssetSoundName__PlaySystemSe(v51, 0, 0, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !this )
          goto LABEL_189;
        v52 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                v49->fields.id,
                (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !this )
          goto LABEL_189;
        this = (FollowerRootComponent_o *)SkillLvMaster__GetEntity(
                                            (SkillLvMaster_o *)this,
                                            v49->fields.id,
                                            v49->fields.lv,
                                            0LL);
        if ( !v52 )
          goto LABEL_189;
        SkillEntity__getSkillMessageInfo((SkillEntity_o *)v52, &name, &detail, v49->fields.lv, 0LL);
        v53 = name;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v54 = LocalizationManager__Get((System_String_o *)StringLiteral_8699/*"Mapping for neutral culture "*/, 0LL);
        lv = v49->fields.lv;
        v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v55, v56, v57);
        v59 = System_String__Format(v54, v58, 0LL);
        name = System_String__Concat_63379872(v53, (System_String_o *)StringLiteral_117/*"   "*/, v59, 0LL);
        v60 = v6->fields.tutorialMode;
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !this )
          goto LABEL_189;
        if ( v60 == 3 )
          CommonUI__OpenDetailLongInfoDialogOnFade(
            (CommonUI_o *)this,
            name,
            (System_String_o *)StringLiteral_1/*""*/,
            detail,
            0LL);
        else
          CommonUI__OpenDetailLongInfoDialog(
            (CommonUI_o *)this,
            name,
            (System_String_o *)StringLiteral_1/*""*/,
            detail,
            1,
            0,
            0LL);
      }
      else
      {
        v61 = Method_FollowerRootComponent_OnSelectFollowerItem__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
          v61 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
        v62 = (System_Reflection_MethodBase_o *)sub_1C3B748(v61, v61[4]);
        OverwriteAssetSoundName__PlaySystemSe(v62, 2, 0, 0LL);
      }
LABEL_30:
      operationItemListViewManager = v6->fields.operationItemListViewManager;
      v64 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      v65 = (int)Method_FollowerRootComponent_OnSelectFollowerItem__;
      goto LABEL_173;
    case 14:
      v116 = v6->fields.battleSetupInfo;
      if ( !v116 )
        goto LABEL_189;
      if ( !v116->fields.isChildFollower )
        goto LABEL_117;
      this = (FollowerRootComponent_o *)v6->fields.titleInfo;
      if ( !this )
        goto LABEL_189;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_189;
      LOBYTE(this->fields.followerQuestInfomationDraw) = 1;
LABEL_117:
      v117 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v117,
        (Il2CppObject *)v6,
        Method_FollowerRootComponent_CallbackRefresh__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (FollowerRootComponent_o *)NetworkManager__getRequest_object_(
                                          v117,
                                          (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FollowerRecommendSupportListRequest___);
      if ( !v6->fields.battleSetupInfo )
        goto LABEL_189;
      v118 = (FollowerRecommendSupportListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v6->fields.battleSetupInfo, 0LL);
      v119 = v6->fields.battleSetupInfo;
      if ( !v119 || !v118 )
        goto LABEL_189;
      FollowerRecommendSupportListRequest__beginRequest(v118, 0, (int32_t)this, v119->fields.questPhase, 0LL);
      return;
    default:
      this = (FollowerRootComponent_o *)v6->fields.operationItemListViewManager;
      if ( !this )
        goto LABEL_189;
      this = (FollowerRootComponent_o *)FollowerSelectItemListViewManager__GetItem(
                                          (FollowerSelectItemListViewManager_o *)this,
                                          n,
                                          0LL);
      if ( !this )
        goto LABEL_189;
      v99 = this;
      if ( FollowerSelectItemListViewItem__get_SvtId(
             (FollowerSelectItemListViewItem_o *)this,
             *(const MethodInfo **)&kind) < 1
        || HIBYTE(v99->fields.openScroll.fields.z)
        || *((_BYTE *)&v99[1].fields.UnityEngine_Behaviour_Fields + 6) )
      {
        goto LABEL_168;
      }
      this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !this )
        goto LABEL_189;
      if ( !BYTE4(this->fields.battleSetupInfo) )
        goto LABEL_89;
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v100 = this;
      v101 = FollowerRootComponent___c_TypeInfo;
      if ( !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
        v101 = FollowerRootComponent___c_TypeInfo;
      }
      _9__65_0 = v101->static_fields->__9__65_0;
      if ( !_9__65_0 )
      {
        if ( !v101->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v101);
          v101 = FollowerRootComponent___c_TypeInfo;
        }
        v103 = (Il2CppObject *)v101->static_fields->__9;
        _9__65_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(_9__65_0, v103, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__65_0__, 0LL);
        static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
        static_fields->__9__65_0 = _9__65_0;
        this = (FollowerRootComponent_o *)sub_1C3B708(&static_fields->__9__65_0);
      }
      if ( !v100 )
        goto LABEL_189;
      if ( PartyOrganizationUtility__OpenFriendshipUpItemExpiredDialog(
             (PartyOrganizationUtility_o *)v100,
             _9__65_0,
             0LL) )
      {
        goto LABEL_30;
      }
LABEL_89:
      v105 = Method_FollowerRootComponent_OnSelectFollowerItem__;
      if ( (*((_BYTE *)Method_FollowerRootComponent_OnSelectFollowerItem__ + 83) & 2) != 0 )
        v105 = (_QWORD *)sub_1C3B77C(Method_FollowerRootComponent_OnSelectFollowerItem__);
      v106 = (System_Reflection_MethodBase_o *)sub_1C3B748(v105, v105[4]);
      OverwriteAssetSoundName__PlaySystemSe(v106, 0, 0, 0LL);
      if ( !v6->fields.tutorialState )
        goto LABEL_96;
      v107 = v6->fields.tutorialMode;
      if ( v107 == 3 )
      {
        v6->fields.state = 4;
        v149 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v150 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(v150, (Il2CppObject *)v6, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
        if ( !v149 )
          goto LABEL_189;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)v149, v150, 0LL);
      }
      else if ( v107 == 2 )
      {
        this = (FollowerRootComponent_o *)v6->fields.titleInfo;
        if ( this )
        {
          TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 1, 0LL);
LABEL_96:
          this = (FollowerRootComponent_o *)v6->fields.myFSM;
          if ( this )
          {
            v108 = &StringLiteral_8803/*"Mesh data array start index can't be negative."*/;
LABEL_136:
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v108, 0LL);
            return;
          }
        }
LABEL_189:
        sub_1C3B9C0(this, *(_QWORD *)&kind);
      }
      return;
  }
}


void __fastcall FollowerRootComponent__PlayBGM(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v14; // x0
  QuestPhaseMaster_o *v15; // x20
  struct BattleSetupInfo_o *v16; // x8
  float FormationSubBgmFadeInTime; // s8
  int FormationBgmId; // w20
  System_String_o *BgmFileName; // x21
  _BOOL4 v20; // w23
  char v21; // w22
  FollowerRootComponent_o *v22; // x20
  int32_t FormationSubBgmId; // w0
  int32_t v24; // w20
  const MethodInfo *v25; // x2
  struct BattleSetupInfo_o *v26; // x8
  System_String_o *followerId; // x19
  SoundManager_c *v28; // x0
  System_String_o *v29; // x0
  struct BattleSetupInfo_o *v30; // x8
  const MethodInfo *v31; // x2
  FollowerRootComponent_o *v32; // x0
  const MethodInfo *v33; // x2
  QuestMaster_o *v34; // x21
  struct BattleSetupInfo_o *v35; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4C1CEE4 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&BgmManager_TypeInfo, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_BgmMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1C3B764(&DataManager_TypeInfo, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v9);
    sub_1C3B764(&SoundManager_TypeInfo, v10);
    this = (FollowerRootComponent_o *)sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C1CEE4 = 1;
  }
  entity = 0LL;
  battleSetupInfo = v2->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_70;
  questId = battleSetupInfo->fields.questId;
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  if ( questId != v14->static_fields->PrologueQuestId )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v2->fields.battleSetupInfo )
      goto LABEL_70;
    v15 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
    v16 = v2->fields.battleSetupInfo;
    if ( !v16 || !v15 )
      goto LABEL_70;
    FormationSubBgmFadeInTime = 0.0;
    if ( QuestPhaseMaster__TryGetEntity(v15, &entity, (int32_t)this, v16->fields.questPhase, 0LL) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0LL);
      if ( FormationBgmId < 1 )
      {
        BgmFileName = 0LL;
        v20 = FormationBgmId == 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        BgmFileName = BgmMaster__GetBgmFileName(
                        (BgmMaster_o *)this,
                        FormationBgmId,
                        (System_String_o *)StringLiteral_1/*""*/,
                        0LL);
        v20 = 0;
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_70;
      this = (FollowerRootComponent_o *)QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
      if ( !entity )
        goto LABEL_70;
      v21 = (char)this;
      FormationSubBgmId = QuestPhaseEntity__GetFormationSubBgmId(entity, 0LL);
      if ( (FormationSubBgmId & 0x80000000) != 0 )
      {
        v22 = 0LL;
      }
      else
      {
        v24 = FormationSubBgmId;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (FollowerRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_70;
        this = (FollowerRootComponent_o *)BgmMaster__GetBgmFileName(
                                            (BgmMaster_o *)this,
                                            v24,
                                            (System_String_o *)StringLiteral_1/*""*/,
                                            0LL);
        if ( !entity )
          goto LABEL_70;
        v22 = this;
        FormationSubBgmFadeInTime = QuestPhaseEntity__GetFormationSubBgmFadeInTime(entity, 0LL);
      }
    }
    else
    {
      v20 = 0;
      v21 = 0;
      v22 = 0LL;
      BgmFileName = 0LL;
    }
    this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_70;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v25);
      this = (FollowerRootComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        v26 = this->fields.battleSetupInfo;
        if ( v26 )
        {
          followerId = (System_String_o *)v26->fields.followerId;
          v28 = SoundManager_TypeInfo;
          if ( SoundManager_TypeInfo->_2.cctor_finished )
          {
LABEL_38:
            v29 = followerId;
LABEL_56:
            SoundManager__playBgm(v29, 0LL);
LABEL_57:
            FollowerRootComponent__PlaySubBgm(v32, (System_String_o *)v22, FormationSubBgmFadeInTime, v33);
            return;
          }
LABEL_37:
          j_il2cpp_runtime_class_init_0(v28);
          goto LABEL_38;
        }
      }
      goto LABEL_70;
    }
    v30 = v2->fields.battleSetupInfo;
    if ( !v30 )
      goto LABEL_70;
    if ( !v30->fields.isScriptBeforePartySelect )
      goto LABEL_48;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    if ( !SoundManager__isPlayBgm(0LL, 0LL) )
      goto LABEL_48;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
    {
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0LL) )
      {
LABEL_48:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        {
          FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v31);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v29 = BgmFileName;
          goto LABEL_56;
        }
        if ( v20 )
        {
          FollowerRootComponent__SetBackupBgmName(v2, v21 & 1, v31);
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopBgm(0LL);
          goto LABEL_57;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v2->fields.battleSetupInfo )
          {
            v34 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v2->fields.battleSetupInfo, 0LL);
            if ( v34 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v34, (int32_t)this, 0LL);
              v35 = v2->fields.battleSetupInfo;
              if ( v35 )
              {
                if ( this )
                {
                  followerId = QuestEntity__GetBgmName((QuestEntity_o *)this, v35->fields.warId, 0LL);
                  if ( System_String__IsNullOrEmpty(followerId, 0LL) )
                  {
                    if ( !BgmManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    followerId = BgmManager__GetMainBgmName(0LL);
                  }
                  v28 = SoundManager_TypeInfo;
                  if ( SoundManager_TypeInfo->_2.cctor_finished )
                    goto LABEL_38;
                  goto LABEL_37;
                }
              }
            }
          }
        }
LABEL_70:
        sub_1C3B9C0(this, method);
      }
    }
  }
}


void __fastcall FollowerRootComponent__PlaySubBgm(
        FollowerRootComponent_o *this,
        System_String_o *subBgmName,
        float fadeTime,
        const MethodInfo *method)
{
  if ( (byte_4C1CEE3 & 1) == 0 )
  {
    sub_1C3B764(&SoundManager_TypeInfo, subBgmName);
    byte_4C1CEE3 = 1;
  }
  if ( !System_String__IsNullOrEmpty(subBgmName, 0LL) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__PlaySubBgm(subBgmName, fadeTime, 0LL);
  }
}


void __fastcall FollowerRootComponent__Quit(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL),
        (operationItemListViewManager = this->fields.operationItemListViewManager) == 0LL)
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL )
  {
    sub_1C3B9C0(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  FollowerListRequest_o *Request_object; // x0
  __int64 v9; // x1
  FollowerListRequest_o *v10; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_4C1CEED & 1) == 0 )
  {
    sub_1C3B764(&Method_FollowerRootComponent_CallbackFollowerList__, method);
    sub_1C3B764(&Method_NetworkManager_getRequest_FollowerListRequest___, v3);
    sub_1C3B764(&NetworkManager_TypeInfo, v4);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v6);
    byte_4C1CEED = 1;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (FollowerListRequest_o *)NetworkManager__getRequest_object_(
                                              v7,
                                              (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_object )
    goto LABEL_12;
  v10 = Request_object;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, Il2CppMethodPointer))Request_object->klass->vtable._7_checkExpirationDate.method)(
          Request_object,
          Request_object->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    Request_object = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_object )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, 0LL);
      return;
    }
LABEL_12:
    sub_1C3B9C0(Request_object, v9);
  }
  Request_object = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_object )
    goto LABEL_12;
  Request_object = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Request_object, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_12;
  FollowerListRequest__beginRequest(v10, 0, (int32_t)Request_object, battleSetupInfo->fields.questPhase, 0LL);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerRootComponent_o *v2; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v2 = this;
  if ( (byte_4C1CEF8 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_1C3B764(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        method);
    byte_4C1CEF8 = 1;
  }
  battleSetupInfo = v2->fields.battleSetupInfo;
  v2->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
    battleSetupInfo->fields.followerId = 0LL;
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_1C3B9C0(this, method);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *battleSetupInfo; // x20
  System_String_o *backupBgmName; // x22
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0

  if ( (byte_4C1CEF7 & 1) == 0 )
  {
    sub_1C3B764(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, method);
    sub_1C3B764(&QuestHintDialogOpenManager_TypeInfo, v3);
    sub_1C3B764(&RandomLimitCountManager_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_1C3B764(&SoundManager_TypeInfo, v7);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
    byte_4C1CEF7 = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  QuestHintDialogOpenManager__ResetTemporarilyId(0LL);
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0LL) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(backupBgmName, 0LL);
  }
  this->fields.battleSetupInfo = 0LL;
  sub_1C3B708(&this->fields.battleSetupInfo);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( BYTE1(Instance[10].klass) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    BYTE1(Instance[10].klass) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CCCA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
      byte_4C1CCCA = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v13->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__popSceneRefresh((AvalonSceneManager_o *)Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C3B9C0(Instance, v12);
  AvalonSceneManager__UnloadScene_object_(
    (AvalonSceneManager_o *)Instance,
    (const MethodInfo_2FD9638 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  return 1;
}


void __fastcall FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t state; // w8
  void *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v10; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v11; // x21
  FollowerSelectItemListViewManager_o *v12; // x20
  FollowerSelectItemListViewManager_c *v13; // x0
  FollowerSelectItemListViewManager_o *v14; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v15; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v19; // x4
  CommonUI_o *v20; // x20

  if ( (byte_4C1CEEB & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, method);
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v3);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v4);
    sub_1C3B764(&RandomLimitCountManager_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v7);
    byte_4C1CEEB = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_27;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v10 = this->fields.operationItemListViewManager;
    v11 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v10 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v10, 3, v11, 0LL);
    v12 = this->fields.operationItemListViewManager;
    if ( !v12 )
      goto LABEL_27;
    if ( !byte_4C1CF17 )
    {
      sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, method);
      byte_4C1CF17 = 1;
    }
    v13 = FollowerSelectItemListViewManager_TypeInfo;
    if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v13 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v12, v13->static_fields->followerClassId, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_27:
      sub_1C3B9C0(operationItemListViewManager, method);
    operationItemListViewManager = (void *)FollowerSelectItemListViewManager__GetDisplayItemNum(
                                             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                             0LL);
    if ( (int)operationItemListViewManager >= 3 )
    {
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_27;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0LL);
    }
  }
  else
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_27;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v14 = this->fields.operationItemListViewManager;
    v15 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v14 )
      goto LABEL_27;
    FollowerSelectItemListViewManager__SetMode(v14, 2, v15, 0LL);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_27;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  operationItemListViewManager = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_27;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v19);
  operationItemListViewManager = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CommonUI_o *)operationItemListViewManager;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v20 )
    goto LABEL_27;
  CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServant(
        FollowerRootComponent_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *v8; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v10; // x22

  if ( (byte_4C1CEF1 & 1) == 0 )
  {
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, item);
    sub_1C3B764(&Method_FollowerRootComponent_EndShowServant__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4C1CEF1 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v8 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, (const MethodInfo *)item),
        v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v8) )
  {
    sub_1C3B9C0(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_31244276(v8, 5, ServantLeader, v10, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServantEquip(
        FollowerRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  ListViewManager_o *operationItemListViewManager; // x0
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v11; // x23

  if ( (byte_4C1CEF4 & 1) == 0 )
  {
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1C3B764(&Method_FollowerRootComponent_EndShowServantEquip__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4C1CEF4 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v11 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v11,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_1C3B9C0(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_31247372((CommonUI_o *)Instance, statusKind, equipInfo, v11, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  if ( (byte_4C1CEE5 & 1) == 0 )
  {
    sub_1C3B764(&SoundManager_TypeInfo, isNonStopEndBgm);
    byte_4C1CEE5 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    this->fields.backupBgmName = SoundManager__getBgmName(0LL);
    sub_1C3B708(&this->fields.backupBgmName);
  }
}


bool __fastcall FollowerRootComponent__SetFollowerBase(
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  FollowerRootComponent_c *v6; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_4C1CEE0 & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, spriteName);
    sub_1C3B764(&FollowerRootComponent_TypeInfo, v5);
    byte_4C1CEE0 = 1;
  }
  v6 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v6 = FollowerRootComponent_TypeInfo;
  }
  partyOrganizationAtlasCache = v6->static_fields->partyOrganizationAtlasCache;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0LL);
}


bool __fastcall FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  void *Instance; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_31894016; // w0
  __int64 v8; // x9
  struct BattleSetupInfo_o *v9; // x8
  int64_t v10; // x10
  int32_t v11; // w10
  __int64 v12; // x10
  __int64 v13; // x10
  int32_t v14; // w9
  Il2CppObject *v15; // x19

  if ( (byte_4C1CEF9 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v3);
    byte_4C1CEF9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (void *)PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_31;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    followerId = battleSetupInfo->fields.followerId;
    if ( followerId >= 1 )
    {
      Instance = this->fields.operationItemListViewManager;
      if ( !Instance )
        goto LABEL_31;
      ItemIndex_31894016 = FollowerSelectItemListViewManager__GetItemIndex_31894016(
                             (FollowerSelectItemListViewManager_o *)Instance,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_31894016 & ~(ItemIndex_31894016 >> 31);
    }
    goto LABEL_28;
  }
  battleSetupInfo->fields.followerId = 0LL;
  followerId = (unsigned int)this->fields.selectItemNum;
  if ( (followerId & 0x80000000) == 0 )
  {
    Instance = this->fields.operationItemListViewManager;
    if ( !Instance )
      goto LABEL_31;
    Instance = FollowerSelectItemListViewManager__GetItem(
                 (FollowerSelectItemListViewManager_o *)Instance,
                 followerId,
                 0LL);
    if ( Instance )
    {
      v8 = *((_QWORD *)Instance + 14);
      v9 = this->fields.battleSetupInfo;
      if ( v8 )
      {
        v10 = *(_QWORD *)(v8 + 16);
        if ( !v9 )
          goto LABEL_31;
      }
      else
      {
        v10 = 0LL;
        if ( !v9 )
          goto LABEL_31;
      }
      v9->fields.followerId = v10;
      v11 = *((_DWORD *)Instance + 31);
      if ( v11 )
        v11 = *((_DWORD *)Instance + 30);
      v9->fields.followerClassId = v11;
      v9->fields.followerSupportDeckId = *((_DWORD *)Instance + 65);
      if ( !*((_BYTE *)Instance + 255) )
      {
        v9->fields.recommendSupportIdx = 0;
        if ( !v8 )
        {
          v9->fields.followerType = 0;
          goto LABEL_28;
        }
        goto LABEL_25;
      }
      if ( v8 )
      {
        v12 = *(_QWORD *)(v8 + 56);
        if ( v12 )
        {
          if ( !*(_DWORD *)(v12 + 24) )
            sub_1C3B9C8(Instance, followerId);
          v13 = *(_QWORD *)(v12 + 32);
          if ( v13 )
          {
            v9->fields.recommendSupportIdx = *(_DWORD *)(v13 + 24);
LABEL_25:
            v14 = *(_DWORD *)(v8 + 36);
            v9->fields.followerType = 0;
            if ( v14 == 5 || v14 == 1 )
              v9->fields.followerType = v14;
            goto LABEL_28;
          }
        }
      }
LABEL_31:
      sub_1C3B9C0(Instance, followerId);
    }
  }
LABEL_28:
  this->fields.state = 5;
  v15 = (Il2CppObject *)this->fields.battleSetupInfo;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v15, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 selectItemNum; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v12; // x20
  Il2CppClass *klass; // x8
  int namespaze; // w9
  int v15; // w10
  FollowerInfo_o *v16; // x21
  struct FollowerInfo_o *followerInfo; // x11
  Il2CppClass *v18; // x8
  const char *v19; // x9
  int v20; // w10
  struct FollowerInfo_o *userId; // x11
  bool v22; // w21
  SupportInfoJump_o *v24; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  Il2CppObject *v26; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C1CEFA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_UserFollowerMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v5);
    sub_1C3B764(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v6);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_1C3B764(&SupportInfoJump_TypeInfo, v8);
    byte_4C1CEFA = 1;
  }
  entity = 0LL;
  v26 = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    Item = FollowerSelectItemListViewManager__GetItem(operationItemListViewManager, selectItemNum, 0LL);
    if ( Item )
    {
      v12 = Item;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &entity,
                                                                              (const MethodInfo_329D4D0 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_41;
        klass = entity[1].klass;
        if ( !klass )
          goto LABEL_41;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( namespaze == v15 )
              sub_1C3B9C8(operationItemListViewManager, selectItemNum);
            v16 = (FollowerInfo_o *)*((_QWORD *)&klass->_1.byval_arg.data + v15);
            if ( !v16 )
              goto LABEL_41;
            followerInfo = v12->fields.followerInfo;
            if ( followerInfo )
              followerInfo = (struct FollowerInfo_o *)followerInfo->fields.userId;
            if ( (struct FollowerInfo_o *)v16->fields.userId == followerInfo )
              break;
            if ( namespaze == ++v15 )
              goto LABEL_20;
          }
LABEL_37:
          this->fields.state = 6;
          v24 = (SupportInfoJump_o *)sub_1C3B9B0(SupportInfoJump_TypeInfo);
          SupportInfoJump___ctor_40145624(v24, v16, 0, 1, 0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            if ( v24 )
            {
              SupportInfoJump__SetSetupInfo(
                v24,
                battleSetupInfo->fields.eventUpValSetupInfo,
                battleSetupInfo->fields.questRestrictionInfo,
                0LL);
              operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( operationItemListViewManager )
              {
                v22 = 1;
                AvalonSceneManager__pushScene(
                  (AvalonSceneManager_o *)operationItemListViewManager,
                  60,
                  1,
                  (Il2CppObject *)v24,
                  0LL);
                return v22;
              }
            }
          }
LABEL_41:
          sub_1C3B9C0(operationItemListViewManager, selectItemNum);
        }
      }
LABEL_20:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                              (DataMasterBase_TMaster__TEntity__PKType__o *)operationItemListViewManager,
                                                                              &v26,
                                                                              (const MethodInfo_329D4D0 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( ((unsigned __int8)operationItemListViewManager & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_41;
        v18 = v26[1].klass;
        if ( v18 )
        {
          v19 = v18->_1.namespaze;
          if ( v19 )
          {
            if ( (int)v19 >= 1 )
            {
              v20 = 0;
              while ( 1 )
              {
                v16 = (FollowerInfo_o *)*((_QWORD *)&v18->_1.byval_arg.data + v20);
                if ( !v16 )
                  goto LABEL_41;
                userId = v12->fields.followerInfo;
                if ( userId )
                  userId = (struct FollowerInfo_o *)userId->fields.userId;
                if ( (struct FollowerInfo_o *)v16->fields.userId == userId )
                  goto LABEL_37;
                ++v20;
                v22 = 0;
                if ( (_DWORD)v19 == v20 )
                  return v22;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


void __fastcall FollowerRootComponent__UpdateDeckInfomation(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v17; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  Il2CppObject *v20; // x21
  EventQuestMaster_o *v21; // x22
  struct BattleSetupInfo_o *v22; // x8
  struct BattleSetupInfo_o *v23; // x8
  int32_t i; // w20
  BalanceConfig_c *v25; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v27; // x21
  System_Int64_array *v28; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v30; // w21
  struct BattleSetupInfo_o *v31; // x8
  QuestRestrictionInfo_o *v32; // x0
  struct BattleSetupInfo_o *v33; // x8
  struct BattleSetupInfo_o *v34; // x8
  Il2CppObject *v35; // x20
  struct BattleSetupInfo_o *v36; // x8
  int32_t eventId; // w22
  int64_t v38; // x21
  struct BattleSetupInfo_o *v39; // x8
  UserEventDeckEntity_o *v40; // x20
  __int64 v41; // x21
  int v42; // w8
  unsigned __int64 v43; // x22
  __int64 v44; // x26
  System_Int64_array *v45; // x23
  int32_t v46; // w24
  unsigned __int64 v47; // x22
  __int64 v48; // x26
  System_Int64_array *v49; // x23
  int v50; // w24
  struct BattleSetupInfo_o *v51; // x8
  int32_t k; // w20
  BalanceConfig_c *v53; // x0
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v55; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  int32_t m; // w19
  UserServantEntity_o *v59; // x0
  UserServantEntity_o *v60; // x20
  System_Int64_array *v61; // x22
  int32_t v62; // w21
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v64; // x0
  PartyOrganizationListViewItem_o *v65; // x20
  System_Int64_array *v66; // x21
  UserServantEntity_o *v67; // x8
  int v68; // w20
  int32_t v69; // w21
  int32_t v70; // w21
  struct BattleSetupInfo_o *v71; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C1CEF0 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventQuestMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserDeckMaster___, v5);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v6);
    sub_1C3B764(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v7);
    sub_1C3B764(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    sub_1C3B764(&OptionManager_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v12);
    byte_4C1CEF0 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_9;
  Instance = (__int64)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_142;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_9;
  v69 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v69, 0LL);
  if ( (int)Instance < 1 )
  {
LABEL_9:
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo || !MasterData_object )
      goto LABEL_142;
    Instance = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 battleSetupInfo->fields.deckId,
                 (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v70 = Instance;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C1C955 )
    {
      sub_1C3B764(&NetworkManager_TypeInfo, v14);
      byte_4C1C955 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_142;
    Instance = (__int64)UserDeckMaster__getDeck(
                          (UserDeckMaster_o *)MasterData_object,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          v70,
                          0LL);
    entity = (Il2CppObject *)Instance;
  }
  v17 = this->fields.battleSetupInfo;
  if ( !v17 )
    goto LABEL_142;
  questRestrictionInfo = v17->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_1C3B708(&this->fields.friendPointCampaignEntityList);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  v20 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_142;
  v21 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v22 = this->fields.battleSetupInfo;
  if ( !v22 )
    goto LABEL_142;
  if ( !v21 )
    goto LABEL_142;
  Instance = (__int64)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v21,
                        Instance,
                        v22->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v20 )
    goto LABEL_142;
  this->fields.friendPointCampaignEntityList = EventCampaignMaster__getData_40528960(
                                                 (EventCampaignMaster_o *)v20,
                                                 24,
                                                 (EventEntity_array *)Instance,
                                                 0LL);
  Instance = sub_1C3B708(&this->fields.friendPointCampaignEntityList);
  if ( this->fields.tutorialMode == 4 )
  {
    v23 = this->fields.battleSetupInfo;
    if ( !v23 )
      goto LABEL_142;
    if ( v23->fields.isChildFollower )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_142;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v25 = BalanceConfig_TypeInfo;
          if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v25 = BalanceConfig_TypeInfo;
          }
          if ( i >= v25->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_142;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_142;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v27 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v27->fields.userServantEntity )
                goto LABEL_142;
              v28 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v27->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v27->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_142;
              v30 = Instance;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v28, 0LL) == 104
                && v30 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v30;
                this->fields.friendPointUpMaxVal = v30;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( !v25->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v25);
            v25 = BalanceConfig_TypeInfo;
          }
          if ( j >= v25->static_fields->DeckMemberMax )
            break;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_142;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_142;
          v64 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v64 )
          {
            v65 = v64;
            if ( v64->fields.userServantEntity )
            {
              Instance = (__int64)PartyOrganizationListViewItem__GetEquipList(v64, 0LL);
              if ( !v65->fields.userServantEntity )
                goto LABEL_142;
              v66 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v65->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v67 = v65->fields.userServantEntity;
              if ( !v67 )
                goto LABEL_142;
              v68 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v67, v66, 0LL) == 123 )
                *p_friendPointUpVal += v68;
            }
          }
          v25 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v31 = this->fields.battleSetupInfo;
  if ( !v31 )
LABEL_142:
    sub_1C3B9C0(Instance, v14);
  v32 = v31->fields.questRestrictionInfo;
  if ( v32 )
  {
    Instance = QuestRestrictionInfo__IsServantNum(v32, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v33 = this->fields.battleSetupInfo;
    if ( !v33 )
      goto LABEL_142;
    Instance = (__int64)v33->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_142;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_49;
    v34 = this->fields.battleSetupInfo;
    if ( !v34 )
      goto LABEL_142;
    Instance = (__int64)v34->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_142;
    if ( *(int *)(Instance + 404) >= 1 )
    {
LABEL_49:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v35 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C1C955 )
        {
          sub_1C3B764(&NetworkManager_TypeInfo, v14);
          byte_4C1C955 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        v36 = this->fields.battleSetupInfo;
        if ( v36 )
        {
          eventId = v36->fields.eventId;
          v38 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL);
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v39 = this->fields.battleSetupInfo;
          if ( v39 )
          {
            if ( v35 )
            {
              Instance = (__int64)UserEventDeckMaster__getDeckList(
                                    (UserEventDeckMaster_o *)v35,
                                    v38,
                                    eventId,
                                    Instance,
                                    v39->fields.questPhase,
                                    0,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_143;
                v40 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v40 )
                {
                  Instance = (__int64)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v41 = Instance;
                    v42 = *(_QWORD *)(Instance + 24);
                    if ( v42 >= 1 )
                    {
                      v43 = 0LL;
                      v44 = Instance + 32;
                      while ( v43 < (unsigned int)v42 )
                      {
                        if ( *(_QWORD *)(v44 + 8 * v43) )
                        {
                          Instance = (__int64)UserEventDeckEntity__GetEquipList(v40, v43, 0LL);
                          if ( v43 >= *(unsigned int *)(v41 + 24) )
                            break;
                          v45 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v44 + 8 * v43);
                          if ( !Instance )
                            goto LABEL_142;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v45, 0LL);
                          if ( v43 >= *(unsigned int *)(v41 + 24) )
                            break;
                          v46 = Instance;
                          Instance = *(_QWORD *)(v44 + 8 * v43);
                          if ( !Instance )
                            goto LABEL_142;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v45, 0LL);
                          if ( (_DWORD)Instance == 104 && v46 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v46;
                            this->fields.friendPointUpMaxVal = v46;
                          }
                        }
                        v42 = *(_DWORD *)(v41 + 24);
                        if ( (__int64)++v43 >= v42 )
                          goto LABEL_75;
                      }
LABEL_143:
                      sub_1C3B9C8(Instance, v14);
                    }
LABEL_75:
                    if ( v42 >= 1 )
                    {
                      v47 = 0LL;
                      v48 = v41 + 32;
                      while ( v47 < (unsigned int)v42 )
                      {
                        if ( *(_QWORD *)(v48 + 8 * v47) )
                        {
                          Instance = (__int64)UserEventDeckEntity__GetEquipList(v40, v47, 0LL);
                          if ( v47 >= *(unsigned int *)(v41 + 24) )
                            goto LABEL_143;
                          v49 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v48 + 8 * v47);
                          if ( !Instance )
                            goto LABEL_142;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v49, 0LL);
                          if ( v47 >= *(unsigned int *)(v41 + 24) )
                            goto LABEL_143;
                          v50 = Instance;
                          Instance = *(_QWORD *)(v48 + 8 * v47);
                          if ( !Instance )
                            goto LABEL_142;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v49, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v50;
                        }
                        v42 = *(_DWORD *)(v41 + 24);
                        if ( (__int64)++v47 >= v42 )
                          goto LABEL_86;
                      }
                      goto LABEL_143;
                    }
LABEL_86:
                    v51 = this->fields.battleSetupInfo;
                    if ( v51 )
                    {
                      Instance = (__int64)v51->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_41913300((QuestRestrictionInfo_o *)Instance, v40, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v71 = this->fields.battleSetupInfo;
                  if ( v71 )
                  {
                    Instance = (__int64)v71->fields.questRestrictionInfo;
                    if ( Instance )
                    {
                      QuestRestrictionInfo__ResetDeckInfo((QuestRestrictionInfo_o *)Instance, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LABEL_142;
    }
    if ( !entity || QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0LL) )
      return;
  }
  else if ( !entity )
  {
    return;
  }
  for ( k = 0; ; ++k )
  {
    v53 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v53 = BalanceConfig_TypeInfo;
    }
    if ( k >= v53->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_142;
    UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
    if ( UserServant )
    {
      v55 = UserServant;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_142;
      EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
      FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v55, EquipList, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v55, EquipList, 0LL) == 104 && FriendPointUpVal > *p_friendPointUpVal )
      {
        this->fields.friendPointUpVal = FriendPointUpVal;
        this->fields.friendPointUpMaxVal = FriendPointUpVal;
      }
    }
  }
  for ( m = 0; ; ++m )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = BalanceConfig_TypeInfo;
    }
    if ( m >= v53->static_fields->DeckMemberMax )
      break;
    Instance = (__int64)entity;
    if ( !entity )
      goto LABEL_142;
    v59 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
    if ( v59 )
    {
      v60 = v59;
      Instance = (__int64)entity;
      if ( !entity )
        goto LABEL_142;
      v61 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
      v62 = UserServantEntity__getFriendPointUpVal(v60, v61, 0LL);
      if ( UserServantEntity__getFriendPointUpType(v60, v61, 0LL) == 123 )
        *p_friendPointUpVal += v62;
    }
    v53 = BalanceConfig_TypeInfo;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent___OnClickBack_b__71_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0

  if ( (byte_4C1CF09 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, v6);
    byte_4C1CF09 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1CCCA )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v8);
      byte_4C1CCCA = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3566/*"COMBINE_HELP_COMBINE_LV_EXCEED"*/, 0LL);
      return;
    }
LABEL_14:
    sub_1C3B9C0(Instance, v8);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerRootComponent_c *v6; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_4C1CEEC & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, method);
    sub_1C3B764(&FollowerRootComponent_TypeInfo, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v4);
    byte_4C1CEEC = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_14;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)operationItemListViewManager,
                                                                          0LL);
  if ( !operationItemListViewManager )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  v6 = FollowerRootComponent_TypeInfo;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v6 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_1C3B708(&static_fields->partyOrganizationAtlasCache);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_1C3B9C0(operationItemListViewManager, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C1CEE1 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C1CEE1 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_1C3B9C0(0LL, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__beginResume(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  FollowerRootComponent_c *v16; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x21
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  __int64 Instance; // x0
  unsigned __int64 selectItemNum; // x1
  __int64 methodPtr_low; // x10
  __int64 v23; // x9
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int64_t v25; // x10
  __int64 v26; // x9
  Il2CppObject *v27; // x10
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  struct BattleSetupInfo_o *v29; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x20
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v32; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  struct BattleSetupInfo_o *v34; // x8
  const MethodInfo *v35; // x4
  struct BattleSetupInfo_o *v36; // x8
  const MethodInfo *v37; // x1
  CommonUI_o *v38; // x20
  struct BattleSetupInfo_o *v39; // x8
  PartyListViewItem_o *v40; // x20
  UnityEngine_Component_o *v41; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v43; // x22
  struct BattleSetupInfo_o *v44; // x8
  const MethodInfo *v45; // x4
  struct BattleSetupInfo_o *v46; // x8
  FollowerSelectItemListViewManager_o *v47; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v48; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v51; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v53; // x8
  BalanceConfig_c *v54; // x0
  int32_t v55; // w22
  PartyOrganizationListViewItem_o *v56; // x0
  struct FollowerInfo_o *v57; // x8
  int klass_high; // w10
  int32_t v59; // w9
  struct BattleSetupInfo_o *v60; // x8
  Il2CppObject *v61; // x19

  if ( (byte_4C1CEEA & 1) == 0 )
  {
    sub_1C3B764(&AvalonSceneManager_TypeInfo, data);
    sub_1C3B764(&BalanceConfig_TypeInfo, v5);
    sub_1C3B764(&BattleSetupInfo_TypeInfo, v6);
    sub_1C3B764(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C3B764(&Method_FollowerRootComponent_OnSelectFollowerItem__, v8);
    sub_1C3B764(&FollowerRootComponent_TypeInfo, v9);
    sub_1C3B764(&RandomLimitCountManager_TypeInfo, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13);
    sub_1C3B764(&SupportInfoJump_TypeInfo, v14);
    sub_1C3B764(&TutorialFlag_TypeInfo, v15);
    byte_4C1CEEA = 1;
  }
  v16 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v16 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v16->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1C3B708(&static_fields->partyOrganizationAtlasCache);
  titleInfo = this->fields.titleInfo;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  if ( *(_BYTE *)(Instance + 80) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_118;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_118;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
  Instance = (__int64)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_118;
  FollowerSelectItemListViewManager__PlayClassButtonEffect((FollowerSelectItemListViewManager_o *)Instance, 0LL);
  if ( this->fields.state == 6 )
  {
    if ( data )
    {
      methodPtr_low = LOBYTE(SupportInfoJump_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == SupportInfoJump_TypeInfo
        && ((__int64)data[3].klass & 0x80000000) == 0 )
      {
        selectItemNum = (unsigned int)this->fields.selectItemNum;
        if ( (selectItemNum & 0x80000000) == 0 )
        {
          Instance = (__int64)this->fields.operationItemListViewManager;
          if ( !Instance )
            goto LABEL_118;
          Instance = (__int64)FollowerSelectItemListViewManager__GetItem(
                                (FollowerSelectItemListViewManager_o *)Instance,
                                selectItemNum,
                                0LL);
          if ( Instance )
          {
            this->fields.state = 5;
            v23 = *(_QWORD *)(Instance + 112);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( v23 )
              v25 = *(_QWORD *)(v23 + 16);
            else
              v25 = 0LL;
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = v25;
              battleSetupInfo->fields.followerClassId = (int32_t)data[3].klass;
              klass_high = HIDWORD(data[3].klass);
              if ( klass_high <= 0 )
                klass_high = *(_DWORD *)(Instance + 260);
              battleSetupInfo->fields.followerSupportDeckId = klass_high;
              if ( v23 )
              {
                v59 = *(_DWORD *)(v23 + 36);
                battleSetupInfo->fields.followerType = 0;
                if ( v59 == 5 || v59 == 1 )
                  battleSetupInfo->fields.followerType = v59;
              }
              else
              {
                battleSetupInfo->fields.followerType = 0;
              }
              if ( this->fields.operationItemListViewManager )
              {
                if ( !byte_4C1CF17 )
                {
                  sub_1C3B764(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum);
                  byte_4C1CF17 = 1;
                }
                Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                if ( !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                  Instance = (__int64)FollowerSelectItemListViewManager_TypeInfo;
                }
                v60 = this->fields.battleSetupInfo;
                if ( v60 )
                {
                  selectItemNum = (unsigned int)v60->fields.followerClassId;
                  if ( *(_DWORD *)(*(_QWORD *)(Instance + 184) + 8LL) != (_DWORD)selectItemNum )
                  {
                    Instance = (__int64)this->fields.operationItemListViewManager;
                    if ( !Instance )
                      goto LABEL_118;
                    if ( FollowerSelectItemListViewManager__ChangeClass(
                           (FollowerSelectItemListViewManager_o *)Instance,
                           selectItemNum,
                           0LL) )
                    {
                      Instance = (__int64)this->fields.operationItemListViewManager;
                      if ( !Instance )
                        goto LABEL_118;
                      ListViewManager__JumpItem((ListViewManager_o *)Instance, this->fields.selectItemNum, 0LL);
                    }
                  }
                  v61 = (Il2CppObject *)this->fields.battleSetupInfo;
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                  if ( Instance )
                  {
                    AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 40, 1, v61, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_118:
            sub_1C3B9C0(Instance, selectItemNum);
          }
        }
      }
    }
    goto LABEL_35;
  }
  if ( data )
  {
    v26 = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)v26 )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v26 - 1] == BattleSetupInfo_TypeInfo )
        v27 = data;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v27;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  else
  {
    this->fields.battleSetupInfo = 0LL;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
  }
  Instance = sub_1C3B708(p_battleSetupInfo);
  v29 = *p_battleSetupInfo;
  if ( *p_battleSetupInfo )
  {
    questRestrictionInfo = v29->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_118;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v29->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_87;
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    Instance = TutorialFlag__Get_39109112(102, 0LL);
    if ( (Instance & 1) == 0 )
    {
      v32 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_118;
LABEL_58:
      if ( v32->fields.isChildFollower )
      {
        FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
        return;
      }
      goto LABEL_87;
    }
LABEL_35:
    FollowerRootComponent__UpdateDeckInfomation(this, (const MethodInfo *)selectItemNum);
    tutorialMode = this->fields.tutorialMode;
    if ( tutorialMode != 4 )
    {
      if ( tutorialMode != 3 )
      {
        if ( tutorialMode == 1 )
        {
          v32 = this->fields.battleSetupInfo;
          if ( !v32 )
            goto LABEL_118;
          goto LABEL_58;
        }
LABEL_46:
        FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
        return;
      }
      Instance = (__int64)this->fields.battleSetupInfo;
      this->fields.selectItemNum = -1;
      *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
      if ( !Instance )
        goto LABEL_118;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
      v34 = this->fields.battleSetupInfo;
      if ( !v34 )
        goto LABEL_118;
      if ( !operationItemListViewManager )
        goto LABEL_118;
      FollowerSelectItemListViewManager__CreateList(
        operationItemListViewManager,
        Instance,
        v34->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v34->fields.questRestrictionInfo,
        0LL);
      v36 = this->fields.battleSetupInfo;
      if ( !v36 )
        goto LABEL_118;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_118;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v36->fields.questRestrictionInfo,
        0,
        0LL,
        v35);
      this->fields.state = 2;
      FollowerRootComponent__OnMoveEnd(this, v37);
LABEL_53:
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v38 = (CommonUI_o *)Instance;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( v38 )
      {
        CommonUI__maskFadein(v38, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
        SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
        return;
      }
      goto LABEL_118;
    }
    if ( this->fields.state == 6 )
      goto LABEL_46;
    v39 = this->fields.battleSetupInfo;
    if ( !v39 )
      goto LABEL_118;
    if ( v39->fields.isChildFollower )
      goto LABEL_121;
    v53 = v39->fields.questRestrictionInfo;
    if ( !v53 )
      goto LABEL_118;
    if ( !v53->fields.isNotTransitionSupportList )
    {
LABEL_121:
      if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
      RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_118;
      v40 = *(PartyListViewItem_o **)(Instance + 72);
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_118;
      v41 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
      i = *(_DWORD *)(Instance + 56);
      this->fields.tutorialState = 0;
      this->fields.selectItemNum = -1;
      if ( !v41 )
        goto LABEL_118;
      Instance = (__int64)UnityEngine_Component__get_gameObject(v41, 0LL);
      if ( !Instance )
        goto LABEL_118;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (__int64)this->fields.battleSetupInfo;
      if ( !Instance )
        goto LABEL_118;
      v43 = this->fields.operationItemListViewManager;
      Instance = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
      v44 = this->fields.battleSetupInfo;
      if ( !v44 )
        goto LABEL_118;
      if ( !v43 )
        goto LABEL_118;
      FollowerSelectItemListViewManager__CreateList(
        v43,
        Instance,
        v44->fields.questPhase,
        this->fields.friendPointUpVal,
        this->fields.friendPointUpMaxVal,
        this->fields.friendPointCampaignEntityList,
        v44->fields.questRestrictionInfo,
        0LL);
      v46 = this->fields.battleSetupInfo;
      if ( !v46 )
        goto LABEL_118;
      Instance = (__int64)this->fields.followerQuestInfomationDraw;
      if ( !Instance )
        goto LABEL_118;
      FollowerQuestInfomationDraw__SetInfomation(
        (FollowerQuestInfomationDraw_o *)Instance,
        v46->fields.questRestrictionInfo,
        i,
        0LL,
        v45);
      this->fields.state = 3;
      v47 = this->fields.operationItemListViewManager;
      v48 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_1C3B9B0(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v48,
        (Il2CppObject *)this,
        (intptr_t)Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !v47 )
        goto LABEL_118;
      FollowerSelectItemListViewManager__SetMode(v47, 2, v48, 0LL);
      if ( v40 )
      {
        Instance = (__int64)this->fields.operationItemListViewManager;
        if ( !Instance )
          goto LABEL_118;
        if ( ListViewManager__get_ItemSum((ListViewManager_o *)Instance, 0LL) >= 3 )
        {
          if ( i )
          {
LABEL_78:
            if ( i >= 1 )
            {
              Member = PartyListViewItem__GetMember(v40, i - 1, 0LL);
              if ( Member )
              {
                followerInfo = Member->fields.followerInfo;
                if ( followerInfo )
                {
                  v51 = this->fields.operationItemListViewManager;
                  userId = followerInfo->fields.userId;
                  Instance = (__int64)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
                  if ( !Instance )
                    goto LABEL_118;
                  if ( !v51 )
                    goto LABEL_118;
                  Instance = FollowerSelectItemListViewManager__GetItemIndex(
                               v51,
                               userId,
                               *(_QWORD *)(Instance + 40),
                               0LL);
                  if ( !this->fields.operationItemListViewManager )
                    goto LABEL_118;
                  ListViewManager__JumpItem(
                    (ListViewManager_o *)this->fields.operationItemListViewManager,
                    Instance,
                    0LL);
                }
              }
            }
          }
          else
          {
            for ( i = 1; ; ++i )
            {
              v54 = BalanceConfig_TypeInfo;
              v55 = i - 1;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v54 = BalanceConfig_TypeInfo;
              }
              if ( v55 >= v54->static_fields->DeckMemberMax )
                break;
              v56 = PartyListViewItem__GetMember(v40, v55, 0LL);
              if ( v56 )
              {
                v57 = v56->fields.followerInfo;
                if ( v57 )
                {
                  if ( Follower__IsNotNpc(v57->fields.type, 0LL) )
                    goto LABEL_78;
                }
              }
            }
          }
        }
      }
      goto LABEL_53;
    }
LABEL_87:
    FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
  }
}


void __fastcall FollowerRootComponent__beginStartUp(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  MissionNotifyManager_o *Instance; // x0
  const MethodInfo *v25; // x1
  MissionNotifyManager_c *klass; // x8
  const MethodInfo *v27; // x1
  __int64 methodPtr_low; // x9
  struct BattleSetupInfo_o *v29; // x10
  struct BattleSetupInfo_o **p_battleSetupInfo; // x0
  const MethodInfo *v31; // x1
  FollowerRootComponent_c *v32; // x0
  struct UIAtlas_o *partyOrganizationAtlas; // x20
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  UILabel_o *infomationLabel; // x20
  UnityEngine_GameObject_o *refreshButtonBase; // x20
  bool v37; // w8
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mDispInfos; // x8
  ConstantMaster_o *v39; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_Action_o *v41; // x20
  System_Action_o *v42; // x20
  QuestPhaseMaster_o *v43; // x20
  struct BattleSetupInfo_o *v44; // x8
  NpcFollowerMaster_o *v45; // x20
  struct BattleSetupInfo_o *v46; // x8
  struct BattleSetupInfo_o *v47; // x8
  const MethodInfo *v48; // x1
  const MethodInfo *v49; // x4
  struct BattleSetupInfo_o *v50; // x8

  if ( (byte_4C1CEE2 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, data);
    sub_1C3B764(&AtlasManager_TypeInfo, v5);
    sub_1C3B764(&BalanceConfig_TypeInfo, v6);
    sub_1C3B764(&BattleSetupInfo_TypeInfo, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_ConstantMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v9);
    sub_1C3B764(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v10);
    sub_1C3B764(&Method_FollowerRootComponent_EndLoadCommonBg__, v11);
    sub_1C3B764(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v12);
    sub_1C3B764(&FollowerRootComponent_TypeInfo, v13);
    sub_1C3B764(&LocalizationManager_TypeInfo, v14);
    sub_1C3B764(&RandomLimitCountManager_TypeInfo, v15);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v18);
    sub_1C3B764(&TutorialFlag_TypeInfo, v19);
    sub_1C3B764(&StringLiteral_13813/*"The reference node is not a child of this node."*/, v20);
    sub_1C3B764(&StringLiteral_13814/*"The referring attribute must be present."*/, v21);
    sub_1C3B764(&StringLiteral_6570/*"Field '{0}' defined on type '{1}' is not a field on the target object which is of type '{2}'."*/, v22);
    sub_1C3B764(&StringLiteral_1/*""*/, v23);
    byte_4C1CEE2 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_95;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    klass = Instance[2].klass;
    if ( !klass )
      goto LABEL_95;
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)klass->_1.this_arg.data;
    sub_1C3B708(&this->fields.battleSetupInfo);
    Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    if ( !MissionNotifyManager__IsPause(Instance, 0LL) )
    {
      Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_95;
      MissionNotifyManager__StartPause(Instance, 0LL);
    }
  }
  else
  {
    if ( data )
    {
      methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        v29 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo
            ? (struct BattleSetupInfo_o *)data
            : 0LL;
      else
        v29 = 0LL;
      this->fields.battleSetupInfo = v29;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    else
    {
      this->fields.battleSetupInfo = 0LL;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
    }
    sub_1C3B708(p_battleSetupInfo);
  }
  if ( !this->fields.battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v27);
    return;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v31);
  v32 = FollowerRootComponent_TypeInfo;
  partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
  if ( !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v32 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v32->static_fields;
  static_fields->partyOrganizationAtlasCache = partyOrganizationAtlas;
  sub_1C3B708(&static_fields->partyOrganizationAtlasCache);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_95;
  TitleInfoControl__setTitleInfo_38563656((TitleInfoControl_o *)Instance, this->fields.myFSM, 3, 64, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !Instance )
    goto LABEL_95;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)Instance, 1, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !Instance )
    goto LABEL_95;
  FollowerSelectItemListViewManager__DestroyList_31882012(
    (FollowerSelectItemListViewManager_o *)Instance,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Instance = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6570/*"Field '{0}' defined on type '{1}' is not a field on the target object which is of type '{2}'."*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_95;
  UILabel__set_text(infomationLabel, (System_String_o *)Instance, 0LL);
  Instance = (MissionNotifyManager_o *)BalanceConfig_TypeInfo;
  refreshButtonBase = this->fields.refreshButtonBase;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !refreshButtonBase )
    goto LABEL_95;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0LL);
  Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0LL;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  this->fields.isInitRecommendRequest = 0;
  if ( !Instance )
    goto LABEL_95;
  v37 = Instance[1].fields.mNoticeNumberComp || LODWORD(Instance[1].fields.assetLoadedEventIdList) != 0;
  if ( (v37 & BYTE1(Instance[1].klass)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Instance, 1, 0LL),
        (Instance = (MissionNotifyManager_o *)this->fields.battleSetupInfo) == 0LL)
    || (mDispInfos = Instance[1].fields.mDispInfos) == 0LL )
  {
LABEL_95:
    sub_1C3B9C0(Instance, v25);
  }
  if ( BYTE2(mDispInfos[9].fields._size) )
  {
LABEL_43:
    FollowerRootComponent__StartBattleSetupMenu(this, v25);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_39109112(102, 0LL) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_95;
    Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !Instance )
      goto LABEL_95;
    v39 = (ConstantMaster_o *)Instance;
    Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                           (ConstantMaster_o *)Instance,
                                           (System_String_o *)StringLiteral_13813/*"The reference node is not a child of this node."*/,
                                           0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_95;
    if ( battleSetupInfo->fields.questId == (_DWORD)Instance )
    {
      Instance = (MissionNotifyManager_o *)ConstantMaster__GetValue(v39, (System_String_o *)StringLiteral_13814/*"The referring attribute must be present."*/, 0LL);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_95;
      if ( battleSetupInfo->fields.questPhase == (_DWORD)Instance )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      goto LABEL_43;
    Instance = (MissionNotifyManager_o *)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !Instance )
      goto LABEL_95;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_95;
  }
  Instance = (MissionNotifyManager_o *)battleSetupInfo->fields.questRestrictionInfo;
  if ( !Instance )
    goto LABEL_95;
  if ( !BYTE3(Instance[5].fields.assetLoadedEventIdList)
    && !BYTE1(Instance[5].fields.assetLoadedEventIdList)
    && !LOBYTE(Instance[5].monitor)
    && !BYTE3(Instance[5].fields.mNoDispInfos) )
  {
    Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( this->fields.battleSetupInfo )
      {
        v43 = (QuestPhaseMaster_o *)Instance;
        Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
        v44 = this->fields.battleSetupInfo;
        if ( v44 )
        {
          if ( v43 )
          {
            Instance = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                   v43,
                                                   (int32_t)Instance,
                                                   v44->fields.questPhase,
                                                   0LL);
            if ( Instance && LOBYTE(Instance->fields.mNoDispInfos) )
            {
              Instance = (MissionNotifyManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_95;
              Instance = (MissionNotifyManager_o *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !this->fields.battleSetupInfo )
                goto LABEL_95;
              v45 = (NpcFollowerMaster_o *)Instance;
              Instance = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
              v46 = this->fields.battleSetupInfo;
              if ( !v46 )
                goto LABEL_95;
              if ( !v45 )
                goto LABEL_95;
              Instance = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                     v45,
                                                     (int32_t)Instance,
                                                     v46->fields.questPhase,
                                                     0LL);
              if ( !Instance )
                goto LABEL_95;
              if ( !Instance->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_70;
              }
            }
            v47 = this->fields.battleSetupInfo;
            if ( v47 )
            {
              Instance = (MissionNotifyManager_o *)v47->fields.questRestrictionInfo;
              if ( Instance )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v48);
                v50 = this->fields.battleSetupInfo;
                if ( v50 )
                {
                  Instance = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( Instance )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)Instance,
                      v50->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v49);
                    Instance = (MissionNotifyManager_o *)this->fields.backSkinSprite;
                    if ( Instance )
                    {
                      Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)Instance,
                                                             0LL);
                      if ( Instance )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                        goto LABEL_66;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_95;
  }
  this->fields.tutorialState = 1;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)Instance, 0LL) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_66:
    v41 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v41, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_70:
  v42 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v42, 1, 0LL);
}


void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_1C3B9C0(this, type);
  battleSetupInfo->fields.followerType = 0;
  if ( (type | 4) == 5 )
    battleSetupInfo->fields.followerType = type;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4C1CF0A & 1) == 0 )
  {
    sub_1C3B764(&FollowerRootComponent___c_TypeInfo, v1);
    byte_4C1CF0A = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FollowerRootComponent___c_TypeInfo->static_fields->__9 = (struct FollowerRootComponent___c_o *)v2;
  sub_1C3B708(FollowerRootComponent___c_TypeInfo->static_fields);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__50_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__65_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}