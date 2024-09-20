void __fastcall ClassBoardSquareOpenConfirmDialog___ctor(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.onClickDecideSeKind = 0x200000008LL;
  this->fields.onClickCancelSeKind = 1;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__Close(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5E612 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    byte_4A5E612 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndClose(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5E613 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E613 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndOpen(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ClassBoardSquareOpenConfirmDialog__Init(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickCancel(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *cancelFunc; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_4A5E611 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    byte_4A5E611 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)cancelFunc, v6, v7);
    ClassBoardSquareOpenConfirmDialog__Close(this, v8);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickDecide(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *decideFunc; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4A5E614 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    sub_1B885B0(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    byte_4A5E614 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1B885C8(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v6, v7);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0LL);
    }
  }
  else
  {
    v9 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B885C8(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B88594(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, this->fields.onClickDecideDisableSeKind, 0LL);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5E615 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__32_0__);
    byte_4A5E615 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__32_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0LL);
    this->fields.isButtonEnable = 0;
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__Open(
        ClassBoardSquareOpenConfirmDialog_o *this,
        ClassBoardSquare_o *square,
        bool isEnableOpen,
        System_Action_o *decideFunc,
        System_Action_o *cancelFunc,
        const MethodInfo *method)
{
  System_String_o *Master_object; // x0
  __int64 v12; // x1
  char v13; // w2
  int32_t v14; // w3
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  char v16; // w2
  int32_t v17; // w3
  UILabel_o *titleLabel; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v20; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v23; // x0
  _BOOL4 v24; // w21
  UILabel_o *itemDetailLabel; // x22
  __int64 *v26; // x8
  __int64 v27; // x23
  char v28; // w2
  int32_t v29; // w3
  IClassBoardSquareModel_c *v30; // x8
  __int64 v31; // x9
  IClassBoardSquareModel_c **v32; // x10
  __int64 v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x24
  System_Func_object__bool__o *v35; // x25
  _BOOL4 v36; // w0
  IClassBoardSquareModel_c *v37; // x8
  int v38; // w24
  __int64 v39; // x9
  IClassBoardSquareModel_c **v40; // x10
  __int64 v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x22
  System_Func_object__bool__o *v43; // x25
  _BOOL4 v44; // w0
  char v45; // w23
  const MethodInfo *v46; // x3
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v49; // x2
  System_Action_o *v50; // x20

  if ( (byte_4A5E610 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    sub_1B885B0(&System_Func_IClassBoardItemModel__bool__TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__);
    sub_1B885B0(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__);
    sub_1B885B0(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo);
    sub_1B885B0(&StringLiteral_3521/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    sub_1B885B0(&StringLiteral_3518/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3523/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/);
    sub_1B885B0(&StringLiteral_3525/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3517/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_1B885B0(&StringLiteral_3522/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/);
    sub_1B885B0(&StringLiteral_3524/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/);
    sub_1B885B0(&StringLiteral_3519/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_1B885B0(&StringLiteral_3520/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/);
    byte_4A5E610 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isEnableOpen,
    (int32_t)decideFunc);
  if ( !square )
    goto LABEL_55;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  this->fields.decideFunc = decideFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.decideFunc, (int32_t)decideFunc, v13, v14);
  this->fields.cancelFunc = cancelFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cancelFunc, (int32_t)cancelFunc, v16, v17);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3525/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_55;
  UILabel__set_text(titleLabel, Master_object, 0LL);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, 0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_55;
  klass = SquareModel_k__BackingField->klass;
  v20 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      p_offset += 2;
      if ( !v20 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v23 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  v24 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v23, 0LL);
  if ( isEnableOpen )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v24 )
      {
LABEL_17:
        v26 = &StringLiteral_3520/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
        goto LABEL_49;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v24 )
        goto LABEL_17;
    }
    v26 = &StringLiteral_3519/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
    goto LABEL_49;
  }
  v27 = sub_1B887FC(ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v27 )
LABEL_55:
    sub_1B8880C(Master_object, v12);
  *(_QWORD *)(v27 + 16) = Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 16), (int32_t)Master_object, v28, v29);
  v30 = SquareModel_k__BackingField->klass;
  v31 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v32 = (IClassBoardSquareModel_c **)&v30->_1.interfaceOffsets->offset;
    while ( *(v32 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v31;
      v32 += 2;
      if ( !v31 )
        goto LABEL_25;
    }
    v33 = (__int64)&v30->vtable[*(_DWORD *)v32 + 6].method;
  }
  else
  {
LABEL_25:
    v33 = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v33)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v33 + 8));
  v35 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v35,
    (Il2CppObject *)v27,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__,
    0LL);
  v36 = System_Linq_Enumerable__Any_object__48820656(
          v34,
          (System_Func_TSource__bool__o *)v35,
          (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  v37 = SquareModel_k__BackingField->klass;
  v38 = v36;
  v39 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v40 = (IClassBoardSquareModel_c **)&v37->_1.interfaceOffsets->offset;
    while ( *(v40 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_33;
    }
    v41 = (__int64)&v37->vtable[*(_DWORD *)v40 + 6].method;
  }
  else
  {
LABEL_33:
    v41 = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v41)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v41 + 8));
  v43 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v43,
    (Il2CppObject *)v27,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__,
    0LL);
  v44 = System_Linq_Enumerable__Any_object__48820656(
          v42,
          (System_Func_TSource__bool__o *)v43,
          (const MethodInfo_2E8F1B0 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  if ( (v24 & v38 & 1) != 0 && v44 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = &StringLiteral_3523/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/;
    goto LABEL_49;
  }
  if ( (v24 & ~v38 & v44 & 1) == 0 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    v45 = v44 | v24 & v38 ^ 1;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( ((v44 | v24 & (unsigned __int8)v38 ^ 1) & 1) != 0 )
      {
LABEL_46:
        v26 = &StringLiteral_3521/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
        goto LABEL_49;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( (v45 & 1) != 0 )
        goto LABEL_46;
    }
    v26 = &StringLiteral_3524/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    goto LABEL_49;
  }
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = &StringLiteral_3522/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
LABEL_49:
  Master_object = LocalizationManager__Get((System_String_o *)*v26, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_55;
  UILabel__set_text(itemDetailLabel, Master_object, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v24, isEnableOpen, v46);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3517/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_55;
  UILabel__set_text(cancelBtnLabel, Master_object, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3518/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_55;
  UILabel__set_text(decideBtnLabel, Master_object, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v49);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v50 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquareOpenConfirmDialog__SetDecideButton(
        ClassBoardSquareOpenConfirmDialog_o *this,
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
    sub_1B8880C(decideBtn, isEnable);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquareOpenConfirmDialog__SetUiPosition(
        ClassBoardSquareOpenConfirmDialog_o *this,
        bool isContainQp,
        bool isEnableOpen,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemQpObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  struct UnityEngine_Vector3_o *p_itemDetailLabelPosContainQp; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( isContainQp && isEnableOpen )
  {
    itemQpObj = this->fields.itemQpObj;
    if ( itemQpObj )
    {
      gameObject = UnityEngine_GameObject__get_gameObject(itemQpObj, 0LL);
      GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemQpObjPosAContainQp, 0LL);
      itemQpObj = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
      if ( itemQpObj )
      {
        v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemQpObj, 0LL);
        GameObjectExtensions__SetLocalPosition(v7, this->fields.itemIconListGridPosContainQp, 0LL);
        itemQpObj = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
        if ( itemQpObj )
        {
          v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemQpObj, 0LL);
          p_itemDetailLabelPosContainQp = &this->fields.itemDetailLabelPosContainQp;
          p_y = &this->fields.itemDetailLabelPosContainQp.fields.y;
          p_z = &this->fields.itemDetailLabelPosContainQp.fields.z;
LABEL_19:
          v16.fields.z = *p_z;
          v16.fields.y = *p_y;
          v16.fields.x = p_itemDetailLabelPosContainQp->fields.x;
          GameObjectExtensions__SetLocalPosition(v8, v16, 0LL);
          return;
        }
      }
    }
    goto LABEL_21;
  }
  if ( isContainQp && !isEnableOpen )
  {
    itemQpObj = this->fields.itemQpObj;
    if ( itemQpObj )
    {
      v12 = UnityEngine_GameObject__get_gameObject(itemQpObj, 0LL);
      GameObjectExtensions__SetLocalPosition(v12, this->fields.itemQpObjPosContainQpDisable, 0LL);
      itemQpObj = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
      if ( itemQpObj )
      {
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemQpObj, 0LL);
        GameObjectExtensions__SetLocalPosition(v13, this->fields.itemIconListGridPosContainQpDisable, 0LL);
        itemQpObj = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
        if ( itemQpObj )
        {
          v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemQpObj, 0LL);
          p_itemDetailLabelPosContainQp = &this->fields.itemDetailLabelPosContainQpDisable;
          p_y = &this->fields.itemDetailLabelPosContainQpDisable.fields.y;
          p_z = &this->fields.itemDetailLabelPosContainQpDisable.fields.z;
          goto LABEL_19;
        }
      }
    }
LABEL_21:
    sub_1B8880C(itemQpObj, isContainQp);
  }
  if ( !isContainQp && !isEnableOpen )
  {
    itemQpObj = this->fields.itemQpObj;
    if ( itemQpObj )
    {
      v14 = UnityEngine_GameObject__get_gameObject(itemQpObj, 0LL);
      GameObjectExtensions__SetLocalPosition(v14, this->fields.itemQpObjPosDisable, 0LL);
      itemQpObj = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
      if ( itemQpObj )
      {
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemQpObj, 0LL);
        GameObjectExtensions__SetLocalPosition(v15, this->fields.itemIconListGridPosDisable, 0LL);
        itemQpObj = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
        if ( itemQpObj )
        {
          v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemQpObj, 0LL);
          p_itemDetailLabelPosContainQp = &this->fields.itemDetailLabelPosDisable;
          p_y = &this->fields.itemDetailLabelPosDisable.fields.y;
          p_z = &this->fields.itemDetailLabelPosDisable.fields.z;
          goto LABEL_19;
        }
      }
    }
    goto LABEL_21;
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog___OnClickItemInfoListWindow_b__32_0(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall ClassBoardSquareOpenConfirmDialog__get_closeBtnPath(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E616 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15640/*"Window/CancelBtn"*/);
    byte_4A5E616 = 1;
  }
  return (System_String_o *)StringLiteral_15640/*"Window/CancelBtn"*/;
}


void __fastcall ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___ctor(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___Open_b__0(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *this,
        IClassBoardItemModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *v4; // x20
  IClassBoardItemModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardItemModel_c *v10; // x8
  ItemMaster_o *itemMaster; // x20
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4A5E617 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_1B885B0(&IClassBoardItemModel_TypeInfo);
    byte_4A5E617 = 1;
  }
  if ( !x )
    goto LABEL_20;
  klass = x->klass;
  v6 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)p_offset - 1) != IClassBoardItemModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(x, IClassBoardItemModel_TypeInfo, 2LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 0;
  v10 = x->klass;
  itemMaster = v4->fields.itemMaster;
  v12 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)v13 - 1) != IClassBoardItemModel_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_16;
    }
    v14 = (__int64)&v10->vtable[*v13].method;
  }
  else
  {
LABEL_16:
    v14 = sub_1BDA590(x, IClassBoardItemModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                        x,
                                                                        *(_QWORD *)(v14 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_1B8880C(this, x);
  return ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
}


bool __fastcall ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___Open_b__1(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *this,
        IClassBoardItemModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *v4; // x20
  IClassBoardItemModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardItemModel_c *v10; // x8
  ItemMaster_o *itemMaster; // x20
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4A5E618 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_1B885B0(&IClassBoardItemModel_TypeInfo);
    byte_4A5E618 = 1;
  }
  if ( !x )
    goto LABEL_21;
  klass = x->klass;
  v6 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)p_offset - 1) != IClassBoardItemModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(x, IClassBoardItemModel_TypeInfo, 2LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v10 = x->klass;
    itemMaster = v4->fields.itemMaster;
    v12 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
    {
      v13 = &v10->_1.interfaceOffsets->offset;
      while ( *((IClassBoardItemModel_c **)v13 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v10->vtable[*v13].method;
    }
    else
    {
LABEL_16:
      v14 = sub_1BDA590(x, IClassBoardItemModel_TypeInfo, 0LL);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                          x,
                                                                          *(_QWORD *)(v14 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
LABEL_21:
    sub_1B8880C(this, x);
  }
  return 0;
}