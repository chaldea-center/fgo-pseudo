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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4B196DA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v4, v5);
    byte_4B196DA = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v9, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__EndClose(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B196DB & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B196DB = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockOpenConfirmDialog__OnClickCancel(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_o *cancelFunc; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4B196D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__, method, v2);
    byte_4B196D9 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardLockOpenConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)cancelFunc, v7, v8, v9, v10, v11, v12);
    ClassBoardLockOpenConfirmDialog__Close(this, v13);
  }
}


void __fastcall ClassBoardLockOpenConfirmDialog__OnClickDecide(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct System_Action_o *decideFunc; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x20
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0

  if ( (byte_4B196DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardLockOpenConfirmDialog_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__, v6, v7);
    byte_4B196DC = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v8 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.closeFunc,
        (int64_t)decideFunc,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v20, 0LL);
    }
  }
  else
  {
    v21 = Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardLockOpenConfirmDialog_OnClickDecide__);
    v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, this->fields.onClickDecideDisableSeKind, 0LL);
  }
}


void __fastcall ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardLockOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B196DD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__, v5, v6);
    byte_4B196DD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ClassBoardLockOpenConfirmDialog__OnClickItemInfoListWindow_b__23_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v7, 0LL);
    this->fields.isButtonEnable = 0;
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  bool v13; // w26
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  UILabel_o *titleLabel; // x22
  System_String_o *LockModel; // x0
  const MethodInfo *v49; // x1
  __int64 methodPtr_low; // x10
  System_String_c *klass; // x8
  System_String_o *v52; // x22
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0
  int v56; // w1
  const MethodInfo *v57; // x2
  System_String_c *v58; // x8
  System_String_o *v59; // x22
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  int32_t v64; // w1
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  IClassBoardSquareModel_c *v66; // x8
  __int64 v67; // x9
  IClassBoardSquareModel_c **v68; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v70; // x0
  __int64 v71; // x1
  UILabel_o *itemDetailLabel; // x21
  __int64 v73; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Action_o *v81; // x20
  __int64 v82; // [xsp+0h] [xbp-60h] BYREF
  int v83; // [xsp+8h] [xbp-58h]
  ClassBoardCondData_o v84; // 0:x0.12
  ClassBoardCondData_o v85; // 0:x1.12

  v13 = isEnableOpen;
  if ( (byte_4B196D8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, square, isEnableOpen);
    sub_1BCA7E0(&Method_ClassBoardLockOpenConfirmDialog_EndOpen__, v14, v15);
    sub_1BCA7E0(&ClassBoardLock_TypeInfo, v16, v17);
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, v18, v19);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_3529/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_3527/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3525/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3526/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_3528/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v32, v33);
    byte_4B196D8 = 1;
  }
  v83 = 0;
  v82 = 0LL;
  this->fields.classBoardSquare = square;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquare,
    (int64_t)square,
    isEnableOpen,
    (int32_t)decideFunc,
    (System_String_o *)cancelFunc,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.decideFunc = decideFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.decideFunc, (int64_t)decideFunc, v34, v35, v36, v37, v38, v39);
  this->fields.cancelFunc = cancelFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cancelFunc, (int64_t)cancelFunc, v40, v41, v42, v43, v44, v45);
  this->fields.isDecideButtonEnable = v13;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3529/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_45;
  UILabel__set_text(titleLabel, LockModel, 0LL);
  if ( !square )
    goto LABEL_45;
  methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(square->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (ClassBoardLock_c *)square->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
  {
    LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v49);
    if ( !LockModel )
      goto LABEL_45;
    klass = LockModel->klass;
    v52 = LockModel;
    v53 = *(unsigned __int16 *)(&LockModel->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&LockModel->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v53;
        p_offset += 4;
        if ( !v53 )
          goto LABEL_14;
      }
      v55 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_14:
      v55 = sub_1C1C7C0(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
    }
    v82 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
    v83 = v56;
    *(_QWORD *)&v84.fields.Type = &v82;
    v84.fields.Num = 0;
    LockModel = (System_String_o *)ClassBoardCondData__get_HasCond(v84, v57);
    if ( ((unsigned __int8)LockModel & 1) != 0 )
    {
      LockModel = (System_String_o *)ClassBoardLock__get_LockModel((ClassBoardLock_o *)square, v49);
      if ( !LockModel )
        goto LABEL_45;
      v58 = LockModel->klass;
      v59 = LockModel;
      v60 = *(unsigned __int16 *)(&LockModel->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&LockModel->klass->_2.bitflags2 + 3) )
      {
        v61 = &v58->_1.interfaceOffsets->offset;
        while ( *((IClassBoardLockModel_c **)v61 - 1) != IClassBoardLockModel_TypeInfo )
        {
          --v60;
          v61 += 4;
          if ( !v60 )
            goto LABEL_22;
        }
        v62 = (__int64)(&v58->vtable._0_Equals.method + 2 * *v61);
      }
      else
      {
LABEL_22:
        v62 = sub_1C1C7C0(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
      }
      v63 = (*(__int64 (__fastcall **)(System_String_o *, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
      v85.fields.Num = v64;
      *(_QWORD *)&v85.fields.Type = v63;
      ClassBoardBaseDialog__SetUpLockReleaseCondition((ClassBoardBaseDialog_o *)this, v85, 0LL);
    }
  }
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
LABEL_45:
    sub_1BCAA3C(LockModel, v49);
  v66 = SquareModel_k__BackingField->klass;
  v67 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v68 = (IClassBoardSquareModel_c **)&v66->_1.interfaceOffsets->offset;
    while ( *(v68 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v67;
      v68 += 2;
      if ( !v67 )
        goto LABEL_30;
    }
    p_method = (__int64)&v66->vtable[*(_DWORD *)v68 + 6].method;
  }
  else
  {
LABEL_30:
    p_method = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v70 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v70, 0LL);
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isEnableOpen )
    {
LABEL_34:
      LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3527/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, 0LL);
      if ( !itemDetailLabel )
        goto LABEL_45;
      UILabel__set_text(itemDetailLabel, LockModel, 0LL);
      goto LABEL_40;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v71);
    if ( isEnableOpen )
      goto LABEL_34;
  }
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3528/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_45;
  UILabel__set_text(itemDetailLabel, LockModel, 0LL);
  LockModel = (System_String_o *)this->fields.itemDetailLabel;
  if ( !LockModel )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)LockModel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, this->fields.disableItemLabelPosY, 0LL);
LABEL_40:
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_45;
  UILabel__set_text(cancelBtnLabel, LockModel, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  LockModel = LocalizationManager__Get((System_String_o *)StringLiteral_3526/*"CLASS_BOARD_LOCK_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_45;
  UILabel__set_text(decideBtnLabel, LockModel, 0LL);
  ClassBoardLockOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v77);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v81 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v78, v79, v80);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_ClassBoardLockOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
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
    sub_1BCAA3C(decideBtn, isEnable);
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
  __int64 v2; // x2

  if ( (byte_4B196DE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15807/*"Window/CancelBtn"*/, method, v2);
    byte_4B196DE = 1;
  }
  return (System_String_o *)StringLiteral_15807/*"Window/CancelBtn"*/;
}