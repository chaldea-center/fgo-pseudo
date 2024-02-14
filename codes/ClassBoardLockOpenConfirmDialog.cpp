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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4217B39 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v3);
    byte_4217B39 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, method);
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v4, v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v6, v7);
}


void __fastcall ClassBoardLockOpenConfirmDialog__EndClose(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4217B3A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217B3A = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
  const MethodInfo *v4; // x1

  *(_WORD *)&this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, v4);
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

  if ( (byte_4217B38 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__, method);
    byte_4217B38 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B0D840(
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
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_4217B3B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v3);
    sub_B0D8A4(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__, v4);
    byte_4217B3B = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v5 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B0D8AC(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.closeFunc,
        (System_Int32_array **)decideFunc,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, v14);
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v17, v18);
    }
  }
  else
  {
    v19 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v19 = (_QWORD *)sub_B0D8AC(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v20 = (System_Reflection_MethodBase_o *)sub_B0D888(v19, v19[3]);
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
  unsigned __int64 LockModel; // x0
  const MethodInfo *v37; // x1
  __int64 v38; // x10
  System_String_c *v39; // x8
  unsigned __int64 v40; // x22
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  const MethodInfo *v44; // x1
  System_String_c *v45; // x8
  unsigned __int64 v46; // x22
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  const MethodInfo *v50; // x0
  int32_t v51; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v54; // x10
  IClassBoardSquareModel_c **v55; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v57; // x0
  const MethodInfo *v58; // x2
  UILabel_o *itemDetailLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  System_Action_o *v66; // x20
  ClassBoardCondData_o v67; // 0:x1.12

  if ( (byte_4217B37 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, square);
    sub_B0D8A4(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__, v13);
    sub_B0D8A4(&ClassBoardLock_TypeInfo, v14);
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, v15);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v16);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_3031/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, v18);
    sub_B0D8A4(&StringLiteral_3029/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v19);
    sub_B0D8A4(&StringLiteral_3027/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, v20);
    sub_B0D8A4(&StringLiteral_3028/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, v21);
    sub_B0D8A4(&StringLiteral_3030/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v22);
    byte_4217B37 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)isEnableOpen,
    (System_String_array **)decideFunc,
    (System_Boolean_array **)cancelFunc,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.decideFunc = decideFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.cancelFunc = cancelFunc;
  sub_B0D840(
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
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3031/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_51;
  UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0LL);
  if ( !square )
    goto LABEL_51;
  v38 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
  if ( *(&square->klass->_2.bitflags2 + 1) >= (unsigned int)v38
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[v38 - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v37);
    if ( !LockModel )
      goto LABEL_51;
    v39 = *(System_String_c **)LockModel;
    v40 = LockModel;
    if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
    {
      v41 = 0LL;
      p_offset = &v39->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        ++v41;
        p_offset += 4;
        if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
          goto LABEL_15;
      }
      v43 = (__int64)(&v39->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_15:
      v43 = sub_AA67A0(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
    }
    LockModel = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
    if ( HIDWORD(LockModel) )
    {
      LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v44);
      if ( !LockModel )
        goto LABEL_51;
      v45 = *(System_String_c **)LockModel;
      v46 = LockModel;
      if ( *(_WORD *)(*(_QWORD *)LockModel + 298LL) )
      {
        v47 = 0LL;
        v48 = &v45->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v48 - 1) != IClassBoardLockModel_TypeInfo )
        {
          ++v47;
          v48 += 4;
          if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)LockModel + 298LL) )
            goto LABEL_23;
        }
        v49 = (__int64)(&v45->vtable._0_Equals.method + 2 * *v48);
      }
      else
      {
LABEL_23:
        v49 = sub_AA67A0(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
      }
      v50 = (const MethodInfo *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v49)(v46, *(_QWORD *)(v49 + 8));
      v67.fields.Num = v51;
      *(_QWORD *)&v67.fields.Type = v50;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v67, v50);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_51;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v54 = 0LL;
    v55 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(v55 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v54;
      v55 += 2;
      if ( v54 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)v55 + 6].method;
  }
  else
  {
LABEL_31:
    p_method = sub_AA67A0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v57 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v57, v58);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !isEnableOpen )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3030/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0LL);
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
    sub_B0D97C(LockModel);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0LL);
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
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3027/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_51;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)LockModel, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3028/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_51;
  UILabel__set_text(decideBtnLabel, (System_String_o *)LockModel, 0LL);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v63);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v66 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v64, v65);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
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
    sub_B0D97C(decideBtn);
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
  if ( (byte_4217B3C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15523/*"Window/CancelBtn"*/, method);
    byte_4217B3C = 1;
  }
  return (System_String_o *)StringLiteral_15523/*"Window/CancelBtn"*/;
}