void ClassBoardSquareOpenConfirmDialog___ctor(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.windowHeightForGrand = 570;
  *(_OWORD *)&this->fields.titleLabelPosYForGrand = xmmword_E9D420;
  this->fields.itemInfoListBtnPosYForGrand = 60.0;
  *(_QWORD *)&this->fields.confirmTextPosYForGrand = 0xC34C0000C30C0000LL;
  this->fields.onClickDecideSeKind = 8;
  *(_QWORD *)&this->fields.onClickDecideDisableSeKind = 0x100000002LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardSquareOpenConfirmDialog__Close(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_5974760 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    byte_5974760 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0);
}


void ClassBoardSquareOpenConfirmDialog__EndClose(ClassBoardSquareOpenConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5974761 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974761 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
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
    sub_2213CDC(0, v4);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  const MethodInfo *v12; // x1

  if ( (byte_597475F & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    byte_597475F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0, 0);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
      (int32_t)cancelFunc,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Action_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_5974762 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    sub_2213A60(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    byte_5974762 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v3 = (_QWORD *)sub_2213A78(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
        (int32_t)decideFunc,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v12, 0);
    }
  }
  else
  {
    v13 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v13 = (_QWORD *)sub_2213A78(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v13, v13[4]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.onClickDecideDisableSeKind, 0, 0);
  }
}


void ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_5974763 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__42_0__);
    byte_5974763 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__42_0__,
      0);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0);
    this->fields.isButtonEnable = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardSquareOpenConfirmDialog__Open(
        ClassBoardSquareOpenConfirmDialog_o *this,
        ClassBoardSquare_o *square,
        bool isEnableOpen,
        System_Action_o *decideFunc,
        System_Action_o *cancelFunc,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  UserClassStatisticsMaster_o *Master_object; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x23
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  ClassStatisticsInfo_array *v29; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v31; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x1
  char v35; // w21
  LocalizationManager_c *v36; // x0
  UILabel_o *titleLabel; // x24
  System_String_o **v38; // x8
  IClassBoardSquareModel_c *v39; // x8
  __int64 v40; // x9
  IClassBoardSquareModel_c **v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v43; // x0
  __int64 v44; // x1
  _BOOL4 v45; // w22
  UILabel_o *itemDetailLabel; // x23
  int v47; // w8
  __int64 *v48; // x8
  __int64 v49; // x24
  __int64 v50; // x1
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  IClassBoardSquareModel_c *v57; // x8
  __int64 v58; // x9
  IClassBoardSquareModel_c **v59; // x10
  __int64 v60; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x25
  System_Func_object__bool__o *v62; // x26
  _BOOL4 v63; // w0
  IClassBoardSquareModel_c *v64; // x8
  _BOOL4 v65; // w25
  __int64 v66; // x9
  IClassBoardSquareModel_c **v67; // x10
  __int64 v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x23
  System_Func_object__bool__o *v70; // x26
  _BOOL4 v71; // w0
  __int64 v72; // x1
  int v73; // w8
  const MethodInfo *v74; // x4
  __int64 v75; // x1
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v78; // x2
  System_Action_o *v79; // x20

  if ( (byte_597475D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__);
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    sub_2213A60(&System_Func_IClassBoardItemModel__bool__TypeInfo);
    sub_2213A60(&IClassBoardSquareModel_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__0__);
    sub_2213A60(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__1__);
    sub_2213A60(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_TypeInfo);
    sub_2213A60(&StringLiteral_3569/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    sub_2213A60(&StringLiteral_3566/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_2213A60(&StringLiteral_3571/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/);
    sub_2213A60(&StringLiteral_3537/*"CLASS_BOARD_GRAND_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3573/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_3565/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_3570/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/);
    sub_2213A60(&StringLiteral_3572/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/);
    sub_2213A60(&StringLiteral_3567/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_2213A60(&StringLiteral_3568/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/);
    byte_597475D = 1;
  }
  this->fields.classBoardSquare = square;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (System_String_o *)isEnableOpen,
    (System_String_o *)decideFunc,
    (int32_t)cancelFunc,
    (int32_t)method,
    v6,
    v7);
  if ( !square )
    goto LABEL_73;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  this->fields.decideFunc = decideFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.decideFunc,
    (int32_t)decideFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.cancelFunc = cancelFunc;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cancelFunc,
    (int32_t)cancelFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  Master_object = (UserClassStatisticsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
  {
    Master_object = (UserClassStatisticsMaster_o *)UserClassStatisticsMaster__GetClassStatisticsInfos(Master_object, 0);
    v29 = (ClassStatisticsInfo_array *)Master_object;
    if ( !SquareModel_k__BackingField )
      goto LABEL_73;
  }
  else
  {
    v29 = 0;
    if ( !SquareModel_k__BackingField )
      goto LABEL_73;
  }
  klass = SquareModel_k__BackingField->klass;
  v31 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v31;
      p_offset += 2;
      if ( !v31 )
        goto LABEL_14;
    }
    v33 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_14:
    v33 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  v35 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v33)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v33 + 8));
  v36 = LocalizationManager_TypeInfo;
  titleLabel = this->fields.titleLabel;
  this->fields.isDecideButtonEnable = isEnableOpen;
  if ( !*(&v36->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v36, v34);
  v38 = (System_String_o **)((v35 & 1) != 0 ? &StringLiteral_3537/*"CLASS_BOARD_GRAND_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/ : &StringLiteral_3573/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get(*v38, 0);
  if ( !titleLabel )
    goto LABEL_73;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, v29, 0);
  v39 = SquareModel_k__BackingField->klass;
  v40 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v41 = (IClassBoardSquareModel_c **)&v39->_1.interfaceOffsets->offset;
    while ( *(v41 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v40;
      v41 += 2;
      if ( !v40 )
        goto LABEL_26;
    }
    v42 = (__int64)&v39->vtable[*(_DWORD *)v41 + 6];
  }
  else
  {
LABEL_26:
    v42 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v43 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v42)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(v42 + 8));
  v45 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v43, 0);
  if ( isEnableOpen )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    v47 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v45 )
    {
      if ( !v47 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
      v48 = &StringLiteral_3568/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
    }
    else
    {
      if ( !v47 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
      v48 = &StringLiteral_3567/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
    }
    goto LABEL_67;
  }
  v49 = sub_2213CCC(ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v49, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v50);
  Master_object = (UserClassStatisticsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v49 )
LABEL_73:
    sub_2213CDC(Master_object, v14);
  *(_QWORD *)(v49 + 16) = Master_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 16), (int32_t)Master_object, v51, v52, v53, v54, v55, v56);
  v57 = SquareModel_k__BackingField->klass;
  v58 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v59 = (IClassBoardSquareModel_c **)&v57->_1.interfaceOffsets->offset;
    while ( *(v59 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v58;
      v59 += 2;
      if ( !v58 )
        goto LABEL_40;
    }
    v60 = (__int64)&v57->vtable[*(_DWORD *)v59 + 6];
  }
  else
  {
LABEL_40:
    v60 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v60)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v60 + 8));
  v62 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v62,
    (Il2CppObject *)v49,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__0__,
    0);
  v63 = System_Linq_Enumerable__Any_object__59145568(
          v61,
          (System_Func_TSource__bool__o *)v62,
          (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  v64 = SquareModel_k__BackingField->klass;
  v65 = v63;
  v66 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v67 = (IClassBoardSquareModel_c **)&v64->_1.interfaceOffsets->offset;
    while ( *(v67 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v66;
      v67 += 2;
      if ( !v66 )
        goto LABEL_49;
    }
    v68 = (__int64)&v64->vtable[*(_DWORD *)v67 + 6];
  }
  else
  {
LABEL_49:
    v68 = sub_224BC3C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v68)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v68 + 8));
  v70 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v70,
    (Il2CppObject *)v49,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0__Open_b__1__,
    0);
  v71 = System_Linq_Enumerable__Any_object__59145568(
          v69,
          (System_Func_TSource__bool__o *)v70,
          (const MethodInfo_3867D60 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  if ( v45 && v65 && v71 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    v48 = &StringLiteral_3571/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/;
  }
  else if ( v65 || !v45 || !v71 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    v73 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( v71 || !v45 || !v65 )
    {
      if ( !v73 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
      v48 = &StringLiteral_3569/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
    }
    else
    {
      if ( !v73 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
      v48 = &StringLiteral_3572/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    }
  }
  else
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    v48 = &StringLiteral_3570/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
  }
LABEL_67:
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)*v48, 0);
  if ( !itemDetailLabel )
    goto LABEL_73;
  UILabel__set_text(itemDetailLabel, (System_String_o *)Master_object, 0);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v45, isEnableOpen, v35 & 1, v74);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v75);
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3565/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0);
  if ( !cancelBtnLabel )
    goto LABEL_73;
  UILabel__set_text(cancelBtnLabel, (System_String_o *)Master_object, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_object = (UserClassStatisticsMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3566/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_73;
  UILabel__set_text(decideBtnLabel, (System_String_o *)Master_object, 0);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v78);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v79 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0, 0);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardSquareOpenConfirmDialog__SetDecideButton(
        ClassBoardSquareOpenConfirmDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideBtn; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtn;
  if ( !isEnable )
  {
    if ( decideBtn )
    {
      UnityEngine_Behaviour__set_enabled(decideBtn, 0, 0);
      decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
      if ( decideBtn )
      {
        v7.fields.r = 0.5;
        v7.fields.g = 0.5;
        v7.fields.b = 0.5;
        goto LABEL_8;
      }
    }
LABEL_9:
    sub_2213CDC(decideBtn, isEnable);
  }
  if ( !decideBtn )
    goto LABEL_9;
  UnityEngine_Behaviour__set_enabled(decideBtn, 1, 0);
  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtnSprite;
  if ( !decideBtn )
    goto LABEL_9;
  v7.fields.r = 1.0;
  v7.fields.g = 1.0;
  v7.fields.b = 1.0;
LABEL_8:
  v7.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)decideBtn, v7, 0);
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
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Vector3_o itemDetailLabelPosContainQp; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597475E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597475E = 1;
  }
  if ( isGrand )
  {
    baseWindow = this->fields.baseWindow;
    if ( baseWindow )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           baseWindow,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
    sub_2213CDC(baseWindow, isContainQp);
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
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    GameObjectExtensions__SetLocalPosition(v13, this->fields.itemIconListGridPosContainQp, 0);
    baseWindow = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
    if ( !baseWindow )
      goto LABEL_31;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    itemDetailLabelPosContainQp = this->fields.itemDetailLabelPosContainQp;
LABEL_29:
    GameObjectExtensions__SetLocalPosition(v14, itemDetailLabelPosContainQp, 0);
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
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    itemDetailLabelPosContainQp = this->fields.itemDetailLabelPosContainQpDisable;
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
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseWindow, 0);
    itemDetailLabelPosContainQp = this->fields.itemDetailLabelPosDisable;
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
  if ( (byte_5974764 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16258/*"Window/CancelBtn"*/);
    byte_5974764 = 1;
  }
  return (System_String_o *)StringLiteral_16258/*"Window/CancelBtn"*/;
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
  if ( (byte_5974765 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)sub_2213A60(&IClassBoardItemModel_TypeInfo);
    byte_5974765 = 1;
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
    v8 = sub_224BC3C(x, IClassBoardItemModel_TypeInfo, 2);
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
    v14 = sub_224BC3C(x, IClassBoardItemModel_TypeInfo, 0);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                        x,
                                                                        *(_QWORD *)(v14 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_2213CDC(this, x);
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
  if ( (byte_5974766 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)sub_2213A60(&IClassBoardItemModel_TypeInfo);
    byte_5974766 = 1;
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
    v8 = sub_224BC3C(x, IClassBoardItemModel_TypeInfo, 2);
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
      v14 = sub_224BC3C(x, IClassBoardItemModel_TypeInfo, 0);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass34_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                          x,
                                                                          *(_QWORD *)(v14 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0);
LABEL_21:
    sub_2213CDC(this, x);
  }
  return 0;
}