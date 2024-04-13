void __fastcall FollowerRootComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  FollowerRootComponent_c *v4; // x8

  if ( (byte_42E6A48 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerRootComponent_TypeInfo, v1, v2, v3);
    byte_42E6A48 = 1;
  }
  FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE = 26;
  v4 = FollowerRootComponent_TypeInfo;
  FollowerRootComponent_TypeInfo->static_fields->RETURN_TERMINAL_MESSAGE_FONT_SIZE = 27;
  v4->static_fields->RETURN_TERMINAL_MESSAGE_POSITION_Y = 10;
  v4->static_fields->RETURN_TERMINAL_MESSAGE_SPACING_Y = 5;
}


void __fastcall FollowerRootComponent___ctor(FollowerRootComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E6A47 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6A47 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.backupBgmName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.backupBgmName, v9, v2, v3, v4, v5, v6, v7);
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__CallbackFollowerList(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_42E6A2E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, (_DWORD)result, (_DWORD)method, v3);
    byte_42E6A2E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B5D69C(0LL, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/, 0LL);
}


void __fastcall FollowerRootComponent__CallbackRefresh(
        FollowerRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v13; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerSelectItemListViewManager_o *v15; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v16; // x21

  if ( (byte_42E6A3E & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6, v7);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v8, v9, v10);
    byte_42E6A3E = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_13;
  v13 = this->fields.operationItemListViewManager;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)BattleSetupInfo__TargetQuestId(
                                                                          (BattleSetupInfo_o *)operationItemListViewManager,
                                                                          0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo
    || !v13
    || (FollowerSelectItemListViewManager__CreateList(
          v13,
          (int32_t)operationItemListViewManager,
          battleSetupInfo->fields.questPhase,
          this->fields.friendPointUpVal,
          this->fields.friendPointUpMaxVal,
          this->fields.friendPointCampaignEntityList,
          battleSetupInfo->fields.questRestrictionInfo,
          0LL),
        v15 = this->fields.operationItemListViewManager,
        v16 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !v15)
    || (FollowerSelectItemListViewManager__SetMode(v15, 2, v16, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.commonConfirmDialog) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(operationItemListViewManager, v11);
  }
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServant(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E6A33 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6, v7);
    byte_42E6A33 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B5D69C(v10, v11);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseShowServantEquip(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E6A36 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6, v7);
    byte_42E6A36 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B5D69C(v10, v11);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
}


void __fastcall FollowerRootComponent__EndCloseTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0

  if ( (byte_42E6A40 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8819/*"MENU_SELECT_ITEM"*/, (_DWORD)method, v2, v3);
    byte_42E6A40 = 1;
  }
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase2, 0, 0LL),
        tutorialMaskBase2 = (UnityEngine_GameObject_o *)this->fields.myFSM,
        this->fields.state = 3,
        !tutorialMaskBase2) )
  {
    sub_B5D69C(tutorialMaskBase2, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)tutorialMaskBase2, (System_String_o *)StringLiteral_8819/*"MENU_SELECT_ITEM"*/, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadCommonBg(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Component_o *backSkinSprite; // x0
  System_Action_o *v12; // x20

  if ( (byte_42E6A26 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FollowerRootComponent_EndLoadOutGameAtlas__, v8, v9, v10);
    byte_42E6A26 = 1;
  }
  backSkinSprite = (UnityEngine_Component_o *)this->fields.backSkinSprite;
  if ( !backSkinSprite
    || (backSkinSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backSkinSprite, 0LL)) == 0LL )
  {
    sub_B5D69C(backSkinSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backSkinSprite, 1, 0LL);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadOutGameAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v12, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadEventAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E6A28 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, v8, v9, v10);
    byte_42E6A28 = 1;
  }
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadPartyOrganizationAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v11, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadOutGameAtlas(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E6A27 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FollowerRootComponent_EndLoadEventAtlas__, v8, v9, v10);
    byte_42E6A27 = 1;
  }
  v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadEventAtlas__, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEventAtlas(v11, 1, 0LL);
}


void __fastcall FollowerRootComponent__EndLoadPartyOrganizationAtlas(
        FollowerRootComponent_o *this,
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
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_42E6A29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v8, v9, v10);
    byte_42E6A29 = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__AdjustButton(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_18;
  FollowerSelectItemListViewManager__SetClassBoardInfo(operationItemListViewManager, 0LL);
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
  if ( this->fields.isForceFadeOut )
  {
    this->fields.isForceFadeOut = 0;
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_18;
    CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !operationItemListViewManager )
      goto LABEL_18;
    CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
    FollowerRootComponent__StartBattleSetupMenu(this, v12);
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
LABEL_18:
    sub_B5D69C(operationItemListViewManager, method);
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo(
         (PartyOrganizationUtility_o *)operationItemListViewManager,
         0LL) )
  {
    operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( operationItemListViewManager )
    {
      CommonUI__maskFadeInit((CommonUI_o *)operationItemListViewManager, 0LL);
      operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( operationItemListViewManager )
      {
        CommonUI__maskFadeout((CommonUI_o *)operationItemListViewManager, 1, 0.0, 0LL, 0LL);
        this->fields.state = 0;
        FollowerRootComponent__Init(this, v13);
        return;
      }
    }
    goto LABEL_18;
  }
}


void __fastcall FollowerRootComponent__EndOpenTutorialArrow(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E6A45 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6, v7);
    byte_42E6A45 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B5D69C(v10, v11);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 4, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndRefreshConfirm(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FollowerRootComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  FollowerListRequest_o *v29; // x20
  const MethodInfo *v30; // x4
  struct BattleSetupInfo_o *v31; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v33; // x21

  v5 = this;
  if ( (byte_42E6A3D & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_CallbackRefresh__, v6, v7, v8);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v9, v10, v11);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FollowerListRequest___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v21, v22, v23);
    this = (FollowerRootComponent_o *)sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v24, v25, v26);
    byte_42E6A3D = 1;
  }
  if ( isDecide )
  {
    battleSetupInfo = v5->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_22;
    if ( battleSetupInfo->fields.isChildFollower )
    {
      this = (FollowerRootComponent_o *)v5->fields.titleInfo;
      if ( !this )
        goto LABEL_22;
      TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)this, 0, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !this )
        goto LABEL_22;
      LOBYTE(this->fields.operationItemListViewManager) = 1;
    }
    v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v28,
      (Il2CppObject *)v5,
      Method_FollowerRootComponent_CallbackRefresh__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    this = (FollowerRootComponent_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v28,
                                        (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FollowerListRequest___);
    if ( v5->fields.battleSetupInfo )
    {
      v29 = (FollowerListRequest_o *)this;
      this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v5->fields.battleSetupInfo, 0LL);
      v31 = v5->fields.battleSetupInfo;
      if ( v31 )
      {
        if ( v29 )
        {
          FollowerListRequest__beginRequest(v29, 1, (int32_t)this, v31->fields.questPhase, v30);
          return;
        }
      }
    }
LABEL_22:
    sub_B5D69C(this, isDecide);
  }
  operationItemListViewManager = v5->fields.operationItemListViewManager;
  v33 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v33,
    (Il2CppObject *)v5,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    goto LABEL_22;
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v33, 0LL);
  this = (FollowerRootComponent_o *)v5->fields.commonConfirmDialog;
  if ( !this )
    goto LABEL_22;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__EndRefreshRest(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E6A3F & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6, v7);
    byte_42E6A3F = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B5D69C(v10, v11);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServant(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21

  if ( (byte_42E6A32 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_EndCloseShowServant__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E6A32 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServant__, 0LL),
        !Instance) )
  {
    sub_B5D69C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndShowServantEquip(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21

  if ( (byte_42E6A35 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_EndCloseShowServantEquip__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E6A35 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__SetScrollView(
          operationItemListViewManager,
          this->fields.openScroll,
          this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v13, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseShowServantEquip__, 0LL),
        !Instance) )
  {
    sub_B5D69C(operationItemListViewManager, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog(Instance, v13, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerCommonGuide(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E6A46 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6, v7);
    byte_42E6A46 = 1;
  }
  this->fields.state = 3;
  operationItemListViewManager = this->fields.operationItemListViewManager;
  v9 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !operationItemListViewManager )
    sub_B5D69C(v10, v11);
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v9, 0LL);
}


void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification1(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  TitleInfoControl_o *titleInfo; // x0
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42E6A43 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v5, v6, v7);
    byte_42E6A43 = 1;
  }
  titleInfo = this->fields.titleInfo;
  this->fields.state = 3;
  if ( !titleInfo
    || (TitleInfoControl__setBackBtnEnable(titleInfo, 0, 0LL),
        operationItemListViewManager = this->fields.operationItemListViewManager,
        v10 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo),
        FollowerSelectItemListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_OnSelectFollowerItem__,
          0LL),
        !operationItemListViewManager) )
  {
    sub_B5D69C(titleInfo, method);
  }
  FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FollowerRootComponent__EndTutorialFollowerGuideNotification2(
        FollowerRootComponent_o *this,
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
  UnityEngine_GameObject_o *tutorialMaskBase2; // x0
  float v15; // s4
  float v16; // s5
  float v17; // s6
  float v18; // s7
  int v19; // s0
  float v23; // s8
  float x; // s0
  float v25; // s4
  WebViewManager_o *Instance; // x0
  Il2CppMethodPointer methodPointer; // kr00_8
  void *invoker_method; // kr08_8
  CommonUI_o *v29; // x20
  System_Action_o *v30; // x21
  MethodInfo v31; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v35; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42E6A44 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FSUtility_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FollowerRootComponent_EndOpenTutorialArrow__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E6A44 = 1;
  }
  v31.methodPointer = 0LL;
  v31.invoker_method = 0LL;
  tutorialMaskBase2 = this->fields.tutorialMaskBase2;
  if ( !tutorialMaskBase2 )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(tutorialMaskBase2, 1, 0LL);
  v33.fields.m_XMin = -500.0;
  v33.fields.m_Width = 1000.0;
  v33.fields.m_Height = 150.0;
  v33.fields.m_YMin = -14.0;
  UnityEngine_Rect___ctor(v33, v15, v16, v17, v18, &v31);
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  if ( FSUtility__IsUnderVista(0LL) )
  {
    v23 = -20.0;
  }
  else
  {
    x = UnityEngine_Rect__get_x(*(UnityEngine_Rect_o *)&v19, &v31);
    v34.fields.m_YMin = 8.0;
    v34.fields.m_XMin = x + 8.0;
    UnityEngine_Rect__set_x(v34, v25, &v31);
    v23 = -12.0;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  methodPointer = v31.methodPointer;
  invoker_method = v31.invoker_method;
  v29 = (CommonUI_o *)Instance;
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_FollowerRootComponent_EndOpenTutorialArrow__, 0LL);
  if ( !v29 )
LABEL_12:
    sub_B5D69C(tutorialMaskBase2, method);
  v32.fields.y = 100.0;
  v32.fields.x = v23;
  *(_QWORD *)&v35.fields.m_XMin = methodPointer;
  *(_QWORD *)&v35.fields.m_Width = invoker_method;
  CommonUI__OpenTutorialArrowMark(v29, v32, 0.0, v35, v30, 0LL);
}


BattleSetupInfo_o *__fastcall FollowerRootComponent__GetBattleSetupInfo(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSetupInfo;
}


void __fastcall FollowerRootComponent__Init(FollowerRootComponent_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UnityEngine_Component_o *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v42; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  PartyOrganizationUtility_c *v44; // x0
  CommonUI_o *Instance; // x20
  System_String_o *v46; // x21
  FollowerRootComponent___c_c *v47; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__47_0; // x23
  System_String_o *v50; // x22
  Il2CppObject *v51; // x24
  struct FollowerRootComponent___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  FollowerSelectItemListViewManager_o *v59; // x20
  System_Action_o *v60; // x21

  if ( (byte_42E6A2F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_FollowerRootComponent___c__Init_b__47_0__, v26, v27, v28);
    sub_B5D5C4(&FollowerRootComponent___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_8819/*"MENU_SELECT_ITEM"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_10456/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1/*""*/, v38, v39, v40);
    byte_42E6A2F = 1;
  }
  if ( !this->fields.state )
  {
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    operationItemListViewManager = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                operationItemListViewManager,
                                                                0LL);
    if ( !operationItemListViewManager )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.battleSetupInfo;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    v42 = this->fields.operationItemListViewManager;
    operationItemListViewManager = (UnityEngine_Component_o *)BattleSetupInfo__TargetQuestId(
                                                                (BattleSetupInfo_o *)operationItemListViewManager,
                                                                0LL);
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo )
      goto LABEL_41;
    if ( !v42 )
      goto LABEL_41;
    FollowerSelectItemListViewManager__CreateList(
      v42,
      (int32_t)operationItemListViewManager,
      battleSetupInfo->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      battleSetupInfo->fields.questRestrictionInfo,
      0LL);
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)operationItemListViewManager, 0LL) > 0 )
      goto LABEL_13;
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    if ( FollowerSelectItemListViewManager__GetItemCount(
           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
           0LL) >= 1 )
    {
LABEL_13:
      operationItemListViewManager = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !operationItemListViewManager )
        goto LABEL_41;
      if ( *((_BYTE *)&operationItemListViewManager[5].fields + 4) )
      {
        v44 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v44 = PartyOrganizationUtility_TypeInfo;
        }
        if ( UnityEngine_PlayerPrefs__GetInt(v44->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
        {
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          operationItemListViewManager = (UnityEngine_Component_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !operationItemListViewManager )
            goto LABEL_41;
          if ( !PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                  (PartyOrganizationUtility_o *)operationItemListViewManager,
                  0LL) )
          {
            Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            operationItemListViewManager = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_10456/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/,
                                                                        0LL);
            v46 = (System_String_o *)operationItemListViewManager;
            v47 = FollowerRootComponent___c_TypeInfo;
            if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
              v47 = FollowerRootComponent___c_TypeInfo;
            }
            static_fields = v47->static_fields;
            _9__47_0 = static_fields->__9__47_0;
            v50 = (System_String_o *)StringLiteral_1/*""*/;
            if ( !_9__47_0 )
            {
              if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v47);
                static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
              }
              v51 = (Il2CppObject *)static_fields->__9;
              _9__47_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
              System_Action___ctor(_9__47_0, v51, Method_FollowerRootComponent___c__Init_b__47_0__, 0LL);
              v52 = FollowerRootComponent___c_TypeInfo->static_fields;
              v52->__9__47_0 = _9__47_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v52->__9__47_0,
                (System_Int32_array **)_9__47_0,
                v53,
                v54,
                v55,
                v56,
                v57,
                v58);
            }
            if ( !Instance )
              goto LABEL_41;
            CommonUI__OpenNotificationDialog(Instance, v50, v46, _9__47_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
          }
        }
      }
      this->fields.state = 2;
      v59 = this->fields.operationItemListViewManager;
      v60 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v60, (Il2CppObject *)this, Method_FollowerRootComponent_OnMoveEnd__, 0LL);
      if ( v59 )
      {
        FollowerSelectItemListViewManager__SetMode_31100548(v59, 1, v60, 0LL);
        return;
      }
LABEL_41:
      sub_B5D69C(operationItemListViewManager, method);
    }
    operationItemListViewManager = (UnityEngine_Component_o *)this->fields.myFSM;
    this->fields.selectItemNum = -1;
    if ( !operationItemListViewManager )
      goto LABEL_41;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)StringLiteral_8819/*"MENU_SELECT_ITEM"*/, 0LL);
  }
}


void __fastcall FollowerRootComponent__OnClickBack(FollowerRootComponent_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  void *Instance; // x0
  const MethodInfo *v72; // x1
  SceneRootComponent_o *StackedRootComponent; // x0
  __int64 v74; // x10
  UnityEngine_Component_o *v75; // x20
  FollowerRootComponent_o *v76; // x0
  const MethodInfo *v77; // x1
  UnityEngine_Component_c *klass; // x8
  int v79; // w8
  void *v80; // x19
  unsigned int v81; // w20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 *v83; // x8
  _QWORD *v84; // x0
  System_Reflection_MethodBase_o *v85; // x0
  TerminalPramsManager_c *v86; // x0
  __int64 *v87; // x8
  System_String_o *v88; // x20
  System_String_o *v89; // x21
  CommonUI_o *v90; // x22
  System_String_o *v91; // x23
  System_String_o *v92; // x24
  CommonConfirmDialog_ClickDelegate_o *v93; // x25
  __int64 v94; // x0

  if ( (byte_42E6A41 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRootComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_Camera___, v8, v9, v10);
    sub_B5D5C4(&Method_FollowerRootComponent_OnClickBack__, v11, v12, v13);
    sub_B5D5C4(&Method_FollowerRootComponent__OnClickBack_b__67_0__, v14, v15, v16);
    sub_B5D5C4(&FollowerRootComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v35, v36, v37);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&SoundManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_6454/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_6453/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_6452/*"FOLLOWER_SELECT_BACK_TITLE"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_1/*""*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_3103/*"CLICK_BACK_BATTLE_SETUP"*/, v68, v69, v70);
    byte_42E6A41 = 1;
  }
  if ( this->fields.state == 3 && !this->fields.tutorialState )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      goto LABEL_80;
    if ( !*((_BYTE *)Instance + 140) )
      goto LABEL_36;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_80;
    StackedRootComponent = AvalonSceneManager__GetStackedRootComponent((AvalonSceneManager_o *)Instance, 0LL);
    if ( StackedRootComponent
      && (v74 = *(&BattleRootComponent_TypeInfo->_2.bitflags2 + 1),
          *(&StackedRootComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v74) )
    {
      if ( (BattleRootComponent_c *)StackedRootComponent->klass->_2.typeHierarchy[v74 - 1] == BattleRootComponent_TypeInfo )
        v75 = (UnityEngine_Component_o *)StackedRootComponent;
      else
        v75 = 0LL;
    }
    else
    {
      v75 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v75, 0LL, 0LL) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      this->fields.state = 4;
      FollowerRootComponent__QuestHintDialogResetTemporarilyId(v76, v77);
      if ( v75 )
      {
        Instance = UnityEngine_Component__get_gameObject(v75, 0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          klass = v75[3].klass;
          if ( klass )
          {
            Instance = klass[1]._1.parent;
            if ( Instance )
            {
              BattleResultComponent__EndResult((BattleResultComponent_o *)Instance, 0LL);
              Instance = this->fields.myFSM;
              if ( Instance )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
                Instance = UnityEngine_Component__get_transform(v75, 0LL);
                if ( Instance )
                {
                  Instance = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                               (UnityEngine_Component_o *)Instance,
                               (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_Camera___);
                  if ( Instance )
                  {
                    v79 = *((_DWORD *)Instance + 6);
                    v80 = Instance;
                    if ( v79 < 1 )
                      return;
                    v81 = 0;
                    while ( 1 )
                    {
                      if ( v81 >= v79 )
                      {
                        v94 = sub_B5D6C8(Instance);
                        sub_B5D668(v94, 0LL);
                      }
                      Instance = (void *)*((_QWORD *)v80 + (int)v81 + 4);
                      if ( !Instance )
                        break;
                      Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                      if ( !Instance )
                        break;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                      v79 = *((_DWORD *)v80 + 6);
                      if ( (int)++v81 >= v79 )
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
LABEL_36:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      if ( AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)Instance, 0LL) )
        goto LABEL_84;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      if ( *((int *)Instance + 12) > 0 )
        goto LABEL_84;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_80;
      if ( *((_BYTE *)Instance + 120) )
      {
LABEL_84:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(1, 0LL);
        battleSetupInfo = this->fields.battleSetupInfo;
        this->fields.state = 4;
        if ( battleSetupInfo )
        {
          if ( battleSetupInfo->fields.isChildFollower )
          {
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_80;
            v83 = &StringLiteral_3103/*"CLICK_BACK_BATTLE_SETUP"*/;
          }
          else
          {
            FollowerRootComponent__QuestHintDialogResetTemporarilyId((FollowerRootComponent_o *)Instance, v72);
            Instance = this->fields.myFSM;
            if ( !Instance )
              goto LABEL_80;
            v83 = &StringLiteral_3102/*"CLICK_BACK"*/;
          }
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v83, 0LL);
          return;
        }
      }
      else
      {
        v84 = Method_FollowerRootComponent_OnClickBack__;
        if ( (*((_BYTE *)Method_FollowerRootComponent_OnClickBack__ + 75) & 2) != 0 )
          v84 = (_QWORD *)sub_B5D5CC(Method_FollowerRootComponent_OnClickBack__);
        v85 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v84, v84[3]);
        OverwriteAssetSoundName__PlaySystemSe(v85, 1, 0LL);
        v86 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v86 = TerminalPramsManager_TypeInfo;
        }
        if ( v86->static_fields->lastPlayQuestConsumeAp <= 0 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v87 = &StringLiteral_6454/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME_AP0"*/;
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v87 = &StringLiteral_6453/*"FOLLOWER_SELECT_BACK_TO_QUEST_NO_AP_CONSUME"*/;
        }
        v88 = LocalizationManager__Get((System_String_o *)*v87, 0LL);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_6452/*"FOLLOWER_SELECT_BACK_TITLE"*/, 0LL);
        v90 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_3333/*"COMMON_CONFIRM_YES"*/, 0LL);
        v92 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
        v93 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
        CommonConfirmDialog_ClickDelegate___ctor(
          v93,
          (Il2CppObject *)this,
          Method_FollowerRootComponent__OnClickBack_b__67_0__,
          0LL);
        Instance = FollowerRootComponent_TypeInfo;
        if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          Instance = FollowerRootComponent_TypeInfo;
        }
        if ( v90 )
        {
          CommonUI__OpenConfirmDecideDlg(
            v90,
            v89,
            v88,
            v91,
            v92,
            v93,
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
            0LL);
          return;
        }
      }
    }
LABEL_80:
    sub_B5D69C(Instance, v72);
  }
}


void __fastcall FollowerRootComponent__OnMoveEnd(FollowerRootComponent_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int32_t tutorialMode; // w8
  CommonUI_o *Instance; // x20
  System_String_o *v40; // x21
  System_Action_o *v41; // x0
  __int64 *v42; // x8
  BattleSetupInfo_o *battleSetupInfo; // x0
  int32_t eventId; // w20
  struct BattleSetupInfo_o *v45; // x8
  struct BattleSetupInfo_o *v46; // x8
  int32_t v47; // w20
  System_Action_o *v48; // x21
  struct BattleSetupInfo_o *v49; // x8
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v51; // x21
  const MethodInfo *v52; // x1
  System_Action_o *v53; // x22

  if ( (byte_42E6A3B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__, v8, v9, v10);
    sub_B5D5C4(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__, v11, v12, v13);
    sub_B5D5C4(&Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__, v14, v15, v16);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v17, v18, v19);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_13666/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_13665/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, v35, v36, v37);
    byte_42E6A3B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.tutorialState == 1 )
    {
      tutorialMode = this->fields.tutorialMode;
      *(_QWORD *)&this->fields.tutorialState = 0x200000002LL;
      if ( tutorialMode == 3 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13666/*"TUTORIAL_MESSAGE_FOLLOWER2"*/, 0LL);
        v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v42 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification2__;
LABEL_30:
        v53 = v41;
        System_Action___ctor(v41, (Il2CppObject *)this, *v42, 0LL);
        if ( Instance )
        {
          CommonUI__OpenTutorialNotificationDialog(Instance, v40, -1, v53, 0LL);
          return;
        }
LABEL_32:
        sub_B5D69C(battleSetupInfo, method);
      }
      if ( tutorialMode == 2 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13665/*"TUTORIAL_MESSAGE_FOLLOWER1"*/, 0LL);
        v41 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v42 = &Method_FollowerRootComponent_EndTutorialFollowerGuideNotification1__;
        goto LABEL_30;
      }
    }
    else
    {
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        goto LABEL_32;
      eventId = battleSetupInfo->fields.eventId;
      battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
      v45 = this->fields.battleSetupInfo;
      if ( !v45 )
        goto LABEL_32;
      battleSetupInfo = (BattleSetupInfo_o *)EventTutorialMaster__IsTutorialAvailable(
                                               eventId,
                                               15,
                                               (int32_t)battleSetupInfo,
                                               v45->fields.questPhase,
                                               0,
                                               0,
                                               0LL);
      if ( ((unsigned __int8)battleSetupInfo & 1) != 0 )
      {
        v46 = this->fields.battleSetupInfo;
        this->fields.state = 2;
        if ( v46 )
        {
          v47 = v46->fields.eventId;
          v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v48,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndTutorialFollowerCommonGuide__,
            0LL);
          battleSetupInfo = this->fields.battleSetupInfo;
          if ( battleSetupInfo )
          {
            battleSetupInfo = (BattleSetupInfo_o *)BattleSetupInfo__TargetQuestId(battleSetupInfo, 0LL);
            v49 = this->fields.battleSetupInfo;
            if ( v49 )
            {
              EventTutorialMaster__CheckTutorial(
                v47,
                15,
                v48,
                (int32_t)battleSetupInfo,
                v49->fields.questPhase,
                0,
                0,
                0LL);
              return;
            }
          }
        }
        goto LABEL_32;
      }
      this->fields.state = 3;
      operationItemListViewManager = this->fields.operationItemListViewManager;
      v51 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
      FollowerSelectItemListViewManager_CallbackFunc___ctor(
        v51,
        (Il2CppObject *)this,
        Method_FollowerRootComponent_OnSelectFollowerItem__,
        0LL);
      if ( !operationItemListViewManager )
        goto LABEL_32;
      FollowerSelectItemListViewManager__SetMode(operationItemListViewManager, 2, v51, 0LL);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      battleSetupInfo = (BattleSetupInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !battleSetupInfo )
        goto LABEL_32;
      if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)battleSetupInfo, 0LL) )
        FollowerRootComponent__StartBattleSetupMenu(this, v52);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  void *operationItemListViewManager; // x0
  __int64 v119; // x8
  __int64 v120; // x20
  SkillInfo_o *v121; // x22
  SkillEntity_o *v122; // x20
  System_String_o *v123; // x20
  System_String_o *v124; // x21
  Il2CppObject *v125; // x0
  System_String_o *v126; // x0
  int32_t v127; // w20
  System_String_o *v128; // x1
  System_String_o *v129; // x3
  System_String_o *v130; // x2
  __int64 v131; // x20
  SkillInfo_o *v132; // x23
  SkillEntity_o *Entity; // x21
  _DWORD *v134; // x20
  System_String_o *v135; // x21
  System_String_o *v136; // x22
  Il2CppObject *v137; // x0
  System_String_o *v138; // x0
  System_String_o *v139; // x21
  Il2CppObject *v140; // x0
  System_String_o *v141; // x0
  int32_t tutorialMode; // w21
  System_String_o *v143; // x20
  FollowerListRequest_c *v144; // x0
  CommonConfirmDialog_o *commonConfirmDialog; // x20
  System_String_o *v146; // x21
  System_String_o *v147; // x22
  CommonConfirmDialog_ClickDelegate_o *v148; // x23
  FollowerSelectItemListViewItem_o *v149; // x20
  __int64 v150; // x21
  __int64 v151; // x22
  __int64 v152; // x8
  __int64 v153; // x21
  __int64 v154; // x22
  EquipTargetInfo_o *EquipInfo; // x21
  int32_t v156; // w8
  int32_t v157; // w8
  SoundManager_c *v158; // x0
  _BYTE *v159; // x20
  PartyOrganizationUtility_c *v160; // x0
  int32_t v161; // w8
  __int64 *v162; // x8
  CommonUI_o *Instance; // x20
  System_String_o *v164; // x21
  System_String_o *v165; // x22
  System_Action_o *v166; // x23
  FollowerSelectItemListViewItem_o *v167; // x20
  const MethodInfo *v168; // x2
  _BYTE *v169; // x8
  __int64 v170; // x22
  __int64 v171; // x23
  const MethodInfo *v172; // x3
  int32_t v173; // w2
  FollowerSelectItemListViewManager_o *v174; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v175; // x21
  int32_t v176; // w1
  CommonUI_o *v177; // x20
  System_String_o *v178; // x21
  FollowerRootComponent___c_c *v179; // x8
  struct FollowerRootComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__62_0; // x23
  System_String_o *v182; // x22
  Il2CppObject *v183; // x24
  struct FollowerRootComponent___c_StaticFields *v184; // x0
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  CommonUI_o *v191; // x20
  System_Action_o *v192; // x21
  __int64 v193; // x0
  int v194; // [xsp+30h] [xbp-70h] BYREF
  int32_t lv; // [xsp+34h] [xbp-6Ch] BYREF
  System_String_o *detail; // [xsp+38h] [xbp-68h] BYREF
  System_String_o *name; // [xsp+40h] [xbp-60h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+48h] [xbp-58h] BYREF
  System_String_o *v199; // [xsp+50h] [xbp-50h] BYREF
  System_String_o *v200; // [xsp+58h] [xbp-48h] BYREF
  SkillInfo_array *v201; // [xsp+68h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v202; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v203; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v204; // 0:x0.16

  if ( (byte_42E6A3C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, n, method);
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillMaster___, v22, v23, v24);
    sub_B5D5C4(&DataManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&FollowerListRequest_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_FollowerRootComponent_EndCloseTutorialArrow__, v34, v35, v36);
    sub_B5D5C4(&Method_FollowerRootComponent_EndRefreshConfirm__, v37, v38, v39);
    sub_B5D5C4(&Method_FollowerRootComponent_EndRefreshRest__, v40, v41, v42);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v43, v44, v45);
    sub_B5D5C4(&FollowerRootComponent_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&int_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v61, v62, v63);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v64, v65, v66);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v67, v68, v69);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v70, v71, v72);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v73, v74, v75);
    sub_B5D5C4(&SoundManager_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&Method_FollowerRootComponent___c__OnSelectFollowerItem_b__62_0__, v79, v80, v81);
    sub_B5D5C4(&FollowerRootComponent___c_TypeInfo, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_6477/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_8819/*"MENU_SELECT_ITEM"*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_8828/*"MENU_SHOW_SUPPORT"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_6474/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v97, v98, v99);
    sub_B5D5C4(&StringLiteral_6475/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, v100, v101, v102);
    sub_B5D5C4(&StringLiteral_10456/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v103, v104, v105);
    sub_B5D5C4(&StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, v106, v107, v108);
    sub_B5D5C4(&StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, v109, v110, v111);
    sub_B5D5C4(&StringLiteral_1/*""*/, v112, v113, v114);
    sub_B5D5C4(&StringLiteral_6476/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, v115, v116, v117);
    byte_42E6A3C = 1;
  }
  v201 = 0LL;
  v200 = 0LL;
  skillInfoList = 0LL;
  v199 = 0LL;
  detail = 0LL;
  name = 0LL;
  if ( this->fields.state == 3 )
  {
    this->fields.selectItemNum = n;
    switch ( kind )
    {
      case 1:
        if ( this->fields.tutorialState )
          goto LABEL_94;
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v167 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
        if ( *((_BYTE *)operationItemListViewManager + 168)
          || FollowerSelectItemListViewItem__get_SvtId(
               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
               0LL) <= 0 )
        {
          goto LABEL_161;
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        FollowerRootComponent__SelectShowServant(this, v167, v168);
        return;
      case 2:
      case 3:
      case 4:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         this->fields.selectItemNum,
                                         0LL);
        v131 = kind == 3 ? 1LL : 2LL * (kind == 4);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetSkillInfo(
                                                 (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                                 &v201,
                                                 0LL);
        if ( !v201 )
          goto LABEL_202;
        if ( (unsigned int)v131 >= v201->max_length )
          goto LABEL_203;
        v132 = v201->m_Items[v131];
        if ( !v132 || v132->fields.id < 1 || v132->fields.lv < 1 )
          goto LABEL_165;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)operationItemListViewManager,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)operationItemListViewManager,
                                    v132->fields.id,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)operationItemListViewManager,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v132->fields.id,
                                         v132->fields.lv,
                                         0LL);
        if ( !Entity )
          goto LABEL_202;
        v134 = operationItemListViewManager;
        SkillEntity__getSkillMessageInfo(Entity, &v200, &v199, v132->fields.lv, 0LL);
        v135 = v200;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v136 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v132->fields.lv;
        v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v138 = System_String__Format(v136, v137, 0LL);
        v200 = System_String__Concat_44580072(v135, (System_String_o *)StringLiteral_81/*" "*/, v138, 0LL);
        operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
        if ( !v134 )
          goto LABEL_202;
        v139 = (System_String_o *)operationItemListViewManager;
        v194 = v134[6];
        v140 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v194);
        v141 = System_String__Format(v139, v140, 0LL);
        tutorialMode = this->fields.tutorialMode;
        v143 = v141;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v128 = v200;
        v129 = v199;
        if ( tutorialMode == 3 )
        {
          v130 = v143;
LABEL_55:
          CommonUI__OpenDetailLongInfoDialogOnFade((CommonUI_o *)operationItemListViewManager, v128, v130, v129, 0LL);
        }
        else
        {
          v130 = v143;
LABEL_150:
          CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)operationItemListViewManager, v128, v130, v129, 1, 0, 0LL);
        }
        goto LABEL_165;
      case 5:
        if ( !this->fields.tutorialState )
        {
          operationItemListViewManager = this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_202;
          operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                           n,
                                           0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v169 = operationItemListViewManager;
          v158 = SoundManager_TypeInfo;
          if ( !v169[168] )
          {
            if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) == 0 )
              goto LABEL_178;
LABEL_176:
            if ( !v158->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v158);
LABEL_178:
            SoundManager__playSystemSe(0, 0LL);
            operationItemListViewManager = this->fields.myFSM;
            if ( operationItemListViewManager )
            {
              v162 = &StringLiteral_8828/*"MENU_SHOW_SUPPORT"*/;
              goto LABEL_180;
            }
            goto LABEL_202;
          }
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 )
          {
LABEL_162:
            if ( !v158->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v158);
          }
LABEL_164:
          SoundManager__playSystemSe(2, 0LL);
          goto LABEL_165;
        }
        v157 = this->fields.tutorialMode;
        if ( v157 == 3 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
LABEL_173:
          v174 = this->fields.operationItemListViewManager;
          v175 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v175,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v174 )
            goto LABEL_202;
          v176 = 4;
          goto LABEL_167;
        }
        if ( v157 == 2 )
        {
          v158 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
            goto LABEL_178;
          goto LABEL_176;
        }
        return;
      case 6:
        if ( !this->fields.tutorialState )
        {
          operationItemListViewManager = this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_202;
          operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                           (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                           n,
                                           0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v149 = (FollowerSelectItemListViewItem_o *)operationItemListViewManager;
          if ( !FollowerSelectItemListViewItem__get_ServantLeader(
                  (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                  0LL) )
            goto LABEL_151;
          operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v149, 0LL);
          if ( !operationItemListViewManager )
            goto LABEL_202;
          v151 = *((_QWORD *)operationItemListViewManager + 6);
          v150 = *((_QWORD *)operationItemListViewManager + 7);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v202.fields.currentCryptoKey = v151;
          *(_QWORD *)&v202.fields.fakeValue = v150;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v202, 0LL) >= 1 )
          {
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v149, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            if ( !*((_QWORD *)operationItemListViewManager + 18) )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v149, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            v152 = *((_QWORD *)operationItemListViewManager + 18);
            if ( !v152 )
              goto LABEL_202;
            v154 = *(_QWORD *)(v152 + 56);
            v153 = *(_QWORD *)(v152 + 64);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v203.fields.currentCryptoKey = v154;
            *(_QWORD *)&v203.fields.fakeValue = v153;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v203, 0LL) < 1 )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v149, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            if ( ServantLeaderInfo__IsHideEquip((ServantLeaderInfo_o *)operationItemListViewManager, 0LL) )
              goto LABEL_161;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_ServantLeader(v149, 0LL);
            if ( !operationItemListViewManager )
              goto LABEL_202;
            EquipInfo = (EquipTargetInfo_o *)*((_QWORD *)operationItemListViewManager + 18);
            if ( !EquipInfo )
            {
LABEL_161:
              v158 = SoundManager_TypeInfo;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                goto LABEL_164;
              goto LABEL_162;
            }
          }
          else
          {
LABEL_151:
            EquipInfo = FollowerSelectItemListViewItem__get_EquipInfo(v149, 0LL);
            if ( !EquipInfo )
              goto LABEL_161;
          }
          v171 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
          v170 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v204.fields.currentCryptoKey = v171;
          *(_QWORD *)&v204.fields.fakeValue = v170;
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v204, 0LL) >= 1 )
          {
            if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SoundManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            }
            SoundManager__playSystemSe(0, 0LL);
            if ( FollowerSelectItemListViewItem__get_FollowerType(v149, 0LL) == 1 )
            {
              v173 = 13;
            }
            else if ( FollowerSelectItemListViewItem__get_FollowerType(v149, 0LL) == 5 )
            {
              v173 = 14;
            }
            else if ( v149->fields.isNpc )
            {
              v173 = 19;
            }
            else
            {
              v173 = 16;
            }
            FollowerRootComponent__SelectShowServantEquip(this, EquipInfo, v173, v172);
            return;
          }
          goto LABEL_161;
        }
LABEL_94:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        v156 = this->fields.tutorialMode;
        if ( v156 == 3 )
          goto LABEL_173;
        if ( v156 == 2 )
          goto LABEL_165;
        return;
      case 7:
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v144 = FollowerListRequest_TypeInfo;
        if ( (BYTE3(FollowerListRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FollowerListRequest_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FollowerListRequest_TypeInfo);
        }
        if ( FollowerListRequest__checkRefreshRate((const MethodInfo *)v144) )
        {
          commonConfirmDialog = this->fields.commonConfirmDialog;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v146 = LocalizationManager__Get((System_String_o *)StringLiteral_6477/*"FOLLOWER_SELECT_REFRESH_TITLE"*/, 0LL);
          v147 = LocalizationManager__Get((System_String_o *)StringLiteral_6474/*"FOLLOWER_SELECT_REFRESH_MESSAGE"*/, 0LL);
          v148 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
          CommonConfirmDialog_ClickDelegate___ctor(
            v148,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_EndRefreshConfirm__,
            0LL);
          operationItemListViewManager = FollowerRootComponent_TypeInfo;
          if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
          }
          if ( commonConfirmDialog )
          {
            CommonConfirmDialog__Open_18119532(
              commonConfirmDialog,
              v146,
              v147,
              1,
              v148,
              FollowerRootComponent_TypeInfo->static_fields->LIST_UPDATE_MESSAGE_FONT_SIZE,
              0,
              0,
              0,
              0LL);
            return;
          }
        }
        else
        {
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v164 = LocalizationManager__Get((System_String_o *)StringLiteral_6476/*"FOLLOWER_SELECT_REFRESH_REST_TITLE"*/, 0LL);
          v165 = LocalizationManager__Get((System_String_o *)StringLiteral_6475/*"FOLLOWER_SELECT_REFRESH_REST_MESSAGE"*/, 0LL);
          v166 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v166, (Il2CppObject *)this, Method_FollowerRootComponent_EndRefreshRest__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(Instance, v164, v165, v166, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
            return;
          }
        }
        goto LABEL_202;
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        v119 = (unsigned int)(kind - 9);
        v120 = (unsigned int)v119 < 4 ? v119 + 1 : 0LL;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = (void *)FollowerSelectItemListViewItem__GetAppendSkillInfo(
                                                 (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
                                                 &skillInfoList,
                                                 *((_BYTE *)operationItemListViewManager + 168),
                                                 0LL);
        if ( !skillInfoList )
          goto LABEL_202;
        if ( (unsigned int)v120 >= skillInfoList->max_length )
        {
LABEL_203:
          v193 = sub_B5D6C8(operationItemListViewManager);
          sub_B5D668(v193, 0LL);
        }
        v121 = skillInfoList->m_Items[v120];
        if ( !v121 || v121->fields.id < 1 || v121->fields.lv < 1 )
          goto LABEL_161;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        operationItemListViewManager = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v122 = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)operationItemListViewManager,
                                  v121->fields.id,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        operationItemListViewManager = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = SkillLvMaster__GetEntity(
                                         (SkillLvMaster_o *)operationItemListViewManager,
                                         v121->fields.id,
                                         v121->fields.lv,
                                         0LL);
        if ( !v122 )
          goto LABEL_202;
        SkillEntity__getSkillMessageInfo(v122, &name, &detail, v121->fields.lv, 0LL);
        v123 = name;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v124 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
        lv = v121->fields.lv;
        v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
        v126 = System_String__Format(v124, v125, 0LL);
        name = System_String__Concat_44580072(v123, (System_String_o *)StringLiteral_81/*" "*/, v126, 0LL);
        v127 = this->fields.tutorialMode;
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v129 = detail;
        v128 = name;
        v130 = (System_String_o *)StringLiteral_1/*""*/;
        if ( v127 != 3 )
          goto LABEL_150;
        goto LABEL_55;
      default:
        operationItemListViewManager = this->fields.operationItemListViewManager;
        if ( !operationItemListViewManager )
          goto LABEL_202;
        operationItemListViewManager = FollowerSelectItemListViewManager__GetItem(
                                         (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                         n,
                                         0LL);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        v159 = operationItemListViewManager;
        if ( FollowerSelectItemListViewItem__get_SvtId(
               (FollowerSelectItemListViewItem_o *)operationItemListViewManager,
               0LL) < 1
          || v159[203]
          || v159[254] )
        {
          goto LABEL_161;
        }
        operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        if ( !*((_BYTE *)operationItemListViewManager + 140) )
          goto LABEL_121;
        v160 = PartyOrganizationUtility_TypeInfo;
        if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
          v160 = PartyOrganizationUtility_TypeInfo;
        }
        if ( !UnityEngine_PlayerPrefs__GetInt(v160->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
          goto LABEL_121;
        if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
        }
        operationItemListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !operationItemListViewManager )
          goto LABEL_202;
        if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(
               (PartyOrganizationUtility_o *)operationItemListViewManager,
               0LL) )
        {
LABEL_121:
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          if ( !this->fields.tutorialState )
          {
LABEL_129:
            operationItemListViewManager = this->fields.myFSM;
            if ( operationItemListViewManager )
            {
              v162 = &StringLiteral_8819/*"MENU_SELECT_ITEM"*/;
LABEL_180:
              PlayMakerFSM__SendEvent((PlayMakerFSM_o *)operationItemListViewManager, (System_String_o *)*v162, 0LL);
              return;
            }
LABEL_202:
            sub_B5D69C(operationItemListViewManager, *(_QWORD *)&kind);
          }
          v161 = this->fields.tutorialMode;
          if ( v161 == 3 )
          {
            this->fields.state = 4;
            v191 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v192 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v192, (Il2CppObject *)this, Method_FollowerRootComponent_EndCloseTutorialArrow__, 0LL);
            if ( !v191 )
              goto LABEL_202;
            CommonUI__CloseTutorialArrowMark(v191, v192, 0LL);
          }
          else if ( v161 == 2 )
          {
            operationItemListViewManager = this->fields.titleInfo;
            if ( !operationItemListViewManager )
              goto LABEL_202;
            TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)operationItemListViewManager, 1, 0LL);
            goto LABEL_129;
          }
        }
        else
        {
          v177 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          operationItemListViewManager = LocalizationManager__Get((System_String_o *)StringLiteral_10456/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
          v178 = (System_String_o *)operationItemListViewManager;
          v179 = FollowerRootComponent___c_TypeInfo;
          if ( (BYTE3(FollowerRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !FollowerRootComponent___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FollowerRootComponent___c_TypeInfo);
            v179 = FollowerRootComponent___c_TypeInfo;
          }
          static_fields = v179->static_fields;
          _9__62_0 = static_fields->__9__62_0;
          v182 = (System_String_o *)StringLiteral_1/*""*/;
          if ( !_9__62_0 )
          {
            if ( (BYTE3(v179->vtable._0_Equals.methodPtr) & 4) != 0 && !v179->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v179);
              static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
            }
            v183 = (Il2CppObject *)static_fields->__9;
            _9__62_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(_9__62_0, v183, Method_FollowerRootComponent___c__OnSelectFollowerItem_b__62_0__, 0LL);
            v184 = FollowerRootComponent___c_TypeInfo->static_fields;
            v184->__9__62_0 = _9__62_0;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v184->__9__62_0,
              (System_Int32_array **)_9__62_0,
              v185,
              v186,
              v187,
              v188,
              v189,
              v190);
          }
          if ( !v177 )
            goto LABEL_202;
          CommonUI__OpenNotificationDialog(v177, v182, v178, _9__62_0, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
LABEL_165:
          v174 = this->fields.operationItemListViewManager;
          v175 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
          FollowerSelectItemListViewManager_CallbackFunc___ctor(
            v175,
            (Il2CppObject *)this,
            Method_FollowerRootComponent_OnSelectFollowerItem__,
            0LL);
          if ( !v174 )
            goto LABEL_202;
          v176 = 2;
LABEL_167:
          FollowerSelectItemListViewManager__SetMode(v174, v176, v175, 0LL);
        }
        break;
    }
  }
}


void __fastcall FollowerRootComponent__PlayBGM(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FollowerRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  BalanceConfig_c *v37; // x0
  QuestPhaseMaster_o *v38; // x20
  struct BattleSetupInfo_o *v39; // x8
  int32_t FormationBgmId; // w0
  int32_t v41; // w20
  System_String_o *BgmFileName; // x20
  bool IsNonStopEndBgm; // w21
  const MethodInfo *v44; // x2
  struct TitleInfoControl_o *titleInfo; // x8
  System_String_o *backBtnButton; // x19
  SoundManager_c *v47; // x0
  struct BattleSetupInfo_o *v48; // x8
  const MethodInfo *v49; // x2
  QuestMaster_o *v50; // x20
  struct BattleSetupInfo_o *v51; // x8
  System_String_o *v52; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42E6A24 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BgmManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SoundManager_TypeInfo, v29, v30, v31);
    this = (FollowerRootComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v32, v33, v34);
    byte_42E6A24 = 1;
  }
  entity = 0LL;
  battleSetupInfo = v4->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_72;
  questId = battleSetupInfo->fields.questId;
  v37 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  if ( questId != v37->static_fields->PrologueQuestId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (FollowerRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !v4->fields.battleSetupInfo )
      goto LABEL_72;
    v38 = (QuestPhaseMaster_o *)this;
    this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
    v39 = v4->fields.battleSetupInfo;
    if ( !v39 || !v38 )
      goto LABEL_72;
    if ( QuestPhaseMaster__TryGetEntity(v38, &entity, (int32_t)this, v39->fields.questPhase, 0LL) )
    {
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_72;
      FormationBgmId = QuestPhaseEntity__GetFormationBgmId(entity, 0LL);
      if ( (FormationBgmId & 0x80000000) != 0 )
      {
        BgmFileName = 0LL;
      }
      else
      {
        v41 = FormationBgmId;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (FollowerRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
        if ( !this )
          goto LABEL_72;
        BgmFileName = BgmMaster__GetBgmFileName((BgmMaster_o *)this, v41, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
      this = (FollowerRootComponent_o *)entity;
      if ( !entity )
        goto LABEL_72;
      IsNonStopEndBgm = QuestPhaseEntity__IsNonStopEndBgm(entity, 0LL);
    }
    else
    {
      IsNonStopEndBgm = 0;
      BgmFileName = 0LL;
    }
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !this )
      goto LABEL_72;
    this = (FollowerRootComponent_o *)PartyOrganizationUtility__ExistsTemporaryPartyInfo(
                                        (PartyOrganizationUtility_o *)this,
                                        0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        FollowerRootComponent__SetBackupBgmName(v4, IsNonStopEndBgm, v44);
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      this = (FollowerRootComponent_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        titleInfo = this->fields.titleInfo;
        if ( titleInfo )
        {
          backBtnButton = (System_String_o *)titleInfo->fields.backBtnButton;
          v47 = SoundManager_TypeInfo;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
          {
LABEL_65:
            v52 = backBtnButton;
LABEL_70:
            SoundManager__playBgm(v52, 0LL);
            return;
          }
LABEL_63:
          if ( !v47->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v47);
          goto LABEL_65;
        }
      }
      goto LABEL_72;
    }
    v48 = v4->fields.battleSetupInfo;
    if ( !v48 )
      goto LABEL_72;
    if ( !v48->fields.isScriptBeforePartySelect )
      goto LABEL_51;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    if ( !SoundManager__isPlayBgm(0LL, 0LL) )
      goto LABEL_51;
    if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
    {
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !BgmManager__IsPlayBgm(BgmFileName, 0LL) )
      {
LABEL_51:
        if ( !System_String__IsNullOrEmpty(BgmFileName, 0LL) )
        {
          FollowerRootComponent__SetBackupBgmName(v4, IsNonStopEndBgm, v49);
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          v52 = BgmFileName;
          goto LABEL_70;
        }
        this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( this )
        {
          this = (FollowerRootComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( v4->fields.battleSetupInfo )
          {
            v50 = (QuestMaster_o *)this;
            this = (FollowerRootComponent_o *)BattleSetupInfo__TargetQuestId(v4->fields.battleSetupInfo, 0LL);
            if ( v50 )
            {
              this = (FollowerRootComponent_o *)QuestMaster__getQuestEntity(v50, (int32_t)this, 0LL);
              v51 = v4->fields.battleSetupInfo;
              if ( v51 )
              {
                if ( this )
                {
                  backBtnButton = QuestEntity__GetBgmName((QuestEntity_o *)this, v51->fields.warId, 0LL);
                  if ( System_String__IsNullOrEmpty(backBtnButton, 0LL) )
                  {
                    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BgmManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                    }
                    backBtnButton = BgmManager__GetMainBgmName(0LL);
                  }
                  v47 = SoundManager_TypeInfo;
                  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0 )
                    goto LABEL_65;
                  goto LABEL_63;
                }
              }
            }
          }
        }
LABEL_72:
        sub_B5D69C(this, method);
      }
    }
  }
}


void __fastcall FollowerRootComponent__QuestHintDialogResetTemporarilyId(
        FollowerRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6A42 & 1) == 0 )
  {
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6A42 = 1;
  }
  if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
  }
  QuestHintDialogOpenManager__ResetTemporarilyId(0LL);
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
    sub_B5D69C(operationItemListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  this->fields.state = 0;
}


void __fastcall FollowerRootComponent__RequestFollowerList(FollowerRootComponent_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  FollowerListRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v19; // x1
  FollowerListRequest_o *v20; // x20
  const MethodInfo *v21; // x4
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_42E6A2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_FollowerRootComponent_CallbackFollowerList__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_FollowerListRequest___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11212/*"REQUEST_OK"*/, v14, v15, v16);
    byte_42E6A2D = 1;
  }
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_CallbackFollowerList__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                 v17,
                                                                 (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_FollowerListRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  v20 = Request_WarBoardWallAttackRequest;
  if ( (((__int64 (__fastcall *)(FollowerListRequest_o *, Il2CppMethodPointer))Request_WarBoardWallAttackRequest->klass->vtable._7_checkExpirationDate.method)(
          Request_WarBoardWallAttackRequest,
          Request_WarBoardWallAttackRequest->klass->vtable._8_isBackgroundRequest.methodPtr) & 1) != 0 )
  {
    Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)this->fields.myFSM;
    if ( Request_WarBoardWallAttackRequest )
    {
      PlayMakerFSM__SendEvent(
        (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
        (System_String_o *)StringLiteral_11212/*"REQUEST_OK"*/,
        0LL);
      return;
    }
LABEL_13:
    sub_B5D69C(Request_WarBoardWallAttackRequest, v19);
  }
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)this->fields.battleSetupInfo;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_13;
  Request_WarBoardWallAttackRequest = (FollowerListRequest_o *)BattleSetupInfo__TargetQuestId(
                                                                 (BattleSetupInfo_o *)Request_WarBoardWallAttackRequest,
                                                                 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_13;
  FollowerListRequest__beginRequest(
    v20,
    0,
    (int32_t)Request_WarBoardWallAttackRequest,
    battleSetupInfo->fields.questPhase,
    v21);
}


bool __fastcall FollowerRootComponent__ReturnBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  FollowerRootComponent_o *v4; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x19

  v4 = this;
  if ( (byte_42E6A38 & 1) == 0 )
  {
    this = (FollowerRootComponent_o *)sub_B5D5C4(
                                        &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                        (_DWORD)method,
                                        v2,
                                        v3);
    byte_42E6A38 = 1;
  }
  battleSetupInfo = v4->fields.battleSetupInfo;
  v4->fields.state = 5;
  if ( !battleSetupInfo )
    goto LABEL_8;
  if ( battleSetupInfo->fields.isChildFollower )
  {
    battleSetupInfo->fields.followerId = 0LL;
    battleSetupInfo = v4->fields.battleSetupInfo;
  }
  this = (FollowerRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_8:
    sub_B5D69C(this, method);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)this, 40, 1, (Il2CppObject *)battleSetupInfo, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__ReturnQuestMenu(FollowerRootComponent_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  Il2CppObject *battleSetupInfo; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_o *backupBgmName; // x22
  AvalonSceneManager_o *Instance; // x0
  __int64 v32; // x1
  int v33; // w2
  __int64 v34; // x3
  TerminalPramsManager_c *v35; // x0

  if ( (byte_42E6A37 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SoundManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    byte_42E6A37 = 1;
  }
  battleSetupInfo = (Il2CppObject *)this->fields.battleSetupInfo;
  if ( !System_String__IsNullOrEmpty(this->fields.backupBgmName, 0LL) )
  {
    backupBgmName = this->fields.backupBgmName;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playBgm(backupBgmName, 0LL);
  }
  this->fields.battleSetupInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.battleSetupInfo, 0LL, v24, v25, v26, v27, v28, v29);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( LOBYTE(Instance[1].fields.prevscenetemp) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    Instance = (AvalonSceneManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    LOBYTE(Instance[1].fields.prevscenetemp) = 0;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B29 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v32, v33, v34);
      byte_42E4B29 = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    v35->static_fields->_IsAutoResume_k__BackingField = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  if ( AvalonSceneManager__IsStackScene(Instance, 0LL) )
  {
    this->fields.state = 0;
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    AvalonSceneManager__popSceneRefresh(Instance, 1, battleSetupInfo, 0LL);
  }
  else
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      goto LABEL_37;
    AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_37:
    sub_B5D69C(Instance, v32);
  AvalonSceneManager__UnloadScene_PartyOrganizationRootComponent_(
    Instance,
    (const MethodInfo_1AD5990 *)Method_AvalonSceneManager_UnloadScene_PartyOrganizationRootComponent___);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  return 1;
}


void __fastcall FollowerRootComponent__ReturnSupportList(FollowerRootComponent_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int32_t state; // w8
  void *operationItemListViewManager; // x0
  FollowerSelectItemListViewManager_o *v25; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v26; // x21
  int v27; // w2
  __int64 v28; // x3
  FollowerSelectItemListViewManager_o *v29; // x20
  FollowerSelectItemListViewManager_c *v30; // x0
  FollowerSelectItemListViewManager_o *v31; // x20
  FollowerSelectItemListViewManager_CallbackFunc_o *v32; // x21
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  FollowerQuestInfomationDraw_o *followerQuestInfomationDraw; // x20
  QuestRestrictionInfo_o *questRestrictionInfo; // x21
  const MethodInfo *v36; // x4
  CommonUI_o *v37; // x20

  if ( (byte_42E6A2B & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v8, v9, v10);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v20, v21, v22);
    byte_42E6A2B = 1;
  }
  state = this->fields.state;
  this->fields.state = 3;
  if ( state == 5 )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
    RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_33;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v25 = this->fields.operationItemListViewManager;
    v26 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v26,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v25 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v25, 3, v26, 0LL);
    v29 = this->fields.operationItemListViewManager;
    if ( !v29 )
      goto LABEL_33;
    if ( !byte_42E6A4A )
    {
      sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, (_DWORD)method, v27, v28);
      byte_42E6A4A = 1;
    }
    v30 = FollowerSelectItemListViewManager_TypeInfo;
    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
      v30 = FollowerSelectItemListViewManager_TypeInfo;
    }
    FollowerSelectItemListViewManager__ChangeClass(v29, v30->static_fields->followerClassId, 0LL);
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
LABEL_33:
      sub_B5D69C(operationItemListViewManager, method);
    operationItemListViewManager = (void *)FollowerSelectItemListViewManager__GetDisplayItemNum(
                                             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                                             0LL);
    if ( (int)operationItemListViewManager >= 3 )
    {
      operationItemListViewManager = this->fields.operationItemListViewManager;
      if ( !operationItemListViewManager )
        goto LABEL_33;
      ListViewManager__JumpItem((ListViewManager_o *)operationItemListViewManager, this->fields.selectItemNum, 0LL);
    }
  }
  else
  {
    operationItemListViewManager = this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_33;
    FollowerSelectItemListViewManager__ModifyList(
      (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      0LL);
    v31 = this->fields.operationItemListViewManager;
    v32 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
    FollowerSelectItemListViewManager_CallbackFunc___ctor(
      v32,
      (Il2CppObject *)this,
      Method_FollowerRootComponent_OnSelectFollowerItem__,
      0LL);
    if ( !v31 )
      goto LABEL_33;
    FollowerSelectItemListViewManager__SetMode(v31, 2, v32, 0LL);
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_33;
  followerQuestInfomationDraw = this->fields.followerQuestInfomationDraw;
  questRestrictionInfo = battleSetupInfo->fields.questRestrictionInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager || !followerQuestInfomationDraw )
    goto LABEL_33;
  FollowerQuestInfomationDraw__SetInfomation(
    followerQuestInfomationDraw,
    questRestrictionInfo,
    *((_DWORD *)operationItemListViewManager + 14),
    0LL,
    v36);
  operationItemListViewManager = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v37 = (CommonUI_o *)operationItemListViewManager;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v37 )
    goto LABEL_33;
  CommonUI__maskFadein(v37, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServant(
        FollowerRootComponent_o *this,
        FollowerSelectItemListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *v13; // x21
  ServantLeaderInfo_o *ServantLeader; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22

  if ( (byte_42E6A31 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FollowerRootComponent_EndShowServant__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42E6A31 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        operationItemListViewManager = (ListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        !item)
    || (v13 = (CommonUI_o *)operationItemListViewManager,
        ServantLeader = FollowerSelectItemListViewItem__get_ServantLeader(item, 0LL),
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v15,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServant__,
          0LL),
        !v13) )
  {
    sub_B5D69C(operationItemListViewManager, item);
  }
  CommonUI__OpenServantStatusDialog_18214956(v13, 5, ServantLeader, v15, 0LL);
}


void __fastcall FollowerRootComponent__SelectShowServantEquip(
        FollowerRootComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  ListViewManager_o *operationItemListViewManager; // x0
  CommonUI_o *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v15; // x23

  if ( (byte_42E6A34 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)equipInfo, statusKind, method);
    sub_B5D5C4(&Method_FollowerRootComponent_EndShowServantEquip__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42E6A34 = 1;
  }
  operationItemListViewManager = (ListViewManager_o *)this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager
    || (ListViewManager__GetScrollView(
          operationItemListViewManager,
          &this->fields.openScroll,
          &this->fields.openOffset,
          0LL),
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo),
        ServantStatusDialog_EndDelegate___ctor(
          v15,
          (Il2CppObject *)this,
          Method_FollowerRootComponent_EndShowServantEquip__,
          0LL),
        !Instance) )
  {
    sub_B5D69C(operationItemListViewManager, equipInfo);
  }
  CommonUI__OpenServantEquipStatusDialog_18217320(Instance, statusKind, equipInfo, v15, 0LL, 0LL);
}


void __fastcall FollowerRootComponent__SetBackupBgmName(
        FollowerRootComponent_o *this,
        bool isNonStopEndBgm,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_String_o *BgmName; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42E6A25 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, isNonStopEndBgm, (_DWORD)method, v3);
    byte_42E6A25 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  if ( SoundManager__isPlayBgm(0LL, 0LL) && !isNonStopEndBgm )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    BgmName = SoundManager__getBgmName(0LL);
    this->fields.backupBgmName = BgmName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.backupBgmName,
      (System_Int32_array **)BgmName,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
}


bool __fastcall FollowerRootComponent__SetFollowerBase(
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  FollowerRootComponent_c *v9; // x0
  UIAtlas_o *partyOrganizationAtlasCache; // x21

  if ( (byte_42E6A21 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spriteName, (_DWORD)method, v3);
    sub_B5D5C4(&FollowerRootComponent_TypeInfo, v6, v7, v8);
    byte_42E6A21 = 1;
  }
  v9 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v9 = FollowerRootComponent_TypeInfo;
  }
  partyOrganizationAtlasCache = v9->static_fields->partyOrganizationAtlasCache;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  return AtlasManager__SetGradeBase(sprite, spriteName, partyOrganizationAtlasCache, 0LL);
}


bool __fastcall FollowerRootComponent__StartBattleSetupMenu(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int64_t exists; // x0
  __int64 followerId; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t ItemIndex_31107624; // w0
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *v16; // x21
  FollowerSelectItemListViewItem_o *v17; // x20
  struct BattleSetupInfo_o *v18; // x21
  struct BattleSetupInfo_o *v19; // x8
  int32_t FollowerType; // w0
  const MethodInfo *v21; // x2
  Il2CppObject *v22; // x20

  if ( (byte_42E6A39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v8, v9, v10);
    byte_42E6A39 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  exists = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !exists )
    goto LABEL_21;
  exists = PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)exists, 0LL);
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_21;
  if ( (exists & 1) != 0 )
  {
    followerId = battleSetupInfo->fields.followerId;
    if ( followerId >= 1 )
    {
      exists = (int64_t)this->fields.operationItemListViewManager;
      if ( !exists )
        goto LABEL_21;
      ItemIndex_31107624 = FollowerSelectItemListViewManager__GetItemIndex_31107624(
                             (FollowerSelectItemListViewManager_o *)exists,
                             followerId,
                             battleSetupInfo->fields.followerClassId,
                             battleSetupInfo->fields.followerSupportDeckId,
                             0LL);
      this->fields.selectItemNum = ItemIndex_31107624 & ~(ItemIndex_31107624 >> 31);
    }
    goto LABEL_19;
  }
  battleSetupInfo->fields.followerId = 0LL;
  followerId = (unsigned int)this->fields.selectItemNum;
  if ( (followerId & 0x80000000) == 0 )
  {
    exists = (int64_t)this->fields.operationItemListViewManager;
    if ( !exists )
      goto LABEL_21;
    Item = FollowerSelectItemListViewManager__GetItem((FollowerSelectItemListViewManager_o *)exists, followerId, 0LL);
    if ( Item )
    {
      v16 = this->fields.battleSetupInfo;
      v17 = Item;
      exists = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
      if ( v16 )
      {
        v16->fields.followerId = exists;
        v18 = this->fields.battleSetupInfo;
        exists = FollowerSelectItemListViewItem__get_SelectClassId(v17, 0LL);
        if ( v18 )
        {
          v18->fields.followerClassId = exists;
          v19 = this->fields.battleSetupInfo;
          if ( v19 )
          {
            v19->fields.followerSupportDeckId = v17->fields.supportDeckId;
            FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v17, 0LL);
            FollowerRootComponent__setBattleSetupFollowType(this, FollowerType, v21);
            goto LABEL_19;
          }
        }
      }
LABEL_21:
      sub_B5D69C(exists, followerId);
    }
  }
LABEL_19:
  this->fields.state = 5;
  v22 = (Il2CppObject *)this->fields.battleSetupInfo;
  exists = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !exists )
    goto LABEL_21;
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)exists, 40, 1, v22, 0LL);
  return 1;
}


bool __fastcall FollowerRootComponent__StartSupportInfoMenu(FollowerRootComponent_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 selectItemNum; // x1
  int64_t operationItemListViewManager; // x0
  FollowerSelectItemListViewItem_o *Item; // x0
  FollowerSelectItemListViewItem_o *v26; // x20
  int64_t userId; // x22
  int v28; // w8
  unsigned int v29; // w23
  int64_t v30; // x24
  __int64 v31; // x8
  FollowerInfo_o **v32; // x24
  __int64 v33; // t1
  __int64 v34; // x25
  int64_t v35; // x22
  __int64 v36; // x8
  __int64 v37; // x23
  __int64 v38; // x8
  __int64 v39; // x21
  bool v40; // w21
  FollowerInfo_o *v42; // x21
  SupportInfoJump_c *v43; // x0
  SupportInfoJump_o *v44; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  __int64 v46; // x0
  UserGameEntity_o *v47; // [xsp+8h] [xbp-48h] BYREF
  UserGameEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E6A3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_PickupUserFollowerMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserFollowerMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__, v11, v12, v13);
    sub_B5D5C4(
      &Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SupportInfoJump_TypeInfo, v20, v21, v22);
    byte_42E6A3A = 1;
  }
  entity = 0LL;
  v47 = 0LL;
  selectItemNum = (unsigned int)this->fields.selectItemNum;
  if ( (selectItemNum & 0x80000000) == 0 )
  {
    operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_44;
    Item = FollowerSelectItemListViewManager__GetItem(
             (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
             selectItemNum,
             0LL);
    if ( Item )
    {
      v26 = Item;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      operationItemListViewManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_44;
      operationItemListViewManager = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)operationItemListViewManager,
                                       &entity,
                                       (const MethodInfo_23FB120 *)Method_DataMasterBase_UserFollowerMaster__UserFollowerEntity__long__TryGetSingleEntity__);
      if ( (operationItemListViewManager & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_44;
        userId = entity->fields.userId;
        if ( !userId )
          goto LABEL_44;
        v28 = *(_DWORD *)(userId + 24);
        if ( v28 >= 1 )
        {
          v29 = 0;
          while ( 1 )
          {
            if ( v29 >= v28 )
              goto LABEL_45;
            v30 = userId + 8LL * (int)v29;
            v33 = *(_QWORD *)(v30 + 32);
            v32 = (FollowerInfo_o **)(v30 + 32);
            v31 = v33;
            if ( !v33 )
              goto LABEL_44;
            v34 = *(_QWORD *)(v31 + 16);
            operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v26, 0LL);
            if ( v34 == operationItemListViewManager )
              break;
            v28 = *(_DWORD *)(userId + 24);
            if ( (int)++v29 >= v28 )
              goto LABEL_19;
          }
          this->fields.state = 6;
          if ( v29 < *(_DWORD *)(userId + 24) )
          {
            v42 = *v32;
            v43 = SupportInfoJump_TypeInfo;
LABEL_40:
            v44 = (SupportInfoJump_o *)sub_B5D694(v43);
            SupportInfoJump___ctor_32798364(v44, v42, 0, 1, 0LL);
            battleSetupInfo = this->fields.battleSetupInfo;
            if ( battleSetupInfo )
            {
              if ( v44 )
              {
                SupportInfoJump__SetSetupInfo(
                  v44,
                  battleSetupInfo->fields.eventUpValSetupInfo,
                  battleSetupInfo->fields.questRestrictionInfo,
                  0LL);
                operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( operationItemListViewManager )
                {
                  v40 = 1;
                  AvalonSceneManager__pushScene(
                    (AvalonSceneManager_o *)operationItemListViewManager,
                    60,
                    1,
                    (Il2CppObject *)v44,
                    0LL);
                  return v40;
                }
              }
            }
LABEL_44:
            sub_B5D69C(operationItemListViewManager, selectItemNum);
          }
          goto LABEL_45;
        }
      }
LABEL_19:
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      operationItemListViewManager = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_PickupUserFollowerMaster___);
      if ( !operationItemListViewManager )
        goto LABEL_44;
      operationItemListViewManager = DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                       (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)operationItemListViewManager,
                                       &v47,
                                       (const MethodInfo_23FB120 *)Method_DataMasterBase_PickupUserFollowerMaster__PickupUserFollowerEntity__long__TryGetSingleEntity__);
      if ( (operationItemListViewManager & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_44;
        v35 = v47->fields.userId;
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 24);
          if ( v36 )
          {
            if ( (int)v36 >= 1 )
            {
              v37 = 0LL;
              while ( 1 )
              {
                if ( (unsigned int)v37 >= (unsigned int)v36 )
                  goto LABEL_45;
                v38 = *(_QWORD *)(v35 + 32 + 8 * v37);
                if ( !v38 )
                  goto LABEL_44;
                v39 = *(_QWORD *)(v38 + 16);
                operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(v26, 0LL);
                if ( v39 == operationItemListViewManager )
                  break;
                LODWORD(v36) = *(_DWORD *)(v35 + 24);
                ++v37;
                v40 = 0;
                if ( (int)v37 >= (int)v36 )
                  return v40;
              }
              this->fields.state = 6;
              if ( (unsigned int)v37 < *(_DWORD *)(v35 + 24) )
              {
                v42 = *(FollowerInfo_o **)(v35 + 32 + 8 * v37);
                v43 = SupportInfoJump_TypeInfo;
                goto LABEL_40;
              }
LABEL_45:
              v46 = sub_B5D6C8(operationItemListViewManager);
              sub_B5D668(v46, 0LL);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int64_t Instance; // x0
  __int64 v39; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct BattleSetupInfo_o *v48; // x8
  QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t *p_friendPointUpVal; // x25
  EventCampaignMaster_o *v51; // x21
  EventQuestMaster_o *v52; // x22
  struct BattleSetupInfo_o *v53; // x8
  struct EventCampaignEntity_array *Data_29795492; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct BattleSetupInfo_o *v61; // x8
  int32_t i; // w20
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v64; // x21
  System_Int64_array *v65; // x22
  UserServantEntity_o *userServantEntity; // x8
  int32_t v67; // w21
  BalanceConfig_c *v68; // x0
  int32_t j; // w19
  PartyOrganizationListViewItem_o *v70; // x0
  PartyOrganizationListViewItem_o *v71; // x20
  System_Int64_array *v72; // x21
  UserServantEntity_o *v73; // x8
  int v74; // w20
  struct BattleSetupInfo_o *v75; // x8
  struct BattleSetupInfo_o *v76; // x8
  struct BattleSetupInfo_o *v77; // x8
  UserEventDeckMaster_o *v78; // x20
  struct BattleSetupInfo_o *v79; // x8
  int32_t eventId; // w22
  int64_t v81; // x21
  struct BattleSetupInfo_o *v82; // x8
  UserEventDeckEntity_o *v83; // x20
  int64_t v84; // x21
  int v85; // w8
  unsigned __int64 v86; // x22
  int64_t v87; // x26
  System_Int64_array *v88; // x23
  int32_t v89; // w24
  unsigned __int64 v90; // x22
  int64_t v91; // x26
  System_Int64_array *v92; // x23
  int v93; // w24
  struct BattleSetupInfo_o *v94; // x8
  int32_t k; // w20
  UserServantEntity_o *UserServant; // x0
  UserServantEntity_o *v97; // x21
  System_Int64_array *EquipList; // x23
  int32_t FriendPointUpVal; // w22
  BalanceConfig_c *v100; // x0
  int32_t m; // w19
  UserServantEntity_o *v102; // x0
  UserServantEntity_o *v103; // x20
  System_Int64_array *v104; // x22
  int32_t v105; // w21
  int32_t v106; // w21
  int32_t v107; // w21
  struct BattleSetupInfo_o *v108; // x8
  __int64 v109; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E6A30 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserDeckMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventDeckMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&NetworkManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&OptionManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v35, v36, v37);
    byte_42E6A30 = 1;
  }
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  Instance = OptionManager__GetAutoSelectParty(0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_10;
  Instance = (int64_t)this->fields.battleSetupInfo;
  if ( !Instance )
    goto LABEL_152;
  if ( *(_BYTE *)(Instance + 74) )
    goto LABEL_10;
  v106 = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)Instance, 0LL);
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  Instance = LastUsedDeckNumberManager__GetDeckNumber(v106, 0LL);
  if ( (int)Instance < 1 )
  {
LABEL_10:
    battleSetupInfo = this->fields.battleSetupInfo;
    if ( !battleSetupInfo || !MasterData_WarQuestSelectionMaster )
      goto LABEL_152;
    Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 battleSetupInfo->fields.deckId,
                 (const MethodInfo_23FB094 *)Method_DataMasterBase_UserDeckMaster__UserDeckEntity__long__TryGetEntity__);
  }
  else
  {
    v107 = Instance;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_152;
    Instance = (int64_t)UserDeckMaster__getDeck(
                          (UserDeckMaster_o *)MasterData_WarQuestSelectionMaster,
                          Instance,
                          v107,
                          0LL);
    entity = (UserServantEntity_o *)Instance;
  }
  v48 = this->fields.battleSetupInfo;
  if ( !v48 )
    goto LABEL_152;
  questRestrictionInfo = v48->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    QuestRestrictionInfo__SetDeckInfo(questRestrictionInfo, (UserDeckEntity_o *)entity, 0LL);
  *(_QWORD *)&this->fields.friendPointUpVal = 0LL;
  p_friendPointUpVal = &this->fields.friendPointUpVal;
  this->fields.friendPointCampaignEntityList = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    0LL,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  v51 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_152;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestMaster___);
  if ( !this->fields.battleSetupInfo )
    goto LABEL_152;
  v52 = (EventQuestMaster_o *)Instance;
  Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
  v53 = this->fields.battleSetupInfo;
  if ( !v53 )
    goto LABEL_152;
  if ( !v52 )
    goto LABEL_152;
  Instance = (int64_t)EventQuestMaster__GetEnabledEventCampaignForQuest(
                        v52,
                        Instance,
                        v53->fields.questPhase,
                        0LL,
                        7,
                        0LL);
  if ( !v51 )
    goto LABEL_152;
  Data_29795492 = EventCampaignMaster__getData_29795492(v51, 24, (EventEntity_array *)Instance, 0LL);
  this->fields.friendPointCampaignEntityList = Data_29795492;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.friendPointCampaignEntityList,
    (System_Int32_array **)Data_29795492,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( this->fields.tutorialMode == 4 )
  {
    v61 = this->fields.battleSetupInfo;
    if ( !v61 )
      goto LABEL_152;
    if ( v61->fields.isChildFollower )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        goto LABEL_152;
      if ( *(_QWORD *)(Instance + 72) )
      {
        for ( i = 0; ; ++i )
        {
          v68 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v68 = BalanceConfig_TypeInfo;
          }
          if ( i >= v68->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_152;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_152;
          Member = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, i, 0LL);
          if ( Member )
          {
            v64 = Member;
            if ( Member->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(Member, 0LL);
              if ( !v64->fields.userServantEntity )
                goto LABEL_152;
              v65 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v64->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              userServantEntity = v64->fields.userServantEntity;
              if ( !userServantEntity )
                goto LABEL_152;
              v67 = Instance;
              if ( UserServantEntity__getFriendPointUpType(userServantEntity, v65, 0LL) == 104
                && v67 > *p_friendPointUpVal )
              {
                this->fields.friendPointUpVal = v67;
                this->fields.friendPointUpMaxVal = v67;
              }
            }
          }
        }
        for ( j = 0; ; ++j )
        {
          if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v68);
            v68 = BalanceConfig_TypeInfo;
          }
          if ( j >= v68->static_fields->DeckMemberMax )
            break;
          if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
          }
          Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_152;
          Instance = *(_QWORD *)(Instance + 72);
          if ( !Instance )
            goto LABEL_152;
          v70 = PartyListViewItem__GetMember((PartyListViewItem_o *)Instance, j, 0LL);
          if ( v70 )
          {
            v71 = v70;
            if ( v70->fields.userServantEntity )
            {
              Instance = (int64_t)PartyOrganizationListViewItem__GetEquipList(v70, 0LL);
              if ( !v71->fields.userServantEntity )
                goto LABEL_152;
              v72 = (System_Int64_array *)Instance;
              Instance = UserServantEntity__getFriendPointUpVal(
                           v71->fields.userServantEntity,
                           (System_Int64_array *)Instance,
                           0LL);
              v73 = v71->fields.userServantEntity;
              if ( !v73 )
                goto LABEL_152;
              v74 = Instance;
              if ( UserServantEntity__getFriendPointUpType(v73, v72, 0LL) == 123 )
                *p_friendPointUpVal += v74;
            }
          }
          v68 = BalanceConfig_TypeInfo;
        }
        return;
      }
    }
  }
  v75 = this->fields.battleSetupInfo;
  if ( !v75 )
    goto LABEL_152;
  Instance = (int64_t)v75->fields.questRestrictionInfo;
  if ( Instance )
  {
    Instance = QuestRestrictionInfo__IsServantNum((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_75;
    v76 = this->fields.battleSetupInfo;
    if ( !v76 )
      goto LABEL_152;
    Instance = (int64_t)v76->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_152;
    Instance = QuestRestrictionInfo__IsNpcMulitipleOrOnly((QuestRestrictionInfo_o *)Instance, 0LL);
    if ( (Instance & 1) != 0 )
      goto LABEL_75;
    v77 = this->fields.battleSetupInfo;
    if ( !v77 )
      goto LABEL_152;
    Instance = (int64_t)v77->fields.questRestrictionInfo;
    if ( !Instance )
      goto LABEL_152;
    if ( *(int *)(Instance + 396) >= 1 )
    {
LABEL_75:
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v78 = (UserEventDeckMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventDeckMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v79 = this->fields.battleSetupInfo;
        if ( v79 )
        {
          eventId = v79->fields.eventId;
          v81 = Instance;
          Instance = BattleSetupInfo__TargetQuestId(this->fields.battleSetupInfo, 0LL);
          v82 = this->fields.battleSetupInfo;
          if ( v82 )
          {
            if ( v78 )
            {
              Instance = (int64_t)UserEventDeckMaster__getDeckList(
                                    v78,
                                    v81,
                                    eventId,
                                    Instance,
                                    v82->fields.questPhase,
                                    0LL);
              if ( Instance )
              {
                if ( !*(_DWORD *)(Instance + 24) )
                  goto LABEL_153;
                v83 = *(UserEventDeckEntity_o **)(Instance + 32);
                if ( v83 )
                {
                  Instance = (int64_t)UserEventDeckEntity__GetUserServantList(
                                        *(UserEventDeckEntity_o **)(Instance + 32),
                                        0,
                                        0,
                                        0LL);
                  if ( Instance )
                  {
                    v84 = Instance;
                    v85 = *(_QWORD *)(Instance + 24);
                    if ( v85 >= 1 )
                    {
                      v86 = 0LL;
                      v87 = Instance + 32;
                      while ( v86 < (unsigned int)v85 )
                      {
                        if ( *(_QWORD *)(v87 + 8 * v86) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v83, v86, 0LL);
                          if ( v86 >= *(unsigned int *)(v84 + 24) )
                            break;
                          v88 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v87 + 8 * v86);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v88, 0LL);
                          if ( v86 >= *(unsigned int *)(v84 + 24) )
                            break;
                          v89 = Instance;
                          Instance = *(_QWORD *)(v87 + 8 * v86);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v88, 0LL);
                          if ( (_DWORD)Instance == 104 && v89 > *p_friendPointUpVal )
                          {
                            this->fields.friendPointUpVal = v89;
                            this->fields.friendPointUpMaxVal = v89;
                          }
                        }
                        v85 = *(_DWORD *)(v84 + 24);
                        if ( (__int64)++v86 >= v85 )
                          goto LABEL_98;
                      }
LABEL_153:
                      v109 = sub_B5D6C8(Instance);
                      sub_B5D668(v109, 0LL);
                    }
LABEL_98:
                    if ( v85 >= 1 )
                    {
                      v90 = 0LL;
                      v91 = v84 + 32;
                      while ( v90 < (unsigned int)v85 )
                      {
                        if ( *(_QWORD *)(v91 + 8 * v90) )
                        {
                          Instance = (int64_t)UserEventDeckEntity__GetEquipList(v83, v90, 0LL);
                          if ( v90 >= *(unsigned int *)(v84 + 24) )
                            goto LABEL_153;
                          v92 = (System_Int64_array *)Instance;
                          Instance = *(_QWORD *)(v91 + 8 * v90);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpVal((UserServantEntity_o *)Instance, v92, 0LL);
                          if ( v90 >= *(unsigned int *)(v84 + 24) )
                            goto LABEL_153;
                          v93 = Instance;
                          Instance = *(_QWORD *)(v91 + 8 * v90);
                          if ( !Instance )
                            goto LABEL_152;
                          Instance = UserServantEntity__getFriendPointUpType((UserServantEntity_o *)Instance, v92, 0LL);
                          if ( (_DWORD)Instance == 123 )
                            *p_friendPointUpVal += v93;
                        }
                        v85 = *(_DWORD *)(v84 + 24);
                        if ( (__int64)++v90 >= v85 )
                          goto LABEL_109;
                      }
                      goto LABEL_153;
                    }
LABEL_109:
                    v94 = this->fields.battleSetupInfo;
                    if ( v94 )
                    {
                      Instance = (int64_t)v94->fields.questRestrictionInfo;
                      if ( Instance )
                      {
                        QuestRestrictionInfo__SetDeckInfo_34258056((QuestRestrictionInfo_o *)Instance, v83, 0LL);
                        return;
                      }
                    }
                  }
                }
                else
                {
                  v108 = this->fields.battleSetupInfo;
                  if ( v108 )
                  {
                    Instance = (int64_t)v108->fields.questRestrictionInfo;
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
LABEL_152:
      sub_B5D69C(Instance, v39);
    }
  }
  if ( entity && (!Instance || !QuestRestrictionInfo__IsSupportOnly((QuestRestrictionInfo_o *)Instance, 0LL)) )
  {
    for ( k = 0; ; ++k )
    {
      v100 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v100 = BalanceConfig_TypeInfo;
      }
      if ( k >= v100->static_fields->DeckMemberMax )
        break;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_152;
      UserServant = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, k, 0LL);
      if ( UserServant )
      {
        v97 = UserServant;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_152;
        EquipList = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, k, 0LL);
        FriendPointUpVal = UserServantEntity__getFriendPointUpVal(v97, EquipList, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v97, EquipList, 0LL) == 104
          && FriendPointUpVal > *p_friendPointUpVal )
        {
          this->fields.friendPointUpVal = FriendPointUpVal;
          this->fields.friendPointUpMaxVal = FriendPointUpVal;
        }
      }
    }
    for ( m = 0; ; ++m )
    {
      if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100);
        v100 = BalanceConfig_TypeInfo;
      }
      if ( m >= v100->static_fields->DeckMemberMax )
        break;
      Instance = (int64_t)entity;
      if ( !entity )
        goto LABEL_152;
      v102 = UserDeckEntity__GetUserServant((UserDeckEntity_o *)entity, m, 0LL);
      if ( v102 )
      {
        v103 = v102;
        Instance = (int64_t)entity;
        if ( !entity )
          goto LABEL_152;
        v104 = UserDeckEntity__GetEquipList((UserDeckEntity_o *)entity, m, 0LL);
        v105 = UserServantEntity__getFriendPointUpVal(v103, v104, 0LL);
        if ( UserServantEntity__getFriendPointUpType(v103, v104, 0LL) == 123 )
          *p_friendPointUpVal += v105;
      }
      v100 = BalanceConfig_TypeInfo;
    }
  }
}


void __fastcall FollowerRootComponent___OnClickBack_b__67_0(
        FollowerRootComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  FollowerRootComponent_o *v14; // x0
  const MethodInfo *v15; // x1
  int v16; // w2
  __int64 v17; // x3
  TerminalPramsManager_c *v18; // x0

  if ( (byte_42E6A49 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_3102/*"CLICK_BACK"*/, v9, v10, v11);
    byte_42E6A49 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
  if ( isDecide )
  {
    FollowerRootComponent__QuestHintDialogResetTemporarilyId(v14, v15);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B29 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_BYTE)v13, v16, v17);
      byte_42E4B29 = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    v18->static_fields->_IsAutoResume_k__BackingField = 1;
    Instance = (CommonUI_o *)this->fields.myFSM;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3102/*"CLICK_BACK"*/, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(Instance, v13);
  }
  this->fields.state = 3;
}


void __fastcall FollowerRootComponent__beginFinish(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  FollowerRootComponent_c *v18; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0

  if ( (byte_42E6A2C & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&FollowerRootComponent_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v8, v9, v10);
    byte_42E6A2C = 1;
  }
  operationItemListViewManager = this->fields.operationItemListViewManager;
  this->fields.state = 0;
  if ( !operationItemListViewManager )
    goto LABEL_16;
  FollowerSelectItemListViewManager__DestroyList(operationItemListViewManager, 0LL);
  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    goto LABEL_16;
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)operationItemListViewManager,
                                                                          0LL);
  if ( !operationItemListViewManager )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL);
  v18 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v18 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v18->static_fields;
  static_fields->partyOrganizationAtlasCache = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    0LL,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  operationItemListViewManager = (FollowerSelectItemListViewManager_o *)this->fields.backSkinSprite;
  if ( !operationItemListViewManager
    || (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                (UnityEngine_Component_o *)operationItemListViewManager,
                                                                                0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 0, 0LL),
        (operationItemListViewManager = (FollowerSelectItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__)) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(operationItemListViewManager, method);
  }
  AtlasManager__ReleaseUISkin((AtlasManager_o *)operationItemListViewManager, 2, 0, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
}


void __fastcall FollowerRootComponent__beginInitialize(FollowerRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E6A22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E6A22 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginPause(FollowerRootComponent_o *this, const MethodInfo *method)
{
  FollowerSelectItemListViewManager_o *operationItemListViewManager; // x0

  operationItemListViewManager = this->fields.operationItemListViewManager;
  if ( !operationItemListViewManager )
    sub_B5D69C(0LL, method);
  FollowerSelectItemListViewManager__SaveSortFilter(operationItemListViewManager, 0LL);
}


void __fastcall FollowerRootComponent__beginResume(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v47; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  TitleInfoControl_o *titleInfo; // x21
  int64_t operationItemListViewManager; // x0
  unsigned __int64 selectItemNum; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  __int64 v58; // x10
  FollowerSelectItemListViewItem_o *Item; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x22
  FollowerSelectItemListViewItem_o *v61; // x21
  struct BattleSetupInfo_o *v62; // x8
  int klass_high; // w9
  struct BattleSetupInfo_o *v64; // x8
  int32_t FollowerType; // w0
  const MethodInfo *v66; // x2
  int v67; // w2
  __int64 v68; // x3
  struct BattleSetupInfo_o *v69; // x8
  Il2CppObject *v70; // x19
  __int64 v71; // x10
  Il2CppObject *v72; // x1
  struct BattleSetupInfo_o **p_battleSetupInfo; // x20
  struct BattleSetupInfo_o *v74; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x21
  int32_t tutorialMode; // w8
  struct BattleSetupInfo_o *v77; // x8
  FollowerSelectItemListViewManager_o *v78; // x20
  struct BattleSetupInfo_o *v79; // x8
  const MethodInfo *v80; // x4
  struct BattleSetupInfo_o *v81; // x8
  const MethodInfo *v82; // x1
  CommonUI_o *v83; // x20
  struct BattleSetupInfo_o *v84; // x8
  PartyListViewItem_o *v85; // x20
  UnityEngine_Component_o *v86; // x8
  int32_t i; // w21
  FollowerSelectItemListViewManager_o *v88; // x22
  struct BattleSetupInfo_o *v89; // x8
  const MethodInfo *v90; // x4
  struct BattleSetupInfo_o *v91; // x8
  FollowerSelectItemListViewManager_o *v92; // x22
  FollowerSelectItemListViewManager_CallbackFunc_o *v93; // x23
  PartyOrganizationListViewItem_o *Member; // x0
  struct FollowerInfo_o *followerInfo; // x8
  FollowerSelectItemListViewManager_o *v96; // x20
  int64_t userId; // x21
  struct QuestRestrictionInfo_o *v98; // x8
  PartyOrganizationListViewItem_o *v99; // x0
  struct FollowerInfo_o *v100; // x8
  unsigned int type; // w8
  BalanceConfig_c *v102; // x0
  int32_t v103; // w22

  if ( (byte_42E6A2A & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&FollowerSelectItemListViewManager_CallbackFunc_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_FollowerRootComponent_OnSelectFollowerItem__, v19, v20, v21);
    sub_B5D5C4(&FollowerRootComponent_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&SupportInfoJump_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v43, v44, v45);
    byte_42E6A2A = 1;
  }
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v47 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v47 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v47->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    partyOrganizationAtlas,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  titleInfo = this->fields.titleInfo;
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  if ( *(_BYTE *)(operationItemListViewManager + 80) )
  {
    selectItemNum = 0LL;
    if ( !titleInfo )
      goto LABEL_123;
  }
  else
  {
    selectItemNum = this->fields.tutorialMode != 2;
    if ( !titleInfo )
      goto LABEL_123;
  }
  TitleInfoControl__setBackBtnEnable(titleInfo, selectItemNum, 0LL);
  if ( this->fields.state == 6 )
  {
    if ( data )
    {
      v58 = *(&SupportInfoJump_TypeInfo->_2.bitflags2 + 1);
      if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v58
        && (SupportInfoJump_c *)data->klass->_2.typeHierarchy[v58 - 1] == SupportInfoJump_TypeInfo
        && ((__int64)data[3].klass & 0x80000000) == 0 )
      {
        selectItemNum = (unsigned int)this->fields.selectItemNum;
        if ( (selectItemNum & 0x80000000) == 0 )
        {
          operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
          if ( !operationItemListViewManager )
            goto LABEL_123;
          Item = FollowerSelectItemListViewManager__GetItem(
                   (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                   selectItemNum,
                   0LL);
          if ( Item )
          {
            battleSetupInfo = this->fields.battleSetupInfo;
            v61 = Item;
            this->fields.state = 5;
            operationItemListViewManager = FollowerSelectItemListViewItem__get_FollowerId(Item, 0LL);
            if ( battleSetupInfo )
            {
              battleSetupInfo->fields.followerId = operationItemListViewManager;
              v62 = this->fields.battleSetupInfo;
              if ( v62 )
              {
                v62->fields.followerClassId = (int32_t)data[3].klass;
                klass_high = HIDWORD(data[3].klass);
                v64 = this->fields.battleSetupInfo;
                if ( klass_high <= 0 )
                  klass_high = v61->fields.supportDeckId;
                if ( v64 )
                {
                  v64->fields.followerSupportDeckId = klass_high;
                  FollowerType = FollowerSelectItemListViewItem__get_FollowerType(v61, 0LL);
                  FollowerRootComponent__setBattleSetupFollowType(this, FollowerType, v66);
                  if ( this->fields.operationItemListViewManager )
                  {
                    if ( !byte_42E6A4A )
                    {
                      sub_B5D5C4(&FollowerSelectItemListViewManager_TypeInfo, selectItemNum, v67, v68);
                      byte_42E6A4A = 1;
                    }
                    operationItemListViewManager = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    if ( (BYTE3(FollowerSelectItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !FollowerSelectItemListViewManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(FollowerSelectItemListViewManager_TypeInfo);
                      operationItemListViewManager = (int64_t)FollowerSelectItemListViewManager_TypeInfo;
                    }
                    v69 = this->fields.battleSetupInfo;
                    if ( v69 )
                    {
                      selectItemNum = (unsigned int)v69->fields.followerClassId;
                      if ( *(_DWORD *)(*(_QWORD *)(operationItemListViewManager + 184) + 8LL) != (_DWORD)selectItemNum )
                      {
                        operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
                        if ( !operationItemListViewManager )
                          goto LABEL_123;
                        if ( FollowerSelectItemListViewManager__ChangeClass(
                               (FollowerSelectItemListViewManager_o *)operationItemListViewManager,
                               selectItemNum,
                               0LL) )
                        {
                          operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
                          if ( !operationItemListViewManager )
                            goto LABEL_123;
                          ListViewManager__JumpItem(
                            (ListViewManager_o *)operationItemListViewManager,
                            this->fields.selectItemNum,
                            0LL);
                        }
                      }
                      v70 = (Il2CppObject *)this->fields.battleSetupInfo;
                      operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                      if ( operationItemListViewManager )
                      {
                        AvalonSceneManager__pushScene(
                          (AvalonSceneManager_o *)operationItemListViewManager,
                          40,
                          1,
                          v70,
                          0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
LABEL_123:
            sub_B5D69C(operationItemListViewManager, selectItemNum);
          }
        }
      }
    }
  }
  else
  {
    if ( data
      && (v71 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v71) )
    {
      if ( (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v71 - 1] == BattleSetupInfo_TypeInfo )
        v72 = data;
      else
        v72 = 0LL;
    }
    else
    {
      v72 = 0LL;
    }
    this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)v72;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)v72,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v74 = this->fields.battleSetupInfo;
    if ( !v74 )
      return;
    questRestrictionInfo = v74->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_123;
    if ( !QuestRestrictionInfo__IsMyServantOrNpcRestriction(v74->fields.questRestrictionInfo, 0LL)
      && (questRestrictionInfo->fields.isNoSupportBattle
       || questRestrictionInfo->fields.isFixedMyServantSingle
       || questRestrictionInfo->fields.isSupportOnlyForceBattle) )
    {
      goto LABEL_111;
    }
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    operationItemListViewManager = TutorialFlag__Get_29295864(102, 0LL);
    if ( (operationItemListViewManager & 1) == 0 )
    {
      v77 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_123;
      goto LABEL_78;
    }
  }
  FollowerRootComponent__UpdateDeckInfomation(this, (const MethodInfo *)selectItemNum);
  tutorialMode = this->fields.tutorialMode;
  if ( tutorialMode != 4 )
  {
    if ( tutorialMode != 3 )
    {
      if ( tutorialMode == 1 )
      {
        v77 = this->fields.battleSetupInfo;
        if ( !v77 )
          goto LABEL_123;
LABEL_78:
        if ( v77->fields.isChildFollower )
        {
          FollowerRootComponent__ReturnBattleSetupMenu(this, (const MethodInfo *)selectItemNum);
          return;
        }
        goto LABEL_111;
      }
LABEL_76:
      FollowerRootComponent__ReturnSupportList(this, (const MethodInfo *)selectItemNum);
      return;
    }
    operationItemListViewManager = (int64_t)this->fields.battleSetupInfo;
    this->fields.selectItemNum = -1;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    v78 = this->fields.operationItemListViewManager;
    operationItemListViewManager = BattleSetupInfo__TargetQuestId(
                                     (BattleSetupInfo_o *)operationItemListViewManager,
                                     0LL);
    v79 = this->fields.battleSetupInfo;
    if ( !v79 )
      goto LABEL_123;
    if ( !v78 )
      goto LABEL_123;
    FollowerSelectItemListViewManager__CreateList(
      v78,
      operationItemListViewManager,
      v79->fields.questPhase,
      this->fields.friendPointUpVal,
      this->fields.friendPointUpMaxVal,
      this->fields.friendPointCampaignEntityList,
      v79->fields.questRestrictionInfo,
      0LL);
    v81 = this->fields.battleSetupInfo;
    if ( !v81 )
      goto LABEL_123;
    operationItemListViewManager = (int64_t)this->fields.followerQuestInfomationDraw;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    FollowerQuestInfomationDraw__SetInfomation(
      (FollowerQuestInfomationDraw_o *)operationItemListViewManager,
      v81->fields.questRestrictionInfo,
      0,
      0LL,
      v80);
    this->fields.state = 2;
    FollowerRootComponent__OnMoveEnd(this, v82);
    goto LABEL_70;
  }
  if ( this->fields.state == 6 )
    goto LABEL_76;
  v84 = this->fields.battleSetupInfo;
  if ( !v84 )
    goto LABEL_123;
  if ( !v84->fields.isChildFollower )
  {
    v98 = v84->fields.questRestrictionInfo;
    if ( !v98 )
      goto LABEL_123;
    if ( v98->fields.isNotTransitionSupportList )
    {
LABEL_111:
      FollowerRootComponent__ReturnQuestMenu(this, (const MethodInfo *)selectItemNum);
      return;
    }
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v85 = *(PartyListViewItem_o **)(operationItemListViewManager + 72);
  operationItemListViewManager = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v86 = (UnityEngine_Component_o *)this->fields.operationItemListViewManager;
  i = *(_DWORD *)(operationItemListViewManager + 56);
  this->fields.tutorialState = 0;
  this->fields.selectItemNum = -1;
  if ( !v86 )
    goto LABEL_123;
  operationItemListViewManager = (int64_t)UnityEngine_Component__get_gameObject(v86, 0LL);
  if ( !operationItemListViewManager )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)operationItemListViewManager, 1, 0LL);
  operationItemListViewManager = (int64_t)this->fields.battleSetupInfo;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  v88 = this->fields.operationItemListViewManager;
  operationItemListViewManager = BattleSetupInfo__TargetQuestId((BattleSetupInfo_o *)operationItemListViewManager, 0LL);
  v89 = this->fields.battleSetupInfo;
  if ( !v89 )
    goto LABEL_123;
  if ( !v88 )
    goto LABEL_123;
  FollowerSelectItemListViewManager__CreateList(
    v88,
    operationItemListViewManager,
    v89->fields.questPhase,
    this->fields.friendPointUpVal,
    this->fields.friendPointUpMaxVal,
    this->fields.friendPointCampaignEntityList,
    v89->fields.questRestrictionInfo,
    0LL);
  v91 = this->fields.battleSetupInfo;
  if ( !v91 )
    goto LABEL_123;
  operationItemListViewManager = (int64_t)this->fields.followerQuestInfomationDraw;
  if ( !operationItemListViewManager )
    goto LABEL_123;
  FollowerQuestInfomationDraw__SetInfomation(
    (FollowerQuestInfomationDraw_o *)operationItemListViewManager,
    v91->fields.questRestrictionInfo,
    i,
    0LL,
    v90);
  this->fields.state = 3;
  v92 = this->fields.operationItemListViewManager;
  v93 = (FollowerSelectItemListViewManager_CallbackFunc_o *)sub_B5D694(FollowerSelectItemListViewManager_CallbackFunc_TypeInfo);
  FollowerSelectItemListViewManager_CallbackFunc___ctor(
    v93,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_OnSelectFollowerItem__,
    0LL);
  if ( !v92 )
    goto LABEL_123;
  FollowerSelectItemListViewManager__SetMode(v92, 2, v93, 0LL);
  if ( v85 )
  {
    operationItemListViewManager = (int64_t)this->fields.operationItemListViewManager;
    if ( !operationItemListViewManager )
      goto LABEL_123;
    if ( ListViewManager__get_ItemSum((ListViewManager_o *)operationItemListViewManager, 0LL) >= 3 )
    {
      if ( i )
      {
LABEL_102:
        if ( i >= 1 )
        {
          Member = PartyListViewItem__GetMember(v85, i - 1, 0LL);
          if ( Member )
          {
            followerInfo = Member->fields.followerInfo;
            if ( followerInfo )
            {
              v96 = this->fields.operationItemListViewManager;
              userId = followerInfo->fields.userId;
              operationItemListViewManager = (int64_t)PartyOrganizationListViewItem__get_ServantLeader(Member, 0LL);
              if ( !operationItemListViewManager )
                goto LABEL_123;
              if ( !v96 )
                goto LABEL_123;
              operationItemListViewManager = FollowerSelectItemListViewManager__GetItemIndex(
                                               v96,
                                               userId,
                                               *(_QWORD *)(operationItemListViewManager + 40),
                                               0LL);
              if ( !this->fields.operationItemListViewManager )
                goto LABEL_123;
              ListViewManager__JumpItem(
                (ListViewManager_o *)this->fields.operationItemListViewManager,
                operationItemListViewManager,
                0LL);
            }
          }
        }
      }
      else
      {
        for ( i = 1; ; ++i )
        {
          v102 = BalanceConfig_TypeInfo;
          v103 = i - 1;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v102 = BalanceConfig_TypeInfo;
          }
          if ( v103 >= v102->static_fields->DeckMemberMax )
            break;
          v99 = PartyListViewItem__GetMember(v85, v103, 0LL);
          if ( v99 )
          {
            v100 = v99->fields.followerInfo;
            if ( v100 )
            {
              type = v100->fields.type;
              if ( type > 4 || ((1 << type) & 0x19) == 0 )
                goto LABEL_102;
            }
          }
        }
      }
    }
  }
LABEL_70:
  operationItemListViewManager = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v83 = (CommonUI_o *)operationItemListViewManager;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v83 )
    goto LABEL_123;
  CommonUI__maskFadein(v83, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  SceneRootComponent__sendMessageResume((SceneRootComponent_o *)this, 0LL);
}


void __fastcall FollowerRootComponent__beginStartUp(
        FollowerRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  MissionNotifyManager_o *titleInfo; // x0
  const MethodInfo *v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct System_Collections_Generic_List_MissionNotifyDispInfo__o *mNoDispInfos; // x8
  struct BattleSetupInfo_o *monitor; // x1
  BattleSetupInfo_o **p_battleSetupInfo; // x20
  const MethodInfo *v86; // x1
  __int64 v87; // x10
  struct BattleSetupInfo_o *v88; // x1
  const MethodInfo *v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **partyOrganizationAtlas; // x21
  FollowerRootComponent_c *v97; // x0
  struct FollowerRootComponent_StaticFields *static_fields; // x0
  UILabel_o *infomationLabel; // x21
  UnityEngine_GameObject_o *refreshButtonBase; // x21
  bool v101; // w8
  _BYTE *v102; // x8
  ConstantMaster_o *v103; // x21
  BattleSetupInfo_o *v104; // x8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x9
  System_Action_o *v106; // x20
  System_Action_o *v107; // x20
  QuestPhaseMaster_o *v108; // x21
  NpcFollowerMaster_o *v109; // x21
  const MethodInfo *v110; // x1
  const MethodInfo *v111; // x4
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_42E6A23 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_FollowerRootComponent_EndLoadCommonBg__, v24, v25, v26);
    sub_B5D5C4(&Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__, v27, v28, v29);
    sub_B5D5C4(&FollowerRootComponent_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_13690/*"TUTORIAL_SUPPORT_QUEST_ID"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_13691/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_6455/*"FOLLOWER_SELECT_EXPLANATION2"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_1/*""*/, v66, v67, v68);
    byte_42E6A23 = 1;
  }
  if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
  }
  titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !titleInfo )
    goto LABEL_114;
  if ( PartyOrganizationUtility__ExistsTemporaryPartyInfo((PartyOrganizationUtility_o *)titleInfo, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    mNoDispInfos = titleInfo[1].fields.mNoDispInfos;
    if ( !mNoDispInfos )
      goto LABEL_114;
    monitor = (struct BattleSetupInfo_o *)mNoDispInfos[1].monitor;
    this->fields.battleSetupInfo = monitor;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)monitor,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    if ( !MissionNotifyManager__IsPause(titleInfo, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      titleInfo = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !titleInfo )
        goto LABEL_114;
      MissionNotifyManager__StartPause(titleInfo, 0LL);
    }
  }
  else
  {
    if ( data
      && (v87 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v87) )
    {
      v88 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v87 - 1] == BattleSetupInfo_TypeInfo
          ? (struct BattleSetupInfo_o *)data
          : 0LL;
    }
    else
    {
      v88 = 0LL;
    }
    this->fields.battleSetupInfo = v88;
    p_battleSetupInfo = &this->fields.battleSetupInfo;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
      (System_Int32_array **)v88,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
  }
  if ( !*p_battleSetupInfo )
  {
    FollowerRootComponent__ReturnQuestMenu(this, v86);
    return;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  FollowerRootComponent__PlayBGM(this, v89);
  partyOrganizationAtlas = (System_Int32_array **)this->fields.partyOrganizationAtlas;
  v97 = FollowerRootComponent_TypeInfo;
  if ( (BYTE3(FollowerRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !FollowerRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FollowerRootComponent_TypeInfo);
    v97 = FollowerRootComponent_TypeInfo;
  }
  static_fields = v97->static_fields;
  static_fields->partyOrganizationAtlasCache = (struct UIAtlas_o *)partyOrganizationAtlas;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->partyOrganizationAtlasCache,
    partyOrganizationAtlas,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  titleInfo = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_114;
  TitleInfoControl__setTitleInfo_18381532((TitleInfoControl_o *)titleInfo, this->fields.myFSM, 3, 63, 0LL);
  titleInfo = (MissionNotifyManager_o *)this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_114;
  TitleInfoControl__setBackBtnEnable((TitleInfoControl_o *)titleInfo, 1, 0LL);
  titleInfo = (MissionNotifyManager_o *)this->fields.operationItemListViewManager;
  if ( !titleInfo )
    goto LABEL_114;
  FollowerSelectItemListViewManager__DestroyList_31096760(
    (FollowerSelectItemListViewManager_o *)titleInfo,
    this->fields.battleSetupInfo,
    0LL);
  infomationLabel = this->fields.infomationLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleInfo = (MissionNotifyManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6455/*"FOLLOWER_SELECT_EXPLANATION2"*/, 0LL);
  if ( !infomationLabel )
    goto LABEL_114;
  UILabel__set_text(infomationLabel, (System_String_o *)titleInfo, 0LL);
  refreshButtonBase = this->fields.refreshButtonBase;
  titleInfo = (MissionNotifyManager_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !refreshButtonBase )
    goto LABEL_114;
  UnityEngine_GameObject__SetActive(
    refreshButtonBase,
    BalanceConfig_TypeInfo->static_fields->FollowerRefreshRestTime >= 0,
    0LL);
  titleInfo = (MissionNotifyManager_o *)this->fields.battleSetupInfo;
  *(_QWORD *)&this->fields.tutorialMode = 0LL;
  this->fields.selectItemNum = -1;
  this->fields.isForceFadeOut = 0;
  if ( !titleInfo )
    goto LABEL_114;
  v101 = titleInfo[1].fields.mMissionNotifyComps || LODWORD(titleInfo[1].fields.mNoticeNumberComp) != 0;
  if ( (v101 & BYTE1(titleInfo->fields.noDisplayMissionCondTypeHashSet)) != 0
    && (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)titleInfo, 1, 0LL),
        (titleInfo = (MissionNotifyManager_o *)*p_battleSetupInfo) == 0LL)
    || (v102 = titleInfo[1].monitor) == 0LL )
  {
LABEL_114:
    sub_B5D69C(titleInfo, v70);
  }
  if ( v102[378] )
  {
LABEL_57:
    FollowerRootComponent__StartBattleSetupMenu(this, v70);
    return;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29295864(102, 0LL) )
  {
    titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !titleInfo )
      goto LABEL_114;
    titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)titleInfo,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantMaster___);
    if ( !titleInfo )
      goto LABEL_114;
    v103 = (ConstantMaster_o *)titleInfo;
    titleInfo = (MissionNotifyManager_o *)ConstantMaster__GetValue(
                                            (ConstantMaster_o *)titleInfo,
                                            (System_String_o *)StringLiteral_13690/*"TUTORIAL_SUPPORT_QUEST_ID"*/,
                                            0LL);
    v104 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_114;
    if ( v104->fields.questId == (_DWORD)titleInfo )
    {
      titleInfo = (MissionNotifyManager_o *)ConstantMaster__GetValue(v103, (System_String_o *)StringLiteral_13691/*"TUTORIAL_SUPPORT_QUEST_PHASE"*/, 0LL);
      v104 = *p_battleSetupInfo;
      if ( !*p_battleSetupInfo )
        goto LABEL_114;
      if ( v104->fields.questPhase == (_DWORD)titleInfo )
        *(_QWORD *)&this->fields.tutorialMode = 0x100000003LL;
    }
  }
  else
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__IsProgressDone(3, 0LL) )
      goto LABEL_57;
    titleInfo = (MissionNotifyManager_o *)this->fields.infomationLabel;
    *(_QWORD *)&this->fields.tutorialMode = 0x100000002LL;
    if ( !titleInfo )
      goto LABEL_114;
    UILabel__set_text((UILabel_o *)titleInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v104 = *p_battleSetupInfo;
    if ( !*p_battleSetupInfo )
      goto LABEL_114;
  }
  questRestrictionInfo = v104->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_114;
  if ( !questRestrictionInfo->fields.isNotTransitionSupportList
    && !questRestrictionInfo->fields.isNpcOnlyBattle
    && !questRestrictionInfo->fields.isFixedMyServantSingle
    && !questRestrictionInfo->fields.isNoSupportBattle )
  {
    titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( titleInfo )
    {
      titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)titleInfo,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
      if ( *p_battleSetupInfo )
      {
        v108 = (QuestPhaseMaster_o *)titleInfo;
        titleInfo = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
        if ( *p_battleSetupInfo )
        {
          if ( v108 )
          {
            titleInfo = (MissionNotifyManager_o *)QuestPhaseMaster__GetEntity(
                                                    v108,
                                                    (int32_t)titleInfo,
                                                    (*p_battleSetupInfo)->fields.questPhase,
                                                    0LL);
            if ( titleInfo && LOBYTE(titleInfo->fields.mNoDispInfos) )
            {
              titleInfo = (MissionNotifyManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !titleInfo )
                goto LABEL_114;
              titleInfo = (MissionNotifyManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)titleInfo,
                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
              if ( !*p_battleSetupInfo )
                goto LABEL_114;
              v109 = (NpcFollowerMaster_o *)titleInfo;
              titleInfo = (MissionNotifyManager_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupInfo, 0LL);
              if ( !*p_battleSetupInfo )
                goto LABEL_114;
              if ( !v109 )
                goto LABEL_114;
              titleInfo = (MissionNotifyManager_o *)NpcFollowerMaster__GetQuestFollowerList(
                                                      v109,
                                                      (int32_t)titleInfo,
                                                      (*p_battleSetupInfo)->fields.questPhase,
                                                      0LL);
              if ( !titleInfo )
                goto LABEL_114;
              if ( !titleInfo->fields.mNoDispInfos )
              {
                *(_QWORD *)&this->fields.tutorialMode = 0x100000001LL;
                goto LABEL_88;
              }
            }
            if ( *p_battleSetupInfo )
            {
              titleInfo = (MissionNotifyManager_o *)(*p_battleSetupInfo)->fields.questRestrictionInfo;
              if ( titleInfo )
              {
                if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)titleInfo, 0LL) )
                  this->fields.tutorialMode = 4;
                FollowerRootComponent__UpdateDeckInfomation(this, v110);
                battleSetupInfo = this->fields.battleSetupInfo;
                if ( battleSetupInfo )
                {
                  titleInfo = (MissionNotifyManager_o *)this->fields.followerQuestInfomationDraw;
                  if ( titleInfo )
                  {
                    FollowerQuestInfomationDraw__SetInfomation(
                      (FollowerQuestInfomationDraw_o *)titleInfo,
                      battleSetupInfo->fields.questRestrictionInfo,
                      0,
                      0LL,
                      v111);
                    titleInfo = (MissionNotifyManager_o *)this->fields.backSkinSprite;
                    if ( titleInfo )
                    {
                      titleInfo = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)titleInfo,
                                                              0LL);
                      if ( titleInfo )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
                        goto LABEL_83;
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
    goto LABEL_114;
  }
  this->fields.tutorialState = 1;
  titleInfo = (MissionNotifyManager_o *)v104->fields.questRestrictionInfo;
  if ( !titleInfo )
    goto LABEL_114;
  if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction((QuestRestrictionInfo_o *)titleInfo, 0LL) )
  {
    this->fields.isForceFadeOut = 1;
    this->fields.tutorialMode = 4;
LABEL_83:
    v106 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v106, (Il2CppObject *)this, Method_FollowerRootComponent_EndLoadCommonBg__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v106, 2, 1, 0LL);
    return;
  }
  this->fields.tutorialMode = 1;
LABEL_88:
  v107 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v107,
    (Il2CppObject *)this,
    Method_FollowerRootComponent_EndLoadPartyOrganizationAtlasSimple__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v107, 1, 0LL);
}


void __fastcall FollowerRootComponent__setBattleSetupFollowType(
        FollowerRootComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  struct BattleSetupInfo_o *v4; // x8
  int v5; // w9

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_10;
  battleSetupInfo->fields.followerType = 0;
  if ( type == 5 )
  {
    v4 = this->fields.battleSetupInfo;
    if ( v4 )
    {
      v5 = 5;
      goto LABEL_8;
    }
LABEL_10:
    sub_B5D69C(this, type);
  }
  if ( type != 1 )
    return;
  v4 = this->fields.battleSetupInfo;
  if ( !v4 )
    goto LABEL_10;
  v5 = 1;
LABEL_8:
  v4->fields.followerType = v5;
}


void __fastcall FollowerRootComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct FollowerRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E56D1 & 1) == 0 )
  {
    sub_B5D5C4(&FollowerRootComponent___c_TypeInfo, v1, v2, v3);
    byte_42E56D1 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(FollowerRootComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = FollowerRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct FollowerRootComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall FollowerRootComponent___c___ctor(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FollowerRootComponent___c___Init_b__47_0(FollowerRootComponent___c_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PartyOrganizationUtility_c *v7; // x0
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E56D2 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E56D2 = 1;
  }
  v7 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v7 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall FollowerRootComponent___c___OnSelectFollowerItem_b__62_0(
        FollowerRootComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  PartyOrganizationUtility_c *v7; // x0
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E56D3 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E56D3 = 1;
  }
  v7 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v7 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v9);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}