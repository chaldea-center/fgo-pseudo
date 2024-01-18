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
  System_Action_o *v4; // x20

  if ( (byte_418959B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v3);
    byte_418959B = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndClose(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_418959C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418959C = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
    sub_B2C434(0LL, v4);
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

  if ( (byte_418959A & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__, method);
    byte_418959A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_o *decideFunc; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *v14; // x20
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0

  if ( (byte_418959D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v3);
    sub_B2C35C(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__, v4);
    byte_418959D = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v5 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B2C364(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_B2C340(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.closeFunc,
        (System_Int32_array **)decideFunc,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v14, 0LL);
    }
  }
  else
  {
    v15 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v15 = (_QWORD *)sub_B2C364(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v16 = (System_Reflection_MethodBase_o *)sub_B2C340(v15, v15[3]);
    OverwriteAssetSoundName__PlaySystemSe(v16, this->fields.onClickDecideDisableSeKind, 0LL);
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
  __int64 v32; // x1
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UILabel_o *titleLabel; // x21
  __int64 v49; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v51; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v54; // x0
  _BOOL4 v55; // w21
  UILabel_o *itemDetailLabel; // x22
  __int64 *v57; // x8
  __int64 v58; // x23
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x3
  IClassBoardSquareModel_c *v66; // x8
  unsigned __int64 v67; // x10
  IClassBoardSquareModel_c **v68; // x11
  __int64 v69; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v71; // x25
  _BOOL4 v72; // w0
  __int64 v73; // x3
  IClassBoardSquareModel_c *v74; // x8
  int v75; // w24
  unsigned __int64 v76; // x10
  IClassBoardSquareModel_c **v77; // x11
  __int64 v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v80; // x25
  _BOOL4 v81; // w8
  const MethodInfo *v82; // x3
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v85; // x2
  System_Action_o *v86; // x20

  if ( (byte_4189599 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, square);
    sub_B2C35C(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ItemMaster___, v14);
    sub_B2C35C(&DataManager_TypeInfo, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___, v16);
    sub_B2C35C(&Method_System_Func_IClassBoardItemModel__bool___ctor__, v17);
    sub_B2C35C(&System_Func_IClassBoardItemModel__bool__TypeInfo, v18);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__, v21);
    sub_B2C35C(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__, v22);
    sub_B2C35C(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_3037/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v24);
    sub_B2C35C(&StringLiteral_3034/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, v25);
    sub_B2C35C(&StringLiteral_3039/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/, v26);
    sub_B2C35C(&StringLiteral_3041/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, v27);
    sub_B2C35C(&StringLiteral_3033/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, v28);
    sub_B2C35C(&StringLiteral_3038/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/, v29);
    sub_B2C35C(&StringLiteral_3040/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/, v30);
    sub_B2C35C(&StringLiteral_3035/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v31);
    sub_B2C35C(&StringLiteral_3036/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/, v32);
    byte_4189599 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.cancelFunc = cancelFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cancelFunc,
    (System_Int32_array **)cancelFunc,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3041/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_68;
  UILabel__set_text(titleLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, 0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_68;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v51 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v51;
      p_offset += 2;
      if ( v51 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AC5258(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v49);
  }
  v54 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  v55 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v54, 0LL);
  if ( isEnableOpen )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( v55 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = &StringLiteral_3036/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = &StringLiteral_3035/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
    }
    goto LABEL_61;
  }
  v58 = sub_B2C42C(ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo);
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___ctor(
    (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)v58,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v58 )
LABEL_68:
    sub_B2C434(Master_WarQuestSelectionMaster, v34);
  *(_QWORD *)(v58 + 16) = Master_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v58 + 16),
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v66 = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = (IClassBoardSquareModel_c **)&v66->_1.interfaceOffsets->offset;
    while ( *(v68 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v67;
      v68 += 2;
      if ( v67 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v69 = (__int64)&v66->vtable[*(_DWORD *)v68 + 6].method;
  }
  else
  {
LABEL_29:
    v69 = sub_AC5258(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v65);
  }
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v69)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v69 + 8));
  v71 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v71,
    (Il2CppObject *)v58,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_IClassBoardItemModel__bool___ctor__);
  v72 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
          v70,
          (System_Func_TSource__bool__o *)v71,
          (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  v74 = SquareModel_k__BackingField->klass;
  v75 = v72;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v76 = 0LL;
    v77 = (IClassBoardSquareModel_c **)&v74->_1.interfaceOffsets->offset;
    while ( *(v77 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v76;
      v77 += 2;
      if ( v76 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v78 = (__int64)&v74->vtable[*(_DWORD *)v77 + 6].method;
  }
  else
  {
LABEL_39:
    v78 = sub_AC5258(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v73);
  }
  v79 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v78)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v78 + 8));
  v80 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v80,
    (Il2CppObject *)v58,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_IClassBoardItemModel__bool___ctor__);
  v81 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
          v79,
          (System_Func_TSource__bool__o *)v80,
          (const MethodInfo_173A2F8 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  if ( (v55 & (unsigned __int8)v75 & 1) != 0 && v81 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = &StringLiteral_3039/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/;
  }
  else if ( (v55 & ~v75 & v81 & 1) != 0 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = &StringLiteral_3038/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
  }
  else
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( v81 || (v55 & (unsigned __int8)v75 & 1) == 0 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = &StringLiteral_3037/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v57 = &StringLiteral_3040/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    }
  }
LABEL_61:
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)*v57, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_68;
  UILabel__set_text(itemDetailLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v55, isEnableOpen, v82);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3033/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_68;
  UILabel__set_text(cancelBtnLabel, Master_WarQuestSelectionMaster, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3034/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_68;
  UILabel__set_text(decideBtnLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v85);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v86 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v86, 0, 0LL);
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
    sub_B2C434(decideBtn, isEnable);
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
    sub_B2C434(itemQpObj, isContainQp);
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
  if ( (byte_418959E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15476/*"Window/CancelBtn"*/, method);
    byte_418959E = 1;
  }
  return (System_String_o *)StringLiteral_15476/*"Window/CancelBtn"*/;
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
  if ( (byte_4184EFD & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_B2C35C(&IClassBoardItemModel_TypeInfo, x);
    byte_4184EFD = 1;
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
    p_method = sub_AC5258(x, IClassBoardItemModel_TypeInfo, 2LL, v3);
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
    v16 = sub_AC5258(x, IClassBoardItemModel_TypeInfo, 0LL, v10);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v16)(
                                                                        x,
                                                                        *(_QWORD *)(v16 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_B2C434(this, x);
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
  if ( (byte_4184EFE & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_B2C35C(&IClassBoardItemModel_TypeInfo, x);
    byte_4184EFE = 1;
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
    p_method = sub_AC5258(x, IClassBoardItemModel_TypeInfo, 2LL, v3);
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
      v16 = sub_AC5258(x, IClassBoardItemModel_TypeInfo, 0LL, v10);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v16)(
                                                                          x,
                                                                          *(_QWORD *)(v16 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
LABEL_21:
    sub_B2C434(this, x);
  }
  return 0;
}