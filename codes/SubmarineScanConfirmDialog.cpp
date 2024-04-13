void __fastcall SubmarineScanConfirmDialog___ctor(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7BAE & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BAE = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineScanConfirmDialog__EndLoad(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
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
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v26; // x21
  UILabel_o *titleLabel; // x20
  System_String_o *v28; // x0
  System_Action_o *v29; // x20

  if ( (byte_42E7BAA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5796/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, v20, v21, v22);
    byte_42E7BAA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_12;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.scanId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
  {
    v26 = Entity;
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5796/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, 0LL);
    Instance = (DataManager_o *)System_String__Format(v28, (Il2CppObject *)v26->fields.age, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
      v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(Instance, v24);
  }
}


void __fastcall SubmarineScanConfirmDialog__Init(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *executeLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E7BA8 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5804/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E7BA8 = 1;
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
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5804/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, 0LL);
  if ( !executeLabel
    || (UILabel__set_text(executeLabel, (System_String_o *)titleLabel, 0LL),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_11:
    sub_B5D69C(titleLabel, v14);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeAction, 0LL, v18, v19, v20, v21, v22, v23);
}


void __fastcall SubmarineScanConfirmDialog__OnClickCancelButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E7BAB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__, v8, v9, v10);
    byte_42E7BAB = 1;
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
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall SubmarineScanConfirmDialog__OnClickExecuteButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_42E7BAC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__, v8, v9, v10);
    byte_42E7BAC = 1;
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
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  const MethodInfo *v29; // x1
  System_Action_o *v30; // x20

  if ( (byte_42E7BA9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, scanId, isShowDialogUpper, closeAction);
    sub_B5D5C4(&AtlasManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SubmarineScanConfirmDialog_EndLoad__, v15, v16, v17);
    byte_42E7BA9 = 1;
  }
  SubmarineScanConfirmDialog__Init(this, *(const MethodInfo **)&scanId);
  this->fields.closeAction = closeAction;
  this->fields.state = 1;
  this->fields.scanId = scanId;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeAction,
    (System_Int32_array **)closeAction,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !baseWindow )
LABEL_16:
    sub_B5D69C(baseWindow, v24);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)baseWindow, 5, 0LL) )
  {
    SubmarineScanConfirmDialog__EndLoad(this, v29);
  }
  else
  {
    v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog_EndLoad__, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__LoadUISkin(v30, 5, 1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  System_Action_T__o *closeAction; // x0

  if ( (byte_42E7BAF & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42E7BAF = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 0, (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}


void __fastcall SubmarineScanConfirmDialog___OnClickExecuteButton_b__20_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Action_T__o *closeAction; // x0

  if ( (byte_42E7BB0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, (_DWORD)method, v2, v3);
    byte_42E7BB0 = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 1, (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall SubmarineScanConfirmDialog__get_closeBtnObject(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E7BAD & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7BAD = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}