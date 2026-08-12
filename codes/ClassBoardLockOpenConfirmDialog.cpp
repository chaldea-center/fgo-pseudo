void ClassBoardLockOpenConfirmDialog___ctor(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.disableItemLabelPosY = -37.0;
  this->fields.onClickDecideSeKind = 8;
  *(_QWORD *)&this->fields.onClickDecideDisableSeKind = 0x100000002LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardLockOpenConfirmDialog__Close(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_59746D1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    byte_59746D1 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0);
}


void ClassBoardLockOpenConfirmDialog__EndClose(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_59746D2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59746D2 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


void ClassBoardLockOpenConfirmDialog__EndOpen(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ClassBoardLockOpenConfirmDialog__Init(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  *(_WORD *)&this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardLockOpenConfirmDialog__OnClickCancel(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *cancelFunc; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  if ( (byte_59746D0 & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    byte_59746D0 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0, 0);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
      (int32_t)cancelFunc,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    ClassBoardLockOpenConfirmDialog__Close(this, v12);
  }
}


void ClassBoardLockOpenConfirmDialog__OnClickDecide(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *decideFunc; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Action_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_59746D3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    sub_2213A60(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    byte_59746D3 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_2213A78(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
        (int32_t)decideFunc,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v12, 0);
    }
  }
  else
  {
    v13 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_2213A78(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.onClickDecideDisableSeKind, 0, 0);
  }
}


void ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_59746D4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__);
    byte_59746D4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__,
      0);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0);
    this->fields.isButtonEnable = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardLockOpenConfirmDialog__Open(
        ClassBoardLockOpenConfirmDialog_o *this,
        ClassBoardSquare_o *square,
        bool isEnableOpen,
        System_Action_o *decideFunc,
        System_Action_o *cancelFunc,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  bool v13; // w25
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  LocalizationManager_c *v27; // x0
  UILabel_o *titleLabel; // x22
  System_String_o *LockModel; // x0
  const MethodInfo *v30; // x1
  __int64 naturalAligment; // x10
  System_String_c *klass; // x8
  System_String_o *v33; // x22
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  int v37; // w1
  const MethodInfo *v38; // x2
  System_String_c *v39; // x8
  System_String_o *v40; // x22
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  int32_t v45; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *v47; // x8
  __int64 v48; // x9
  IClassBoardSquareModel_c **v49; // x10
  __int64 v50; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v51; // x0
  __int64 v52; // x1
  UILabel_o *itemDetailLabel; // x21
  int v54; // w8
  __int64 v55; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v59; // x2
  System_Action_o *v60; // x20
  __int64 v61; // [xsp+0h] [xbp-60h] BYREF
  int v62; // [xsp+8h] [xbp-58h]
  ClassBoardCondData_o v63; // 0:x0.12
  ClassBoardCondData_o v64; // 0:x1.12

  v13 = isEnableOpen;
  if ( (byte_59746CF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__);
    sub_2213A60(&ClassBoardLock_TypeInfo);
    sub_2213A60(&IClassBoardLockModel_TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3543/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3541/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_2213A60(&StringLiteral_3539/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_3540/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_3542/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    byte_59746CF = 1;
  }
  v62 = 0;
  v61 = 0;
  this->fields.classBoardSquare = square;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (System_String_o *)isEnableOpen,
    (System_String_o *)decideFunc,
    (int32_t)cancelFunc,
    (int32_t)method,
    v6,
    v7);
  this->fields.decideFunc = decideFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.decideFunc,
    (int32_t)decideFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.cancelFunc = cancelFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cancelFunc,
    (int32_t)cancelFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v27 = LocalizationManager_TypeInfo;
  titleLabel = this->fields.titleLabel;
  this->fields.isDecideButtonEnable = v13;
  if ( !*(&v27->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v27, v26);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3543/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_47;
  UILabel__set_text(titleLabel, LockModel, 0);
  if ( !square )
    goto LABEL_47;
  naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
  if ( square->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v30);
    if ( !LockModel )
      goto LABEL_47;
    klass = LockModel->klass;
    v33 = LockModel;
    v34 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
    if ( *(_WORD *)&LockModel->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_14;
      }
      v36 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_14:
      v36 = sub_224BC3C(LockModel, IClassBoardLockModel_TypeInfo, 0);
    }
    v61 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
    *(_QWORD *)&v63.fields.Type = &v61;
    v62 = v37;
    v63.fields.Num = 0;
    LockModel = (System_String_o *)ClassBoardCondData__get_HasCond(v63, v38);
    if ( ((unsigned __int8)LockModel & 1) != 0 )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v30);
      if ( !LockModel )
        goto LABEL_47;
      v39 = LockModel->klass;
      v40 = LockModel;
      v41 = *(unsigned __int16 *)&LockModel->klass->_2.rank;
      if ( *(_WORD *)&LockModel->klass->_2.rank )
      {
        v42 = &v39->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v42 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_22;
        }
        v43 = (__int64)&v39->vtable + 16 * *v42;
      }
      else
      {
LABEL_22:
        v43 = sub_224BC3C(LockModel, IClassBoardLockModel_TypeInfo, 0);
      }
      v44 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
      v64.fields.Num = v45;
      *(_QWORD *)&v64.fields.Type = v44;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v64, 0);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_47;
  v47 = SquareModel_k__BackingField->klass;
  v48 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v49 = (IClassBoardSquareModel_c **)&v47->_1.interfaceOffsets->offset;
    while ( *(v49 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v48;
      v49 += 2;
      if ( !v48 )
        goto LABEL_30;
    }
    v50 = (__int64)&v47->vtable[*(_DWORD *)v49 + 6];
  }
  else
  {
LABEL_30:
    v50 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v51 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v50)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(v50 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v51, 0);
  itemDetailLabel = this->fields.itemDetailLabel;
  v54 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isEnableOpen )
  {
    if ( !v54 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3541/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0);
    if ( itemDetailLabel )
    {
      UILabel__set_text(itemDetailLabel, LockModel, 0);
      goto LABEL_42;
    }
LABEL_47:
    sub_2213CDC(LockModel, v30);
  }
  if ( !v54 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v52);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3542/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0);
  if ( !itemDetailLabel )
    goto LABEL_47;
  UILabel__set_text(itemDetailLabel, LockModel, 0);
  LockModel = (System_String_o *)this->fields.itemDetailLabel;
  if ( !LockModel )
    goto LABEL_47;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.disableItemLabelPosY, 0);
LABEL_42:
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3539/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_47;
  UILabel__set_text(cancelBtnLabel, LockModel, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3540/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_47;
  UILabel__set_text(decideBtnLabel, LockModel, 0);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v59);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v60, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardLockOpenConfirmDialog__SetDecideButton(
        ClassBoardLockOpenConfirmDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideBtn; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtn;
  if ( !isEnable )
  {
    if ( decideBtn )
    {
      UnityEngine_Behaviour__set_enabled(decideBtn, 0, 0);
      decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
      if ( decideBtn )
      {
        v7.fields.r = 0.5;
        v7.fields.g = 0.5;
        v7.fields.b = 0.5;
        goto LABEL_8;
      }
    }
LABEL_9:
    sub_2213CDC(decideBtn, isEnable);
  }
  if ( !decideBtn )
    goto LABEL_9;
  UnityEngine_Behaviour__set_enabled(decideBtn, 1, 0);
  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
  if ( !decideBtn )
    goto LABEL_9;
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
LABEL_8:
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)decideBtn, v7, 0);
}


void ClassBoardLockOpenConfirmDialog___OnClickItemInfoListWindow_b__23_0(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *ClassBoardLockOpenConfirmDialog__get_closeBtnPath(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_59746D5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16258/*"Window/CancelBtn"*/);
    byte_59746D5 = 1;
  }
  return (System_String_o *)StringLiteral_16258/*"Window/CancelBtn"*/;
}