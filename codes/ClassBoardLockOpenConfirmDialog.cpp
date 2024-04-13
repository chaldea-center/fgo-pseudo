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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EA81F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v5, v6, v7);
    byte_42EA81F = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__EndClose(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EA820 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA820 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__OnClickCancel(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_o *cancelFunc; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_42EA81E & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42EA81E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.closeFunc,
      (System_Int32_array **)cancelFunc,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ClassBoardLockOpenConfirmDialog__Close(this, v14);
  }
}


void __fastcall ClassBoardLockOpenConfirmDialog__OnClickDecide(
        ClassBoardLockOpenConfirmDialog_o *this,
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct System_Action_o *decideFunc; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x20
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0

  if ( (byte_42EA821 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__, v8, v9, v10);
    byte_42EA821 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v11 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v11 = (_QWORD *)sub_B5D5CC(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
      OverwriteAssetSoundName__PlaySystemSe(v12, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.closeFunc,
        (System_Int32_array **)decideFunc,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v20, 0LL);
    }
  }
  else
  {
    v21 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v21 = (_QWORD *)sub_B5D5CC(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v22 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v21, v21[3]);
    OverwriteAssetSoundName__PlaySystemSe(v22, this->fields.onClickDecideDisableSeKind, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  UILabel_o *titleLabel; // x22
  System_String_o *LockModel; // x0
  const MethodInfo *v57; // x1
  __int64 v58; // x3
  __int64 v59; // x10
  __int64 v60; // x3
  System_String_c *klass; // x8
  System_String_o *v62; // x22
  unsigned __int64 v63; // x10
  int32_t *p_offset; // x11
  __int64 v65; // x0
  int v66; // w1
  const MethodInfo *v67; // x2
  __int64 v68; // x3
  System_String_c *v69; // x8
  System_String_o *v70; // x22
  unsigned __int64 v71; // x10
  int32_t *v72; // x11
  __int64 v73; // x0
  __int64 v74; // x0
  int32_t v75; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *v77; // x8
  unsigned __int64 v78; // x10
  IClassBoardSquareModel_c **v79; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v81; // x0
  UILabel_o *itemDetailLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v86; // x2
  System_Action_o *v87; // x20
  __int64 v88; // [xsp+0h] [xbp-40h] BYREF
  int v89; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v90; // 0:x0.12
  ClassBoardCondData_o v91; // 0:x1.12

  if ( (byte_42EA81D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)square, isEnableOpen, decideFunc);
    sub_B5D5C4(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__, v13, v14, v15);
    sub_B5D5C4(&ClassBoardLock_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3078/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_3076/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_3074/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_3075/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_3077/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v40, v41, v42);
    byte_42EA81D = 1;
  }
  v89 = 0;
  v88 = 0LL;
  this->fields.classBoardSquare = square;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)isEnableOpen,
    (System_String_array **)decideFunc,
    (System_Boolean_array **)cancelFunc,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.decideFunc = decideFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.cancelFunc = cancelFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cancelFunc,
    (System_Int32_array **)cancelFunc,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3078/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_51;
  UILabel__set_text(titleLabel, LockModel, 0LL);
  if ( !square )
    goto LABEL_51;
  v59 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
  if ( *(&square->klass->_2.bitflags2 + 1) >= (unsigned int)v59
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[v59 - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v57);
    if ( !LockModel )
      goto LABEL_51;
    klass = LockModel->klass;
    v62 = LockModel;
    if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
    {
      v63 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        ++v63;
        p_offset += 4;
        if ( v63 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
          goto LABEL_15;
      }
      v65 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v65 = sub_AF54C0(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v60);
    }
    v88 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
    v89 = v66;
    *(_QWORD *)&v90.fields.Type = &v88;
    v90.fields.Num = 0;
    LockModel = (System_String_o *)ClassBoardCondData__get_HasCond(v90, v67);
    if ( ((unsigned __int8)LockModel & 1) != 0 )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v57);
      if ( !LockModel )
        goto LABEL_51;
      v69 = LockModel->klass;
      v70 = LockModel;
      if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
      {
        v71 = 0LL;
        v72 = &v69->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v72 - 1) != IClassBoardLockModel_TypeInfo )
        {
          ++v71;
          v72 += 4;
          if ( v71 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
            goto LABEL_23;
        }
        v73 = (__int64)(&v69->vtable._0_Equals.method + 2 * *v72);
      }
      else
      {
LABEL_23:
        v73 = sub_AF54C0(LockModel, IClassBoardLockModel_TypeInfo, 0LL, v68);
      }
      v74 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
      v91.fields.Num = v75;
      *(_QWORD *)&v91.fields.Type = v74;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v91, 0LL);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_51;
  v77 = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v78 = 0LL;
    v79 = (IClassBoardSquareModel_c **)&v77->_1.interfaceOffsets->offset;
    while ( *(v79 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v78;
      v79 += 2;
      if ( v78 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    p_method = (__int64)&v77->vtable[*(_DWORD *)v79 + 6].method;
  }
  else
  {
LABEL_31:
    p_method = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v58);
  }
  v81 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v81, 0LL);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !isEnableOpen )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3077/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0LL);
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
    sub_B5D69C(LockModel, v57);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3076/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0LL);
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
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3074/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_51;
  UILabel__set_text(cancelBtnLabel, LockModel, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3075/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_51;
  UILabel__set_text(decideBtnLabel, LockModel, 0LL);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v86);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v87 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
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
    sub_B5D69C(decideBtn, isEnable);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA822 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15666/*"Window/CancelBtn"*/, (_DWORD)method, v2, v3);
    byte_42EA822 = 1;
  }
  return (System_String_o *)StringLiteral_15666/*"Window/CancelBtn"*/;
}