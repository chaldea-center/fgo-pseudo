void WaveBattleSelectWaveDialog___ctor(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C230FF & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C230FF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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

  if ( (byte_4C230F9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_WaveBattleSelectWaveDialog_EndClose__);
    byte_4C230F9 = 1;
  }
  maskObject = this->fields.maskObject;
  this->fields.state = 2;
  if ( !maskObject
    || (UnityEngine_GameObject__SetActive(maskObject, 1, 0),
        (maskObject = (UnityEngine_GameObject_o *)this->fields.waveInfoListManager) == 0) )
  {
    sub_1C2D6EC(maskObject, method);
  }
  WaveBattleWaveInfoListManager__DestroyList((WaveBattleWaveInfoListManager_o *)maskObject, method);
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void WaveBattleSelectWaveDialog__Close_34537172(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UnityEngine_GameObject_o *maskObject; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4C230FA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_WaveBattleSelectWaveDialog___c__DisplayClass32_0__Close_b__0__);
    sub_1C2D490(&WaveBattleSelectWaveDialog___c__DisplayClass32_0_TypeInfo);
    byte_4C230FA = 1;
  }
  v5 = sub_1C2D6DC(WaveBattleSelectWaveDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9),
        *(_QWORD *)(v5 + 24) = closeCallback,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)closeCallback, v10, v11),
        maskObject = this->fields.maskObject,
        this->fields.state = 2,
        !maskObject) )
  {
    sub_1C2D6EC(maskObject, v7);
  }
  UnityEngine_GameObject__SetActive(maskObject, 1, 0);
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass32_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void WaveBattleSelectWaveDialog__EndClose(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C230FB & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C230FB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  PartyOrganizationUtility__ClearTempWaveInfoList((PartyOrganizationUtility_o *)Instance, 0);
  WaveBattleSelectWaveDialog__Init(this, v5);
}


void WaveBattleSelectWaveDialog__EndOpen(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1C2D6EC(0, method);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0);
  this->fields.state = 1;
}


void WaveBattleSelectWaveDialog__Init(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C230F4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C230F4 = 1;
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
    sub_1C2D6EC(titleLabel, method);
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

  if ( (byte_4C230FC & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&Method_WaveBattleSelectWaveDialog_OnClickCancel__);
    byte_4C230FC = 1;
  }
  if ( this->fields.state == 1 )
  {
    maskObject = this->fields.maskObject;
    this->fields.state = 2;
    if ( !maskObject
      || (UnityEngine_GameObject__SetActive(maskObject, 1, 0),
          (maskObject = (UnityEngine_GameObject_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
    {
      sub_1C2D6EC(maskObject, method);
    }
    PartyOrganizationUtility__ClearTempWaveInfoList((PartyOrganizationUtility_o *)maskObject, 0);
    v4 = Method_WaveBattleSelectWaveDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_WaveBattleSelectWaveDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
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

  if ( (byte_4C230FD & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_int___);
    byte_4C230FD = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( this->fields.fromSceneKind == 1 )
    {
      ActionExtensions__Call_int_(
        (System_Action_T__o *)this->fields.battleSceneCallback,
        this->fields.selectedRestartWave,
        (const MethodInfo_301B1A0 *)Method_ActionExtensions_Call_int___);
    }
    else
    {
      waveInfoListManager = this->fields.waveInfoListManager;
      if ( !waveInfoListManager )
        sub_1C2D6EC(0, method);
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

  if ( (byte_4C230F8 & 1) == 0 )
  {
    sub_1C2D490(&Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__);
    byte_4C230F8 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( result )
    {
      v8 = Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__;
      if ( (*((_BYTE *)Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C2D4A8(Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      waveInfoListManager = this->fields.waveInfoListManager;
      this->fields.selectedRestartWave = wave;
      if ( !waveInfoListManager
        || (WaveBattleWaveInfoListManager__UpdateSelectedState(waveInfoListManager, wave, v11),
            (waveInfoListManager = this->fields.waveInfoListManager) == 0)
        || (WaveBattleWaveInfoListManager__UpdateSeparatePartyInfo(waveInfoListManager, wave, v13),
            (waveInfoListManager = (WaveBattleWaveInfoListManager_o *)this->fields.decideButton) == 0) )
      {
        sub_1C2D6EC(waveInfoListManager, v10);
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

  if ( (byte_4C230F6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_WaveBattleSelectWaveDialog_EndOpen__);
    byte_4C230F6 = 1;
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
  v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0);
}


void WaveBattleSelectWaveDialog__Open_34541700(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4C230F7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_WaveBattleSelectWaveDialog___c__DisplayClass28_0__Open_b__0__);
    sub_1C2D490(&WaveBattleSelectWaveDialog___c__DisplayClass28_0_TypeInfo);
    byte_4C230F7 = 1;
  }
  v5 = sub_1C2D6DC(WaveBattleSelectWaveDialog___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endOpenCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endOpenCallback, v10, v11);
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v5, Method_WaveBattleSelectWaveDialog___c__DisplayClass28_0__Open_b__0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0);
}


void WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_Action_int__o **p_battleSceneCallback; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  WaveBattleWaveInfoListManager_o *v8; // x0

  this->fields.battleSceneCallback = callback;
  p_battleSceneCallback = &this->fields.battleSceneCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleSceneCallback, (int32_t)callback, (int32_t)method, v3);
  v8 = (WaveBattleWaveInfoListManager_o *)*(p_battleSceneCallback - 7);
  if ( !v8 )
    sub_1C2D6EC(0, v6);
  WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(v8, callback, v7);
}


void WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C2D6EC(0, wave);
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
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x25
  float y; // s8
  float z; // s9
  float v20; // s10
  float v21; // s11
  _BOOL4 v22; // w25
  bool v23; // w26
  System_String_o **v24; // x8
  bool v25; // zf
  UILabel_o *titleLabel; // x24
  System_String_o *v27; // x27
  UILabel_o *messageLabel; // x24
  UILabel_o *cancelLabel; // x24
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v31; // x27
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // [xsp+0h] [xbp-90h]
  QuestPhaseEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C230F5 & 1) == 0 )
  {
    sub_1C2D490(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__);
    sub_1C2D490(&StringLiteral_15528/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/);
    sub_1C2D490(&StringLiteral_15527/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_15525/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/);
    sub_1C2D490(&StringLiteral_15526/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/);
    byte_4C230F5 = 1;
  }
  entity = 0;
  this->fields.CloseFunc = func;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.CloseFunc,
    (int32_t)func,
    (int32_t)questRestrictionInfo,
    *(const MethodInfo **)&waveCount);
  this->fields.fromSceneKind = fromScene;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questRestrictionInfo || !Master_object )
    goto LABEL_43;
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
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
      if ( !Master_object )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
      if ( !Master_object )
        goto LABEL_43;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.decideButton, 1, 0);
      Master_object = (QuestPhaseMaster_o *)this->fields.decideButton;
      if ( !Master_object )
        goto LABEL_43;
      v22 = 1;
      ((void (__fastcall *)(QuestPhaseMaster_o *, __int64, __int64, const MethodInfo *))Master_object->klass->vtable._14_GetEntityType.methodPtr)(
        Master_object,
        3,
        1,
        Master_object->klass->vtable._14_GetEntityType.method);
      ComponentHelper__SetLocalPositionX((UnityEngine_Component_o *)this->fields.cancelButton, -150.0, 0);
LABEL_30:
      v23 = 0;
      goto LABEL_31;
    }
LABEL_26:
    Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
    if ( !Master_object )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
    if ( !Master_object )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
    if ( !Master_object )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    v22 = 0;
    goto LABEL_30;
  }
  Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
  if ( !Master_object )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
  if ( !Master_object )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (QuestPhaseMaster_o *)this->fields.separateView;
  if ( !Master_object )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
  Master_object = (QuestPhaseMaster_o *)this->fields.waveInfoListManager;
  if ( !Master_object )
    goto LABEL_43;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)Master_object,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0,
                                          0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_43;
    center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0);
    y = center.fields.y;
    z = center.fields.z;
    size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0);
    v20 = size.fields.y;
    v21 = size.fields.z;
    size.fields.x = 148.0;
    size.fields.y = y;
    size.fields.z = z;
    UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0);
    v39.fields.x = 450.0;
    v39.fields.y = v20;
    v39.fields.z = v21;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v39, 0);
  }
  v22 = 0;
  v23 = 1;
LABEL_31:
  v24 = (System_String_o **)&StringLiteral_15527/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE"*/;
  v25 = fromScene == 0;
  titleLabel = this->fields.titleLabel;
  if ( !v25 )
    v24 = (System_String_o **)&StringLiteral_15528/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_TITLE_IN_BATTLE"*/;
  v27 = *v24;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get(v27, 0);
  if ( !titleLabel )
    goto LABEL_43;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15526/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_MESSAGE"*/, 0);
  if ( !messageLabel )
    goto LABEL_43;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15525/*"WAVE_BATTLE_RESTART_SELECT_DIALOG_CANCEL_BUTTON"*/, 0);
  if ( !cancelLabel )
    goto LABEL_43;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  waveInfoListManager = this->fields.waveInfoListManager;
  v31 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1C2D6DC(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
  WaveBattleWaveInfoListManager_CallbackFunc___ctor(
    v31,
    (Il2CppObject *)this,
    (intptr_t)Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__,
    v32);
  if ( !waveInfoListManager )
    goto LABEL_43;
  WaveBattleWaveInfoListManager__CreateList(
    waveInfoListManager,
    deckEntity,
    questRestrictionInfo,
    waveCount,
    v31,
    restartWave,
    v23,
    v22,
    v35);
  WaveBattleSelectWaveDialog__SetWave(this, restartWave, v33);
  if ( !v22 )
    return;
  Master_object = (QuestPhaseMaster_o *)this->fields.waveInfoListManager;
  if ( !Master_object )
LABEL_43:
    sub_1C2D6EC(Master_object, v16);
  WaveBattleWaveInfoListManager__UpdateSeparatePartyInfo(
    (WaveBattleWaveInfoListManager_o *)Master_object,
    restartWave,
    v34);
}


void WaveBattleSelectWaveDialog__SetPartySelectCallback(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *partySelectCallback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackFunc = partySelectCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)partySelectCallback, (int32_t)method, v3);
}


void WaveBattleSelectWaveDialog__SetWave(WaveBattleSelectWaveDialog_o *this, int32_t wave, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C2D6EC(0, wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, 1, 0, v3);
}


void WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
        WaveBattleSelectWaveDialog_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C2D6EC(0, currentWave);
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
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveDialog_o *v11; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C230F2 & 1) == 0 )
  {
    sub_1C2D490(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    byte_4C230F2 = 1;
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
    v9 = sub_1C676E8(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1C2D9AC(v8);
  WaveBattleSelectWaveDialog__remove_CloseFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveDialog_o *v11; // x0
  WaveBattleSelectWaveDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C230F0 & 1) == 0 )
  {
    sub_1C2D490(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo);
    byte_4C230F0 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1C2D9AC(v8);
  WaveBattleSelectWaveDialog__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *WaveBattleSelectWaveDialog__get_closeBtnObject(
        WaveBattleSelectWaveDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C230FE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C230FE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2D6EC(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
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
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C230F3 & 1) == 0 )
  {
    sub_1C2D490(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    byte_4C230F3 = 1;
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
    v9 = sub_1C676E8(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1C2D9AC(v8);
  WaveBattleSelectWaveDialog__Awake(v11, v12);
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
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveDialog_o *v11; // x0
  WaveBattleSelectWaveDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C230F1 & 1) == 0 )
  {
    sub_1C2D490(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo);
    byte_4C230F1 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1C2D9AC(v8);
  WaveBattleSelectWaveDialog__add_CloseFunc(v11, v12, v13);
}


void WaveBattleSelectWaveDialog_CallbackFunc___ctor(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6CD70;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6CD10;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *WaveBattleSelectWaveDialog_CallbackFunc__BeginInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+38h] [xbp-38h] BYREF
  int32_t v21; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = n;
  v21 = result;
  v19 = m;
  if ( (byte_4C23100 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_4C23100 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v21,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v17, callback, object);
}


void WaveBattleSelectWaveDialog_CallbackFunc__EndInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6CDE4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6CD9C;
}


System_IAsyncResult_o *WaveBattleSelectWaveDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4C23101 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C23101 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void WaveBattleSelectWaveDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (WaveBattleSelectWaveDialog___c__DisplayClass28_0_o *)_4__this->fields.maskObject) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0), (v4 = v3->fields.__4__this) == 0) )
  {
    sub_1C2D6EC(this, method);
  }
  v4->fields.state = 1;
  ActionExtensions__Call(v3->fields.endOpenCallback, 0);
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
    sub_1C2D6EC(this, method);
  }
  WaveBattleSelectWaveDialog__EndClose((WaveBattleSelectWaveDialog_o *)this, method);
  ActionExtensions__Call(v3->fields.closeCallback, 0);
}