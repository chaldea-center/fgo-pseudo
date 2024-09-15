void __fastcall SubmarineScanConfirmDialog___ctor(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A2ABED & 1) == 0 )
  {
    sub_1B761C0(&BaseDialog_TypeInfo, method);
    byte_4A2ABED = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineScanConfirmDialog__EndLoad(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v12; // x21
  UILabel_o *titleLabel; // x20
  System_String_o *v14; // x0
  System_Action_o *v15; // x20

  if ( (byte_4A2ABE9 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v3);
    sub_1B761C0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v4);
    sub_1B761C0(&LocalizationManager_TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B761C0(&Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, v7);
    sub_1B761C0(&StringLiteral_5711/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, v8);
    byte_4A2ABE9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.scanId,
             (const MethodInfo_30FF780 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
  {
    v12 = Entity;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5711/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, 0LL);
    Instance = (DataManager_o *)System_String__Format(v14, (Il2CppObject *)v12[1].monitor, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
      v15 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
      return;
    }
LABEL_11:
    sub_1B7641C(Instance, v10);
  }
}


void __fastcall SubmarineScanConfirmDialog__Init(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *executeLabel; // x20
  UILabel_o *cancelLabel; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A2ABE7 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_3754/*"COMMON_CONFIRM_CANCEL"*/, v3);
    sub_1B761C0(&StringLiteral_5719/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, v4);
    sub_1B761C0(&StringLiteral_1/*""*/, v5);
    byte_4A2ABE7 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5719/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, 0LL);
  if ( !executeLabel
    || (UILabel__set_text(executeLabel, (System_String_o *)titleLabel, 0LL),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_10:
    sub_1B7641C(titleLabel, v6);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, 0, v10, v11);
}


void __fastcall SubmarineScanConfirmDialog__OnClickCancelButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A2ABEA & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_SubmarineScanConfirmDialog_OnClickCancelButton__, v3);
    sub_1B761C0(&Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__, v4);
    byte_4A2ABEA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v5 = Method_SubmarineScanConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_SubmarineScanConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B761D8(Method_SubmarineScanConfirmDialog_OnClickCancelButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    v7 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall SubmarineScanConfirmDialog__OnClickExecuteButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20

  if ( (byte_4A2ABEB & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&Method_SubmarineScanConfirmDialog_OnClickExecuteButton__, v3);
    sub_1B761C0(&Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__, v4);
    byte_4A2ABEB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_SubmarineScanConfirmDialog_OnClickExecuteButton__;
    if ( (*((_BYTE *)Method_SubmarineScanConfirmDialog_OnClickExecuteButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B761D8(Method_SubmarineScanConfirmDialog_OnClickExecuteButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B761A4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    v7 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_dialogPositionUpperSide; // x8
  float *p_y; // x10
  const MethodInfo *v19; // x1
  System_Action_o *v20; // x20
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A2ABE8 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_1B761C0(&AtlasManager_TypeInfo, v9);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v10);
    sub_1B761C0(&Method_SubmarineScanConfirmDialog_EndLoad__, v11);
    byte_4A2ABE8 = 1;
  }
  SubmarineScanConfirmDialog__Init(this, *(const MethodInfo **)&scanId);
  this->fields.closeAction = closeAction;
  this->fields.state = 1;
  this->fields.scanId = scanId;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.closeAction, (int32_t)closeAction, v12, v13);
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
  v21.fields.z = *p_z;
  v21.fields.y = *p_y;
  v21.fields.x = p_dialogPositionUpperSide->fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v21, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !baseWindow )
LABEL_15:
    sub_1B7641C(baseWindow, v14);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)baseWindow, 5, 0LL) )
  {
    SubmarineScanConfirmDialog__EndLoad(this, v19);
  }
  else
  {
    v20 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog_EndLoad__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__LoadUISkin(v20, 5, 1, 0LL);
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

  if ( (byte_4A2ABEE & 1) == 0 )
  {
    sub_1B761C0(&Method_ActionExtensions_Call_bool___, method);
    byte_4A2ABEE = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 0, (const MethodInfo_2DB9D08 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall SubmarineScanConfirmDialog___OnClickExecuteButton_b__20_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_4A2ABEF & 1) == 0 )
  {
    sub_1B761C0(&Method_ActionExtensions_Call_bool___, method);
    byte_4A2ABEF = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 1, (const MethodInfo_2DB9D08 *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall SubmarineScanConfirmDialog__get_closeBtnObject(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A2ABEC & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A2ABEC = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B7641C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}