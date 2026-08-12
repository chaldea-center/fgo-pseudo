void SubmarineScanConfirmDialog___ctor(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596CF6B & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596CF6B = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SubmarineScanConfirmDialog__EndLoad(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x21
  UILabel_o *titleLabel; // x20
  System_String_o *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596CF67 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_2213A60(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__);
    sub_2213A60(&StringLiteral_5948/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/);
    byte_596CF67 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.scanId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
  {
    v8 = Entity;
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5948/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, 0);
    Instance = (DataManager_o *)System_String__Format(v10, (Il2CppObject *)v8[1].monitor, 0);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Instance, 0);
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, 0);
      BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(Instance, v4);
  }
}


void SubmarineScanConfirmDialog__Init(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *titleLabel; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *executeLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_596CF65 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_5956/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CF65 = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  executeLabel = this->fields.executeLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5, v6);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5956/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, 0);
  if ( !executeLabel
    || (UILabel__set_text(executeLabel, (System_String_o *)titleLabel, 0),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel) )
  {
LABEL_10:
    sub_2213CDC(titleLabel, v3);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0);
  this->fields.closeAction = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v9, v10, v11, v12, v13, v14);
}


void SubmarineScanConfirmDialog__OnClickCancelButton(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596CF68 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineScanConfirmDialog_OnClickCancelButton__);
    sub_2213A60(&Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__);
    byte_596CF68 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_SubmarineScanConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_SubmarineScanConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SubmarineScanConfirmDialog_OnClickCancelButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


void SubmarineScanConfirmDialog__OnClickExecuteButton(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_596CF69 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineScanConfirmDialog_OnClickExecuteButton__);
    sub_2213A60(&Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__);
    byte_596CF69 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SubmarineScanConfirmDialog_OnClickExecuteButton__;
    if ( (*((_BYTE *)Method_SubmarineScanConfirmDialog_OnClickExecuteButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_SubmarineScanConfirmDialog_OnClickExecuteButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SubmarineScanConfirmDialog__Open(
        SubmarineScanConfirmDialog_o *this,
        int32_t scanId,
        bool isShowDialogUpper,
        System_Action_bool__o *closeAction,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_dialogPositionUpperSide; // x8
  float *p_y; // x10
  const MethodInfo *v20; // x1
  System_Action_o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CF66 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
    sub_2213A60(&Method_SubmarineScanConfirmDialog_EndLoad__);
    byte_596CF66 = 1;
  }
  SubmarineScanConfirmDialog__Init(this, *(const MethodInfo **)&scanId);
  this->fields.closeAction = closeAction;
  this->fields.state = 1;
  this->fields.scanId = scanId;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)closeAction,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  baseWindow = this->fields.baseWindow;
  if ( isShowDialogUpper )
  {
    if ( baseWindow )
    {
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0);
      if ( baseWindow )
      {
        p_z = &this->fields.dialogPositionUpperSide.fields.z;
        p_dialogPositionUpperSide = &this->fields.dialogPositionUpperSide;
        p_y = &this->fields.dialogPositionUpperSide.fields.y;
        goto LABEL_10;
      }
    }
LABEL_16:
    sub_2213CDC(baseWindow, v15);
  }
  if ( !baseWindow )
    goto LABEL_16;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0);
  if ( !baseWindow )
    goto LABEL_16;
  p_z = &this->fields.dialogPositionLowerSide.fields.z;
  p_dialogPositionUpperSide = &this->fields.dialogPositionLowerSide;
  p_y = &this->fields.dialogPositionLowerSide.fields.y;
LABEL_10:
  v24.fields.z = *p_z;
  v24.fields.y = *p_y;
  v24.fields.x = p_dialogPositionUpperSide->fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v24, 0);
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !baseWindow )
    goto LABEL_16;
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)baseWindow, 5, 0) )
  {
    SubmarineScanConfirmDialog__EndLoad(this, v20);
  }
  else
  {
    v21 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog_EndLoad__, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22, v23);
    AtlasManager__LoadUISkin(v21, 5, 1, 0);
  }
}


void SubmarineScanConfirmDialog___EndLoad_b__18_0(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SubmarineScanConfirmDialog___OnClickCancelButton_b__19_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_596CF6C & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596CF6C = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 0, (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
}


void SubmarineScanConfirmDialog___OnClickExecuteButton_b__20_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_596CF6D & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596CF6D = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 1, (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *SubmarineScanConfirmDialog__get_closeBtnObject(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_596CF6A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CF6A = 1;
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