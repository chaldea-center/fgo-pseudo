void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  ClassBoardModelBuilder_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B19679 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardModelBuilder_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v11, v12);
    byte_4B19679 = 1;
  }
  v13 = (ClassBoardModelBuilder_o *)sub_1BCAA2C(ClassBoardModelBuilder_TypeInfo, method, v2, v3);
  ClassBoardModelBuilder___ctor(v13, 0LL);
  this->fields._builder_k__BackingField = v13;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._builder_k__BackingField,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ClassBoardSquare__TypeInfo,
                                                       v20,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v23;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squareViewList, (int64_t)v23, v24, v25, v26, v27, v28, v29);
  v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ClassBoardLine__TypeInfo,
                                                       v30,
                                                       v31,
                                                       v32);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.lineViewList, (int64_t)v33, v34, v35, v36, v37, v38, v39);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardController__Awake(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController__CheckOpenMissionClearDialogSave(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_object__o *v34; // x21
  ClassBoardUIController_o *v35; // x0
  __int64 v36; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  ClassBoardController___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  System_Func_object__bool__o *_9__42_0; // x21
  Il2CppObject *v48; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  ClassBoardController___c_c *v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x20
  System_Func_object__int__o *_9__42_1; // x21
  Il2CppObject *v63; // x22
  struct ClassBoardController___c_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x20
  ClassBoardUIController_o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Action_o *v76; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v77; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19676 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, squareModel, method);
    sub_1BCA7E0(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v16, v17);
    sub_1BCA7E0(&System_Func_IClassBoardLockModel__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_IClassBoardLockModel__bool__TypeInfo, v20, v21);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v26, v27);
    sub_1BCA7E0(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__, v28, v29);
    sub_1BCA7E0(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__, v30, v31);
    sub_1BCA7E0(&ClassBoardController___c_TypeInfo, v32, v33);
    byte_4B19676 = 1;
  }
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                       squareModel,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v34;
  if ( !squareModel )
    goto LABEL_27;
  klass = squareModel->klass;
  v38 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v41 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v45 = ClassBoardController___c_TypeInfo;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v42);
    v45 = ClassBoardController___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__bool__o *)v45->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45, v42);
      v45 = ClassBoardController___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_IClassBoardLockModel__bool__TypeInfo,
                                                v42,
                                                v43,
                                                v44);
    System_Func_object__bool____ctor(
      _9__42_0,
      v48,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
      (int64_t)_9__42_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = System_Linq_Enumerable__Where_object_(
          v46,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v60 = ClassBoardController___c_TypeInfo;
  v61 = v56;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v57);
    v60 = ClassBoardController___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v60->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60, v57);
      v60 = ClassBoardController___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v60->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_IClassBoardLockModel__int__TypeInfo, v57, v58, v59);
    System_Func_object__int____ctor(
      _9__42_1,
      v63,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      0LL);
    v64 = ClassBoardController___c_TypeInfo->static_fields;
    v64->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v64->__9__42_1, (int64_t)_9__42_1, v65, v66, v67, v68, v69, v70);
  }
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v61,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_object_(
         v71,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v35 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v35 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v35, 1, 0LL);
      v72 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v76 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v73, v74, v75);
      System_Action___ctor(
        v76,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__,
        0LL);
      if ( v72 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v72, v76, 0LL);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1BCAA3C(v35, v36);
  }
LABEL_26:
  v77 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v71,
                                                                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v77, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquare_o *__fastcall ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        const MethodInfo *method)
{
  ClassBoardController_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v15; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x21
  Il2CppObject *v19; // x0

  v6 = this;
  if ( (byte_4B19671 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab, *(_QWORD *)&assetId);
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7, v8);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v9, v10);
    this = (ClassBoardController_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B19671 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_1BCAA3C(this, defaultPrefab);
    klass = resourceCatalog->klass;
    v15 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v15;
        p_offset += 2;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
    }
    v19 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD, _QWORD))p_method)(
                            resourceCatalog,
                            (unsigned int)assetId,
                            *(_QWORD *)(p_method + 8));
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)v6,
                      v19,
                      v6->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
  }
  else
  {
    Object_object = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, defaultPrefab);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object, 0LL, 0LL) )
    return (ClassBoardSquare_o *)Object_object;
  else
    return (ClassBoardSquare_o *)BaseMonoBehaviour__createObject_object_(
                                   (BaseMonoBehaviour_o *)v6,
                                   (Il2CppObject *)defaultPrefab,
                                   v6->fields.boardObjectsParent,
                                   0LL,
                                   (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
}


void __fastcall ClassBoardController__CreateViews(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x20
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  IClassBoardSquareModel_o *v43; // x21
  __int64 v44; // x0
  __int64 v45; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v51; // x8
  __int64 v52; // x9
  IClassBoardSquareModel_c **v53; // x10
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x1
  IClassBoardSquareModel_c *v57; // x8
  ClassBoardSquare_o *v58; // x22
  IClassBoardSquareModel_c *v59; // x1
  __int64 v60; // x9
  IClassBoardSquareModel_c **v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  struct IClassBoardResourceCatalog_o *v65; // x22
  IClassBoardResourceCatalog_c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  IClassBoardResourceCatalog_c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  IClassBoardSquareModel_c *v76; // x8
  __int64 v77; // x9
  IClassBoardSquareModel_c **v78; // x10
  __int64 v79; // x0
  __int64 v80; // x1
  IClassBoardSquareModel_c *v81; // x8
  __int64 v82; // x9
  IClassBoardSquareModel_c **v83; // x10
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  ClassBoardSquare_o *v86; // x0
  __int64 v87; // x1
  Il2CppObject *v88; // x22
  __int64 v89; // x1
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  System_Collections_Generic_List_object__o *squareViewList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x8
  __int64 v101; // x8
  __int64 v102; // x9
  int *v103; // x10
  __int64 v104; // x0
  __int64 *v105; // x20
  __int64 v106; // x8
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x20
  __int64 v112; // x8
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  __int64 v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  __int64 v120; // x0
  __int64 v121; // x1
  struct IClassBoardResourceCatalog_o *v122; // x22
  IClassBoardResourceCatalog_c *v123; // x8
  IClassBoardLineModel_o *v124; // x21
  __int64 v125; // x9
  int32_t *v126; // x10
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  Il2CppObject *Object_object; // x0
  __int64 v131; // x1
  Il2CppObject *v132; // x22
  __int64 v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  System_Collections_Generic_List_object__o *lineViewList; // x0
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x8
  __int64 v145; // x8
  __int64 v146; // x9
  int *v147; // x10
  __int64 v148; // x0

  if ( (byte_4B19670 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, method, v2);
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, v4, v5);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v6, v7);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v24, v25);
    byte_4B19670 = 1;
  }
  v26 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v26 )
    goto LABEL_148;
  v28 = *(__int64 **)(v26 + 24);
  if ( !v28 )
    goto LABEL_148;
  v29 = *v28;
  v30 = *(unsigned __int16 *)(*v28 + 302);
  if ( *(_WORD *)(*v28 + 302) )
  {
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v31 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_9;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_9:
    v32 = sub_1C1C7C0(
            *(_QWORD *)(v26 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL);
  }
  v34 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
  if ( !v34 )
    sub_1BCAA3C(0LL, v33);
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_16;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_16:
      v38 = sub_1C1C7C0(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v34;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v41 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_23;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_23:
      v42 = sub_1C1C7C0(v34, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v43 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
    v44 = sub_1BCA91C(v43, IClassBoardLockModel_TypeInfo);
    if ( v44 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_1BCAA3C(v44, v45);
      klass = resourceCatalog->klass;
      v48 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v48;
          p_offset += 4;
          if ( !v48 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_1C1C7C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v55 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v55 )
        sub_1BCAA3C(0LL, v56);
      if ( !v43 )
        sub_1BCAA3C(v55, v56);
      v57 = v43->klass;
      v58 = *(ClassBoardSquare_o **)(v55 + 32);
      v59 = IClassBoardSquareModel_TypeInfo;
      v60 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
      if ( !*(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
        goto LABEL_67;
      v61 = (IClassBoardSquareModel_c **)&v57->_1.interfaceOffsets->offset;
      while ( *(v61 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v60;
        v61 += 2;
        if ( !v60 )
          goto LABEL_67;
      }
      v62 = (__int64)&v57->vtable[*(_DWORD *)v61 + 10].method;
    }
    else
    {
      if ( !v43 )
        sub_1BCAA3C(0LL, v45);
      v51 = v43->klass;
      v52 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
      {
        v53 = (IClassBoardSquareModel_c **)&v51->_1.interfaceOffsets->offset;
        while ( *(v53 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v52;
          v53 += 2;
          if ( !v52 )
            goto LABEL_37;
        }
        v54 = (__int64)&v51->vtable[*(_DWORD *)v53 + 5].method;
      }
      else
      {
LABEL_37:
        v54 = sub_1C1C7C0(v43, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v63 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v54)(v43, *(_QWORD *)(v54 + 8));
      v65 = this->fields.resourceCatalog;
      if ( (v63 & 1) != 0 )
      {
        if ( !v65 )
          sub_1BCAA3C(v63, v64);
        v66 = v65->klass;
        v67 = *(unsigned __int16 *)(&v65->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v65->klass->_2.bitflags2 + 3) )
        {
          v68 = &v66->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v68 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v67;
            v68 += 4;
            if ( !v67 )
              goto LABEL_54;
          }
          v69 = (__int64)&v66->vtable[*v68].method;
        }
        else
        {
LABEL_54:
          v69 = sub_1C1C7C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v74 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8));
        if ( !v74 )
          sub_1BCAA3C(0LL, v75);
        v76 = v43->klass;
        v58 = *(ClassBoardSquare_o **)(v74 + 40);
        v59 = IClassBoardSquareModel_TypeInfo;
        v77 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
          goto LABEL_67;
        v78 = (IClassBoardSquareModel_c **)&v76->_1.interfaceOffsets->offset;
        while ( *(v78 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v77;
          v78 += 2;
          if ( !v77 )
            goto LABEL_67;
        }
        v62 = (__int64)&v76->vtable[*(_DWORD *)v78 + 10].method;
      }
      else
      {
        if ( !v65 )
          sub_1BCAA3C(v63, v64);
        v70 = v65->klass;
        v71 = *(unsigned __int16 *)(&v65->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v65->klass->_2.bitflags2 + 3) )
        {
          v72 = &v70->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v72 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v71;
            v72 += 4;
            if ( !v71 )
              goto LABEL_60;
          }
          v73 = (__int64)&v70->vtable[*v72].method;
        }
        else
        {
LABEL_60:
          v73 = sub_1C1C7C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v79 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v73)(v65, *(_QWORD *)(v73 + 8));
        if ( !v79 )
          sub_1BCAA3C(0LL, v80);
        v81 = v43->klass;
        v58 = *(ClassBoardSquare_o **)(v79 + 16);
        v59 = IClassBoardSquareModel_TypeInfo;
        v82 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
        {
LABEL_67:
          v62 = sub_1C1C7C0(v43, v59, 10LL);
          goto LABEL_77;
        }
        v83 = (IClassBoardSquareModel_c **)&v81->_1.interfaceOffsets->offset;
        while ( *(v83 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v82;
          v83 += 2;
          if ( !v82 )
            goto LABEL_67;
        }
        v62 = (__int64)&v81->vtable[*(_DWORD *)v83 + 10].method;
      }
    }
LABEL_77:
    v84 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v62)(v43, *(_QWORD *)(v62 + 8));
    v86 = ClassBoardController__CloneSquareObject(this, v58, v84, v85);
    v88 = (Il2CppObject *)v86;
    if ( !v86 )
      sub_1BCAA3C(0LL, v87);
    ClassBoardSquare__Setup(v86, v43, 0LL);
    squareViewList = (System_Collections_Generic_List_object__o *)this->fields.squareViewList;
    if ( !squareViewList )
      sub_1BCAA3C(0LL, v89);
    items = squareViewList->fields._items;
    v98 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++squareViewList->fields._version;
    if ( !items )
      sub_1BCAA3C(squareViewList, v89);
    size = squareViewList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        squareViewList,
        v88,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
    }
    else
    {
      v100 = &items->obj.klass + size;
      squareViewList->fields._size = size + 1;
      v100[4] = (Il2CppClass *)v88;
      sub_1BCA784((PartyOrganizationUtility_o *)(v100 + 4), (int64_t)v88, v90, v91, v92, v93, v94, v95);
    }
  }
  v101 = *(_QWORD *)v34;
  v102 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v103 - 1) != System_IDisposable_TypeInfo )
    {
      --v102;
      v103 += 4;
      if ( !v102 )
        goto LABEL_87;
    }
    v104 = v101 + 16LL * *v103 + 312;
  }
  else
  {
LABEL_87:
    v104 = sub_1C1C7C0(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v104)(v34, *(_QWORD *)(v104 + 8));
  v26 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v26 || (v105 = *(__int64 **)(v26 + 16)) == 0LL )
LABEL_148:
    sub_1BCAA3C(v26, v27);
  v106 = *v105;
  v107 = *(unsigned __int16 *)(*v105 + 302);
  if ( *(_WORD *)(*v105 + 302) )
  {
    v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v108 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v107;
      v108 += 4;
      if ( !v107 )
        goto LABEL_95;
    }
    v109 = v106 + 16LL * *v108 + 312;
  }
  else
  {
LABEL_95:
    v109 = sub_1C1C7C0(
             *(_QWORD *)(v26 + 16),
             System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo,
             0LL);
  }
  v111 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v109)(v105, *(_QWORD *)(v109 + 8));
  if ( !v111 )
    sub_1BCAA3C(0LL, v110);
  while ( 1 )
  {
    v112 = *(_QWORD *)v111;
    v113 = *(unsigned __int16 *)(*(_QWORD *)v111 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v111 + 302LL) )
    {
      v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v114 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v113;
        v114 += 4;
        if ( !v113 )
          goto LABEL_102;
      }
      v115 = v112 + 16LL * *v114 + 312;
    }
    else
    {
LABEL_102:
      v115 = sub_1C1C7C0(v111, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v111, *(_QWORD *)(v115 + 8)) & 1) == 0 )
      break;
    v116 = *(_QWORD *)v111;
    v117 = *(unsigned __int16 *)(*(_QWORD *)v111 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v111 + 302LL) )
    {
      v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v118 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v117;
        v118 += 4;
        if ( !v117 )
          goto LABEL_109;
      }
      v119 = v116 + 16LL * *v118 + 312;
    }
    else
    {
LABEL_109:
      v119 = sub_1C1C7C0(v111, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v120 = (*(__int64 (__fastcall **)(__int64, _QWORD))v119)(v111, *(_QWORD *)(v119 + 8));
    v122 = this->fields.resourceCatalog;
    if ( !v122 )
      sub_1BCAA3C(v120, v121);
    v123 = v122->klass;
    v124 = (IClassBoardLineModel_o *)v120;
    v125 = *(unsigned __int16 *)(&v122->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v122->klass->_2.bitflags2 + 3) )
    {
      v126 = &v123->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v126 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v125;
        v126 += 4;
        if ( !v125 )
          goto LABEL_116;
      }
      v127 = (__int64)&v123->vtable[*v126].method;
    }
    else
    {
LABEL_116:
      v127 = sub_1C1C7C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v128 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v127)(v122, *(_QWORD *)(v127 + 8));
    if ( !v128 )
      sub_1BCAA3C(0LL, v129);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v128 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v132 = Object_object;
    if ( !Object_object )
      sub_1BCAA3C(0LL, v131);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v124, 0LL);
    lineViewList = (System_Collections_Generic_List_object__o *)this->fields.lineViewList;
    if ( !lineViewList )
      sub_1BCAA3C(0LL, v133);
    v141 = lineViewList->fields._items;
    v142 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++lineViewList->fields._version;
    if ( !v141 )
      sub_1BCAA3C(lineViewList, v133);
    v143 = lineViewList->fields._size;
    if ( (unsigned int)v143 >= v141->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        lineViewList,
        v132,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
    }
    else
    {
      v144 = &v141->obj.klass + v143;
      lineViewList->fields._size = v143 + 1;
      v144[4] = (Il2CppClass *)v132;
      sub_1BCA784((PartyOrganizationUtility_o *)(v144 + 4), (int64_t)v132, v134, v135, v136, v137, v138, v139);
    }
  }
  v145 = *(_QWORD *)v111;
  v146 = *(unsigned __int16 *)(*(_QWORD *)v111 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v111 + 302LL) )
  {
    v147 = (int *)(*(_QWORD *)(v145 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v147 - 1) != System_IDisposable_TypeInfo )
    {
      --v146;
      v147 += 4;
      if ( !v146 )
        goto LABEL_129;
    }
    v148 = v145 + 16LL * *v147 + 312;
  }
  else
  {
LABEL_129:
    v148 = sub_1C1C7C0(v111, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v148)(v111, *(_QWORD *)(v148 + 8));
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  UnityEngine_Object_o *v11; // x20
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  int32_t baseId; // w20
  CommonUI_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x22

  if ( (byte_4B1966E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardController__OnClickEffectList_b__32_0__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B1966E = 1;
  }
  v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                  this,
                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( !UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( CommonUI__IsOpenClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL) )
        return;
      Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                   this,
                                   this->klass->vtable._5_set_classBoardUIController.methodPtr);
      if ( Instance )
      {
        ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0LL);
        v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v16 = (CommonUI_o *)v14;
        v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v16 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v16, 0, baseId, 1, v20, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_1BCAA3C(Instance, v13);
  }
}


void __fastcall ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  ClassBoardUIController_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B1966D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardController__OnClickHelp_b__31_0__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1966D = 1;
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( !UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    v10 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v10 )
      sub_1BCAA3C(0LL, v11);
    ClassBoardUIController__SetCameraWorkBlock(v10, 1, 0LL);
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__31_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v15, 0LL);
  }
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v8; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B1966F & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v4, v5);
    byte_4B1966F = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_37DF038 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    v8 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v8;
        p_offset += 2;
        if ( !v8 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C1C7C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
      resourceCatalog,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
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
  __int64 v39; // x20
  Il2CppObject *Instance; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  ClassBoardController___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v55; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  ClassBoardController___c_c *v67; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x21
  System_Func_object__int__o *_9__41_1; // x22
  Il2CppObject *v70; // x23
  struct ClassBoardController___c_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x21
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Object_array *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  ClassBoardController___c_c *v87; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x21
  System_Func_object__object__o *_9__41_2; // x22
  Il2CppObject *v90; // x23
  struct ClassBoardController___c_StaticFields *v91; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v99; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v101; // x21

  if ( (byte_4B19675 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v17, v18);
    sub_1BCA7E0(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Func_ClassBoardLock__int__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_ClassBoardLock__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__, v27, v28);
    sub_1BCA7E0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__, v29, v30);
    sub_1BCA7E0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__, v31, v32);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__, v33, v34);
    sub_1BCA7E0(&ClassBoardController___c__DisplayClass41_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&ClassBoardController___c_TypeInfo, v37, v38);
    byte_4B19675 = 1;
  }
  v39 = sub_1BCAA2C(ClassBoardController___c__DisplayClass41_0_TypeInfo, method, v2, v3);
  ClassBoardController___c__DisplayClass41_0___ctor((ClassBoardController___c__DisplayClass41_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_29;
  *(_QWORD *)(v39 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 24), (int64_t)this, v42, v43, v44, v45, v46, v47);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                               this,
                               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_29;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0LL);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                               this,
                               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_29;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v48 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.squareViewList,
          (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v52 = ClassBoardController___c_TypeInfo;
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v49);
    v52 = ClassBoardController___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v52->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52, v49);
      v52 = ClassBoardController___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ClassBoardLock__bool__TypeInfo, v49, v50, v51);
    System_Func_object__bool____ctor(
      _9__41_0,
      v55,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
      (int64_t)_9__41_0,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
  }
  v63 = System_Linq_Enumerable__Where_object_(
          v53,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v67 = ClassBoardController___c_TypeInfo;
  v68 = v63;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v64);
    v67 = ClassBoardController___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__int__o *)v67->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67, v64);
      v67 = ClassBoardController___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v67->static_fields->__9;
    _9__41_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_ClassBoardLock__int__TypeInfo, v64, v65, v66);
    System_Func_object__int____ctor(
      _9__41_1,
      v70,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      0LL);
    v71 = ClassBoardController___c_TypeInfo->static_fields;
    v71->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v71->__9__41_1, (int64_t)_9__41_1, v72, v73, v74, v75, v76, v77);
  }
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v68,
                                                               (System_Func_TSource__TKey__o *)_9__41_1,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v39 + 16) = 0;
  v79 = v78;
  if ( System_Linq_Enumerable__Any_object_(
         v78,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v39 + 16) = 1;
    v83 = System_Linq_Enumerable__ToArray_object_(
            v79,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v87 = ClassBoardController___c_TypeInfo;
    v88 = (System_Collections_Generic_IEnumerable_TSource__o *)v83;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v84);
      v87 = ClassBoardController___c_TypeInfo;
    }
    _9__41_2 = (System_Func_object__object__o *)v87->static_fields->__9__41_2;
    if ( !_9__41_2 )
    {
      if ( !v87->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v87, v84);
        v87 = ClassBoardController___c_TypeInfo;
      }
      v90 = (Il2CppObject *)v87->static_fields->__9;
      _9__41_2 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                    System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo,
                                                    v84,
                                                    v85,
                                                    v86);
      System_Func_object__object____ctor(
        _9__41_2,
        v90,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        0LL);
      v91 = ClassBoardController___c_TypeInfo->static_fields;
      v91->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v91->__9__41_2, (int64_t)_9__41_2, v92, v93, v94, v95, v96, v97);
    }
    v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v88,
                                                                 (System_Func_TSource__TResult__o *)_9__41_2,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v99 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v98,
                                                                                      (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v99, 0LL);
  }
  effectController = this->fields.effectController;
  v101 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v80, v81, v82);
  System_Action___ctor(
    v101,
    (Il2CppObject *)v39,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_29:
    sub_1BCAA3C(Instance, v41);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v101, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  ClassBoardUIController_o *transform; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  ClassBoardEffectController_o *effectController; // x22
  float v27; // s0
  float v28; // s1
  float v29; // s2
  float v30; // s8
  float v31; // s9
  float v32; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19677 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, square, callback);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__, v7, v8);
    sub_1BCA7E0(&ClassBoardController___c__DisplayClass43_0_TypeInfo, v9, v10);
    byte_4B19677 = 1;
  }
  v11 = sub_1BCAA2C(ClassBoardController___c__DisplayClass43_0_TypeInfo, square, callback, method);
  ClassBoardController___c__DisplayClass43_0___ctor((ClassBoardController___c__DisplayClass43_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  transform = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !transform )
    goto LABEL_11;
  ClassBoardUIController__TouchDisable(transform, 0LL);
  transform = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !transform )
    goto LABEL_11;
  ClassBoardUIController__SetCameraWorkBlock(transform, 1, 0LL);
  if ( !square )
    goto LABEL_11;
  effectController = this->fields.effectController;
  transform = (ClassBoardUIController_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)square, 0LL);
  if ( !transform )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (ClassBoardUIController_o *)this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v30 = v27;
  v31 = v28;
  v32 = v29;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v11,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_1BCAA3C(transform, v13);
  v41.fields.z = v32 * z;
  v41.fields.y = v31 * y;
  v41.fields.x = v30 * x;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v41, v39, 0LL);
}


void __fastcall ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  ClassBoardEffectController_o *effectController; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x22

  if ( (byte_4B19674 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, square, endAct);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__, v9, v10);
    sub_1BCA7E0(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v11, v12);
    byte_4B19674 = 1;
  }
  v13 = sub_1BCAA2C(ClassBoardController___c__DisplayClass40_0_TypeInfo, square, endAct, method);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_10;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endAct;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)endAct, v22, v23, v24, v25, v26, v27);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                               this,
                               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_10;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0LL);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                               this,
                               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_10;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList((ClassBoardUIController_o *)Instance, 0LL),
        effectController = this->fields.effectController,
        v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31),
        System_Action___ctor(
          v32,
          (Il2CppObject *)v13,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_10:
    sub_1BCAA3C(Instance, v15);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v32, 0LL);
}


void __fastcall ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  UnityEngine_Object_o *v27; // x20
  UnityEngine_Component_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ClassBoardController___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_T__o *v37; // x20
  System_Action_object__o *_9__29_0; // x21
  Il2CppObject *v39; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v49; // w9
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  ClassBoardController___c_c *v54; // x8
  System_Collections_Generic_IEnumerable_T__o *v55; // x20
  System_Action_object__o *_9__29_1; // x21
  Il2CppObject *v57; // x22
  struct ClassBoardController___c_StaticFields *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int64_t v71; // x2
  int v72; // w9
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7

  if ( (byte_4B1966B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ClassBoardSquare__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_ClassBoardLine__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v6, v7);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v8, v9);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_ClassBoardLine___, v10, v11);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_ClassBoardSquare___, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_ClassBoardController___c__Release_b__29_0__, v20, v21);
    sub_1BCA7E0(&Method_ClassBoardController___c__Release_b__29_1__, v22, v23);
    sub_1BCA7E0(&ClassBoardController___c_TypeInfo, v24, v25);
    byte_4B1966B = 1;
  }
  v27 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                  this,
                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    v28 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v28 )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  }
  v32 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v36 = ClassBoardController___c_TypeInfo;
  v37 = v32;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v33);
    v36 = ClassBoardController___c_TypeInfo;
  }
  _9__29_0 = (System_Action_object__o *)v36->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36, v33);
      v36 = ClassBoardController___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__29_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ClassBoardSquare__TypeInfo, v33, v34, v35);
    System_Action_object____ctor(_9__29_0, v39, Method_ClassBoardController___c__Release_b__29_0__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
      (int64_t)_9__29_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  BasicHelper__ForEach_object_(
    v37,
    (System_Action_T__o *)_9__29_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_30;
  size = squareViewList->fields._size;
  v49 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v49;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0LL);
  v50 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v54 = ClassBoardController___c_TypeInfo;
  v55 = v50;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v51);
    v54 = ClassBoardController___c_TypeInfo;
  }
  _9__29_1 = (System_Action_object__o *)v54->static_fields->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54, v51);
      v54 = ClassBoardController___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v54->static_fields->__9;
    _9__29_1 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ClassBoardLine__TypeInfo, v51, v52, v53);
    System_Action_object____ctor(_9__29_1, v57, Method_ClassBoardController___c__Release_b__29_1__, 0LL);
    v58 = ClassBoardController___c_TypeInfo->static_fields;
    v58->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v58->__9__29_1, (int64_t)_9__29_1, v59, v60, v61, v62, v63, v64);
  }
  BasicHelper__ForEach_object_(
    v55,
    (System_Action_T__o *)_9__29_1,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_30;
  v71 = (unsigned int)lineViewList->fields._size;
  v72 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v72;
  if ( (int)v71 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v71, 0LL);
  this->fields.effectController = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectController, 0LL, v71, v65, v66, v67, v68, v69);
  this->fields.background = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.background, 0LL, v73, v74, v75, v76, v77, v78);
  v28 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                     this,
                                     this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v28 )
LABEL_30:
    sub_1BCAA3C(v28, v29);
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v28, 0LL);
}


void __fastcall ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1966C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, action, method);
    byte_4B1966C = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    v7 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
           this,
           this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v7 )
      sub_1BCAA3C(0LL, v8);
    *(_QWORD *)(v7 + 88) = action;
    sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 88), (int64_t)action, v9, v10, v11, v12, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__Setup(
        ClassBoardController_o *this,
        IClassBoardResourceCatalog_o *setResourceCatalog,
        ClassBoardBackground_o *classBoardBackground,
        int32_t baseId,
        int32_t iconId,
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v43; // x2
  UnityEngine_Texture_o *targetTexture; // x23
  __int64 v45; // x1
  const MethodInfo_36C2D28 *v46; // x2
  MapCamera_o *v47; // x23
  __int64 v48; // x1
  BalanceConfig_c *v49; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Action_o *v55; // x23
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x1
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  Il2CppObject *current; // x22
  System_Action_object__o *v69; // x23
  __int64 v70; // x0
  __int64 v71; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v74; // x23
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  ClassBoardEffectController_o *v78; // x24
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v86; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v89; // 0:x3.8
  System_Nullable_Vector3__o v90; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1966A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ClassBoardSquare__TypeInfo, setResourceCatalog, classBoardBackground);
    sub_1BCA7E0(&System_Action_TypeInfo, v13, v14);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_ClassBoardController_ShowBoard__, v17, v18);
    sub_1BCA7E0(&ClassBoardEffectController_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v27, v28);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v29, v30);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v31, v32);
    sub_1BCA7E0(&StringLiteral_12984/*"Sony SO-41B"*/, v33, v34);
    byte_4B1966A = 1;
  }
  memset(&v87, 0, sizeof(v87));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.resourceCatalog,
    (int64_t)setResourceCatalog,
    (int64_t)classBoardBackground,
    baseId,
    *(System_String_o **)&iconId,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.background = classBoardBackground;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.background,
    (int64_t)classBoardBackground,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_27;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_27;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v43);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.earthAccessoriesObject;
  if ( !mapCamera )
    goto LABEL_27;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapCamera, 1, 0LL);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.currentCamera;
  if ( !mapCamera )
    goto LABEL_27;
  targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)mapCamera, 0LL);
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_maxTextureSize(0LL);
  if ( (int)mapCamera <= 4096 )
    goto LABEL_10;
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  if ( !mapCamera )
    goto LABEL_27;
  mapCamera = (MapCamera_o *)System_String__Equals_62409536(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_12984/*"Sony SO-41B"*/,
                               0LL);
  if ( ((unsigned __int8)mapCamera & 1) != 0 )
  {
LABEL_10:
    if ( !targetTexture )
      goto LABEL_27;
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, Il2CppMethodPointer))targetTexture->klass->vtable._5_set_width.method)(
      targetTexture,
      4096LL,
      targetTexture->klass->vtable._6_get_height.methodPtr);
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, Il2CppMethodPointer))targetTexture->klass->vtable._7_set_height.method)(
      targetTexture,
      2367LL,
      targetTexture->klass->vtable._8_set_dimension.methodPtr);
  }
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_27;
  MapCamera__SetMapTexture(mapCamera, targetTexture, 2491, 1440, 0LL);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_27;
  MapCamera__SetEnable(mapCamera, 1, 0LL);
  v47 = this->fields.mapCamera;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v45, v46);
    byte_4B109C1 = 1;
  }
  *(_QWORD *)&v90.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v90.fields.hasValue = &v86;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v86.fields.hasValue = 0LL;
  *(_QWORD *)&v86.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v90, zeroVector, v46);
  v49 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v48);
    v49 = BalanceConfig_TypeInfo;
  }
  static_fields = v49->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  if ( !v47 )
    goto LABEL_27;
  v89 = size;
  MapCamera__StartAutoWork(v47, 0.0, v86, v89, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v55 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v52, v53, v54);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v55;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&classBoardBackground->fields.showBoardCallback,
    (int64_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v62);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v63);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v64),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_27:
    sub_1BCAA3C(mapCamera, v41);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    (System_Collections_Generic_List_object__o *)mapCamera,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v87.fields._current;
    v69 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ClassBoardSquare__TypeInfo, v65, v66, v67);
    System_Action_object____ctor(
      v69,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      0LL);
    if ( !current )
      sub_1BCAA3C(v70, v71);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v69, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v74 = this->fields.mapCamera;
  v78 = (ClassBoardEffectController_o *)sub_1BCAA2C(ClassBoardEffectController_TypeInfo, v75, v76, v77);
  ClassBoardEffectController___ctor(
    v78,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v74,
    classBoardBackground,
    0LL);
  this->fields.effectController = v78;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectController, (int64_t)v78, v79, v80, v81, v82, v83, v84);
  ((void (__fastcall *)(ClassBoardController_o *, void *))this->klass->vtable._9_PlayClassBoardStartEffect.method)(
    this,
    this->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__SetupClassBoardUIController(
        ClassBoardController_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardController_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v28; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v32; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_o *v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  Il2CppObject *v54; // x0
  System_String_o *v55; // x20
  ClassBoardUIController_o *v56; // x21
  ClassBoardUIController_o *v57; // x20
  __int64 v58; // x1
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  __int64 v60; // x1
  Il2CppClass *v61; // x20
  ClassBoardController_o *v62; // x19
  int32_t v63; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4B19672 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&baseId, method);
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardController_OnClickEffectList__, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardController_OnClickHelp__, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v14, v15);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v16, v17);
    sub_1BCA7E0(&int_TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_20735/*"img_txt_classscore_{0}"*/, v22, v23);
    this = (ClassBoardController_o *)sub_1BCA7E0(&StringLiteral_3524/*"CLASS_BOARD_HEADER_MESSAGE"*/, v24, v25);
    byte_4B19672 = 1;
  }
  entity = 0LL;
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_28;
  klass = resourceCatalog->klass;
  v28 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                     resourceCatalog,
                                     *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_28;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v3,
                    (Il2CppObject *)this->fields.resourceCatalog,
                    v3->fields.uiRoot,
                    0LL,
                    (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, Il2CppMethodPointer))v3->klass->vtable._5_set_classBoardUIController.method)(
    v3,
    Object_object,
    v3->klass->vtable._6_get_builder.methodPtr);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                     v3,
                                     v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !this )
    goto LABEL_28;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0LL);
  v32 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v33, v34, v35);
  System_Action___ctor(v36, (Il2CppObject *)v3, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v32 )
    goto LABEL_28;
  *(_QWORD *)(v32 + 96) = v36;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 96), (int64_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v47 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
  System_Action___ctor(v47, (Il2CppObject *)v3, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v43 )
    goto LABEL_28;
  *(_QWORD *)(v43 + 104) = v47;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 104), (int64_t)v47, v48, v49, v50, v51, v52, v53);
  v63 = v3->fields.baseId;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
  v55 = System_String__Format((System_String_o *)StringLiteral_20735/*"img_txt_classscore_{0}"*/, v54, 0LL);
  v56 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v56 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderTitle(v56, (AtlasManagerUnit_o *)this, v55, 0LL);
  v57 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v58);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3524/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v57 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderMessage(v57, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v60);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_28;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v3->fields.baseId,
                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_28;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0LL) )
    return;
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                     v3,
                                     v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !entity
    || (v61 = entity[4].klass,
        v62 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v62) )
  {
LABEL_28:
    sub_1BCAA3C(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v62,
    (System_Int32_array *)v61,
    (AtlasManagerUnit_o *)this,
    0LL);
}


void __fastcall ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  ClassBoardSquare_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ClassBoardSquare_o **v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x9
  IClassBoardSquareModel_c **v33; // x10
  __int64 v34; // x0
  ClassBoardSquare_o *v35; // x8
  __int64 methodPtr_low; // x11
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v39; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardSquare_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Action_o *v46; // x22
  const MethodInfo *v47; // x3

  if ( (byte_4B19673 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, square, method);
    sub_1BCA7E0(&ClassBoardLock_TypeInfo, v6, v7);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__, v10, v11);
    sub_1BCA7E0(&ClassBoardController___c__DisplayClass39_0_TypeInfo, v12, v13);
    byte_4B19673 = 1;
  }
  v14 = sub_1BCAA2C(ClassBoardController___c__DisplayClass39_0_TypeInfo, square, method, v3);
  ClassBoardController___c__DisplayClass39_0___ctor((ClassBoardController___c__DisplayClass39_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_29;
  *(_QWORD *)(v14 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 32) = square;
  v23 = (ClassBoardSquare_o **)(v14 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 32), (int64_t)square, v24, v25, v26, v27, v28, v29);
  if ( !*(_QWORD *)(v14 + 32) )
    goto LABEL_29;
  v30 = *(__int64 **)(*(_QWORD *)(v14 + 32) + 176LL);
  if ( !v30 )
    goto LABEL_29;
  v31 = *v30;
  v32 = *(unsigned __int16 *)(*v30 + 302);
  if ( *(_WORD *)(*v30 + 302) )
  {
    v33 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *(v33 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v32;
      v33 += 2;
      if ( !v32 )
        goto LABEL_10;
    }
    v34 = v31 + 16LL * (*(_DWORD *)v33 + 13) + 312;
  }
  else
  {
LABEL_10:
    v34 = sub_1C1C7C0(v30, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v15 = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v34)(v30, 0LL, *(_QWORD *)(v34 + 8));
  *(_DWORD *)(v14 + 16) = (_DWORD)v15;
  if ( ((unsigned __int8)v15 & 1) != 0 )
  {
    v35 = *v23;
    if ( *v23 )
    {
      methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v35->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ClassBoardLock_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      {
        return;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v35 = *v23;
  }
  if ( !v35 )
    goto LABEL_29;
LABEL_19:
  SquareModel_k__BackingField = v35->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_29;
  klass = SquareModel_k__BackingField->klass;
  v39 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v39;
      p_offset += 2;
      if ( !v39 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_24:
    p_method = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          SquareModel_k__BackingField,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v15 = *v23;
    if ( *v23 )
    {
      ClassBoardSquare__SetSelectedEffectActive(v15, 1, 0LL);
      v42 = *(ClassBoardSquare_o **)(v14 + 32);
      v46 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v43, v44, v45);
      System_Action___ctor(
        v46,
        (Il2CppObject *)v14,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v42, v46, v47);
      return;
    }
LABEL_29:
    sub_1BCAA3C(v15, v16);
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19678 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo, method, v2);
    byte_4B19678 = 1;
  }
  v5 = sub_1BCAA2C(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo, method, v2, v3);
  ClassBoardController__ShowBoardCoroutine_d__45___ctor((ClassBoardController__ShowBoardCoroutine_d__45_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall ClassBoardController__Update(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___CheckOpenMissionClearDialogSave_b__42_2(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1BCAA3C(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1967A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1967A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickHelp_b__31_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1BCAA3C(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___ShowBoardCoroutine_b__45_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1BCAA3C(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *__fastcall ClassBoardController__get_LineViewList(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)this->fields.lineViewList;
}


MapCamera_o *__fastcall ClassBoardController__get_MapCamera(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.mapCamera;
}


System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *__fastcall ClassBoardController__get_SquareViewList(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)this->fields.squareViewList;
}


ClassBoardModelBuilder_o *__fastcall ClassBoardController__get_builder(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._builder_k__BackingField;
}


ClassBoardUIController_o *__fastcall ClassBoardController__get_classBoardUIController(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._classBoardUIController_k__BackingField;
}


void __fastcall ClassBoardController__set_classBoardUIController(
        ClassBoardController_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._classBoardUIController_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardController__ShowBoardCoroutine_d__45___ctor(
        ClassBoardController__ShowBoardCoroutine_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardController__ShowBoardCoroutine_d__45__MoveNext(
        ClassBoardController__ShowBoardCoroutine_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardController__ShowBoardCoroutine_d__45_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  ClassBoardController__ShowBoardCoroutine_d__45_o **_4__this; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  PartyOrganizationUtility_o *p__2__current; // x20
  bool result; // w0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x20
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v3 = this;
  if ( (byte_4B1968B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v18, v19);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)sub_1BCA7E0(
                                                                 &Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__,
                                                                 v20,
                                                                 v21);
    byte_4B1968B = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v39, 0, sizeof(v39));
  if ( v3->fields.__1__state < 2u )
  {
    _4__this = (ClassBoardController__ShowBoardCoroutine_d__45_o **)v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = _4__this[5];
    if ( !this )
      goto LABEL_25;
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_25;
    if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
    {
      v3->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(p__2__current, 0LL, v23, v24, v25, v26, v27, v28);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    this = _4__this[13];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v38;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          ((void (*)(void))i.fields._current->klass->vtable[7].method)() )
    {
      if ( !i.fields._current )
        sub_1BCAA3C(0LL, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = _4__this[14];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v39,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v39,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v39.fields._current )
        sub_1BCAA3C(0LL, v32);
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v39.fields._current, v32);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v39,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)(*(__int64 (__fastcall **)(ClassBoardController__ShowBoardCoroutine_d__45_o **, Il2CppObject *))&(*_4__this)[9].fields.__1__state)(
                                                                 _4__this,
                                                                 (*_4__this)[9].fields.__2__current);
    if ( !this )
LABEL_25:
      sub_1BCAA3C(this, method);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v33);
    v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
    System_Action___ctor(v37, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
    EventTutorialMaster__CheckTutorial(0, 82, v37, 0, 0, 0, 0, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardController__ShowBoardCoroutine_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ShowBoardCoroutine_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardController__ShowBoardCoroutine_d__45__System_Collections_IEnumerator_Reset(
        ClassBoardController__ShowBoardCoroutine_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall ClassBoardController__ShowBoardCoroutine_d__45__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ShowBoardCoroutine_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardController__ShowBoardCoroutine_d__45__System_IDisposable_Dispose(
        ClassBoardController__ShowBoardCoroutine_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1967B & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardController___c_TypeInfo, v1, v2);
    byte_4B1967B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ClassBoardController___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardController___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ClassBoardController___c___ctor(ClassBoardController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__42_0(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  IClassBoardLockModel_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v10; // w1
  const MethodInfo *v11; // x2
  IClassBoardLockModel_c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  IClassBoardLockModel_c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  IClassBoardLockModel_c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  char v24; // w8
  __int64 v26; // [xsp+0h] [xbp-30h] BYREF
  int v27; // [xsp+8h] [xbp-28h]
  ClassBoardCondData_o v28; // 0:x0.12

  if ( (byte_4B19680 & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, x, method);
    this = (ClassBoardController___c_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v4, v5);
    byte_4B19680 = 1;
  }
  v27 = 0;
  v26 = 0LL;
  if ( !x )
    sub_1BCAA3C(this, x);
  klass = x->klass;
  v7 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v26 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v27 = v10;
  *(_QWORD *)&v28.fields.Type = &v26;
  v28.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v28, v11) )
    goto LABEL_30;
  v12 = x->klass;
  v13 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v14 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_15;
    }
    v15 = (__int64)&v12->vtable[*v14 + 13].method;
  }
  else
  {
LABEL_15:
    v15 = sub_1C1C7C0(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v15)(x, 0LL, *(_QWORD *)(v15 + 8)) & 2) != 0 )
    goto LABEL_30;
  v16 = x->klass;
  v17 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v18 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_22;
    }
    v19 = (__int64)&v16->vtable[*v18 + 13].method;
  }
  else
  {
LABEL_22:
    v19 = sub_1C1C7C0(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v19)(x, 0LL, *(_QWORD *)(v19 + 8)) & 4) != 0 )
  {
LABEL_30:
    v24 = 0;
  }
  else
  {
    v20 = x->klass;
    v21 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v22 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_29;
      }
      v23 = (__int64)&v20->vtable[*v22 + 1].method;
    }
    else
    {
LABEL_29:
      v23 = sub_1C1C7C0(x, IClassBoardLockModel_TypeInfo, 1LL);
    }
    v24 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v23)(x, *(_QWORD *)(v23 + 8)) ^ 1;
  }
  return v24 & 1;
}


int32_t __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__42_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B19681 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, x, method);
    byte_4B19681 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


bool __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v7; // x20
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  int v11; // w1
  const MethodInfo *v12; // x2
  ClassBoardController___c_c *v13; // x8
  ClassBoardController___c_o *v14; // x20
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  ClassBoardController___c_c *v18; // x8
  ClassBoardController___c_o *v19; // x20
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  ClassBoardController___c_c *v23; // x8
  ClassBoardController___c_o *v24; // x19
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  char v28; // w8
  __int64 v30; // [xsp+0h] [xbp-40h] BYREF
  int v31; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v32; // 0:x0.12

  if ( (byte_4B1967E & 1) == 0 )
  {
    sub_1BCA7E0(&IClassBoardLockModel_TypeInfo, x, method);
    this = (ClassBoardController___c_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v4, v5);
    byte_4B1967E = 1;
  }
  v31 = 0;
  v30 = 0LL;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v7 = this;
  v8 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_9;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v10 = sub_1C1C7C0(this, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  v31 = v11;
  *(_QWORD *)&v32.fields.Type = &v30;
  v32.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v32, v12) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v13 = this->klass;
  v14 = this;
  v15 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_17;
    }
    v17 = (__int64)(&v13[1]._1.methods + 2 * *v16);
  }
  else
  {
LABEL_17:
    v17 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v17)(v14, 0LL, *(_QWORD *)(v17 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v18 = this->klass;
  v19 = this;
  v20 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_25;
    }
    v22 = (__int64)(&v18[1]._1.methods + 2 * *v21);
  }
  else
  {
LABEL_25:
    v22 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v22)(v19, 0LL, *(_QWORD *)(v22 + 8)) & 4) != 0 )
  {
LABEL_34:
    v28 = 0;
    return v28 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_38:
    sub_1BCAA3C(this, x);
  v23 = this->klass;
  v24 = this;
  v25 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v26 = &v23->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v26 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_33;
    }
    v27 = (__int64)(&v23->vtable._1_Finalize.method + 2 * *v26);
  }
  else
  {
LABEL_33:
    v27 = sub_1C1C7C0(this, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v28 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8)) ^ 1;
  return v28 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4B1967F & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, x, method);
    byte_4B1967F = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_1BCAA3C(this, x);
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v8 = sub_1C1C7C0(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1967C & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B1967C = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B1967D & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B1967D = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___SetupSquareOnClickListener_b__39_4(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c___SetupSquareOnClickListener_b__39_6(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c__DisplayClass39_0___ctor(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__0(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardController___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t acquireFlag; // w8
  struct ClassBoardSquare_o *v43; // x8
  __int64 methodPtr_low; // x11
  struct ClassBoardSquare_o *v45; // x22
  BaseMonoBehaviour_o *_4__this; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  System_Threading_CancellationTokenSource_c *klass; // x8
  __int64 v49; // x9
  int *p_offset; // x10
  __int64 v51; // x0
  BaseMonoBehaviour_o *v52; // x20
  struct System_Threading_CancellationTokenSource_o *v53; // x21
  System_Threading_CancellationTokenSource_c *v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  struct ClassBoardController_o *v58; // x8
  ClassBoardController___c__DisplayClass39_0_o *v59; // x20
  const MethodInfo *v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  const MethodInfo *v63; // x3
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  BaseMonoBehaviour_o *v72; // x20
  struct System_Threading_CancellationTokenSource_o *v73; // x21
  System_Threading_CancellationTokenSource_c *v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  struct ClassBoardController_o *v78; // x8
  ClassBoardController___c__DisplayClass39_0_o *v79; // x20
  const MethodInfo *v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  const MethodInfo *v83; // x3
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v85; // x21
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  BaseMonoBehaviour_o *v92; // x20
  struct System_Threading_CancellationTokenSource_o *v93; // x21
  System_Threading_CancellationTokenSource_c *v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  struct ClassBoardController_o *v98; // x8
  ClassBoardController___c__DisplayClass39_0_o *v99; // x20
  const MethodInfo *v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  const MethodInfo *v104; // x4
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v106; // x21
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  BaseMonoBehaviour_o *v113; // x20
  struct System_Threading_CancellationTokenSource_o *v114; // x21
  System_Threading_CancellationTokenSource_c *v115; // x8
  __int64 v116; // x9
  int *v117; // x10
  __int64 v118; // x0
  struct ClassBoardController_o *v119; // x8
  ClassBoardController___c__DisplayClass39_0_o *v120; // x20
  const MethodInfo *v121; // x2
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  const MethodInfo *v125; // x5
  ClassBoardSquare_o *v126; // x21
  ClassBoardController___c_c *v127; // x0
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v129; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  System_Action_o *_9__5; // x24
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  ClassBoardLockOpenConfirmDialog_o *v144; // x0
  ClassBoardSquare_o *v145; // x1
  bool v146; // w2
  struct ClassBoardController_o *v147; // x8
  ClassBoardController___c__DisplayClass39_0_o *v148; // x20
  const MethodInfo *v149; // x2
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  const MethodInfo *v153; // x5
  ClassBoardSquare_o *v154; // x21
  ClassBoardController___c_c *v155; // x0
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v157; // x23
  struct ClassBoardController___c_StaticFields *v158; // x0
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  System_Action_o *_9__7; // x24
  int64_t v166; // x2
  int32_t v167; // w3
  System_String_o *v168; // x4
  BattleSetupInfo_o *v169; // x5
  FollowerInfo_o *v170; // x6
  PartyListViewItem_o *v171; // x7
  ClassBoardSquareOpenConfirmDialog_o *v172; // x0
  ClassBoardSquare_o *v173; // x1
  bool v174; // w2
  BaseMonoBehaviour_o *v175; // x20
  struct System_Threading_CancellationTokenSource_o *v176; // x21
  System_Threading_CancellationTokenSource_c *v177; // x8
  __int64 v178; // x9
  int *v179; // x10
  __int64 v180; // x0
  struct ClassBoardController_o *v181; // x8
  ClassBoardController___c__DisplayClass39_0_o *v182; // x20
  const MethodInfo *v183; // x2
  __int64 v184; // x1
  __int64 v185; // x2
  __int64 v186; // x3
  ClassBoardSquare_o *v187; // x21
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  ClassBoardController___c__DisplayClass39_0_o *v200; // x20
  const MethodInfo *v201; // x2
  __int64 v202; // x1
  __int64 v203; // x2
  __int64 v204; // x3
  ClassBoardSquare_o *v205; // x21
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7

  v3 = this;
  if ( (byte_4B19684 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v4, v5);
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v6, v7);
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v8, v9);
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v10, v11);
    sub_1BCA7E0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v12, v13);
    sub_1BCA7E0(&ClassBoardLock_TypeInfo, v14, v15);
    sub_1BCA7E0(&IClassBoardResourceCatalog_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, v18, v19);
    sub_1BCA7E0(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, v20, v21);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__, v22, v23);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__, v24, v25);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__, v26, v27);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__, v28, v29);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__, v30, v31);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__, v32, v33);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__, v34, v35);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__, v36, v37);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__, v38, v39);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BCA7E0(&ClassBoardController___c_TypeInfo, v40, v41);
    byte_4B19684 = 1;
  }
  acquireFlag = v3->fields.acquireFlag;
  if ( (acquireFlag & 1) != 0 )
  {
    _4__this = (BaseMonoBehaviour_o *)v3->fields.__4__this;
    if ( !_4__this )
      goto LABEL_136;
    m_CancellationTokenSource = _4__this[2].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_136;
    klass = m_CancellationTokenSource->klass;
    v49 = *(unsigned __int16 *)(&m_CancellationTokenSource->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&m_CancellationTokenSource->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v49;
        p_offset += 4;
        if ( !v49 )
          goto LABEL_17;
      }
      v51 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_17:
      v51 = sub_1C1C7C0(_4__this[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v51)(
                                                             m_CancellationTokenSource,
                                                             *(_QWORD *)(v51 + 8));
    if ( !this )
      goto LABEL_136;
    v58 = v3->fields.__4__this;
    if ( !v58 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             _4__this,
                                                             (Il2CppObject *)this->fields.__9__11,
                                                             v58->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    if ( !this )
      goto LABEL_136;
    v59 = this;
    ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v3->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v60);
    _9__1 = v3->fields.__9__1;
    square = v3->fields.square;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v61, v62, v63);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)v3,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
        0LL);
      v3->fields.__9__1 = _9__1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__1, (int64_t)_9__1, v66, v67, v68, v69, v70, v71);
    }
    ClassBoardSquareDetailDialog__Open((ClassBoardSquareDetailDialog_o *)v59, square, _9__1, v63);
  }
  else if ( (acquireFlag & 2) != 0 )
  {
    v52 = (BaseMonoBehaviour_o *)v3->fields.__4__this;
    if ( !v52 )
      goto LABEL_136;
    v53 = v52[2].fields.m_CancellationTokenSource;
    if ( !v53 )
      goto LABEL_136;
    v54 = v53->klass;
    v55 = *(unsigned __int16 *)(&v53->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v53->klass->_2.bitflags2 + 3) )
    {
      v56 = &v54->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v56 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_24;
      }
      v57 = (__int64)(&v54->vtable._0_Equals.method + 2 * *v56);
    }
    else
    {
LABEL_24:
      v57 = sub_1C1C7C0(v52[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v57)(
                                                             v53,
                                                             *(_QWORD *)(v57 + 8));
    if ( !this )
      goto LABEL_136;
    v78 = v3->fields.__4__this;
    if ( !v78 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v52,
                                                             (Il2CppObject *)this->fields.__9__2,
                                                             v78->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v79 = this;
    LOBYTE(this[3].klass) = 0;
    ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v3->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v80);
    _9__2 = v3->fields.__9__2;
    v85 = v3->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v81, v82, v83);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v3,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      v3->fields.__9__2 = _9__2;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__2, (int64_t)_9__2, v86, v87, v88, v89, v90, v91);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v79, v85, _9__2, v83);
  }
  else if ( (acquireFlag & 4) != 0 )
  {
    v72 = (BaseMonoBehaviour_o *)v3->fields.__4__this;
    if ( !v72 )
      goto LABEL_136;
    v73 = v72[2].fields.m_CancellationTokenSource;
    if ( !v73 )
      goto LABEL_136;
    v74 = v73->klass;
    v75 = *(unsigned __int16 *)(&v73->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v73->klass->_2.bitflags2 + 3) )
    {
      v76 = &v74->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v76 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v75;
        v76 += 4;
        if ( !v75 )
          goto LABEL_40;
      }
      v77 = (__int64)(&v74->vtable._0_Equals.method + 2 * *v76);
    }
    else
    {
LABEL_40:
      v77 = sub_1C1C7C0(v72[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v77)(
                                                             v73,
                                                             *(_QWORD *)(v77 + 8));
    if ( !this )
      goto LABEL_136;
    v98 = v3->fields.__4__this;
    if ( !v98 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v72,
                                                             (Il2CppObject *)this->fields.__9__7,
                                                             v98->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v99 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v3->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v100);
    _9__3 = v3->fields.__9__3;
    v106 = v3->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v101, v102, v103);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v3,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
        0LL);
      v3->fields.__9__3 = _9__3;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__3, (int64_t)_9__3, v107, v108, v109, v110, v111, v112);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v99, v106, 0, _9__3, v104);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v92 = (BaseMonoBehaviour_o *)v3->fields.__4__this;
      if ( v92 )
      {
        v93 = v92[2].fields.m_CancellationTokenSource;
        if ( v93 )
        {
          v94 = v93->klass;
          v95 = *(unsigned __int16 *)(&v93->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v93->klass->_2.bitflags2 + 3) )
          {
            v96 = &v94->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v96 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v95;
              v96 += 4;
              if ( !v95 )
                goto LABEL_56;
            }
            v97 = (__int64)(&v94->vtable._0_Equals.method + 2 * *v96);
          }
          else
          {
LABEL_56:
            v97 = sub_1C1C7C0(v92[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v97)(
                                                                   v93,
                                                                   *(_QWORD *)(v97 + 8));
          if ( this )
          {
            v119 = v3->fields.__4__this;
            if ( v119 )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v92,
                                                                       (Il2CppObject *)this->fields.__9__5,
                                                                       v119->fields.uiRoot,
                                                                       0LL,
                                                                       (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v120 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
                this = (ClassBoardController___c__DisplayClass39_0_o *)v3->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                           this,
                                                                           this->klass[1]._1.name);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v121);
                    v126 = v3->fields.square;
                    v127 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v122);
                      v127 = ClassBoardController___c_TypeInfo;
                    }
                    _9__39_4 = v127->static_fields->__9__39_4;
                    if ( !_9__39_4 )
                    {
                      if ( !v127->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v127, v122);
                        v127 = ClassBoardController___c_TypeInfo;
                      }
                      v129 = (Il2CppObject *)v127->static_fields->__9;
                      _9__39_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v122, v123, v124);
                      System_Action___ctor(
                        _9__39_4,
                        v129,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__,
                        0LL);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__39_4 = _9__39_4;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&static_fields->__9__39_4,
                        (int64_t)_9__39_4,
                        v131,
                        v132,
                        v133,
                        v134,
                        v135,
                        v136);
                    }
                    _9__5 = v3->fields.__9__5;
                    if ( !_9__5 )
                    {
                      _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v122, v123, v124);
                      System_Action___ctor(
                        _9__5,
                        (Il2CppObject *)v3,
                        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
                        0LL);
                      v3->fields.__9__5 = _9__5;
                      sub_1BCA784(
                        (PartyOrganizationUtility_o *)&v3->fields.__9__5,
                        (int64_t)_9__5,
                        v138,
                        v139,
                        v140,
                        v141,
                        v142,
                        v143);
                    }
                    v144 = (ClassBoardLockOpenConfirmDialog_o *)v120;
                    v145 = v126;
                    v146 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1BCAA3C(this, method);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v113 = (BaseMonoBehaviour_o *)v3->fields.__4__this;
      if ( !v113 )
        goto LABEL_136;
      v114 = v113[2].fields.m_CancellationTokenSource;
      if ( !v114 )
        goto LABEL_136;
      v115 = v114->klass;
      v116 = *(unsigned __int16 *)(&v114->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v114->klass->_2.bitflags2 + 3) )
      {
        v117 = &v115->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v117 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v116;
          v117 += 4;
          if ( !v116 )
            goto LABEL_72;
        }
        v118 = (__int64)(&v115->vtable._0_Equals.method + 2 * *v117);
      }
      else
      {
LABEL_72:
        v118 = sub_1C1C7C0(v113[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v118)(
                                                               v114,
                                                               *(_QWORD *)(v118 + 8));
      if ( !this )
        goto LABEL_136;
      v147 = v3->fields.__4__this;
      if ( !v147 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v113,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v147->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v148 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, method);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v3->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v149);
      v154 = v3->fields.square;
      v155 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v150);
        v155 = ClassBoardController___c_TypeInfo;
      }
      _9__39_6 = v155->static_fields->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( !v155->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v155, v150);
          v155 = ClassBoardController___c_TypeInfo;
        }
        v157 = (Il2CppObject *)v155->static_fields->__9;
        _9__39_6 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v150, v151, v152);
        System_Action___ctor(_9__39_6, v157, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v158 = ClassBoardController___c_TypeInfo->static_fields;
        v158->__9__39_6 = _9__39_6;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v158->__9__39_6,
          (int64_t)_9__39_6,
          v159,
          v160,
          v161,
          v162,
          v163,
          v164);
      }
      _9__7 = v3->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v150, v151, v152);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v3,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        v3->fields.__9__7 = _9__7;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v3->fields.__9__7,
          (int64_t)_9__7,
          v166,
          v167,
          v168,
          v169,
          v170,
          v171);
      }
      v172 = (ClassBoardSquareOpenConfirmDialog_o *)v148;
      v173 = v154;
      v174 = 0;
    }
    else
    {
      v43 = v3->fields.square;
      if ( v43
        && (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v43->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ClassBoardLock_c *)v43->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
          v45 = v3->fields.square;
        else
          v45 = 0LL;
      }
      else
      {
        v45 = 0LL;
      }
      v175 = (BaseMonoBehaviour_o *)v3->fields.__4__this;
      if ( !v175 )
        goto LABEL_136;
      v176 = v175[2].fields.m_CancellationTokenSource;
      if ( !v176 )
        goto LABEL_136;
      v177 = v176->klass;
      v178 = *(unsigned __int16 *)(&v176->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v176->klass->_2.bitflags2 + 3) )
      {
        v179 = &v177->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v179 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v178;
          v179 += 4;
          if ( !v178 )
            goto LABEL_112;
        }
        v180 = (__int64)(&v177->vtable._0_Equals.method + 2 * *v179);
      }
      else
      {
LABEL_112:
        v180 = sub_1C1C7C0(v175[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v180)(
                                                               v176,
                                                               *(_QWORD *)(v180 + 8));
      if ( !this )
        goto LABEL_136;
      v181 = v3->fields.__4__this;
      if ( v45 )
      {
        if ( v181 )
        {
          this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v175,
                                                                   (Il2CppObject *)this->fields.__9__5,
                                                                   v181->fields.uiRoot,
                                                                   0LL,
                                                                   (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v182 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
            this = (ClassBoardController___c__DisplayClass39_0_o *)v3->fields.__4__this;
            if ( this )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                       this,
                                                                       this->klass[1]._1.name);
              if ( this )
              {
                ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v183);
                _9__39_4 = v3->fields.__9__8;
                v187 = v3->fields.square;
                if ( !_9__39_4 )
                {
                  _9__39_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v184, v185, v186);
                  System_Action___ctor(
                    _9__39_4,
                    (Il2CppObject *)v3,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
                    0LL);
                  v3->fields.__9__8 = _9__39_4;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v3->fields.__9__8,
                    (int64_t)_9__39_4,
                    v188,
                    v189,
                    v190,
                    v191,
                    v192,
                    v193);
                }
                _9__5 = v3->fields.__9__9;
                if ( !_9__5 )
                {
                  _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v184, v185, v186);
                  System_Action___ctor(
                    _9__5,
                    (Il2CppObject *)v3,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
                    0LL);
                  v3->fields.__9__9 = _9__5;
                  sub_1BCA784(
                    (PartyOrganizationUtility_o *)&v3->fields.__9__9,
                    (int64_t)_9__5,
                    v194,
                    v195,
                    v196,
                    v197,
                    v198,
                    v199);
                }
                v146 = 1;
                v144 = (ClassBoardLockOpenConfirmDialog_o *)v182;
                v145 = v187;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v144, v145, v146, _9__39_4, _9__5, v125);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v181 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v175,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v181->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2EFD548 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v200 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, method);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v3->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v201);
      _9__39_6 = v3->fields.__9__12;
      v205 = v3->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v202, v203, v204);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)v3,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        v3->fields.__9__12 = _9__39_6;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v3->fields.__9__12,
          (int64_t)_9__39_6,
          v206,
          v207,
          v208,
          v209,
          v210,
          v211);
      }
      _9__7 = v3->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v202, v203, v204);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v3,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        v3->fields.__9__13 = _9__7;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v3->fields.__9__13,
          (int64_t)_9__7,
          v212,
          v213,
          v214,
          v215,
          v216,
          v217);
      }
      v174 = 1;
      v172 = (ClassBoardSquareOpenConfirmDialog_o *)v200;
      v173 = v205;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v172, v173, v174, _9__39_6, _9__7, v153);
  }
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__1(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardController___c__DisplayClass39_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__11; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4B19686 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, _, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BCA7E0(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
                                                             v5,
                                                             v6);
    byte_4B19686 = 1;
  }
  _9__11 = v4->fields.__9__11;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, _, method, v3);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v4->fields.__9__11 = _9__11;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__11, (int64_t)_9__11, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__11, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__11(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v4),
        (square = this->fields.square) == 0LL)
    || (_4__this = this->fields.__4__this) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardController___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v13; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_object__o *_9__14; // x21
  ClassBoardController___c__DisplayClass39_0_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  ClassBoardController___c__DisplayClass39_0_c *v26; // x8
  __int64 v27; // x9
  IClassBoardSquareUser_c **v28; // x10
  __int64 v29; // x0

  v3 = this;
  if ( (byte_4B19687 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_IClassBoardSquareUser__TypeInfo, method, v2);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v4, v5);
    sub_1BCA7E0(&IClassBoardSquareUser_TypeInfo, v6, v7);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BCA7E0(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
                                                             v8,
                                                             v9);
    byte_4B19687 = 1;
  }
  square = v3->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v13 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_9;
    }
    v15 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v15 = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v15 + 8));
  _9__14 = (System_Action_object__o *)v3->fields.__9__14;
  v19 = this;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_object__o *)sub_1BCAA2C(System_Action_IClassBoardSquareUser__TypeInfo, method, v16, v17);
    System_Action_object____ctor(
      _9__14,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      0LL);
    v3->fields.__9__14 = (struct System_Action_IClassBoardSquareUser__o *)_9__14;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__14, (int64_t)_9__14, v20, v21, v22, v23, v24, v25);
  }
  if ( !v19 )
LABEL_21:
    sub_1BCAA3C(this, method);
  v26 = v19->klass;
  v27 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    v28 = (IClassBoardSquareUser_c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v28 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v27;
      v28 += 2;
      if ( !v27 )
        goto LABEL_18;
    }
    v29 = (__int64)(&v26->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v28);
  }
  else
  {
LABEL_18:
    v29 = sub_1C1C7C0(v19, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v29)(
    v19,
    _9__14,
    *(_QWORD *)(v29 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__13(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardController___c__DisplayClass39_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *_9__15; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  v4 = this;
  if ( (byte_4B19688 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, _, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BCA7E0(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
                                                             v5,
                                                             v6);
    byte_4B19688 = 1;
  }
  _9__15 = v4->fields.__9__15;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, _, method, v3);
    System_Action___ctor(
      _9__15,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v4->fields.__9__15 = _9__15;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__9__15, (int64_t)_9__15, v10, v11, v12, v13, v14, v15);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__15, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__15(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v4),
        (square = this->fields.square) == 0LL)
    || (_4__this = this->fields.__4__this) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__2(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__3(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__5(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__7(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ClassBoardController___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v13; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_object__o *_9__10; // x21
  ClassBoardController___c__DisplayClass39_0_o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  ClassBoardController___c__DisplayClass39_0_c *v26; // x8
  __int64 v27; // x9
  IClassBoardSquareUser_c **v28; // x10
  __int64 v29; // x0

  v3 = this;
  if ( (byte_4B19685 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_IClassBoardSquareUser__TypeInfo, method, v2);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v4, v5);
    sub_1BCA7E0(&IClassBoardSquareUser_TypeInfo, v6, v7);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BCA7E0(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
                                                             v8,
                                                             v9);
    byte_4B19685 = 1;
  }
  square = v3->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v13 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_9;
    }
    v15 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v15 = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v15 + 8));
  _9__10 = (System_Action_object__o *)v3->fields.__9__10;
  v19 = this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_object__o *)sub_1BCAA2C(System_Action_IClassBoardSquareUser__TypeInfo, method, v16, v17);
    System_Action_object____ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      0LL);
    v3->fields.__9__10 = (struct System_Action_IClassBoardSquareUser__o *)_9__10;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__9__10, (int64_t)_9__10, v20, v21, v22, v23, v24, v25);
  }
  if ( !v19 )
LABEL_21:
    sub_1BCAA3C(this, method);
  v26 = v19->klass;
  v27 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    v28 = (IClassBoardSquareUser_c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v28 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v27;
      v28 += 2;
      if ( !v27 )
        goto LABEL_18;
    }
    v29 = (__int64)(&v26->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v28);
  }
  else
  {
LABEL_18:
    v29 = sub_1C1C7C0(v19, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v29)(
    v19,
    _9__10,
    *(_QWORD *)(v29 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__9(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass40_0___ctor(
        ClassBoardController___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass40_0___PlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  void *Instance; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  __int64 v21; // x2
  __int64 v22; // x3
  struct ClassBoardController_o *_4__this; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  System_Action_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x2
  __int64 v35; // x3
  struct ClassBoardController_o *v36; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v38; // x21
  Il2CppObject *v39; // x22
  struct ClassBoardController___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  if ( (byte_4B19689 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ClassBoardSquare__TypeInfo, method, v2);
    sub_1BCA7E0(&System_Action_ClassBoardLine__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, v12, v13);
    sub_1BCA7E0(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, v14, v15);
    sub_1BCA7E0(&ClassBoardController___c_TypeInfo, v16, v17);
    byte_4B19689 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  Instance = this->fields.__4__this;
  if ( !Instance )
    goto LABEL_25;
  Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  if ( !Instance )
    goto LABEL_25;
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)Instance, v19);
  Instance = this->fields.__4__this;
  if ( !Instance )
    goto LABEL_25;
  Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  if ( !Instance )
    goto LABEL_25;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, v20);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  squareViewList = (System_Collections_Generic_List_object__o *)_4__this->fields.squareViewList;
  Instance = ClassBoardController___c_TypeInfo;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v19);
    Instance = ClassBoardController___c_TypeInfo;
  }
  v25 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v19);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ClassBoardSquare__TypeInfo, v19, v21, v22);
    System_Action_object____ctor(v25, v26, Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__40_1, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !squareViewList )
    goto LABEL_25;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v25,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_25;
  Instance = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v36->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo, v19);
    Instance = ClassBoardController___c_TypeInfo;
  }
  v38 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v38 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v19);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v39 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v38 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ClassBoardLine__TypeInfo, v19, v34, v35);
    System_Action_object____ctor(v38, v39, Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, 0LL);
    v40 = ClassBoardController___c_TypeInfo->static_fields;
    v40->__9__40_2 = (struct System_Action_ClassBoardLine__o *)v38;
    sub_1BCA784((PartyOrganizationUtility_o *)&v40->__9__40_2, (int64_t)v38, v41, v42, v43, v44, v45, v46);
  }
  if ( !lineViewList )
LABEL_25:
    sub_1BCAA3C(Instance, v19);
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v38,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass41_0___ctor(
        ClassBoardController___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass41_0___PlayClassBoardStartEffect_b__3(
        ClassBoardController___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ClassBoardUIController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  ClassBoardUIController_o *v12; // x20
  System_Action_o *_9__4; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1968A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__, v6, v7);
    byte_4B1968A = 1;
  }
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  isLockCondReleased = this->fields.isLockCondReleased;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                           _4__this,
                                           _4__this->klass[1]._1.name);
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__TouchEnable(_4__this, method);
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                           _4__this,
                                           _4__this->klass[1]._1.name);
  v12 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v10, v11);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v14, v15, v16, v17, v18, v19);
    }
    if ( v12 )
    {
      ClassBoardUIController__OpenMissionClearDialog(_4__this, _9__4, v10);
      goto LABEL_13;
    }
LABEL_15:
    sub_1BCAA3C(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, v10);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass41_0___PlayClassBoardStartEffect_b__4(
        ClassBoardController___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass43_0___ctor(
        ClassBoardController___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass43_0___PlayMoveCamera_b__0(
        ClassBoardController___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, method),
        (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v4),
        (callback = this->fields.callback) == 0LL) )
  {
    sub_1BCAA3C(_4__this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}