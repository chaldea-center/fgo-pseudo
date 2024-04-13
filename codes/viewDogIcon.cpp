void __fastcall viewDogIcon___ctor(viewDogIcon_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E74FD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19740/*"img_frameselect"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E74FD = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_19740/*"img_frameselect"*/;
  this->fields.FRAME_SELECT_NAME = (struct System_String_o *)StringLiteral_19740/*"img_frameselect"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.FRAME_SELECT_NAME, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall viewDogIcon__ClickNotReleased(viewDogIcon_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E74FC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74FC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


void __fastcall viewDogIcon__ClickPanel(viewDogIcon_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *onClickPanel; // x0
  UnityEngine_Component_o *selectSprite; // x0

  if ( (byte_42E74FB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E74FB = 1;
  }
  onClickPanel = this->fields.onClickPanel;
  if ( onClickPanel )
    ActionExtensions__Call(onClickPanel, 0LL);
  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 1;
  if ( !selectSprite
    || (selectSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectSprite, 0LL)) == 0LL )
  {
    sub_B5D69C(selectSprite, method);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  unsigned __int64 v11; // x22
  unsigned __int64 v12; // x21
  unsigned __int64 v13; // x20
  System_String_o *v14; // x19
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  unsigned __int64 v19; // [xsp+0h] [xbp-40h] BYREF
  unsigned __int64 v20; // [xsp+8h] [xbp-38h] BYREF
  unsigned __int64 v21; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E74FA & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, time, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5866/*"EXPEDITION_TIME_FORMAT"*/, v8, v9, v10);
    byte_42E74FA = 1;
  }
  if ( time < 1 )
  {
    v13 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
  }
  else
  {
    v11 = time % 0x3CuLL;
    v12 = time / 0x3CuLL % 0x3C;
    v13 = time / 0xE10uLL;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5866/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v21 = v13;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21);
  v20 = v12;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
  v19 = v11;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v19);
  return System_String__Format_44578852(v14, v15, v16, v17, 0LL);
}


void __fastcall viewDogIcon__Init(
        viewDogIcon_o *this,
        EventExpeditionPieceEntity_o *eventExpeditionPieceEntity,
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
  UILabel_o *compatibilityLabel; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t eventId; // w23
  UISprite_o *selectSprite; // x21
  System_String_o *FRAME_SELECT_NAME; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  bool v31; // w1

  if ( (byte_42E74F8 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)eventExpeditionPieceEntity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42E74F8 = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClickPanel, 0LL, v16, v17, v18, v19, v20, v21);
  if ( !eventExpeditionPieceEntity )
    goto LABEL_32;
  eventId = eventExpeditionPieceEntity->fields.eventId;
  selectSprite = this->fields.selectSprite;
  FRAME_SELECT_NAME = this->fields.FRAME_SELECT_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, selectSprite, FRAME_SELECT_NAME, 0LL);
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
  sub_B5D560(
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
    compatibilityLabel = (UILabel_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( compatibilityLabel )
    {
      compatibilityLabel = (UILabel_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)compatibilityLabel,
                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
                  v31 = 1;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
    }
LABEL_32:
    sub_B5D69C(compatibilityLabel, eventExpeditionPieceEntity);
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
  v31 = 0;
LABEL_31:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, v31, 0LL);
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
    sub_B5D69C(selectSprite, method);
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UILabel_o *compatibilityLabel; // x24
  System_String_o *v33; // x25
  Il2CppObject *v34; // x0
  System_String_o *onAnExpedition; // x0
  System_String_o *v36; // x1
  UILabel_o *onAnExpeditionLabel; // x24
  UIWidget_o *v38; // x24
  int v39; // s0
  UIWidget_o *nameLabel; // x24
  int v44; // s0
  UIWidget_o *v48; // x24
  int v49; // s0
  UILabel_o *timeRequiredTextLabel; // x24
  UILabel_o *timeRequiredNumLabel; // x24
  viewDogIcon_o *v55; // x0
  const MethodInfo *v56; // x2
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct EventExpeditionPieceEntity_o *v64; // x8
  UISprite_o *icon; // x22
  Il2CppObject *v66; // x0
  System_String_o *v67; // x23
  int32_t iconImageId; // [xsp+8h] [xbp-38h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E74F9 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, compatibilityPercent, timeRequiredNum, *(_QWORD *)&eventId);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_19623/*"icon_{0}"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5848/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5852/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_15934/*"[FFFF00]{0}[-]"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_5853/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, v29, v30, v31);
    byte_42E74F9 = 1;
  }
  if ( compatibilityPercent >= 1 )
  {
    compatibilityLabel = this->fields.compatibilityLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5848/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, 0LL);
    v69 = compatibilityPercent;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
    onAnExpedition = System_String__Format(v33, v34, 0LL);
    if ( !compatibilityLabel )
LABEL_38:
      sub_B5D69C(onAnExpedition, v36);
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
    onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5852/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, 0LL);
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
    v38 = (UIWidget_o *)this->fields.compatibilityLabel;
    *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_gray(0LL);
    if ( !v38 )
      goto LABEL_38;
    UIWidget__set_color(v38, *(UnityEngine_Color_o *)&v39, 0LL);
    nameLabel = (UIWidget_o *)this->fields.nameLabel;
    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_gray(0LL);
    if ( !nameLabel )
      goto LABEL_38;
  }
  else
  {
    v48 = (UIWidget_o *)this->fields.compatibilityLabel;
    *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
    if ( !v48 )
      goto LABEL_38;
    UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v49, 0LL);
    nameLabel = (UIWidget_o *)this->fields.nameLabel;
    *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
    if ( !nameLabel )
      goto LABEL_38;
  }
  UIWidget__set_color(nameLabel, *(UnityEngine_Color_o *)&v44, 0LL);
  timeRequiredTextLabel = this->fields.timeRequiredTextLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5853/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, 0LL);
  if ( !timeRequiredTextLabel )
    goto LABEL_38;
  UILabel__set_text(timeRequiredTextLabel, onAnExpedition, 0LL);
  timeRequiredNumLabel = this->fields.timeRequiredNumLabel;
  onAnExpedition = viewDogIcon__GetExpeditionTimeLabel(v55, timeRequiredNum, v56);
  v36 = onAnExpedition;
  if ( compatibilityPercent >= 1 )
  {
    onAnExpedition = System_String__Format((System_String_o *)StringLiteral_15934/*"[FFFF00]{0}[-]"*/, (Il2CppObject *)onAnExpedition, 0LL);
    v36 = onAnExpedition;
  }
  if ( !timeRequiredNumLabel )
    goto LABEL_38;
  UILabel__set_text(timeRequiredNumLabel, v36, 0LL);
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
    v64 = this->fields._EventExpeditionPieceEntity_k__BackingField;
    if ( !v64 )
      goto LABEL_38;
    icon = this->fields.icon;
    iconImageId = v64->fields.iconImageId;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId);
    v67 = System_String__Format((System_String_o *)StringLiteral_19623/*"icon_{0}"*/, v66, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(eventId, icon, v67, 0LL);
  }
  this->fields.onClickPanel = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClickPanel,
    (System_Int32_array **)callback,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
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
  sub_B5D560(
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