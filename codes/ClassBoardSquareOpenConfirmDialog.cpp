void __fastcall ClassBoardSquareOpenConfirmDialog___ctor(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.windowHeightForGrand = 570;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_BEA380;
  this->fields.itemInfoListBtnPosYForGrand = 60.0;
  *(_QWORD *)&this->fields.confirmTextPosYForGrand = 0xC34C0000C30C0000LL;
  *(_QWORD *)&this->fields.onClickDecideSeKind = 0x200000008LL;
  this->fields.onClickCancelSeKind = 1;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__Close(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B48372 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v3);
    byte_4B48372 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndClose(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B48373 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48373 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
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

  ConstantMaster__IsFLAG20250516(0LL);
  this->fields.isDecideButtonEnable = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v4);
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4B48371 & 1) == 0 )
  {
    sub_1BDB878(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__, method);
    byte_4B48371 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)cancelFunc, v6, v7);
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
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0

  if ( (byte_4B48374 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v3);
    sub_1BDB878(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__, v4);
    byte_4B48374 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v5 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BDB890(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickDecideSeKind, 0, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v8, v9);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v10, 0LL);
    }
  }
  else
  {
    v11 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1BDB890(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, this->fields.onClickDecideDisableSeKind, 0, 0LL);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B48375 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__42_0__, v3);
    byte_4B48375 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__42_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v4, 0LL);
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
  __int64 v30; // x1
  __int64 v31; // x1
  UserClassStatisticsMaster_o *Master_object; // x0
  __int64 v33; // x1
  char v34; // w2
  const MethodInfo *v35; // x3
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  char v37; // w2
  const MethodInfo *v38; // x3
  ClassStatisticsInfo_array *v39; // x23
  IClassBoardSquareModel_c *klass; // x8
  __int64 v41; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v43; // x0
  char v44; // w0
  UILabel_o *titleLabel; // x24
  char v46; // w21
  System_String_o **v47; // x8
  IClassBoardSquareModel_c *v48; // x8
  __int64 v49; // x9
  IClassBoardSquareModel_c **v50; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v52; // x0
  _BOOL4 v53; // w23
  UILabel_o *itemDetailLabel; // x22
  __int64 *v55; // x8
  __int64 v56; // x24
  char v57; // w2
  const MethodInfo *v58; // x3
  IClassBoardSquareModel_c *v59; // x8
  __int64 v60; // x9
  IClassBoardSquareModel_c **v61; // x10
  __int64 v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x25
  System_Func_object__bool__o *v64; // x26
  _BOOL4 v65; // w0
  IClassBoardSquareModel_c *v66; // x8
  int v67; // w25
  __int64 v68; // x9
  IClassBoardSquareModel_c **v69; // x10
  __int64 v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x22
  System_Func_object__bool__o *v72; // x26
  _BOOL4 v73; // w0
  char v74; // w24
  const MethodInfo *v75; // x4
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v78; // x2
  System_Action_o *v79; // x20

  if ( (byte_4B4836F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, square);
    sub_1BDB878(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_UserClassStatisticsMaster___, v13);
    sub_1BDB878(&DataManager_TypeInfo, v14);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___, v15);
    sub_1BDB878(&System_Func_IClassBoardItemModel__bool__TypeInfo, v16);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v17);
    sub_1BDB878(&LocalizationManager_TypeInfo, v18);
    sub_1BDB878(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__0__, v19);
    sub_1BDB878(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__1__, v20);
    sub_1BDB878(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_TypeInfo, v21);
    sub_1BDB878(&StringLiteral_3464/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v22);
    sub_1BDB878(&StringLiteral_3461/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, v23);
    sub_1BDB878(&StringLiteral_3466/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/, v24);
    sub_1BDB878(&StringLiteral_3436/*"CLASS_BOARD_GRAND_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, v25);
    sub_1BDB878(&StringLiteral_3468/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, v26);
    sub_1BDB878(&StringLiteral_3460/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, v27);
    sub_1BDB878(&StringLiteral_3465/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/, v28);
    sub_1BDB878(&StringLiteral_3467/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/, v29);
    sub_1BDB878(&StringLiteral_3462/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v30);
    sub_1BDB878(&StringLiteral_3463/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/, v31);
    byte_4B4836F = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isEnableOpen,
    (const MethodInfo *)decideFunc);
  if ( !square )
    goto LABEL_70;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  this->fields.decideFunc = decideFunc;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.decideFunc, (int32_t)decideFunc, v34, v35);
  this->fields.cancelFunc = cancelFunc;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.cancelFunc, (int32_t)cancelFunc, v37, v38);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserClassStatisticsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
  {
    Master_object = (UserClassStatisticsMaster_o *)UserClassStatisticsMaster__GetClassStatisticsInfos(
                                                     Master_object,
                                                     0LL);
    v39 = (ClassStatisticsInfo_array *)Master_object;
    if ( !SquareModel_k__BackingField )
      goto LABEL_70;
  }
  else
  {
    v39 = 0LL;
    if ( !SquareModel_k__BackingField )
      goto LABEL_70;
  }
  klass = SquareModel_k__BackingField->klass;
  v41 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v41;
      p_offset += 2;
      if ( !v41 )
        goto LABEL_14;
    }
    v43 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_14:
    v43 = sub_1C2C00C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  v44 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v43)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v43 + 8));
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  v46 = v44;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v47 = (System_String_o **)((v46 & 1) != 0 ? &StringLiteral_3436/*"CLASS_BOARD_GRAND_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/ : &StringLiteral_3468/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get(*v47, 0LL);
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    SquareModel_k__BackingField,
    0.0,
    0.0,
    v39,
    0LL);
  v48 = SquareModel_k__BackingField->klass;
  v49 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v50 = (IClassBoardSquareModel_c **)&v48->_1.interfaceOffsets->offset;
    while ( *(v50 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v49;
      v50 += 2;
      if ( !v49 )
        goto LABEL_26;
    }
    p_method = (__int64)&v48->vtable[*(_DWORD *)v50 + 6].method;
  }
  else
  {
LABEL_26:
    p_method = sub_1C2C00C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v52 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  v53 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v52, 0LL);
  if ( !isEnableOpen )
  {
    v56 = sub_1BDBAC4(ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v56, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserClassStatisticsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !v56 )
      goto LABEL_70;
    *(_QWORD *)(v56 + 16) = Master_object;
    sub_1BDB81C((CGThumbnailListItem_o *)(v56 + 16), (int32_t)Master_object, v57, v58);
    v59 = SquareModel_k__BackingField->klass;
    v60 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
    {
      v61 = (IClassBoardSquareModel_c **)&v59->_1.interfaceOffsets->offset;
      while ( *(v61 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v60;
        v61 += 2;
        if ( !v60 )
          goto LABEL_39;
      }
      v62 = (__int64)&v59->vtable[*(_DWORD *)v61 + 6].method;
    }
    else
    {
LABEL_39:
      v62 = sub_1C2C00C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
    }
    v63 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v62)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v62 + 8));
    v64 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_IClassBoardItemModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v64,
      (Il2CppObject *)v56,
      Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__0__,
      0LL);
    v65 = System_Linq_Enumerable__Any_object__50599108(
            v63,
            (System_Func_TSource__bool__o *)v64,
            (const MethodInfo_30414C4 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    v66 = SquareModel_k__BackingField->klass;
    v67 = v65;
    v68 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
    {
      v69 = (IClassBoardSquareModel_c **)&v66->_1.interfaceOffsets->offset;
      while ( *(v69 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v68;
        v69 += 2;
        if ( !v68 )
          goto LABEL_47;
      }
      v70 = (__int64)&v66->vtable[*(_DWORD *)v69 + 6].method;
    }
    else
    {
LABEL_47:
      v70 = sub_1C2C00C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
    }
    v71 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v70)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v70 + 8));
    v72 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_IClassBoardItemModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v72,
      (Il2CppObject *)v56,
      Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__1__,
      0LL);
    v73 = System_Linq_Enumerable__Any_object__50599108(
            v71,
            (System_Func_TSource__bool__o *)v72,
            (const MethodInfo_30414C4 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    if ( (v53 & v67 & 1) != 0 && v73 )
    {
      itemDetailLabel = this->fields.itemDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3466/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/,
                                                       0LL);
      if ( itemDetailLabel )
        goto LABEL_65;
LABEL_70:
      sub_1BDBAD4(Master_object, v33);
    }
    if ( (v53 & ~v67 & v73 & 1) != 0 )
    {
      itemDetailLabel = this->fields.itemDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v55 = &StringLiteral_3465/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
      goto LABEL_64;
    }
    itemDetailLabel = this->fields.itemDetailLabel;
    v74 = v73 | v53 & v67 ^ 1;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( ((v73 | v53 & (unsigned __int8)v67 ^ 1) & 1) != 0 )
      {
LABEL_61:
        v55 = &StringLiteral_3464/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
        goto LABEL_64;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( (v74 & 1) != 0 )
        goto LABEL_61;
    }
    v55 = &StringLiteral_3467/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    goto LABEL_64;
  }
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v53 )
    {
LABEL_31:
      v55 = &StringLiteral_3463/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
      goto LABEL_64;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v53 )
      goto LABEL_31;
  }
  v55 = &StringLiteral_3462/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
LABEL_64:
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)*v55, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_70;
LABEL_65:
  UILabel__set_text(itemDetailLabel, (System_String_o *)Master_object, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v53, isEnableOpen, v46 & 1, v75);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3460/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_70;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)Master_object, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3461/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_70;
  UILabel__set_text(decideBtnLabel, (System_String_o *)Master_object, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v78);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v79 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
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
    sub_1BDBAD4(decideBtn, isEnable);
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
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_GameObject_o *v21; // x0

  if ( (byte_4B48370 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___, isContainQp);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    byte_4B48370 = 1;
  }
  if ( isGrand )
  {
    baseWindow = this->fields.baseWindow;
    if ( baseWindow )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           baseWindow,
                           (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0LL,
                                                 0LL);
      if ( ((unsigned __int8)baseWindow & 1) == 0 )
        goto LABEL_10;
      if ( Component_object )
      {
        UIWidget__set_height((UIWidget_o *)Component_object, this->fields.windowHeightForGrand, 0LL);
LABEL_10:
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.titleLabel,
          this->fields.titleLabelPosYForGrand,
          0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.effectObj, this->fields.effectDetailPosYForGrand, 0LL);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.itemInfoLabel,
          this->fields.itemLabelPosYForGrand,
          0LL);
        GameObjectExtensions__SetLocalPositionY(this->fields.itemListObj, this->fields.itemGridPosYForGrand, 0LL);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.itemDetailLabel,
          this->fields.confirmTextPosYForGrand,
          0LL);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.decideBtn,
          this->fields.closeBtnPosYForGrand,
          0LL);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.cancelBtn,
          this->fields.closeBtnPosYForGrand,
          0LL);
        ComponentHelper__SetLocalPositionY(
          (UnityEngine_Component_o *)this->fields.itemInfoListBtn,
          this->fields.itemInfoListBtnPosYForGrand,
          0LL);
        return;
      }
    }
LABEL_31:
    sub_1BDBAD4(baseWindow, isContainQp);
  }
  if ( isContainQp && isEnableOpen )
  {
    baseWindow = this->fields.itemQpObj;
    if ( !baseWindow )
      goto LABEL_31;
    gameObject = UnityEngine_GameObject__get_gameObject(baseWindow, 0LL);
    GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemQpObjPosAContainQp, 0LL);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
    if ( !baseWindow )
      goto LABEL_31;
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    GameObjectExtensions__SetLocalPosition(v13, this->fields.itemIconListGridPosContainQp, 0LL);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
    if ( !baseWindow )
      goto LABEL_31;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    x = this->fields.itemDetailLabelPosContainQp.fields.x;
    y = this->fields.itemDetailLabelPosContainQp.fields.y;
    z = this->fields.itemDetailLabelPosContainQp.fields.z;
LABEL_29:
    GameObjectExtensions__SetLocalPosition(v14, *(UnityEngine_Vector3_o *)&x, 0LL);
    return;
  }
  if ( isContainQp && !isEnableOpen )
  {
    baseWindow = this->fields.itemQpObj;
    if ( !baseWindow )
      goto LABEL_31;
    v18 = UnityEngine_GameObject__get_gameObject(baseWindow, 0LL);
    GameObjectExtensions__SetLocalPosition(v18, this->fields.itemQpObjPosContainQpDisable, 0LL);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
    if ( !baseWindow )
      goto LABEL_31;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    GameObjectExtensions__SetLocalPosition(v19, this->fields.itemIconListGridPosContainQpDisable, 0LL);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
    if ( !baseWindow )
      goto LABEL_31;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
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
    v20 = UnityEngine_GameObject__get_gameObject(baseWindow, 0LL);
    GameObjectExtensions__SetLocalPosition(v20, this->fields.itemQpObjPosDisable, 0LL);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemIconListGrid;
    if ( !baseWindow )
      goto LABEL_31;
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    GameObjectExtensions__SetLocalPosition(v21, this->fields.itemIconListGridPosDisable, 0LL);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
    if ( !baseWindow )
      goto LABEL_31;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0LL);
    x = this->fields.itemDetailLabelPosDisable.fields.x;
    y = this->fields.itemDetailLabelPosDisable.fields.y;
    z = this->fields.itemDetailLabelPosDisable.fields.z;
    goto LABEL_29;
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog___OnClickItemInfoListWindow_b__42_0(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall ClassBoardSquareOpenConfirmDialog__get_closeBtnPath(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B48376 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15615/*"Window/CancelBtn"*/, method);
    byte_4B48376 = 1;
  }
  return (System_String_o *)StringLiteral_15615/*"Window/CancelBtn"*/;
}


void __fastcall ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0___ctor(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0___Open_b__0(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *this,
        IClassBoardItemModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *v4; // x20
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
  if ( (byte_4B48377 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)sub_1BDB878(&IClassBoardItemModel_TypeInfo, x);
    byte_4B48377 = 1;
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
    p_method = sub_1C2C00C(x, IClassBoardItemModel_TypeInfo, 2LL);
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
    v14 = sub_1C2C00C(x, IClassBoardItemModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                        x,
                                                                        *(_QWORD *)(v14 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_1BDBAD4(this, x);
  return ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
}


bool __fastcall ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0___Open_b__1(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *this,
        IClassBoardItemModel_o *x,
        const MethodInfo *method)
{
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *v4; // x20
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
  if ( (byte_4B48378 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)sub_1BDB878(&IClassBoardItemModel_TypeInfo, x);
    byte_4B48378 = 1;
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
    p_method = sub_1C2C00C(x, IClassBoardItemModel_TypeInfo, 2LL);
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
      v14 = sub_1C2C00C(x, IClassBoardItemModel_TypeInfo, 0LL);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                          x,
                                                                          *(_QWORD *)(v14 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
LABEL_21:
    sub_1BDBAD4(this, x);
  }
  return 0;
}