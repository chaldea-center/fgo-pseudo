void __fastcall viewDogIcon___ctor(viewDogIcon_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40F9107 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19419/*"img_frameselect"*/, method);
    byte_40F9107 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_19419/*"img_frameselect"*/;
  this->fields.FRAME_SELECT_NAME = (struct System_String_o *)StringLiteral_19419/*"img_frameselect"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.FRAME_SELECT_NAME, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall viewDogIcon__ClickNotReleased(viewDogIcon_o *this, const MethodInfo *method)
{
  if ( (byte_40F9106 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9106 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall viewDogIcon__ClickPanel(viewDogIcon_o *this, const MethodInfo *method)
{
  System_Action_o *onClickPanel; // x0
  UnityEngine_Component_o *selectSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9105 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F9105 = 1;
  }
  onClickPanel = this->fields.onClickPanel;
  if ( onClickPanel )
    ActionExtensions__Call(onClickPanel, 0LL);
  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 1;
  if ( !selectSprite || (gameObject = UnityEngine_Component__get_gameObject(selectSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, this->fields._IsSelect_k__BackingField, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}


System_String_o *__fastcall viewDogIcon__GetExpeditionTimeLabel(
        viewDogIcon_o *this,
        int64_t time,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  unsigned __int64 v6; // x22
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x20
  System_String_o *v9; // x19
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x21
  Il2CppObject *v12; // x0
  unsigned __int64 v14; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v15; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v16; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F9104 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, time);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5772/*"EXPEDITION_TIME_FORMAT"*/, v5);
    byte_40F9104 = 1;
  }
  if ( time < 1 )
  {
    v8 = 0LL;
    v7 = 0LL;
    v6 = 0LL;
  }
  else
  {
    v6 = time % 0x3CuLL;
    v7 = time / 0x3CuLL % 0x3C;
    v8 = time / 0xE10uLL;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5772/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v16 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  v15 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  v14 = v6;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  return System_String__Format_43744796(v9, v10, v11, v12, 0LL);
}


void __fastcall viewDogIcon__Init(
        viewDogIcon_o *this,
        EventExpeditionPieceEntity_o *eventExpeditionPieceEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *compatibilityLabel; // x0
  UILabel_o *onAnExpeditionLabel; // x0
  UILabel_o *timeRequiredTextLabel; // x0
  UILabel_o *timeRequiredNumLabel; // x0
  UILabel_o *nameLabel; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t eventId; // w23
  UISprite_o *selectSprite; // x21
  System_String_o *FRAME_SELECT_NAME; // x22
  UnityEngine_GameObject_o *onAnExpedition; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WebViewManager_o *Instance; // x0
  CommonReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  bool v38; // w1
  UnityEngine_GameObject_o *dispLabelRoot; // x0
  UnityEngine_Component_o *button; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Component_o *notReleasedButton; // x0

  if ( (byte_40F9102 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, eventExpeditionPieceEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F9102 = 1;
  }
  compatibilityLabel = this->fields.compatibilityLabel;
  if ( !compatibilityLabel )
    goto LABEL_32;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  onAnExpeditionLabel = this->fields.onAnExpeditionLabel;
  if ( !onAnExpeditionLabel )
    goto LABEL_32;
  UILabel__set_text(onAnExpeditionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  timeRequiredTextLabel = this->fields.timeRequiredTextLabel;
  if ( !timeRequiredTextLabel )
    goto LABEL_32;
  UILabel__set_text(timeRequiredTextLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  timeRequiredNumLabel = this->fields.timeRequiredNumLabel;
  if ( !timeRequiredNumLabel )
    goto LABEL_32;
  UILabel__set_text(timeRequiredNumLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_32;
  UILabel__set_text(nameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.onClickPanel = 0LL;
  *(_WORD *)&this->fields._IsSelect_k__BackingField = 0;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onClickPanel, 0LL, v13, v14, v15, v16, v17, v18);
  if ( !eventExpeditionPieceEntity )
    goto LABEL_32;
  eventId = eventExpeditionPieceEntity->fields.eventId;
  selectSprite = this->fields.selectSprite;
  FRAME_SELECT_NAME = this->fields.FRAME_SELECT_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, selectSprite, FRAME_SELECT_NAME, 0LL);
  onAnExpedition = this->fields.onAnExpedition;
  if ( !onAnExpedition )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(onAnExpedition, 0, 0LL);
  v23 = (UnityEngine_Component_o *)this->fields.selectSprite;
  if ( !v23 )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, this->fields._IsSelect_k__BackingField, 0LL);
  this->fields._EventExpeditionPieceEntity_k__BackingField = eventExpeditionPieceEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (System_Int32_array **)eventExpeditionPieceEntity,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( eventExpeditionPieceEntity->fields.commonReleaseId )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        if ( CommonReleaseMaster__IsOpen(
               MasterData_WarQuestSelectionMaster,
               eventExpeditionPieceEntity->fields.commonReleaseId,
               0LL,
               0,
               0LL) )
        {
          goto LABEL_19;
        }
        dispLabelRoot = this->fields.dispLabelRoot;
        if ( dispLabelRoot )
        {
          UnityEngine_GameObject__SetActive(dispLabelRoot, 0, 0LL);
          button = (UnityEngine_Component_o *)this->fields.button;
          if ( button )
          {
            v41 = UnityEngine_Component__get_gameObject(button, 0LL);
            if ( v41 )
            {
              UnityEngine_GameObject__SetActive(v41, 0, 0LL);
              notReleasedButton = (UnityEngine_Component_o *)this->fields.notReleasedButton;
              if ( notReleasedButton )
              {
                v37 = UnityEngine_Component__get_gameObject(notReleasedButton, 0LL);
                if ( v37 )
                {
                  v38 = 1;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B170D4();
  }
LABEL_19:
  v33 = this->fields.dispLabelRoot;
  if ( !v33 )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(v33, 1, 0LL);
  v34 = (UnityEngine_Component_o *)this->fields.button;
  if ( !v34 )
    goto LABEL_32;
  v35 = UnityEngine_Component__get_gameObject(v34, 0LL);
  if ( !v35 )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(v35, 1, 0LL);
  v36 = (UnityEngine_Component_o *)this->fields.notReleasedButton;
  if ( !v36 )
    goto LABEL_32;
  v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
  if ( !v37 )
    goto LABEL_32;
  v38 = 0;
LABEL_31:
  UnityEngine_GameObject__SetActive(v37, v38, 0LL);
}


void __fastcall viewDogIcon__IsDoingTheExpeditionTrue(viewDogIcon_o *this, const MethodInfo *method)
{
  this->fields._IsDoingTheExpedition_k__BackingField = 1;
}


void __fastcall viewDogIcon__IsSelectSetFalse(viewDogIcon_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 0;
  if ( !selectSprite || (gameObject = UnityEngine_Component__get_gameObject(selectSprite, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, this->fields._IsSelect_k__BackingField, 0LL);
}


void __fastcall viewDogIcon__SerializeFieldNotNullCheck(viewDogIcon_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall viewDogIcon__Set(
        viewDogIcon_o *this,
        int32_t compatibilityPercent,
        int32_t timeRequiredNum,
        int32_t eventId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UILabel_o *compatibilityLabel; // x24
  System_String_o *v19; // x25
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  UILabel_o *onAnExpeditionLabel; // x24
  System_String_o *v23; // x0
  UnityEngine_GameObject_o *onAnExpedition; // x0
  struct UICommonButton_o *button; // x0
  UIWidget_o *v26; // x24
  int v27; // s0
  UIWidget_o *nameLabel; // x24
  int v32; // s0
  UIWidget_o *v36; // x24
  int v37; // s0
  UILabel_o *timeRequiredTextLabel; // x24
  System_String_o *v42; // x0
  UILabel_o *timeRequiredNumLabel; // x24
  viewDogIcon_o *v44; // x0
  const MethodInfo *v45; // x2
  Il2CppObject *ExpeditionTimeLabel; // x1
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8
  UILabel_o *v48; // x0
  UnityEngine_GameObject_o *dispLabelRoot; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct EventExpeditionPieceEntity_o *v56; // x8
  UISprite_o *icon; // x22
  Il2CppObject *v58; // x0
  System_String_o *v59; // x23
  int32_t iconImageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F9103 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&compatibilityPercent);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_19305/*"icon_{0}"*/, v13);
    sub_B16FFC(&StringLiteral_5754/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, v14);
    sub_B16FFC(&StringLiteral_5758/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, v15);
    sub_B16FFC(&StringLiteral_15681/*"[FFFF00]{0}[-]"*/, v16);
    sub_B16FFC(&StringLiteral_5759/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, v17);
    byte_40F9103 = 1;
  }
  if ( compatibilityPercent >= 1 )
  {
    compatibilityLabel = this->fields.compatibilityLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5754/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, 0LL);
    v61 = compatibilityPercent;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v61);
    v21 = System_String__Format(v19, v20, 0LL);
    if ( !compatibilityLabel )
LABEL_38:
      sub_B170D4();
    UILabel__set_text(compatibilityLabel, v21, 0LL);
  }
  if ( this->fields._IsDoingTheExpedition_k__BackingField )
  {
    onAnExpeditionLabel = this->fields.onAnExpeditionLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5758/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, 0LL);
    if ( !onAnExpeditionLabel )
      goto LABEL_38;
    UILabel__set_text(onAnExpeditionLabel, v23, 0LL);
    onAnExpedition = this->fields.onAnExpedition;
    if ( !onAnExpedition )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive(onAnExpedition, 1, 0LL);
    button = this->fields.button;
    if ( !button )
      goto LABEL_38;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))button->klass->vtable._5_set_isEnabled.method)(
      button,
      0LL,
      button->klass->vtable._6_OnInit.methodPtr);
    v26 = (UIWidget_o *)this->fields.compatibilityLabel;
    *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_gray(0LL);
    if ( !v26 )
      goto LABEL_38;
    UIWidget__set_color(v26, *(UnityEngine_Color_o *)&v27, 0LL);
    nameLabel = (UIWidget_o *)this->fields.nameLabel;
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_gray(0LL);
    if ( !nameLabel )
      goto LABEL_38;
  }
  else
  {
    v36 = (UIWidget_o *)this->fields.compatibilityLabel;
    *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
    if ( !v36 )
      goto LABEL_38;
    UIWidget__set_color(v36, *(UnityEngine_Color_o *)&v37, 0LL);
    nameLabel = (UIWidget_o *)this->fields.nameLabel;
    *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_white(0LL);
    if ( !nameLabel )
      goto LABEL_38;
  }
  UIWidget__set_color(nameLabel, *(UnityEngine_Color_o *)&v32, 0LL);
  timeRequiredTextLabel = this->fields.timeRequiredTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v42 = LocalizationManager__Get((System_String_o *)StringLiteral_5759/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, 0LL);
  if ( !timeRequiredTextLabel )
    goto LABEL_38;
  UILabel__set_text(timeRequiredTextLabel, v42, 0LL);
  timeRequiredNumLabel = this->fields.timeRequiredNumLabel;
  ExpeditionTimeLabel = (Il2CppObject *)viewDogIcon__GetExpeditionTimeLabel(v44, timeRequiredNum, v45);
  if ( compatibilityPercent >= 1 )
    ExpeditionTimeLabel = (Il2CppObject *)System_String__Format(
                                            (System_String_o *)StringLiteral_15681/*"[FFFF00]{0}[-]"*/,
                                            ExpeditionTimeLabel,
                                            0LL);
  if ( !timeRequiredNumLabel )
    goto LABEL_38;
  UILabel__set_text(timeRequiredNumLabel, (System_String_o *)ExpeditionTimeLabel, 0LL);
  EventExpeditionPieceEntity_k__BackingField = this->fields._EventExpeditionPieceEntity_k__BackingField;
  if ( !EventExpeditionPieceEntity_k__BackingField )
    goto LABEL_38;
  v48 = this->fields.nameLabel;
  if ( !v48 )
    goto LABEL_38;
  UILabel__set_text(v48, EventExpeditionPieceEntity_k__BackingField->fields.name, 0LL);
  dispLabelRoot = this->fields.dispLabelRoot;
  if ( !dispLabelRoot )
    goto LABEL_38;
  if ( UnityEngine_GameObject__get_activeSelf(dispLabelRoot, 0LL) )
  {
    v56 = this->fields._EventExpeditionPieceEntity_k__BackingField;
    if ( !v56 )
      goto LABEL_38;
    icon = this->fields.icon;
    iconImageId = v56->fields.iconImageId;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId);
    v59 = System_String__Format((System_String_o *)StringLiteral_19305/*"icon_{0}"*/, v58, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, icon, v59, 0LL);
  }
  this->fields.onClickPanel = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.onClickPanel,
    (System_Int32_array **)callback,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
}


EventExpeditionPieceEntity_o *__fastcall viewDogIcon__get_EventExpeditionPieceEntity(
        viewDogIcon_o *this,
        const MethodInfo *method)
{
  return this->fields._EventExpeditionPieceEntity_k__BackingField;
}


bool __fastcall viewDogIcon__get_IsDoingTheExpedition(viewDogIcon_o *this, const MethodInfo *method)
{
  return this->fields._IsDoingTheExpedition_k__BackingField;
}


bool __fastcall viewDogIcon__get_IsSelect(viewDogIcon_o *this, const MethodInfo *method)
{
  return this->fields._IsSelect_k__BackingField;
}


void __fastcall viewDogIcon__set_EventExpeditionPieceEntity(
        viewDogIcon_o *this,
        EventExpeditionPieceEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EventExpeditionPieceEntity_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall viewDogIcon__set_IsDoingTheExpedition(viewDogIcon_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsDoingTheExpedition_k__BackingField = value;
}


void __fastcall viewDogIcon__set_IsSelect(viewDogIcon_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSelect_k__BackingField = value;
}