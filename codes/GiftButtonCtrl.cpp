void GiftButtonCtrl___cctor(const MethodInfo *method)
{
  struct GiftButtonCtrl_StaticFields *static_fields; // x8

  if ( (byte_4CF0EC5 & 1) == 0 )
  {
    sub_1C7BAE8(&GiftButtonCtrl_TypeInfo);
    byte_4CF0EC5 = 1;
  }
  static_fields = GiftButtonCtrl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BLANK_EARTH_WINDOW_POS.fields.x = 0;
  static_fields->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
}


void GiftButtonCtrl___ctor(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  this->fields.EnableTimeLimitedNotification = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GiftButtonCtrl__InvalidateGiftInfo(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  bool EnableTimeLimitedNotification; // w1
  bool hasLimited; // [xsp+8h] [xbp-28h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CF0EBE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF0EBE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  count = 0;
  hasLimited = 0;
  if ( Instance )
  {
    if ( !MasterData_object )
      goto LABEL_13;
    UserPresentBoxMaster__getValidItemInfo(
      (UserPresentBoxMaster_o *)MasterData_object,
      Instance->fields.m_CachedPtr,
      &count,
      &hasLimited,
      0);
    v7 = count;
  }
  else
  {
    v7 = 0;
  }
  GiftButtonCtrl__SetGiftCount(this, v7, v6);
  if ( !hasLimited )
  {
    if ( this )
    {
      EnableTimeLimitedNotification = 0;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C7BD40(Instance, v4);
  }
  EnableTimeLimitedNotification = this->fields.EnableTimeLimitedNotification;
LABEL_12:
  GiftButtonCtrl__SetLimitedItemNotification(this, EnableTimeLimitedNotification, v8);
}


void GiftButtonCtrl__OnBtnTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_4CF0EC0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_GiftButtonCtrl_OnBtnTouched__);
    sub_1C7BAE8(&StringLiteral_3009/*"BTN_GIFT"*/);
    byte_4CF0EC0 = 1;
  }
  v3 = Method_GiftButtonCtrl_OnBtnTouched__;
  if ( (*((_BYTE *)Method_GiftButtonCtrl_OnBtnTouched__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C7BB00(Method_GiftButtonCtrl_OnBtnTouched__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_1C7BD40(0, v5);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3009/*"BTN_GIFT"*/, 0);
  ActionExtensions__Call(this->fields.OnGiftOpenAdditionalAction, 0);
}


void GiftButtonCtrl__OnButtonTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_4CF0EC3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3009/*"BTN_GIFT"*/);
    byte_4CF0EC3 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_1C7BD40(0, method);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3009/*"BTN_GIFT"*/, 0);
}


void GiftButtonCtrl__OnGiftInterfaceCloseFadedOut(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  struct TerminalSceneComponent_o *mInstance; // x9
  UnityEngine_Object_o *v9; // x21
  struct System_Func_bool__bool__o *OnGiftCloseAdditionalAction; // x8

  if ( (byte_4CF0EC2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5752/*"EV_GIFT_EXIT"*/);
    byte_4CF0EC2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseUsrPresentList(Instance, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v7->static_fields->mInstance;
  v9 = mInstance ? (UnityEngine_Object_o *)mInstance->fields.mTerminalList : 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_27;
      if ( ScrTerminalListTop__get_IsActiveAnyEarth((ScrTerminalListTop_o *)v9, 0) )
      {
        ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v9, 1, 0);
        ScrTerminalListTop__SwitchDispPlanetEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v9, 1, 0);
      }
    }
  }
  OnGiftCloseAdditionalAction = this->fields.OnGiftCloseAdditionalAction;
  if ( !OnGiftCloseAdditionalAction
    || (((__int64 (__fastcall *)(intptr_t, bool, intptr_t))OnGiftCloseAdditionalAction->fields.invoke_impl)(
          OnGiftCloseAdditionalAction->fields.method_code,
          retrievedNewServant,
          OnGiftCloseAdditionalAction->fields.method)
      & 1) != 0 )
  {
    Instance = (CommonUI_o *)this->fields.stateMachine;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5752/*"EV_GIFT_EXIT"*/, 0);
      if ( v9 )
        ScrTerminalListTop__OnPlayerStatusSetBackMaskActive((ScrTerminalListTop_o *)v9, 0);
      return;
    }
LABEL_27:
    sub_1C7BD40(Instance, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void GiftButtonCtrl__OnGiftInterfaceClosed(GiftButtonCtrl_o *this, bool retrievedNewServant, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CF0EC4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7146/*"GotNewServantTrigger"*/);
    sub_1C7BAE8(&StringLiteral_5753/*"EV_GIFT_PROC_FIN"*/);
    byte_4CF0EC4 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine
    || (PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5753/*"EV_GIFT_PROC_FIN"*/, 0),
        GiftButtonCtrl__InvalidateGiftInfo(this, v6),
        (stateMachine = this->fields.stateMachine) == 0)
    || (stateMachine = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(stateMachine, 0)) == 0
    || (stateMachine = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                           (HutongGames_PlayMaker_FsmVariables_o *)stateMachine,
                                           (System_String_o *)StringLiteral_7146/*"GotNewServantTrigger"*/,
                                           0)) == 0 )
  {
    sub_1C7BD40(stateMachine, retrievedNewServant);
  }
  LOBYTE(stateMachine->fields.addEventHandlers) = retrievedNewServant;
}


void GiftButtonCtrl__OnGiftInterfaceOpenFadedOut(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v4; // x21
  System_Action_o *v5; // x22
  ScrTerminalListTop_o *genericContainerHandle; // x0
  __int64 v7; // x1
  QuestRewardItemAction_c *klass; // x8
  CommonUI_o *v9; // x19
  GiftButtonCtrl_c *v10; // x8
  QuestRewardItemAction_c *v11; // x8
  QuestRewardItemAction_c *v12; // x8
  QuestRewardItemAction_c *v13; // x8

  if ( (byte_4CF0EC1 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&UserPresentBoxWindow_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_GiftButtonCtrl_InvalidateGiftInfo__);
    sub_1C7BAE8(&Method_GiftButtonCtrl_OnGiftInterfaceClosed__);
    sub_1C7BAE8(&GiftButtonCtrl_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CF0EC1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1C7BD34(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(v4, (Il2CppObject *)this, Method_GiftButtonCtrl_OnGiftInterfaceClosed__, 0);
  v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GiftButtonCtrl_InvalidateGiftInfo__, 0);
  if ( !Instance )
    goto LABEL_43;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v4, v5, 0);
  genericContainerHandle = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !genericContainerHandle )
    goto LABEL_43;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)genericContainerHandle, 34, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CE840E )
    {
      sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
      byte_4CE840E = 1;
    }
    genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.friendPointBoostItemAction->klass;
    if ( klass )
    {
      genericContainerHandle = *(ScrTerminalListTop_o **)&klass->_2.element_size;
      if ( genericContainerHandle )
      {
        if ( ScrTerminalListTop__get_IsActiveAnyEarth(genericContainerHandle, 0) )
        {
          genericContainerHandle = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v9 = (CommonUI_o *)genericContainerHandle;
          v10 = GiftButtonCtrl_TypeInfo;
          if ( !GiftButtonCtrl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(GiftButtonCtrl_TypeInfo);
            v10 = GiftButtonCtrl_TypeInfo;
          }
          if ( !v9 )
            goto LABEL_43;
          CommonUI__SetUsrPresentListPos(v9, v10->static_fields->BLANK_EARTH_WINDOW_POS, 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4CE840E )
          {
            sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
            byte_4CE840E = 1;
          }
          genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          }
          v11 = genericContainerHandle->fields.friendPointBoostItemAction->klass;
          if ( !v11 )
            goto LABEL_43;
          genericContainerHandle = *(ScrTerminalListTop_o **)&v11->_2.element_size;
          if ( !genericContainerHandle )
            goto LABEL_43;
          ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(genericContainerHandle, 0, 0);
          if ( !byte_4CE840E )
          {
            sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
            byte_4CE840E = 1;
          }
          genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          }
          v12 = genericContainerHandle->fields.friendPointBoostItemAction->klass;
          if ( !v12 )
            goto LABEL_43;
          genericContainerHandle = *(ScrTerminalListTop_o **)&v12->_2.element_size;
          if ( !genericContainerHandle )
            goto LABEL_43;
          ScrTerminalListTop__SwitchDispPlanetEarthPresentBoxHideGameObject(genericContainerHandle, 0, 0);
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CE840E )
        {
          sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
          byte_4CE840E = 1;
        }
        genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v13 = genericContainerHandle->fields.friendPointBoostItemAction->klass;
        if ( v13 )
        {
          genericContainerHandle = (ScrTerminalListTop_o *)v13->_2.genericContainerHandle;
          if ( genericContainerHandle )
          {
            TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
            return;
          }
        }
      }
    }
LABEL_43:
    sub_1C7BD40(genericContainerHandle, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void GiftButtonCtrl__SetGiftCount(GiftButtonCtrl_o *this, int32_t giftCount, const MethodInfo *method)
{
  SimpleAnimation_o *giftNumberCounter; // x0
  intptr_t m_Handle; // x8
  int v7; // w9
  int v8; // w10
  struct System_String_array *animFiles; // x8
  int32_t v10; // w25
  int32_t max_length; // w10
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v15; // w9
  UnityEngine_Object_o *giftSimpleAnimation; // x23
  UnityEngine_Object_o *giftAnimation; // x23
  UnityEngine_Object_o *giftButton; // x22

  if ( (byte_4CF0EBF & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF0EBF = 1;
  }
  giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  m_Handle = giftNumberCounter[1].fields.m_LayerMixer.fields.m_Handle;
  v7 = *(_DWORD *)(m_Handle + 128);
  v8 = *(_DWORD *)(m_Handle + 140);
  animFiles = this->fields.animFiles;
  if ( v7 - v8 <= giftCount )
    v10 = 2;
  else
    v10 = giftCount > 0;
  if ( !animFiles )
    goto LABEL_42;
  max_length = animFiles->max_length;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v10 <= max_length )
  {
    if ( v10 >= (unsigned int)max_length )
      goto LABEL_43;
    v13 = animFiles->m_Items[v10];
  }
  sprFiles = this->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_42;
  v15 = sprFiles->max_length;
  if ( v10 <= v15 )
  {
    if ( v10 < (unsigned int)v15 )
    {
      v12 = sprFiles->m_Items[v10];
      goto LABEL_16;
    }
LABEL_43:
    sub_1C7BD48(giftNumberCounter);
  }
LABEL_16:
  giftSimpleAnimation = (UnityEngine_Object_o *)this->fields.giftSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftSimpleAnimation, 0, 0) )
  {
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_42;
    SimpleAnimation__Stop(giftNumberCounter, 0);
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_42;
    if ( SimpleAnimation__GetClipCount(giftNumberCounter, 0) >= v10 && !System_String__IsNullOrEmpty(v13, 0) )
    {
      giftNumberCounter = this->fields.giftSimpleAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      SimpleAnimation__Play_67121960(giftNumberCounter, v13, 0);
    }
  }
  else
  {
    giftAnimation = (UnityEngine_Object_o *)this->fields.giftAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(giftAnimation, 0, 0) )
    {
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)giftNumberCounter, 0);
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)giftNumberCounter, 0) >= v10
        && !System_String__IsNullOrEmpty(v13, 0) )
      {
        giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
        if ( !giftNumberCounter )
          goto LABEL_42;
        UnityEngine_Animation__Play_71613624((UnityEngine_Animation_o *)giftNumberCounter, v13, 0);
      }
    }
  }
  giftButton = (UnityEngine_Object_o *)this->fields.giftButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftButton, 0, 0) && !System_String__IsNullOrEmpty(v12, 0) )
  {
    giftNumberCounter = (SimpleAnimation_o *)this->fields.giftButton;
    if ( !giftNumberCounter )
      goto LABEL_42;
    UIButton__set_normalSprite((UIButton_o *)giftNumberCounter, v12, 0);
  }
  giftNumberCounter = (SimpleAnimation_o *)this->fields.giftNumberCounter;
  if ( !giftNumberCounter )
LABEL_42:
    sub_1C7BD40(giftNumberCounter, *(_QWORD *)&giftCount);
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)giftNumberCounter, giftCount, 0);
}


// local variable allocation has failed, the output may be wrong!
void GiftButtonCtrl__SetLimitedItemNotification(GiftButtonCtrl_o *this, bool hasLimited, const MethodInfo *method)
{
  UnityEngine_Component_o *limitedPeriodSprite; // x0

  limitedPeriodSprite = (UnityEngine_Component_o *)this->fields.limitedPeriodSprite;
  if ( !limitedPeriodSprite
    || (limitedPeriodSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(limitedPeriodSprite, 0)) == 0 )
  {
    sub_1C7BD40(limitedPeriodSprite, hasLimited);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedPeriodSprite, hasLimited, 0);
}


bool GiftButtonCtrl__get_isEnabled(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_1C7BD40(0, method);
  return ((__int64 (__fastcall *)(struct UIButton_o *, const MethodInfo *))giftButton->klass->vtable._4_get_isEnabled.methodPtr)(
           giftButton,
           giftButton->klass->vtable._4_get_isEnabled.method);
}


void GiftButtonCtrl__set_OnGiftClose(
        GiftButtonCtrl_o *this,
        System_Func_bool__bool__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.OnGiftCloseAdditionalAction = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.OnGiftCloseAdditionalAction,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GiftButtonCtrl__set_OnGiftOpen(GiftButtonCtrl_o *this, System_Action_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.OnGiftOpenAdditionalAction = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.OnGiftOpenAdditionalAction,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GiftButtonCtrl__set_isEnabled(GiftButtonCtrl_o *this, bool value, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_1C7BD40(0, value);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))giftButton->klass->vtable._5_set_isEnabled.methodPtr)(
    giftButton,
    value,
    giftButton->klass->vtable._5_set_isEnabled.method);
}