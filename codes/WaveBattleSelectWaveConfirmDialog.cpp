void __fastcall WaveBattleSelectWaveConfirmDialog___ctor(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7365 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7365 = 1;
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
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7362 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E7362 = 1;
  }
  WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(this, this->fields.restartWaveNumMax, v2);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  AvalonSceneManager__pushScene(Instance, 35, 1, (Il2CppObject *)this->fields.battleSetupinfo, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__Close(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E735E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_WaveBattleSelectWaveConfirmDialog_EndClose__, v5, v6, v7);
    byte_42E735E = 1;
  }
  this->fields.state = 2;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42E735C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E735C = 1;
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
    sub_B5D69C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickCancel(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x0

  if ( (byte_42E735F & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42E735F = 1;
  }
  if ( this->fields.state == 1 )
  {
    v5 = Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(CloseFunc, 0, 0LL);
  }
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickResumeNotSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x0

  if ( (byte_42E7360 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__, (_DWORD)method, v2, v3);
    byte_42E7360 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v5 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(CloseFunc, 0, 0LL);
    WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(this, v7);
  }
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickResumeSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
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
  __int64 v23; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x0
  struct UnityEngine_GameObject_o *waveBattleSelectWaveDialogPrefab; // x21
  System_Int32_array **v36; // x0
  UnityEngine_Transform_o **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UnityEngine_GameObject_o *v44; // x22
  UnityEngine_Component_o *parent; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  WaveBattleSelectWaveDialog_o *v53; // x21
  UserEventDeckEntity_o *deckEntity; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t waveCount; // w19
  int32_t restartWaveNumSelect; // w24
  WaveBattleSelectWaveDialog_CloseDelegate_o *v58; // x25
  const MethodInfo *v59; // x7

  if ( (byte_42E7361 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(
      &Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__, v20, v21, v22);
    byte_42E7361 = 1;
  }
  v23 = sub_B5D694(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
  WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___ctor(
    (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_18;
  *(_QWORD *)(v23 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
  if ( this->fields.state == 1 )
  {
    v32 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__ + 75) & 2) != 0 )
      v32 = (_QWORD *)sub_B5D5CC(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    v33 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v32, v32[3]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      WaveBattleSelectWaveConfirmDialog_CloseDelegate__Invoke(CloseFunc, 0, 0LL);
    waveBattleSelectWaveDialogPrefab = this->fields.waveBattleSelectWaveDialogPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v36 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                   (UnityEngine_UI_Dropdown_DropdownItem_o *)waveBattleSelectWaveDialogPrefab,
                                   (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v23 + 24) = v36;
    v37 = (UnityEngine_Transform_o **)(v23 + 24);
    sub_B5D560((BattleServantConfConponent_o *)(v23 + 24), v36, v38, v39, v40, v41, v42, v43);
    v44 = *(UnityEngine_GameObject_o **)(v23 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v44, parent, 0LL);
      transform = *v37;
      if ( *v37 )
      {
        Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)transform,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
        *(_QWORD *)(v23 + 16) = Component_srcLineSprite;
        sub_B5D560((BattleServantConfConponent_o *)(v23 + 16), Component_srcLineSprite, v47, v48, v49, v50, v51, v52);
        transform = *(UnityEngine_Transform_o **)(v23 + 16);
        if ( transform )
        {
          WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)transform, v25);
          v53 = *(WaveBattleSelectWaveDialog_o **)(v23 + 16);
          deckEntity = this->fields.deckEntity;
          questRestrictionInfo = this->fields.questRestrictionInfo;
          restartWaveNumSelect = this->fields.restartWaveNumSelect;
          waveCount = this->fields.waveCount;
          v58 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_B5D694(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
          WaveBattleSelectWaveDialog_CloseDelegate___ctor(
            v58,
            (Il2CppObject *)v23,
            Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
            0LL);
          if ( v53 )
          {
            WaveBattleSelectWaveDialog__Open(
              v53,
              deckEntity,
              questRestrictionInfo,
              waveCount,
              restartWaveNumSelect,
              0,
              v58,
              v59);
            return;
          }
        }
      }
    }
LABEL_18:
    sub_B5D69C(transform, v25);
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v57; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o *v60; // x21
  Il2CppObject *v61; // x0
  UILabel_o *cancelLabel; // x20
  UILabel_o *resumeNotSelectWaveLabel; // x20
  UILabel_o *resumeSelectWaveLabel; // x20
  UserEventDeckMaster_o *v65; // x20
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct UserEventDeckEntity_o *v72; // x1
  int32_t questId; // w21
  int32_t eventId; // w22
  int32_t questPhase; // w23
  QuestRestrictionInfo_o *v76; // x24
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Action_o *v83; // x20
  __int64 v84; // x0
  int32_t v85; // [xsp+Ch] [xbp-34h] BYREF

  v85 = restartWave;
  if ( (byte_42E735D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, qId, qPhase, *(_QWORD *)&wId);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_StageMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDeckMaster___, v20, v21, v22);
    sub_B5D5C4(&DataManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&NetworkManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&QuestRestrictionInfo_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_15538/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_15535/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_15537/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_15534/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_15536/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v53, v54, v55);
    byte_42E735D = 1;
  }
  this->fields.CloseFunc = func;
  sub_B5D560(
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
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
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
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15538/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_23;
  UILabel__set_text(titleLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  messageLabel = this->fields.messageLabel;
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_15535/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  v61 = (Il2CppObject *)System_Int32__ToString_39741776((int32_t)&v85, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)System_String__Format(v60, v61, 0LL);
  if ( !messageLabel )
    goto LABEL_23;
  UILabel__set_text(messageLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15534/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_23;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  resumeNotSelectWaveLabel = this->fields.resumeNotSelectWaveLabel;
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15536/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeNotSelectWaveLabel )
    goto LABEL_23;
  UILabel__set_text(resumeNotSelectWaveLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  resumeSelectWaveLabel = this->fields.resumeSelectWaveLabel;
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15537/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeSelectWaveLabel )
    goto LABEL_23;
  UILabel__set_text(resumeSelectWaveLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  v65 = (UserEventDeckMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
  if ( !v65 )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (int64_t)UserEventDeckMaster__getDeckList(
                                              v65,
                                              Master_WarQuestSelectionMaster,
                                              this->fields.eventId,
                                              this->fields.questId,
                                              this->fields.questPhase,
                                              0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
  {
    v84 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v84, 0LL);
  }
  v72 = *(struct UserEventDeckEntity_o **)(Master_WarQuestSelectionMaster + 32);
  this->fields.deckEntity = v72;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.deckEntity,
    (System_Int32_array **)v72,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  questId = this->fields.questId;
  eventId = this->fields.eventId;
  questPhase = this->fields.questPhase;
  v76 = (QuestRestrictionInfo_o *)sub_B5D694(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_34244212(v76, eventId, questId, questPhase, 0LL);
  this->fields.questRestrictionInfo = v76;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_StageMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B5D69C(Master_WarQuestSelectionMaster, v57);
  this->fields.waveCount = StageMaster__GetWaveCount(
                             (StageMaster_o *)Master_WarQuestSelectionMaster,
                             this->fields.questId,
                             this->fields.questPhase,
                             0LL);
  v83 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v83, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v83, 0, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t restartWaveNum,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  __int64 v17; // x22
  System_Int32_array **SelectableQuests; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int32_t questPhase; // w8
  BattleSetupInfo_o **p_battleSetupinfo; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct BattleSetupInfo_o *battleSetupinfo; // x23
  QuestGroupMaster_o *v34; // x22
  struct BattleSetupInfo_o *v35; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7363 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, restartWaveNum, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestGroupMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    byte_42E7363 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  QuestPhaseMaster__TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    this->fields.questId,
    this->fields.questPhase,
    0LL);
  v17 = sub_B5D694(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_19;
  *(_DWORD *)(v17 + 16) = this->fields.warId;
  *(_DWORD *)(v17 + 20) = this->fields.questId;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_19;
  SelectableQuests = (System_Int32_array **)QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v17 + 112) = SelectableQuests;
  sub_B5D560((BattleServantConfConponent_o *)(v17 + 112), SelectableQuests, v19, v20, v21, v22, v23, v24);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_19;
  *(_DWORD *)(v17 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, this->fields.questId, 0, 0LL);
  *(_DWORD *)(v17 + 124) = 0;
  questPhase = this->fields.questPhase;
  *(_WORD *)(v17 + 72) = 0;
  *(_QWORD *)(v17 + 40) = 0LL;
  *(_QWORD *)(v17 + 48) = 0LL;
  *(_DWORD *)(v17 + 24) = questPhase;
  this->fields.battleSetupinfo = (struct BattleSetupInfo_o *)v17;
  p_battleSetupinfo = &this->fields.battleSetupinfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleSetupinfo,
    (System_Int32_array **)v17,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  battleSetupinfo = this->fields.battleSetupinfo;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupinfo )
    goto LABEL_19;
  v34 = (QuestGroupMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupinfo, 0LL);
  if ( !v34 )
    goto LABEL_19;
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(
                                                           v34,
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
    || ((*p_battleSetupinfo)->fields.originQuestId = this->fields.questId, (v35 = this->fields.battleSetupinfo) == 0LL)
    || (v35->fields.isScriptBeforeWarBoard = 0, !*p_battleSetupinfo) )
  {
LABEL_19:
    sub_B5D69C(Master_WarQuestSelectionMaster, v16);
  }
  (*p_battleSetupinfo)->fields.restartWave = restartWaveNum;
}


void __fastcall WaveBattleSelectWaveConfirmDialog__add_CloseFunc(
        WaveBattleSelectWaveConfirmDialog_o *this,
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleSelectWaveConfirmDialog_o *v12; // x0
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E735A & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E735A = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v7 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleSelectWaveConfirmDialog_CloseDelegate_c *)v9->klass != WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_CloseFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleSelectWaveConfirmDialog_o *)sub_B5D990(v9);
  WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(v12, v13, v14);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveConfirmDialog__get_closeBtnObject(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E7364 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7364 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(
        WaveBattleSelectWaveConfirmDialog_o *this,
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleSelectWaveConfirmDialog_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E735B & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E735B = 1;
  }
  CloseFunc = this->fields.CloseFunc;
  p_CloseFunc = &this->fields.CloseFunc;
  v7 = (System_Delegate_o *)CloseFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleSelectWaveConfirmDialog_CloseDelegate_c *)v9->klass != WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_CloseFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleSelectWaveConfirmDialog_o *)sub_B5D990(v9);
  WaveBattleSelectWaveConfirmDialog__Awake(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  if ( (byte_42E5FFA & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5FFA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *monitor; // x22
  WaveBattleSelectWaveDialog_o *klass; // x20

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5FF8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *)sub_B5D5C4(
                                                                          &Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
                                                                          v5,
                                                                          v6,
                                                                          v7);
    byte_42E5FF8 = 1;
  }
  monitor = (System_Action_o *)v4[2].monitor;
  klass = (WaveBattleSelectWaveDialog_o *)v4[1].klass;
  if ( !monitor )
  {
    monitor = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      monitor,
      v4,
      Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
      0LL);
    v4[2].monitor = monitor;
    sub_B5D560(&v4[2].monitor);
  }
  if ( !klass )
    sub_B5D69C(this, isDecide);
  WaveBattleSelectWaveDialog__Close_22707844(klass, monitor, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___OnClickResumeSelectWave_b__1(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *go; // x20
  __int64 v6; // x1
  struct WaveBattleSelectWaveConfirmDialog_o *_4__this; // x0

  if ( (byte_42E5FF9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5FF9 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(go, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, v6);
  WaveBattleSelectWaveConfirmDialog__Open(
    _4__this,
    _4__this->fields.questId,
    _4__this->fields.questPhase,
    _4__this->fields.warId,
    _4__this->fields.restartWaveNumMax,
    _4__this->fields.CloseFunc,
    0LL);
}