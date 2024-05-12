void __fastcall GiftButtonCtrl___cctor(const MethodInfo *method)
{
  struct GiftButtonCtrl_StaticFields *static_fields; // x8

  if ( (byte_438C8D5 & 1) == 0 )
  {
    sub_B775C4(&GiftButtonCtrl_TypeInfo);
    byte_438C8D5 = 1;
  }
  static_fields = GiftButtonCtrl_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->BLANK_EARTH_WINDOW_POS.fields.x = 0LL;
  static_fields->BLANK_EARTH_WINDOW_POS.fields.z = 500.0;
}


void __fastcall GiftButtonCtrl___ctor(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  this->fields.EnableTimeLimitedNotification = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GiftButtonCtrl__InvalidateGiftInfo(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  bool EnableTimeLimitedNotification; // w1
  bool hasLimited; // [xsp+8h] [xbp-18h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438C8CE & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C8CE = 1;
  }
  count = 0;
  hasLimited = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  count = 0;
  hasLimited = 0;
  if ( Instance )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_13;
    UserPresentBoxMaster__getValidItemInfo(
      MasterData_WarQuestSelectionMaster,
      *((_QWORD *)Instance + 2),
      &count,
      &hasLimited,
      0LL);
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
    sub_B7769C(Instance, v4);
  }
  EnableTimeLimitedNotification = this->fields.EnableTimeLimitedNotification;
LABEL_12:
  GiftButtonCtrl__SetLimitedItemNotification(this, EnableTimeLimitedNotification, v8);
}


void __fastcall GiftButtonCtrl__OnBtnTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_438C8D0 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_2739/*"BTN_GIFT"*/);
    byte_438C8D0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_B7769C(0LL, v3);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_2739/*"BTN_GIFT"*/, 0LL);
  ActionExtensions__Call(this->fields.OnGiftOpenAdditionalAction, 0LL);
}


void __fastcall GiftButtonCtrl__OnButtonTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_438C8D3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_2739/*"BTN_GIFT"*/);
    byte_438C8D3 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_B7769C(0LL, method);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_2739/*"BTN_GIFT"*/, 0LL);
}


void __fastcall GiftButtonCtrl__OnGiftInterfaceCloseFadedOut(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  ErrorDialog_c *klass; // x8
  ErrorDialog_c *v8; // x8
  System_Func_bool__bool__o *OnGiftCloseAdditionalAction; // x0

  if ( (byte_438C8D2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_bool__bool__Invoke__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    sub_B775C4(&StringLiteral_5890/*"EV_GIFT_EXIT"*/);
    byte_438C8D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
    }
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance->fields.errorDialog->klass;
    if ( !klass )
      goto LABEL_33;
    Instance = *(CommonUI_o **)&klass->_2.element_size;
    if ( !Instance )
      goto LABEL_33;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)Instance, 0LL) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4387463 )
      {
        sub_B775C4(&TerminalSceneComponent_TypeInfo);
        byte_4387463 = 1;
      }
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
      }
      v8 = Instance->fields.errorDialog->klass;
      if ( !v8 )
        goto LABEL_33;
      Instance = *(CommonUI_o **)&v8->_2.element_size;
      if ( !Instance )
        goto LABEL_33;
      ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)Instance, 1, 0LL);
    }
  }
  OnGiftCloseAdditionalAction = this->fields.OnGiftCloseAdditionalAction;
  if ( !OnGiftCloseAdditionalAction
    || System_Func_bool__bool___Invoke(
         OnGiftCloseAdditionalAction,
         retrievedNewServant,
         (const MethodInfo_29E0630 *)Method_System_Func_bool__bool__Invoke__) )
  {
    Instance = (CommonUI_o *)this->fields.stateMachine;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5890/*"EV_GIFT_EXIT"*/, 0LL);
      return;
    }
LABEL_33:
    sub_B7769C(Instance, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__OnGiftInterfaceClosed(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0
  const MethodInfo *v6; // x1

  if ( (byte_438C8D4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_7149/*"GotNewServantTrigger"*/);
    sub_B775C4(&StringLiteral_5891/*"EV_GIFT_PROC_FIN"*/);
    byte_438C8D4 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine
    || (PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5891/*"EV_GIFT_PROC_FIN"*/, 0LL),
        GiftButtonCtrl__InvalidateGiftInfo(this, v6),
        (stateMachine = this->fields.stateMachine) == 0LL)
    || (stateMachine = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(stateMachine, 0LL)) == 0LL
    || (stateMachine = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                           (HutongGames_PlayMaker_FsmVariables_o *)stateMachine,
                                           (System_String_o *)StringLiteral_7149/*"GotNewServantTrigger"*/,
                                           0LL)) == 0LL )
  {
    sub_B7769C(stateMachine, retrievedNewServant);
  }
  LOBYTE(stateMachine[1].klass) = retrievedNewServant;
}


void __fastcall GiftButtonCtrl__OnGiftInterfaceOpenFadedOut(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v4; // x21
  System_Action_o *v5; // x22
  CommonUI_o *genericContainerHandle; // x0
  __int64 v7; // x1
  ErrorDialog_c *klass; // x8
  CommonUI_o *v9; // x19
  GiftButtonCtrl_c *v10; // x8
  ErrorDialog_c *v11; // x8
  ErrorDialog_c *v12; // x8

  if ( (byte_438C8D1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&UserPresentBoxWindow_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_GiftButtonCtrl_InvalidateGiftInfo__);
    sub_B775C4(&Method_GiftButtonCtrl_OnGiftInterfaceClosed__);
    sub_B775C4(&GiftButtonCtrl_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&TerminalSceneComponent_TypeInfo);
    byte_438C8D1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (UserPresentBoxWindow_ClickDelegate_o *)sub_B77694(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v4,
    (Il2CppObject *)this,
    Method_GiftButtonCtrl_OnGiftInterfaceClosed__,
    0LL);
  v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GiftButtonCtrl_InvalidateGiftInfo__, 0LL);
  if ( !Instance )
    goto LABEL_44;
  CommonUI__OpenUsrPresentList(Instance, 1, v4, v5, 0LL);
  genericContainerHandle = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !genericContainerHandle )
    goto LABEL_44;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)genericContainerHandle, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_4387463 )
    {
      sub_B775C4(&TerminalSceneComponent_TypeInfo);
      byte_4387463 = 1;
    }
    genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.errorDialog->klass;
    if ( klass )
    {
      genericContainerHandle = *(CommonUI_o **)&klass->_2.element_size;
      if ( genericContainerHandle )
      {
        if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)genericContainerHandle, 0LL) )
        {
          genericContainerHandle = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v9 = genericContainerHandle;
          v10 = GiftButtonCtrl_TypeInfo;
          if ( (BYTE3(GiftButtonCtrl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !GiftButtonCtrl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(GiftButtonCtrl_TypeInfo);
            v10 = GiftButtonCtrl_TypeInfo;
          }
          if ( !v9 )
            goto LABEL_44;
          CommonUI__SetUsrPresentListPos(v9, v10->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4387463 )
          {
            sub_B775C4(&TerminalSceneComponent_TypeInfo);
            byte_4387463 = 1;
          }
          genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
          }
          v11 = genericContainerHandle->fields.errorDialog->klass;
          if ( !v11 )
            goto LABEL_44;
          genericContainerHandle = *(CommonUI_o **)&v11->_2.element_size;
          if ( !genericContainerHandle )
            goto LABEL_44;
          ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(
            (ScrTerminalListTop_o *)genericContainerHandle,
            0,
            0LL);
        }
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4387463 )
        {
          sub_B775C4(&TerminalSceneComponent_TypeInfo);
          byte_4387463 = 1;
        }
        genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        }
        v12 = genericContainerHandle->fields.errorDialog->klass;
        if ( v12 )
        {
          genericContainerHandle = (CommonUI_o *)v12->_2.genericContainerHandle;
          if ( genericContainerHandle )
          {
            TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0LL);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B7769C(genericContainerHandle, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__SetGiftCount(GiftButtonCtrl_o *this, int32_t giftCount, const MethodInfo *method)
{
  SimpleAnimation_o *giftNumberCounter; // x0
  __int64 v6; // x8
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
  __int64 v19; // x0

  if ( (byte_438C8CF & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C8CF = 1;
  }
  giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  v6 = *(_QWORD *)&giftNumberCounter[1].fields.m_WrapMode;
  v7 = *(_DWORD *)(v6 + 112);
  v8 = *(_DWORD *)(v6 + 124);
  animFiles = this->fields.animFiles;
  if ( v7 - v8 <= giftCount )
    v10 = 2;
  else
    v10 = giftCount > 0;
  if ( !animFiles )
    goto LABEL_46;
  max_length = animFiles->max_length;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v10 <= max_length )
  {
    if ( v10 >= (unsigned int)max_length )
      goto LABEL_47;
    v13 = animFiles->m_Items[v10];
  }
  sprFiles = this->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_46;
  v15 = sprFiles->max_length;
  if ( v10 <= v15 )
  {
    if ( v10 < (unsigned int)v15 )
    {
      v12 = sprFiles->m_Items[v10];
      goto LABEL_17;
    }
LABEL_47:
    v19 = sub_B776C8(giftNumberCounter);
    sub_B77668(v19, 0LL);
  }
LABEL_17:
  giftSimpleAnimation = (UnityEngine_Object_o *)this->fields.giftSimpleAnimation;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(giftSimpleAnimation, 0LL, 0LL) )
  {
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_46;
    SimpleAnimation__Stop(giftNumberCounter, 0LL);
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_46;
    if ( SimpleAnimation__GetClipCount(giftNumberCounter, 0LL) >= v10 && !System_String__IsNullOrEmpty(v13, 0LL) )
    {
      giftNumberCounter = this->fields.giftSimpleAnimation;
      if ( !giftNumberCounter )
        goto LABEL_46;
      SimpleAnimation__Play_16815192(giftNumberCounter, v13, 0LL);
    }
  }
  else
  {
    giftAnimation = (UnityEngine_Object_o *)this->fields.giftAnimation;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(giftAnimation, 0LL, 0LL) )
    {
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_46;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)giftNumberCounter, 0LL);
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_46;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)giftNumberCounter, 0LL) >= v10
        && !System_String__IsNullOrEmpty(v13, 0LL) )
      {
        giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
        if ( !giftNumberCounter )
          goto LABEL_46;
        UnityEngine_Animation__Play_51745976((UnityEngine_Animation_o *)giftNumberCounter, v13, 0LL);
      }
    }
  }
  giftButton = (UnityEngine_Object_o *)this->fields.giftButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(giftButton, 0LL, 0LL) && !System_String__IsNullOrEmpty(v12, 0LL) )
  {
    giftNumberCounter = (SimpleAnimation_o *)this->fields.giftButton;
    if ( !giftNumberCounter )
      goto LABEL_46;
    UIButton__set_normalSprite((UIButton_o *)giftNumberCounter, v12, 0LL);
  }
  giftNumberCounter = (SimpleAnimation_o *)this->fields.giftNumberCounter;
  if ( !giftNumberCounter )
LABEL_46:
    sub_B7769C(giftNumberCounter, *(_QWORD *)&giftCount);
  NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)giftNumberCounter, giftCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__SetLimitedItemNotification(
        GiftButtonCtrl_o *this,
        bool hasLimited,
        const MethodInfo *method)
{
  UnityEngine_Component_o *limitedPeriodSprite; // x0

  limitedPeriodSprite = (UnityEngine_Component_o *)this->fields.limitedPeriodSprite;
  if ( !limitedPeriodSprite
    || (limitedPeriodSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(limitedPeriodSprite, 0LL)) == 0LL )
  {
    sub_B7769C(limitedPeriodSprite, hasLimited);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedPeriodSprite, hasLimited, 0LL);
}


bool __fastcall GiftButtonCtrl__get_isEnabled(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_B7769C(0LL, method);
  return ((__int64 (__fastcall *)(struct UIButton_o *, Il2CppMethodPointer))giftButton->klass->vtable._4_get_isEnabled.method)(
           giftButton,
           giftButton->klass->vtable._5_set_isEnabled.methodPtr);
}


void __fastcall GiftButtonCtrl__set_OnGiftClose(
        GiftButtonCtrl_o *this,
        System_Func_bool__bool__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.OnGiftCloseAdditionalAction = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.OnGiftCloseAdditionalAction,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall GiftButtonCtrl__set_OnGiftOpen(
        GiftButtonCtrl_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.OnGiftOpenAdditionalAction = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.OnGiftOpenAdditionalAction,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall GiftButtonCtrl__set_isEnabled(GiftButtonCtrl_o *this, bool value, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_B7769C(0LL, value);
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))giftButton->klass->vtable._5_set_isEnabled.method)(
    giftButton,
    value,
    giftButton->klass->vtable._6_OnInit.methodPtr);
}