void __fastcall WaveBattleSelectWaveConfirmDialog___ctor(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD8582 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD8582 = 1;
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

  if ( (byte_4BD857F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD857F = 1;
  }
  WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(this, this->fields.restartWaveNumMax, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
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
  System_Action_o *v3; // x20

  if ( (byte_4BD857B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_WaveBattleSelectWaveConfirmDialog_EndClose__);
    byte_4BD857B = 1;
  }
  this->fields.state = 2;
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
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

  if ( (byte_4BD8579 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8579 = 1;
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
    sub_1C22094(titleLabel, method);
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

  if ( (byte_4BD857C & 1) == 0 )
  {
    sub_1C21E38(&Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    byte_4BD857C = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  ScrTerminalListTop_o *v7; // x0
  QuestRewardTokenAction_c *klass; // x8
  const MethodInfo *v9; // x1

  if ( (byte_4BD857D & 1) == 0 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    byte_4BD857D = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v7 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v7->fields.boardGameTokenAction->klass;
    if ( !klass || (v7 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
      sub_1C22094(v7, v5);
    ScrTerminalListTop__SetBackMaskActive(v7, 0, 0LL);
    WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(this, v9);
  }
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickResumeSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  Il2CppObject *waveBattleSelectWaveDialogPrefab; // x21
  Il2CppObject *v16; // x0
  void **v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x8
  WaveBattleSelectWaveDialog_o *v34; // x21
  UserEventDeckEntity_o *deckEntity; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t restartWaveNumSelect; // w19
  int32_t v38; // w24
  int32_t *p_restartWaveNumSelect; // t2
  WaveBattleSelectWaveDialog_CloseDelegate_o *v40; // x25
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x7

  if ( (byte_4BD857E & 1) == 0 )
  {
    sub_1C21E38(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__);
    sub_1C21E38(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
    sub_1C21E38(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    byte_4BD857E = 1;
  }
  v3 = sub_1C22084(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 1 )
  {
    v12 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C21E50(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
    waveBattleSelectWaveDialogPrefab = (Il2CppObject *)this->fields.waveBattleSelectWaveDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__Instantiate_object_(
            waveBattleSelectWaveDialogPrefab,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v16;
    v17 = (void **)(v3 + 24);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v16, v18, v19, v20, v21, v22, v23);
    v24 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v24, parent, 0LL);
      transform = (UnityEngine_Transform_o *)*v17;
      if ( *v17 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)Component_object, v27, v28, v29, v30, v31, v32);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)transform, v5);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4BD7183 )
          {
            sub_1C21E38(&TerminalSceneComponent_TypeInfo);
            byte_4BD7183 = 1;
          }
          transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          }
          v33 = **(_QWORD **)&transform[7].fields.m_CachedPtr;
          if ( v33 )
          {
            transform = *(UnityEngine_Transform_o **)(v33 + 256);
            if ( transform )
            {
              ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)transform, 0, 0LL);
              v34 = *(WaveBattleSelectWaveDialog_o **)(v3 + 16);
              deckEntity = this->fields.deckEntity;
              questRestrictionInfo = this->fields.questRestrictionInfo;
              p_restartWaveNumSelect = &this->fields.restartWaveNumSelect;
              restartWaveNumSelect = this->fields.restartWaveNumSelect;
              v38 = p_restartWaveNumSelect[1];
              v40 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1C22084(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
              WaveBattleSelectWaveDialog_CloseDelegate___ctor(
                v40,
                (Il2CppObject *)v3,
                Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
                v41);
              if ( v34 )
              {
                WaveBattleSelectWaveDialog__Open(
                  v34,
                  deckEntity,
                  questRestrictionInfo,
                  v38,
                  restartWaveNumSelect,
                  0,
                  v40,
                  v42);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1C22094(transform, v5);
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
  PartyListViewItem_o *v7; // x7
  void *Master_object; // x0
  __int64 v15; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0
  UILabel_o *cancelLabel; // x20
  UILabel_o *resumeNotSelectWaveLabel; // x20
  UILabel_o *resumeSelectWaveLabel; // x20
  Il2CppObject *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct UserEventDeckEntity_o *v30; // x1
  int32_t eventId; // w20
  int32_t questId; // w21
  int32_t questPhase; // w22
  QuestRestrictionInfo_o *v34; // x23
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Action_o *v41; // x20
  int32_t v42; // [xsp+Ch] [xbp-54h] BYREF

  v42 = restartWave;
  if ( (byte_4BD857A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_StageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&QuestRestrictionInfo_TypeInfo);
    sub_1C21E38(&Method_WaveBattleSelectWaveConfirmDialog_EndOpen__);
    sub_1C21E38(&StringLiteral_15799/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_15796/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_15798/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/);
    sub_1C21E38(&StringLiteral_15795/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/);
    sub_1C21E38(&StringLiteral_15797/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/);
    sub_1C21E38(&StringLiteral_1220/*"00"*/);
    byte_4BD857A = 1;
  }
  this->fields.CloseFunc = func;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.CloseFunc,
    (int64_t)func,
    *(int64_t *)&qPhase,
    wId,
    *(System_String_o **)&restartWave,
    (BattleSetupInfo_o *)func,
    (FollowerInfo_o *)method,
    v7);
  this->fields.questId = qId;
  this->fields.questPhase = qPhase;
  this->fields.warId = wId;
  this->fields.restartWaveNumMax = restartWave;
  this->fields.restartWaveNumSelect = restartWave;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_24;
  this->fields.eventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Master_object, this->fields.questId, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15799/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15796/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  v19 = (Il2CppObject *)System_Int32__ToString_63921084((int32_t)&v42, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL);
  Master_object = System_String__Format(v18, v19, 0LL);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15795/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_24;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL);
  resumeNotSelectWaveLabel = this->fields.resumeNotSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15797/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeNotSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeNotSelectWaveLabel, (System_String_o *)Master_object, 0LL);
  resumeSelectWaveLabel = this->fields.resumeSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15798/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeSelectWaveLabel, (System_String_o *)Master_object, 0LL);
  v23 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v23 )
    goto LABEL_24;
  Master_object = UserEventDeckMaster__getDeckList(
                    (UserEventDeckMaster_o *)v23,
                    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                    this->fields.eventId,
                    this->fields.questId,
                    this->fields.questPhase,
                    0LL);
  if ( !Master_object )
    goto LABEL_24;
  if ( !*((_DWORD *)Master_object + 6) )
    sub_1C2209C(Master_object, v15);
  v30 = (struct UserEventDeckEntity_o *)*((_QWORD *)Master_object + 4);
  this->fields.deckEntity = v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.deckEntity, (int64_t)v30, v24, v25, v26, v27, v28, v29);
  questId = this->fields.questId;
  eventId = this->fields.eventId;
  questPhase = this->fields.questPhase;
  v34 = (QuestRestrictionInfo_o *)sub_1C22084(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_41696616(v34, eventId, questId, questPhase, 0LL);
  this->fields.questRestrictionInfo = v34;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_StageMaster___);
  if ( !Master_object )
LABEL_24:
    sub_1C22094(Master_object, v15);
  this->fields.waveCount = StageMaster__GetWaveCount(
                             (StageMaster_o *)Master_object,
                             this->fields.questId,
                             this->fields.questPhase,
                             0LL);
  v41 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t restartWaveNum,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v6; // x1
  int64_t v7; // x22
  System_Int32_array *SelectableQuests; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int32_t questPhase; // w8
  BattleSetupInfo_o **p_battleSetupinfo; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct BattleSetupInfo_o *battleSetupinfo; // x23
  QuestGroupMaster_o *v24; // x22
  BattleSetupInfo_o *v25; // x8
  int32_t questId; // w9
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BD8580 & 1) == 0 )
  {
    sub_1C21E38(&BattleSetupInfo_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD8580 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0LL);
  v7 = sub_1C22084(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  *(_DWORD *)(v7 + 16) = this->fields.warId;
  *(_DWORD *)(v7 + 20) = this->fields.questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v7 + 112) = SelectableQuests;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 112), (int64_t)SelectableQuests, v9, v10, v11, v12, v13, v14);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  *(_DWORD *)(v7 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, this->fields.questId, 0, 0LL);
  *(_DWORD *)(v7 + 124) = 0;
  questPhase = this->fields.questPhase;
  *(_WORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_DWORD *)(v7 + 24) = questPhase;
  this->fields.battleSetupinfo = (struct BattleSetupInfo_o *)v7;
  p_battleSetupinfo = &this->fields.battleSetupinfo;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.battleSetupinfo, v7, v17, v18, v19, v20, v21, v22);
  battleSetupinfo = this->fields.battleSetupinfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupinfo )
    goto LABEL_16;
  v24 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupinfo, 0LL);
  if ( !v24
    || (Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v24, (int32_t)Master_object, 0LL),
        !battleSetupinfo)
    || (battleSetupinfo->fields.eventId = (int)Master_object,
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_object, 0LL),
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0LL), (v25 = *p_battleSetupinfo) == 0LL) )
  {
LABEL_16:
    sub_1C22094(Master_object, v6);
  }
  questId = this->fields.questId;
  v25->fields.restartWave = restartWaveNum;
  v25->fields.isScriptBeforeWarBoard = 0;
  v25->fields.originQuestId = questId;
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

  if ( (byte_4BD8577 & 1) == 0 )
  {
    sub_1C21E38(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo);
    byte_4BD8577 = 1;
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
    v9 = sub_1C5D328(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1C22354(v8);
  WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveConfirmDialog__get_closeBtnObject(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4BD8581 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8581 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BD8578 & 1) == 0 )
  {
    sub_1C21E38(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo);
    byte_4BD8578 = 1;
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
    v9 = sub_1C5D328(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1C22354(v8);
  WaveBattleSelectWaveConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
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
  sub_1C21DDC(
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
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5E110;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5E0C8;
}


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
  if ( (byte_4BD8583 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BD8583 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  System_Action_o *_9__1; // x22
  WaveBattleSelectWaveDialog_o *resumeNotSelectWaveDialog; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  v3 = this;
  if ( (byte_4BD8584 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *)sub_1C21E38(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__);
    byte_4BD8584 = 1;
  }
  _9__1 = v3->fields.__9__1;
  resumeNotSelectWaveDialog = v3->fields.resumeNotSelectWaveDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !resumeNotSelectWaveDialog )
    sub_1C22094(this, isDecide);
  WaveBattleSelectWaveDialog__Close_33486568(resumeNotSelectWaveDialog, _9__1, method);
}


void __fastcall WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___OnClickResumeSelectWave_b__1(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  struct WaveBattleSelectWaveConfirmDialog_o *_4__this; // x0

  if ( (byte_4BD8585 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8585 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(go, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, v4);
  WaveBattleSelectWaveConfirmDialog__Open(
    _4__this,
    _4__this->fields.questId,
    _4__this->fields.questPhase,
    _4__this->fields.warId,
    _4__this->fields.restartWaveNumMax,
    _4__this->fields.CloseFunc,
    v5);
}