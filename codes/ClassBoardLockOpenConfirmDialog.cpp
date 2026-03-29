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

  if ( (byte_4D3465F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    byte_4D3465F = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0);
}


void ClassBoardLockOpenConfirmDialog__EndClose(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D34660 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D34660 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
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
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardLockOpenConfirmDialog__OnClickCancel(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *cancelFunc; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4D3465E & 1) == 0 )
  {
    sub_1C93AD4(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    byte_4D3465E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0, 0);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeFunc, (int32_t)cancelFunc, v6, v7, v8, v9, v10, v11);
    ClassBoardLockOpenConfirmDialog__Close(this, v12);
  }
}


void ClassBoardLockOpenConfirmDialog__OnClickDecide(ClassBoardLockOpenConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *decideFunc; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4D34661 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardLockOpenConfirmDialog_EndClose__);
    sub_1C93AD4(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    byte_4D34661 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1C93AEC(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v6, v7, v8, v9, v10, v11);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
      v12 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v12, 0);
    }
  }
  else
  {
    v13 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C93AEC(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.onClickDecideDisableSeKind, 0, 0);
  }
}


void ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D34662 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__);
    byte_4D34662 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  bool v13; // w25
  char v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  char v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  UILabel_o *titleLabel; // x22
  unsigned __int64 LockModel; // x0
  const MethodInfo *v28; // x1
  __int64 naturalAligment; // x10
  System_String_c *v30; // x8
  unsigned __int64 v31; // x22
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  System_String_c *v35; // x8
  unsigned __int64 v36; // x22
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  int32_t v41; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v44; // x9
  IClassBoardSquareModel_c **v45; // x10
  __int64 v46; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v47; // x0
  UILabel_o *itemDetailLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v52; // x2
  System_Action_o *v53; // x20
  ClassBoardCondData_o v54; // 0:x1.12

  v13 = isEnableOpen;
  if ( (byte_4D3465D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__);
    sub_1C93AD4(&ClassBoardLock_TypeInfo);
    sub_1C93AD4(&IClassBoardLockModel_TypeInfo);
    sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_3424/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_3422/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_1C93AD4(&StringLiteral_3420/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_3421/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_3423/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    byte_4D3465D = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isEnableOpen,
    (int32_t)decideFunc,
    (System_String_o *)cancelFunc,
    (int32_t)method,
    v6,
    v7);
  this->fields.decideFunc = decideFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.decideFunc,
    (int32_t)decideFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.cancelFunc = cancelFunc;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.cancelFunc,
    (int32_t)cancelFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.isDecideButtonEnable = v13;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3424/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0);
  if ( !square )
    goto LABEL_45;
  naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
  if ( square->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v28);
    if ( !LockModel )
      goto LABEL_45;
    v30 = *(System_String_c **)LockModel;
    v31 = LockModel;
    v32 = *(unsigned __int16 *)(*(_QWORD *)LockModel + 302LL);
    if ( *(_WORD *)(*(_QWORD *)LockModel + 302LL) )
    {
      p_offset = &v30->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_14;
      }
      v34 = (__int64)&v30->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_14:
      v34 = sub_1C69E5C(LockModel, IClassBoardLockModel_TypeInfo, 0);
    }
    LockModel = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
    if ( HIDWORD(LockModel) )
    {
      LockModel = (unsigned __int64)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v28);
      if ( !LockModel )
        goto LABEL_45;
      v35 = *(System_String_c **)LockModel;
      v36 = LockModel;
      v37 = *(unsigned __int16 *)(*(_QWORD *)LockModel + 302LL);
      if ( *(_WORD *)(*(_QWORD *)LockModel + 302LL) )
      {
        v38 = &v35->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v38 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_22;
        }
        v39 = (__int64)&v35->vtable + 16 * *v38;
      }
      else
      {
LABEL_22:
        v39 = sub_1C69E5C(LockModel, IClassBoardLockModel_TypeInfo, 0);
      }
      v40 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
      v54.fields.Num = v41;
      *(_QWORD *)&v54.fields.Type = v40;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v54, 0);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
LABEL_45:
    sub_1C93D2C(LockModel, v28);
  klass = SquareModel_k__BackingField->klass;
  v44 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v45 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(v45 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_30;
    }
    v46 = (__int64)&klass->vtable[*(_DWORD *)v45 + 6];
  }
  else
  {
LABEL_30:
    v46 = sub_1C69E5C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v47 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v46)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(v46 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v47, 0);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isEnableOpen )
    {
LABEL_34:
      LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3422/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0);
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
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3423/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0);
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
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3420/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_45;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)LockModel, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3421/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_45;
  UILabel__set_text(decideBtnLabel, (System_String_o *)LockModel, 0);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v52);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v53 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardLockOpenConfirmDialog__SetDecideButton(
        ClassBoardLockOpenConfirmDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideBtn; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtn;
  if ( !decideBtn )
    goto LABEL_8;
  if ( !isEnable )
  {
    UnityEngine_Behaviour__set_enabled(decideBtn, 0, 0);
    decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
    if ( decideBtn )
    {
      v6.fields.a = 1.0;
      v6.fields.r = 0.5;
      goto LABEL_7;
    }
LABEL_8:
    sub_1C93D2C(decideBtn, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideBtn, 1, 0);
  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
  if ( !decideBtn )
    goto LABEL_8;
  v6.fields.r = 1.0;
  v6.fields.a = 1.0;
LABEL_7:
  v6.fields.g = v6.fields.r;
  v6.fields.b = v6.fields.r;
  UIWidget__set_color((UIWidget_o *)decideBtn, v6, 0);
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
  if ( (byte_4D34663 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_15740/*"Window/CancelBtn"*/);
    byte_4D34663 = 1;
  }
  return (System_String_o *)StringLiteral_15740/*"Window/CancelBtn"*/;
}