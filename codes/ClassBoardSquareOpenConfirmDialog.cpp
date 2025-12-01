void ClassBoardSquareOpenConfirmDialog___ctor(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.windowHeightForGrand = 570;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_CEE680;
  this->fields.itemInfoListBtnPosYForGrand = 60.0;
  *(_QWORD *)&this->fields.confirmTextPosYForGrand = 0xC34C0000C30C0000LL;
  *(_QWORD *)&this->fields.onClickDecideSeKind = 0x200000008LL;
  this->fields.onClickCancelSeKind = 1;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardSquareOpenConfirmDialog__Close(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CCB0A2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    byte_4CCB0A2 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0);
}


void ClassBoardSquareOpenConfirmDialog__EndClose(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CCB0A3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB0A3 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
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
    sub_1C71608(0, v4);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_4CCB0A1 & 1) == 0 )
  {
    sub_1C713B0(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    byte_4CCB0A1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0, 0);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeFunc, (int32_t)cancelFunc, v6, v7, v8, v9, v10, v11);
    ClassBoardSquareOpenConfirmDialog__Close(this, v12);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_4CCB0A4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    sub_1C713B0(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    byte_4CCB0A4 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_1C713C8(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v6, v7, v8, v9, v10, v11);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
      v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v12, 0);
    }
  }
  else
  {
    v13 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_1C713C8(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v14 = (System_Reflection_MethodBase_o *)sub_1C71394(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.onClickDecideDisableSeKind, 0, 0);
  }
}


void ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CCB0A5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__42_0__);
    byte_4CCB0A5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  UserClassStatisticsMaster_o *Master_object; // x0
  __int64 v14; // x1
  char v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  char v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  ClassStatisticsInfo_array *v28; // x23
  IClassBoardSquareModel_c *klass; // x8
  __int64 v30; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v32; // x0
  char v33; // w0
  UILabel_o *titleLabel; // x24
  char v35; // w21
  System_String_o **v36; // x8
  IClassBoardSquareModel_c *v37; // x8
  __int64 v38; // x9
  IClassBoardSquareModel_c **v39; // x10
  __int64 v40; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v41; // x0
  _BOOL4 v42; // w23
  UILabel_o *itemDetailLabel; // x22
  __int64 *v44; // x8
  __int64 v45; // x24
  char v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  IClassBoardSquareModel_c *v52; // x8
  __int64 v53; // x9
  IClassBoardSquareModel_c **v54; // x10
  __int64 v55; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x25
  System_Func_object__bool__o *v57; // x26
  _BOOL4 v58; // w0
  IClassBoardSquareModel_c *v59; // x8
  int v60; // w25
  __int64 v61; // x9
  IClassBoardSquareModel_c **v62; // x10
  __int64 v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x22
  System_Func_object__bool__o *v65; // x26
  _BOOL4 v66; // w0
  char v67; // w24
  const MethodInfo *v68; // x4
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v71; // x2
  System_Action_o *v72; // x20

  if ( (byte_4CCB09F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__);
    sub_1C713B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    sub_1C713B0(&System_Func_IClassBoardItemModel__bool__TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__0__);
    sub_1C713B0(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__1__);
    sub_1C713B0(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_TypeInfo);
    sub_1C713B0(&StringLiteral_3425/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    sub_1C713B0(&StringLiteral_3422/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_1C713B0(&StringLiteral_3427/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/);
    sub_1C713B0(&StringLiteral_3393/*"CLASS_BOARD_GRAND_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_3429/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_1C713B0(&StringLiteral_3421/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C713B0(&StringLiteral_3426/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/);
    sub_1C713B0(&StringLiteral_3428/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/);
    sub_1C713B0(&StringLiteral_3423/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_1C713B0(&StringLiteral_3424/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/);
    byte_4CCB09F = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isEnableOpen,
    (int32_t)decideFunc,
    (System_String_o *)cancelFunc,
    (int32_t)method,
    v6,
    v7);
  if ( !square )
    goto LABEL_70;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  this->fields.decideFunc = decideFunc;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.decideFunc,
    (int32_t)decideFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.cancelFunc = cancelFunc;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.cancelFunc,
    (int32_t)cancelFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserClassStatisticsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
  {
    Master_object = (UserClassStatisticsMaster_o *)UserClassStatisticsMaster__GetClassStatisticsInfos(Master_object, 0);
    v28 = (ClassStatisticsInfo_array *)Master_object;
    if ( !SquareModel_k__BackingField )
      goto LABEL_70;
  }
  else
  {
    v28 = 0;
    if ( !SquareModel_k__BackingField )
      goto LABEL_70;
  }
  klass = SquareModel_k__BackingField->klass;
  v30 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      p_offset += 2;
      if ( !v30 )
        goto LABEL_14;
    }
    v32 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_14:
    v32 = sub_1C47738(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  v33 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v32)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v32 + 8));
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  v35 = v33;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = (System_String_o **)((v35 & 1) != 0 ? &StringLiteral_3393/*"CLASS_BOARD_GRAND_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/ : &StringLiteral_3429/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get(*v36, 0);
  if ( !titleLabel )
    goto LABEL_70;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, v28, 0);
  v37 = SquareModel_k__BackingField->klass;
  v38 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v39 = (IClassBoardSquareModel_c **)&v37->_1.interfaceOffsets->offset;
    while ( *(v39 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v38;
      v39 += 2;
      if ( !v38 )
        goto LABEL_26;
    }
    v40 = (__int64)&v37->vtable[*(_DWORD *)v39 + 6];
  }
  else
  {
LABEL_26:
    v40 = sub_1C47738(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v41 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v40)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(v40 + 8));
  v42 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v41, 0);
  if ( !isEnableOpen )
  {
    v45 = sub_1C715FC(ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v45, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (UserClassStatisticsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ItemMaster___);
    if ( !v45 )
      goto LABEL_70;
    *(_QWORD *)(v45 + 16) = Master_object;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v45 + 16), (int32_t)Master_object, v46, v47, v48, v49, v50, v51);
    v52 = SquareModel_k__BackingField->klass;
    v53 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
    {
      v54 = (IClassBoardSquareModel_c **)&v52->_1.interfaceOffsets->offset;
      while ( *(v54 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v53;
        v54 += 2;
        if ( !v53 )
          goto LABEL_39;
      }
      v55 = (__int64)&v52->vtable[*(_DWORD *)v54 + 6];
    }
    else
    {
LABEL_39:
      v55 = sub_1C47738(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
    }
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v55)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v55 + 8));
    v57 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_IClassBoardItemModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v57,
      (Il2CppObject *)v45,
      Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__0__,
      0);
    v58 = System_Linq_Enumerable__Any_object__51743576(
            v56,
            (System_Func_TSource__bool__o *)v57,
            (const MethodInfo_3158B58 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    v59 = SquareModel_k__BackingField->klass;
    v60 = v58;
    v61 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
    if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
    {
      v62 = (IClassBoardSquareModel_c **)&v59->_1.interfaceOffsets->offset;
      while ( *(v62 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v61;
        v62 += 2;
        if ( !v61 )
          goto LABEL_47;
      }
      v63 = (__int64)&v59->vtable[*(_DWORD *)v62 + 6];
    }
    else
    {
LABEL_47:
      v63 = sub_1C47738(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
    }
    v64 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v63)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v63 + 8));
    v65 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_IClassBoardItemModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v65,
      (Il2CppObject *)v45,
      Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__1__,
      0);
    v66 = System_Linq_Enumerable__Any_object__51743576(
            v64,
            (System_Func_TSource__bool__o *)v65,
            (const MethodInfo_3158B58 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    if ( (v42 & v60 & 1) != 0 && v66 )
    {
      itemDetailLabel = this->fields.itemDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3427/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/, 0);
      if ( itemDetailLabel )
        goto LABEL_65;
LABEL_70:
      sub_1C71608(Master_object, v14);
    }
    if ( (v42 & ~v60 & v66 & 1) != 0 )
    {
      itemDetailLabel = this->fields.itemDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v44 = &StringLiteral_3426/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
      goto LABEL_64;
    }
    itemDetailLabel = this->fields.itemDetailLabel;
    v67 = v66 | v42 & v60 ^ 1;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( ((v66 | v42 & (unsigned __int8)v60 ^ 1) & 1) != 0 )
      {
LABEL_61:
        v44 = &StringLiteral_3425/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
        goto LABEL_64;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( (v67 & 1) != 0 )
        goto LABEL_61;
    }
    v44 = &StringLiteral_3428/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    goto LABEL_64;
  }
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( v42 )
    {
LABEL_31:
      v44 = &StringLiteral_3424/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
      goto LABEL_64;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( v42 )
      goto LABEL_31;
  }
  v44 = &StringLiteral_3423/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
LABEL_64:
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)*v44, 0);
  if ( !itemDetailLabel )
    goto LABEL_70;
LABEL_65:
  UILabel__set_text(itemDetailLabel, (System_String_o *)Master_object, 0);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v42, isEnableOpen, v35 & 1, v68);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3421/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_70;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)Master_object, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3422/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_70;
  UILabel__set_text(decideBtnLabel, (System_String_o *)Master_object, 0);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v71);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v72 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v72, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v72, 0, 0, 0);
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
    sub_1C71608(decideBtn, isEnable);
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

  if ( (byte_4CCB0A0 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB0A0 = 1;
  }
  if ( isGrand )
  {
    baseWindow = this->fields.baseWindow;
    if ( baseWindow )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           baseWindow,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
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
    sub_1C71608(baseWindow, isContainQp);
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
  if ( (byte_4CCB0A6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15644/*"Window/CancelBtn"*/);
    byte_4CCB0A6 = 1;
  }
  return (System_String_o *)StringLiteral_15644/*"Window/CancelBtn"*/;
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
  if ( (byte_4CCB0A7 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)sub_1C713B0(&IClassBoardItemModel_TypeInfo);
    byte_4CCB0A7 = 1;
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
    v8 = sub_1C47738(x, IClassBoardItemModel_TypeInfo, 2);
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
    v14 = sub_1C47738(x, IClassBoardItemModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                        x,
                                                                        *(_QWORD *)(v14 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_1C71608(this, x);
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
  if ( (byte_4CCB0A8 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)sub_1C713B0(&IClassBoardItemModel_TypeInfo);
    byte_4CCB0A8 = 1;
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
    v8 = sub_1C47738(x, IClassBoardItemModel_TypeInfo, 2);
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
      v14 = sub_1C47738(x, IClassBoardItemModel_TypeInfo, 0);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                          x,
                                                                          *(_QWORD *)(v14 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0);
LABEL_21:
    sub_1C71608(this, x);
  }
  return 0;
}