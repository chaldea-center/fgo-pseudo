void __fastcall WaveBattleSelectWaveDialog___ctor(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C1DF7B & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1DF7B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Awake(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Close(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *maskObject; // x0
  System_Action_o *v5; // x20

  if ( (byte_4C1DF77 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_WaveBattleSelectWaveDialog_EndClose__, v3);
    byte_4C1DF77 = 1;
  }
  maskObject = this->fields.maskObject;
  this->fields.state = 2;
  if ( !maskObject
    || (UnityEngine_GameObject__SetActive(maskObject, 1, 0LL),
        (maskObject = (UnityEngine_GameObject_o *)this->fields.waveInfoListManager) == 0LL) )
  {
    sub_1C3B9C0(maskObject, method);
  }
  WaveBattleWaveInfoListManager__DestroyList((WaveBattleWaveInfoListManager_o *)maskObject, method);
  v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Close_33646080(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *closeCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0
  const MethodInfo *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_o *v22; // x20

  if ( (byte_4C1DF78 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, closeCallback);
    sub_1C3B764(&Method_WaveBattleSelectWaveDialog___c__DisplayClass27_0__Close_b__0__, v5);
    sub_1C3B764(&WaveBattleSelectWaveDialog___c__DisplayClass27_0_TypeInfo, v6);
    byte_4C1DF78 = 1;
  }
  v7 = sub_1C3B9B0(WaveBattleSelectWaveDialog___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15),
        *(_QWORD *)(v7 + 24) = closeCallback,
        sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)closeCallback, v16, v17, v18, v19, v20, v21),
        (waveInfoListManager = this->fields.waveInfoListManager) == 0LL) )
  {
    sub_1C3B9C0(waveInfoListManager, v9);
  }
  WaveBattleWaveInfoListManager__DestroyWaveInfoObj(waveInfoListManager, v9);
  v22 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass27_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__EndOpen(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0

  maskObject = this->fields.maskObject;
  if ( !maskObject )
    sub_1C3B9C0(0LL, method);
  UnityEngine_GameObject__SetActive(maskObject, 0, 0LL);
  this->fields.state = 1;
}


void __fastcall WaveBattleSelectWaveDialog__Init(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C1DF73 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1DF73 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_1C3B9C0(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__OnClickCancel(WaveBattleSelectWaveDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskObject; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattleSelectWaveDialog_CloseDelegate_o *CloseFunc; // x8

  if ( (byte_4C1DF79 & 1) == 0 )
  {
    sub_1C3B764(&Method_WaveBattleSelectWaveDialog_OnClickCancel__, method);
    byte_4C1DF79 = 1;
  }
  if ( this->fields.state == 1 )
  {
    maskObject = this->fields.maskObject;
    this->fields.state = 2;
    if ( !maskObject )
      sub_1C3B9C0(0LL, method);
    UnityEngine_GameObject__SetActive(maskObject, 1, 0LL);
    v4 = Method_WaveBattleSelectWaveDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_WaveBattleSelectWaveDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
// attributes: thunk
void __fastcall WaveBattleSelectWaveDialog__OnSelectWavePartyList(
        WaveBattleSelectWaveDialog_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  WaveBattleSelectWaveDialog__Close(this, *(const MethodInfo **)&result);
}


void __fastcall WaveBattleSelectWaveDialog__Open(
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
  System_Action_o *v16; // x20

  if ( (byte_4C1DF75 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, deckEntity);
    sub_1C3B764(&Method_WaveBattleSelectWaveDialog_EndOpen__, v15);
    byte_4C1DF75 = 1;
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
  v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_WaveBattleSelectWaveDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__Open_33648772(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_o *v22; // x20

  if ( (byte_4C1DF76 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, endOpenCallback);
    sub_1C3B764(&Method_WaveBattleSelectWaveDialog___c__DisplayClass23_0__Open_b__0__, v5);
    sub_1C3B764(&WaveBattleSelectWaveDialog___c__DisplayClass23_0_TypeInfo, v6);
    byte_4C1DF76 = 1;
  }
  v7 = sub_1C3B9B0(WaveBattleSelectWaveDialog___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endOpenCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)endOpenCallback, v16, v17, v18, v19, v20, v21);
  v22 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_WaveBattleSelectWaveDialog___c__DisplayClass23_0__Open_b__0__,
    0LL);
  BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__OverwriteMoveToPartyButton(
        WaveBattleSelectWaveDialog_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C3B9C0(0LL, callback);
  WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(waveInfoListManager, callback, method);
}


void __fastcall WaveBattleSelectWaveDialog__OverwriteSpecifiedWaveCanNotSelectLabel(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        System_String_o *overwriteLabel,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C3B9C0(0LL, wave);
  WaveBattleWaveInfoListManager__OverwriteSpecifiedWaveCanNotSelectLabel(
    waveInfoListManager,
    wave,
    overwriteLabel,
    method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog__SetDialog(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v26; // x1
  Il2CppObject *Component_object; // x25
  float y; // s8
  float z; // s9
  float v30; // s10
  float v31; // s11
  bool v32; // w25
  System_String_o **v33; // x8
  bool v34; // zf
  UILabel_o *titleLabel; // x24
  System_String_o *v36; // x26
  UILabel_o *messageLabel; // x24
  UILabel_o *cancelLabel; // x24
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x24
  WaveBattleWaveInfoListManager_CallbackFunc_o *v40; // x26
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x7
  const MethodInfo *v43; // x2
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1DF74 & 1) == 0 )
  {
    sub_1C3B764(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, deckEntity);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v15);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseMaster___, v16);
    sub_1C3B764(&DataManager_TypeInfo, v17);
    sub_1C3B764(&LocalizationManager_TypeInfo, v18);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v19);
    sub_1C3B764(&Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__, v20);
    sub_1C3B764(&StringLiteral_15844/*"_DisplayColor"*/, v21);
    sub_1C3B764(&StringLiteral_15843/*"_DepthLimit"*/, v22);
    sub_1C3B764(&StringLiteral_15841/*"_CultureInfo"*/, v23);
    sub_1C3B764(&StringLiteral_15842/*"_CurTex"*/, v24);
    byte_4C1DF74 = 1;
  }
  entity = 0LL;
  this->fields.CloseFunc = func;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.CloseFunc,
    (int64_t)func,
    (int64_t)questRestrictionInfo,
    waveCount,
    *(System_String_o **)&restartWave,
    *(BattleSetupInfo_o **)&fromScene,
    (FollowerInfo_o *)func,
    (PartyListViewItem_o *)method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !questRestrictionInfo || !Master_object )
    goto LABEL_30;
  QuestPhaseMaster__TryGetEntity(
    Master_object,
    &entity,
    questRestrictionInfo->fields.questId,
    questRestrictionInfo->fields.questPhase,
    0LL);
  if ( entity && QuestPhaseEntity__IsWaveSetupAsOneParty(entity, 0LL) )
  {
    Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
    if ( !Master_object )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
    if ( !Master_object )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (QuestPhaseMaster_o *)this->fields.waveInfoListManager;
    if ( !Master_object )
      goto LABEL_30;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)Master_object,
                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_30;
      center = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)Component_object, 0LL);
      y = center.fields.y;
      z = center.fields.z;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)Component_object, 0LL);
      v30 = size.fields.y;
      v31 = size.fields.z;
      size.fields.x = 148.0;
      size.fields.y = y;
      size.fields.z = z;
      UnityEngine_BoxCollider__set_center((UnityEngine_BoxCollider_o *)Component_object, size, 0LL);
      v47.fields.x = 450.0;
      v47.fields.y = v30;
      v47.fields.z = v31;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)Component_object, v47, 0LL);
    }
    v32 = 1;
  }
  else
  {
    Master_object = (QuestPhaseMaster_o *)this->fields.normalView;
    if ( !Master_object )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    Master_object = (QuestPhaseMaster_o *)this->fields.otherView;
    if ( !Master_object )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    v32 = 0;
  }
  v33 = (System_String_o **)&StringLiteral_15843/*"_DepthLimit"*/;
  v34 = fromScene == 0;
  titleLabel = this->fields.titleLabel;
  if ( !v34 )
    v33 = (System_String_o **)&StringLiteral_15844/*"_DisplayColor"*/;
  v36 = *v33;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get(v36, 0LL);
  if ( !titleLabel )
    goto LABEL_30;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15842/*"_CurTex"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL),
        cancelLabel = this->fields.cancelLabel,
        Master_object = (QuestPhaseMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15841/*"_CultureInfo"*/, 0LL),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL),
        waveInfoListManager = this->fields.waveInfoListManager,
        v40 = (WaveBattleWaveInfoListManager_CallbackFunc_o *)sub_1C3B9B0(WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo),
        WaveBattleWaveInfoListManager_CallbackFunc___ctor(
          v40,
          (Il2CppObject *)this,
          Method_WaveBattleSelectWaveDialog_OnSelectWavePartyList__,
          v41),
        !waveInfoListManager) )
  {
LABEL_30:
    sub_1C3B9C0(Master_object, v26);
  }
  WaveBattleWaveInfoListManager__CreateList(
    waveInfoListManager,
    deckEntity,
    questRestrictionInfo,
    waveCount,
    v40,
    restartWave,
    v32,
    v42);
  WaveBattleSelectWaveDialog__SetWave(this, restartWave, v43);
}


void __fastcall WaveBattleSelectWaveDialog__SetPartySelectCallback(
        WaveBattleSelectWaveDialog_o *this,
        WaveBattleSelectWaveDialog_CallbackFunc_o *partySelectCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackFunc = partySelectCallback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)partySelectCallback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WaveBattleSelectWaveDialog__SetWave(
        WaveBattleSelectWaveDialog_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C3B9C0(0LL, wave);
  WaveBattleWaveInfoListManager__SetScrollPos(waveInfoListManager, wave, 1, v3);
}


void __fastcall WaveBattleSelectWaveDialog__SetWaveInfoMaskActive(
        WaveBattleSelectWaveDialog_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *waveInfoListManager; // x0

  waveInfoListManager = this->fields.waveInfoListManager;
  if ( !waveInfoListManager )
    sub_1C3B9C0(0LL, currentWave);
  WaveBattleWaveInfoListManager__SetWaveInfoMaskActive(waveInfoListManager, currentWave, method);
}


void __fastcall WaveBattleSelectWaveDialog__add_CloseFunc(
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

  if ( (byte_4C1DF71 & 1) == 0 )
  {
    sub_1C3B764(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, value);
    byte_4C1DF71 = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1C3BC80(v8);
  WaveBattleSelectWaveDialog__remove_CloseFunc(v11, v12, v13);
}


void __fastcall WaveBattleSelectWaveDialog__add_callbackFunc(
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

  if ( (byte_4C1DF6F & 1) == 0 )
  {
    sub_1C3B764(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, value);
    byte_4C1DF6F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CallbackFunc_c *)v8->klass != WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1C3BC80(v8);
  WaveBattleSelectWaveDialog__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveDialog__get_closeBtnObject(
        WaveBattleSelectWaveDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4C1DF7A & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1DF7A = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C3B9C0(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog__remove_CloseFunc(
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

  if ( (byte_4C1DF72 & 1) == 0 )
  {
    sub_1C3B764(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, value);
    byte_4C1DF72 = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1C3BC80(v8);
  WaveBattleSelectWaveDialog__Awake(v11, v12);
}


void __fastcall WaveBattleSelectWaveDialog__remove_callbackFunc(
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

  if ( (byte_4C1DF70 & 1) == 0 )
  {
    sub_1C3B764(&WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo, value);
    byte_4C1DF70 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveDialog_CallbackFunc_c *)v8->klass != WaveBattleSelectWaveDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveDialog_o *)sub_1C3BC80(v8);
  WaveBattleSelectWaveDialog__add_CloseFunc(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CallbackFunc___ctor(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A776E4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A77684;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleSelectWaveDialog_CallbackFunc__BeginInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  _QWORD v18[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v19; // [xsp+10h] [xbp-60h]
  int32_t v20; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v21; // [xsp+38h] [xbp-38h] BYREF
  int32_t v22; // [xsp+3Ch] [xbp-34h] BYREF

  v21 = n;
  v22 = result;
  v20 = m;
  if ( (byte_4C1DF7C & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&result);
    sub_1C3B764(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_4C1DF7C = 1;
  }
  v19 = 0u;
  v18[0] = j_il2cpp_value_box_0(
             WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo,
             &v22,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v21, v11, v12, v13);
  *(_QWORD *)&v19 = j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v18, callback, object);
}


void __fastcall WaveBattleSelectWaveDialog_CallbackFunc__EndInvoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall WaveBattleSelectWaveDialog_CallbackFunc__Invoke(
        WaveBattleSelectWaveDialog_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    m,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A77758;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A77710;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleSelectWaveDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4C1DF7D & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, isDecide);
    byte_4C1DF7D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall WaveBattleSelectWaveDialog_CloseDelegate__Invoke(
        WaveBattleSelectWaveDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WaveBattleSelectWaveDialog___c__DisplayClass23_0___ctor(
        WaveBattleSelectWaveDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog___c__DisplayClass23_0___Open_b__0(
        WaveBattleSelectWaveDialog___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveDialog_o *_4__this; // x8
  WaveBattleSelectWaveDialog___c__DisplayClass23_0_o *v3; // x19
  struct WaveBattleSelectWaveDialog_o *v4; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (WaveBattleSelectWaveDialog___c__DisplayClass23_0_o *)_4__this->fields.maskObject) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL), (v4 = v3->fields.__4__this) == 0LL) )
  {
    sub_1C3B9C0(this, method);
  }
  v4->fields.state = 1;
  ActionExtensions__Call(v3->fields.endOpenCallback, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog___c__DisplayClass27_0___ctor(
        WaveBattleSelectWaveDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveDialog___c__DisplayClass27_0___Close_b__0(
        WaveBattleSelectWaveDialog___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  WaveBattleSelectWaveDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  WaveBattleSelectWaveDialog__Init(_4__this, method);
  ActionExtensions__Call(this->fields.closeCallback, 0LL);
}