void __fastcall GiftButtonCtrl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct GiftButtonCtrl_StaticFields *static_fields; // x8

  if ( (byte_40FC112 & 1) == 0 )
  {
    sub_B16FFC(&GiftButtonCtrl_TypeInfo, v1);
    byte_40FC112 = 1;
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
  WebViewManager_o *Instance; // x0
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w1
  const MethodInfo *v9; // x2
  bool EnableTimeLimitedNotification; // w1
  bool hasLimited; // [xsp+8h] [xbp-18h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FC10B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FC10B = 1;
  }
  count = 0;
  hasLimited = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  count = 0;
  hasLimited = 0;
  if ( SelfUserGame )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_13;
    UserPresentBoxMaster__getValidItemInfo(
      MasterData_WarQuestSelectionMaster,
      SelfUserGame->fields.userId,
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
    sub_B170D4();
  }
  EnableTimeLimitedNotification = this->fields.EnableTimeLimitedNotification;
LABEL_12:
  GiftButtonCtrl__SetLimitedItemNotification(this, EnableTimeLimitedNotification, v9);
}


void __fastcall GiftButtonCtrl__OnBtnTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_40FC10D & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2620, v3);
    byte_40FC10D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_B170D4();
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_2620, 0LL);
  ActionExtensions__Call(this->fields.OnGiftOpenAdditionalAction, 0LL);
}


void __fastcall GiftButtonCtrl__OnButtonTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_40FC110 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2620, method);
    byte_40FC110 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_B170D4();
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_2620, 0LL);
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
  AvalonSceneManager_o *v10; // x0
  __int64 v11; // x1
  TerminalSceneComponent_c *v12; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v15; // x1
  TerminalSceneComponent_c *v16; // x0
  struct TerminalSceneComponent_o *v17; // x8
  ScrTerminalListTop_o *v18; // x0
  System_Func_bool__bool__o *OnGiftCloseAdditionalAction; // x0
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_40FC10F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool__bool__Invoke__, retrievedNewServant);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_5728, v8);
    byte_40FC10F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  v10 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v10 )
    goto LABEL_33;
  if ( AvalonSceneManager__checkNowScene(v10, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v11);
      byte_40F6042 = 1;
    }
    v12 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v12->static_fields->mInstance;
    if ( !mInstance )
      goto LABEL_33;
    mTerminalList = mInstance->fields.mTerminalList;
    if ( !mTerminalList )
      goto LABEL_33;
    if ( ScrTerminalListTop__get_IsActiveBlankEarth(mTerminalList, 0LL) )
    {
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v15);
        byte_40F6042 = 1;
      }
      v16 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v16 = TerminalSceneComponent_TypeInfo;
      }
      v17 = v16->static_fields->mInstance;
      if ( !v17 )
        goto LABEL_33;
      v18 = v17->fields.mTerminalList;
      if ( !v18 )
        goto LABEL_33;
      ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v18, 1, 0LL);
    }
  }
  OnGiftCloseAdditionalAction = this->fields.OnGiftCloseAdditionalAction;
  if ( !OnGiftCloseAdditionalAction
    || System_Func_bool__bool___Invoke(
         OnGiftCloseAdditionalAction,
         retrievedNewServant,
         (const MethodInfo_2B63164 *)Method_System_Func_bool__bool__Invoke__) )
  {
    stateMachine = this->fields.stateMachine;
    if ( stateMachine )
    {
      PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5728, 0LL);
      return;
    }
LABEL_33:
    sub_B170D4();
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
  PlayMakerFSM_o *v8; // x0
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmBool_o *FsmBool; // x0

  if ( (byte_40FC111 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6967, retrievedNewServant);
    sub_B16FFC(&StringLiteral_5729, v5);
    byte_40FC111 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine
    || (PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5729, 0LL),
        GiftButtonCtrl__InvalidateGiftInfo(this, v7),
        (v8 = this->fields.stateMachine) == 0LL)
    || (FsmVariables = PlayMakerFSM__get_FsmVariables(v8, 0LL)) == 0LL
    || (FsmBool = HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                    FsmVariables,
                    (System_String_o *)StringLiteral_6967,
                    0LL)) == 0LL )
  {
    sub_B170D4();
  }
  FsmBool->fields.value = retrievedNewServant;
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
  CommonUI_o *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UserPresentBoxWindow_ClickDelegate_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Action_o *v20; // x22
  AvalonSceneManager_o *v21; // x0
  __int64 v22; // x1
  TerminalSceneComponent_c *v23; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  __int64 v26; // x1
  CommonUI_o *v27; // x19
  GiftButtonCtrl_c *v28; // x8
  __int64 v29; // x1
  TerminalSceneComponent_c *v30; // x0
  struct TerminalSceneComponent_o *v31; // x8
  ScrTerminalListTop_o *v32; // x0
  TerminalSceneComponent_c *v33; // x0
  struct TerminalSceneComponent_o *v34; // x8
  TitleInfoControl_o *mTitleInfo; // x0

  if ( (byte_40FC10E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UserPresentBoxWindow_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_GiftButtonCtrl_InvalidateGiftInfo__, v4);
    sub_B16FFC(&Method_GiftButtonCtrl_OnGiftInterfaceClosed__, v5);
    sub_B16FFC(&GiftButtonCtrl_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v9);
    byte_40FC10E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (UserPresentBoxWindow_ClickDelegate_o *)sub_B170CC(
                                                  UserPresentBoxWindow_ClickDelegate_TypeInfo,
                                                  v11,
                                                  v12,
                                                  v13,
                                                  v14);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_GiftButtonCtrl_OnGiftInterfaceClosed__,
    0LL);
  v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_GiftButtonCtrl_InvalidateGiftInfo__, 0LL);
  if ( !Instance )
    goto LABEL_44;
  CommonUI__OpenUsrPresentList(Instance, 1, v15, v20, 0LL);
  v21 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v21 )
    goto LABEL_44;
  if ( AvalonSceneManager__checkNowScene(v21, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v22);
      byte_40F6042 = 1;
    }
    v23 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v23 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = v23->static_fields->mInstance;
    if ( mInstance )
    {
      mTerminalList = mInstance->fields.mTerminalList;
      if ( mTerminalList )
      {
        if ( ScrTerminalListTop__get_IsActiveBlankEarth(mTerminalList, 0LL) )
        {
          v27 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v28 = GiftButtonCtrl_TypeInfo;
          if ( (BYTE3(GiftButtonCtrl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !GiftButtonCtrl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(GiftButtonCtrl_TypeInfo);
            v28 = GiftButtonCtrl_TypeInfo;
          }
          if ( !v27 )
            goto LABEL_44;
          CommonUI__SetUsrPresentListPos(v27, v28->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v29);
            byte_40F6042 = 1;
          }
          v30 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v30 = TerminalSceneComponent_TypeInfo;
          }
          v31 = v30->static_fields->mInstance;
          if ( !v31 )
            goto LABEL_44;
          v32 = v31->fields.mTerminalList;
          if ( !v32 )
            goto LABEL_44;
          ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(v32, 0, 0LL);
        }
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v26);
          byte_40F6042 = 1;
        }
        v33 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v33 = TerminalSceneComponent_TypeInfo;
        }
        v34 = v33->static_fields->mInstance;
        if ( v34 )
        {
          mTitleInfo = v34->fields.mTitleInfo;
          if ( mTitleInfo )
          {
            TitleInfoControl__StopEventInfoUIVoicePlayer(mTitleInfo, 0LL);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__SetGiftCount(GiftButtonCtrl_o *this, int32_t giftCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t PresentBoxMax; // w9
  int32_t PresentBoxNearMaxOffset; // w10
  struct System_String_array *animFiles; // x8
  int32_t v12; // w25
  int32_t max_length; // w10
  System_String_o *v14; // x21
  System_String_o *v15; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v17; // w9
  UnityEngine_Object_o *giftSimpleAnimation; // x23
  SimpleAnimation_o *v19; // x0
  SimpleAnimation_o *v20; // x0
  SimpleAnimation_o *v21; // x0
  UnityEngine_Object_o *giftAnimation; // x23
  UnityEngine_Animation_o *v23; // x0
  UnityEngine_Animation_o *v24; // x0
  UnityEngine_Animation_o *v25; // x0
  UnityEngine_Object_o *giftButton; // x22
  UIButton_o *v27; // x0
  NoticeNumberComponent_o *giftNumberCounter; // x0

  if ( (byte_40FC10C & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&giftCount);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FC10C = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  PresentBoxMax = static_fields->PresentBoxMax;
  PresentBoxNearMaxOffset = static_fields->PresentBoxNearMaxOffset;
  animFiles = this->fields.animFiles;
  if ( PresentBoxMax - PresentBoxNearMaxOffset <= giftCount )
    v12 = 2;
  else
    v12 = giftCount > 0;
  if ( !animFiles )
    goto LABEL_46;
  max_length = animFiles->max_length;
  v14 = (System_String_o *)StringLiteral_1;
  v15 = (System_String_o *)StringLiteral_1;
  if ( v12 <= max_length )
  {
    if ( v12 >= (unsigned int)max_length )
      goto LABEL_47;
    v15 = animFiles->m_Items[v12];
  }
  sprFiles = this->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_46;
  v17 = sprFiles->max_length;
  if ( v12 <= v17 )
  {
    if ( v12 < (unsigned int)v17 )
    {
      v14 = sprFiles->m_Items[v12];
      goto LABEL_17;
    }
LABEL_47:
    sub_B17100(v7, *(_QWORD *)&giftCount, method);
    sub_B170A0();
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
    v19 = this->fields.giftSimpleAnimation;
    if ( !v19 )
      goto LABEL_46;
    SimpleAnimation__Stop(v19, 0LL);
    v20 = this->fields.giftSimpleAnimation;
    if ( !v20 )
      goto LABEL_46;
    if ( SimpleAnimation__GetClipCount(v20, 0LL) >= v12 && !System_String__IsNullOrEmpty(v15, 0LL) )
    {
      v21 = this->fields.giftSimpleAnimation;
      if ( !v21 )
        goto LABEL_46;
      SimpleAnimation__Play_16380456(v21, v15, 0LL);
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
      v23 = this->fields.giftAnimation;
      if ( !v23 )
        goto LABEL_46;
      UnityEngine_Animation__Stop(v23, 0LL);
      v24 = this->fields.giftAnimation;
      if ( !v24 )
        goto LABEL_46;
      if ( UnityEngine_Animation__GetClipCount(v24, 0LL) >= v12 && !System_String__IsNullOrEmpty(v15, 0LL) )
      {
        v25 = this->fields.giftAnimation;
        if ( !v25 )
          goto LABEL_46;
        UnityEngine_Animation__Play_49744236(v25, v15, 0LL);
      }
    }
  }
  giftButton = (UnityEngine_Object_o *)this->fields.giftButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(giftButton, 0LL, 0LL) && !System_String__IsNullOrEmpty(v14, 0LL) )
  {
    v27 = this->fields.giftButton;
    if ( !v27 )
      goto LABEL_46;
    UIButton__set_normalSprite(v27, v14, 0LL);
  }
  giftNumberCounter = this->fields.giftNumberCounter;
  if ( !giftNumberCounter )
LABEL_46:
    sub_B170D4();
  NoticeNumberComponent__SetNumber(giftNumberCounter, giftCount, 0LL);
}


void __fastcall GiftButtonCtrl__SetLimitedItemNotification(
        GiftButtonCtrl_o *this,
        bool hasLimited,
        const MethodInfo *method)
{
  UnityEngine_Component_o *limitedPeriodSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  limitedPeriodSprite = (UnityEngine_Component_o *)this->fields.limitedPeriodSprite;
  if ( !limitedPeriodSprite || (gameObject = UnityEngine_Component__get_gameObject(limitedPeriodSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, hasLimited, 0LL);
}


bool __fastcall GiftButtonCtrl__get_isEnabled(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_B170D4();
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
  sub_B16F98(
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
  sub_B16F98(
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
    sub_B170D4();
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))giftButton->klass->vtable._5_set_isEnabled.method)(
    giftButton,
    value,
    giftButton->klass->vtable._6_OnInit.methodPtr);
}