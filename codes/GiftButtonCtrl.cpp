void __fastcall GiftButtonCtrl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct GiftButtonCtrl_StaticFields *static_fields; // x8

  if ( (byte_4B181E7 & 1) == 0 )
  {
    sub_1BCA7E0(&GiftButtonCtrl_TypeInfo, v1, v2);
    byte_4B181E7 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v9; // x2
  int32_t v10; // w1
  const MethodInfo *v11; // x2
  bool EnableTimeLimitedNotification; // w1
  bool hasLimited; // [xsp+8h] [xbp-28h] BYREF
  int32_t count; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B181E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B181E0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
    v10 = count;
  }
  else
  {
    v10 = 0;
  }
  GiftButtonCtrl__SetGiftCount(this, v10, v9);
  if ( !hasLimited )
  {
    if ( this )
    {
      EnableTimeLimitedNotification = 0;
      goto LABEL_12;
    }
LABEL_13:
    sub_1BCAA3C(Instance, v7);
  }
  EnableTimeLimitedNotification = this->fields.EnableTimeLimitedNotification;
LABEL_12:
  GiftButtonCtrl__SetLimitedItemNotification(this, EnableTimeLimitedNotification, v11);
}


void __fastcall GiftButtonCtrl__OnBtnTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_4B181E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_GiftButtonCtrl_OnBtnTouched__, method, v2);
    sub_1BCA7E0(&StringLiteral_3133/*"BTN_GIFT"*/, v4, v5);
    byte_4B181E2 = 1;
  }
  v6 = Method_GiftButtonCtrl_OnBtnTouched__;
  if ( (*((_BYTE *)Method_GiftButtonCtrl_OnBtnTouched__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_GiftButtonCtrl_OnBtnTouched__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_1BCAA3C(0LL, v8);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3133/*"BTN_GIFT"*/, 0LL);
  ActionExtensions__Call(this->fields.OnGiftOpenAdditionalAction, 0LL);
}


void __fastcall GiftButtonCtrl__OnButtonTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_4B181E5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3133/*"BTN_GIFT"*/, method, v2);
    byte_4B181E5 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3133/*"BTN_GIFT"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__OnGiftInterfaceCloseFadedOut(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  TerminalSceneComponent_c *v17; // x0
  struct TerminalSceneComponent_o *mInstance; // x9
  UnityEngine_Object_o *v19; // x21
  struct System_Func_bool__bool__o *OnGiftCloseAdditionalAction; // x8

  if ( (byte_4B181E4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, retrievedNewServant, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_5823/*"EV_GIFT_EXIT"*/, v11, v12);
    byte_4B181E4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v16);
    byte_4B10F83 = 1;
  }
  v17 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15);
    v17 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v17->static_fields->mInstance;
  v19 = mInstance ? (UnityEngine_Object_o *)mInstance->fields.mTerminalList : 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_27;
      if ( ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v19, 0LL) )
        ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v19, 1, 0LL);
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5823/*"EV_GIFT_EXIT"*/, 0LL);
      if ( v19 )
        ScrTerminalListTop__OnPlayerStatusSetBackMaskActive((ScrTerminalListTop_o *)v19, 0LL);
      return;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__OnGiftInterfaceClosed(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PlayMakerFSM_o *stateMachine; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B181E6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7184/*"GotNewServantTrigger"*/, retrievedNewServant, method);
    sub_1BCA7E0(&StringLiteral_5824/*"EV_GIFT_PROC_FIN"*/, v5, v6);
    byte_4B181E6 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine
    || (PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5824/*"EV_GIFT_PROC_FIN"*/, 0LL),
        GiftButtonCtrl__InvalidateGiftInfo(this, v8),
        (stateMachine = this->fields.stateMachine) == 0LL)
    || (stateMachine = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(stateMachine, 0LL)) == 0LL
    || (stateMachine = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                           (HutongGames_PlayMaker_FsmVariables_o *)stateMachine,
                                           (System_String_o *)StringLiteral_7184/*"GotNewServantTrigger"*/,
                                           0LL)) == 0LL )
  {
    sub_1BCAA3C(stateMachine, retrievedNewServant);
  }
  LOBYTE(stateMachine->fields.addEventHandlers) = retrievedNewServant;
}


void __fastcall GiftButtonCtrl__OnGiftInterfaceOpenFadedOut(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  UserPresentBoxWindow_ClickDelegate_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x22
  ScrTerminalListTop_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  QuestRewardTokenAction_c *klass; // x8
  __int64 v31; // x2
  CommonUI_o *v32; // x19
  GiftButtonCtrl_c *v33; // x8
  __int64 v34; // x2
  QuestRewardTokenAction_c *v35; // x8
  QuestRewardTokenAction_c *v36; // x8

  if ( (byte_4B181E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UserPresentBoxWindow_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_GiftButtonCtrl_InvalidateGiftInfo__, v6, v7);
    sub_1BCA7E0(&Method_GiftButtonCtrl_OnGiftInterfaceClosed__, v8, v9);
    sub_1BCA7E0(&GiftButtonCtrl_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v16, v17);
    byte_4B181E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (UserPresentBoxWindow_ClickDelegate_o *)sub_1BCAA2C(UserPresentBoxWindow_ClickDelegate_TypeInfo, v19, v20, v21);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v22,
    (Il2CppObject *)this,
    Method_GiftButtonCtrl_OnGiftInterfaceClosed__,
    0LL);
  v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_GiftButtonCtrl_InvalidateGiftInfo__, 0LL);
  if ( !Instance )
    goto LABEL_37;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v22, v26, 0LL);
  v27 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v27 )
    goto LABEL_37;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)v27, 34, 0LL) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v28);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v28, v29);
      byte_4B10F83 = 1;
    }
    v27 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v28);
      v27 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v27->fields.boardGameTokenAction->klass;
    if ( klass )
    {
      v27 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
      if ( v27 )
      {
        if ( ScrTerminalListTop__get_IsActiveBlankEarth(v27, 0LL) )
        {
          v27 = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v32 = (CommonUI_o *)v27;
          v33 = GiftButtonCtrl_TypeInfo;
          if ( !GiftButtonCtrl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(GiftButtonCtrl_TypeInfo, v28);
            v33 = GiftButtonCtrl_TypeInfo;
          }
          if ( !v32 )
            goto LABEL_37;
          CommonUI__SetUsrPresentListPos(v32, v33->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v28);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v28, v34);
            byte_4B10F83 = 1;
          }
          v27 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v28);
            v27 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
          }
          v35 = v27->fields.boardGameTokenAction->klass;
          if ( !v35 )
            goto LABEL_37;
          v27 = *(ScrTerminalListTop_o **)&v35->_2.static_fields_size;
          if ( !v27 )
            goto LABEL_37;
          ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v27, 0, 0LL);
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v28);
        if ( !byte_4B10F83 )
        {
          sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v28, v31);
          byte_4B10F83 = 1;
        }
        v27 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v28);
          v27 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
        }
        v36 = v27->fields.boardGameTokenAction->klass;
        if ( v36 )
        {
          v27 = *(ScrTerminalListTop_o **)&v36->_2.instance_size;
          if ( v27 )
          {
            TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)v27, 0LL);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_1BCAA3C(v27, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__SetGiftCount(GiftButtonCtrl_o *this, int32_t giftCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  SimpleAnimation_o *giftNumberCounter; // x0
  struct SimpleAnimationPlayable_o *m_Playable; // x8
  uint32_t m_Version; // w9
  int v12; // w10
  struct System_String_array *animFiles; // x8
  int32_t v14; // w25
  il2cpp_array_size_t max_length; // w10
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  struct System_String_array *sprFiles; // x8
  il2cpp_array_size_t v19; // w9
  UnityEngine_Object_o *giftSimpleAnimation; // x23
  UnityEngine_Object_o *giftAnimation; // x23
  UnityEngine_Object_o *giftButton; // x22

  if ( (byte_4B181E1 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&giftCount, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B181E1 = 1;
  }
  giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&giftCount);
    giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  m_Playable = giftNumberCounter[1].fields.m_Playable;
  m_Version = m_Playable[1].fields.m_ActualPlayable.fields.m_Handle.fields.m_Version;
  v12 = *((_DWORD *)&m_Playable[1].fields.m_Mixer + 2);
  animFiles = this->fields.animFiles;
  if ( (int)(m_Version - v12) <= giftCount )
    v14 = 2;
  else
    v14 = giftCount > 0;
  if ( !animFiles )
    goto LABEL_42;
  max_length = animFiles->max_length;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  v17 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v14 <= (int)max_length )
  {
    if ( v14 >= max_length )
      goto LABEL_43;
    v17 = animFiles->m_Items[v14];
  }
  sprFiles = this->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_42;
  v19 = sprFiles->max_length;
  if ( v14 <= (int)v19 )
  {
    if ( v14 < v19 )
    {
      v16 = sprFiles->m_Items[v14];
      goto LABEL_16;
    }
LABEL_43:
    sub_1BCAA44(giftNumberCounter, *(_QWORD *)&giftCount);
  }
LABEL_16:
  giftSimpleAnimation = (UnityEngine_Object_o *)this->fields.giftSimpleAnimation;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&giftCount);
  if ( UnityEngine_Object__op_Inequality(giftSimpleAnimation, 0LL, 0LL) )
  {
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_42;
    SimpleAnimation__Stop(giftNumberCounter, 0LL);
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_42;
    if ( SimpleAnimation__GetClipCount(giftNumberCounter, 0LL) >= v14 && !System_String__IsNullOrEmpty(v17, 0LL) )
    {
      giftNumberCounter = this->fields.giftSimpleAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      SimpleAnimation__Play_64539336(giftNumberCounter, v17, 0LL);
    }
  }
  else
  {
    giftAnimation = (UnityEngine_Object_o *)this->fields.giftAnimation;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&giftCount);
    if ( UnityEngine_Object__op_Inequality(giftAnimation, 0LL, 0LL) )
    {
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)giftNumberCounter, 0LL);
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)giftNumberCounter, 0LL) >= v14
        && !System_String__IsNullOrEmpty(v17, 0LL) )
      {
        giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
        if ( !giftNumberCounter )
          goto LABEL_42;
        UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)giftNumberCounter, v17, 0LL);
      }
    }
  }
  giftButton = (UnityEngine_Object_o *)this->fields.giftButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&giftCount);
  if ( UnityEngine_Object__op_Inequality(giftButton, 0LL, 0LL) && !System_String__IsNullOrEmpty(v16, 0LL) )
  {
    giftNumberCounter = (SimpleAnimation_o *)this->fields.giftButton;
    if ( !giftNumberCounter )
      goto LABEL_42;
    UIButton__set_normalSprite((UIButton_o *)giftNumberCounter, v16, 0LL);
  }
  giftNumberCounter = (SimpleAnimation_o *)this->fields.giftNumberCounter;
  if ( !giftNumberCounter )
LABEL_42:
    sub_1BCAA3C(giftNumberCounter, *(_QWORD *)&giftCount);
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
    sub_1BCAA3C(limitedPeriodSprite, hasLimited);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedPeriodSprite, hasLimited, 0LL);
}


bool __fastcall GiftButtonCtrl__get_isEnabled(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_1BCAA3C(0LL, method);
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
  sub_1BCA784(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.OnGiftOpenAdditionalAction,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__set_isEnabled(GiftButtonCtrl_o *this, bool value, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_1BCAA3C(0LL, value);
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))giftButton->klass->vtable._5_set_isEnabled.method)(
    giftButton,
    value,
    giftButton->klass->vtable._6_OnInit.methodPtr);
}