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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4B19740 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v4, v5);
    byte_4B19740 = 1;
  }
  this->fields.isButtonEnable = 0;
  ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
  v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v9, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__EndClose(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B19741 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19741 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickCancel(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct System_Action_o *cancelFunc; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4B1973F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__, method, v2);
    byte_4B1973F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardSquareOpenConfirmDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickCancelSeKind, 0LL);
    cancelFunc = this->fields.cancelFunc;
    this->fields.closeFunc = cancelFunc;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)cancelFunc, v7, v8, v9, v10, v11, v12);
    ClassBoardSquareOpenConfirmDialog__Close(this, v13);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickDecide(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct System_Action_o *decideFunc; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x20
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0

  if ( (byte_4B19742 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardSquareOpenConfirmDialog_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__, v6, v7);
    byte_4B19742 = 1;
  }
  if ( this->fields.isDecideButtonEnable )
  {
    if ( this->fields.isButtonEnable )
    {
      v8 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
      if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
      v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, this->fields.onClickDecideSeKind, 0LL);
      decideFunc = this->fields.decideFunc;
      this->fields.closeFunc = decideFunc;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.closeFunc,
        (int64_t)decideFunc,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      this->fields.isButtonEnable = 0;
      ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
      v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndClose__, 0LL);
      ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v20, 0LL);
    }
  }
  else
  {
    v21 = Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardSquareOpenConfirmDialog_OnClickDecide__);
    v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, this->fields.onClickDecideDisableSeKind, 0LL);
  }
}


void __fastcall ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow(
        ClassBoardSquareOpenConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B19743 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__32_0__, v5, v6);
    byte_4B19743 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ClassBoardSquareOpenConfirmDialog__OnClickItemInfoListWindow_b__32_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v7, 0LL);
    this->fields.isButtonEnable = 0;
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  System_String_o *Master_object; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x1
  UILabel_o *titleLabel; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v69; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  _BOOL4 v76; // w21
  UILabel_o *itemDetailLabel; // x22
  __int64 *v78; // x8
  __int64 v79; // x23
  __int64 v80; // x1
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  IClassBoardSquareModel_c *v87; // x8
  __int64 v88; // x9
  IClassBoardSquareModel_c **v89; // x10
  __int64 v90; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x24
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  System_Func_object__bool__o *v95; // x25
  _BOOL4 v96; // w0
  IClassBoardSquareModel_c *v97; // x8
  int v98; // w24
  __int64 v99; // x9
  IClassBoardSquareModel_c **v100; // x10
  __int64 v101; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x22
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  System_Func_object__bool__o *v106; // x25
  _BOOL4 v107; // w0
  __int64 v108; // x1
  char v109; // w23
  const MethodInfo *v110; // x3
  __int64 v111; // x1
  UILabel_o *cancelBtnLabel; // x20
  UILabel_o *decideBtnLabel; // x20
  const MethodInfo *v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  System_Action_o *v118; // x20

  if ( (byte_4B1973E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, square, isEnableOpen);
    sub_1BCA7E0(&Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v15, v16);
    sub_1BCA7E0(&DataManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_IClassBoardItemModel___, v19, v20);
    sub_1BCA7E0(&System_Func_IClassBoardItemModel__bool__TypeInfo, v21, v22);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v23, v24);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__, v27, v28);
    sub_1BCA7E0(&Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__, v29, v30);
    sub_1BCA7E0(&ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_3547/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_3544/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3549/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3551/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3543/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3548/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_3550/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_3545/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_3546/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/, v49, v50);
    byte_4B1973E = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquare,
    (int64_t)square,
    isEnableOpen,
    (int32_t)decideFunc,
    (System_String_o *)cancelFunc,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  if ( !square )
    goto LABEL_55;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  this->fields.decideFunc = decideFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.decideFunc, (int64_t)decideFunc, v53, v54, v55, v56, v57, v58);
  this->fields.cancelFunc = cancelFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cancelFunc, (int64_t)cancelFunc, v60, v61, v62, v63, v64, v65);
  this->fields.isDecideButtonEnable = isEnableOpen;
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3551/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_55;
  UILabel__set_text(titleLabel, Master_object, 0LL);
  ClassBoardBaseDialog__SetUpEffectDetail((ClassBoardBaseDialog_o *)this, SquareModel_k__BackingField, 0.0, 0.0, 0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_55;
  klass = SquareModel_k__BackingField->klass;
  v69 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v69;
      p_offset += 2;
      if ( !v69 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v72 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  v76 = ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v72, 0LL);
  if ( isEnableOpen )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( v76 )
      {
LABEL_17:
        v78 = &StringLiteral_3546/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_CONTAIN_QP"*/;
        goto LABEL_49;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
      if ( v76 )
        goto LABEL_17;
    }
    v78 = &StringLiteral_3545/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL"*/;
    goto LABEL_49;
  }
  v79 = sub_1BCAA2C(ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_TypeInfo, v73, v74, v75);
  System_Object___ctor((Il2CppObject *)v79, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v80);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v79 )
LABEL_55:
    sub_1BCAA3C(Master_object, v52);
  *(_QWORD *)(v79 + 16) = Master_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 16), (int64_t)Master_object, v81, v82, v83, v84, v85, v86);
  v87 = SquareModel_k__BackingField->klass;
  v88 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v89 = (IClassBoardSquareModel_c **)&v87->_1.interfaceOffsets->offset;
    while ( *(v89 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v88;
      v89 += 2;
      if ( !v88 )
        goto LABEL_25;
    }
    v90 = (__int64)&v87->vtable[*(_DWORD *)v89 + 6].method;
  }
  else
  {
LABEL_25:
    v90 = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v91 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v90)(
                                                               SquareModel_k__BackingField,
                                                               *(_QWORD *)(v90 + 8));
  v95 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_IClassBoardItemModel__bool__TypeInfo, v92, v93, v94);
  System_Func_object__bool____ctor(
    v95,
    (Il2CppObject *)v79,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__0__,
    0LL);
  v96 = System_Linq_Enumerable__Any_object__49415960(
          v91,
          (System_Func_TSource__bool__o *)v95,
          (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  v97 = SquareModel_k__BackingField->klass;
  v98 = v96;
  v99 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v100 = (IClassBoardSquareModel_c **)&v97->_1.interfaceOffsets->offset;
    while ( *(v100 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v99;
      v100 += 2;
      if ( !v99 )
        goto LABEL_33;
    }
    v101 = (__int64)&v97->vtable[*(_DWORD *)v100 + 6].method;
  }
  else
  {
LABEL_33:
    v101 = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v102 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v101)(
                                                                SquareModel_k__BackingField,
                                                                *(_QWORD *)(v101 + 8));
  v106 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_IClassBoardItemModel__bool__TypeInfo, v103, v104, v105);
  System_Func_object__bool____ctor(
    v106,
    (Il2CppObject *)v79,
    Method_ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0__Open_b__1__,
    0LL);
  v107 = System_Linq_Enumerable__Any_object__49415960(
           v102,
           (System_Func_TSource__bool__o *)v106,
           (const MethodInfo_2F20718 *)Method_System_Linq_Enumerable_Any_IClassBoardItemModel___);
  if ( (v76 & v98 & 1) != 0 && v107 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
    v78 = &StringLiteral_3549/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM_AND_QP"*/;
    goto LABEL_49;
  }
  if ( (v76 & ~v98 & v107 & 1) == 0 )
  {
    itemDetailLabel = this->fields.itemDetailLabel;
    v109 = v107 | v76 & v98 ^ 1;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( ((v107 | v76 & (unsigned __int8)v98 ^ 1) & 1) != 0 )
      {
LABEL_46:
        v78 = &StringLiteral_3547/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING"*/;
        goto LABEL_49;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
      if ( (v109 & 1) != 0 )
        goto LABEL_46;
    }
    v78 = &StringLiteral_3550/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_QP"*/;
    goto LABEL_49;
  }
  itemDetailLabel = this->fields.itemDetailLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v108);
  v78 = &StringLiteral_3548/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_ITEM_DETAIL_WARNING_SHORTAGE_ITEM"*/;
LABEL_49:
  Master_object = LocalizationManager__Get((System_String_o *)*v78, 0LL);
  if ( !itemDetailLabel )
    goto LABEL_55;
  UILabel__set_text(itemDetailLabel, Master_object, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetUiPosition(this, v76, isEnableOpen, v110);
  cancelBtnLabel = this->fields.cancelBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v111);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3543/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_CANCEL"*/, 0LL);
  if ( !cancelBtnLabel )
    goto LABEL_55;
  UILabel__set_text(cancelBtnLabel, Master_object, 0LL);
  decideBtnLabel = this->fields.decideBtnLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3544/*"CLASS_BOARD_SQUARE_OPEN_CONFIRM_DIALOG_DECIDE"*/, 0LL);
  if ( !decideBtnLabel )
    goto LABEL_55;
  UILabel__set_text(decideBtnLabel, Master_object, 0LL);
  ClassBoardSquareOpenConfirmDialog__SetDecideButton(this, this->fields.isDecideButtonEnable, v114);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v118 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v115, v116, v117);
  System_Action___ctor(v118, (Il2CppObject *)this, Method_ClassBoardSquareOpenConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v118, 0, 0LL);
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
    sub_1BCAA3C(decideBtn, isEnable);
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
    sub_1BCAA3C(itemQpObj, isContainQp);
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
  __int64 v2; // x2

  if ( (byte_4B19744 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15807/*"Window/CancelBtn"*/, method, v2);
    byte_4B19744 = 1;
  }
  return (System_String_o *)StringLiteral_15807/*"Window/CancelBtn"*/;
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
  if ( (byte_4B19745 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_1BCA7E0(
                                                                          &IClassBoardItemModel_TypeInfo,
                                                                          x,
                                                                          method);
    byte_4B19745 = 1;
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
    p_method = sub_1C1C7C0(x, IClassBoardItemModel_TypeInfo, 2LL);
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
    v14 = sub_1C1C7C0(x, IClassBoardItemModel_TypeInfo, 0LL);
  }
  this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                        x,
                                                                        *(_QWORD *)(v14 + 8));
  if ( !itemMaster )
LABEL_20:
    sub_1BCAA3C(this, x);
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
  if ( (byte_4B19746 & 1) == 0 )
  {
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)sub_1BCA7E0(
                                                                          &IClassBoardItemModel_TypeInfo,
                                                                          x,
                                                                          method);
    byte_4B19746 = 1;
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
    p_method = sub_1C1C7C0(x, IClassBoardItemModel_TypeInfo, 2LL);
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
      v14 = sub_1C1C7C0(x, IClassBoardItemModel_TypeInfo, 0LL);
    }
    this = (ClassBoardSquareOpenConfirmDialog___c__DisplayClass24_0_o *)(*(__int64 (__fastcall **)(IClassBoardItemModel_o *, _QWORD))v14)(
                                                                          x,
                                                                          *(_QWORD *)(v14 + 8));
    if ( itemMaster )
      return !ItemMaster__isQP(itemMaster, (int32_t)this, 0LL);
LABEL_21:
    sub_1BCAA3C(this, x);
  }
  return 0;
}