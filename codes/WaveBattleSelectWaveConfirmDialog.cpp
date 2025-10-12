void WaveBattleSelectWaveConfirmDialog___ctor(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C337BC & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C337BC = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WaveBattleSelectWaveConfirmDialog__Awake(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0

  if ( (byte_4C337B9 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C337B9 = 1;
  }
  WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(this, this->fields.restartWaveNumMax, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__pushScene(
    (AvalonSceneManager_o *)Instance,
    35,
    1,
    (Il2CppObject *)this->fields.battleSetupinfo,
    0);
}


void WaveBattleSelectWaveConfirmDialog__Close(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C337B5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_WaveBattleSelectWaveConfirmDialog_EndClose__);
    byte_4C337B5 = 1;
  }
  this->fields.state = 2;
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void WaveBattleSelectWaveConfirmDialog__EndOpen(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void WaveBattleSelectWaveConfirmDialog__Init(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C337B3 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C337B3 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.resumeNotSelectWaveLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.resumeSelectWaveLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C32E7C(titleLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WaveBattleSelectWaveConfirmDialog__OnClickCancel(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8

  if ( (byte_4C337B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    byte_4C337B6 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CloseFunc->fields.invoke_impl)(
        CloseFunc->fields.method_code,
        0,
        CloseFunc->fields.method);
  }
}


void WaveBattleSelectWaveConfirmDialog__OnClickResumeNotSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  ScrTerminalListTop_o *v6; // x0
  QuestRewardItemAction_c *klass; // x8
  const MethodInfo *v8; // x1

  if ( (byte_4C337B7 & 1) == 0 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    byte_4C337B7 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CloseFunc->fields.invoke_impl)(
        CloseFunc->fields.method_code,
        0,
        CloseFunc->fields.method);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v6 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v6->fields.friendPointBoostItemAction->klass;
    if ( !klass || (v6 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
      sub_1C32E7C(v6);
    ScrTerminalListTop__SetBackMaskActive(v6, 0, 0);
    WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(this, v8);
  }
}


void WaveBattleSelectWaveConfirmDialog__OnClickResumeSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  Il2CppObject *waveBattleSelectWaveDialogPrefab; // x21
  Il2CppObject *v11; // x0
  void **v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *v15; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  __int64 v21; // x8
  WaveBattleSelectWaveDialog_o *v22; // x21
  UserEventDeckEntity_o *deckEntity; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t restartWaveNumSelect; // w19
  int32_t v26; // w24
  int32_t *p_restartWaveNumSelect; // t2
  WaveBattleSelectWaveDialog_CloseDelegate_o *v28; // x25
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x7

  if ( (byte_4C337B8 & 1) == 0 )
  {
    sub_1C32C20(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    sub_1C32C20(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__);
    sub_1C32C20(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
    sub_1C32C20(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    byte_4C337B8 = 1;
  }
  v3 = sub_1C32E6C(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  if ( this->fields.state == 1 )
  {
    v7 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C32C38(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C32C04(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CloseFunc->fields.invoke_impl)(
        CloseFunc->fields.method_code,
        0,
        CloseFunc->fields.method);
    waveBattleSelectWaveDialogPrefab = (Il2CppObject *)this->fields.waveBattleSelectWaveDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__Instantiate_object_(
            waveBattleSelectWaveDialogPrefab,
            (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v11;
    v12 = (void **)(v3 + 24);
    sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v11, v13, v14);
    v15 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0);
      GameObjectExtensions__SafeSetParent(v15, parent, 0);
      transform = (UnityEngine_Transform_o *)*v12;
      if ( *v12 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Component_object, v18, v19);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)transform, v20);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4C319B6 )
          {
            sub_1C32C20(&TerminalSceneComponent_TypeInfo);
            byte_4C319B6 = 1;
          }
          transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          }
          v21 = *(_QWORD *)transform[7].fields.m_CachedPtr;
          if ( v21 )
          {
            transform = *(UnityEngine_Transform_o **)(v21 + 256);
            if ( transform )
            {
              ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)transform, 0, 0);
              v22 = *(WaveBattleSelectWaveDialog_o **)(v3 + 16);
              deckEntity = this->fields.deckEntity;
              questRestrictionInfo = this->fields.questRestrictionInfo;
              p_restartWaveNumSelect = &this->fields.restartWaveNumSelect;
              restartWaveNumSelect = this->fields.restartWaveNumSelect;
              v26 = p_restartWaveNumSelect[1];
              v28 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1C32E6C(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
              WaveBattleSelectWaveDialog_CloseDelegate___ctor(
                v28,
                (Il2CppObject *)v3,
                Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
                v29);
              if ( v22 )
              {
                WaveBattleSelectWaveDialog__Open(
                  v22,
                  deckEntity,
                  questRestrictionInfo,
                  v26,
                  restartWaveNumSelect,
                  0,
                  v28,
                  v30);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C32E7C(transform);
  }
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleSelectWaveConfirmDialog__Open(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t qId,
        int32_t qPhase,
        int32_t wId,
        int32_t restartWave,
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  void *Master_object; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o *v16; // x21
  Il2CppObject *v17; // x0
  UILabel_o *cancelLabel; // x20
  UILabel_o *resumeNotSelectWaveLabel; // x20
  UILabel_o *resumeSelectWaveLabel; // x20
  Il2CppObject *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UserEventDeckEntity_o *v24; // x1
  int32_t eventId; // w20
  int32_t questId; // w21
  int32_t questPhase; // w22
  QuestRestrictionInfo_o *v28; // x23
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Action_o *v31; // x20
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF

  v32 = restartWave;
  if ( (byte_4C337B4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_StageMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&QuestRestrictionInfo_TypeInfo);
    sub_1C32C20(&Method_WaveBattleSelectWaveConfirmDialog_EndOpen__);
    sub_1C32C20(&StringLiteral_15525/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_15522/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_15524/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/);
    sub_1C32C20(&StringLiteral_15521/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/);
    sub_1C32C20(&StringLiteral_15523/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/);
    sub_1C32C20(&StringLiteral_1129/*"00"*/);
    byte_4C337B4 = 1;
  }
  this->fields.CloseFunc = func;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.CloseFunc, (int32_t)func, qPhase, *(const MethodInfo **)&wId);
  this->fields.questId = qId;
  this->fields.questPhase = qPhase;
  this->fields.warId = wId;
  this->fields.restartWaveNumMax = restartWave;
  this->fields.restartWaveNumSelect = restartWave;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_24;
  this->fields.eventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Master_object, this->fields.questId, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15525/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_15522/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, 0);
  v17 = (Il2CppObject *)System_Int32__ToString_65028652((int32_t)&v32, (System_String_o *)StringLiteral_1129/*"00"*/, 0);
  Master_object = System_String__Format(v16, v17, 0);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15521/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0);
  if ( !cancelLabel )
    goto LABEL_24;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  resumeNotSelectWaveLabel = this->fields.resumeNotSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15523/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0);
  if ( !resumeNotSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeNotSelectWaveLabel, (System_String_o *)Master_object, 0);
  resumeSelectWaveLabel = this->fields.resumeSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15524/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, 0);
  if ( !resumeSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeSelectWaveLabel, (System_String_o *)Master_object, 0);
  v21 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v21 )
    goto LABEL_24;
  Master_object = UserEventDeckMaster__getDeckList(
                    (UserEventDeckMaster_o *)v21,
                    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                    this->fields.eventId,
                    this->fields.questId,
                    this->fields.questPhase,
                    0,
                    0);
  if ( !Master_object )
    goto LABEL_24;
  if ( !*((_DWORD *)Master_object + 6) )
    sub_1C32E84(Master_object);
  v24 = (struct UserEventDeckEntity_o *)*((_QWORD *)Master_object + 4);
  this->fields.deckEntity = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.deckEntity, (int32_t)v24, v22, v23);
  questId = this->fields.questId;
  eventId = this->fields.eventId;
  questPhase = this->fields.questPhase;
  v28 = (QuestRestrictionInfo_o *)sub_1C32E6C(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_43298736(v28, eventId, questId, questPhase, 0);
  this->fields.questRestrictionInfo = v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)v28, v29, v30);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_StageMaster___);
  if ( !Master_object )
LABEL_24:
    sub_1C32E7C(Master_object);
  this->fields.waveCount = StageMaster__GetWaveCount(
                             (StageMaster_o *)Master_object,
                             this->fields.questId,
                             this->fields.questPhase,
                             0);
  v31 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0, 0);
}


void WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t restartWaveNum,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v6; // x22
  System_Int32_array *SelectableQuests; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t questPhase; // w8
  BattleSetupInfo_o **p_battleSetupinfo; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleSetupInfo_o *battleSetupinfo; // x23
  QuestGroupMaster_o *v15; // x22
  BattleSetupInfo_o *v16; // x8
  int32_t questId; // w9
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C337BA & 1) == 0 )
  {
    sub_1C32C20(&BattleSetupInfo_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C337BA = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0);
  v6 = sub_1C32E6C(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v6, 0);
  if ( !v6 )
    goto LABEL_16;
  *(_DWORD *)(v6 + 16) = this->fields.warId;
  *(_DWORD *)(v6 + 20) = this->fields.questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0);
  *(_QWORD *)(v6 + 112) = SelectableQuests;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 112), (int32_t)SelectableQuests, v8, v9);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  *(_DWORD *)(v6 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, this->fields.questId, 0, 0);
  *(_DWORD *)(v6 + 124) = 0;
  questPhase = this->fields.questPhase;
  *(_WORD *)(v6 + 72) = 0;
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 48) = 0;
  *(_DWORD *)(v6 + 56) = 0;
  *(_DWORD *)(v6 + 24) = questPhase;
  this->fields.battleSetupinfo = (struct BattleSetupInfo_o *)v6;
  p_battleSetupinfo = &this->fields.battleSetupinfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battleSetupinfo, v6, v12, v13);
  battleSetupinfo = this->fields.battleSetupinfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupinfo )
    goto LABEL_16;
  v15 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupinfo, 0);
  if ( !v15
    || (Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v15, (int32_t)Master_object, 0),
        !battleSetupinfo)
    || (battleSetupinfo->fields.eventId = (int)Master_object,
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0)
    || (BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_object, 0),
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0)
    || (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0), (v16 = *p_battleSetupinfo) == 0) )
  {
LABEL_16:
    sub_1C32E7C(Master_object);
  }
  questId = this->fields.questId;
  v16->fields.restartWave = restartWaveNum;
  v16->fields.isScriptBeforeWarBoard = 0;
  v16->fields.originQuestId = questId;
}


void WaveBattleSelectWaveConfirmDialog__add_CloseFunc(
        WaveBattleSelectWaveConfirmDialog_o *this,
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveConfirmDialog_o *v11; // x0
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C337B1 & 1) == 0 )
  {
    sub_1C32C20(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo);
    byte_4C337B1 = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveConfirmDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1C3313C(v8);
  WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *WaveBattleSelectWaveConfirmDialog__get_closeBtnObject(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C337BB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C337BB = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}


void WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(
        WaveBattleSelectWaveConfirmDialog_o *this,
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleSelectWaveConfirmDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C337B2 & 1) == 0 )
  {
    sub_1C32C20(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo);
    byte_4C337B2 = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveConfirmDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1C3313C(v8);
  WaveBattleSelectWaveConfirmDialog__Awake(v11, v12);
}


void WaveBattleSelectWaveConfirmDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7241C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A723D4;
}


System_IAsyncResult_o *WaveBattleSelectWaveConfirmDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C337BD & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C337BD = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void WaveBattleSelectWaveConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}


void WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___ctor(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___OnClickResumeSelectWave_b__0(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  WaveBattleSelectWaveDialog_o *resumeNotSelectWaveDialog; // x19
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4C337BE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1__OnClickResumeSelectWave_b__1__);
    sub_1C32C20(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_TypeInfo);
    byte_4C337BE = 1;
  }
  v5 = sub_1C32E6C(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        *(_BYTE *)(v5 + 16) = isDecide,
        resumeNotSelectWaveDialog = this->fields.resumeNotSelectWaveDialog,
        v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
        System_Action___ctor(
          v10,
          (Il2CppObject *)v5,
          Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1__OnClickResumeSelectWave_b__1__,
          0),
        !resumeNotSelectWaveDialog) )
  {
    sub_1C32E7C(v6);
  }
  WaveBattleSelectWaveDialog__Close_34652204(resumeNotSelectWaveDialog, v10, v11);
}


void WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1___ctor(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1___OnClickResumeSelectWave_b__1(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_o *this,
        const MethodInfo *method)
{
  WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_o *v2; // x19
  struct WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *CS___8__locals1; // x8
  UnityEngine_Object_o *go; // x20
  const MethodInfo *v5; // x6
  struct WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *v6; // x8

  v2 = this;
  if ( (byte_4C337BF & 1) == 0 )
  {
    this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C337BF = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  go = (UnityEngine_Object_o *)CS___8__locals1->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71223640(go, 0);
  if ( !v2->fields.isDecide )
  {
    v6 = v2->fields.CS___8__locals1;
    if ( v6 )
    {
      this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_o *)v6->fields.__4__this;
      if ( this )
      {
        WaveBattleSelectWaveConfirmDialog__Open(
          (WaveBattleSelectWaveConfirmDialog_o *)this,
          *(_DWORD *)&this[5].fields.isDecide,
          (int32_t)this[5].fields.CS___8__locals1,
          HIDWORD(this[5].fields.CS___8__locals1),
          (int32_t)this[6].klass,
          (WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *)this[7].monitor,
          v5);
        return;
      }
    }
LABEL_10:
    sub_1C32E7C(this);
  }
}