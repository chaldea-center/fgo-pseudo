void __fastcall SubmarineScanConfirmDialog___ctor(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4185822 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4185822 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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
  WarEntity_o *Entity; // x0
  WarEntity_o *v12; // x21
  UILabel_o *titleLabel; // x20
  System_String_o *v14; // x0
  System_Action_o *v15; // x20

  if ( (byte_418581E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B2C35C(&Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, v7);
    sub_B2C35C(&StringLiteral_5719/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, v8);
    byte_418581E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_12;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.scanId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
  {
    v12 = Entity;
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5719/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, 0LL);
    Instance = (DataManager_o *)System_String__Format(v14, (Il2CppObject *)v12->fields.age, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B2C434(Instance, v10);
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

  if ( (byte_418581C & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v3);
    sub_B2C35C(&StringLiteral_5727/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418581C = 1;
  }
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_11;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  executeLabel = this->fields.executeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5727/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, 0LL);
  if ( !executeLabel
    || (UILabel__set_text(executeLabel, (System_String_o *)titleLabel, 0LL),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_11:
    sub_B2C434(titleLabel, v6);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_B2C2F8(&this->fields.closeAction, 0LL);
}


void __fastcall SubmarineScanConfirmDialog__OnClickCancelButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_418581F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__, v4);
    byte_418581F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4185820 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__, v4);
    byte_4185820 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x20

  if ( (byte_418581D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_B2C35C(&AtlasManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v10);
    sub_B2C35C(&Method_SubmarineScanConfirmDialog_EndLoad__, v11);
    byte_418581D = 1;
  }
  SubmarineScanConfirmDialog__Init(this, *(const MethodInfo **)&scanId);
  this->fields.closeAction = closeAction;
  this->fields.state = 1;
  this->fields.scanId = scanId;
  sub_B2C2F8(&this->fields.closeAction, closeAction);
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow )
    goto LABEL_16;
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(baseWindow, 0LL);
  if ( isShowDialogUpper )
  {
    if ( !baseWindow )
      goto LABEL_16;
    x = this->fields.dialogPositionUpperSide.fields.x;
    y = this->fields.dialogPositionUpperSide.fields.y;
    z = this->fields.dialogPositionUpperSide.fields.z;
  }
  else
  {
    if ( !baseWindow )
      goto LABEL_16;
    x = this->fields.dialogPositionLowerSide.fields.x;
    y = this->fields.dialogPositionLowerSide.fields.y;
    z = this->fields.dialogPositionLowerSide.fields.z;
  }
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, *(UnityEngine_Vector3_o *)&x, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !baseWindow )
LABEL_16:
    sub_B2C434(baseWindow, v12);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)baseWindow, 5, 0LL) )
  {
    SubmarineScanConfirmDialog__EndLoad(this, v17);
  }
  else
  {
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog_EndLoad__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v18, 5, 1, 0LL);
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

  if ( (byte_4185823 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_4185823 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 0, (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
}


void __fastcall SubmarineScanConfirmDialog___OnClickExecuteButton_b__20_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *closeAction; // x0

  if ( (byte_4185824 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_bool___, method);
    byte_4185824 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 1, (const MethodInfo_2D65ADC *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall SubmarineScanConfirmDialog__get_closeBtnObject(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4185821 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185821 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}