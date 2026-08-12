void WaveBattleSelectWaveConfirmDialog___ctor(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C3B7 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C3B7 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
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
  __int64 v5; // x1

  if ( (byte_596C3B4 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596C3B4 = 1;
  }
  WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(this, this->fields.restartWaveNumMax, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  AvalonSceneManager__pushScene(
    (AvalonSceneManager_o *)Instance,
    35,
    1,
    (Il2CppObject *)this->fields.battleSetupinfo,
    0);
}


void WaveBattleSelectWaveConfirmDialog__Close(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_596C3B0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveConfirmDialog_EndClose__);
    byte_596C3B0 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 2;
  v4 = (System_Action_o *)sub_2213CCC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void WaveBattleSelectWaveConfirmDialog__EndOpen(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void WaveBattleSelectWaveConfirmDialog__Init(WaveBattleSelectWaveConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596C3AE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C3AE = 1;
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
    sub_2213CDC(titleLabel, method);
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

  if ( (byte_596C3B1 & 1) == 0 )
  {
    sub_2213A60(&Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    byte_596C3B1 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  __int64 v5; // x1
  __int64 v6; // x2
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  ScrTerminalListTop_o *v8; // x0
  System_Collections_Generic_List_GameObject__c *klass; // x8
  const MethodInfo *v10; // x1

  if ( (byte_596C3B2 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    byte_596C3B2 = 1;
  }
  if ( this->fields.state == 1 )
  {
    v3 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CloseFunc->fields.invoke_impl)(
        CloseFunc->fields.method_code,
        0,
        CloseFunc->fields.method);
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v6);
      v8 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v8->fields.itemGetEffectInstances->klass;
    if ( !klass || (v8 = *(ScrTerminalListTop_o **)&klass->_2.element_size) == 0 )
      sub_2213CDC(v8, v5);
    ScrTerminalListTop__SetBackMaskActive(v8, 0, 0);
    WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(this, v10);
  }
}


void WaveBattleSelectWaveConfirmDialog__OnClickResumeSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  Il2CppObject *waveBattleSelectWaveDialogPrefab; // x21
  Il2CppObject *v18; // x0
  void **v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x2
  __int64 v36; // x8
  UserEventDeckEntity_o *deckEntity; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t restartWaveNumSelect; // w19
  int32_t v40; // w24
  int32_t *p_restartWaveNumSelect; // t2
  WaveBattleSelectWaveDialog_o *v42; // x21
  WaveBattleSelectWaveDialog_CloseDelegate_o *v43; // x25
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x7

  if ( (byte_596C3B3 & 1) == 0 )
  {
    sub_2213A60(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__);
    sub_2213A60(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    byte_596C3B3 = 1;
  }
  v3 = sub_2213CCC(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_25;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.state == 1 )
  {
    v12 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_2213A78(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    v13 = (System_Reflection_MethodBase_o *)sub_2213A44(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))CloseFunc->fields.invoke_impl)(
        CloseFunc->fields.method_code,
        0,
        CloseFunc->fields.method);
    waveBattleSelectWaveDialogPrefab = (Il2CppObject *)this->fields.waveBattleSelectWaveDialogPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
    v18 = UnityEngine_Object__Instantiate_object_(
            waveBattleSelectWaveDialogPrefab,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v3 + 24) = v18;
    v19 = (void **)(v3 + 24);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v18, v20, v21, v22, v23, v24, v25);
    v26 = *(UnityEngine_GameObject_o **)(v3 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0);
      GameObjectExtensions__SafeSetParent(v26, parent, 0);
      transform = (UnityEngine_Transform_o *)*v19;
      if ( *v19 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
        *(_QWORD *)(v3 + 16) = Component_object;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v3 + 16),
          (int32_t)Component_object,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        transform = *(UnityEngine_Transform_o **)(v3 + 16);
        if ( transform )
        {
          WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)transform, v5);
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v35);
          if ( !byte_596A090 )
          {
            sub_2213A60(&TerminalSceneComponent_TypeInfo);
            byte_596A090 = 1;
          }
          transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v35);
            transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          }
          v36 = *(_QWORD *)transform[7].fields.m_CachedPtr;
          if ( v36 )
          {
            transform = *(UnityEngine_Transform_o **)(v36 + 256);
            if ( transform )
            {
              ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)transform, 0, 0);
              deckEntity = this->fields.deckEntity;
              questRestrictionInfo = this->fields.questRestrictionInfo;
              p_restartWaveNumSelect = &this->fields.restartWaveNumSelect;
              restartWaveNumSelect = this->fields.restartWaveNumSelect;
              v40 = p_restartWaveNumSelect[1];
              v42 = *(WaveBattleSelectWaveDialog_o **)(v3 + 16);
              v43 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_2213CCC(WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo);
              WaveBattleSelectWaveDialog_CloseDelegate___ctor(
                v43,
                (Il2CppObject *)v3,
                Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
                v44);
              if ( v42 )
              {
                WaveBattleSelectWaveDialog__Open(
                  v42,
                  deckEntity,
                  questRestrictionInfo,
                  v40,
                  restartWaveNumSelect,
                  0,
                  v43,
                  v45);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_2213CDC(transform, v5);
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
  bool v7; // w7
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_c *v16; // x0
  int v17; // w8
  void *Master_object; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t EventId; // w8
  LocalizationManager_c *v23; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x0
  UILabel_o *cancelLabel; // x20
  UILabel_o *resumeNotSelectWaveLabel; // x20
  UILabel_o *resumeSelectWaveLabel; // x20
  __int64 v31; // x2
  Il2CppObject *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct UserEventDeckEntity_o *v39; // x1
  int32_t v40; // w20
  int32_t questId; // w21
  int32_t questPhase; // w22
  QuestRestrictionInfo_o *v43; // x23
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t WaveCount; // w0
  System_Action_c *v51; // x8
  System_Action_o *v52; // x20
  int32_t v53; // [xsp+Ch] [xbp-54h] BYREF

  v53 = restartWave;
  if ( (byte_596C3AF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_StageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventDeckMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&QuestRestrictionInfo_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveConfirmDialog_EndOpen__);
    sub_2213A60(&StringLiteral_16138/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_16135/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16137/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/);
    sub_2213A60(&StringLiteral_16134/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/);
    sub_2213A60(&StringLiteral_16136/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/);
    sub_2213A60(&StringLiteral_1205/*"00"*/);
    byte_596C3AF = 1;
  }
  this->fields.CloseFunc = func;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.CloseFunc,
    (int32_t)func,
    *(System_String_o **)&qPhase,
    *(System_String_o **)&wId,
    restartWave,
    (int32_t)func,
    (bool)method,
    v7);
  v16 = DataManager_TypeInfo;
  this->fields.questId = qId;
  this->fields.questPhase = qPhase;
  this->fields.warId = wId;
  v17 = *(&v16->_2.cctor_finished + 1);
  this->fields.restartWaveNumMax = restartWave;
  this->fields.restartWaveNumSelect = restartWave;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(v16, v14, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_24;
  EventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Master_object, this->fields.questId, 0);
  v23 = LocalizationManager_TypeInfo;
  titleLabel = this->fields.titleLabel;
  this->fields.eventId = EventId;
  if ( !*(&v23->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v23, v20, v21);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_16138/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_24;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  messageLabel = this->fields.messageLabel;
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_16135/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, 0);
  v27 = (Il2CppObject *)System_Int32__ToString_77138656((int32_t)&v53, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
  Master_object = System_String__Format(v26, v27, 0);
  if ( !messageLabel )
    goto LABEL_24;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_16134/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0);
  if ( !cancelLabel )
    goto LABEL_24;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0);
  resumeNotSelectWaveLabel = this->fields.resumeNotSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_16136/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0);
  if ( !resumeNotSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeNotSelectWaveLabel, (System_String_o *)Master_object, 0);
  resumeSelectWaveLabel = this->fields.resumeSelectWaveLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_16137/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, 0);
  if ( !resumeSelectWaveLabel )
    goto LABEL_24;
  UILabel__set_text(resumeSelectWaveLabel, (System_String_o *)Master_object, 0);
  v32 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v31);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Master_object = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v31);
    Master_object = NetworkManager_TypeInfo;
  }
  if ( !v32 )
    goto LABEL_24;
  Master_object = UserEventDeckMaster__getDeckList(
                    (UserEventDeckMaster_o *)v32,
                    *(_QWORD *)(*((_QWORD *)Master_object + 23) + 64LL),
                    this->fields.eventId,
                    this->fields.questId,
                    this->fields.questPhase,
                    0,
                    0);
  if ( !Master_object )
    goto LABEL_24;
  if ( !*((_DWORD *)Master_object + 6) )
    sub_2213CE4(Master_object);
  v39 = (struct UserEventDeckEntity_o *)*((_QWORD *)Master_object + 4);
  this->fields.deckEntity = v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.deckEntity, (int32_t)v39, v33, v34, v35, v36, v37, v38);
  questId = this->fields.questId;
  v40 = this->fields.eventId;
  questPhase = this->fields.questPhase;
  v43 = (QuestRestrictionInfo_o *)sub_2213CCC(QuestRestrictionInfo_TypeInfo);
  QuestRestrictionInfo___ctor_50415132(v43, v40, questId, questPhase, 0);
  this->fields.questRestrictionInfo = v43;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.questRestrictionInfo,
    (int32_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_StageMaster___);
  if ( !Master_object )
LABEL_24:
    sub_2213CDC(Master_object, v19);
  WaveCount = StageMaster__GetWaveCount(
                (StageMaster_o *)Master_object,
                this->fields.questId,
                this->fields.questPhase,
                0);
  v51 = System_Action_TypeInfo;
  this->fields.waveCount = WaveCount;
  v52 = (System_Action_o *)sub_2213CCC(v51);
  System_Action___ctor(v52, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t restartWaveNum,
        const MethodInfo *method)
{
  int v5; // w8
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x22
  int32_t questId; // w9
  System_Int32_array *SelectableQuests; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t SelectedQuestId; // w0
  int32_t questPhase; // w8
  BattleSetupInfo_o **p_battleSetupinfo; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct BattleSetupInfo_o *battleSetupinfo; // x23
  QuestGroupMaster_o *v27; // x22
  BattleSetupInfo_o *v28; // x8
  BattleSetupInfo_o *v29; // x8
  int32_t v30; // w9
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596C3B5 & 1) == 0 )
  {
    sub_2213A60(&BattleSetupInfo_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestGroupMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_596C3B5 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&restartWaveNum, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0);
  v8 = sub_2213CCC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v8, 0);
  if ( !v8 )
    goto LABEL_16;
  questId = this->fields.questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  *(_DWORD *)(v8 + 16) = this->fields.warId;
  *(_DWORD *)(v8 + 20) = questId;
  if ( !Master_object )
    goto LABEL_16;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests((QuestPhaseEntity_o *)Master_object, 0);
  *(_QWORD *)(v8 + 112) = SelectableQuests;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 112), (int32_t)SelectableQuests, v11, v12, v13, v14, v15, v16);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  SelectedQuestId = QuestPhaseEntity__GetSelectedQuestId(entity, this->fields.questId, 0, 0);
  questPhase = this->fields.questPhase;
  *(_DWORD *)(v8 + 120) = SelectedQuestId;
  *(_DWORD *)(v8 + 124) = 0;
  *(_WORD *)(v8 + 72) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  this->fields.battleSetupinfo = (struct BattleSetupInfo_o *)v8;
  p_battleSetupinfo = &this->fields.battleSetupinfo;
  *(_DWORD *)(v8 + 24) = questPhase;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.battleSetupinfo, v8, v20, v21, v22, v23, v24, v25);
  battleSetupinfo = this->fields.battleSetupinfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupinfo )
    goto LABEL_16;
  v27 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupinfo, 0);
  if ( !v27
    || (Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v27, (int32_t)Master_object, 0),
        !battleSetupinfo)
    || (v28 = *p_battleSetupinfo, battleSetupinfo->fields.eventId = (int)Master_object, !v28)
    || (BattleSetupInfo__SetEventUpValues(v28, 0), (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0)
    || (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0), (v29 = *p_battleSetupinfo) == 0) )
  {
LABEL_16:
    sub_2213CDC(Master_object, v7);
  }
  v30 = this->fields.questId;
  v29->fields.restartWave = restartWaveNum;
  v29->fields.isScriptBeforeWarBoard = 0;
  v29->fields.originQuestId = v30;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleSelectWaveConfirmDialog_o *v13; // x0
  WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596C3AC & 1) == 0 )
  {
    sub_2213A60(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo);
    byte_596C3AC = 1;
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
    v11 = sub_224B48C(p_CloseFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleSelectWaveConfirmDialog_o *)sub_221405C(
                                                 v8,
                                                 WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo,
                                                 v9,
                                                 v10);
  WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(v13, v14, v15);
}


UnityEngine_GameObject_o *WaveBattleSelectWaveConfirmDialog__get_closeBtnObject(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596C3B6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C3B6 = 1;
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


void WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(
        WaveBattleSelectWaveConfirmDialog_o *this,
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *value,
        const MethodInfo *method)
{
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o **p_CloseFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WaveBattleSelectWaveConfirmDialog_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596C3AD & 1) == 0 )
  {
    sub_2213A60(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo);
    byte_596C3AD = 1;
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
    v11 = sub_224B48C(p_CloseFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (WaveBattleSelectWaveConfirmDialog_o *)sub_221405C(
                                                 v8,
                                                 WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo,
                                                 v9,
                                                 v10);
  WaveBattleSelectWaveConfirmDialog__Awake(v13, v14);
}


void WaveBattleSelectWaveConfirmDialog_CloseDelegate___ctor(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_20051C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200517C;
}


System_IAsyncResult_o *WaveBattleSelectWaveConfirmDialog_CloseDelegate__BeginInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
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


void WaveBattleSelectWaveConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x0
  WaveBattleSelectWaveDialog_o *resumeNotSelectWaveDialog; // x19
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x2

  if ( (byte_596C3B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1__OnClickResumeSelectWave_b__1__);
    sub_2213A60(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_TypeInfo);
    byte_596C3B8 = 1;
  }
  v5 = sub_2213CCC(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = System_Action_TypeInfo,
        resumeNotSelectWaveDialog = this->fields.resumeNotSelectWaveDialog,
        *(_BYTE *)(v5 + 16) = isDecide,
        v16 = (System_Action_o *)sub_2213CCC(v14),
        System_Action___ctor(
          v16,
          (Il2CppObject *)v5,
          Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1__OnClickResumeSelectWave_b__1__,
          0),
        !resumeNotSelectWaveDialog) )
  {
    sub_2213CDC(v6, v7);
  }
  WaveBattleSelectWaveDialog__Close_41494860(resumeNotSelectWaveDialog, v16, v17);
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
  __int64 v2; // x2
  WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_o *v3; // x19
  struct WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *CS___8__locals1; // x8
  UnityEngine_Object_o *go; // x20
  const MethodInfo *v6; // x6
  struct WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *v7; // x8

  v3 = this;
  if ( (byte_596C3B9 & 1) == 0 )
  {
    this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C3B9 = 1;
  }
  CS___8__locals1 = v3->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_10;
  go = (UnityEngine_Object_o *)CS___8__locals1->fields.go;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83459800(go, 0);
  if ( !v3->fields.isDecide )
  {
    v7 = v3->fields.CS___8__locals1;
    if ( v7 )
    {
      this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_1_o *)v7->fields.__4__this;
      if ( this )
      {
        WaveBattleSelectWaveConfirmDialog__Open(
          (WaveBattleSelectWaveConfirmDialog_o *)this,
          *((_DWORD *)this + 44),
          *((_DWORD *)this + 46),
          *((_DWORD *)this + 47),
          *((_DWORD *)this + 48),
          *((WaveBattleSelectWaveConfirmDialog_CloseDelegate_o **)this + 29),
          v6);
        return;
      }
    }
LABEL_10:
    sub_2213CDC(this, method);
  }
}