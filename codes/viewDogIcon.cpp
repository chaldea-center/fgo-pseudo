void __fastcall viewDogIcon___ctor(viewDogIcon_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4BCBA40 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20667/*"img_frameselect"*/, method);
    byte_4BCBA40 = 1;
  }
  v9 = StringLiteral_20667/*"img_frameselect"*/;
  this->fields.FRAME_SELECT_NAME = (struct System_String_o *)StringLiteral_20667/*"img_frameselect"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.FRAME_SELECT_NAME, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall viewDogIcon__ClickNotReleased(viewDogIcon_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_4BCBA3F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_viewDogIcon_ClickNotReleased__, method);
    byte_4BCBA3F = 1;
  }
  v2 = Method_viewDogIcon_ClickNotReleased__;
  if ( (*((_BYTE *)Method_viewDogIcon_ClickNotReleased__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C1ABEC(Method_viewDogIcon_ClickNotReleased__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0LL);
}


void __fastcall viewDogIcon__ClickPanel(viewDogIcon_o *this, const MethodInfo *method)
{
  System_Action_o *onClickPanel; // x0
  UnityEngine_Component_o *selectSprite; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4BCBA3E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_viewDogIcon_ClickPanel__, method);
    byte_4BCBA3E = 1;
  }
  onClickPanel = this->fields.onClickPanel;
  if ( onClickPanel )
    ActionExtensions__Call(onClickPanel, 0LL);
  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 1;
  if ( !selectSprite
    || (selectSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectSprite, 0LL)) == 0LL )
  {
    sub_1C1AE30(selectSprite, method);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)selectSprite,
    this->fields._IsSelect_k__BackingField,
    0LL);
  v5 = Method_viewDogIcon_ClickPanel__;
  if ( (*((_BYTE *)Method_viewDogIcon_ClickPanel__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C1ABEC(Method_viewDogIcon_ClickPanel__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  unsigned __int64 v23; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v24; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v25; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BCBA3D & 1) == 0 )
  {
    sub_1C1ABD4(&long_TypeInfo, time);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_5929/*"EXPEDITION_TIME_FORMAT"*/, v5);
    byte_4BCBA3D = 1;
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
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5929/*"EXPEDITION_TIME_FORMAT"*/, 0LL);
  v25 = v8;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v25, v10, v11, v12);
  v24 = v7;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24, v14, v15, v16);
  v23 = v6;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v18, v19, v20);
  return System_String__Format_63054808(v9, v13, v17, v21, 0LL);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int32_t eventId; // w23
  UISprite_o *selectSprite; // x21
  System_String_o *FRAME_SELECT_NAME; // x22
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool v24; // w1

  if ( (byte_4BCBA3B & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, eventExpeditionPieceEntity);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v7);
    byte_4BCBA3B = 1;
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onClickPanel, 0LL, v9, v10, v11, v12, v13, v14);
  if ( !eventExpeditionPieceEntity )
    goto LABEL_31;
  eventId = eventExpeditionPieceEntity->fields.eventId;
  selectSprite = this->fields.selectSprite;
  FRAME_SELECT_NAME = this->fields.FRAME_SELECT_NAME;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39058000(eventId, selectSprite, FRAME_SELECT_NAME, 0LL);
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
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (int64_t)eventExpeditionPieceEntity,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( eventExpeditionPieceEntity->fields.commonReleaseId )
  {
    compatibilityLabel = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( compatibilityLabel )
    {
      compatibilityLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)compatibilityLabel,
                                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
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
                  v24 = 1;
                  goto LABEL_30;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_1C1AE30(compatibilityLabel, eventExpeditionPieceEntity);
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
  v24 = 0;
LABEL_30:
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
    sub_1C1AE30(selectSprite, method);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UILabel_o *compatibilityLabel; // x24
  System_String_o *v19; // x25
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *onAnExpedition; // x0
  UILabel_o *onAnExpeditionLabel; // x24
  float v26; // s8
  float v27; // s9
  UILabel_o *timeRequiredTextLabel; // x24
  UILabel_o *timeRequiredNumLabel; // x24
  viewDogIcon_o *v30; // x0
  const MethodInfo *v31; // x2
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8
  int64_t v33; // x2
  __int64 v34; // x3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct EventExpeditionPieceEntity_o *v39; // x8
  UISprite_o *icon; // x22
  Il2CppObject *v41; // x0
  System_String_o *v42; // x23
  int32_t iconImageId; // [xsp+8h] [xbp-68h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = compatibilityPercent;
  if ( (byte_4BCBA3C & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, *(_QWORD *)&compatibilityPercent);
    sub_1C1ABD4(&int_TypeInfo, v11);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_20538/*"icon_{0}"*/, v13);
    sub_1C1ABD4(&StringLiteral_5911/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, v14);
    sub_1C1ABD4(&StringLiteral_5915/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, v15);
    sub_1C1ABD4(&StringLiteral_16201/*"[FFFF00]{0}[-]"*/, v16);
    sub_1C1ABD4(&StringLiteral_5916/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, v17);
    byte_4BCBA3C = 1;
  }
  if ( v9 >= 1 )
  {
    compatibilityLabel = this->fields.compatibilityLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5911/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, 0LL);
    v44 = v9;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v20, v21, v22);
    onAnExpedition = System_String__Format(v19, v23, 0LL);
    if ( !compatibilityLabel )
LABEL_35:
      sub_1C1AE30(onAnExpedition, *(_QWORD *)&compatibilityPercent);
    UILabel__set_text(compatibilityLabel, onAnExpedition, 0LL);
  }
  if ( this->fields._IsDoingTheExpedition_k__BackingField )
  {
    onAnExpeditionLabel = this->fields.onAnExpeditionLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5915/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, 0LL);
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
    v45.fields.r = 0.5;
    v45.fields.g = 0.5;
    v45.fields.b = 0.5;
    v45.fields.a = 1.0;
    v26 = 0.5;
    v27 = 1.0;
    UIWidget__set_color((UIWidget_o *)onAnExpedition, v45, 0LL);
    onAnExpedition = (System_String_o *)this->fields.nameLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
  }
  else
  {
    onAnExpedition = (System_String_o *)this->fields.compatibilityLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v46.fields.r = 1.0;
    v46.fields.g = 1.0;
    v46.fields.b = 1.0;
    v46.fields.a = 1.0;
    v26 = 1.0;
    UIWidget__set_color((UIWidget_o *)onAnExpedition, v46, 0LL);
    onAnExpedition = (System_String_o *)this->fields.nameLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v27 = 1.0;
  }
  v47.fields.r = v26;
  v47.fields.g = v26;
  v47.fields.b = v26;
  v47.fields.a = v27;
  UIWidget__set_color((UIWidget_o *)onAnExpedition, v47, 0LL);
  timeRequiredTextLabel = this->fields.timeRequiredTextLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_5916/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, 0LL);
  if ( !timeRequiredTextLabel )
    goto LABEL_35;
  UILabel__set_text(timeRequiredTextLabel, onAnExpedition, 0LL);
  timeRequiredNumLabel = this->fields.timeRequiredNumLabel;
  onAnExpedition = viewDogIcon__GetExpeditionTimeLabel(v30, timeRequiredNum, v31);
  *(_QWORD *)&compatibilityPercent = onAnExpedition;
  if ( v9 >= 1 )
  {
    onAnExpedition = System_String__Format((System_String_o *)StringLiteral_16201/*"[FFFF00]{0}[-]"*/, (Il2CppObject *)onAnExpedition, 0LL);
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
    v39 = this->fields._EventExpeditionPieceEntity_k__BackingField;
    if ( !v39 )
      goto LABEL_35;
    icon = this->fields.icon;
    iconImageId = v39->fields.iconImageId;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &iconImageId, v33, v34, v35);
    v42 = System_String__Format((System_String_o *)StringLiteral_20538/*"icon_{0}"*/, v41, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_39058000(eventId, icon, v42, 0LL);
  }
  this->fields.onClickPanel = callback;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.onClickPanel, (int64_t)callback, v33, v34, v35, v36, v37, v38);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventExpeditionPieceEntity_k__BackingField = value;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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