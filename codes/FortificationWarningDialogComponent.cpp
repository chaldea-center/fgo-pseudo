void FortificationWarningDialogComponent___ctor(FortificationWarningDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A6BE & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596A6BE = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortificationWarningDialogComponent__Close(FortificationWarningDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *checkedSp; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  bool activeSelf; // w20
  TerminalPramsManager_c *v7; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_Action_c *v9; // x0
  System_Action_o *v10; // x20

  if ( (byte_596A6BC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FortificationWarningDialogComponent__Close_b__16_0__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A6BC = 1;
  }
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  this->fields.state = 4;
  if ( !checkedSp || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0)) == 0 )
    sub_2213CDC(checkedSp, method);
  activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)checkedSp, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
  if ( !byte_596A745 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A745 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4, v5);
    v7 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  v9 = System_Action_TypeInfo;
  static_fields->_isFortificationCheck_k__BackingField = activeSelf;
  v10 = (System_Action_o *)sub_2213CCC(v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Close_b__16_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void FortificationWarningDialogComponent__Init(FortificationWarningDialogComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FortificationWarningDialogComponent__OnClickCancel(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_596A6BB & 1) == 0 )
  {
    sub_2213A60(&Method_FortificationWarningDialogComponent_OnClickCancel__);
    byte_596A6BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationWarningDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FortificationWarningDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FortificationWarningDialogComponent__Close(this, v5);
  }
}


void FortificationWarningDialogComponent__OnClickCheckBtn(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *checkedSp; // x0
  UnityEngine_Component_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19

  if ( (byte_596A6B9 & 1) == 0 )
  {
    sub_2213A60(&Method_FortificationWarningDialogComponent_OnClickCheckBtn__);
    byte_596A6B9 = 1;
  }
  v3 = Method_FortificationWarningDialogComponent_OnClickCheckBtn__;
  if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickCheckBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_FortificationWarningDialogComponent_OnClickCheckBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  checkedSp = (UnityEngine_Component_o *)this->fields.checkedSp;
  if ( !checkedSp
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(checkedSp, 0),
        (v7 = (UnityEngine_Component_o *)this->fields.checkedSp) == 0)
    || (v8 = (UnityEngine_GameObject_o *)checkedSp,
        (checkedSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(v7, 0)) == 0)
    || (checkedSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                 (UnityEngine_GameObject_o *)checkedSp,
                                                 0),
        !v8) )
  {
    sub_2213CDC(checkedSp, v5);
  }
  UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)checkedSp & 1) == 0, 0);
}


void FortificationWarningDialogComponent__OnClickDecide(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t EventID; // w20
  EventRewardSceneEntity_array *Master_object; // x0
  const MethodInfo *v12; // x1
  EventRewardSceneEntity_o *v13; // x8
  int32_t slot; // w22
  SceneJumpInfo_o *v15; // x21

  if ( (byte_596A6BA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_FortificationWarningDialogComponent_OnClickDecide__);
    sub_2213A60(&SceneJumpInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A6BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationWarningDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationWarningDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_FortificationWarningDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
    if ( !byte_596A743 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A743 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      v7 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v7->static_fields->_WarId_k__BackingField, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
    if ( Master_object )
    {
      Master_object = EventRewardSceneMaster__getEntityFromIdAndEventType(
                        (EventRewardSceneMaster_o *)Master_object,
                        EventID,
                        15,
                        0);
      if ( !Master_object )
      {
LABEL_21:
        FortificationWarningDialogComponent__Close(this, v12);
        return;
      }
      if ( !LODWORD(Master_object->max_length) )
        sub_2213CE4(Master_object);
      v13 = Master_object->m_Items[0];
      if ( v13 )
      {
        slot = v13->fields.slot;
        v15 = (SceneJumpInfo_o *)sub_2213CCC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_48464976(v15, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0);
        if ( v15 )
        {
          SceneJumpInfo__SetReturnNowScene(v15, 0);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v15, 0);
            goto LABEL_21;
          }
        }
      }
    }
    sub_2213CDC(Master_object, v12);
  }
}


void FortificationWarningDialogComponent__Open(FortificationWarningDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLb; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UILabel_o *descriptionLb; // x20
  UILabel_o *checkBoxLb; // x20
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v11; // x20

  if ( (byte_596A6B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_FortificationWarningDialogComponent__Open_b__11_0__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_6777/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_6790/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    sub_2213A60(&StringLiteral_6789/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/);
    sub_2213A60(&StringLiteral_6788/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/);
    byte_596A6B8 = 1;
  }
  if ( !this->fields.state )
  {
    titleLb = this->fields.titleLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6790/*"FORTIFICATION_WARNING_DIALOG_TITLE"*/, 0);
    if ( !titleLb )
      goto LABEL_12;
    UILabel__set_text(titleLb, v5, 0);
    descriptionLb = this->fields.descriptionLb;
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6789/*"FORTIFICATION_WARNING_DIALOG_DESCRIPTION"*/, 0);
    if ( !descriptionLb )
      goto LABEL_12;
    UILabel__set_text(descriptionLb, v5, 0);
    checkBoxLb = this->fields.checkBoxLb;
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6788/*"FORTIFICATION_WARNING_DIALOG_CHECKBOX"*/, 0);
    if ( !checkBoxLb
      || (UILabel__set_text(checkBoxLb, v5, 0),
          decideButtonLb = this->fields.decideButtonLb,
          v5 = LocalizationManager__Get((System_String_o *)StringLiteral_6777/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0),
          !decideButtonLb)
      || (UILabel__set_text(decideButtonLb, v5, 0),
          cancelButtonLb = this->fields.cancelButtonLb,
          v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !cancelButtonLb) )
    {
LABEL_12:
      sub_2213CDC(v5, v6);
    }
    UILabel__set_text(cancelButtonLb, v5, 0);
    this->fields.state = 1;
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_FortificationWarningDialogComponent__Open_b__11_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0, 0);
  }
}


void FortificationWarningDialogComponent__SerializeFieldNotNullCheck(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void FortificationWarningDialogComponent___Open_b__11_0(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *FortificationWarningDialogComponent__get_closeBtnObject(
        FortificationWarningDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596A6BD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6BD = 1;
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