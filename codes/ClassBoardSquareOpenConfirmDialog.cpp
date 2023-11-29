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
  __int64 v6; // x3
  __int64 v7; // x4
  System_Action_o *v8; // x20

  if ( (byte_40FBA15 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v3);
    byte_40FBA15 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v4, v5, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndClose(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40FBA16 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FBA16 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40FBA14 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__, method);
    byte_40FBA14 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_B16F98(
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0

  if ( (byte_40FBA17 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v3);
    sub_B16FFC(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__, v4);
    byte_40FBA17 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v5 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
        v5 = (_QWORD *)sub_B17004(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
      OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_B16F98(
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
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v18, 0LL);
    }
  }
  else
  {
    v19 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
      v19 = (_QWORD *)sub_B17004(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v20 = (System_Reflection_MethodBase_o *)sub_B16FE0(v19, v19[3]);
    OverwriteAssetSoundName__PlaySystemSe(v20, this->fields.onClickDecideDisableSeKind, 0LL);
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
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v47; // x0
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v49; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  _BOOL4 v57; // w21
  UILabel_o *itemDetailLabel; // x22
  __int64 *v59; // x8
  __int64 v60; // x23
  System_Int32_array **Master_WarQuestSelectionMaster; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  IClassBoardSquareModel_c *v68; // x8
  unsigned __int64 v69; // x10
  IClassBoardSquareModel_c **v70; // x11
  __int64 v71; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x24
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v77; // x25
  _BOOL4 v78; // w0
  IClassBoardSquareModel_c *v79; // x8
  int v80; // w24
  unsigned __int64 v81; // x10
  IClassBoardSquareModel_c **v82; // x11
  __int64 v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x22
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v89; // x25
  _BOOL4 v90; // w8
  System_String_o *v91; // x0
  const MethodInfo *v92; // x3
  UILabel_o *cancelBtnLabel; // x20
  System_String_o *v94; // x0
  UILabel_o *decideBtnLabel; // x20
  System_String_o *v96; // x0
  const MethodInfo *v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  System_Action_o *v102; // x20

  if ( (byte_40FBA13 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, square);
    sub_B16FFC(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, v14);
    sub_B16FFC(&DataManager_TypeInfo, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___, v16);
    sub_B16FFC(&Method_System_Func_IClassBoardItemModel__bool___ctor__, v17);
    sub_B16FFC(&System_Func_IClassBoardItemModel__bool__TypeInfo, v18);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v19);
    sub_B16FFC(&LocalizationManager_TypeInfo, v20);
    sub_B16FFC(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__, v21);
    sub_B16FFC(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__, v22);
    sub_B16FFC(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo, v23);
    sub_B16FFC(&StringLiteral_3028, v24);
    sub_B16FFC(&StringLiteral_3025, v25);
    sub_B16FFC(&StringLiteral_3030, v26);
    sub_B16FFC(&StringLiteral_3032, v27);
    sub_B16FFC(&StringLiteral_3024, v28);
    sub_B16FFC(&StringLiteral_3029, v29);
    sub_B16FFC(&StringLiteral_3031, v30);
    sub_B16FFC(&StringLiteral_3026, v31);
    sub_B16FFC(&StringLiteral_3027, v32);
    byte_40FBA13 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.decideFunc,
    (System_Int32_array **)decideFunc,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.cancelFunc = cancelFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cancelFunc,
    (System_Int32_array **)cancelFunc,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3032, 0LL);
  if ( !titleLabel )
    goto LABEL_68;
  UILabel__set_text(titleLabel, v47, 0LL);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, 0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_68;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v49;
      p_offset += 2;
      if ( v49 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_13:
    p_method = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v52 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  v57 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v52, 0LL);
  if ( isEnableOpen )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( v57 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_3027;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_3026;
    }
    goto LABEL_61;
  }
  v60 = sub_B170CC(ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo, v53, v54, v55, v56);
  ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___ctor(
    (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)v60,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Int32_array **)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v60 )
LABEL_68:
    sub_B170D4();
  *(_QWORD *)(v60 + 16) = Master_WarQuestSelectionMaster;
  sub_B16F98((BattleServantConfConponent_o *)(v60 + 16), Master_WarQuestSelectionMaster, v62, v63, v64, v65, v66, v67);
  v68 = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v69 = 0LL;
    v70 = (IClassBoardSquareModel_c **)&v68->_1.interfaceOffsets->offset;
    while ( *(v70 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v69;
      v70 += 2;
      if ( v69 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v71 = (__int64)&v68->vtable[*(_DWORD *)v70 + 6].method;
  }
  else
  {
LABEL_29:
    v71 = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v71)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v71 + 8));
  v77 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_IClassBoardItemModel__bool__TypeInfo,
                                                                             v73,
                                                                             v74,
                                                                             v75,
                                                                             v76);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v77,
    (Il2CppObject *)v60,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardItemModel__bool___ctor__);
  v78 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
          v72,
          (System_Func_TSource__bool__o *)v77,
          (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  v79 = SquareModel_k__BackingField->klass;
  v80 = v78;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v81 = 0LL;
    v82 = (IClassBoardSquareModel_c **)&v79->_1.interfaceOffsets->offset;
    while ( *(v82 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v81;
      v82 += 2;
      if ( v81 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v83 = (__int64)&v79->vtable[*(_DWORD *)v82 + 6].method;
  }
  else
  {
LABEL_39:
    v83 = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v84 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v83)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v83 + 8));
  v89 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_IClassBoardItemModel__bool__TypeInfo,
                                                                             v85,
                                                                             v86,
                                                                             v87,
                                                                             v88);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v89,
    (Il2CppObject *)v60,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardItemModel__bool___ctor__);
  v90 = System_Linq_Enumerable__Any_WarBoardAIRoute_RouteData_(
          v84,
          (System_Func_TSource__bool__o *)v89,
          (const MethodInfo_18C9B90 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  if ( (v57 & (unsigned __int8)v80 & 1) != 0 && v90 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v59 = &StringLiteral_3030;
  }
  else if ( (v57 & ~v80 & v90 & 1) != 0 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v59 = &StringLiteral_3029;
  }
  else
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( v90 || (v57 & (unsigned __int8)v80 & 1) == 0 )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_3028;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v59 = &StringLiteral_3031;
    }
  }
LABEL_61:
  v91 = LocalizationManager__Get((System_String_o *)*v59, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_68;
  UILabel__set_text(itemDetailLabel, v91, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v57, isEnableOpen, v92);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v94 = LocalizationManager__Get((System_String_o *)StringLiteral_3024, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_68;
  UILabel__set_text(cancelBtnLabel, v94, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3025, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_68;
  UILabel__set_text(decideBtnLabel, v96, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v97);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v102 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v98, v99, v100, v101);
  System_Action___ctor(v102, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v102, 0, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Component_o *itemIconListGrid; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Component_o *itemDetailLabel; // x0
  UnityEngine_GameObject_o *v10; // x0
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *v23; // x0

  if ( isContainQp && isEnableOpen )
  {
    itemQpObj = this->fields.itemQpObj;
    if ( itemQpObj )
    {
      gameObject = UnityEngine_GameObject__get_gameObject(itemQpObj, 0LL);
      GameObjectExtensions__SetLocalPosition(gameObject, this->fields.itemQpObjPosAContainQp, 0LL);
      itemIconListGrid = (UnityEngine_Component_o *)this->fields.itemIconListGrid;
      if ( itemIconListGrid )
      {
        v8 = UnityEngine_Component__get_gameObject(itemIconListGrid, 0LL);
        GameObjectExtensions__SetLocalPosition(v8, this->fields.itemIconListGridPosContainQp, 0LL);
        itemDetailLabel = (UnityEngine_Component_o *)this->fields.itemDetailLabel;
        if ( itemDetailLabel )
        {
          v10 = UnityEngine_Component__get_gameObject(itemDetailLabel, 0LL);
          x = this->fields.itemDetailLabelPosContainQp.fields.x;
          y = this->fields.itemDetailLabelPosContainQp.fields.y;
          z = this->fields.itemDetailLabelPosContainQp.fields.z;
LABEL_19:
          GameObjectExtensions__SetLocalPosition(v10, *(UnityEngine_Vector3_o *)&x, 0LL);
          return;
        }
      }
    }
    goto LABEL_21;
  }
  if ( isContainQp && !isEnableOpen )
  {
    v14 = this->fields.itemQpObj;
    if ( v14 )
    {
      v15 = UnityEngine_GameObject__get_gameObject(v14, 0LL);
      GameObjectExtensions__SetLocalPosition(v15, this->fields.itemQpObjPosContainQpDisable, 0LL);
      v16 = (UnityEngine_Component_o *)this->fields.itemIconListGrid;
      if ( v16 )
      {
        v17 = UnityEngine_Component__get_gameObject(v16, 0LL);
        GameObjectExtensions__SetLocalPosition(v17, this->fields.itemIconListGridPosContainQpDisable, 0LL);
        v18 = (UnityEngine_Component_o *)this->fields.itemDetailLabel;
        if ( v18 )
        {
          v10 = UnityEngine_Component__get_gameObject(v18, 0LL);
          x = this->fields.itemDetailLabelPosContainQpDisable.fields.x;
          y = this->fields.itemDetailLabelPosContainQpDisable.fields.y;
          z = this->fields.itemDetailLabelPosContainQpDisable.fields.z;
          goto LABEL_19;
        }
      }
    }
LABEL_21:
    sub_B170D4();
  }
  if ( !isEnableOpen && !isContainQp )
  {
    v19 = this->fields.itemQpObj;
    if ( v19 )
    {
      v20 = UnityEngine_GameObject__get_gameObject(v19, 0LL);
      GameObjectExtensions__SetLocalPosition(v20, this->fields.itemQpObjPosDisable, 0LL);
      v21 = (UnityEngine_Component_o *)this->fields.itemIconListGrid;
      if ( v21 )
      {
        v22 = UnityEngine_Component__get_gameObject(v21, 0LL);
        GameObjectExtensions__SetLocalPosition(v22, this->fields.itemIconListGridPosDisable, 0LL);
        v23 = (UnityEngine_Component_o *)this->fields.itemDetailLabel;
        if ( v23 )
        {
          v10 = UnityEngine_Component__get_gameObject(v23, 0LL);
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
  if ( (byte_40FBA18 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15413, method);
    byte_40FBA18 = 1;
  }
  return (System_String_o *)StringLiteral_15413;
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
  IClassBoardItemModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardItemModel_c *v10; // x8
  ItemMaster_o *itemMaster; // x20
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  int32_t v15; // w0

  if ( (byte_40F70F5 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardItemModel_TypeInfo, x);
    byte_40F70F5 = 1;
  }
  if ( !x )
    goto LABEL_20;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)p_offset - 1) != IClassBoardItemModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(x, IClassBoardItemModel_TypeInfo, 2LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) & 1) != 0 )
    return 0;
  v10 = x->klass;
  itemMaster = this->fields.itemMaster;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)v13 - 1) != IClassBoardItemModel_TypeInfo )
    {
      ++v12;
      v13 += 4;
      if ( v12 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v14 = (__int64)&v10->vtable[*v13].method;
  }
  else
  {
LABEL_16:
    v14 = sub_AAFEF8(x, IClassBoardItemModel_TypeInfo, 0LL);
  }
  v15 = (*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(x, *(_QWORD *)(v14 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_B170D4();
  return ItemMaster__isQP(itemMaster, v15, 0LL);
}


bool __fastcall ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0___Open_b__1(
        ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *this,
        IClassBoardItemModel_o *x,
        const MethodInfo *method)
{
  IClassBoardItemModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardItemModel_c *v10; // x8
  ItemMaster_o *itemMaster; // x20
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  int32_t v15; // w0

  if ( (byte_40F70F6 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardItemModel_TypeInfo, x);
    byte_40F70F6 = 1;
  }
  if ( !x )
    goto LABEL_21;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardItemModel_c **)p_offset - 1) != IClassBoardItemModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 2].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(x, IClassBoardItemModel_TypeInfo, 2LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v10 = x->klass;
    itemMaster = this->fields.itemMaster;
    if ( *(_WORD *)&x->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v10->_1.interfaceOffsets->offset;
      while ( *((IClassBoardItemModel_c **)v13 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v14 = (__int64)&v10->vtable[*v13].method;
    }
    else
    {
LABEL_16:
      v14 = sub_AAFEF8(x, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(x, *(_QWORD *)(v14 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, v15, 0LL);
LABEL_21:
    sub_B170D4();
  }
  return 0;
}