void ClassBoardSquareOpenConfirmDialog___ctor(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.windowHeightForGrand = 570;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_CEBA40;
  this->fields.itemInfoListBtnPosYForGrand = 60.0;
  *(_QWORD *)&this->fields.confirmTextPosYForGrand = 0xC34C0000C30C0000LL;
  *(_QWORD *)&this->fields.onClickDecideSeKind = 0x200000008LL;
  this->fields.onClickCancelSeKind = 1;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardSquareOpenConfirmDialog__Close(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CB9F4F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    byte_4CB9F4F = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
  v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0);
}


void ClassBoardSquareOpenConfirmDialog__EndClose(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB9F50 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9F50 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(gameObject, 0);
}


void ClassBoardSquareOpenConfirmDialog__EndOpen(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ClassBoardSquareOpenConfirmDialog__Init(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardSquareOpenConfirmDialog__OnClickCancel(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *cancelFunc; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4CB9F4E & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    byte_4CB9F4E = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0, 0);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)cancelFunc, v6, v7);
    ClassBoardSquareOpenConfirmDialog__Close(this, v8);
  }
}


void ClassBoardSquareOpenConfirmDialog__OnClickDecide(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *decideFunc; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_4CB9F51 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    sub_1C6BA08(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    byte_4CB9F51 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1C6BA20(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v6, v7);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
      v8 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0);
    }
  }
  else
  {
    v9 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1C6BA20(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, this->fields.onClickDecideDisableSeKind, 0, 0);
  }
}


void ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CB9F52 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__42_0__);
    byte_4CB9F52 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__42_0__,
      0);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0);
    this->fields.isButtonEnable = 0;
  }
}


void ClassBoardSquareOpenConfirmDialog__Open(
        ClassBoardSquareOpenConfirmDialog_o *this,
        ClassBoardSquare_o *square,
        bool isEnableOpen,
        System_Action_o *decideFunc,
        System_Action_o *cancelFunc,
        const MethodInfo *method)
{
  UserClassStatisticsMaster_o *Master_object; // x0
  __int64 v12; // x1
  char v13; // w2
  const MethodInfo *v14; // x3
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  char v16; // w2
  const MethodInfo *v17; // x3
  ClassStatisticsInfo_array *v18; // x23
  IClassBoardSquareModel_c *klass; // x8
  __int64 v20; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v22; // x0
  char v23; // w0
  UILabel_o *titleLabel; // x24
  char v25; // w21
  System_String_o **v26; // x8
  IClassBoardSquareModel_c *v27; // x8
  __int64 v28; // x9
  IClassBoardSquareModel_c **v29; // x10
  __int64 v30; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v31; // x0
  _BOOL4 v32; // w23
  UILabel_o *itemDetailLabel; // x22
  __int64 *v34; // x8
  __int64 v35; // x24
  char v36; // w2
  const MethodInfo *v37; // x3
  IClassBoardSquareModel_c *v38; // x8
  __int64 v39; // x9
  IClassBoardSquareModel_c **v40; // x10
  __int64 v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x25
  System_Func_object__bool__o *v43; // x26
  _BOOL4 v44; // w0
  IClassBoardSquareModel_c *v45; // x8
  int v46; // w25
  __int64 v47; // x9
  IClassBoardSquareModel_c **v48; // x10
  __int64 v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x22
  System_Func_object__bool__o *v51; // x26
  _BOOL4 v52; // w0
  char v53; // w24
  const MethodInfo *v54; // x4
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v57; // x2
  System_Action_o *v58; // x20

  if ( (byte_4CB9F4C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__);
    sub_1C6BA08(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    sub_1C6BA08(&System_Func_IClassBoardItemModel__bool__TypeInfo);
    sub_1C6BA08(&IClassBoardSquareModel_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__0__);
    sub_1C6BA08(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__1__);
    sub_1C6BA08(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_3422/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    sub_1C6BA08(&StringLiteral_3419/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3424/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/);
    sub_1C6BA08(&StringLiteral_3390/*"CLASS_BOARD_GRAND_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3426/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3418/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_3423/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/);
    sub_1C6BA08(&StringLiteral_3425/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/);
    sub_1C6BA08(&StringLiteral_3420/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_1C6BA08(&StringLiteral_3421/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/);
    byte_4CB9F4C = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isEnableOpen,
    (const MethodInfo *)decideFunc);
  if ( !square )
    goto LABEL_70;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  this->fields.decideFunc = decideFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.decideFunc, (int32_t)decideFunc, v13, v14);
  this->fields.cancelFunc = cancelFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cancelFunc, (int32_t)cancelFunc, v16, v17);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserClassStatisticsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
  {
    Master_object = (UserClassStatisticsMaster_o *)UserClassStatisticsMaster__GetClassStatisticsInfos(Master_object, 0);
    v18 = (ClassStatisticsInfo_array *)Master_object;
    if ( !SquareModel_k__BackingField )
      goto LABEL_70;
  }
  else
  {
    v18 = 0;
    if ( !SquareModel_k__BackingField )
      goto LABEL_70;
  }
  klass = SquareModel_k__BackingField->klass;
  v20 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      p_offset += 2;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_14:
    v22 = sub_1C41D90(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  v23 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v22)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v22 + 8));
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  v25 = v23;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v26 = (System_String_o **)((v25 & 1) != 0 ? &StringLiteral_3390/*"CLASS_BOARD_GRAND_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/ : &StringLiteral_3426/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get(*v26, 0);
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, v18, 0);
  v27 = SquareModel_k__BackingField->klass;
  v28 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v29 = (IClassBoardSquareModel_c **)&v27->_1.interfaceOffsets->offset;
    while ( *(v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v28;
      v29 += 2;
      if ( !v28 )
        goto LABEL_26;
    }
    v30 = (__int64)&v27->vtable[*(_DWORD *)v29 + 6];
  }
  else
  {
LABEL_26:
    v30 = sub_1C41D90(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v31 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(v30 + 8));
  v32 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v31, 0);
  if ( !isEnableOpen )
  {
    v35 = sub_1C6BC54(ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v35, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserClassStatisticsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !v35 )
      goto LABEL_70;
    *(_QWORD *)(v35 + 16) = Master_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 16), (int32_t)Master_object, v36, v37);
    v38 = SquareModel_k__BackingField->klass;
    v39 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
    {
      v40 = (IClassBoardSquareModel_c **)&v38->_1.interfaceOffsets->offset;
      while ( *(v40 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v39;
        v40 += 2;
        if ( !v39 )
          goto LABEL_39;
      }
      v41 = (__int64)&v38->vtable[*(_DWORD *)v40 + 6];
    }
    else
    {
LABEL_39:
      v41 = sub_1C41D90(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
    }
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v41)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v41 + 8));
    v43 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_IClassBoardItemModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v43,
      (Il2CppObject *)v35,
      Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__0__,
      0);
    v44 = System_Linq_Enumerable__Any_object__51678644(
            v42,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_3148DB4 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    v45 = SquareModel_k__BackingField->klass;
    v46 = v44;
    v47 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
    {
      v48 = (IClassBoardSquareModel_c **)&v45->_1.interfaceOffsets->offset;
      while ( *(v48 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v47;
        v48 += 2;
        if ( !v47 )
          goto LABEL_47;
      }
      v49 = (__int64)&v45->vtable[*(_DWORD *)v48 + 6];
    }
    else
    {
LABEL_47:
      v49 = sub_1C41D90(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v49)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v49 + 8));
    v51 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_IClassBoardItemModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v51,
      (Il2CppObject *)v35,
      Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__1__,
      0);
    v52 = System_Linq_Enumerable__Any_object__51678644(
            v50,
            (System_Func_TSource__bool__o *)v51,
            (const MethodInfo_3148DB4 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    if ( (v32 & v46 & 1) != 0 && v52 )
    {
      itemDetailLabel = this->fields.itemDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3424/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/, 0);
      if ( itemDetailLabel )
        goto LABEL_65;
LABEL_70:
      sub_1C6BC60(Master_object, v12);
    }
    if ( (v32 & ~v46 & v52 & 1) != 0 )
    {
      itemDetailLabel = this->fields.itemDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v34 = &StringLiteral_3423/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
      goto LABEL_64;
    }
    itemDetailLabel = this->fields.itemDetailLabel;
    v53 = v52 | v32 & v46 ^ 1;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( ((v52 | v32 & (unsigned __int8)v46 ^ 1) & 1) != 0 )
      {
LABEL_61:
        v34 = &StringLiteral_3422/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
        goto LABEL_64;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( (v53 & 1) != 0 )
        goto LABEL_61;
    }
    v34 = &StringLiteral_3425/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    goto LABEL_64;
  }
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v32 )
    {
LABEL_31:
      v34 = &StringLiteral_3421/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
      goto LABEL_64;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v32 )
      goto LABEL_31;
  }
  v34 = &StringLiteral_3420/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
LABEL_64:
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)*v34, 0);
  if ( !itemDetailLabel )
    goto LABEL_70;
LABEL_65:
  UILabel__set_text(itemDetailLabel, (System_String_o *)Master_object, 0);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v32, isEnableOpen, v25 & 1, v54);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3418/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_70;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)Master_object, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3419/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_70;
  UILabel__set_text(decideBtnLabel, (System_String_o *)Master_object, 0);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v57);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v58 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0, 0);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardSquareOpenConfirmDialog__SetDecideButton(
        ClassBoardSquareOpenConfirmDialog_o *this,
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
    sub_1C6BC60(decideBtn, isEnable);
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


// local variable allocation has failed, the output may be wrong!
void ClassBoardSquareOpenConfirmDialog__SetUiPosition(
        ClassBoardSquareOpenConfirmDialog_o *this,
        bool isContainQp,
        bool isEnableOpen,
        bool isGrand,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0

  if ( (byte_4CB9F4D & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9F4D = 1;
  }
  if ( isGrand )
  {
    baseWindow = this->fields.baseWindow;
    if ( baseWindow )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           baseWindow,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
      if ( ((unsigned __int8)baseWindow & 1) == 0 )
        goto LABEL_10;
      if ( Component_object )
      {
        UIWidget__set_height((UIWidget_o *)Component_object, this->fields.windowHeightForGrand, 0);
LABEL_10:
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.titleLabel,
          this->fields.titleLabelPosYForGrand,
          0);
        GameObjectExtensions__SetLocalPositionY(this->fields.effectObj, this->fields.effectDetailPosYForGrand, 0);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.itemInfoLabel,
          this->fields.itemLabelPosYForGrand,
          0);
        GameObjectExtensions__SetLocalPositionY(this->fields.itemListObj, this->fields.itemGridPosYForGrand, 0);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.itemDetailLabel,
          this->fields.confirmTextPosYForGrand,
          0);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.decideBtn,
          this->fields.closeBtnPosYForGrand,
          0);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.cancelBtn,
          this->fields.closeBtnPosYForGrand,
          0);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.itemInfoListBtn,
          this->fields.itemInfoListBtnPosYForGrand,
          0);
        return;
      }
    }
LABEL_31:
    sub_1C6BC60(baseWindow, isContainQp);
  }
  if ( isContainQp && isEnableOpen )
  {
    baseWindow = this->fields.itemQpObj;
    if ( !baseWindow )
      goto LABEL_31;
    gameObject = UnityEngine_GameObject__get_gameObject(baseWindow, 0);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemQpObjPosAContainQp, 0);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
    if ( !baseWindow )
      goto LABEL_31;
    v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    GameObjectExtensions__SetLocalPosition(v12, this->fields.itemIconListGridPosContainQp, 0);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
    if ( !baseWindow )
      goto LABEL_31;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    x = this->fields.itemDetailLabelPosContainQp.fields.x;
    y = this->fields.itemDetailLabelPosContainQp.fields.y;
    z = this->fields.itemDetailLabelPosContainQp.fields.z;
LABEL_29:
    GameObjectExtensions__SetLocalPosition(v13, *(UnityEngine_Vector3_o *)&x, 0);
    return;
  }
  if ( isContainQp && !isEnableOpen )
  {
    baseWindow = this->fields.itemQpObj;
    if ( !baseWindow )
      goto LABEL_31;
    v17 = UnityEngine_GameObject__get_gameObject(baseWindow, 0);
    GameObjectExtensions__SetLocalPosition(v17, this->fields.itemQpObjPosContainQpDisable, 0);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
    if ( !baseWindow )
      goto LABEL_31;
    v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    GameObjectExtensions__SetLocalPosition(v18, this->fields.itemIconListGridPosContainQpDisable, 0);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
    if ( !baseWindow )
      goto LABEL_31;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    x = this->fields.itemDetailLabelPosContainQpDisable.fields.x;
    y = this->fields.itemDetailLabelPosContainQpDisable.fields.y;
    z = this->fields.itemDetailLabelPosContainQpDisable.fields.z;
    goto LABEL_29;
  }
  if ( !isContainQp && !isEnableOpen )
  {
    baseWindow = this->fields.itemQpObj;
    if ( !baseWindow )
      goto LABEL_31;
    v19 = UnityEngine_GameObject__get_gameObject(baseWindow, 0);
    GameObjectExtensions__SetLocalPosition(v19, this->fields.itemQpObjPosDisable, 0);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
    if ( !baseWindow )
      goto LABEL_31;
    v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    GameObjectExtensions__SetLocalPosition(v20, this->fields.itemIconListGridPosDisable, 0);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
    if ( !baseWindow )
      goto LABEL_31;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    x = this->fields.itemDetailLabelPosDisable.fields.x;
    y = this->fields.itemDetailLabelPosDisable.fields.y;
    z = this->fields.itemDetailLabelPosDisable.fields.z;
    goto LABEL_29;
  }
}


void ClassBoardSquareOpenConfirmDialog___OnClickItemInfoListWindow_b__42_0(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *ClassBoardSquareOpenConfirmDialog__get_closeBtnPath(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB9F53 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15637/*"Window/CancelBtn"*/);
    byte_4CB9F53 = 1;
  }
  return (System_String_o *)StringLiteral_15637/*"Window/CancelBtn"*/;
}


void ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0___ctor(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0___Open_b__0(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *this,
        IClassBoardItemModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *v4; // x20
  IClassBoardItemModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  IClassBoardItemModel_c *v10; // x8
  ItemMaster_o *itemMaster; // x20
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4CB9F54 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)sub_1C6BA08(&IClassBoardItemModel_TypeInfo);
    byte_4CB9F54 = 1;
  }
  if ( !x )
    goto LABEL_20;
  klass = x->klass;
  v6 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)p_offset - 1) != IClassBoardItemModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset + 2];
  }
  else
  {
LABEL_8:
    v8 = sub_1C41D90(x, IClassBoardItemModel_TypeInfo, 2);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v8)(x, *(_QWORD *)(v8 + 8)) & 1) != 0 )
    return 0;
  v10 = x->klass;
  itemMaster = v4->fields.itemMaster;
  v12 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)v13 - 1) != IClassBoardItemModel_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_16;
    }
    v14 = (__int64)&v10->vtable[*v13];
  }
  else
  {
LABEL_16:
    v14 = sub_1C41D90(x, IClassBoardItemModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                        x,
                                                                        *(_QWORD *)(v14 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_1C6BC60(this, x);
  return ItemMaster__isQP(itemMaster, (int32_t)this, 0);
}


bool ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0___Open_b__1(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *this,
        IClassBoardItemModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *v4; // x20
  IClassBoardItemModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  IClassBoardItemModel_c *v10; // x8
  ItemMaster_o *itemMaster; // x20
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4CB9F55 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)sub_1C6BA08(&IClassBoardItemModel_TypeInfo);
    byte_4CB9F55 = 1;
  }
  if ( !x )
    goto LABEL_21;
  klass = x->klass;
  v6 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)p_offset - 1) != IClassBoardItemModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset + 2];
  }
  else
  {
LABEL_8:
    v8 = sub_1C41D90(x, IClassBoardItemModel_TypeInfo, 2);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v8)(x, *(_QWORD *)(v8 + 8)) & 1) == 0 )
  {
    v10 = x->klass;
    itemMaster = v4->fields.itemMaster;
    v12 = *(unsigned __int16 *)&x->klass->_2.rank;
    if ( *(_WORD *)&x->klass->_2.rank )
    {
      v13 = &v10->_1.interfaceOffsets->offset;
      while ( *((IClassBoardItemModel_c **)v13 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v10->vtable[*v13];
    }
    else
    {
LABEL_16:
      v14 = sub_1C41D90(x, IClassBoardItemModel_TypeInfo, 0);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                          x,
                                                                          *(_QWORD *)(v14 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0);
LABEL_21:
    sub_1C6BC60(this, x);
  }
  return 0;
}