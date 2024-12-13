void __fastcall WaveBattleSelectWaveConfirmDialog___ctor(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3325E & 1) == 0 )
  {
    sub_1BD3458(&BaseDialog_TypeInfo, method);
    byte_4B3325E = 1;
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

  if ( (byte_4B3325B & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B3325B = 1;
  }
  WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(this, this->fields.restartWaveNumMax, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v5);
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

  if ( (byte_4B33257 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&Method_WaveBattleSelectWaveConfirmDialog_EndClose__, v3);
    byte_4B33257 = 1;
  }
  this->fields.state = 2;
  v4 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
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

  if ( (byte_4B33255 & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, method);
    byte_4B33255 = 1;
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
    sub_1BD36B4(titleLabel, method);
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

  if ( (byte_4B33258 & 1) == 0 )
  {
    sub_1BD3458(&Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__, method);
    byte_4B33258 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BD3470(Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BD343C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4B33259 & 1) == 0 )
  {
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, method);
    sub_1BD3458(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__, v3);
    byte_4B33259 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BD3470(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BD343C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B31F06 )
    {
      sub_1BD3458(&TerminalSceneComponent_TypeInfo, v6);
      byte_4B31F06 = 1;
    }
    v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v8->fields.boardGameTokenAction->klass;
    if ( !klass || (v8 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
      sub_1BD36B4(v8, v6);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  Il2CppObject *waveBattleSelectWaveDialogPrefab; // x21
  Il2CppObject *v23; // x0
  void **v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_GameObject_o *v31; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x8
  WaveBattleSelectWaveDialog_o *v41; // x21
  UserEventDeckEntity_o *deckEntity; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t restartWaveNumSelect; // w19
  int32_t v45; // w24
  int32_t *p_restartWaveNumSelect; // t2
  WaveBattleSelectWaveDialog_CloseDelegate_o *v47; // x25
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x7

  if ( (byte_4B3325A & 1) == 0 )
  {
    sub_1BD3458(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, method);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v3);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&TerminalSceneComponent_TypeInfo, v6);
    sub_1BD3458(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__, v7);
    sub_1BD3458(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo, v8);
    sub_1BD3458(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__, v9);
    byte_4B3325A = 1;
  }
  v10 = sub_1BD36A4(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_25;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v13, v14, v15, v16, v17, v18);
  if ( this->fields.state == 1 )
  {
    v19 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1BD3470(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    v20 = (System_Reflection_MethodBase_o *)sub_1BD343C(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
    waveBattleSelectWaveDialogPrefab = (Il2CppObject *)this->fields.waveBattleSelectWaveDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v23 = UnityEngine_Object__Instantiate_object_(
            waveBattleSelectWaveDialogPrefab,
            (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v10 + 24) = v23;
    v24 = (void **)(v10 + 24);
    sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)v23, v25, v26, v27, v28, v29, v30);
    v31 = *(UnityEngine_GameObject_o **)(v10 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v31, parent, 0LL);
      transform = (UnityEngine_Transform_o *)*v24;
      if ( *v24 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
        *(_QWORD *)(v10 + 16) = Component_object;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)Component_object, v34, v35, v36, v37, v38, v39);
        transform = *(UnityEngine_Transform_o **)(v10 + 16);
        if ( transform )
        {
          WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)transform, v12);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4B31F06 )
          {
            sub_1BD3458(&TerminalSceneComponent_TypeInfo, v12);
            byte_4B31F06 = 1;
          }
          transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          }
          v40 = **(_QWORD **)&transform[7].fields.m_CachedPtr;
          if ( v40 )
          {
            transform = *(UnityEngine_Transform_o **)(v40 + 256);
            if ( transform )
            {
              ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)transform, 0, 0LL);
              v41 = *(WaveBattleSelectWaveDialog_o **)(v10 + 16);
              deckEntity = this->fields.deckEntity;
              questRestrictionInfo = this->fields.questRestrictionInfo;
              p_restartWaveNumSelect = &this->fields.restartWaveNumSelect;
              restartWaveNumSelect = this->fields.restartWaveNumSelect;
              v45 = p_restartWaveNumSelect[1];
              v47 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1BD36A4(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
              WaveBattleSelectWaveDialog_CloseDelegate___ctor(
                v47,
                (Il2CppObject *)v10,
                Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
                v48);
              if ( v41 )
              {
                WaveBattleSelectWaveDialog__Open(
                  v41,
                  deckEntity,
                  questRestrictionInfo,
                  v45,
                  restartWaveNumSelect,
                  0,
                  v47,
                  v49);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BD36B4(transform, v12);
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
  __int64 v27; // x1
  void *Master_object; // x0
  __int64 v29; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o *v32; // x21
  Il2CppObject *v33; // x0
  UILabel_o *cancelLabel; // x20
  UILabel_o *resumeNotSelectWaveLabel; // x20
  UILabel_o *resumeSelectWaveLabel; // x20
  Il2CppObject *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct UserEventDeckEntity_o *v44; // x1
  int32_t eventId; // w20
  int32_t questId; // w21
  int32_t questPhase; // w22
  QuestRestrictionInfo_o *v48; // x23
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Action_o *v55; // x20
  int32_t v56; // [xsp+Ch] [xbp-54h] BYREF

  v56 = restartWave;
  if ( (byte_4B33256 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, *(_QWORD *)&qId);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestGroupMaster___, v14);
    sub_1BD3458(&Method_DataManager_GetMaster_StageMaster___, v15);
    sub_1BD3458(&Method_DataManager_GetMaster_UserEventDeckMaster___, v16);
    sub_1BD3458(&DataManager_TypeInfo, v17);
    sub_1BD3458(&LocalizationManager_TypeInfo, v18);
    sub_1BD3458(&NetworkManager_TypeInfo, v19);
    sub_1BD3458(&QuestRestrictionInfo_TypeInfo, v20);
    sub_1BD3458(&Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, v21);
    sub_1BD3458(&StringLiteral_15717/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, v22);
    sub_1BD3458(&StringLiteral_15714/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, v23);
    sub_1BD3458(&StringLiteral_15716/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, v24);
    sub_1BD3458(&StringLiteral_15713/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v25);
    sub_1BD3458(&StringLiteral_15715/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, v26);
    sub_1BD3458(&StringLiteral_1217/*"00"*/, v27);
    byte_4B33256 = 1;
  }
  this->fields.CloseFunc = func;
  sub_1BD33FC(
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_24;
  this->fields.eventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Master_object, this->fields.questId, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15717/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_15714/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  v33 = (Il2CppObject *)System_Int32__ToString_63330856((int32_t)&v56, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
  Master_object = System_String__Format(v32, v33, 0LL);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15713/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_24;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL);
  resumeNotSelectWaveLabel = this->fields.resumeNotSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15715/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeNotSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeNotSelectWaveLabel, (System_String_o *)Master_object, 0LL);
  resumeSelectWaveLabel = this->fields.resumeSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_15716/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeSelectWaveLabel, (System_String_o *)Master_object, 0LL);
  v37 = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B31D77 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, v29);
    byte_4B31D77 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v37 )
    goto LABEL_24;
  Master_object = UserEventDeckMaster__getDeckList(
                    (UserEventDeckMaster_o *)v37,
                    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                    this->fields.eventId,
                    this->fields.questId,
                    this->fields.questPhase,
                    0LL);
  if ( !Master_object )
    goto LABEL_24;
  if ( !*((_DWORD *)Master_object + 6) )
    sub_1BD36BC(Master_object, v29);
  v44 = (struct UserEventDeckEntity_o *)*((_QWORD *)Master_object + 4);
  this->fields.deckEntity = v44;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.deckEntity, (int64_t)v44, v38, v39, v40, v41, v42, v43);
  questId = this->fields.questId;
  eventId = this->fields.eventId;
  questPhase = this->fields.questPhase;
  v48 = (QuestRestrictionInfo_o *)sub_1BD36A4(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_41252344(v48, eventId, questId, questPhase, 0LL);
  this->fields.questRestrictionInfo = v48;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_StageMaster___);
  if ( !Master_object )
LABEL_24:
    sub_1BD36B4(Master_object, v29);
  this->fields.waveCount = StageMaster__GetWaveCount(
                             (StageMaster_o *)Master_object,
                             this->fields.questId,
                             this->fields.questPhase,
                             0LL);
  v55 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0LL);
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
  int64_t v10; // x22
  System_Int32_array *SelectableQuests; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t questPhase; // w8
  BattleSetupInfo_o **p_battleSetupinfo; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct BattleSetupInfo_o *battleSetupinfo; // x23
  QuestGroupMaster_o *v27; // x22
  BattleSetupInfo_o *v28; // x8
  int32_t questId; // w9
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B3325C & 1) == 0 )
  {
    sub_1BD3458(&BattleSetupInfo_TypeInfo, *(_QWORD *)&restartWaveNum);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestGroupMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6);
    sub_1BD3458(&DataManager_TypeInfo, v7);
    byte_4B3325C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0LL);
  v10 = sub_1BD36A4(BattleSetupInfo_TypeInfo);
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
  sub_1BD33FC((PartyOrganizationUtility_o *)(v10 + 112), (int64_t)SelectableQuests, v12, v13, v14, v15, v16, v17);
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.battleSetupinfo, v10, v20, v21, v22, v23, v24, v25);
  battleSetupinfo = this->fields.battleSetupinfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupinfo )
    goto LABEL_16;
  v27 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupinfo, 0LL);
  if ( !v27
    || (Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v27, (int32_t)Master_object, 0LL),
        !battleSetupinfo)
    || (battleSetupinfo->fields.eventId = (int)Master_object,
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_object, 0LL),
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0LL), (v28 = *p_battleSetupinfo) == 0LL) )
  {
LABEL_16:
    sub_1BD36B4(Master_object, v9);
  }
  questId = this->fields.questId;
  v28->fields.restartWave = restartWaveNum;
  v28->fields.isScriptBeforeWarBoard = 0;
  v28->fields.originQuestId = questId;
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

  if ( (byte_4B33253 & 1) == 0 )
  {
    sub_1BD3458(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4B33253 = 1;
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
    v9 = sub_1C0E948(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1BD3974(v8);
  WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveConfirmDialog__get_closeBtnObject(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4B3325D & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B3325D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BD36B4(0LL, v4);
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

  if ( (byte_4B33254 & 1) == 0 )
  {
    sub_1BD3458(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo, value);
    byte_4B33254 = 1;
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
    v9 = sub_1C0E948(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1BD3974(v8);
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
  sub_1BD33FC(
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
  if ( (sub_1BD3518(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BD36D0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BD3580(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A10684;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1063C;
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
  if ( (byte_4B3325F & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, isDecide);
    byte_4B3325F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BD340C(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BD3410(result, 0LL, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v3 = this;
  if ( (byte_4B33260 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, isDecide);
    this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *)sub_1BD3458(
                                                                          &Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
                                                                          v4);
    byte_4B33260 = 1;
  }
  _9__1 = v3->fields.__9__1;
  resumeNotSelectWaveDialog = v3->fields.resumeNotSelectWaveDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !resumeNotSelectWaveDialog )
    sub_1BD36B4(this, isDecide);
  WaveBattleSelectWaveDialog__Close_33094284(resumeNotSelectWaveDialog, _9__1, method);
}


void __fastcall WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___OnClickResumeSelectWave_b__1(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x6
  struct WaveBattleSelectWaveConfirmDialog_o *_4__this; // x0

  if ( (byte_4B33261 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Object_TypeInfo, method);
    byte_4B33261 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70278272(go, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BD36B4(0LL, v4);
  WaveBattleSelectWaveConfirmDialog__Open(
    _4__this,
    _4__this->fields.questId,
    _4__this->fields.questPhase,
    _4__this->fields.warId,
    _4__this->fields.restartWaveNumMax,
    _4__this->fields.CloseFunc,
    v5);
}