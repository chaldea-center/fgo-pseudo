void __fastcall viewDogIcon___ctor(viewDogIcon_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4389F0E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19889/*"img_frameselect"*/);
    byte_4389F0E = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_19889/*"img_frameselect"*/;
  this->fields.FRAME_SELECT_NAME = (struct System_String_o *)StringLiteral_19889/*"img_frameselect"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.FRAME_SELECT_NAME, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall viewDogIcon__ClickNotReleased(viewDogIcon_o *this, const MethodInfo *method)
{
  if ( (byte_4389F0D & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389F0D = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall viewDogIcon__ClickPanel(viewDogIcon_o *this, const MethodInfo *method)
{
  System_Action_o *onClickPanel; // x0
  UnityEngine_Component_o *selectSprite; // x0

  if ( (byte_4389F0C & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_4389F0C = 1;
  }
  onClickPanel = this->fields.onClickPanel;
  if ( onClickPanel )
    ActionExtensions__Call(onClickPanel, 0LL);
  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 1;
  if ( !selectSprite
    || (selectSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectSprite, 0LL)) == 0LL )
  {
    sub_B7769C(selectSprite, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)selectSprite,
    this->fields._IsSelect_k__BackingField,
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
}


System_String_o *__fastcall viewDogIcon__GetExpeditionTimeLabel(
        viewDogIcon_o *this,
        int64_t time,
        const MethodInfo *method)
{
  unsigned __int64 v4; // x22
  unsigned __int64 v5; // x21
  unsigned __int64 v6; // x20
  System_String_o *v7; // x19
  __int64 v8; // x2
  Il2CppObject *v9; // x20
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  unsigned __int64 v15; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v16; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v17; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4389F0B & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5934/*"EXPEDITION_TIME_FORMAT"*/);
    byte_4389F0B = 1;
  }
  if ( time < 1 )
  {
    v6 = 0LL;
    v5 = 0LL;
    v4 = 0LL;
  }
  else
  {
    v4 = time % 0x3CuLL;
    v5 = time / 0x3CuLL % 0x3C;
    v6 = time / 0xE10uLL;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5934/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v17 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17, v8);
  v16 = v5;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16, v10);
  v15 = v4;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15, v12);
  return System_String__Format_44903000(v7, v9, v11, v13, 0LL);
}


void __fastcall viewDogIcon__Init(
        viewDogIcon_o *this,
        EventExpeditionPieceEntity_o *eventExpeditionPieceEntity,
        const MethodInfo *method)
{
  UILabel_o *compatibilityLabel; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int32_t eventId; // w23
  UISprite_o *selectSprite; // x21
  System_String_o *FRAME_SELECT_NAME; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  bool v21; // w1

  if ( (byte_4389F09 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389F09 = 1;
  }
  compatibilityLabel = this->fields.compatibilityLabel;
  if ( !compatibilityLabel )
    goto LABEL_32;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  compatibilityLabel = this->fields.onAnExpeditionLabel;
  if ( !compatibilityLabel )
    goto LABEL_32;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  compatibilityLabel = this->fields.timeRequiredTextLabel;
  if ( !compatibilityLabel )
    goto LABEL_32;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  compatibilityLabel = this->fields.timeRequiredNumLabel;
  if ( !compatibilityLabel )
    goto LABEL_32;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  compatibilityLabel = this->fields.nameLabel;
  if ( !compatibilityLabel )
    goto LABEL_32;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.onClickPanel = 0LL;
  *(_WORD *)&this->fields._IsSelect_k__BackingField = 0;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.onClickPanel, 0LL, v6, v7, v8, v9, v10, v11);
  if ( !eventExpeditionPieceEntity )
    goto LABEL_32;
  eventId = eventExpeditionPieceEntity->fields.eventId;
  selectSprite = this->fields.selectSprite;
  FRAME_SELECT_NAME = this->fields.FRAME_SELECT_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_24479740(eventId, selectSprite, FRAME_SELECT_NAME, 0LL);
  compatibilityLabel = (UILabel_o *)this->fields.onAnExpedition;
  if ( !compatibilityLabel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 0, 0LL);
  compatibilityLabel = (UILabel_o *)this->fields.selectSprite;
  if ( !compatibilityLabel )
    goto LABEL_32;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0LL);
  if ( !compatibilityLabel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)compatibilityLabel,
    this->fields._IsSelect_k__BackingField,
    0LL);
  this->fields._EventExpeditionPieceEntity_k__BackingField = eventExpeditionPieceEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (System_Int32_array **)eventExpeditionPieceEntity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( eventExpeditionPieceEntity->fields.commonReleaseId )
  {
    compatibilityLabel = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( compatibilityLabel )
    {
      compatibilityLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)compatibilityLabel,
                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( compatibilityLabel )
      {
        if ( CommonReleaseMaster__IsOpen(
               (CommonReleaseMaster_o *)compatibilityLabel,
               eventExpeditionPieceEntity->fields.commonReleaseId,
               0LL,
               0,
               0LL) )
        {
          goto LABEL_19;
        }
        compatibilityLabel = (UILabel_o *)this->fields.dispLabelRoot;
        if ( compatibilityLabel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 0, 0LL);
          compatibilityLabel = (UILabel_o *)this->fields.button;
          if ( compatibilityLabel )
          {
            compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)compatibilityLabel,
                                                0LL);
            if ( compatibilityLabel )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 0, 0LL);
              compatibilityLabel = (UILabel_o *)this->fields.notReleasedButton;
              if ( compatibilityLabel )
              {
                compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)compatibilityLabel,
                                                    0LL);
                if ( compatibilityLabel )
                {
                  v21 = 1;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B7769C(compatibilityLabel, eventExpeditionPieceEntity);
  }
LABEL_19:
  compatibilityLabel = (UILabel_o *)this->fields.dispLabelRoot;
  if ( !compatibilityLabel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 1, 0LL);
  compatibilityLabel = (UILabel_o *)this->fields.button;
  if ( !compatibilityLabel )
    goto LABEL_32;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0LL);
  if ( !compatibilityLabel )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 1, 0LL);
  compatibilityLabel = (UILabel_o *)this->fields.notReleasedButton;
  if ( !compatibilityLabel )
    goto LABEL_32;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0LL);
  if ( !compatibilityLabel )
    goto LABEL_32;
  v21 = 0;
LABEL_31:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, v21, 0LL);
}


void __fastcall viewDogIcon__IsDoingTheExpeditionTrue(viewDogIcon_o *this, const MethodInfo *method)
{
  this->fields._IsDoingTheExpedition_k__BackingField = 1;
}


void __fastcall viewDogIcon__IsSelectSetFalse(viewDogIcon_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectSprite; // x0

  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 0;
  if ( !selectSprite
    || (selectSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectSprite, 0LL)) == 0LL )
  {
    sub_B7769C(selectSprite, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)selectSprite,
    this->fields._IsSelect_k__BackingField,
    0LL);
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
  UILabel_o *compatibilityLabel; // x24
  System_String_o *v12; // x25
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_o *onAnExpedition; // x0
  System_String_o *v16; // x1
  UILabel_o *onAnExpeditionLabel; // x24
  UIWidget_o *v18; // x24
  int v19; // s0
  UIWidget_o *nameLabel; // x24
  int v24; // s0
  UIWidget_o *v28; // x24
  int v29; // s0
  UILabel_o *timeRequiredTextLabel; // x24
  UILabel_o *timeRequiredNumLabel; // x24
  viewDogIcon_o *v35; // x0
  const MethodInfo *v36; // x2
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventExpeditionPieceEntity_o *v44; // x8
  UISprite_o *icon; // x22
  Il2CppObject *v46; // x0
  System_String_o *v47; // x23
  int32_t iconImageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4389F0A & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_19772/*"icon_{0}"*/);
    sub_B775C4(&StringLiteral_5916/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/);
    sub_B775C4(&StringLiteral_5920/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/);
    sub_B775C4(&StringLiteral_16035/*"[FFFF00]{0}[-]"*/);
    sub_B775C4(&StringLiteral_5921/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/);
    byte_4389F0A = 1;
  }
  if ( compatibilityPercent >= 1 )
  {
    compatibilityLabel = this->fields.compatibilityLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5916/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, 0LL);
    v49 = compatibilityPercent;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v13);
    onAnExpedition = System_String__Format(v12, v14, 0LL);
    if ( !compatibilityLabel )
LABEL_38:
      sub_B7769C(onAnExpedition, v16);
    UILabel__set_text(compatibilityLabel, onAnExpedition, 0LL);
  }
  if ( this->fields._IsDoingTheExpedition_k__BackingField )
  {
    onAnExpeditionLabel = this->fields.onAnExpeditionLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5920/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, 0LL);
    if ( !onAnExpeditionLabel )
      goto LABEL_38;
    UILabel__set_text(onAnExpeditionLabel, onAnExpedition, 0LL);
    onAnExpedition = (System_String_o *)this->fields.onAnExpedition;
    if ( !onAnExpedition )
      goto LABEL_38;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)onAnExpedition, 1, 0LL);
    onAnExpedition = (System_String_o *)this->fields.button;
    if ( !onAnExpedition )
      goto LABEL_38;
    ((void (__fastcall *)(System_String_o *, _QWORD, Il2CppMethodPointer))onAnExpedition->klass->vtable._5_Clone.method)(
      onAnExpedition,
      0LL,
      onAnExpedition->klass->vtable._6_GetTypeCode.methodPtr);
    v18 = (UIWidget_o *)this->fields.compatibilityLabel;
    *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_gray(0LL);
    if ( !v18 )
      goto LABEL_38;
    UIWidget__set_color(v18, *(UnityEngine_Color_o *)&v19, 0LL);
    nameLabel = (UIWidget_o *)this->fields.nameLabel;
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL);
    if ( !nameLabel )
      goto LABEL_38;
  }
  else
  {
    v28 = (UIWidget_o *)this->fields.compatibilityLabel;
    *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
    if ( !v28 )
      goto LABEL_38;
    UIWidget__set_color(v28, *(UnityEngine_Color_o *)&v29, 0LL);
    nameLabel = (UIWidget_o *)this->fields.nameLabel;
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
    if ( !nameLabel )
      goto LABEL_38;
  }
  UIWidget__set_color(nameLabel, *(UnityEngine_Color_o *)&v24, 0LL);
  timeRequiredTextLabel = this->fields.timeRequiredTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5921/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, 0LL);
  if ( !timeRequiredTextLabel )
    goto LABEL_38;
  UILabel__set_text(timeRequiredTextLabel, onAnExpedition, 0LL);
  timeRequiredNumLabel = this->fields.timeRequiredNumLabel;
  onAnExpedition = viewDogIcon__GetExpeditionTimeLabel(v35, timeRequiredNum, v36);
  v16 = onAnExpedition;
  if ( compatibilityPercent >= 1 )
  {
    onAnExpedition = System_String__Format((System_String_o *)StringLiteral_16035/*"[FFFF00]{0}[-]"*/, (Il2CppObject *)onAnExpedition, 0LL);
    v16 = onAnExpedition;
  }
  if ( !timeRequiredNumLabel )
    goto LABEL_38;
  UILabel__set_text(timeRequiredNumLabel, v16, 0LL);
  EventExpeditionPieceEntity_k__BackingField = this->fields._EventExpeditionPieceEntity_k__BackingField;
  if ( !EventExpeditionPieceEntity_k__BackingField )
    goto LABEL_38;
  onAnExpedition = (System_String_o *)this->fields.nameLabel;
  if ( !onAnExpedition )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)onAnExpedition, EventExpeditionPieceEntity_k__BackingField->fields.name, 0LL);
  onAnExpedition = (System_String_o *)this->fields.dispLabelRoot;
  if ( !onAnExpedition )
    goto LABEL_38;
  onAnExpedition = (System_String_o *)UnityEngine_GameObject__get_activeSelf(
                                        (UnityEngine_GameObject_o *)onAnExpedition,
                                        0LL);
  if ( ((unsigned __int8)onAnExpedition & 1) != 0 )
  {
    v44 = this->fields._EventExpeditionPieceEntity_k__BackingField;
    if ( !v44 )
      goto LABEL_38;
    icon = this->fields.icon;
    iconImageId = v44->fields.iconImageId;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId, v38);
    v47 = System_String__Format((System_String_o *)StringLiteral_19772/*"icon_{0}"*/, v46, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_24479740(eventId, icon, v47, 0LL);
  }
  this->fields.onClickPanel = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.onClickPanel,
    (System_Int32_array **)callback,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
  sub_B77560(
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