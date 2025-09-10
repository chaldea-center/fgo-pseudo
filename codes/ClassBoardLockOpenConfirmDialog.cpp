void ClassBoardLockOpenConfirmDialog___ctor(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.disableItemLabelPosY = -37.0;
  *(_QWORD *)&this->fields.onClickDecideSeKind = 0x200000008LL;
  this->fields.onClickCancelSeKind = 1;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardLockOpenConfirmDialog__Close(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C2AD06 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    byte_4C2AD06 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0);
}


void ClassBoardLockOpenConfirmDialog__EndClose(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C2AD07 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AD07 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(gameObject, 0);
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
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardLockOpenConfirmDialog__OnClickCancel(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *cancelFunc; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4C2AD05 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    byte_4C2AD05 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0, 0);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)cancelFunc, v6, v7);
    ClassBoardLockOpenConfirmDialog__Close(this, v8);
  }
}


void ClassBoardLockOpenConfirmDialog__OnClickDecide(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *decideFunc; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4C2AD08 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    sub_1C2D490(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    byte_4C2AD08 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v6, v7);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0);
    }
  }
  else
  {
    v9 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C2D474(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, this->fields.onClickDecideDisableSeKind, 0, 0);
  }
}


void ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C2AD09 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__);
    byte_4C2AD09 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__,
      0);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0);
    this->fields.isButtonEnable = 0;
  }
}


void ClassBoardLockOpenConfirmDialog__Open(
        ClassBoardLockOpenConfirmDialog_o *this,
        ClassBoardSquare_o *square,
        bool isEnableOpen,
        System_Action_o *decideFunc,
        System_Action_o *cancelFunc,
        const MethodInfo *method)
{
  bool v11; // w25
  char v12; // w2
  const MethodInfo *v13; // x3
  char v14; // w2
  const MethodInfo *v15; // x3
  UILabel_o *titleLabel; // x22
  unsigned __int64 LockModel; // x0
  const MethodInfo *v18; // x1
  __int64 naturalAligment; // x10
  System_String_c *v20; // x8
  unsigned __int64 v21; // x22
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  System_String_c *v25; // x8
  unsigned __int64 v26; // x22
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  int32_t v31; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v34; // x9
  IClassBoardSquareModel_c **v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v37; // x0
  UILabel_o *itemDetailLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v42; // x2
  System_Action_o *v43; // x20
  ClassBoardCondData_o v44; // 0:x1.12

  v11 = isEnableOpen;
  if ( (byte_4C2AD04 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__);
    sub_1C2D490(&ClassBoardLock_TypeInfo);
    sub_1C2D490(&IClassBoardLockModel_TypeInfo);
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3401/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_1C2D490(&StringLiteral_3399/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_1C2D490(&StringLiteral_3397/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C2D490(&StringLiteral_3398/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3400/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    byte_4C2AD04 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isEnableOpen,
    (const MethodInfo *)decideFunc);
  this->fields.decideFunc = decideFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.decideFunc, (int32_t)decideFunc, v12, v13);
  this->fields.cancelFunc = cancelFunc;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cancelFunc, (int32_t)cancelFunc, v14, v15);
  this->fields.isDecideButtonEnable = v11;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3401/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0);
  if ( !square )
    goto LABEL_45;
  naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
  if ( square->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v18);
    if ( !LockModel )
      goto LABEL_45;
    v20 = *(System_String_c **)LockModel;
    v21 = LockModel;
    v22 = *(unsigned __int16 *)(*(_QWORD *)LockModel + 302LL);
    if ( *(_WORD *)(*(_QWORD *)LockModel + 302LL) )
    {
      p_offset = &v20->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_14;
      }
      v24 = (__int64)&v20->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_14:
      v24 = sub_1C7DCA8(LockModel, IClassBoardLockModel_TypeInfo, 0);
    }
    LockModel = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    if ( HIDWORD(LockModel) )
    {
      LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v18);
      if ( !LockModel )
        goto LABEL_45;
      v25 = *(System_String_c **)LockModel;
      v26 = LockModel;
      v27 = *(unsigned __int16 *)(*(_QWORD *)LockModel + 302LL);
      if ( *(_WORD *)(*(_QWORD *)LockModel + 302LL) )
      {
        v28 = &v25->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v28 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_22;
        }
        v29 = (__int64)&v25->vtable + 16 * *v28;
      }
      else
      {
LABEL_22:
        v29 = sub_1C7DCA8(LockModel, IClassBoardLockModel_TypeInfo, 0);
      }
      v30 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
      v44.fields.Num = v31;
      *(_QWORD *)&v44.fields.Type = v30;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v44, 0);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
LABEL_45:
    sub_1C2D6EC(LockModel, v18);
  klass = SquareModel_k__BackingField->klass;
  v34 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v35 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(v35 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v34;
      v35 += 2;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&klass->vtable[*(_DWORD *)v35 + 6];
  }
  else
  {
LABEL_30:
    v36 = sub_1C7DCA8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v37 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v36)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(v36 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v37, 0);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isEnableOpen )
    {
LABEL_34:
      LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3399/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0);
      if ( !itemDetailLabel )
        goto LABEL_45;
      UILabel__set_text(itemDetailLabel, (System_String_o *)LockModel, 0);
      goto LABEL_40;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isEnableOpen )
      goto LABEL_34;
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3400/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0);
  if ( !itemDetailLabel )
    goto LABEL_45;
  UILabel__set_text(itemDetailLabel, (System_String_o *)LockModel, 0);
  LockModel = (unsigned __int64)this->fields.itemDetailLabel;
  if ( !LockModel )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.disableItemLabelPosY, 0);
LABEL_40:
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3397/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_45;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)LockModel, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3398/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_45;
  UILabel__set_text(decideBtnLabel, (System_String_o *)LockModel, 0);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v42);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v43 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardLockOpenConfirmDialog__SetDecideButton(
        ClassBoardLockOpenConfirmDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideBtn; // x0
  float v5; // s0 OVERLAPPED
  float v6; // s3
  float v7; // s1
  float v8; // s2

  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtn;
  if ( !decideBtn )
    goto LABEL_8;
  if ( !isEnable )
  {
    UnityEngine_Behaviour__set_enabled(decideBtn, 0, 0);
    decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
    if ( decideBtn )
    {
      v6 = 1.0;
      v5 = 0.5;
      goto LABEL_7;
    }
LABEL_8:
    sub_1C2D6EC(decideBtn, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideBtn, 1, 0);
  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
  if ( !decideBtn )
    goto LABEL_8;
  v5 = 1.0;
  v6 = 1.0;
LABEL_7:
  v7 = v5;
  v8 = v5;
  UIWidget__set_color((UIWidget_o *)decideBtn, *(UnityEngine_Color_o *)&v5, 0);
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
  if ( (byte_4C2AD0A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15637/*"Window/CancelBtn"*/);
    byte_4C2AD0A = 1;
  }
  return (System_String_o *)StringLiteral_15637/*"Window/CancelBtn"*/;
}