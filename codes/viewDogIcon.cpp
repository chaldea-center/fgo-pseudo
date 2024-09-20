void __fastcall viewDogIcon___ctor(viewDogIcon_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5EEC2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20318/*"img_frameselect"*/);
    byte_4A5EEC2 = 1;
  }
  v5 = StringLiteral_20318/*"img_frameselect"*/;
  this->fields.FRAME_SELECT_NAME = (struct System_String_o *)StringLiteral_20318/*"img_frameselect"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FRAME_SELECT_NAME, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall viewDogIcon__ClickNotReleased(viewDogIcon_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4A5EEC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_viewDogIcon_ClickNotReleased__);
    byte_4A5EEC1 = 1;
  }
  v2 = Method_viewDogIcon_ClickNotReleased__;
  if ( (*((_BYTE *)Method_viewDogIcon_ClickNotReleased__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1B885C8(Method_viewDogIcon_ClickNotReleased__);
  v3 = (System_Reflection_MethodBase_o *)sub_1B88594(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0LL);
}


void __fastcall viewDogIcon__ClickPanel(viewDogIcon_o *this, const MethodInfo *method)
{
  System_Action_o *onClickPanel; // x0
  UnityEngine_Component_o *selectSprite; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4A5EEC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_viewDogIcon_ClickPanel__);
    byte_4A5EEC0 = 1;
  }
  onClickPanel = this->fields.onClickPanel;
  if ( onClickPanel )
    ActionExtensions__Call(onClickPanel, 0LL);
  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 1;
  if ( !selectSprite
    || (selectSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectSprite, 0LL)) == 0LL )
  {
    sub_1B8880C(selectSprite, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)selectSprite,
    this->fields._IsSelect_k__BackingField,
    0LL);
  v5 = Method_viewDogIcon_ClickPanel__;
  if ( (*((_BYTE *)Method_viewDogIcon_ClickPanel__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_viewDogIcon_ClickPanel__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x20
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  unsigned __int64 v21; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v22; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v23; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5EEBF & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5783/*"EXPEDITION_TIME_FORMAT"*/);
    byte_4A5EEBF = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5783/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v23 = v6;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v8, v9, v10);
  v22 = v5;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v12, v13, v14);
  v21 = v4;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v21, v16, v17, v18);
  return System_String__Format_61721472(v7, v11, v15, v19, 0LL);
}


void __fastcall viewDogIcon__Init(
        viewDogIcon_o *this,
        EventExpeditionPieceEntity_o *eventExpeditionPieceEntity,
        const MethodInfo *method)
{
  UILabel_o *compatibilityLabel; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t eventId; // w23
  UISprite_o *selectSprite; // x21
  System_String_o *FRAME_SELECT_NAME; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  bool v13; // w1

  if ( (byte_4A5EEBD & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EEBD = 1;
  }
  compatibilityLabel = this->fields.compatibilityLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  compatibilityLabel = this->fields.onAnExpeditionLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  compatibilityLabel = this->fields.timeRequiredTextLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  compatibilityLabel = this->fields.timeRequiredNumLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  compatibilityLabel = this->fields.nameLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.onClickPanel = 0LL;
  *(_WORD *)&this->fields._IsSelect_k__BackingField = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickPanel, 0, v6, v7);
  if ( !eventExpeditionPieceEntity )
    goto LABEL_31;
  eventId = eventExpeditionPieceEntity->fields.eventId;
  selectSprite = this->fields.selectSprite;
  FRAME_SELECT_NAME = this->fields.FRAME_SELECT_NAME;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, selectSprite, FRAME_SELECT_NAME, 0LL);
  compatibilityLabel = (UILabel_o *)this->fields.onAnExpedition;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 0, 0LL);
  compatibilityLabel = (UILabel_o *)this->fields.selectSprite;
  if ( !compatibilityLabel )
    goto LABEL_31;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0LL);
  if ( !compatibilityLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)compatibilityLabel,
    this->fields._IsSelect_k__BackingField,
    0LL);
  this->fields._EventExpeditionPieceEntity_k__BackingField = eventExpeditionPieceEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (int32_t)eventExpeditionPieceEntity,
    v11,
    v12);
  if ( eventExpeditionPieceEntity->fields.commonReleaseId )
  {
    compatibilityLabel = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( compatibilityLabel )
    {
      compatibilityLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)compatibilityLabel,
                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( compatibilityLabel )
      {
        if ( CommonReleaseMaster__IsOpen(
               (CommonReleaseMaster_o *)compatibilityLabel,
               eventExpeditionPieceEntity->fields.commonReleaseId,
               0LL,
               0,
               0LL) )
        {
          goto LABEL_18;
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
                  v13 = 1;
                  goto LABEL_30;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1B8880C(compatibilityLabel, eventExpeditionPieceEntity);
  }
LABEL_18:
  compatibilityLabel = (UILabel_o *)this->fields.dispLabelRoot;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 1, 0LL);
  compatibilityLabel = (UILabel_o *)this->fields.button;
  if ( !compatibilityLabel )
    goto LABEL_31;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0LL);
  if ( !compatibilityLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 1, 0LL);
  compatibilityLabel = (UILabel_o *)this->fields.notReleasedButton;
  if ( !compatibilityLabel )
    goto LABEL_31;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0LL);
  if ( !compatibilityLabel )
    goto LABEL_31;
  v13 = 0;
LABEL_30:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, v13, 0LL);
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
    sub_1B8880C(selectSprite, method);
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
  int32_t v9; // w22
  UILabel_o *compatibilityLabel; // x24
  System_String_o *v12; // x25
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *onAnExpedition; // x0
  UILabel_o *onAnExpeditionLabel; // x24
  float v19; // s8
  float v20; // s9
  UILabel_o *timeRequiredTextLabel; // x24
  UILabel_o *timeRequiredNumLabel; // x24
  viewDogIcon_o *v23; // x0
  const MethodInfo *v24; // x2
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct EventExpeditionPieceEntity_o *v29; // x8
  UISprite_o *icon; // x22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x23
  int32_t iconImageId; // [xsp+8h] [xbp-68h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = compatibilityPercent;
  if ( (byte_4A5EEBE & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20198/*"icon_{0}"*/);
    sub_1B885B0(&StringLiteral_5765/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/);
    sub_1B885B0(&StringLiteral_5769/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/);
    sub_1B885B0(&StringLiteral_15937/*"[FFFF00]{0}[-]"*/);
    sub_1B885B0(&StringLiteral_5770/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/);
    byte_4A5EEBE = 1;
  }
  if ( v9 >= 1 )
  {
    compatibilityLabel = this->fields.compatibilityLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5765/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, 0LL);
    v34 = v9;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v13, v14, v15);
    onAnExpedition = System_String__Format(v12, v16, 0LL);
    if ( !compatibilityLabel )
LABEL_35:
      sub_1B8880C(onAnExpedition, *(_QWORD *)&compatibilityPercent);
    UILabel__set_text(compatibilityLabel, onAnExpedition, 0LL);
  }
  if ( this->fields._IsDoingTheExpedition_k__BackingField )
  {
    onAnExpeditionLabel = this->fields.onAnExpeditionLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5769/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, 0LL);
    if ( !onAnExpeditionLabel )
      goto LABEL_35;
    UILabel__set_text(onAnExpeditionLabel, onAnExpedition, 0LL);
    onAnExpedition = (System_String_o *)this->fields.onAnExpedition;
    if ( !onAnExpedition )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)onAnExpedition, 1, 0LL);
    onAnExpedition = (System_String_o *)this->fields.button;
    if ( !onAnExpedition )
      goto LABEL_35;
    ((void (__fastcall *)(System_String_o *, _QWORD, Il2CppMethodPointer))onAnExpedition->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
      onAnExpedition,
      0LL,
      onAnExpedition->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
    onAnExpedition = (System_String_o *)this->fields.compatibilityLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v35.fields.r = 0.5;
    v35.fields.g = 0.5;
    v35.fields.b = 0.5;
    v35.fields.a = 1.0;
    v19 = 0.5;
    v20 = 1.0;
    UIWidget__set_color((UIWidget_o *)onAnExpedition, v35, 0LL);
    onAnExpedition = (System_String_o *)this->fields.nameLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
  }
  else
  {
    onAnExpedition = (System_String_o *)this->fields.compatibilityLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v36.fields.r = 1.0;
    v36.fields.g = 1.0;
    v36.fields.b = 1.0;
    v36.fields.a = 1.0;
    v19 = 1.0;
    UIWidget__set_color((UIWidget_o *)onAnExpedition, v36, 0LL);
    onAnExpedition = (System_String_o *)this->fields.nameLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v20 = 1.0;
  }
  v37.fields.r = v19;
  v37.fields.g = v19;
  v37.fields.b = v19;
  v37.fields.a = v20;
  UIWidget__set_color((UIWidget_o *)onAnExpedition, v37, 0LL);
  timeRequiredTextLabel = this->fields.timeRequiredTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5770/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, 0LL);
  if ( !timeRequiredTextLabel )
    goto LABEL_35;
  UILabel__set_text(timeRequiredTextLabel, onAnExpedition, 0LL);
  timeRequiredNumLabel = this->fields.timeRequiredNumLabel;
  onAnExpedition = viewDogIcon__GetExpeditionTimeLabel(v23, timeRequiredNum, v24);
  *(_QWORD *)&compatibilityPercent = onAnExpedition;
  if ( v9 >= 1 )
  {
    onAnExpedition = System_String__Format((System_String_o *)StringLiteral_15937/*"[FFFF00]{0}[-]"*/, (Il2CppObject *)onAnExpedition, 0LL);
    *(_QWORD *)&compatibilityPercent = onAnExpedition;
  }
  if ( !timeRequiredNumLabel )
    goto LABEL_35;
  UILabel__set_text(timeRequiredNumLabel, *(System_String_o **)&compatibilityPercent, 0LL);
  EventExpeditionPieceEntity_k__BackingField = this->fields._EventExpeditionPieceEntity_k__BackingField;
  if ( !EventExpeditionPieceEntity_k__BackingField )
    goto LABEL_35;
  onAnExpedition = (System_String_o *)this->fields.nameLabel;
  if ( !onAnExpedition )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)onAnExpedition, EventExpeditionPieceEntity_k__BackingField->fields.name, 0LL);
  onAnExpedition = (System_String_o *)this->fields.dispLabelRoot;
  if ( !onAnExpedition )
    goto LABEL_35;
  onAnExpedition = (System_String_o *)UnityEngine_GameObject__get_activeSelf(
                                        (UnityEngine_GameObject_o *)onAnExpedition,
                                        0LL);
  if ( ((unsigned __int8)onAnExpedition & 1) != 0 )
  {
    v29 = this->fields._EventExpeditionPieceEntity_k__BackingField;
    if ( !v29 )
      goto LABEL_35;
    icon = this->fields.icon;
    iconImageId = v29->fields.iconImageId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId, v26, v27, v28);
    v32 = System_String__Format((System_String_o *)StringLiteral_20198/*"icon_{0}"*/, v31, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(eventId, icon, v32, 0LL);
  }
  this->fields.onClickPanel = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClickPanel, (int32_t)callback, v26, v27);
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
  int32_t v3; // w3

  this->fields._EventExpeditionPieceEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall viewDogIcon__set_IsDoingTheExpedition(viewDogIcon_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsDoingTheExpedition_k__BackingField = value;
}


void __fastcall viewDogIcon__set_IsSelect(viewDogIcon_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSelect_k__BackingField = value;
}