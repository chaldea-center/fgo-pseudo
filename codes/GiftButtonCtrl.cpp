void GiftButtonCtrl___cctor(const MethodInfo *method)
{
  struct GiftButtonCtrl_StaticFields *static_fields; // x8

  if ( (byte_4C457EE & 1) == 0 )
  {
    sub_1C37058(&GiftButtonCtrl_TypeInfo);
    byte_4C457EE = 1;
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
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  bool EnableTimeLimitedNotification; // w1
  bool hasLimited; // [xsp+8h] [xbp-28h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C457E7 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C457E7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
    v6 = count;
  }
  else
  {
    v6 = 0;
  }
  GiftButtonCtrl__SetGiftCount(this, v6, v5);
  if ( !hasLimited )
  {
    if ( this )
    {
      EnableTimeLimitedNotification = 0;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C372B4(Instance);
  }
  EnableTimeLimitedNotification = this->fields.EnableTimeLimitedNotification;
LABEL_12:
  GiftButtonCtrl__SetLimitedItemNotification(this, EnableTimeLimitedNotification, v7);
}


void GiftButtonCtrl__OnBtnTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_4C457E9 & 1) == 0 )
  {
    sub_1C37058(&Method_GiftButtonCtrl_OnBtnTouched__);
    sub_1C37058(&StringLiteral_3008/*"BTN_GIFT"*/);
    byte_4C457E9 = 1;
  }
  v3 = Method_GiftButtonCtrl_OnBtnTouched__;
  if ( (*((_BYTE *)Method_GiftButtonCtrl_OnBtnTouched__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_GiftButtonCtrl_OnBtnTouched__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3008/*"BTN_GIFT"*/, 0);
  ActionExtensions__Call(this->fields.OnGiftOpenAdditionalAction, 0);
}


void GiftButtonCtrl__OnButtonTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_4C457EC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3008/*"BTN_GIFT"*/);
    byte_4C457EC = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3008/*"BTN_GIFT"*/, 0);
}


void GiftButtonCtrl__OnGiftInterfaceCloseFadedOut(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  TerminalSceneComponent_c *v6; // x0
  struct TerminalSceneComponent_o *mInstance; // x9
  UnityEngine_Object_o *v8; // x21
  struct System_Func_bool__bool__o *OnGiftCloseAdditionalAction; // x8

  if ( (byte_4C457EB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&StringLiteral_5744/*"EV_GIFT_EXIT"*/);
    byte_4C457EB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseUsrPresentList(Instance, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  v8 = mInstance ? (UnityEngine_Object_o *)mInstance->fields.mTerminalList : 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_27;
      if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v8, 0) )
        ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v8, 1, 0);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5744/*"EV_GIFT_EXIT"*/, 0);
      if ( v8 )
        ScrTerminalListTop__OnPlayerStatusSetBackMaskActive((ScrTerminalListTop_o *)v8, 0);
      return;
    }
LABEL_27:
    sub_1C372B4(Instance);
  }
}


void GiftButtonCtrl__OnGiftInterfaceClosed(GiftButtonCtrl_o *this, bool retrievedNewServant, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C457ED & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7131/*"GotNewServantTrigger"*/);
    sub_1C37058(&StringLiteral_5745/*"EV_GIFT_PROC_FIN"*/);
    byte_4C457ED = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine
    || (PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5745/*"EV_GIFT_PROC_FIN"*/, 0),
        GiftButtonCtrl__InvalidateGiftInfo(this, v6),
        (stateMachine = this->fields.stateMachine) == 0)
    || (stateMachine = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(stateMachine, 0)) == 0
    || (stateMachine = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                           (HutongGames_PlayMaker_FsmVariables_o *)stateMachine,
                                           (System_String_o *)StringLiteral_7131/*"GotNewServantTrigger"*/,
                                           0)) == 0 )
  {
    sub_1C372B4(stateMachine);
  }
  LOBYTE(stateMachine->fields.addEventHandlers) = retrievedNewServant;
}


void GiftButtonCtrl__OnGiftInterfaceOpenFadedOut(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v4; // x21
  System_Action_o *v5; // x22
  ScrTerminalListTop_o *genericContainerHandle; // x0
  QuestRewardItemAction_c *klass; // x8
  CommonUI_o *v8; // x19
  GiftButtonCtrl_c *v9; // x8
  QuestRewardItemAction_c *v10; // x8
  QuestRewardItemAction_c *v11; // x8

  if ( (byte_4C457EA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UserPresentBoxWindow_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_GiftButtonCtrl_InvalidateGiftInfo__);
    sub_1C37058(&Method_GiftButtonCtrl_OnGiftInterfaceClosed__);
    sub_1C37058(&GiftButtonCtrl_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C457EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1C372A4(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(v4, (Il2CppObject *)this, Method_GiftButtonCtrl_OnGiftInterfaceClosed__, 0);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GiftButtonCtrl_InvalidateGiftInfo__, 0);
  if ( !Instance )
    goto LABEL_37;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v4, v5, 0);
  genericContainerHandle = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !genericContainerHandle )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)genericContainerHandle, 34, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
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
        if ( ScrTerminalListTop__get_IsActiveBlankEarth(genericContainerHandle, 0) )
        {
          genericContainerHandle = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v8 = (CommonUI_o *)genericContainerHandle;
          v9 = GiftButtonCtrl_TypeInfo;
          if ( !GiftButtonCtrl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(GiftButtonCtrl_TypeInfo);
            v9 = GiftButtonCtrl_TypeInfo;
          }
          if ( !v8 )
            goto LABEL_37;
          CommonUI__SetUsrPresentListPos(v8, v9->static_fields->BLANK_EARTH_WINDOW_POS, 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C3CF06 )
          {
            sub_1C37058(&TerminalSceneComponent_TypeInfo);
            byte_4C3CF06 = 1;
          }
          genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          }
          v10 = genericContainerHandle->fields.friendPointBoostItemAction->klass;
          if ( !v10 )
            goto LABEL_37;
          genericContainerHandle = *(ScrTerminalListTop_o **)&v10->_2.element_size;
          if ( !genericContainerHandle )
            goto LABEL_37;
          ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(genericContainerHandle, 0, 0);
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4C3CF06 )
        {
          sub_1C37058(&TerminalSceneComponent_TypeInfo);
          byte_4C3CF06 = 1;
        }
        genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v11 = genericContainerHandle->fields.friendPointBoostItemAction->klass;
        if ( v11 )
        {
          genericContainerHandle = (ScrTerminalListTop_o *)v11->_2.genericContainerHandle;
          if ( genericContainerHandle )
          {
            TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_1C372B4(genericContainerHandle);
  }
}


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

  if ( (byte_4C457E8 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C457E8 = 1;
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
    sub_1C372BC(giftNumberCounter);
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
      SimpleAnimation__Play_66507412(giftNumberCounter, v13, 0);
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
        UnityEngine_Animation__Play_71012036((UnityEngine_Animation_o *)giftNumberCounter, v13, 0);
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
    sub_1C372B4(giftNumberCounter);
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)giftNumberCounter, giftCount, 0);
}


void GiftButtonCtrl__SetLimitedItemNotification(GiftButtonCtrl_o *this, bool hasLimited, const MethodInfo *method)
{
  UnityEngine_Component_o *limitedPeriodSprite; // x0

  limitedPeriodSprite = (UnityEngine_Component_o *)this->fields.limitedPeriodSprite;
  if ( !limitedPeriodSprite
    || (limitedPeriodSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(limitedPeriodSprite, 0)) == 0 )
  {
    sub_1C372B4(limitedPeriodSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedPeriodSprite, hasLimited, 0);
}


bool GiftButtonCtrl__get_isEnabled(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_1C372B4(0);
  return ((__int64 (__fastcall *)(struct UIButton_o *, const MethodInfo *))giftButton->klass->vtable._4_get_isEnabled.methodPtr)(
           giftButton,
           giftButton->klass->vtable._4_get_isEnabled.method);
}


void GiftButtonCtrl__set_OnGiftClose(
        GiftButtonCtrl_o *this,
        System_Func_bool__bool__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.OnGiftCloseAdditionalAction = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.OnGiftCloseAdditionalAction, (int32_t)value, (int32_t)method, v3);
}


void GiftButtonCtrl__set_OnGiftOpen(GiftButtonCtrl_o *this, System_Action_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.OnGiftOpenAdditionalAction = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.OnGiftOpenAdditionalAction, (int32_t)value, (int32_t)method, v3);
}


void GiftButtonCtrl__set_isEnabled(GiftButtonCtrl_o *this, bool value, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))giftButton->klass->vtable._5_set_isEnabled.methodPtr)(
    giftButton,
    value,
    giftButton->klass->vtable._5_set_isEnabled.method);
}