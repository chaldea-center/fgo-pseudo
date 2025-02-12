void __fastcall GiftButtonCtrl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct GiftButtonCtrl_StaticFields *static_fields; // x8

  if ( (byte_4BC9B47 & 1) == 0 )
  {
    sub_1C1ABD4(&GiftButtonCtrl_TypeInfo, v1);
    byte_4BC9B47 = 1;
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
  __int64 v3; // x1
  void *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v7; // x2
  int32_t v8; // w1
  const MethodInfo *v9; // x2
  bool EnableTimeLimitedNotification; // w1
  bool hasLimited; // [xsp+8h] [xbp-28h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BC9B40 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4BC9B40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  Instance = UserGameMaster__getSelfUserGame(0LL);
  count = 0;
  hasLimited = 0;
  if ( Instance )
  {
    if ( !MasterData_object )
      goto LABEL_13;
    UserPresentBoxMaster__getValidItemInfo(
      (UserPresentBoxMaster_o *)MasterData_object,
      *((_QWORD *)Instance + 2),
      &count,
      &hasLimited,
      0LL);
    v8 = count;
  }
  else
  {
    v8 = 0;
  }
  GiftButtonCtrl__SetGiftCount(this, v8, v7);
  if ( !hasLimited )
  {
    if ( this )
    {
      EnableTimeLimitedNotification = 0;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C1AE30(Instance, v5);
  }
  EnableTimeLimitedNotification = this->fields.EnableTimeLimitedNotification;
LABEL_12:
  GiftButtonCtrl__SetLimitedItemNotification(this, EnableTimeLimitedNotification, v9);
}


void __fastcall GiftButtonCtrl__OnBtnTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_4BC9B42 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_GiftButtonCtrl_OnBtnTouched__, method);
    sub_1C1ABD4(&StringLiteral_3147/*"BTN_GIFT"*/, v3);
    byte_4BC9B42 = 1;
  }
  v4 = Method_GiftButtonCtrl_OnBtnTouched__;
  if ( (*((_BYTE *)Method_GiftButtonCtrl_OnBtnTouched__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_GiftButtonCtrl_OnBtnTouched__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_1C1AE30(0LL, v6);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3147/*"BTN_GIFT"*/, 0LL);
  ActionExtensions__Call(this->fields.OnGiftOpenAdditionalAction, 0LL);
}


void __fastcall GiftButtonCtrl__OnButtonTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_4BC9B45 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3147/*"BTN_GIFT"*/, method);
    byte_4BC9B45 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3147/*"BTN_GIFT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__OnGiftInterfaceCloseFadedOut(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  TerminalSceneComponent_c *v12; // x0
  struct TerminalSceneComponent_o *mInstance; // x9
  UnityEngine_Object_o *v14; // x21
  struct System_Func_bool__bool__o *OnGiftCloseAdditionalAction; // x8

  if ( (byte_4BC9B44 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, retrievedNewServant);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_5856/*"EV_GIFT_EXIT"*/, v8);
    byte_4BC9B44 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BC2713 )
  {
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v11);
    byte_4BC2713 = 1;
  }
  v12 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v12 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v12->static_fields->mInstance;
  v14 = mInstance ? (UnityEngine_Object_o *)mInstance->fields.mTerminalList : 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_27;
      if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v14, 0LL) )
        ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v14, 1, 0LL);
    }
  }
  OnGiftCloseAdditionalAction = this->fields.OnGiftCloseAdditionalAction;
  if ( !OnGiftCloseAdditionalAction
    || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))OnGiftCloseAdditionalAction->fields.m_target)(
          OnGiftCloseAdditionalAction->fields.original_method_info,
          retrievedNewServant,
          *(_QWORD *)&OnGiftCloseAdditionalAction->fields.extra_arg) & 1) != 0 )
  {
    Instance = (CommonUI_o *)this->fields.stateMachine;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5856/*"EV_GIFT_EXIT"*/, 0LL);
      if ( v14 )
        ScrTerminalListTop__OnPlayerStatusSetBackMaskActive((ScrTerminalListTop_o *)v14, 0LL);
      return;
    }
LABEL_27:
    sub_1C1AE30(Instance, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__OnGiftInterfaceClosed(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PlayMakerFSM_o *stateMachine; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BC9B46 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_7226/*"GotNewServantTrigger"*/, retrievedNewServant);
    sub_1C1ABD4(&StringLiteral_5857/*"EV_GIFT_PROC_FIN"*/, v5);
    byte_4BC9B46 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine
    || (PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5857/*"EV_GIFT_PROC_FIN"*/, 0LL),
        GiftButtonCtrl__InvalidateGiftInfo(this, v7),
        (stateMachine = this->fields.stateMachine) == 0LL)
    || (stateMachine = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(stateMachine, 0LL)) == 0LL
    || (stateMachine = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                           (HutongGames_PlayMaker_FsmVariables_o *)stateMachine,
                                           (System_String_o *)StringLiteral_7226/*"GotNewServantTrigger"*/,
                                           0LL)) == 0LL )
  {
    sub_1C1AE30(stateMachine, retrievedNewServant);
  }
  LOBYTE(stateMachine->fields.addEventHandlers) = retrievedNewServant;
}


void __fastcall GiftButtonCtrl__OnGiftInterfaceOpenFadedOut(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v11; // x21
  System_Action_o *v12; // x22
  ScrTerminalListTop_o *v13; // x0
  __int64 v14; // x1
  QuestRewardTokenAction_c *klass; // x8
  CommonUI_o *v16; // x19
  GiftButtonCtrl_c *v17; // x8
  QuestRewardTokenAction_c *v18; // x8
  QuestRewardTokenAction_c *v19; // x8

  if ( (byte_4BC9B43 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&UserPresentBoxWindow_ClickDelegate_TypeInfo, v3);
    sub_1C1ABD4(&Method_GiftButtonCtrl_InvalidateGiftInfo__, v4);
    sub_1C1ABD4(&Method_GiftButtonCtrl_OnGiftInterfaceClosed__, v5);
    sub_1C1ABD4(&GiftButtonCtrl_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v9);
    byte_4BC9B43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1C1AE20(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_GiftButtonCtrl_OnGiftInterfaceClosed__,
    0LL);
  v12 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_GiftButtonCtrl_InvalidateGiftInfo__, 0LL);
  if ( !Instance )
    goto LABEL_37;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v11, v12, 0LL);
  v13 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v13 )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v13, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BC2713 )
    {
      sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
      byte_4BC2713 = 1;
    }
    v13 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v13 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v13->fields.boardGameTokenAction->klass;
    if ( klass )
    {
      v13 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
      if ( v13 )
      {
        if ( ScrTerminalListTop__get_IsActiveBlankEarth(v13, 0LL) )
        {
          v13 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v16 = (CommonUI_o *)v13;
          v17 = GiftButtonCtrl_TypeInfo;
          if ( !GiftButtonCtrl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(GiftButtonCtrl_TypeInfo);
            v17 = GiftButtonCtrl_TypeInfo;
          }
          if ( !v16 )
            goto LABEL_37;
          CommonUI__SetUsrPresentListPos(v16, v17->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BC2713 )
          {
            sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
            byte_4BC2713 = 1;
          }
          v13 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v13 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          }
          v18 = v13->fields.boardGameTokenAction->klass;
          if ( !v18 )
            goto LABEL_37;
          v13 = *(ScrTerminalListTop_o **)&v18->_2.static_fields_size;
          if ( !v13 )
            goto LABEL_37;
          ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v13, 0, 0LL);
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4BC2713 )
        {
          sub_1C1ABD4(&TerminalSceneComponent_TypeInfo, v14);
          byte_4BC2713 = 1;
        }
        v13 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v13 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v19 = v13->fields.boardGameTokenAction->klass;
        if ( v19 )
        {
          v13 = *(ScrTerminalListTop_o **)&v19->_2.instance_size;
          if ( v13 )
          {
            TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v13, 0LL);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_1C1AE30(v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__SetGiftCount(GiftButtonCtrl_o *this, int32_t giftCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SimpleAnimation_o *giftNumberCounter; // x0
  struct SimpleAnimationPlayable_o *m_Playable; // x8
  uint32_t m_Version; // w9
  int v10; // w10
  struct System_String_array *animFiles; // x8
  int32_t v12; // w25
  il2cpp_array_size_t max_length; // w10
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  struct System_String_array *sprFiles; // x8
  il2cpp_array_size_t v17; // w9
  UnityEngine_Object_o *giftSimpleAnimation; // x23
  UnityEngine_Object_o *giftAnimation; // x23
  UnityEngine_Object_o *giftButton; // x22

  if ( (byte_4BC9B41 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, *(_QWORD *)&giftCount);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v6);
    byte_4BC9B41 = 1;
  }
  giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  m_Playable = giftNumberCounter[1].fields.m_Playable;
  m_Version = m_Playable[1].fields.m_ActualPlayable.fields.m_Handle.fields.m_Version;
  v10 = *((_DWORD *)&m_Playable[1].fields.m_Mixer + 2);
  animFiles = this->fields.animFiles;
  if ( (int)(m_Version - v10) <= giftCount )
    v12 = 2;
  else
    v12 = giftCount > 0;
  if ( !animFiles )
    goto LABEL_42;
  max_length = animFiles->max_length;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v12 <= (int)max_length )
  {
    if ( v12 >= max_length )
      goto LABEL_43;
    v15 = animFiles->m_Items[v12];
  }
  sprFiles = this->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_42;
  v17 = sprFiles->max_length;
  if ( v12 <= (int)v17 )
  {
    if ( v12 < v17 )
    {
      v14 = sprFiles->m_Items[v12];
      goto LABEL_16;
    }
LABEL_43:
    sub_1C1AE38(giftNumberCounter, *(_QWORD *)&giftCount);
  }
LABEL_16:
  giftSimpleAnimation = (UnityEngine_Object_o *)this->fields.giftSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftSimpleAnimation, 0LL, 0LL) )
  {
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_42;
    SimpleAnimation__Stop(giftNumberCounter, 0LL);
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_42;
    if ( SimpleAnimation__GetClipCount(giftNumberCounter, 0LL) >= v12 && !System_String__IsNullOrEmpty(v15, 0LL) )
    {
      giftNumberCounter = this->fields.giftSimpleAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      SimpleAnimation__Play_65178652(giftNumberCounter, v15, 0LL);
    }
  }
  else
  {
    giftAnimation = (UnityEngine_Object_o *)this->fields.giftAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(giftAnimation, 0LL, 0LL) )
    {
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)giftNumberCounter, 0LL);
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)giftNumberCounter, 0LL) >= v12
        && !System_String__IsNullOrEmpty(v15, 0LL) )
      {
        giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
        if ( !giftNumberCounter )
          goto LABEL_42;
        UnityEngine_Animation__Play_70538820((UnityEngine_Animation_o *)giftNumberCounter, v15, 0LL);
      }
    }
  }
  giftButton = (UnityEngine_Object_o *)this->fields.giftButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(giftButton, 0LL, 0LL) && !System_String__IsNullOrEmpty(v14, 0LL) )
  {
    giftNumberCounter = (SimpleAnimation_o *)this->fields.giftButton;
    if ( !giftNumberCounter )
      goto LABEL_42;
    UIButton__set_normalSprite((UIButton_o *)giftNumberCounter, v14, 0LL);
  }
  giftNumberCounter = (SimpleAnimation_o *)this->fields.giftNumberCounter;
  if ( !giftNumberCounter )
LABEL_42:
    sub_1C1AE30(giftNumberCounter, *(_QWORD *)&giftCount);
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
    sub_1C1AE30(limitedPeriodSprite, hasLimited);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedPeriodSprite, hasLimited, 0LL);
}


bool __fastcall GiftButtonCtrl__get_isEnabled(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_1C1AE30(0LL, method);
  return ((__int64 (__fastcall *)(struct UIButton_o *, Il2CppMethodPointer))giftButton->klass->vtable._4_get_isEnabled.method)(
           giftButton,
           giftButton->klass->vtable._5_set_isEnabled.methodPtr);
}


void __fastcall GiftButtonCtrl__set_OnGiftClose(
        GiftButtonCtrl_o *this,
        System_Func_bool__bool__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.OnGiftCloseAdditionalAction = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.OnGiftCloseAdditionalAction,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.OnGiftOpenAdditionalAction = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.OnGiftOpenAdditionalAction,
    (int64_t)value,
    (int64_t)method,
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
    sub_1C1AE30(0LL, value);
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))giftButton->klass->vtable._5_set_isEnabled.method)(
    giftButton,
    value,
    giftButton->klass->vtable._6_OnInit.methodPtr);
}