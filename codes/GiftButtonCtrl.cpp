void __fastcall GiftButtonCtrl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct GiftButtonCtrl_StaticFields *static_fields; // x8

  if ( (byte_42EA458 & 1) == 0 )
  {
    sub_B5D5C4(&GiftButtonCtrl_TypeInfo, v1, v2, v3);
    byte_42EA458 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  void *Instance; // x0
  __int64 v9; // x1
  UserPresentBoxMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v11; // x2
  int32_t v12; // w1
  const MethodInfo *v13; // x2
  bool EnableTimeLimitedNotification; // w1
  bool hasLimited; // [xsp+8h] [xbp-18h] BYREF
  int32_t count; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EA451 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EA451 = 1;
  }
  count = 0;
  hasLimited = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserPresentBoxMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
    v12 = count;
  }
  else
  {
    v12 = 0;
  }
  GiftButtonCtrl__SetGiftCount(this, v12, v11);
  if ( !hasLimited )
  {
    if ( this )
    {
      EnableTimeLimitedNotification = 0;
      goto LABEL_12;
    }
LABEL_13:
    sub_B5D69C(Instance, v9);
  }
  EnableTimeLimitedNotification = this->fields.EnableTimeLimitedNotification;
LABEL_12:
  GiftButtonCtrl__SetLimitedItemNotification(this, EnableTimeLimitedNotification, v13);
}


void __fastcall GiftButtonCtrl__OnBtnTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_42EA453 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_2685/*"BTN_GIFT"*/, v5, v6, v7);
    byte_42EA453 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_B5D69C(0LL, v8);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_2685/*"BTN_GIFT"*/, 0LL);
  ActionExtensions__Call(this->fields.OnGiftOpenAdditionalAction, 0LL);
}


void __fastcall GiftButtonCtrl__OnButtonTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_42EA456 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2685/*"BTN_GIFT"*/, (_DWORD)method, v2, v3);
    byte_42EA456 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_2685/*"BTN_GIFT"*/, 0LL);
}


void __fastcall GiftButtonCtrl__OnGiftInterfaceCloseFadedOut(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonUI_o *Instance; // x0
  __int64 v19; // x1
  int v20; // w2
  __int64 v21; // x3
  ErrorDialog_c *klass; // x8
  int v23; // w2
  __int64 v24; // x3
  ErrorDialog_c *v25; // x8
  System_Func_bool__bool__o *OnGiftCloseAdditionalAction; // x0

  if ( (byte_42EA455 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool__bool__Invoke__, retrievedNewServant, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5823/*"EV_GIFT_EXIT"*/, v15, v16, v17);
    byte_42EA455 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  CommonUI__CloseUsrPresentList(Instance, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_BYTE)v19, v20, v21);
      byte_42E4B1E = 1;
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
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_BYTE)v19, v23, v24);
        byte_42E4B1E = 1;
      }
      Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
      }
      v25 = Instance->fields.errorDialog->klass;
      if ( !v25 )
        goto LABEL_33;
      Instance = *(CommonUI_o **)&v25->_2.element_size;
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
         (const MethodInfo_279B924 *)Method_System_Func_bool__bool__Invoke__) )
  {
    Instance = (CommonUI_o *)this->fields.stateMachine;
    if ( Instance )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5823/*"EV_GIFT_EXIT"*/, 0LL);
      return;
    }
LABEL_33:
    sub_B5D69C(Instance, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__OnGiftInterfaceClosed(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PlayMakerFSM_o *stateMachine; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42EA457 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_7078/*"GotNewServantTrigger"*/, retrievedNewServant, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_5824/*"EV_GIFT_PROC_FIN"*/, v6, v7, v8);
    byte_42EA457 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine
    || (PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5824/*"EV_GIFT_PROC_FIN"*/, 0LL),
        GiftButtonCtrl__InvalidateGiftInfo(this, v10),
        (stateMachine = this->fields.stateMachine) == 0LL)
    || (stateMachine = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(stateMachine, 0LL)) == 0LL
    || (stateMachine = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                           (HutongGames_PlayMaker_FsmVariables_o *)stateMachine,
                                           (System_String_o *)StringLiteral_7078/*"GotNewServantTrigger"*/,
                                           0LL)) == 0LL )
  {
    sub_B5D69C(stateMachine, retrievedNewServant);
  }
  LOBYTE(stateMachine[1].klass) = retrievedNewServant;
}


void __fastcall GiftButtonCtrl__OnGiftInterfaceOpenFadedOut(GiftButtonCtrl_o *this, const MethodInfo *method)
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
  CommonUI_o *Instance; // x20
  UserPresentBoxWindow_ClickDelegate_o *v27; // x21
  System_Action_o *v28; // x22
  CommonUI_o *genericContainerHandle; // x0
  __int64 v30; // x1
  int v31; // w2
  __int64 v32; // x3
  ErrorDialog_c *klass; // x8
  int v34; // w2
  __int64 v35; // x3
  CommonUI_o *v36; // x19
  GiftButtonCtrl_c *v37; // x8
  int v38; // w2
  __int64 v39; // x3
  ErrorDialog_c *v40; // x8
  ErrorDialog_c *v41; // x8

  if ( (byte_42EA454 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserPresentBoxWindow_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_GiftButtonCtrl_InvalidateGiftInfo__, v8, v9, v10);
    sub_B5D5C4(&Method_GiftButtonCtrl_OnGiftInterfaceClosed__, v11, v12, v13);
    sub_B5D5C4(&GiftButtonCtrl_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v23, v24, v25);
    byte_42EA454 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (UserPresentBoxWindow_ClickDelegate_o *)sub_B5D694(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(
    v27,
    (Il2CppObject *)this,
    Method_GiftButtonCtrl_OnGiftInterfaceClosed__,
    0LL);
  v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_GiftButtonCtrl_InvalidateGiftInfo__, 0LL);
  if ( !Instance )
    goto LABEL_44;
  CommonUI__OpenUsrPresentList(Instance, 1, v27, v28, 0LL);
  genericContainerHandle = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !genericContainerHandle )
    goto LABEL_44;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)genericContainerHandle, 34, 0LL) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v30, v31, v32);
      byte_42E4B1E = 1;
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
          genericContainerHandle = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v36 = genericContainerHandle;
          v37 = GiftButtonCtrl_TypeInfo;
          if ( (BYTE3(GiftButtonCtrl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !GiftButtonCtrl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(GiftButtonCtrl_TypeInfo);
            v37 = GiftButtonCtrl_TypeInfo;
          }
          if ( !v36 )
            goto LABEL_44;
          CommonUI__SetUsrPresentListPos(v36, v37->static_fields->BLANK_EARTH_WINDOW_POS, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v30, v38, v39);
            byte_42E4B1E = 1;
          }
          genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
          }
          v40 = genericContainerHandle->fields.errorDialog->klass;
          if ( !v40 )
            goto LABEL_44;
          genericContainerHandle = *(CommonUI_o **)&v40->_2.element_size;
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
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v30, v34, v35);
          byte_42E4B1E = 1;
        }
        genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          genericContainerHandle = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        }
        v41 = genericContainerHandle->fields.errorDialog->klass;
        if ( v41 )
        {
          genericContainerHandle = (CommonUI_o *)v41->_2.genericContainerHandle;
          if ( genericContainerHandle )
          {
            TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0LL);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B5D69C(genericContainerHandle, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GiftButtonCtrl__SetGiftCount(GiftButtonCtrl_o *this, int32_t giftCount, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SimpleAnimation_o *giftNumberCounter; // x0
  __int64 v13; // x8
  int v14; // w9
  int v15; // w10
  struct System_String_array *animFiles; // x8
  int32_t v17; // w25
  int32_t max_length; // w10
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v22; // w9
  UnityEngine_Object_o *giftSimpleAnimation; // x23
  UnityEngine_Object_o *giftAnimation; // x23
  UnityEngine_Object_o *giftButton; // x22
  __int64 v26; // x0

  if ( (byte_42EA452 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, giftCount, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42EA452 = 1;
  }
  giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  v13 = *(_QWORD *)&giftNumberCounter[1].fields.m_WrapMode;
  v14 = *(_DWORD *)(v13 + 112);
  v15 = *(_DWORD *)(v13 + 124);
  animFiles = this->fields.animFiles;
  if ( v14 - v15 <= giftCount )
    v17 = 2;
  else
    v17 = giftCount > 0;
  if ( !animFiles )
    goto LABEL_46;
  max_length = animFiles->max_length;
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v17 <= max_length )
  {
    if ( v17 >= (unsigned int)max_length )
      goto LABEL_47;
    v20 = animFiles->m_Items[v17];
  }
  sprFiles = this->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_46;
  v22 = sprFiles->max_length;
  if ( v17 <= v22 )
  {
    if ( v17 < (unsigned int)v22 )
    {
      v19 = sprFiles->m_Items[v17];
      goto LABEL_17;
    }
LABEL_47:
    v26 = sub_B5D6C8(giftNumberCounter);
    sub_B5D668(v26, 0LL);
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
    if ( SimpleAnimation__GetClipCount(giftNumberCounter, 0LL) >= v17 && !System_String__IsNullOrEmpty(v20, 0LL) )
    {
      giftNumberCounter = this->fields.giftSimpleAnimation;
      if ( !giftNumberCounter )
        goto LABEL_46;
      SimpleAnimation__Play_16676044(giftNumberCounter, v20, 0LL);
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
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)giftNumberCounter, 0LL) >= v17
        && !System_String__IsNullOrEmpty(v20, 0LL) )
      {
        giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
        if ( !giftNumberCounter )
          goto LABEL_46;
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)giftNumberCounter, v20, 0LL);
      }
    }
  }
  giftButton = (UnityEngine_Object_o *)this->fields.giftButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(giftButton, 0LL, 0LL) && !System_String__IsNullOrEmpty(v19, 0LL) )
  {
    giftNumberCounter = (SimpleAnimation_o *)this->fields.giftButton;
    if ( !giftNumberCounter )
      goto LABEL_46;
    UIButton__set_normalSprite((UIButton_o *)giftNumberCounter, v19, 0LL);
  }
  giftNumberCounter = (SimpleAnimation_o *)this->fields.giftNumberCounter;
  if ( !giftNumberCounter )
LABEL_46:
    sub_B5D69C(giftNumberCounter, *(_QWORD *)&giftCount);
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
    sub_B5D69C(limitedPeriodSprite, hasLimited);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedPeriodSprite, hasLimited, 0LL);
}


bool __fastcall GiftButtonCtrl__get_isEnabled(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_B5D69C(0LL, method);
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
  sub_B5D560(
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
  sub_B5D560(
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
    sub_B5D69C(0LL, value);
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))giftButton->klass->vtable._5_set_isEnabled.method)(
    giftButton,
    value,
    giftButton->klass->vtable._6_OnInit.methodPtr);
}