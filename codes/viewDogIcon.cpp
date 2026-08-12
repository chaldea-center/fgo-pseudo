void viewDogIcon___ctor(viewDogIcon_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_596A618 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21392/*"img_frameselect"*/);
    byte_596A618 = 1;
  }
  v9 = StringLiteral_21392/*"img_frameselect"*/;
  this->fields.FRAME_SELECT_NAME = (struct System_String_o *)StringLiteral_21392/*"img_frameselect"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.FRAME_SELECT_NAME, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void viewDogIcon__ClickNotReleased(viewDogIcon_o *this, const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0

  if ( (byte_596A617 & 1) == 0 )
  {
    sub_2213A60(&Method_viewDogIcon_ClickNotReleased__);
    byte_596A617 = 1;
  }
  v2 = Method_viewDogIcon_ClickNotReleased__;
  if ( (*((_BYTE *)Method_viewDogIcon_ClickNotReleased__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_viewDogIcon_ClickNotReleased__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 2, 0, 0);
}


void viewDogIcon__ClickPanel(viewDogIcon_o *this, const MethodInfo *method)
{
  System_Action_o *onClickPanel; // x0
  UnityEngine_Component_o *selectSprite; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_596A616 & 1) == 0 )
  {
    sub_2213A60(&Method_viewDogIcon_ClickPanel__);
    byte_596A616 = 1;
  }
  onClickPanel = this->fields.onClickPanel;
  if ( onClickPanel )
    ActionExtensions__Call(onClickPanel, 0);
  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 1;
  if ( !selectSprite
    || (selectSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectSprite, 0)) == 0 )
  {
    sub_2213CDC(selectSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSprite, this->fields._IsSelect_k__BackingField, 0);
  v5 = Method_viewDogIcon_ClickPanel__;
  if ( (*((_BYTE *)Method_viewDogIcon_ClickPanel__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_viewDogIcon_ClickPanel__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
}


System_String_o *viewDogIcon__GetExpeditionTimeLabel(viewDogIcon_o *this, int64_t time, const MethodInfo *method)
{
  unsigned __int64 v4; // x20
  unsigned __int64 v5; // x22
  unsigned __int64 v6; // x21
  System_String_o *v7; // x19
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  unsigned __int64 v12; // [xsp+8h] [xbp-48h] BYREF
  unsigned __int64 v13; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v14; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596A615 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6048/*"EXPEDITION_TIME_FORMAT"*/);
    byte_596A615 = 1;
  }
  if ( time < 1 )
  {
    v4 = 0;
    v6 = 0;
    v5 = 0;
  }
  else
  {
    v4 = time / 0xE10uLL;
    v5 = time % 0x3CuLL;
    v6 = time / 0x3CuLL
       - 60 * ((unsigned __int64)((time / 0x3CuLL * (unsigned __int128)0x888888888888889uLL) >> 64) >> 1);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, time, method);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_6048/*"EXPEDITION_TIME_FORMAT"*/, 0);
  v14 = v4;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v14);
  v13 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v13);
  v12 = v5;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v12);
  return System_String__Format_75697948(v7, v8, v9, v10, 0);
}


void viewDogIcon__Init(
        viewDogIcon_o *this,
        EventExpeditionPieceEntity_o *eventExpeditionPieceEntity,
        const MethodInfo *method)
{
  UILabel_o *compatibilityLabel; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x2
  int32_t eventId; // w21
  UISprite_o *selectSprite; // x22
  System_String_o *FRAME_SELECT_NAME; // x23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  bool v22; // w1

  if ( (byte_596A613 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A613 = 1;
  }
  compatibilityLabel = this->fields.compatibilityLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  compatibilityLabel = this->fields.onAnExpeditionLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  compatibilityLabel = this->fields.timeRequiredTextLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  compatibilityLabel = this->fields.timeRequiredNumLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  compatibilityLabel = this->fields.nameLabel;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UILabel__set_text(compatibilityLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.onClickPanel = 0;
  *(_WORD *)&this->fields._IsSelect_k__BackingField = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClickPanel, 0, v6, v7, v8, v9, v10, v11);
  if ( !eventExpeditionPieceEntity )
    goto LABEL_31;
  eventId = eventExpeditionPieceEntity->fields.eventId;
  selectSprite = this->fields.selectSprite;
  FRAME_SELECT_NAME = this->fields.FRAME_SELECT_NAME;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, eventExpeditionPieceEntity, v12);
  AtlasManager__SetEventUI_47569484(eventId, selectSprite, FRAME_SELECT_NAME, 0);
  compatibilityLabel = (UILabel_o *)this->fields.onAnExpedition;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 0, 0);
  compatibilityLabel = (UILabel_o *)this->fields.selectSprite;
  if ( !compatibilityLabel )
    goto LABEL_31;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0);
  if ( !compatibilityLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)compatibilityLabel,
    this->fields._IsSelect_k__BackingField,
    0);
  this->fields._EventExpeditionPieceEntity_k__BackingField = eventExpeditionPieceEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (int32_t)eventExpeditionPieceEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( eventExpeditionPieceEntity->fields.commonReleaseId )
  {
    compatibilityLabel = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( compatibilityLabel )
    {
      compatibilityLabel = (UILabel_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)compatibilityLabel,
                                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
      if ( compatibilityLabel )
      {
        if ( CommonReleaseMaster__IsOpen(
               (CommonReleaseMaster_o *)compatibilityLabel,
               eventExpeditionPieceEntity->fields.commonReleaseId,
               0,
               0,
               0) )
        {
          goto LABEL_18;
        }
        compatibilityLabel = (UILabel_o *)this->fields.dispLabelRoot;
        if ( compatibilityLabel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 0, 0);
          compatibilityLabel = (UILabel_o *)this->fields.button;
          if ( compatibilityLabel )
          {
            compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)compatibilityLabel,
                                                0);
            if ( compatibilityLabel )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 0, 0);
              compatibilityLabel = (UILabel_o *)this->fields.notReleasedButton;
              if ( compatibilityLabel )
              {
                compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)compatibilityLabel,
                                                    0);
                if ( compatibilityLabel )
                {
                  v22 = 1;
                  goto LABEL_30;
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_2213CDC(compatibilityLabel, eventExpeditionPieceEntity);
  }
LABEL_18:
  compatibilityLabel = (UILabel_o *)this->fields.dispLabelRoot;
  if ( !compatibilityLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 1, 0);
  compatibilityLabel = (UILabel_o *)this->fields.button;
  if ( !compatibilityLabel )
    goto LABEL_31;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0);
  if ( !compatibilityLabel )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, 1, 0);
  compatibilityLabel = (UILabel_o *)this->fields.notReleasedButton;
  if ( !compatibilityLabel )
    goto LABEL_31;
  compatibilityLabel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                      (UnityEngine_Component_o *)compatibilityLabel,
                                      0);
  if ( !compatibilityLabel )
    goto LABEL_31;
  v22 = 0;
LABEL_30:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)compatibilityLabel, v22, 0);
}


void viewDogIcon__IsDoingTheExpeditionTrue(viewDogIcon_o *this, const MethodInfo *method)
{
  this->fields._IsDoingTheExpedition_k__BackingField = 1;
}


void viewDogIcon__IsSelectSetFalse(viewDogIcon_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *selectSprite; // x0

  selectSprite = (UnityEngine_Component_o *)this->fields.selectSprite;
  this->fields._IsSelect_k__BackingField = 0;
  if ( !selectSprite
    || (selectSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(selectSprite, 0)) == 0 )
  {
    sub_2213CDC(selectSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)selectSprite, this->fields._IsSelect_k__BackingField, 0);
}


void viewDogIcon__SerializeFieldNotNullCheck(viewDogIcon_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void viewDogIcon__Set(
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
  Il2CppObject *v13; // x0
  System_String_o *onAnExpedition; // x0
  UILabel_o *onAnExpeditionLabel; // x24
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *timeRequiredTextLabel; // x24
  UILabel_o *timeRequiredNumLabel; // x24
  viewDogIcon_o *v22; // x0
  const MethodInfo *v23; // x2
  struct EventExpeditionPieceEntity_o *EventExpeditionPieceEntity_k__BackingField; // x8
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct EventExpeditionPieceEntity_o *v31; // x8
  UISprite_o *icon; // x22
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x23
  int32_t iconImageId; // [xsp+8h] [xbp-58h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = compatibilityPercent;
  if ( (byte_596A614 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_21230/*"icon_{0}"*/);
    sub_2213A60(&StringLiteral_6030/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/);
    sub_2213A60(&StringLiteral_6034/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/);
    sub_2213A60(&StringLiteral_16550/*"[FFFF00]{0}[-]"*/);
    sub_2213A60(&StringLiteral_6035/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/);
    byte_596A614 = 1;
  }
  if ( v9 >= 1 )
  {
    compatibilityLabel = this->fields.compatibilityLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        LocalizationManager_TypeInfo,
        *(_QWORD *)&compatibilityPercent,
        *(_QWORD *)&timeRequiredNum);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6030/*"EXPEDITION_CONFIRM_DIALOG_COMPATIBILITY"*/, 0);
    v38 = v9;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v38);
    onAnExpedition = System_String__Format(v12, v13, 0);
    if ( !compatibilityLabel )
      goto LABEL_35;
    UILabel__set_text(compatibilityLabel, onAnExpedition, 0);
  }
  if ( this->fields._IsDoingTheExpedition_k__BackingField )
  {
    onAnExpeditionLabel = this->fields.onAnExpeditionLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        LocalizationManager_TypeInfo,
        *(_QWORD *)&compatibilityPercent,
        *(_QWORD *)&timeRequiredNum);
    onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_6034/*"EXPEDITION_CONFIRM_DIALOG_ON_AN_EXPEDITION"*/, 0);
    if ( !onAnExpeditionLabel )
      goto LABEL_35;
    UILabel__set_text(onAnExpeditionLabel, onAnExpedition, 0);
    onAnExpedition = (System_String_o *)this->fields.onAnExpedition;
    if ( !onAnExpedition )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)onAnExpedition, 1, 0);
    onAnExpedition = (System_String_o *)this->fields.button;
    if ( !onAnExpedition )
      goto LABEL_35;
    ((void (__fastcall *)(System_String_o *, _QWORD, const MethodInfo *))onAnExpedition->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
      onAnExpedition,
      0,
      onAnExpedition->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
    onAnExpedition = (System_String_o *)this->fields.compatibilityLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v39.fields.r = 0.5;
    v39.fields.g = 0.5;
    v39.fields.b = 0.5;
    v39.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)onAnExpedition, v39, 0);
    onAnExpedition = (System_String_o *)this->fields.nameLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v40.fields.r = 0.5;
    v40.fields.g = 0.5;
    v40.fields.b = 0.5;
  }
  else
  {
    onAnExpedition = (System_String_o *)this->fields.compatibilityLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v41.fields.r = 1.0;
    v41.fields.g = 1.0;
    v41.fields.b = 1.0;
    v41.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)onAnExpedition, v41, 0);
    onAnExpedition = (System_String_o *)this->fields.nameLabel;
    if ( !onAnExpedition )
      goto LABEL_35;
    v40.fields.r = 1.0;
    v40.fields.g = 1.0;
    v40.fields.b = 1.0;
  }
  v40.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)onAnExpedition, v40, 0);
  timeRequiredTextLabel = this->fields.timeRequiredTextLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  onAnExpedition = LocalizationManager__Get((System_String_o *)StringLiteral_6035/*"EXPEDITION_CONFIRM_DIALOG_TIME_REQUIRED"*/, 0);
  if ( !timeRequiredTextLabel )
    goto LABEL_35;
  UILabel__set_text(timeRequiredTextLabel, onAnExpedition, 0);
  timeRequiredNumLabel = this->fields.timeRequiredNumLabel;
  onAnExpedition = viewDogIcon__GetExpeditionTimeLabel(v22, timeRequiredNum, v23);
  *(_QWORD *)&compatibilityPercent = onAnExpedition;
  if ( v9 >= 1 )
  {
    onAnExpedition = System_String__Format((System_String_o *)StringLiteral_16550/*"[FFFF00]{0}[-]"*/, (Il2CppObject *)onAnExpedition, 0);
    *(_QWORD *)&compatibilityPercent = onAnExpedition;
  }
  if ( !timeRequiredNumLabel )
    goto LABEL_35;
  UILabel__set_text(timeRequiredNumLabel, *(System_String_o **)&compatibilityPercent, 0);
  EventExpeditionPieceEntity_k__BackingField = this->fields._EventExpeditionPieceEntity_k__BackingField;
  if ( !EventExpeditionPieceEntity_k__BackingField )
    goto LABEL_35;
  onAnExpedition = (System_String_o *)this->fields.nameLabel;
  if ( !onAnExpedition )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)onAnExpedition, EventExpeditionPieceEntity_k__BackingField->fields.name, 0);
  onAnExpedition = (System_String_o *)this->fields.dispLabelRoot;
  if ( !onAnExpedition )
    goto LABEL_35;
  onAnExpedition = (System_String_o *)UnityEngine_GameObject__get_activeSelf(
                                        (UnityEngine_GameObject_o *)onAnExpedition,
                                        0);
  if ( ((unsigned __int8)onAnExpedition & 1) == 0 )
    goto LABEL_34;
  v31 = this->fields._EventExpeditionPieceEntity_k__BackingField;
  if ( !v31 )
LABEL_35:
    sub_2213CDC(onAnExpedition, *(_QWORD *)&compatibilityPercent);
  icon = this->fields.icon;
  iconImageId = v31->fields.iconImageId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &iconImageId);
  v36 = System_String__Format((System_String_o *)StringLiteral_21230/*"icon_{0}"*/, v33, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v34, v35);
  AtlasManager__SetEventUI_47569484(eventId, icon, v36, 0);
LABEL_34:
  this->fields.onClickPanel = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickPanel,
    (int32_t)callback,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


EventExpeditionPieceEntity_o *viewDogIcon__get_EventExpeditionPieceEntity(
        viewDogIcon_o *this,
        const MethodInfo *method)
{
  return this->fields._EventExpeditionPieceEntity_k__BackingField;
}


bool viewDogIcon__get_IsDoingTheExpedition(viewDogIcon_o *this, const MethodInfo *method)
{
  return this->fields._IsDoingTheExpedition_k__BackingField;
}


bool viewDogIcon__get_IsSelect(viewDogIcon_o *this, const MethodInfo *method)
{
  return this->fields._IsSelect_k__BackingField;
}


void viewDogIcon__set_EventExpeditionPieceEntity(
        viewDogIcon_o *this,
        EventExpeditionPieceEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventExpeditionPieceEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._EventExpeditionPieceEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void viewDogIcon__set_IsDoingTheExpedition(viewDogIcon_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsDoingTheExpedition_k__BackingField = value;
}


void viewDogIcon__set_IsSelect(viewDogIcon_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSelect_k__BackingField = value;
}