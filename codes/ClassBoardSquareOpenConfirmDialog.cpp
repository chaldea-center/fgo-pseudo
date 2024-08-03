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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Action_o *v6; // x20

  if ( (byte_49FF82B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v3);
    byte_49FF82B = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v4, v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v6, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndClose(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FF82C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF82C = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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

  this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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

  if ( (byte_49FF82A & 1) == 0 )
  {
    sub_1B640C8(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__, method);
    byte_49FF82A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)cancelFunc, v6, v7);
    ClassBoardSquareOpenConfirmDialog__Close(this, v8);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickDecide(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_o *decideFunc; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_49FF82D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v3);
    sub_1B640C8(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__, v4);
    byte_49FF82D = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v5 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1B640E0(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v8, v9);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v12, 0LL);
    }
  }
  else
  {
    v13 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1B640E0(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v14 = (System_Reflection_MethodBase_o *)sub_1B640AC(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.onClickDecideDisableSeKind, 0LL);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49FF82E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__32_0__, v4);
    byte_49FF82E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__32_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v5, 0LL);
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
  __int64 v11; // x1
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  System_String_o *Master_object; // x0
  char v31; // w2
  int32_t v32; // w3
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  char v34; // w2
  int32_t v35; // w3
  UILabel_o *titleLabel; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v38; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  _BOOL4 v44; // w21
  UILabel_o *itemDetailLabel; // x22
  __int64 *v46; // x8
  __int64 v47; // x23
  char v48; // w2
  int32_t v49; // w3
  IClassBoardSquareModel_c *v50; // x8
  __int64 v51; // x9
  IClassBoardSquareModel_c **v52; // x10
  __int64 v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x24
  __int64 v55; // x1
  __int64 v56; // x2
  System_Func_object__bool__o *v57; // x25
  _BOOL4 v58; // w0
  IClassBoardSquareModel_c *v59; // x8
  int v60; // w24
  __int64 v61; // x9
  IClassBoardSquareModel_c **v62; // x10
  __int64 v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x22
  __int64 v65; // x1
  __int64 v66; // x2
  System_Func_object__bool__o *v67; // x25
  _BOOL4 v68; // w0
  char v69; // w23
  const MethodInfo *v70; // x3
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  System_Action_o *v76; // x20

  if ( (byte_49FF829 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, square);
    sub_1B640C8(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ItemMaster___, v12);
    sub_1B640C8(&DataManager_TypeInfo, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___, v14);
    sub_1B640C8(&System_Func_IClassBoardItemModel__bool__TypeInfo, v15);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v16);
    sub_1B640C8(&LocalizationManager_TypeInfo, v17);
    sub_1B640C8(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__, v18);
    sub_1B640C8(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__, v19);
    sub_1B640C8(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo, v20);
    sub_1B640C8(&StringLiteral_3499/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v21);
    sub_1B640C8(&StringLiteral_3496/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, v22);
    sub_1B640C8(&StringLiteral_3501/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/, v23);
    sub_1B640C8(&StringLiteral_3503/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_1B640C8(&StringLiteral_3495/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, v25);
    sub_1B640C8(&StringLiteral_3500/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/, v26);
    sub_1B640C8(&StringLiteral_3502/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/, v27);
    sub_1B640C8(&StringLiteral_3497/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v28);
    sub_1B640C8(&StringLiteral_3498/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/, v29);
    byte_49FF829 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isEnableOpen,
    (int32_t)decideFunc);
  if ( !square )
    goto LABEL_55;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  this->fields.decideFunc = decideFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.decideFunc, (int32_t)decideFunc, v31, v32);
  this->fields.cancelFunc = cancelFunc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cancelFunc, (int32_t)cancelFunc, v34, v35);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3503/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_55;
  UILabel__set_text(titleLabel, Master_object, 0LL);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, 0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_55;
  klass = SquareModel_k__BackingField->klass;
  v38 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v38;
      p_offset += 2;
      if ( !v38 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v41 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  v44 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v41, 0LL);
  if ( isEnableOpen )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v44 )
      {
LABEL_17:
        v46 = &StringLiteral_3498/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
        goto LABEL_49;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( v44 )
        goto LABEL_17;
    }
    v46 = &StringLiteral_3497/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
    goto LABEL_49;
  }
  v47 = sub_1B64314(ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo, v42, v43);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v47 )
LABEL_55:
    sub_1B64324(Master_object);
  *(_QWORD *)(v47 + 16) = Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 16), (int32_t)Master_object, v48, v49);
  v50 = SquareModel_k__BackingField->klass;
  v51 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v52 = (IClassBoardSquareModel_c **)&v50->_1.interfaceOffsets->offset;
    while ( *(v52 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v51;
      v52 += 2;
      if ( !v51 )
        goto LABEL_25;
    }
    v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 6].method;
  }
  else
  {
LABEL_25:
    v53 = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v53)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v53 + 8));
  v57 = (System_Func_object__bool__o *)sub_1B64314(System_Func_IClassBoardItemModel__bool__TypeInfo, v55, v56);
  System_Func_object__bool____ctor(
    v57,
    (Il2CppObject *)v47,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__,
    0LL);
  v58 = System_Linq_Enumerable__Any_object__48531816(
          v54,
          (System_Func_TSource__bool__o *)v57,
          (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  v59 = SquareModel_k__BackingField->klass;
  v60 = v58;
  v61 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v62 = (IClassBoardSquareModel_c **)&v59->_1.interfaceOffsets->offset;
    while ( *(v62 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v61;
      v62 += 2;
      if ( !v61 )
        goto LABEL_33;
    }
    v63 = (__int64)&v59->vtable[*(_DWORD *)v62 + 6].method;
  }
  else
  {
LABEL_33:
    v63 = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v63)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v63 + 8));
  v67 = (System_Func_object__bool__o *)sub_1B64314(System_Func_IClassBoardItemModel__bool__TypeInfo, v65, v66);
  System_Func_object__bool____ctor(
    v67,
    (Il2CppObject *)v47,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__,
    0LL);
  v68 = System_Linq_Enumerable__Any_object__48531816(
          v64,
          (System_Func_TSource__bool__o *)v67,
          (const MethodInfo_2E48968 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  if ( (v44 & v60 & 1) != 0 && v68 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v46 = &StringLiteral_3501/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/;
    goto LABEL_49;
  }
  if ( (v44 & ~v60 & v68 & 1) == 0 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    v69 = v68 | v44 & v60 ^ 1;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( ((v68 | v44 & (unsigned __int8)v60 ^ 1) & 1) != 0 )
      {
LABEL_46:
        v46 = &StringLiteral_3499/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
        goto LABEL_49;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( (v69 & 1) != 0 )
        goto LABEL_46;
    }
    v46 = &StringLiteral_3502/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    goto LABEL_49;
  }
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v46 = &StringLiteral_3500/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
LABEL_49:
  Master_object = LocalizationManager__Get((System_String_o *)*v46, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_55;
  UILabel__set_text(itemDetailLabel, Master_object, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v44, isEnableOpen, v70);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3495/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_55;
  UILabel__set_text(cancelBtnLabel, Master_object, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3496/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_55;
  UILabel__set_text(decideBtnLabel, Master_object, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v73);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v76 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v74, v75);
  System_Action___ctor(v76, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v76, 0, 0LL);
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
    sub_1B64324(decideBtn);
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
    sub_1B64324(itemQpObj);
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
  if ( (byte_49FF82F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15572/*"Window/CancelBtn"*/, method);
    byte_49FF82F = 1;
  }
  return (System_String_o *)StringLiteral_15572/*"Window/CancelBtn"*/;
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
  if ( (byte_49FF830 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_1B640C8(&IClassBoardItemModel_TypeInfo, x);
    byte_49FF830 = 1;
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
    p_method = sub_1BB60A8(x, IClassBoardItemModel_TypeInfo, 2LL);
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
    v14 = sub_1BB60A8(x, IClassBoardItemModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                        x,
                                                                        *(_QWORD *)(v14 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_1B64324(this);
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
  if ( (byte_49FF831 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_1B640C8(&IClassBoardItemModel_TypeInfo, x);
    byte_49FF831 = 1;
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
    p_method = sub_1BB60A8(x, IClassBoardItemModel_TypeInfo, 2LL);
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
      v14 = sub_1BB60A8(x, IClassBoardItemModel_TypeInfo, 0LL);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                          x,
                                                                          *(_QWORD *)(v14 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
LABEL_21:
    sub_1B64324(this);
  }
  return 0;
}