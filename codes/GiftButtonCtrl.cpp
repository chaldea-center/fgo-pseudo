void GiftButtonCtrl___cctor(const MethodInfo *method)
{
  struct GiftButtonCtrl_StaticFields *static_fields; // x8

  if ( (byte_593ADF8 & 1) == 0 )
  {
    sub_21FFC50(&GiftButtonCtrl_TypeInfo);
    byte_593ADF8 = 1;
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

  if ( (byte_593ADF0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserPresentBoxMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593ADF0 = 1;
  }
  count = 0;
  hasLimited = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserPresentBoxMaster___);
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
    sub_21FFECC(Instance, v4);
  }
  EnableTimeLimitedNotification = this->fields.EnableTimeLimitedNotification;
LABEL_12:
  GiftButtonCtrl__SetLimitedItemNotification(this, EnableTimeLimitedNotification, v8);
}


void GiftButtonCtrl__OnBtnTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  ScrTerminalMap_o *stateMachine; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Object_o *v8; // x20
  UnityEngine_GameObject_c *v9; // x8
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_593ADF2 & 1) == 0 )
  {
    sub_21FFC50(&Method_GiftButtonCtrl_OnBtnTouched__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_3127/*"BTN_GIFT"*/);
    byte_593ADF2 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    stateMachine = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      stateMachine = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = stateMachine->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_35;
    v8 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      stateMachine = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
        stateMachine = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      }
      v9 = stateMachine->fields.subRootGimmickP->klass;
      if ( v9 )
      {
        stateMachine = *(ScrTerminalMap_o **)&v9->_2.static_fields_size;
        if ( stateMachine )
        {
          ScrTerminalMap__SetVisibilitySpotWebView(stateMachine, 0, 0, 0);
          goto LABEL_31;
        }
      }
LABEL_35:
      sub_21FFECC(stateMachine, v5);
    }
  }
LABEL_31:
  v10 = Method_GiftButtonCtrl_OnBtnTouched__;
  if ( (*((_BYTE *)Method_GiftButtonCtrl_OnBtnTouched__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_21FFC68(Method_GiftButtonCtrl_OnBtnTouched__);
  v11 = (System_Reflection_MethodBase_o *)sub_21FFC34(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0);
  stateMachine = (ScrTerminalMap_o *)this->fields.stateMachine;
  if ( !stateMachine )
    goto LABEL_35;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stateMachine, (System_String_o *)StringLiteral_3127/*"BTN_GIFT"*/, 0);
  ActionExtensions__Call(this->fields.OnGiftOpenAdditionalAction, 0);
}


void GiftButtonCtrl__OnButtonTouched(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0

  if ( (byte_593ADF6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3127/*"BTN_GIFT"*/);
    byte_593ADF6 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_3127/*"BTN_GIFT"*/, 0);
}


void GiftButtonCtrl__OnFadeInAfter(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v5; // x1
  ScrTerminalMap_o *stateMachine; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_Object_o *v8; // x20
  UnityEngine_GameObject_c *v9; // x8

  if ( (byte_593ADF5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_6691/*"FINISHED"*/);
    byte_593ADF5 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    stateMachine = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      stateMachine = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = stateMachine->fields.subRootGimmickP->klass;
    if ( !klass )
      goto LABEL_33;
    v8 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      stateMachine = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
        stateMachine = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
      }
      v9 = stateMachine->fields.subRootGimmickP->klass;
      if ( v9 )
      {
        stateMachine = *(ScrTerminalMap_o **)&v9->_2.static_fields_size;
        if ( stateMachine )
        {
          ScrTerminalMap__SetVisibilitySpotWebView(stateMachine, 1, 0, 0);
          goto LABEL_31;
        }
      }
LABEL_33:
      sub_21FFECC(stateMachine, v5);
    }
  }
LABEL_31:
  stateMachine = (ScrTerminalMap_o *)this->fields.stateMachine;
  if ( !stateMachine )
    goto LABEL_33;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)stateMachine, (System_String_o *)StringLiteral_6691/*"FINISHED"*/, 0);
}


void GiftButtonCtrl__OnGiftInterfaceCloseFadedOut(
        GiftButtonCtrl_o *this,
        bool retrievedNewServant,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_o *mInstance; // x9
  UnityEngine_Object_o *v10; // x21
  TerminalSceneComponent_c *v11; // x0
  UnityEngine_Object_o *v12; // x22
  ErrorDialog_c *klass; // x8
  struct System_Func_bool__bool__o *OnGiftCloseAdditionalAction; // x8

  if ( (byte_593ADF4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_5963/*"EV_GIFT_EXIT"*/);
    byte_593ADF4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  CommonUI__CloseUsrPresentList(Instance, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v8->static_fields->mInstance;
  v10 = mInstance ? (UnityEngine_Object_o *)mInstance->fields.mTerminalList : 0LL;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)Instance, 34, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v10 )
        goto LABEL_46;
      if ( ScrTerminalListTop__get_IsActiveAnyEarth((ScrTerminalListTop_o *)v10, 0) )
      {
        ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v10, 1, 0);
        ScrTerminalListTop__SwitchDispPlanetEarthPresentBoxHideGameObject((ScrTerminalListTop_o *)v10, 1, 0);
      }
    }
    if ( this->fields.isTerminalEffectDisplay )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      v11 = TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
        v11 = TerminalSceneComponent_TypeInfo;
      }
      v12 = (UnityEngine_Object_o *)v11->static_fields->mInstance;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
        if ( !byte_5931EF0 )
        {
          sub_21FFC50(&TerminalSceneComponent_TypeInfo);
          byte_5931EF0 = 1;
        }
        Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
          Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
        }
        klass = Instance->fields.errorDialog->klass;
        if ( !klass )
          goto LABEL_46;
        Instance = (CommonUI_o *)klass->_2.genericContainerHandle;
        if ( !Instance )
          goto LABEL_46;
        TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)Instance, 1, 0);
        this->fields.isTerminalEffectDisplay = 0;
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
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5963/*"EV_GIFT_EXIT"*/, 0);
      if ( v10 )
        ScrTerminalListTop__OnPlayerStatusSetBackMaskActive((ScrTerminalListTop_o *)v10, 0);
      return;
    }
LABEL_46:
    sub_21FFECC(Instance, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void GiftButtonCtrl__OnGiftInterfaceClosed(GiftButtonCtrl_o *this, bool retrievedNewServant, const MethodInfo *method)
{
  PlayMakerFSM_o *stateMachine; // x0
  const MethodInfo *v6; // x1

  if ( (byte_593ADF7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7416/*"GotNewServantTrigger"*/);
    sub_21FFC50(&StringLiteral_5964/*"EV_GIFT_PROC_FIN"*/);
    byte_593ADF7 = 1;
  }
  stateMachine = this->fields.stateMachine;
  if ( !stateMachine
    || (PlayMakerFSM__SendEvent(stateMachine, (System_String_o *)StringLiteral_5964/*"EV_GIFT_PROC_FIN"*/, 0),
        GiftButtonCtrl__InvalidateGiftInfo(this, v6),
        (stateMachine = this->fields.stateMachine) == 0)
    || (stateMachine = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(stateMachine, 0)) == 0
    || (stateMachine = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmBool(
                                           (HutongGames_PlayMaker_FsmVariables_o *)stateMachine,
                                           (System_String_o *)StringLiteral_7416/*"GotNewServantTrigger"*/,
                                           0)) == 0 )
  {
    sub_21FFECC(stateMachine, retrievedNewServant);
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
  System_Collections_Generic_List_GameObject__c *klass; // x8
  CommonUI_o *v9; // x20
  System_Collections_Generic_List_GameObject__c *v10; // x8
  System_Collections_Generic_List_GameObject__c *v11; // x8
  System_Collections_Generic_List_GameObject__c *v12; // x8
  System_Collections_Generic_List_GameObject__c *v13; // x8
  bool IsParticleActive; // w0
  System_Collections_Generic_List_GameObject__c *v15; // x8

  if ( (byte_593ADF3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UserPresentBoxWindow_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_GiftButtonCtrl_InvalidateGiftInfo__);
    sub_21FFC50(&Method_GiftButtonCtrl_OnGiftInterfaceClosed__);
    sub_21FFC50(&GiftButtonCtrl_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593ADF3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (UserPresentBoxWindow_ClickDelegate_o *)sub_21FFEBC(UserPresentBoxWindow_ClickDelegate_TypeInfo);
  UserPresentBoxWindow_ClickDelegate___ctor(v4, (Il2CppObject *)this, Method_GiftButtonCtrl_OnGiftInterfaceClosed__, 0);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_GiftButtonCtrl_InvalidateGiftInfo__, 0);
  if ( !Instance )
    goto LABEL_58;
  CommonUI__OpenUsrPresentList((CommonUI_o *)Instance, 1, v4, v5, 0);
  ActionExtensions__Call(this->fields._OnGiftInterfaceOpenFadedOutAction_k__BackingField, 0);
  genericContainerHandle = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !genericContainerHandle )
    goto LABEL_58;
  if ( AvalonSceneManager__checkNowScene((AvalonSceneManager_o *)genericContainerHandle, 34, 0) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
      genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.itemGetEffectInstances->klass;
    if ( !klass )
      goto LABEL_58;
    genericContainerHandle = *(ScrTerminalListTop_o **)&klass->_2.element_size;
    if ( !genericContainerHandle )
      goto LABEL_58;
    if ( ScrTerminalListTop__get_IsActiveAnyEarth(genericContainerHandle, 0) )
    {
      genericContainerHandle = (ScrTerminalListTop_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (CommonUI_o *)genericContainerHandle;
      if ( !*(&GiftButtonCtrl_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(GiftButtonCtrl_TypeInfo, v7);
      if ( !v9 )
        goto LABEL_58;
      CommonUI__SetUsrPresentListPos(v9, GiftButtonCtrl_TypeInfo->static_fields->BLANK_EARTH_WINDOW_POS, 0);
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
        genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
      }
      v10 = genericContainerHandle->fields.itemGetEffectInstances->klass;
      if ( !v10 )
        goto LABEL_58;
      genericContainerHandle = *(ScrTerminalListTop_o **)&v10->_2.element_size;
      if ( !genericContainerHandle )
        goto LABEL_58;
      ScrTerminalListTop__SwitchDispBlankEarthPresentBoxHideGameObject(genericContainerHandle, 0, 0);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
        genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
      }
      v11 = genericContainerHandle->fields.itemGetEffectInstances->klass;
      if ( !v11 )
        goto LABEL_58;
      genericContainerHandle = *(ScrTerminalListTop_o **)&v11->_2.element_size;
      if ( !genericContainerHandle )
        goto LABEL_58;
      ScrTerminalListTop__SwitchDispPlanetEarthPresentBoxHideGameObject(genericContainerHandle, 0, 0);
    }
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
      genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    v12 = genericContainerHandle->fields.itemGetEffectInstances->klass;
    if ( !v12 )
      goto LABEL_58;
    genericContainerHandle = (ScrTerminalListTop_o *)v12->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_58;
    TitleInfoControl__StopEventInfoUIVoicePlayer((TitleInfoControl_o *)genericContainerHandle, 0);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
      genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    v13 = genericContainerHandle->fields.itemGetEffectInstances->klass;
    if ( !v13 )
      goto LABEL_58;
    genericContainerHandle = (ScrTerminalListTop_o *)v13->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_58;
    IsParticleActive = TitleInfoControl__get_IsParticleActive((TitleInfoControl_o *)genericContainerHandle, 0);
    this->fields.isTerminalEffectDisplay = IsParticleActive;
    if ( IsParticleActive )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
        genericContainerHandle = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
      }
      v15 = genericContainerHandle->fields.itemGetEffectInstances->klass;
      if ( v15 )
      {
        genericContainerHandle = (ScrTerminalListTop_o *)v15->_2.genericContainerHandle;
        if ( genericContainerHandle )
        {
          TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)genericContainerHandle, 0, 0);
          return;
        }
      }
LABEL_58:
      sub_21FFECC(genericContainerHandle, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void GiftButtonCtrl__SetGiftCount(GiftButtonCtrl_o *this, int32_t giftCount, const MethodInfo *method)
{
  SimpleAnimation_o *giftNumberCounter; // x0
  struct System_String_array *animFiles; // x8
  int32_t v7; // w25
  int32_t max_length; // w10
  System_String_o *v9; // x21
  System_String_o *v10; // x22
  struct System_String_array *sprFiles; // x8
  int32_t v12; // w9
  UnityEngine_Object_o *giftSimpleAnimation; // x23
  UnityEngine_Object_o *giftAnimation; // x23
  UnityEngine_Object_o *giftButton; // x22

  if ( (byte_593ADF1 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593ADF1 = 1;
  }
  giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&giftCount);
    giftNumberCounter = (SimpleAnimation_o *)BalanceConfig_TypeInfo;
  }
  animFiles = this->fields.animFiles;
  if ( *(_DWORD *)(giftNumberCounter[1].fields.m_LayerMixer.fields.m_Handle + 128)
     - *(_DWORD *)(giftNumberCounter[1].fields.m_LayerMixer.fields.m_Handle + 140) <= giftCount )
    v7 = 2;
  else
    v7 = giftCount > 0;
  if ( !animFiles )
    goto LABEL_42;
  max_length = animFiles->max_length;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( v7 <= max_length )
  {
    if ( v7 >= (unsigned int)max_length )
      goto LABEL_43;
    v10 = animFiles->m_Items[v7];
  }
  sprFiles = this->fields.sprFiles;
  if ( !sprFiles )
    goto LABEL_42;
  v12 = sprFiles->max_length;
  if ( v7 <= v12 )
  {
    if ( v7 < (unsigned int)v12 )
    {
      v9 = sprFiles->m_Items[v7];
      goto LABEL_16;
    }
LABEL_43:
    sub_21FFED4(giftNumberCounter);
  }
LABEL_16:
  giftSimpleAnimation = (UnityEngine_Object_o *)this->fields.giftSimpleAnimation;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&giftCount);
  if ( UnityEngine_Object__op_Inequality(giftSimpleAnimation, 0, 0) )
  {
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_42;
    SimpleAnimation__Stop(giftNumberCounter, 0);
    giftNumberCounter = this->fields.giftSimpleAnimation;
    if ( !giftNumberCounter )
      goto LABEL_42;
    if ( SimpleAnimation__GetClipCount(giftNumberCounter, 0) >= v7 && !System_String__IsNullOrEmpty(v10, 0) )
    {
      giftNumberCounter = this->fields.giftSimpleAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      SimpleAnimation__Play_78338864(giftNumberCounter, v10, 0);
    }
  }
  else
  {
    giftAnimation = (UnityEngine_Object_o *)this->fields.giftAnimation;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&giftCount);
    if ( UnityEngine_Object__op_Inequality(giftAnimation, 0, 0) )
    {
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)giftNumberCounter, 0);
      giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
      if ( !giftNumberCounter )
        goto LABEL_42;
      if ( UnityEngine_Animation__GetClipCount((UnityEngine_Animation_o *)giftNumberCounter, 0) >= v7
        && !System_String__IsNullOrEmpty(v10, 0) )
      {
        giftNumberCounter = (SimpleAnimation_o *)this->fields.giftAnimation;
        if ( !giftNumberCounter )
          goto LABEL_42;
        UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)giftNumberCounter, v10, 0);
      }
    }
  }
  giftButton = (UnityEngine_Object_o *)this->fields.giftButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&giftCount);
  if ( UnityEngine_Object__op_Inequality(giftButton, 0, 0) && !System_String__IsNullOrEmpty(v9, 0) )
  {
    giftNumberCounter = (SimpleAnimation_o *)this->fields.giftButton;
    if ( !giftNumberCounter )
      goto LABEL_42;
    UIButton__set_normalSprite((UIButton_o *)giftNumberCounter, v9, 0);
  }
  giftNumberCounter = (SimpleAnimation_o *)this->fields.giftNumberCounter;
  if ( !giftNumberCounter )
LABEL_42:
    sub_21FFECC(giftNumberCounter, *(_QWORD *)&giftCount);
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
    sub_21FFECC(limitedPeriodSprite, hasLimited);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedPeriodSprite, hasLimited, 0);
}


System_Action_o *GiftButtonCtrl__get_OnGiftInterfaceOpenFadedOutAction(
        GiftButtonCtrl_o *this,
        const MethodInfo *method)
{
  return this->fields._OnGiftInterfaceOpenFadedOutAction_k__BackingField;
}


bool GiftButtonCtrl__get_isEnabled(GiftButtonCtrl_o *this, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_21FFECC(0, method);
  return ((__int64 (__fastcall *)(struct UIButton_o *, const MethodInfo *))giftButton->klass->vtable._4_get_isEnabled.methodPtr)(
           giftButton,
           giftButton->klass->vtable._4_get_isEnabled.method);
}


void GiftButtonCtrl__set_OnGiftClose(
        GiftButtonCtrl_o *this,
        System_Func_bool__bool__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.OnGiftCloseAdditionalAction = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.OnGiftCloseAdditionalAction,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GiftButtonCtrl__set_OnGiftInterfaceOpenFadedOutAction(
        GiftButtonCtrl_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnGiftInterfaceOpenFadedOutAction_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnGiftInterfaceOpenFadedOutAction_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GiftButtonCtrl__set_OnGiftOpen(GiftButtonCtrl_o *this, System_Action_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.OnGiftOpenAdditionalAction = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.OnGiftOpenAdditionalAction,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void GiftButtonCtrl__set_isEnabled(GiftButtonCtrl_o *this, bool value, const MethodInfo *method)
{
  struct UIButton_o *giftButton; // x0

  giftButton = this->fields.giftButton;
  if ( !giftButton )
    sub_21FFECC(0, value);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))giftButton->klass->vtable._5_set_isEnabled.methodPtr)(
    giftButton,
    value,
    giftButton->klass->vtable._5_set_isEnabled.method);
}