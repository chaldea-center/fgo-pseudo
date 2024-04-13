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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EA8B0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v5, v6, v7);
    byte_42EA8B0 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndClose(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EA8B1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA8B1 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickCancel(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_o *cancelFunc; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_42EA8AF & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42EA8AF = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.closeFunc,
      (System_Int32_array **)cancelFunc,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    ClassBoardSquareOpenConfirmDialog__Close(this, v14);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickDecide(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct System_Action_o *decideFunc; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *v20; // x20
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0

  if ( (byte_42EA8B2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__, v8, v9, v10);
    byte_42EA8B2 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v11 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v11 = (_QWORD *)sub_B5D5CC(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
      OverwriteAssetSoundName__PlaySystemSe(v12, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.closeFunc,
        (System_Int32_array **)decideFunc,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v20, 0LL);
    }
  }
  else
  {
    v21 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v21 = (_QWORD *)sub_B5D5CC(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v22 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v21, v21[3]);
    OverwriteAssetSoundName__PlaySystemSe(v22, this->fields.onClickDecideDisableSeKind, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  UILabel_o *titleLabel; // x21
  __int64 v89; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v91; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v94; // x0
  _BOOL4 v95; // w21
  UILabel_o *itemDetailLabel; // x22
  __int64 *v97; // x8
  __int64 v98; // x23
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  __int64 v105; // x3
  IClassBoardSquareModel_c *v106; // x8
  unsigned __int64 v107; // x10
  IClassBoardSquareModel_c **v108; // x11
  __int64 v109; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x24
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v111; // x25
  _BOOL4 v112; // w0
  __int64 v113; // x3
  IClassBoardSquareModel_c *v114; // x8
  int v115; // w24
  unsigned __int64 v116; // x10
  IClassBoardSquareModel_c **v117; // x11
  __int64 v118; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v120; // x25
  _BOOL4 v121; // w8
  const MethodInfo *v122; // x3
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v125; // x2
  System_Action_o *v126; // x20

  if ( (byte_42EA8AE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)square, isEnableOpen, decideFunc);
    sub_B5D5C4(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, v16, v17, v18);
    sub_B5D5C4(&DataManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___, v22, v23, v24);
    sub_B5D5C4(&Method_System_Func_IClassBoardItemModel__bool___ctor__, v25, v26, v27);
    sub_B5D5C4(&System_Func_IClassBoardItemModel__bool__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__, v37, v38, v39);
    sub_B5D5C4(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__, v40, v41, v42);
    sub_B5D5C4(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_3096/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_3093/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_3098/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_3100/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_3092/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_3097/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_3099/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_3094/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_3095/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/, v70, v71, v72);
    byte_42EA8AE = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  this->fields.cancelFunc = cancelFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cancelFunc,
    (System_Int32_array **)cancelFunc,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3100/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_68;
  UILabel__set_text(titleLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, 0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_68;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v91 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v91;
      p_offset += 2;
      if ( v91 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v89);
  }
  v94 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  v95 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v94, 0LL);
  if ( isEnableOpen )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( v95 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v97 = &StringLiteral_3095/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v97 = &StringLiteral_3094/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
    }
    goto LABEL_61;
  }
  v98 = sub_B5D694(ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo);
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___ctor(
    (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)v98,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v98 )
LABEL_68:
    sub_B5D69C(Master_WarQuestSelectionMaster, v74);
  *(_QWORD *)(v98 + 16) = Master_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v98 + 16),
    (System_Int32_array **)Master_WarQuestSelectionMaster,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  v106 = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v107 = 0LL;
    v108 = (IClassBoardSquareModel_c **)&v106->_1.interfaceOffsets->offset;
    while ( *(v108 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v107;
      v108 += 2;
      if ( v107 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v109 = (__int64)&v106->vtable[*(_DWORD *)v108 + 6].method;
  }
  else
  {
LABEL_29:
    v109 = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v105);
  }
  v110 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v109)(
                                                                SquareModel_k__BackingField,
                                                                *(_QWORD *)(v109 + 8));
  v111 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v111,
    (Il2CppObject *)v98,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_IClassBoardItemModel__bool___ctor__);
  v112 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v110,
           (System_Func_TSource__bool__o *)v111,
           (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  v114 = SquareModel_k__BackingField->klass;
  v115 = v112;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v116 = 0LL;
    v117 = (IClassBoardSquareModel_c **)&v114->_1.interfaceOffsets->offset;
    while ( *(v117 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v116;
      v117 += 2;
      if ( v116 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v118 = (__int64)&v114->vtable[*(_DWORD *)v117 + 6].method;
  }
  else
  {
LABEL_39:
    v118 = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v113);
  }
  v119 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v118)(
                                                                SquareModel_k__BackingField,
                                                                *(_QWORD *)(v118 + 8));
  v120 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IClassBoardItemModel__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v120,
    (Il2CppObject *)v98,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_IClassBoardItemModel__bool___ctor__);
  v121 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
           v119,
           (System_Func_TSource__bool__o *)v120,
           (const MethodInfo_1C9A92C *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  if ( (v95 & (unsigned __int8)v115 & 1) != 0 && v121 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v97 = &StringLiteral_3098/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/;
  }
  else if ( (v95 & ~v115 & v121 & 1) != 0 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v97 = &StringLiteral_3097/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
  }
  else
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( v121 || (v95 & (unsigned __int8)v115 & 1) == 0 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v97 = &StringLiteral_3096/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v97 = &StringLiteral_3099/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    }
  }
LABEL_61:
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)*v97, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_68;
  UILabel__set_text(itemDetailLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v95, isEnableOpen, v122);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3092/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_68;
  UILabel__set_text(cancelBtnLabel, Master_WarQuestSelectionMaster, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_WarQuestSelectionMaster = LocalizationManager__Get((System_String_o *)StringLiteral_3093/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_68;
  UILabel__set_text(decideBtnLabel, Master_WarQuestSelectionMaster, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v125);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v126 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v126, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v126, 0, 0LL);
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
    sub_B5D69C(decideBtn, isEnable);
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
    sub_B5D69C(itemQpObj, isContainQp);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA8B3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15666/*"Window/CancelBtn"*/, (_DWORD)method, v2, v3);
    byte_42EA8B3 = 1;
  }
  return (System_String_o *)StringLiteral_15666/*"Window/CancelBtn"*/;
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
  if ( (byte_42E5E93 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_B5D5C4(
                                                                          &IClassBoardItemModel_TypeInfo,
                                                                          (_DWORD)x,
                                                                          (_DWORD)method,
                                                                          v3);
    byte_42E5E93 = 1;
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
    p_method = sub_AF54C0(x, IClassBoardItemModel_TypeInfo, 2LL, v3);
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
    v16 = sub_AF54C0(x, IClassBoardItemModel_TypeInfo, 0LL, v10);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v16)(
                                                                        x,
                                                                        *(_QWORD *)(v16 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_B5D69C(this, x);
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
  if ( (byte_42E5E94 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_B5D5C4(
                                                                          &IClassBoardItemModel_TypeInfo,
                                                                          (_DWORD)x,
                                                                          (_DWORD)method,
                                                                          v3);
    byte_42E5E94 = 1;
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
    p_method = sub_AF54C0(x, IClassBoardItemModel_TypeInfo, 2LL, v3);
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
      v16 = sub_AF54C0(x, IClassBoardItemModel_TypeInfo, 0LL, v10);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v16)(
                                                                          x,
                                                                          *(_QWORD *)(v16 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
LABEL_21:
    sub_B5D69C(this, x);
  }
  return 0;
}