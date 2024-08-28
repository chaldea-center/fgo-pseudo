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
  System_Action_o *v4; // x20

  if ( (byte_4A0C040 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v3);
    byte_4A0C040 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v4 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__EndClose(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A0C041 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A0C041 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69171816(gameObject, 0LL);
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
    sub_1B68930(0LL, v4);
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
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_4A0C03F & 1) == 0 )
  {
    sub_1B686D4(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__, method);
    byte_4A0C03F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)cancelFunc, v6, v7);
    ClassBoardLockOpenConfirmDialog__Close(this, v8);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4A0C042 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v3);
    sub_1B686D4(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__, v4);
    byte_4A0C042 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v5 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B686EC(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v8, v9);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v10 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v10, 0LL);
    }
  }
  else
  {
    v11 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B686EC(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B686B8(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, this->fields.onClickDecideDisableSeKind, 0LL);
  }
}


void __fastcall ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A0C043 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__, v3);
    byte_4A0C043 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v4, 0LL);
    this->fields.isButtonEnable = 0;
  }
}


void __fastcall ClassBoardLockOpenConfirmDialog__Open(
        ClassBoardLockOpenConfirmDialog_o *this,
        ClassBoardSquare_o *square,
        bool isEnableOpen,
        System_Action_o *decideFunc,
        System_Action_o *cancelFunc,
        const MethodInfo *method)
{
  bool v11; // w26
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  char v22; // w2
  int32_t v23; // w3
  char v24; // w2
  int32_t v25; // w3
  UILabel_o *titleLabel; // x22
  unsigned __int64 LockModel; // x0
  const MethodInfo *v28; // x1
  __int64 methodPtr_low; // x10
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
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v47; // x0
  UILabel_o *itemDetailLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v52; // x2
  System_Action_o *v53; // x20
  ClassBoardCondData_o v54; // 0:x1.12

  v11 = isEnableOpen;
  if ( (byte_4A0C03E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, square);
    sub_1B686D4(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__, v12);
    sub_1B686D4(&ClassBoardLock_TypeInfo, v13);
    sub_1B686D4(&IClassBoardLockModel_TypeInfo, v14);
    sub_1B686D4(&IClassBoardSquareModel_TypeInfo, v15);
    sub_1B686D4(&LocalizationManager_TypeInfo, v16);
    sub_1B686D4(&StringLiteral_3479/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, v17);
    sub_1B686D4(&StringLiteral_3477/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v18);
    sub_1B686D4(&StringLiteral_3475/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, v19);
    sub_1B686D4(&StringLiteral_3476/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, v20);
    sub_1B686D4(&StringLiteral_3478/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v21);
    byte_4A0C03E = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isEnableOpen,
    (int32_t)decideFunc);
  this->fields.decideFunc = decideFunc;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.decideFunc, (int32_t)decideFunc, v22, v23);
  this->fields.cancelFunc = cancelFunc;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.cancelFunc, (int32_t)cancelFunc, v24, v25);
  this->fields.isDecideButtonEnable = v11;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3479/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, (System_String_o *)LockModel, 0LL);
  if ( !square )
    goto LABEL_45;
  methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(square->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
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
      v34 = (__int64)(&v30->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_14:
      v34 = sub_1BBA6B4(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
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
        v39 = (__int64)(&v35->vtable._0_Equals.method + 2 * *v38);
      }
      else
      {
LABEL_22:
        v39 = sub_1BBA6B4(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
      }
      v40 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
      v54.fields.Num = v41;
      *(_QWORD *)&v54.fields.Type = v40;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v54, 0LL);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
LABEL_45:
    sub_1B68930(LockModel, v28);
  klass = SquareModel_k__BackingField->klass;
  v44 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v45 = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(v45 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v44;
      v45 += 2;
      if ( !v44 )
        goto LABEL_30;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)v45 + 6].method;
  }
  else
  {
LABEL_30:
    p_method = sub_1BBA6B4(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v47 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v47, 0LL);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isEnableOpen )
    {
LABEL_34:
      LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3477/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0LL);
      if ( !itemDetailLabel )
        goto LABEL_45;
      UILabel__set_text(itemDetailLabel, (System_String_o *)LockModel, 0LL);
      goto LABEL_40;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isEnableOpen )
      goto LABEL_34;
  }
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3478/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_45;
  UILabel__set_text(itemDetailLabel, (System_String_o *)LockModel, 0LL);
  LockModel = (unsigned __int64)this->fields.itemDetailLabel;
  if ( !LockModel )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.disableItemLabelPosY, 0LL);
LABEL_40:
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3475/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_45;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)LockModel, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = (unsigned __int64)LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_45;
  UILabel__set_text(decideBtnLabel, (System_String_o *)LockModel, 0LL);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v52);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v53 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardLockOpenConfirmDialog__SetDecideButton(
        ClassBoardLockOpenConfirmDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideBtn; // x0
  float v5; // s0
  float v6; // s3
  float v7; // s1
  float v8; // s2

  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtn;
  if ( !decideBtn )
    goto LABEL_8;
  if ( !isEnable )
  {
    UnityEngine_Behaviour__set_enabled(decideBtn, 0, 0LL);
    decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
    if ( decideBtn )
    {
      v6 = 1.0;
      v5 = 0.5;
      goto LABEL_7;
    }
LABEL_8:
    sub_1B68930(decideBtn, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideBtn, 1, 0LL);
  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
  if ( !decideBtn )
    goto LABEL_8;
  v5 = 1.0;
  v6 = 1.0;
LABEL_7:
  v7 = v5;
  v8 = v5;
  UIWidget__set_color((UIWidget_o *)decideBtn, *(UnityEngine_Color_o *)&v5, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog___OnClickItemInfoListWindow_b__23_0(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall ClassBoardLockOpenConfirmDialog__get_closeBtnPath(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0C044 & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_15574/*"Window/CancelBtn"*/, method);
    byte_4A0C044 = 1;
  }
  return (System_String_o *)StringLiteral_15574/*"Window/CancelBtn"*/;
}