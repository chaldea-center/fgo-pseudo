void __fastcall SubmarineScanConfirmDialog___ctor(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A57E4A & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57E4A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineScanConfirmDialog__EndLoad(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v6; // x21
  UILabel_o *titleLabel; // x20
  System_String_o *v8; // x0
  System_Action_o *v9; // x20

  if ( (byte_4A57E46 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__);
    sub_1B885B0(&StringLiteral_5712/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/);
    byte_4A57E46 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.scanId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
  {
    v6 = Entity;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5712/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, 0LL);
    Instance = (DataManager_o *)System_String__Format(v8, (Il2CppObject *)v6[1].monitor, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v9, 0, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(Instance, v4);
  }
}


void __fastcall SubmarineScanConfirmDialog__Init(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *executeLabel; // x20
  UILabel_o *cancelLabel; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57E44 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_5720/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57E44 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  executeLabel = this->fields.executeLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5720/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, 0LL);
  if ( !executeLabel
    || (UILabel__set_text(executeLabel, (System_String_o *)titleLabel, 0LL),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_10:
    sub_1B8880C(titleLabel, v3);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v7, v8);
}


void __fastcall SubmarineScanConfirmDialog__OnClickCancelButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A57E47 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineScanConfirmDialog_OnClickCancelButton__);
    sub_1B885B0(&Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__);
    byte_4A57E47 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_SubmarineScanConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_SubmarineScanConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SubmarineScanConfirmDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall SubmarineScanConfirmDialog__OnClickExecuteButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4A57E48 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineScanConfirmDialog_OnClickExecuteButton__);
    sub_1B885B0(&Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__);
    byte_4A57E48 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SubmarineScanConfirmDialog_OnClickExecuteButton__;
    if ( (*((_BYTE *)Method_SubmarineScanConfirmDialog_OnClickExecuteButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SubmarineScanConfirmDialog_OnClickExecuteButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineScanConfirmDialog__Open(
        SubmarineScanConfirmDialog_o *this,
        int32_t scanId,
        bool isShowDialogUpper,
        System_Action_bool__o *closeAction,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_dialogPositionUpperSide; // x8
  float *p_y; // x10
  const MethodInfo *v16; // x1
  System_Action_o *v17; // x20
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57E45 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_1B885B0(&Method_SubmarineScanConfirmDialog_EndLoad__);
    byte_4A57E45 = 1;
  }
  SubmarineScanConfirmDialog__Init(this, *(const MethodInfo **)&scanId);
  this->fields.closeAction = closeAction;
  this->fields.state = 1;
  this->fields.scanId = scanId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, (int32_t)closeAction, v9, v10);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_15;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0LL);
  if ( isShowDialogUpper )
  {
    if ( !baseWindow )
      goto LABEL_15;
    p_z = &this->fields.dialogPositionUpperSide.fields.z;
    p_dialogPositionUpperSide = &this->fields.dialogPositionUpperSide;
    p_y = &this->fields.dialogPositionUpperSide.fields.y;
  }
  else
  {
    if ( !baseWindow )
      goto LABEL_15;
    p_z = &this->fields.dialogPositionLowerSide.fields.z;
    p_dialogPositionUpperSide = &this->fields.dialogPositionLowerSide;
    p_y = &this->fields.dialogPositionLowerSide.fields.y;
  }
  v18.fields.z = *p_z;
  v18.fields.y = *p_y;
  v18.fields.x = p_dialogPositionUpperSide->fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v18, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !baseWindow )
LABEL_15:
    sub_1B8880C(baseWindow, v11);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)baseWindow, 5, 0LL) )
  {
    SubmarineScanConfirmDialog__EndLoad(this, v16);
  }
  else
  {
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog_EndLoad__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v17, 5, 1, 0LL);
  }
}


void __fastcall SubmarineScanConfirmDialog___EndLoad_b__18_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SubmarineScanConfirmDialog___OnClickCancelButton_b__19_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_4A57E4B & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A57E4B = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 0, (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall SubmarineScanConfirmDialog___OnClickExecuteButton_b__20_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_4A57E4C & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A57E4C = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 1, (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall SubmarineScanConfirmDialog__get_closeBtnObject(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A57E49 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E49 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}