void __fastcall WaveBattleSelectWaveConfirmDialog___ctor(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49B6E5D & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B6E5D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__Awake(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_49B6E5A & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49B6E5A = 1;
  }
  WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(this, this->fields.restartWaveNumMax, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v5);
  AvalonSceneManager__pushScene(
    (AvalonSceneManager_o *)Instance,
    35,
    1,
    (Il2CppObject *)this->fields.battleSetupinfo,
    0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__Close(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_49B6E56 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_WaveBattleSelectWaveConfirmDialog_EndClose__, v3);
    byte_49B6E56 = 1;
  }
  this->fields.state = 2;
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__EndOpen(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


void __fastcall WaveBattleSelectWaveConfirmDialog__Init(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_49B6E54 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49B6E54 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.cancelLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.resumeNotSelectWaveLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.resumeSelectWaveLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1B4D1EC(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickCancel(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8

  if ( (byte_49B6E57 & 1) == 0 )
  {
    sub_1B4CF90(&Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__, method);
    byte_49B6E57 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
  }
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickResumeNotSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  ScrTerminalListTop_o *v8; // x0
  QuestRewardTokenAction_c *klass; // x8
  const MethodInfo *v10; // x1

  if ( (byte_49B6E58 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    sub_1B4CF90(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__, v3);
    byte_49B6E58 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B4CFA8(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v6);
      byte_49B5933 = 1;
    }
    v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v8->fields.boardGameTokenAction->klass;
    if ( !klass || (v8 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
      sub_1B4D1EC(v8, v6);
    ScrTerminalListTop__SetBackMaskActive(v8, 0, 0LL);
    WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(this, v10);
  }
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickResumeSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  Il2CppObject *waveBattleSelectWaveDialogPrefab; // x21
  Il2CppObject *v19; // x0
  void **v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  WaveBattleSelectWaveDialog_o *v29; // x21
  UserEventDeckEntity_o *deckEntity; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t restartWaveNumSelect; // w19
  int32_t v33; // w24
  int32_t *p_restartWaveNumSelect; // t2
  WaveBattleSelectWaveDialog_CloseDelegate_o *v35; // x25
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x7

  if ( (byte_49B6E59 & 1) == 0 )
  {
    sub_1B4CF90(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v3);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v5);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v6);
    sub_1B4CF90(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__, v7);
    sub_1B4CF90(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo, v8);
    sub_1B4CF90(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__, v9);
    byte_49B6E59 = 1;
  }
  v10 = sub_1B4D1DC(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_25;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 32), (int32_t)this, v13, v14);
  if ( this->fields.state == 1 )
  {
    v15 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1B4CFA8(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    v16 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
    waveBattleSelectWaveDialogPrefab = (Il2CppObject *)this->fields.waveBattleSelectWaveDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__Instantiate_object_(
            waveBattleSelectWaveDialogPrefab,
            (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v10 + 24) = v19;
    v20 = (void **)(v10 + 24);
    sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 24), (int32_t)v19, v21, v22);
    v23 = *(UnityEngine_GameObject_o **)(v10 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v23, parent, 0LL);
      transform = (UnityEngine_Transform_o *)*v20;
      if ( *v20 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
        *(_QWORD *)(v10 + 16) = Component_object;
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)Component_object, v26, v27);
        transform = *(UnityEngine_Transform_o **)(v10 + 16);
        if ( transform )
        {
          WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)transform, v12);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_49B5933 )
          {
            sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v12);
            byte_49B5933 = 1;
          }
          transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          }
          v28 = **(_QWORD **)&transform[7].fields.m_CachedPtr;
          if ( v28 )
          {
            transform = *(UnityEngine_Transform_o **)(v28 + 256);
            if ( transform )
            {
              ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)transform, 0, 0LL);
              v29 = *(WaveBattleSelectWaveDialog_o **)(v10 + 16);
              deckEntity = this->fields.deckEntity;
              questRestrictionInfo = this->fields.questRestrictionInfo;
              p_restartWaveNumSelect = &this->fields.restartWaveNumSelect;
              restartWaveNumSelect = this->fields.restartWaveNumSelect;
              v33 = p_restartWaveNumSelect[1];
              v35 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1B4D1DC(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
              WaveBattleSelectWaveDialog_CloseDelegate___ctor(
                v35,
                (Il2CppObject *)v10,
                Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
                v36);
              if ( v29 )
              {
                WaveBattleSelectWaveDialog__Open(
                  v29,
                  deckEntity,
                  questRestrictionInfo,
                  v33,
                  restartWaveNumSelect,
                  0,
                  v35,
                  v37);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1B4D1EC(transform, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog__Open(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t qId,
        int32_t qPhase,
        int32_t wId,
        int32_t restartWave,
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *func,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
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
  __int64 v25; // x1
  __int64 v26; // x1
  void *Master_object; // x0
  __int64 v28; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o *v31; // x21
  Il2CppObject *v32; // x0
  UILabel_o *cancelLabel; // x20
  UILabel_o *resumeNotSelectWaveLabel; // x20
  UILabel_o *resumeSelectWaveLabel; // x20
  Il2CppObject *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct UserEventDeckEntity_o *v39; // x1
  int32_t eventId; // w20
  int32_t questId; // w21
  int32_t questPhase; // w22
  QuestRestrictionInfo_o *v43; // x23
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Action_o *v46; // x20
  int32_t v47; // [xsp+Ch] [xbp-54h] BYREF

  v47 = restartWave;
  if ( (byte_49B6E55 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&qId);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestGroupMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMaster_StageMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserEventDeckMaster___, v15);
    sub_1B4CF90(&DataManager_TypeInfo, v16);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v17);
    sub_1B4CF90(&NetworkManager_TypeInfo, v18);
    sub_1B4CF90(&QuestRestrictionInfo_TypeInfo, v19);
    sub_1B4CF90(&Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, v20);
    sub_1B4CF90(&StringLiteral_15233/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, v21);
    sub_1B4CF90(&StringLiteral_15230/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, v22);
    sub_1B4CF90(&StringLiteral_15232/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, v23);
    sub_1B4CF90(&StringLiteral_15229/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v24);
    sub_1B4CF90(&StringLiteral_15231/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, v25);
    sub_1B4CF90(&StringLiteral_1145/*"00"*/, v26);
    byte_49B6E55 = 1;
  }
  this->fields.CloseFunc = func;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.CloseFunc, (int32_t)func, qPhase, *(const MethodInfo **)&wId);
  this->fields.questId = qId;
  this->fields.questPhase = qPhase;
  this->fields.warId = wId;
  this->fields.restartWaveNumMax = restartWave;
  this->fields.restartWaveNumSelect = restartWave;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_24;
  this->fields.eventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Master_object, this->fields.questId, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15233/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_15230/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  v32 = (Il2CppObject *)System_Int32__ToString_62608464((int32_t)&v47, (System_String_o *)StringLiteral_1145/*"00"*/, 0LL);
  Master_object = System_String__Format(v31, v32, 0LL);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15229/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_24;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL);
  resumeNotSelectWaveLabel = this->fields.resumeNotSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15231/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeNotSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeNotSelectWaveLabel, (System_String_o *)Master_object, 0LL);
  resumeSelectWaveLabel = this->fields.resumeSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15232/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeSelectWaveLabel, (System_String_o *)Master_object, 0LL);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v28);
    byte_49B57A5 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v36 )
    goto LABEL_24;
  Master_object = UserEventDeckMaster__getDeckList(
                    (UserEventDeckMaster_o *)v36,
                    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                    this->fields.eventId,
                    this->fields.questId,
                    this->fields.questPhase,
                    0,
                    0LL);
  if ( !Master_object )
    goto LABEL_24;
  if ( !*((_DWORD *)Master_object + 6) )
    sub_1B4D1F4(Master_object, v28);
  v39 = (struct UserEventDeckEntity_o *)*((_QWORD *)Master_object + 4);
  this->fields.deckEntity = v39;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.deckEntity, (int32_t)v39, v37, v38);
  questId = this->fields.questId;
  eventId = this->fields.eventId;
  questPhase = this->fields.questPhase;
  v43 = (QuestRestrictionInfo_o *)sub_1B4D1DC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_41025880(v43, eventId, questId, questPhase, 0LL);
  this->fields.questRestrictionInfo = v43;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)v43, v44, v45);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_StageMaster___);
  if ( !Master_object )
LABEL_24:
    sub_1B4D1EC(Master_object, v28);
  this->fields.waveCount = StageMaster__GetWaveCount(
                             (StageMaster_o *)Master_object,
                             this->fields.questId,
                             this->fields.questPhase,
                             0LL);
  v46 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v46, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t restartWaveNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x22
  System_Int32_array *SelectableQuests; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t questPhase; // w8
  BattleSetupInfo_o **p_battleSetupinfo; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleSetupInfo_o *battleSetupinfo; // x23
  QuestGroupMaster_o *v19; // x22
  BattleSetupInfo_o *v20; // x8
  int32_t questId; // w9
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49B6E5B & 1) == 0 )
  {
    sub_1B4CF90(&BattleSetupInfo_TypeInfo, *(_QWORD *)&restartWaveNum);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestGroupMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    byte_49B6E5B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0LL);
  v10 = sub_1B4D1DC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  *(_DWORD *)(v10 + 16) = this->fields.warId;
  *(_DWORD *)(v10 + 20) = this->fields.questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v10 + 112) = SelectableQuests;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 112), (int32_t)SelectableQuests, v12, v13);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  *(_DWORD *)(v10 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, this->fields.questId, 0, 0LL);
  *(_DWORD *)(v10 + 124) = 0;
  questPhase = this->fields.questPhase;
  *(_WORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_QWORD *)(v10 + 48) = 0LL;
  *(_DWORD *)(v10 + 24) = questPhase;
  this->fields.battleSetupinfo = (struct BattleSetupInfo_o *)v10;
  p_battleSetupinfo = &this->fields.battleSetupinfo;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.battleSetupinfo, v10, v16, v17);
  battleSetupinfo = this->fields.battleSetupinfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupinfo )
    goto LABEL_16;
  v19 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupinfo, 0LL);
  if ( !v19
    || (Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v19, (int32_t)Master_object, 0LL),
        !battleSetupinfo)
    || (battleSetupinfo->fields.eventId = (int)Master_object,
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_object, 0LL),
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0LL), (v20 = *p_battleSetupinfo) == 0LL) )
  {
LABEL_16:
    sub_1B4D1EC(Master_object, v9);
  }
  questId = this->fields.questId;
  v20->fields.restartWave = restartWaveNum;
  v20->fields.isScriptBeforeWarBoard = 0;
  v20->fields.originQuestId = questId;
}


void __fastcall WaveBattleSelectWaveConfirmDialog__add_CloseFunc(
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

  if ( (byte_49B6E52 & 1) == 0 )
  {
    sub_1B4CF90(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_49B6E52 = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveConfirmDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1B4D4AC(v8);
  WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveConfirmDialog__get_closeBtnObject(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_49B6E5C & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B6E5C = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B4D1EC(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(
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

  if ( (byte_49B6E53 & 1) == 0 )
  {
    sub_1B4CF90(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_49B6E53 = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v6 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleSelectWaveConfirmDialog_CloseDelegate_c *)v8->klass != WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v9 = sub_1B8724C(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1B4D4AC(v8);
  WaveBattleSelectWaveConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_199742C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19973E4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_49B6E5E & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, isDecide);
    byte_49B6E5E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isDecide,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___ctor(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___OnClickResumeSelectWave_b__0(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__1; // x22
  WaveBattleSelectWaveDialog_o *resumeNotSelectWaveDialog; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_49B6E5F & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *)sub_1B4CF90(
                                                                          &Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
                                                                          v4);
    byte_49B6E5F = 1;
  }
  _9__1 = v3->fields.__9__1;
  resumeNotSelectWaveDialog = v3->fields.resumeNotSelectWaveDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !resumeNotSelectWaveDialog )
    sub_1B4D1EC(this, isDecide);
  WaveBattleSelectWaveDialog__Close_32745160(resumeNotSelectWaveDialog, _9__1, method);
}


void __fastcall WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___OnClickResumeSelectWave_b__1(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  struct WaveBattleSelectWaveConfirmDialog_o *_4__this; // x0

  if ( (byte_49B6E60 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B6E60 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(go, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(0LL, v4);
  WaveBattleSelectWaveConfirmDialog__Open(
    _4__this,
    _4__this->fields.questId,
    _4__this->fields.questPhase,
    _4__this->fields.warId,
    _4__this->fields.restartWaveNumMax,
    _4__this->fields.CloseFunc,
    v5);
}