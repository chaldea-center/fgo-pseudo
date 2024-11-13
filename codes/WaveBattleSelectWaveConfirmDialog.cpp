void __fastcall WaveBattleSelectWaveConfirmDialog___ctor(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B122D4 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B122D4 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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

  if ( (byte_4B122D1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B122D1 = 1;
  }
  WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(this, this->fields.restartWaveNumMax, v2);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B122CD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveConfirmDialog_EndClose__, v5, v6);
    byte_4B122CD = 1;
  }
  this->fields.state = 2;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B122CB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B122CB = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickCancel(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8

  if ( (byte_4B122CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__, method, v2);
    byte_4B122CE = 1;
  }
  if ( this->fields.state == 1 )
  {
    v4 = Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleSelectWaveConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  ScrTerminalListTop_o *v11; // x0
  QuestRewardTokenAction_c *klass; // x8
  const MethodInfo *v13; // x1

  if ( (byte_4B122CF & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__, v4, v5);
    byte_4B122CF = 1;
  }
  if ( this->fields.state == 1 )
  {
    v6 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeNotSelectWave__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
      byte_4B10F83 = 1;
    }
    v11 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
      v11 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = v11->fields.boardGameTokenAction->klass;
    if ( !klass || (v11 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size) == 0LL )
      sub_1BCAA3C(v11, v8);
    ScrTerminalListTop__SetBackMaskActive(v11, 0, 0LL);
    WaveBattleSelectWaveConfirmDialog__ChangeSceneByNotSelectRestartWave(this, v13);
  }
}


void __fastcall WaveBattleSelectWaveConfirmDialog__OnClickResumeSelectWave(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  struct WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *CloseFunc; // x8
  Il2CppObject *waveBattleSelectWaveDialogPrefab; // x21
  Il2CppObject *v33; // x0
  void **v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_GameObject_o *v41; // x22
  UnityEngine_Component_o *parent; // x0
  Il2CppObject *Component_object; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x2
  __int64 v51; // x8
  WaveBattleSelectWaveDialog_o *v52; // x21
  UserEventDeckEntity_o *deckEntity; // x22
  QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t restartWaveNumSelect; // w19
  int32_t v56; // w24
  int32_t *p_restartWaveNumSelect; // t2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  WaveBattleSelectWaveDialog_CloseDelegate_o *v61; // x25
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x7

  if ( (byte_4B122D0 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v11, v12);
    sub_1BCA7E0(
      &Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
      v13,
      v14);
    sub_1BCA7E0(&WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__, v17, v18);
    byte_4B122D0 = 1;
  }
  v19 = sub_1BCAA2C(WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_25;
  *(_QWORD *)(v19 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)this, v22, v23, v24, v25, v26, v27);
  if ( this->fields.state == 1 )
  {
    v28 = Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__;
    if ( (*((_BYTE *)Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1BCA7F8(Method_WaveBattleSelectWaveConfirmDialog_OnClickResumeSelectWave__);
    v29 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
    CloseFunc = this->fields.CloseFunc;
    if ( CloseFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CloseFunc->fields.m_target)(
        CloseFunc->fields.original_method_info,
        0LL,
        *(_QWORD *)&CloseFunc->fields.extra_arg);
    waveBattleSelectWaveDialogPrefab = (Il2CppObject *)this->fields.waveBattleSelectWaveDialogPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    v33 = UnityEngine_Object__Instantiate_object_(
            waveBattleSelectWaveDialogPrefab,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    *(_QWORD *)(v19 + 24) = v33;
    v34 = (void **)(v19 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 24), (int64_t)v33, v35, v36, v37, v38, v39, v40);
    v41 = *(UnityEngine_GameObject_o **)(v19 + 24);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( transform )
    {
      parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      GameObjectExtensions__SafeSetParent(v41, parent, 0LL);
      transform = (UnityEngine_Transform_o *)*v34;
      if ( *v34 )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)transform,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleSelectWaveDialog___);
        *(_QWORD *)(v19 + 16) = Component_object;
        sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)Component_object, v44, v45, v46, v47, v48, v49);
        transform = *(UnityEngine_Transform_o **)(v19 + 16);
        if ( transform )
        {
          WaveBattleSelectWaveDialog__Init((WaveBattleSelectWaveDialog_o *)transform, v21);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
          if ( !byte_4B10F83 )
          {
            sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v21, v50);
            byte_4B10F83 = 1;
          }
          transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
            transform = (UnityEngine_Transform_o *)TerminalSceneComponent_TypeInfo;
          }
          v51 = **(_QWORD **)&transform[7].fields.m_CachedPtr;
          if ( v51 )
          {
            transform = *(UnityEngine_Transform_o **)(v51 + 256);
            if ( transform )
            {
              ScrTerminalListTop__SetBackMaskActive((ScrTerminalListTop_o *)transform, 0, 0LL);
              v52 = *(WaveBattleSelectWaveDialog_o **)(v19 + 16);
              deckEntity = this->fields.deckEntity;
              questRestrictionInfo = this->fields.questRestrictionInfo;
              p_restartWaveNumSelect = &this->fields.restartWaveNumSelect;
              restartWaveNumSelect = this->fields.restartWaveNumSelect;
              v56 = p_restartWaveNumSelect[1];
              v61 = (WaveBattleSelectWaveDialog_CloseDelegate_o *)sub_1BCAA2C(
                                                                    WaveBattleSelectWaveDialog_CloseDelegate_TypeInfo,
                                                                    v58,
                                                                    v59,
                                                                    v60);
              WaveBattleSelectWaveDialog_CloseDelegate___ctor(
                v61,
                (Il2CppObject *)v19,
                Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__0__,
                v62);
              if ( v52 )
              {
                WaveBattleSelectWaveDialog__Open(
                  v52,
                  deckEntity,
                  questRestrictionInfo,
                  v56,
                  restartWaveNumSelect,
                  0,
                  v61,
                  v63);
                return;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_1BCAA3C(transform, v21);
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  int64_t Master_object; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  System_String_o *v48; // x21
  Il2CppObject *v49; // x0
  UILabel_o *cancelLabel; // x20
  UILabel_o *resumeNotSelectWaveLabel; // x20
  UILabel_o *resumeSelectWaveLabel; // x20
  __int64 v53; // x1
  Il2CppObject *v54; // x20
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct UserEventDeckEntity_o *v61; // x1
  int32_t eventId; // w20
  int32_t questId; // w21
  int32_t questPhase; // w22
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  QuestRestrictionInfo_o *v68; // x23
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Action_o *v78; // x20
  int32_t v79; // [xsp+Ch] [xbp-54h] BYREF

  v79 = restartWave;
  if ( (byte_4B122CC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&qId, *(_QWORD *)&qPhase);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMaster_StageMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDeckMaster___, v18, v19);
    sub_1BCA7E0(&DataManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&QuestRestrictionInfo_TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, v28, v29);
    sub_1BCA7E0(&StringLiteral_15698/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_15695/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_15697/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_15694/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_15696/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v40, v41);
    byte_4B122CC = 1;
  }
  this->fields.CloseFunc = func;
  sub_1BCA784(
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !Master_object )
    goto LABEL_20;
  this->fields.eventId = QuestGroupMaster__GetEventId((QuestGroupMaster_o *)Master_object, this->fields.questId, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15698/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  messageLabel = this->fields.messageLabel;
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_15695/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
  v49 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v79, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
  Master_object = (int64_t)System_String__Format(v48, v49, 0LL);
  if ( !messageLabel )
    goto LABEL_20;
  UILabel__set_text(messageLabel, (System_String_o *)Master_object, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15694/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_CANCEL_BUTTON"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_20;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL);
  resumeNotSelectWaveLabel = this->fields.resumeNotSelectWaveLabel;
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15696/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_NOT_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeNotSelectWaveLabel )
    goto LABEL_20;
  UILabel__set_text(resumeNotSelectWaveLabel, (System_String_o *)Master_object, 0LL);
  resumeSelectWaveLabel = this->fields.resumeSelectWaveLabel;
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_15697/*"WAVE_BATTLE_RESTART_CONFIRM_DIALOG_RESUME_SELECT_WAVE_BUTTON"*/, 0LL);
  if ( !resumeSelectWaveLabel )
    goto LABEL_20;
  UILabel__set_text(resumeSelectWaveLabel, (System_String_o *)Master_object, 0LL);
  v54 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDeckMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v53);
  Master_object = NetworkManager__get_UserId(0LL);
  if ( !v54 )
    goto LABEL_20;
  Master_object = (int64_t)UserEventDeckMaster__getDeckList(
                             (UserEventDeckMaster_o *)v54,
                             Master_object,
                             this->fields.eventId,
                             this->fields.questId,
                             this->fields.questPhase,
                             0LL);
  if ( !Master_object )
    goto LABEL_20;
  if ( !*(_DWORD *)(Master_object + 24) )
    sub_1BCAA44(Master_object, v44);
  v61 = *(struct UserEventDeckEntity_o **)(Master_object + 32);
  this->fields.deckEntity = v61;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.deckEntity, (int64_t)v61, v55, v56, v57, v58, v59, v60);
  questId = this->fields.questId;
  eventId = this->fields.eventId;
  questPhase = this->fields.questPhase;
  v68 = (QuestRestrictionInfo_o *)sub_1BCAA2C(QuestRestrictionInfo_TypeInfo, v65, v66, v67);
  QuestRestrictionInfo___ctor_41151748(v68, eventId, questId, questPhase, 0LL);
  this->fields.questRestrictionInfo = v68;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.questRestrictionInfo,
    (int64_t)v68,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_StageMaster___);
  if ( !Master_object )
LABEL_20:
    sub_1BCAA3C(Master_object, v44);
  this->fields.waveCount = StageMaster__GetWaveCount(
                             (StageMaster_o *)Master_object,
                             this->fields.questId,
                             this->fields.questPhase,
                             0LL);
  v78 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v75, v76, v77);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_WaveBattleSelectWaveConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v78, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleSelectWaveConfirmDialog__SetBattleSetupInfo(
        WaveBattleSelectWaveConfirmDialog_o *this,
        int32_t restartWaveNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  int64_t v16; // x22
  System_Int32_array *SelectableQuests; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int32_t questPhase; // w8
  BattleSetupInfo_o **p_battleSetupinfo; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct BattleSetupInfo_o *battleSetupinfo; // x23
  QuestGroupMaster_o *v33; // x22
  BattleSetupInfo_o *v34; // x8
  int32_t questId; // w9
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B122D2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, *(_QWORD *)&restartWaveNum, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestGroupMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    byte_4B122D2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&restartWaveNum);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  QuestPhaseMaster__TryGetEntity(Master_object, &entity, this->fields.questId, this->fields.questPhase, 0LL);
  v16 = sub_1BCAA2C(BattleSetupInfo_TypeInfo, v13, v14, v15);
  BattleSetupInfo___ctor((BattleSetupInfo_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_16;
  *(_DWORD *)(v16 + 16) = this->fields.warId;
  *(_DWORD *)(v16 + 20) = this->fields.questId;
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(entity, 0LL);
  *(_QWORD *)(v16 + 112) = SelectableQuests;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 112), (int64_t)SelectableQuests, v18, v19, v20, v21, v22, v23);
  Master_object = (QuestPhaseMaster_o *)entity;
  if ( !entity )
    goto LABEL_16;
  *(_DWORD *)(v16 + 120) = QuestPhaseEntity__GetSelectedQuestId(entity, this->fields.questId, 0, 0LL);
  *(_DWORD *)(v16 + 124) = 0;
  questPhase = this->fields.questPhase;
  *(_WORD *)(v16 + 72) = 0;
  *(_QWORD *)(v16 + 40) = 0LL;
  *(_QWORD *)(v16 + 48) = 0LL;
  *(_DWORD *)(v16 + 24) = questPhase;
  this->fields.battleSetupinfo = (struct BattleSetupInfo_o *)v16;
  p_battleSetupinfo = &this->fields.battleSetupinfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleSetupinfo, v16, v26, v27, v28, v29, v30, v31);
  battleSetupinfo = this->fields.battleSetupinfo;
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestGroupMaster___);
  if ( !this->fields.battleSetupinfo )
    goto LABEL_16;
  v33 = (QuestGroupMaster_o *)Master_object;
  Master_object = (QuestPhaseMaster_o *)BattleSetupInfo__TargetQuestId(*p_battleSetupinfo, 0LL);
  if ( !v33
    || (Master_object = (QuestPhaseMaster_o *)QuestGroupMaster__GetEventId(v33, (int32_t)Master_object, 0LL),
        !battleSetupinfo)
    || (battleSetupinfo->fields.eventId = (int)Master_object,
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetEventUpValues((BattleSetupInfo_o *)Master_object, 0LL),
        (Master_object = (QuestPhaseMaster_o *)*p_battleSetupinfo) == 0LL)
    || (BattleSetupInfo__SetRestriction((BattleSetupInfo_o *)Master_object, 1, 0LL), (v34 = *p_battleSetupinfo) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(Master_object, v12);
  }
  questId = this->fields.questId;
  v34->fields.restartWave = restartWaveNum;
  v34->fields.isScriptBeforeWarBoard = 0;
  v34->fields.originQuestId = questId;
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

  if ( (byte_4B122C9 & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo, value, method);
    byte_4B122C9 = 1;
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
    v9 = sub_1C05CD0(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1BCACFC(v8);
  WaveBattleSelectWaveConfirmDialog__remove_CloseFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall WaveBattleSelectWaveConfirmDialog__get_closeBtnObject(
        WaveBattleSelectWaveConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B122D3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B122D3 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
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

  if ( (byte_4B122CA & 1) == 0 )
  {
    sub_1BCA7E0(&WaveBattleSelectWaveConfirmDialog_CloseDelegate_TypeInfo, value, method);
    byte_4B122CA = 1;
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
    v9 = sub_1C05CD0(p_CloseFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleSelectWaveConfirmDialog_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07D3C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07CF4;
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
  if ( (byte_4B122D5 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isDecide, callback);
    byte_4B122D5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall WaveBattleSelectWaveConfirmDialog_CloseDelegate__EndInvoke(
        WaveBattleSelectWaveConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__1; // x22
  WaveBattleSelectWaveDialog_o *resumeNotSelectWaveDialog; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4B122D6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    this = (WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *)sub_1BCA7E0(
                                                                          &Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
                                                                          v5,
                                                                          v6);
    byte_4B122D6 = 1;
  }
  _9__1 = v4->fields.__9__1;
  resumeNotSelectWaveDialog = v4->fields.resumeNotSelectWaveDialog;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0__OnClickResumeSelectWave_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !resumeNotSelectWaveDialog )
    sub_1BCAA3C(this, isDecide);
  WaveBattleSelectWaveDialog__Close_33048668(resumeNotSelectWaveDialog, _9__1, method);
}


void __fastcall WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0___OnClickResumeSelectWave_b__1(
        WaveBattleSelectWaveConfirmDialog___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *go; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x6
  struct WaveBattleSelectWaveConfirmDialog_o *_4__this; // x0

  if ( (byte_4B122D7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B122D7 = 1;
  }
  go = (UnityEngine_Object_o *)this->fields.go;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(go, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, v5);
  WaveBattleSelectWaveConfirmDialog__Open(
    _4__this,
    _4__this->fields.questId,
    _4__this->fields.questPhase,
    _4__this->fields.warId,
    _4__this->fields.restartWaveNumMax,
    _4__this->fields.CloseFunc,
    v6);
}