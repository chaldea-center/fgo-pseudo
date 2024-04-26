void __fastcall ClassBoardLockOpenConfirmDialog___ctor(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.disableItemLabelPosY = -37.0;
  *(_QWORD *)&this->fields.onClickDecideSeKind = 0x200000008LL;
  this->fields.onClickCancelSeKind = 1;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__Close(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4353B13 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    byte_4353B13 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__EndClose(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4353B14 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353B14 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__EndOpen(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ClassBoardLockOpenConfirmDialog__Init(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  *(_WORD *)&this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__OnClickCancel(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *cancelFunc; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4353B12 & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    byte_4353B12 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B7069C(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.closeFunc,
      (System_Int32_array **)cancelFunc,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    ClassBoardLockOpenConfirmDialog__Close(this, v12);
  }
}


void __fastcall ClassBoardLockOpenConfirmDialog__OnClickDecide(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *decideFunc; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4353B15 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    sub_B70694(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    byte_4353B15 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v3 = (_QWORD *)sub_B7069C(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.closeFunc,
        (System_Int32_array **)decideFunc,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v12, 0LL);
    }
  }
  else
  {
    v13 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v13 = (_QWORD *)sub_B7069C(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v14 = (System_Reflection_MethodBase_o *)sub_B70678(v13, v13[3]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.onClickDecideDisableSeKind, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardLockOpenConfirmDialog__Open(
        ClassBoardLockOpenConfirmDialog_o *this,
        ClassBoardSquare_o *square,
        bool isEnableOpen,
        System_Action_o *decideFunc,
        System_Action_o *cancelFunc,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *LockModel; // x0
  const MethodInfo *v27; // x1
  __int64 v28; // x10
  System_String_c *klass; // x8
  System_String_o *v30; // x22
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0
  int v34; // w1
  const MethodInfo *v35; // x2
  System_String_c *v36; // x8
  System_String_o *v37; // x22
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x0
  int32_t v42; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *v44; // x8
  unsigned __int64 v45; // x10
  IClassBoardSquareModel_c **v46; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v48; // x0
  UILabel_o *itemDetailLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v53; // x2
  System_Action_o *v54; // x20
  __int64 v55; // [xsp+0h] [xbp-40h] BYREF
  int v56; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v57; // 0:x0.12
  ClassBoardCondData_o v58; // 0:x1.12

  if ( (byte_4353B11 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__);
    sub_B70694(&ClassBoardLock_TypeInfo);
    sub_B70694(&IClassBoardLockModel_TypeInfo);
    sub_B70694(&IClassBoardSquareModel_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3087/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_B70694(&StringLiteral_3085/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_B70694(&StringLiteral_3083/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_B70694(&StringLiteral_3084/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_B70694(&StringLiteral_3086/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    byte_4353B11 = 1;
  }
  v56 = 0;
  v55 = 0LL;
  this->fields.classBoardSquare = square;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)isEnableOpen,
    (System_String_array **)decideFunc,
    (System_Boolean_array **)cancelFunc,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.decideFunc = decideFunc;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.cancelFunc = cancelFunc;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.cancelFunc,
    (System_Int32_array **)cancelFunc,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3087/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_51;
  UILabel__set_text(titleLabel, LockModel, 0LL);
  if ( !square )
    goto LABEL_51;
  v28 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
  if ( *(&square->klass->_2.bitflags2 + 1) >= (unsigned int)v28
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[v28 - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v27);
    if ( !LockModel )
      goto LABEL_51;
    klass = LockModel->klass;
    v30 = LockModel;
    if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
    {
      v31 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        ++v31;
        p_offset += 4;
        if ( v31 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v33 = sub_B08590(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v55 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
    v56 = v34;
    *(_QWORD *)&v57.fields.Type = &v55;
    v57.fields.Num = 0;
    LockModel = (System_String_o *)ClassBoardCondData__get_HasCond(v57, v35);
    if ( ((unsigned __int8)LockModel & 1) != 0 )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v27);
      if ( !LockModel )
        goto LABEL_51;
      v36 = LockModel->klass;
      v37 = LockModel;
      if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        v39 = &v36->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v39 - 1) != IClassBoardLockModel_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v40 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v39);
      }
      else
      {
LABEL_23:
        v40 = sub_B08590(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
      }
      v41 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
      v58.fields.Num = v42;
      *(_QWORD *)&v58.fields.Type = v41;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v58, 0LL);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_51;
  v44 = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v45 = 0LL;
    v46 = (IClassBoardSquareModel_c **)&v44->_1.interfaceOffsets->offset;
    while ( *(v46 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v45;
      v46 += 2;
      if ( v45 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    p_method = (__int64)&v44->vtable[*(_DWORD *)v46 + 6].method;
  }
  else
  {
LABEL_31:
    p_method = sub_B08590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v48 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v48, 0LL);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !isEnableOpen )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3086/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0LL);
    if ( itemDetailLabel )
    {
      UILabel__set_text(itemDetailLabel, LockModel, 0LL);
      LockModel = (System_String_o *)this->fields.itemDetailLabel;
      if ( LockModel )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.disableItemLabelPosY, 0LL);
        goto LABEL_45;
      }
    }
LABEL_51:
    sub_B7076C(LockModel, v27);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3085/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_51;
  UILabel__set_text(itemDetailLabel, LockModel, 0LL);
LABEL_45:
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3083/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_51;
  UILabel__set_text(cancelBtnLabel, LockModel, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3084/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_51;
  UILabel__set_text(decideBtnLabel, LockModel, 0LL);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v53);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v54 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardLockOpenConfirmDialog__SetDecideButton(
        ClassBoardLockOpenConfirmDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideBtn; // x0
  UIWidget_o *decideBtnSprite; // x19
  int v6; // s0

  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtn;
  if ( !decideBtn )
    goto LABEL_4;
  if ( !isEnable )
  {
    UnityEngine_Behaviour__set_enabled(decideBtn, 0, 0LL);
    decideBtnSprite = (UIWidget_o *)this->fields.decideBtnSprite;
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
    if ( decideBtnSprite )
      goto LABEL_6;
LABEL_4:
    sub_B7076C(decideBtn, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideBtn, 1, 0LL);
  decideBtnSprite = (UIWidget_o *)this->fields.decideBtnSprite;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
  if ( !decideBtnSprite )
    goto LABEL_4;
LABEL_6:
  UIWidget__set_color(decideBtnSprite, *(UnityEngine_Color_o *)&v6, 0LL);
}


System_String_o *__fastcall ClassBoardLockOpenConfirmDialog__get_closeBtnPath(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4353B16 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_15697/*"Window/CancelBtn"*/);
    byte_4353B16 = 1;
  }
  return (System_String_o *)StringLiteral_15697/*"Window/CancelBtn"*/;
}