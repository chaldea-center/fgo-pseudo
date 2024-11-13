void __fastcall SubmarineScanConfirmDialog___ctor(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12DFB & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12DFB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SubmarineScanConfirmDialog__EndLoad(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  UILabel_o *titleLabel; // x20
  System_String_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Action_o *v26; // x20

  if ( (byte_4B12DF7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, v12, v13);
    sub_1BCA7E0(&StringLiteral_5796/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, v14, v15);
    byte_4B12DF7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_11;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.scanId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( Entity )
  {
    v20 = Entity;
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5796/*"EVENT_SUBMARINE_DO_SCAN_TITLE"*/, 0LL);
    Instance = (DataManager_o *)System_String__Format(v22, (Il2CppObject *)v20[1].monitor, 0LL);
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, (System_String_o *)Instance, 0LL);
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog__EndLoad_b__18_0__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(Instance, v17);
  }
}


void __fastcall SubmarineScanConfirmDialog__Init(SubmarineScanConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  UILabel_o *titleLabel; // x0
  __int64 v12; // x1
  UILabel_o *executeLabel; // x20
  UILabel_o *cancelLabel; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B12DF5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_5804/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B12DF5 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5804/*"EVENT_SUBMARINE_SCAN_CONFIRM_EXECUTE"*/, 0LL);
  if ( !executeLabel
    || (UILabel__set_text(executeLabel, (System_String_o *)titleLabel, 0LL),
        cancelLabel = this->fields.cancelLabel,
        titleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_10:
    sub_1BCAA3C(titleLabel, v10);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)titleLabel, 0LL);
  this->fields.closeAction = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeAction, 0LL, v15, v16, v17, v18, v19, v20);
}


void __fastcall SubmarineScanConfirmDialog__OnClickCancelButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B12DF8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineScanConfirmDialog_OnClickCancelButton__, v4, v5);
    sub_1BCA7E0(&Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__, v6, v7);
    byte_4B12DF8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v8 = Method_SubmarineScanConfirmDialog_OnClickCancelButton__;
    if ( (*((_BYTE *)Method_SubmarineScanConfirmDialog_OnClickCancelButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SubmarineScanConfirmDialog_OnClickCancelButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SubmarineScanConfirmDialog__OnClickCancelButton_b__19_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall SubmarineScanConfirmDialog__OnClickExecuteButton(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B12DF9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineScanConfirmDialog_OnClickExecuteButton__, v4, v5);
    sub_1BCA7E0(&Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__, v6, v7);
    byte_4B12DF9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v8 = Method_SubmarineScanConfirmDialog_OnClickExecuteButton__;
    if ( (*((_BYTE *)Method_SubmarineScanConfirmDialog_OnClickExecuteButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_SubmarineScanConfirmDialog_OnClickExecuteButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_SubmarineScanConfirmDialog__OnClickExecuteButton_b__20_0__,
      0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  float *p_z; // x9
  struct UnityEngine_Vector3_o *p_dialogPositionUpperSide; // x8
  float *p_y; // x10
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  System_Action_o *v29; // x20
  __int64 v30; // x1
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12DF6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&scanId, isShowDialogUpper);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AtlasManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SubmarineScanConfirmDialog_EndLoad__, v13, v14);
    byte_4B12DF6 = 1;
  }
  SubmarineScanConfirmDialog__Init(this, *(const MethodInfo **)&scanId);
  this->fields.closeAction = closeAction;
  this->fields.state = 1;
  this->fields.scanId = scanId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeAction,
    (int64_t)closeAction,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  v31.fields.z = *p_z;
  v31.fields.y = *p_y;
  v31.fields.x = p_dialogPositionUpperSide->fields.x;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)baseWindow, v31, 0LL);
  baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AtlasManager__get_Instance__);
  if ( !baseWindow )
LABEL_15:
    sub_1BCAA3C(baseWindow, v21);
  if ( AtlasManager__isLoadedSkinData((AtlasManager_o *)baseWindow, 5, 0LL) )
  {
    SubmarineScanConfirmDialog__EndLoad(this, v26);
  }
  else
  {
    v29 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v26, v27, v28);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_SubmarineScanConfirmDialog_EndLoad__, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
    AtlasManager__LoadUISkin(v29, 5, 1, 0LL);
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
  __int64 v2; // x2
  System_Action_T__o *closeAction; // x0

  if ( (byte_4B12DFC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B12DFC = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 0, (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall SubmarineScanConfirmDialog___OnClickExecuteButton_b__20_0(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Action_T__o *closeAction; // x0

  if ( (byte_4B12DFD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, method, v2);
    byte_4B12DFD = 1;
  }
  closeAction = (System_Action_T__o *)this->fields.closeAction;
  if ( closeAction )
    ActionExtensions__Call_bool_(closeAction, 1, (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
}


UnityEngine_GameObject_o *__fastcall SubmarineScanConfirmDialog__get_closeBtnObject(
        SubmarineScanConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B12DFA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12DFA = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}