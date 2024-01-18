void __fastcall viewDogIcon___ctor(viewDogIcon_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4186B91 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19493/*"img_frameselect"*/, method);
    byte_4186B91 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_19493/*"img_frameselect"*/;
  this->fields.FRAME_SELECT_NAME = (struct System_String_o *)StringLiteral_19493/*"img_frameselect"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.FRAME_SELECT_NAME, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall viewDogIcon__ClickNotReleased(viewDogIcon_o *this, const MethodInfo *method)
{
  if ( (byte_4186B90 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186B90 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall viewDogIcon__ClickPanel(viewDogIcon_o *this, const MethodInfo *method)
{
  System_Action_o *onClickPanel; // x0
  UnityEngine_Component_o *selectSprite; // x0

  if ( (byte_4186B8F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4186B8F = 1;
  }
  onClickPanel = this->fields.onClickPanel;
  if ( onClickPanel )
    ActionExtensions__Call(onClickPanel, 0LL);
  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 1;
  if ( !selectSprite
    || (selectSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectSprite, 0LL)) == 0LL )
  {
    sub_B2C434(selectSprite, method);
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

  if ( (byte_4186B8E & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, time);
    sub_B2C35C(&LocalizationManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5789/*"EXPEDITION_TIME_FORMAT"*/, v5);
    byte_4186B8E = 1;
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
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5789/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v16 = v8;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v16);
  v15 = v7;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
  v14 = v6;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v14);
  return System_String__Format_44306596(v9, v10, v11, v12, 0LL);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t eventId; // w23
  UISprite_o *selectSprite; // x21
  System_String_o *FRAME_SELECT_NAME; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool v24; // w1

  if ( (byte_4186B8C & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, eventExpeditionPieceEntity);
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_4186B8C = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onClickPanel, 0LL, v9, v10, v11, v12, v13, v14);
  if ( !eventExpeditionPieceEntity )
    goto LABEL_32;
  eventId = eventExpeditionPieceEntity->fields.eventId;
  selectSprite = this->fields.selectSprite;
  FRAME_SELECT_NAME = this->fields.FRAME_SELECT_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, selectSprite, FRAME_SELECT_NAME, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (System_Int32_array **)eventExpeditionPieceEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( eventExpeditionPieceEntity->fields.commonReleaseId )
  {
    compatibilityLabel = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( compatibilityLabel )
    {
      compatibilityLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)compatibilityLabel,
                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
                  v24 = 1;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B2C434(compatibilityLabel, eventExpeditionPieceEntity);
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
  v24 = 0;
LABEL_31:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, v24, 0LL);
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
    sub_B2C434(selectSprite, method);
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
  System_String_o *onAnExpedition; // x0
  System_String_o *v22; // x1
  UILabel_o *onAnExpeditionLabel; // x24
  UIWidget_o *v24; // x24
  int v25; // s0
  UIWidget_o *nameLabel; // x24
  int v30; // s0
  UIWidget_o *v34; // x24
  int v35; // s0
  UILabel_o *timeRequiredTextLabel; // x24
  UILabel_o *timeRequiredNumLabel; // x24
  viewDogIcon_o *v41; // x0
  const MethodInfo *v42; // x2
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct EventExpeditionPieceEntity_o *v50; // x8
  UISprite_o *icon; // x22
  Il2CppObject *v52; // x0
  System_String_o *v53; // x23
  int32_t iconImageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4186B8D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&compatibilityPercent);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_19379/*"icon_{0}"*/, v13);
    sub_B2C35C(&StringLiteral_5771/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, v14);
    sub_B2C35C(&StringLiteral_5775/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, v15);
    sub_B2C35C(&StringLiteral_15744/*"[FFFF00]{0}[-]"*/, v16);
    sub_B2C35C(&StringLiteral_5776/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, v17);
    byte_4186B8D = 1;
  }
  if ( compatibilityPercent >= 1 )
  {
    compatibilityLabel = this->fields.compatibilityLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5771/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, 0LL);
    v55 = compatibilityPercent;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
    onAnExpedition = System_String__Format(v19, v20, 0LL);
    if ( !compatibilityLabel )
LABEL_38:
      sub_B2C434(onAnExpedition, v22);
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
    onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5775/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, 0LL);
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
    v24 = (UIWidget_o *)this->fields.compatibilityLabel;
    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_gray(0LL);
    if ( !v24 )
      goto LABEL_38;
    UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v25, 0LL);
    nameLabel = (UIWidget_o *)this->fields.nameLabel;
    *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_gray(0LL);
    if ( !nameLabel )
      goto LABEL_38;
  }
  else
  {
    v34 = (UIWidget_o *)this->fields.compatibilityLabel;
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
    if ( !v34 )
      goto LABEL_38;
    UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
    nameLabel = (UIWidget_o *)this->fields.nameLabel;
    *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
    if ( !nameLabel )
      goto LABEL_38;
  }
  UIWidget__set_color(nameLabel, *(UnityEngine_Color_o *)&v30, 0LL);
  timeRequiredTextLabel = this->fields.timeRequiredTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5776/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, 0LL);
  if ( !timeRequiredTextLabel )
    goto LABEL_38;
  UILabel__set_text(timeRequiredTextLabel, onAnExpedition, 0LL);
  timeRequiredNumLabel = this->fields.timeRequiredNumLabel;
  onAnExpedition = viewDogIcon__GetExpeditionTimeLabel(v41, timeRequiredNum, v42);
  v22 = onAnExpedition;
  if ( compatibilityPercent >= 1 )
  {
    onAnExpedition = System_String__Format((System_String_o *)StringLiteral_15744/*"[FFFF00]{0}[-]"*/, (Il2CppObject *)onAnExpedition, 0LL);
    v22 = onAnExpedition;
  }
  if ( !timeRequiredNumLabel )
    goto LABEL_38;
  UILabel__set_text(timeRequiredNumLabel, v22, 0LL);
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
    v50 = this->fields._EventExpeditionPieceEntity_k__BackingField;
    if ( !v50 )
      goto LABEL_38;
    icon = this->fields.icon;
    iconImageId = v50->fields.iconImageId;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId);
    v53 = System_String__Format((System_String_o *)StringLiteral_19379/*"icon_{0}"*/, v52, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28451336(eventId, icon, v53, 0LL);
  }
  this->fields.onClickPanel = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.onClickPanel,
    (System_Int32_array **)callback,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
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
  sub_B2C2F8(
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