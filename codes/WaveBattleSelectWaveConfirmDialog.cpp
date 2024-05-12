void __fastcall WaveBattleSelectWaveConfirmDialog___ctor(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_43894CF & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_43894CF = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_43894CC & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_43894CC = 1;
  }
  WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(this, this->fields.restartWaveNumMax, v2);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  AvalonSceneManager__pushScene(Instance, 35, 1, (Il2CppObject *)this->fields.battleSetupinfo, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__Close(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_43894C8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_WaveBattleSelectWaveConfirmDialog_EndClose__);
    byte_43894C8 = 1;
  }
  this->fields.state = 2;
  v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
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

  if ( (byte_43894C6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43894C6 = 1;
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
    sub_B7769C(titleLabel, method);
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
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x0

  if ( (byte_43894C9 & 1) == 0 )
  {
    sub_B775C4(&Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    byte_43894C9 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(CloseFunc, 0, 0LL);
  }
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickResumeNotSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x0

  if ( (byte_43894CA & 1) == 0 )
  {
    sub_B775C4(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    byte_43894CA = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(CloseFunc, 0, 0LL);
    WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(this, v5);
  }
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickResumeSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x0
  struct UnityEngine_GameObject_o *waveBattleSelectWaveDialogPrefab; // x21
  System_Int32_array **v16; // x0
  UnityEngine_Transform_o **v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_Component_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WaveBattleSelectWaveDialog_o *v33; // x21
  UserEventDeckEntity_o *deckEntity; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t waveCount; // w19
  int32_t restartWaveNumSelect; // w24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v38; // x25
  const MethodInfo *v39; // x7

  if ( (byte_43894CB & 1) == 0 )
  {
    sub_B775C4(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__);
    sub_B775C4(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
    sub_B775C4(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    byte_43894CB = 1;
  }
  v3 = sub_B77694(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
  WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___ctor(
    (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 1 )
  {
    v12 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__ + 75) & 2) != 0 )
      v12 = (_QWORD *)sub_B775CC(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    v13 = (System_Reflection_MethodBase_o *)sub_B775A8(v12, v12[3]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(CloseFunc, 0, 0LL);
    waveBattleSelectWaveDialogPrefab = this->fields.waveBattleSelectWaveDialogPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)waveBattleSelectWaveDialogPrefab,
                                   (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v16;
    v17 = (UnityEngine_Transform_o **)(v3 + 24);
    sub_B77560((BattleServantConfConponent_o *)(v3 + 24), v16, v18, v19, v20, v21, v22, v23);
    v24 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v24, parent, 0LL);
      transform = *v17;
      if ( *v17 )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
        *(_QWORD *)(v3 + 16) = Component_srcLineSprite;
        sub_B77560((BattleServantConfConponent_o *)(v3 + 16), Component_srcLineSprite, v27, v28, v29, v30, v31, v32);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)transform, v5);
          v33 = *(WaveBattleSelectWaveDialog_o **)(v3 + 16);
          deckEntity = this->fields.deckEntity;
          questRestrictionInfo = this->fields.questRestrictionInfo;
          restartWaveNumSelect = this->fields.restartWaveNumSelect;
          waveCount = this->fields.waveCount;
          v38 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_B77694(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
          WaveBattleSelectWaveDialog_CloseDelegate___ctor(
            v38,
            (Il2CppObject *)v3,
            Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
            0LL);
          if ( v33 )
          {
            WaveBattleSelectWaveDialog__Open(
              v33,
              deckEntity,
              questRestrictionInfo,
              waveCount,
              restartWaveNumSelect,
              0,
              v38,
              v39);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B7769C(transform, v5);
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
  System_Int32_array *v7; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0
  UILabel_o *cancelLabel; // x20
  UILabel_o *resumeNotSelectWaveLabel; // x20
  UILabel_o *resumeSelectWaveLabel; // x20
  UserEventDeckMaster_o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UserEventDeckEntity_o *v30; // x1
  int32_t questId; // w21
  int32_t eventId; // w22
  int32_t questPhase; // w23
  QuestRestrictionInfo_o *v34; // x24
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Action_o *v41; // x20
  __int64 v42; // x0
  int32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  v43 = restartWave;
  if ( (byte_43894C7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_StageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&QuestRestrictionInfo_TypeInfo);
    sub_B775C4(&Method_WaveBattleSelectWaveConfirmDialog_EndOpen__);
    sub_B775C4(&StringLiteral_15639/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/);
    sub_B775C4(&StringLiteral_15636/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15638/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/);
    sub_B775C4(&StringLiteral_15635/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/);
    sub_B775C4(&StringLiteral_15637/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/);
    sub_B775C4(&StringLiteral_989/*"00"*/);
    byte_43894C7 = 1;
  }
  this->fields.CloseFunc = func;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.CloseFunc,
    (System_Int32_array **)func,
    *(System_String_array ***)&qPhase,
    *(System_String_array ***)&wId,
    *(System_Boolean_array ***)&restartWave,
    (System_Int32_array **)func,
    (System_Int32_array *)method,
    v7);
  this->fields.questId = qId;
  this->fields.questPhase = qPhase;
  this->fields.warId = wId;
  this->fields.restartWaveNumMax = restartWave;
  this->fields.restartWaveNumSelect = restartWave;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  this->fields.eventId = QuestGroupMaster__GetEventId(
                           (QuestGroupMaster_o *)Master_WarQuestSelectionMaster,
                           this->fields.questId,
                           0LL);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15639/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  messageLabel = this->fields.messageLabel;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15636/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  v19 = (Il2CppObject *)System_Int32__ToString_39547236((int32_t)&v43, (System_String_o *)StringLiteral_989/*"00"*/, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)System_String__Format(v18, v19, 0LL);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15635/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_23;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  resumeNotSelectWaveLabel = this->fields.resumeNotSelectWaveLabel;
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15637/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeNotSelectWaveLabel )
    goto LABEL_23;
  UILabel__set_text(resumeNotSelectWaveLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  resumeSelectWaveLabel = this->fields.resumeSelectWaveLabel;
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15638/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeSelectWaveLabel )
    goto LABEL_23;
  UILabel__set_text(resumeSelectWaveLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v23 = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
  if ( !v23 )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (int64_t)UserEventDeckMaster__getDeckList(
                                              v23,
                                              Master_WarQuestSelectionMaster,
                                              this->fields.eventId,
                                              this->fields.questId,
                                              this->fields.questPhase,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
  {
    v42 = sub_B776C8(Master_WarQuestSelectionMaster);
    sub_B77668(v42, 0LL);
  }
  v30 = *(struct UserEventDeckEntity_o **)(Master_WarQuestSelectionMaster + 32);
  this->fields.deckEntity = v30;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.deckEntity,
    (System_Int32_array **)v30,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  questId = this->fields.questId;
  eventId = this->fields.eventId;
  questPhase = this->fields.questPhase;
  v34 = (QuestRestrictionInfo_o *)sub_B77694(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_34440512(v34, eventId, questId, questPhase, 0LL);
  this->fields.questRestrictionInfo = v34;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_StageMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B7769C(Master_WarQuestSelectionMaster, v15);
  this->fields.waveCount = StageMaster__GetWaveCount(
                             (StageMaster_o *)Master_WarQuestSelectionMaster,
                             this->fields.questId,
                             this->fields.questPhase,
                             0LL);
  v41 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v41, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t restartWaveNum,
        const MethodInfo *method)
{
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  __int64 v7; // x22
  System_Int32_array **SelectableQuests; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t questPhase; // w8
  BattleSetupInfo_o **p_battleSetupinfo; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BattleSetupInfo_o *battleSetupinfo; // x23
  QuestGroupMaster_o *v24; // x22
  struct BattleSetupInfo_o *v25; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43894CD & 1) == 0 )
  {
    sub_B775C4(&BattleSetupInfo_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_43894CD = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  QuestPhaseMaster__TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    this->fields.questId,
    this->fields.questPhase,
    0LL);
  v7 = sub_B77694(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_19;
  *(_DWORD *)(v7 + 16) = this->fields.warId;
  *(_DWORD *)(v7 + 20) = this->fields.questId;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_19;
  SelectableQuests = (System_Int32_array **)QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v7 + 112) = SelectableQuests;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 112), SelectableQuests, v9, v10, v11, v12, v13, v14);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_19;
  *(_DWORD *)(v7 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, this->fields.questId, 0, 0LL);
  *(_DWORD *)(v7 + 124) = 0;
  questPhase = this->fields.questPhase;
  *(_WORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 48) = 0LL;
  *(_DWORD *)(v7 + 24) = questPhase;
  this->fields.battleSetupinfo = (struct BattleSetupInfo_o *)v7;
  p_battleSetupinfo = &this->fields.battleSetupinfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.battleSetupinfo,
    (System_Int32_array **)v7,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  battleSetupinfo = this->fields.battleSetupinfo;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupinfo )
    goto LABEL_19;
  v24 = (QuestGroupMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupinfo, 0LL);
  if ( !v24 )
    goto LABEL_19;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(
                                                           v24,
                                                           (int32_t)Master_WarQuestSelectionMaster,
                                                           0LL);
  if ( !battleSetupinfo )
    goto LABEL_19;
  battleSetupinfo->fields.eventId = (int)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)*p_battleSetupinfo;
  if ( !*p_battleSetupinfo
    || (BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_WarQuestSelectionMaster, 1, 0LL), !*p_battleSetupinfo)
    || ((*p_battleSetupinfo)->fields.originQuestId = this->fields.questId, (v25 = this->fields.battleSetupinfo) == 0LL)
    || (v25->fields.isScriptBeforeWarBoard = 0, !*p_battleSetupinfo) )
  {
LABEL_19:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  }
  (*p_battleSetupinfo)->fields.restartWave = restartWaveNum;
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

  if ( (byte_43894C4 & 1) == 0 )
  {
    sub_B775C4(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo);
    byte_43894C4 = 1;
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
    v9 = sub_B6BFDC(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_B77990(v8);
  WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveConfirmDialog__get_closeBtnObject(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_43894CE & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43894CE = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B7769C(0LL, v4);
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

  if ( (byte_43894C5 & 1) == 0 )
  {
    sub_B775C4(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo);
    byte_43894C5 = 1;
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
    v9 = sub_B6BFDC(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_B77990(v8);
  WaveBattleSelectWaveConfirmDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_43892AE & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43892AE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (WaveBattleSelectWaveConfirmDialog_CloseDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v3 = this;
  if ( (byte_43892AC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *)sub_B775C4(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__);
    byte_43892AC = 1;
  }
  _9__1 = v3->fields.__9__1;
  resumeNotSelectWaveDialog = v3->fields.resumeNotSelectWaveDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v3->fields.__9__1,
      (System_Int32_array **)_9__1,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( !resumeNotSelectWaveDialog )
    sub_B7769C(this, isDecide);
  WaveBattleSelectWaveDialog__Close_21901880(resumeNotSelectWaveDialog, _9__1, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___OnClickResumeSelectWave_b__1(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *go; // x20
  __int64 v4; // x1
  struct WaveBattleSelectWaveConfirmDialog_o *_4__this; // x0

  if ( (byte_43892AD & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43892AD = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(go, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, v4);
  WaveBattleSelectWaveConfirmDialog__Open(
    _4__this,
    _4__this->fields.questId,
    _4__this->fields.questPhase,
    _4__this->fields.warId,
    _4__this->fields.restartWaveNumMax,
    _4__this->fields.CloseFunc,
    0LL);
}