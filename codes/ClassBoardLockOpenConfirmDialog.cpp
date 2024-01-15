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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Action_o *v8; // x20

  if ( (byte_40FB984 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v3);
    byte_40FB984 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v4, v5, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__EndClose(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FB985 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB985 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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

  *(_WORD *)&this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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

  if ( (byte_40FB983 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__, method);
    byte_40FB983 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B16F98(
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_o *decideFunc; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_40FB986 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v3);
    sub_B16FFC(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__, v4);
    byte_40FB986 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v5 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B17004(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.closeFunc,
        (System_Int32_array **)decideFunc,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v18, 0LL);
    }
  }
  else
  {
    v19 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v19 = (_QWORD *)sub_B17004(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v20 = (System_Reflection_MethodBase_o *)sub_B16FE0(v19, v19[3]);
    OverwriteAssetSoundName__PlaySystemSe(v20, this->fields.onClickDecideDisableSeKind, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *v36; // x0
  const MethodInfo *v37; // x1
  __int64 v38; // x10
  IClassBoardLockModel_o *LockModel; // x0
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v41; // x22
  unsigned __int64 v42; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v45; // w1
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x1
  IClassBoardLockModel_o *v48; // x0
  IClassBoardLockModel_c *v49; // x8
  IClassBoardLockModel_o *v50; // x22
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t v55; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *v57; // x8
  unsigned __int64 v58; // x10
  IClassBoardSquareModel_c **v59; // x11
  __int64 v60; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v61; // x0
  UILabel_o *itemDetailLabel; // x21
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  UnityEngine_Component_o *v65; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  System_String_o *v68; // x0
  UILabel_o *decideBtnLabel; // x20
  System_String_o *v70; // x0
  const MethodInfo *v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_Action_o *v76; // x20
  __int64 v77; // [xsp+0h] [xbp-40h] BYREF
  int v78; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v79; // 0:x0.12
  ClassBoardCondData_o v80; // 0:x1.12

  if ( (byte_40FB982 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, square);
    sub_B16FFC(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__, v13);
    sub_B16FFC(&ClassBoardLock_TypeInfo, v14);
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, v15);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_3010/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, v18);
    sub_B16FFC(&StringLiteral_3008/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v19);
    sub_B16FFC(&StringLiteral_3006/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, v20);
    sub_B16FFC(&StringLiteral_3007/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, v21);
    sub_B16FFC(&StringLiteral_3009/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v22);
    byte_40FB982 = 1;
  }
  v78 = 0;
  v77 = 0LL;
  this->fields.classBoardSquare = square;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)isEnableOpen,
    (System_String_array **)decideFunc,
    (System_Boolean_array **)cancelFunc,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.decideFunc = decideFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.cancelFunc = cancelFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cancelFunc,
    (System_Int32_array **)cancelFunc,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3010/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_51;
  UILabel__set_text(titleLabel, v36, 0LL);
  if ( !square )
    goto LABEL_51;
  v38 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
  if ( *(&square->klass->_2.bitflags2 + 1) >= (unsigned int)v38
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[v38 - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v37);
    if ( !LockModel )
      goto LABEL_51;
    klass = LockModel->klass;
    v41 = LockModel;
    if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        ++v42;
        p_offset += 4;
        if ( v42 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_AAFEF8(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v77 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v41, *(_QWORD *)(p_method + 8));
    v78 = v45;
    *(_QWORD *)&v79.fields.Type = &v77;
    v79.fields.Num = 0;
    if ( ClassBoardCondData__get_HasCond(v79, v46) )
    {
      v48 = ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v47);
      if ( !v48 )
        goto LABEL_51;
      v49 = v48->klass;
      v50 = v48;
      if ( *(_WORD *)&v48->klass->_2.bitflags1 )
      {
        v51 = 0LL;
        v52 = &v49->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v52 - 1) != IClassBoardLockModel_TypeInfo )
        {
          ++v51;
          v52 += 4;
          if ( v51 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v53 = (__int64)&v49->vtable[*v52].method;
      }
      else
      {
LABEL_23:
        v53 = sub_AAFEF8(v48, IClassBoardLockModel_TypeInfo, 0LL);
      }
      v54 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
      v80.fields.Num = v55;
      *(_QWORD *)&v80.fields.Type = v54;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v80, 0LL);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_51;
  v57 = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v58 = 0LL;
    v59 = (IClassBoardSquareModel_c **)&v57->_1.interfaceOffsets->offset;
    while ( *(v59 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v58;
      v59 += 2;
      if ( v58 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    v60 = (__int64)&v57->vtable[*(_DWORD *)v59 + 6].method;
  }
  else
  {
LABEL_31:
    v60 = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v61 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v60)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(v60 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v61, 0LL);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !isEnableOpen )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3009/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0LL);
    if ( itemDetailLabel )
    {
      UILabel__set_text(itemDetailLabel, v64, 0LL);
      v65 = (UnityEngine_Component_o *)this->fields.itemDetailLabel;
      if ( v65 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v65, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.disableItemLabelPosY, 0LL);
        goto LABEL_45;
      }
    }
LABEL_51:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3008/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_51;
  UILabel__set_text(itemDetailLabel, v63, 0LL);
LABEL_45:
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3006/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_51;
  UILabel__set_text(cancelBtnLabel, v68, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  v70 = LocalizationManager__Get((System_String_o *)StringLiteral_3007/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_51;
  UILabel__set_text(decideBtnLabel, v70, 0LL);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v71);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v76 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
  System_Action___ctor(v76, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v76, 0, 0LL);
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
    sub_B170D4();
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
  if ( (byte_40FB987 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15413/*"Window/CancelBtn"*/, method);
    byte_40FB987 = 1;
  }
  return (System_String_o *)StringLiteral_15413/*"Window/CancelBtn"*/;
}