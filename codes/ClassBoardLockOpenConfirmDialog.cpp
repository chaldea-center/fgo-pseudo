void __fastcall ClassBoardLockOpenConfirmDialog___ctor(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.disableItemLabelPosY = -37.0;
  *(_QWORD *)&this->fields.onClickDecideSeKind = 0x200000008LL;
  this->fields.onClickCancelSeKind = 1;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardLockOpenConfirmDialog__Close(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_42B3885 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    byte_42B3885 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, v4);
}


void __fastcall ClassBoardLockOpenConfirmDialog__EndClose(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42B3886 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3886 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
  const MethodInfo *v5; // x1

  *(_WORD *)&this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, v5);
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

  if ( (byte_42B3884 & 1) == 0 )
  {
    sub_B52984(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    byte_42B3884 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B52920(
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
  const MethodInfo *v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_42B3887 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    sub_B52984(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    byte_42B3887 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v3 = (_QWORD *)sub_B5298C(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.closeFunc,
        (System_Int32_array **)decideFunc,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, v12);
      v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v13, v14);
    }
  }
  else
  {
    v15 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v15 = (_QWORD *)sub_B5298C(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v16 = (System_Reflection_MethodBase_o *)sub_B52968(v15, v15[3]);
    OverwriteAssetSoundName__PlaySystemSe(v16, this->fields.onClickDecideDisableSeKind, 0LL);
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
  unsigned __int64 LockModel; // x0
  const MethodInfo *v27; // x1
  __int64 v28; // x3
  __int64 v29; // x10
  __int64 v30; // x3
  System_String_c *v31; // x8
  unsigned __int64 v32; // x22
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  __int64 v36; // x3
  System_String_c *v37; // x8
  unsigned __int64 v38; // x22
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  const MethodInfo *v42; // x0
  int32_t v43; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v46; // x10
  IClassBoardSquareModel_c **v47; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v49; // x0
  const MethodInfo *v50; // x2
  UILabel_o *itemDetailLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v55; // x2
  System_Action_o *v56; // x20
  ClassBoardCondData_o v57; // 0:x1.12

  if ( (byte_42B3883 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__);
    sub_B52984(&ClassBoardLock_TypeInfo);
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3051/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_3049/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_B52984(&StringLiteral_3047/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_B52984(&StringLiteral_3048/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_B52984(&StringLiteral_3050/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    byte_42B3883 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)isEnableOpen,
    (System_String_array **)decideFunc,
    (System_Boolean_array **)cancelFunc,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.decideFunc = decideFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.cancelFunc = cancelFunc;
  sub_B52920(
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
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3051/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_51;
  UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0LL);
  if ( !square )
    goto LABEL_51;
  v29 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
  if ( *(&square->klass->_2.bitflags2 + 1) >= (unsigned int)v29
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[v29 - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v27);
    if ( !LockModel )
      goto LABEL_51;
    v31 = *(System_String_c **)LockModel;
    v32 = LockModel;
    if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
    {
      v33 = 0LL;
      p_offset = &v31->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
          goto LABEL_15;
      }
      v35 = (__int64)(&v31->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v35 = sub_AEB880(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v30);
    }
    LockModel = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
    if ( HIDWORD(LockModel) )
    {
      LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v27);
      if ( !LockModel )
        goto LABEL_51;
      v37 = *(System_String_c **)LockModel;
      v38 = LockModel;
      if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
      {
        v39 = 0LL;
        v40 = &v37->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v40 - 1) != IClassBoardLockModel_TypeInfo )
        {
          ++v39;
          v40 += 4;
          if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
            goto LABEL_23;
        }
        v41 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v40);
      }
      else
      {
LABEL_23:
        v41 = sub_AEB880(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v36);
      }
      v42 = (const MethodInfo *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
      v57.fields.Num = v43;
      *(_QWORD *)&v57.fields.Type = v42;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v57, v42);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_51;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v46 = 0LL;
    v47 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(v47 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v46;
      v47 += 2;
      if ( v46 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)v47 + 6].method;
  }
  else
  {
LABEL_31:
    p_method = sub_AEB880(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v28);
  }
  v49 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v49, v50);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !isEnableOpen )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3050/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0LL);
    if ( itemDetailLabel )
    {
      UILabel__set_text(itemDetailLabel, (System_String_o *)LockModel, 0LL);
      LockModel = (unsigned __int64)this->fields.itemDetailLabel;
      if ( LockModel )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.disableItemLabelPosY, 0LL);
        goto LABEL_45;
      }
    }
LABEL_51:
    sub_B52A5C(LockModel, v27);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3049/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_51;
  UILabel__set_text(itemDetailLabel, (System_String_o *)LockModel, 0LL);
LABEL_45:
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3047/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_51;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)LockModel, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3048/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_51;
  UILabel__set_text(decideBtnLabel, (System_String_o *)LockModel, 0LL);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v55);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v56 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0LL);
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
    sub_B52A5C(decideBtn, isEnable);
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
  if ( (byte_42B3888 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15581/*"Window/CancelBtn"*/);
    byte_42B3888 = 1;
  }
  return (System_String_o *)StringLiteral_15581/*"Window/CancelBtn"*/;
}