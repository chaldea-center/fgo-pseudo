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

  if ( (byte_42B076B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    byte_42B076B = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndClose(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42B076C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B076C = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
    sub_B52A5C(0LL, v4);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1

  if ( (byte_42B076A & 1) == 0 )
  {
    sub_B52984(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    byte_42B076A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.closeFunc,
      (System_Int32_array **)cancelFunc,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    ClassBoardSquareOpenConfirmDialog__Close(this, v12);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickDecide(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *decideFunc; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_42B076D & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__);
    sub_B52984(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    byte_42B076D = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v3 = (_QWORD *)sub_B5298C(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
      OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.closeFunc,
        (System_Int32_array **)decideFunc,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v12, 0LL);
    }
  }
  else
  {
    v13 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v13 = (_QWORD *)sub_B5298C(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v14 = (System_Reflection_MethodBase_o *)sub_B52968(v13, v13[3]);
    OverwriteAssetSoundName__PlaySystemSe(v14, this->fields.onClickDecideDisableSeKind, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquareOpenConfirmDialog__Open(
        ClassBoardSquareOpenConfirmDialog_o *this,
        ClassBoardSquare_o *square,
        bool isEnableOpen,
        System_Action_o *decideFunc,
        System_Action_o *cancelFunc,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UILabel_o *titleLabel; // x21
  __int64 v29; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v31; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v34; // x0
  _BOOL4 v35; // w21
  UILabel_o *itemDetailLabel; // x22
  __int64 *v37; // x8
  __int64 v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x3
  IClassBoardSquareModel_c *v46; // x8
  unsigned __int64 v47; // x10
  IClassBoardSquareModel_c **v48; // x11
  __int64 v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v51; // x25
  _BOOL4 v52; // w0
  __int64 v53; // x3
  IClassBoardSquareModel_c *v54; // x8
  int v55; // w24
  unsigned __int64 v56; // x10
  IClassBoardSquareModel_c **v57; // x11
  __int64 v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v60; // x25
  _BOOL4 v61; // w8
  const MethodInfo *v62; // x3
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v65; // x2
  System_Action_o *v66; // x20

  if ( (byte_42B0769 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__);
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
    sub_B52984(&Method_System_Func_IClassBoardItemModel__bool___ctor__);
    sub_B52984(&System_Func_IClassBoardItemModel__bool__TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__);
    sub_B52984(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__);
    sub_B52984(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo);
    sub_B52984(&StringLiteral_3069/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/);
    sub_B52984(&StringLiteral_3066/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/);
    sub_B52984(&StringLiteral_3071/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/);
    sub_B52984(&StringLiteral_3073/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/);
    sub_B52984(&StringLiteral_3065/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/);
    sub_B52984(&StringLiteral_3070/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/);
    sub_B52984(&StringLiteral_3072/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/);
    sub_B52984(&StringLiteral_3067/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/);
    sub_B52984(&StringLiteral_3068/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/);
    byte_42B0769 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)isEnableOpen,
    (System_String_array **)decideFunc,
    (System_Boolean_array **)cancelFunc,
    (System_Int32_array **)method,
    v6,
    v7);
  if ( !square )
    goto LABEL_68;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  this->fields.decideFunc = decideFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.cancelFunc = cancelFunc;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.cancelFunc,
    (System_Int32_array **)cancelFunc,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3073/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_68;
  UILabel__set_text(titleLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, 0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_68;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v31;
      p_offset += 2;
      if ( v31 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AEB880(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v29);
  }
  v34 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  v35 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v34, 0LL);
  if ( isEnableOpen )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( v35 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = &StringLiteral_3068/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = &StringLiteral_3067/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
    }
    goto LABEL_61;
  }
  v38 = sub_B52A54(ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo);
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___ctor(
    (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)v38,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v38 )
LABEL_68:
    sub_B52A5C(Master_WarQuestSelectionMaster, v14);
  *(_QWORD *)(v38 + 16) = Master_WarQuestSelectionMaster;
  sub_B52920(
    (BattleServantConfConponent_o *)(v38 + 16),
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v46 = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = (IClassBoardSquareModel_c **)&v46->_1.interfaceOffsets->offset;
    while ( *(v48 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v47;
      v48 += 2;
      if ( v47 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 6].method;
  }
  else
  {
LABEL_29:
    v49 = sub_AEB880(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v45);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v49)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v49 + 8));
  v51 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v51,
    (Il2CppObject *)v38,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_IClassBoardItemModel__bool___ctor__);
  v52 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
          v50,
          (System_Func_TSource__bool__o *)v51,
          (const MethodInfo_1B52544 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  v54 = SquareModel_k__BackingField->klass;
  v55 = v52;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = (IClassBoardSquareModel_c **)&v54->_1.interfaceOffsets->offset;
    while ( *(v57 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v56;
      v57 += 2;
      if ( v56 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v58 = (__int64)&v54->vtable[*(_DWORD *)v57 + 6].method;
  }
  else
  {
LABEL_39:
    v58 = sub_AEB880(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v53);
  }
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v58)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v58 + 8));
  v60 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v60,
    (Il2CppObject *)v38,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_IClassBoardItemModel__bool___ctor__);
  v61 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
          v59,
          (System_Func_TSource__bool__o *)v60,
          (const MethodInfo_1B52544 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  if ( (v35 & (unsigned __int8)v55 & 1) != 0 && v61 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = &StringLiteral_3071/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/;
  }
  else if ( (v35 & ~v55 & v61 & 1) != 0 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = &StringLiteral_3070/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
  }
  else
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( v61 || (v35 & (unsigned __int8)v55 & 1) == 0 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = &StringLiteral_3069/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v37 = &StringLiteral_3072/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    }
  }
LABEL_61:
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)*v37, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_68;
  UILabel__set_text(itemDetailLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v35, isEnableOpen, v62);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3065/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_68;
  UILabel__set_text(cancelBtnLabel, Master_WarQuestSelectionMaster, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3066/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_68;
  UILabel__set_text(decideBtnLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v65);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v66 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardSquareOpenConfirmDialog__SetDecideButton(
        ClassBoardSquareOpenConfirmDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *decideBtn; // x0
  UIWidget_o *decideBtnSprite; // x19
  int v6; // s0

  decideBtn = (UnityEngine_Behaviour_o *)this->fields.decideBtn;
  if ( !decideBtn )
    goto LABEL_4;
  if ( !isEnable )
  {
    UnityEngine_Behaviour__set_enabled(decideBtn, 0, 0LL);
    decideBtnSprite = (UIWidget_o *)this->fields.decideBtnSprite;
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
    if ( decideBtnSprite )
      goto LABEL_6;
LABEL_4:
    sub_B52A5C(decideBtn, isEnable);
  }
  UnityEngine_Behaviour__set_enabled(decideBtn, 1, 0LL);
  decideBtnSprite = (UIWidget_o *)this->fields.decideBtnSprite;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
  if ( !decideBtnSprite )
    goto LABEL_4;
LABEL_6:
  UIWidget__set_color(decideBtnSprite, *(UnityEngine_Color_o *)&v6, 0LL);
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
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0

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
          x = this->fields.itemDetailLabelPosContainQp.fields.x;
          y = this->fields.itemDetailLabelPosContainQp.fields.y;
          z = this->fields.itemDetailLabelPosContainQp.fields.z;
LABEL_19:
          GameObjectExtensions__SetLocalPosition(v8, *(UnityEngine_Vector3_o *)&x, 0LL);
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
          x = this->fields.itemDetailLabelPosContainQpDisable.fields.x;
          y = this->fields.itemDetailLabelPosContainQpDisable.fields.y;
          z = this->fields.itemDetailLabelPosContainQpDisable.fields.z;
          goto LABEL_19;
        }
      }
    }
LABEL_21:
    sub_B52A5C(itemQpObj, isContainQp);
  }
  if ( !isEnableOpen && !isContainQp )
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
          x = this->fields.itemDetailLabelPosDisable.fields.x;
          y = this->fields.itemDetailLabelPosDisable.fields.y;
          z = this->fields.itemDetailLabelPosDisable.fields.z;
          goto LABEL_19;
        }
      }
    }
    goto LABEL_21;
  }
}


System_String_o *__fastcall ClassBoardSquareOpenConfirmDialog__get_closeBtnPath(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B076E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15581/*"Window/CancelBtn"*/);
    byte_42B076E = 1;
  }
  return (System_String_o *)StringLiteral_15581/*"Window/CancelBtn"*/;
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
  __int64 v3; // x3
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *v5; // x20
  IClassBoardItemModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x3
  IClassBoardItemModel_c *v12; // x8
  ItemMaster_o *itemMaster; // x20
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0

  v5 = this;
  if ( (byte_42AD6DC & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_B52984(&IClassBoardItemModel_TypeInfo);
    byte_42AD6DC = 1;
  }
  if ( !x )
    goto LABEL_20;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)p_offset - 1) != IClassBoardItemModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(x, IClassBoardItemModel_TypeInfo, 2LL, v3);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 0;
  v12 = x->klass;
  itemMaster = v5->fields.itemMaster;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)v15 - 1) != IClassBoardItemModel_TypeInfo )
    {
      ++v14;
      v15 += 4;
      if ( v14 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v16 = (__int64)&v12->vtable[*v15].method;
  }
  else
  {
LABEL_16:
    v16 = sub_AEB880(x, IClassBoardItemModel_TypeInfo, 0LL, v10);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v16)(
                                                                        x,
                                                                        *(_QWORD *)(v16 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_B52A5C(this, x);
  return ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
}


bool __fastcall ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___Open_b__1(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *this,
        IClassBoardItemModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *v5; // x20
  IClassBoardItemModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v10; // x3
  IClassBoardItemModel_c *v12; // x8
  ItemMaster_o *itemMaster; // x20
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0

  v5 = this;
  if ( (byte_42AD6DD & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_B52984(&IClassBoardItemModel_TypeInfo);
    byte_42AD6DD = 1;
  }
  if ( !x )
    goto LABEL_21;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)p_offset - 1) != IClassBoardItemModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(x, IClassBoardItemModel_TypeInfo, 2LL, v3);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v12 = x->klass;
    itemMaster = v5->fields.itemMaster;
    if ( *(_WORD *)&x->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v12->_1.interfaceOffsets->offset;
      while ( *((IClassBoardItemModel_c **)v15 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v16 = (__int64)&v12->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(x, IClassBoardItemModel_TypeInfo, 0LL, v10);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v16)(
                                                                          x,
                                                                          *(_QWORD *)(v16 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
LABEL_21:
    sub_B52A5C(this, x);
  }
  return 0;
}