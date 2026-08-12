void WaveBattleSelectWaveDialog___ctor(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C3C9 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C3C9 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WaveBattleSelectWaveDialog__Awake(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void WaveBattleSelectWaveDialog__Close(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  System_Action_o *v4; // x20

  if ( (byte_596C3C3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveDialog_EndClose__);
    byte_596C3C3 = 1;
  }
  maskObject = this->fields.maskObject;
  this->fields.state = 2;
  if ( !maskObject
    || (UnityEngine_GameObject__SetActive(maskObject, 1, 0),
        (maskObject = (UnityEngine_GameObject_o *)this->fields.waveInfoListManager) == 0) )
  {
    sub_2213CDC(maskObject, method);
  }
  WaveBattleWaveInfoListManager__DestroyList((WaveBattleWaveInfoListManager_o *)maskObject, method);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void WaveBattleSelectWaveDialog__Close_41494860(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20

  if ( (byte_596C3C4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveDialog___c__DisplayClass32_0__Close_b__0__);
    sub_2213A60(&WaveBattleSelectWaveDialog___c__DisplayClass32_0_TypeInfo);
    byte_596C3C4 = 1;
  }
  v5 = sub_2213CCC(WaveBattleSelectWaveDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = closeCallback,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)closeCallback, v14, v15, v16, v17, v18, v19),
        maskObject = this->fields.maskObject,
        this->fields.state = 2,
        !maskObject) )
  {
    sub_2213CDC(maskObject, v7);
  }
  UnityEngine_GameObject__SetActive(maskObject, 1, 0);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass32_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0);
}


void WaveBattleSelectWaveDialog__EndClose(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_596C3C5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_596C3C5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  PartyOrganizationUtility__ClearTempWaveInfoList((PartyOrganizationUtility_o *)Instance, 0);
  WaveBattleSelectWaveDialog__Init(this, v5);
}


void WaveBattleSelectWaveDialog__EndOpen(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0);
  this->fields.state = 1;
}


void WaveBattleSelectWaveDialog__Init(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596C3BE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C3BE = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
    sub_2213CDC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WaveBattleSelectWaveDialog__OnClickCancel(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // x8

  if ( (byte_596C3C6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_WaveBattleSelectWaveDialog_OnClickCancel__);
    byte_596C3C6 = 1;
  }
  if ( this->fields.state == 1 )
  {
    maskObject = this->fields.maskObject;
    this->fields.state = 2;
    if ( !maskObject
      || (UnityEngine_GameObject__SetActive(maskObject, 1, 0),
          (maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
      sub_2213CDC(maskObject, method);
    }
    PartyOrganizationUtility__ClearTempWaveInfoList((PartyOrganizationUtility_o *)maskObject, 0);
    v4 = Method_WaveBattleSelectWaveDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_WaveBattleSelectWaveDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CloseFunc->fields.invoke_impl)(
        CloseFunc->fields.method_code,
        0,
        CloseFunc->fields.method);
  }
}


void WaveBattleSelectWaveDialog__OnClickDecide(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  if ( (byte_596C3C7 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int___);
    byte_596C3C7 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( this->fields.fromSceneKind == 1 )
    {
      ActionExtensions__Call_int_(
        (System_Action_T__o *)this->fields.battleSceneCallback,
        this->fields.selectedRestartWave,
        (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
    }
    else
    {
      waveInfoListManager = this->fields.waveInfoListManager;
      if ( !waveInfoListManager )
        sub_2213CDC(0, method);
      WaveBattleWaveInfoListManager__OpenRestartWaveConfirmDialog(
        waveInfoListManager,
        this->fields.selectedRestartWave,
        v2);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleSelectWaveDialog__OnSelectWavePartyList(
        WaveBattleSelectWaveDialog_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  const MethodInfo *v13; // x2
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // x8

  if ( (byte_596C3C2 & 1) == 0 )
  {
    sub_2213A60(&Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__);
    byte_596C3C2 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result )
    {
      v8 = Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__;
      if ( (*((_BYTE *)Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_2213A78(Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__);
      v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      waveInfoListManager = this->fields.waveInfoListManager;
      this->fields.selectedRestartWave = wave;
      if ( !waveInfoListManager
        || (WaveBattleWaveInfoListManager__UpdateSelectedState(waveInfoListManager, wave, v11),
            (waveInfoListManager = this->fields.waveInfoListManager) == 0)
        || (WaveBattleWaveInfoListManager__UpdateSeparatePartyInfo(waveInfoListManager, wave, v13),
            (waveInfoListManager = (WaveBattleWaveInfoListManager_o *)this->fields.decideButton) == 0) )
      {
        sub_2213CDC(waveInfoListManager, v10);
      }
      ((void (__fastcall *)(WaveBattleWaveInfoListManager_o *, _QWORD, __int64, Il2CppClass **))waveInfoListManager->klass[1]._1.nestedTypes)(
        waveInfoListManager,
        0,
        1,
        waveInfoListManager->klass[1]._1.implementedInterfaces);
    }
    else if ( this->fields.fromSceneKind == 1 )
    {
      WaveBattleSelectWaveDialog__Close(this, *(const MethodInfo **)&result);
    }
    else
    {
      CloseFunc = this->fields.CloseFunc;
      if ( CloseFunc )
        ((void (__fastcall *)(intptr_t, __int64, intptr_t))CloseFunc->fields.invoke_impl)(
          CloseFunc->fields.method_code,
          1,
          CloseFunc->fields.method);
    }
  }
}


void WaveBattleSelectWaveDialog__Open(
        WaveBattleSelectWaveDialog_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        int32_t restartWave,
        int32_t fromScene,
        WaveBattleSelectWaveDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  System_Action_o *v15; // x20

  if ( (byte_596C3C0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveDialog_EndOpen__);
    byte_596C3C0 = 1;
  }
  WaveBattleSelectWaveDialog__SetDialog(
    this,
    deckEntity,
    questRestrictionInfo,
    waveCount,
    restartWave,
    fromScene,
    func,
    method);
  v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
}


void WaveBattleSelectWaveDialog__Open_41497060(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20

  if ( (byte_596C3C1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveDialog___c__DisplayClass28_0__Open_b__0__);
    sub_2213A60(&WaveBattleSelectWaveDialog___c__DisplayClass28_0_TypeInfo);
    byte_596C3C1 = 1;
  }
  v5 = sub_2213CCC(WaveBattleSelectWaveDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endOpenCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)endOpenCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_WaveBattleSelectWaveDialog___c__DisplayClass28_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
}


void WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_int__o **p_battleSceneCallback; // x20
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  WaveBattleWaveInfoListManager_o *v12; // x0

  this->fields.battleSceneCallback = callback;
  p_battleSceneCallback = &this->fields.battleSceneCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleSceneCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = (WaveBattleWaveInfoListManager_o *)*(p_battleSceneCallback - 7);
  if ( !v12 )
    sub_2213CDC(0, v10);
  WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(v12, callback, v11);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_2213CDC(0, *(_QWORD *)&wave);
  WaveBattleWaveInfoListManager__OverwriteSpecifiedWaveCanNotSelectLabel(
    waveInfoListManager,
    wave,
    overwriteLabel,
    method);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleSelectWaveDialog__SetDialog(
        WaveBattleSelectWaveDialog_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        int32_t restartWave,
        int32_t fromScene,
        WaveBattleSelectWaveDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_c *v17; // x0
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *Component_object; // x25
  __int64 v23; // x2
  _BOOL4 v24; // w25
  bool v25; // w26
  bool v26; // zf
  UILabel_o *titleLabel; // x24
  System_String_o **v28; // x8
  System_String_o *v29; // x27
  UILabel_o *messageLabel; // x24
  UILabel_o *cancelLabel; // x24
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v33; // x27
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // [xsp+0h] [xbp-90h]
  QuestPhaseEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o center; // 0:kr00_12.12
  UnityEngine_Vector3_o size; // 0:kr14_12.12
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596C3BF & 1) == 0 )
  {
    sub_2213A60(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__);
    sub_2213A60(&StringLiteral_16142/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/);
    sub_2213A60(&StringLiteral_16141/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_16139/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/);
    sub_2213A60(&StringLiteral_16140/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/);
    byte_596C3BF = 1;
  }
  this->fields.CloseFunc = func;
  entity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CloseFunc,
    (int32_t)func,
    (System_String_o *)questRestrictionInfo,
    *(System_String_o **)&waveCount,
    restartWave,
    fromScene,
    (bool)func,
    (bool)method);
  v17 = DataManager_TypeInfo;
  this->fields.fromSceneKind = fromScene;
  if ( !*(&v17->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v17, v15, v16);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questRestrictionInfo || !Master_object )
    goto LABEL_44;
  QuestPhaseMaster__TryGetEntity(
    Master_object,
    &entity,
    questRestrictionInfo->fields.questId,
    questRestrictionInfo->fields.questPhase,
    0);
  if ( !entity )
    goto LABEL_26;
  if ( !QuestPhaseEntity__IsWaveSetupAsOneParty(entity, 0) )
  {
    if ( entity && QuestPhaseEntity__IsWaveSetupSwitchParty(entity, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
      if ( !Master_object )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
      if ( !Master_object )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
      if ( !Master_object )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.decideButton, 1, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.decideButton;
      if ( !Master_object )
        goto LABEL_44;
      v24 = 1;
      ((void (__fastcall *)(QuestPhaseMaster_o *, __int64, __int64, const MethodInfo *))Master_object->klass->vtable._14_GetEntityType.methodPtr)(
        Master_object,
        3,
        1,
        Master_object->klass->vtable._14_GetEntityType.method);
      ComponentHelper__SetLocalPositionX((UnityEngine_Component_o *)this->fields.cancelButton, -150.0, 0);
LABEL_30:
      v25 = 0;
      goto LABEL_31;
    }
LABEL_26:
    Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
    if ( !Master_object )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
    if ( !Master_object )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
    if ( !Master_object )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    v24 = 0;
    goto LABEL_30;
  }
  Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
  if ( !Master_object )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
  if ( !Master_object )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
  if ( !Master_object )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (QuestPhaseMaster_o *)this->fields.waveInfoListManager;
  if ( !Master_object )
    goto LABEL_44;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)Master_object,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  Master_object = (QuestPhaseMaster_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_44;
    center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
    v41.fields.y = center.fields.y;
    v41.fields.z = center.fields.z;
    v41.fields.x = 148.0;
    UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, v41, 0);
    v42.fields.y = size.fields.y;
    v42.fields.z = size.fields.z;
    v42.fields.x = 450.0;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v42, 0);
  }
  v24 = 0;
  v25 = 1;
LABEL_31:
  v26 = fromScene == 0;
  titleLabel = this->fields.titleLabel;
  if ( v26 )
    v28 = (System_String_o **)&StringLiteral_16141/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/;
  else
    v28 = (System_String_o **)&StringLiteral_16142/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/;
  v29 = *v28;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v23);
  Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get(v29, 0);
  if ( !titleLabel )
    goto LABEL_44;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16140/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_44;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16139/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/, 0);
  if ( !cancelLabel )
    goto LABEL_44;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  waveInfoListManager = this->fields.waveInfoListManager;
  v33 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_2213CCC(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
  WaveBattleWaveInfoListManager_CallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    (intptr_t)Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__,
    v34);
  if ( !waveInfoListManager )
    goto LABEL_44;
  WaveBattleWaveInfoListManager__CreateList(
    waveInfoListManager,
    deckEntity,
    questRestrictionInfo,
    waveCount,
    v33,
    restartWave,
    v25,
    v24,
    v37);
  WaveBattleSelectWaveDialog__SetWave(this, restartWave, v35);
  if ( !v24 )
    return;
  Master_object = (QuestPhaseMaster_o *)this->fields.waveInfoListManager;
  if ( !Master_object )
LABEL_44:
    sub_2213CDC(Master_object, v19);
  WaveBattleWaveInfoListManager__UpdateSeparatePartyInfo(
    (WaveBattleWaveInfoListManager_o *)Master_object,
    restartWave,
    v36);
}


void WaveBattleSelectWaveDialog__SetPartySelectCallback(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *partySelectCallback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackFunc = partySelectCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)partySelectCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleSelectWaveDialog__SetWave(WaveBattleSelectWaveDialog_o *this, int32_t wave, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_2213CDC(0, *(_QWORD *)&wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
        WaveBattleSelectWaveDialog_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_2213CDC(0, *(_QWORD *)&currentWave);
  WaveBattleWaveInfoListManager__SetWaveInfoMaskActive(waveInfoListManager, currentWave, method);
}


void WaveBattleSelectWaveDialog__add_CloseFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleSelectWaveDialog_o *v13; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C3BC & 1) == 0 )
  {
    sub_2213A60(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    byte_596C3BC = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CloseFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleSelectWaveDialog_o *)sub_221405C(v8, WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, v9, v10);
  WaveBattleSelectWaveDialog__remove_CloseFunc(v13, v14, v15);
}


void WaveBattleSelectWaveDialog__add_callbackFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleSelectWaveDialog_o *v13; // x0
  WaveBattleSelectWaveDialog_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C3BA & 1) == 0 )
  {
    sub_2213A60(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo);
    byte_596C3BA = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CallbackFunc_c *)v8->klass != WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleSelectWaveDialog_o *)sub_221405C(v8, WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, v9, v10);
  WaveBattleSelectWaveDialog__remove_callbackFunc(v13, v14, v15);
}


UnityEngine_GameObject_o *WaveBattleSelectWaveDialog__get_closeBtnObject(
        WaveBattleSelectWaveDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596C3C8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C3C8 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void WaveBattleSelectWaveDialog__remove_CloseFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleSelectWaveDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C3BD & 1) == 0 )
  {
    sub_2213A60(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    byte_596C3BD = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_CloseFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleSelectWaveDialog_o *)sub_221405C(v8, WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, v9, v10);
  WaveBattleSelectWaveDialog__Awake(v13, v14);
}


void WaveBattleSelectWaveDialog__remove_callbackFunc(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleSelectWaveDialog_o *v13; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C3BB & 1) == 0 )
  {
    sub_2213A60(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo);
    byte_596C3BB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CallbackFunc_c *)v8->klass != WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleSelectWaveDialog_o *)sub_221405C(v8, WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, v9, v10);
  WaveBattleSelectWaveDialog__add_CloseFunc(v13, v14, v15);
}


void WaveBattleSelectWaveDialog_CallbackFunc___ctor(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2005240;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20051E0;
}


System_IAsyncResult_o *WaveBattleSelectWaveDialog_CallbackFunc__BeginInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  v13 = m;
  if ( (byte_596C3CA & 1) == 0 )
  {
    sub_2213A60(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_596C3CA = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984348, &v13);
  return sub_2213A14(this, v11, callback, object);
}


void WaveBattleSelectWaveDialog_CallbackFunc__EndInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void WaveBattleSelectWaveDialog_CallbackFunc__Invoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    m,
    this->fields.method);
}


void WaveBattleSelectWaveDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20052B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200526C;
}


System_IAsyncResult_o *WaveBattleSelectWaveDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void WaveBattleSelectWaveDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void WaveBattleSelectWaveDialog_CloseDelegate__Invoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void WaveBattleSelectWaveDialog___c__DisplayClass28_0___ctor(
        WaveBattleSelectWaveDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleSelectWaveDialog___c__DisplayClass28_0___Open_b__0(
        WaveBattleSelectWaveDialog___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_o *_4__this; // x8
  WaveBattleSelectWaveDialog___c__DisplayClass28_0_o *v3; // x19
  struct WaveBattleSelectWaveDialog_o *v4; // x8
  System_Action_o *endOpenCallback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (WaveBattleSelectWaveDialog___c__DisplayClass28_0_o *)_4__this->fields.maskObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  endOpenCallback = v3->fields.endOpenCallback;
  v4->fields.state = 1;
  ActionExtensions__Call(endOpenCallback, 0);
}


void WaveBattleSelectWaveDialog___c__DisplayClass32_0___ctor(
        WaveBattleSelectWaveDialog___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleSelectWaveDialog___c__DisplayClass32_0___Close_b__0(
        WaveBattleSelectWaveDialog___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_o *_4__this; // x8
  WaveBattleSelectWaveDialog___c__DisplayClass32_0_o *v3; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this,
        (this = (WaveBattleSelectWaveDialog___c__DisplayClass32_0_o *)_4__this->fields.waveInfoListManager) == 0)
    || (WaveBattleWaveInfoListManager__DestroyWaveInfoObj((WaveBattleWaveInfoListManager_o *)this, method),
        (this = (WaveBattleSelectWaveDialog___c__DisplayClass32_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_2213CDC(this, method);
  }
  WaveBattleSelectWaveDialog__EndClose((WaveBattleSelectWaveDialog_o *)this, method);
  ActionExtensions__Call(v3->fields.closeCallback, 0);
}