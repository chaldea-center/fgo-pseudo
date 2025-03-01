void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardModelBuilder_o *v7; // x20
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C00D6F & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardModelBuilder_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v4);
    sub_1C2E12C(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v5);
    sub_1C2E12C(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v6);
    byte_4C00D6F = 1;
  }
  v7 = (ClassBoardModelBuilder_o *)sub_1C2E378(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v7, v8);
  this->fields._builder_k__BackingField = v7;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._builder_k__BackingField,
    (int64_t)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v15;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.squareViewList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.lineViewList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *v19; // x21
  ClassBoardUIController_o *v20; // x0
  __int64 v21; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  ClassBoardController___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__bool__o *_9__42_0; // x21
  Il2CppObject *v30; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  ClassBoardController___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x20
  System_Func_object__int__o *_9__42_1; // x21
  Il2CppObject *v42; // x22
  struct ClassBoardController___c_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x20
  ClassBoardUIController_o *v51; // x21
  System_Action_o *v52; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v53; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C00D6C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, squareModel);
    sub_1C2E12C(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v10);
    sub_1C2E12C(&System_Func_IClassBoardLockModel__int__TypeInfo, v11);
    sub_1C2E12C(&System_Func_IClassBoardLockModel__bool__TypeInfo, v12);
    sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v13);
    sub_1C2E12C(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v14);
    sub_1C2E12C(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v15);
    sub_1C2E12C(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__, v16);
    sub_1C2E12C(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__, v17);
    sub_1C2E12C(&ClassBoardController___c_TypeInfo, v18);
    byte_4C00D6C = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v19;
  if ( !squareModel )
    goto LABEL_27;
  klass = squareModel->klass;
  v23 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C8010C(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v26 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_2FFB080 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v27 = ClassBoardController___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v27 = ClassBoardController___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__bool__o *)v27->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ClassBoardController___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__42_0,
      v30,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__42_0,
      (int64_t)_9__42_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v39 = ClassBoardController___c_TypeInfo;
  v40 = v38;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v39 = ClassBoardController___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v39->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = ClassBoardController___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_1,
      v42,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      0LL);
    v43 = ClassBoardController___c_TypeInfo->static_fields;
    v43->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v43->__9__42_1, (int64_t)_9__42_1, v44, v45, v46, v47, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v40,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_2FFB4B4 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_object_(
         v50,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v20 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v20 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v20, 1, 0LL);
      v51 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v52 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        v52,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__,
        0LL);
      if ( v51 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v51, v52, 0LL);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1C2E388(v20, v21);
  }
LABEL_26:
  v53 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v50,
                                                                                    (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v53, 0LL);
}


ClassBoardSquare_o *__fastcall ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        const MethodInfo *method)
{
  ClassBoardController_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v12; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x21
  Il2CppObject *v16; // x0

  v6 = this;
  if ( (byte_4C00D67 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab);
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7);
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, v8);
    this = (ClassBoardController_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v9);
    byte_4C00D67 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_1C2E388(this, defaultPrefab);
    klass = resourceCatalog->klass;
    v12 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v12;
        p_offset += 2;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8010C(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
    }
    v16 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD, _QWORD))p_method)(
                            resourceCatalog,
                            (unsigned int)assetId,
                            *(_QWORD *)(p_method + 8));
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)v6,
                      v16,
                      v6->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
  }
  else
  {
    Object_object = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object, 0LL, 0LL) )
    return (ClassBoardSquare_o *)Object_object;
  else
    return (ClassBoardSquare_o *)BaseMonoBehaviour__createObject_object_(
                                   (BaseMonoBehaviour_o *)v6,
                                   (Il2CppObject *)defaultPrefab,
                                   v6->fields.boardObjectsParent,
                                   0LL,
                                   (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
}


void __fastcall ClassBoardController__CreateViews(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  IClassBoardSquareModel_o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v39; // x8
  __int64 v40; // x9
  IClassBoardSquareModel_c **v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x1
  IClassBoardSquareModel_c *v45; // x8
  ClassBoardSquare_o *v46; // x22
  IClassBoardSquareModel_c *v47; // x1
  __int64 v48; // x9
  IClassBoardSquareModel_c **v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  struct IClassBoardResourceCatalog_o *v53; // x22
  IClassBoardResourceCatalog_c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  IClassBoardResourceCatalog_c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 v63; // x1
  IClassBoardSquareModel_c *v64; // x8
  __int64 v65; // x9
  IClassBoardSquareModel_c **v66; // x10
  __int64 v67; // x0
  __int64 v68; // x1
  IClassBoardSquareModel_c *v69; // x8
  __int64 v70; // x9
  IClassBoardSquareModel_c **v71; // x10
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  ClassBoardSquare_o *v74; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x22
  __int64 v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  System_Collections_Generic_List_object__o *squareViewList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  Il2CppClass **v88; // x8
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 *v93; // x20
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x20
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  __int64 v108; // x0
  __int64 v109; // x1
  struct IClassBoardResourceCatalog_o *v110; // x22
  IClassBoardResourceCatalog_c *v111; // x8
  IClassBoardLineModel_o *v112; // x21
  __int64 v113; // x9
  int32_t *v114; // x10
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  Il2CppObject *Object_object; // x0
  __int64 v119; // x1
  const MethodInfo *v120; // x2
  Il2CppObject *v121; // x22
  __int64 v122; // x1
  int64_t v123; // x2
  int32_t v124; // w3
  System_String_o *v125; // x4
  BattleSetupInfo_o *v126; // x5
  FollowerInfo_o *v127; // x6
  PartyListViewItem_o *v128; // x7
  System_Collections_Generic_List_object__o *lineViewList; // x0
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x8
  __int64 v134; // x8
  __int64 v135; // x9
  int *v136; // x10
  __int64 v137; // x0

  if ( (byte_4C00D66 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, method);
    sub_1C2E12C(&IClassBoardLockModel_TypeInfo, v3);
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v5);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v6);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v7);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v8);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v9);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v10);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v12);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v13);
    byte_4C00D66 = 1;
  }
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 )
    goto LABEL_148;
  v16 = *(__int64 **)(v14 + 24);
  if ( !v16 )
    goto LABEL_148;
  v17 = *v16;
  v18 = *(unsigned __int16 *)(*v16 + 302);
  if ( *(_WORD *)(*v16 + 302) )
  {
    v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v19 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_9;
    }
    v20 = v17 + 16LL * *v19 + 312;
  }
  else
  {
LABEL_9:
    v20 = sub_1C8010C(
            *(_QWORD *)(v14 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL);
  }
  v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
  if ( !v22 )
    sub_1C2E388(0LL, v21);
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_16:
      v26 = sub_1C8010C(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v22;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v29 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_23;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_23:
      v30 = sub_1C8010C(v22, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v31 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
    v32 = sub_1C2E268(v31, IClassBoardLockModel_TypeInfo);
    if ( v32 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_1C2E388(v32, v33);
      klass = resourceCatalog->klass;
      v36 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_1C8010C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v43 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v43 )
        sub_1C2E388(0LL, v44);
      if ( !v31 )
        sub_1C2E388(v43, v44);
      v45 = v31->klass;
      v46 = *(ClassBoardSquare_o **)(v43 + 32);
      v47 = IClassBoardSquareModel_TypeInfo;
      v48 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
      if ( !*(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
        goto LABEL_67;
      v49 = (IClassBoardSquareModel_c **)&v45->_1.interfaceOffsets->offset;
      while ( *(v49 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v48;
        v49 += 2;
        if ( !v48 )
          goto LABEL_67;
      }
      v50 = (__int64)&v45->vtable[*(_DWORD *)v49 + 10].method;
    }
    else
    {
      if ( !v31 )
        sub_1C2E388(0LL, v33);
      v39 = v31->klass;
      v40 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
      {
        v41 = (IClassBoardSquareModel_c **)&v39->_1.interfaceOffsets->offset;
        while ( *(v41 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v40;
          v41 += 2;
          if ( !v40 )
            goto LABEL_37;
        }
        v42 = (__int64)&v39->vtable[*(_DWORD *)v41 + 5].method;
      }
      else
      {
LABEL_37:
        v42 = sub_1C8010C(v31, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v51 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v42)(v31, *(_QWORD *)(v42 + 8));
      v53 = this->fields.resourceCatalog;
      if ( (v51 & 1) != 0 )
      {
        if ( !v53 )
          sub_1C2E388(v51, v52);
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
              goto LABEL_54;
          }
          v57 = (__int64)&v54->vtable[*v56].method;
        }
        else
        {
LABEL_54:
          v57 = sub_1C8010C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v62 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
        if ( !v62 )
          sub_1C2E388(0LL, v63);
        v64 = v31->klass;
        v46 = *(ClassBoardSquare_o **)(v62 + 40);
        v47 = IClassBoardSquareModel_TypeInfo;
        v65 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
          goto LABEL_67;
        v66 = (IClassBoardSquareModel_c **)&v64->_1.interfaceOffsets->offset;
        while ( *(v66 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v65;
          v66 += 2;
          if ( !v65 )
            goto LABEL_67;
        }
        v50 = (__int64)&v64->vtable[*(_DWORD *)v66 + 10].method;
      }
      else
      {
        if ( !v53 )
          sub_1C2E388(v51, v52);
        v58 = v53->klass;
        v59 = *(unsigned __int16 *)(&v53->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v53->klass->_2.bitflags2 + 3) )
        {
          v60 = &v58->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v60 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v59;
            v60 += 4;
            if ( !v59 )
              goto LABEL_60;
          }
          v61 = (__int64)&v58->vtable[*v60].method;
        }
        else
        {
LABEL_60:
          v61 = sub_1C8010C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v67 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
        if ( !v67 )
          sub_1C2E388(0LL, v68);
        v69 = v31->klass;
        v46 = *(ClassBoardSquare_o **)(v67 + 16);
        v47 = IClassBoardSquareModel_TypeInfo;
        v70 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
        {
LABEL_67:
          v50 = sub_1C8010C(v31, v47, 10LL);
          goto LABEL_77;
        }
        v71 = (IClassBoardSquareModel_c **)&v69->_1.interfaceOffsets->offset;
        while ( *(v71 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v70;
          v71 += 2;
          if ( !v70 )
            goto LABEL_67;
        }
        v50 = (__int64)&v69->vtable[*(_DWORD *)v71 + 10].method;
      }
    }
LABEL_77:
    v72 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v50)(v31, *(_QWORD *)(v50 + 8));
    v74 = ClassBoardController__CloneSquareObject(this, v46, v72, v73);
    v76 = (Il2CppObject *)v74;
    if ( !v74 )
      sub_1C2E388(0LL, v75);
    ClassBoardSquare__Setup(v74, v31, 0LL);
    squareViewList = (System_Collections_Generic_List_object__o *)this->fields.squareViewList;
    if ( !squareViewList )
      sub_1C2E388(0LL, v77);
    items = squareViewList->fields._items;
    v86 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++squareViewList->fields._version;
    if ( !items )
      sub_1C2E388(squareViewList, v77);
    size = squareViewList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        squareViewList,
        v76,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &items->obj.klass + size;
      squareViewList->fields._size = size + 1;
      v88[4] = (Il2CppClass *)v76;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v88 + 4), (int64_t)v76, v78, v79, v80, v81, v82, v83);
    }
  }
  v89 = *(_QWORD *)v22;
  v90 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_87;
    }
    v92 = v89 + 16LL * *v91 + 312;
  }
  else
  {
LABEL_87:
    v92 = sub_1C8010C(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v92)(v22, *(_QWORD *)(v92 + 8));
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 || (v93 = *(__int64 **)(v14 + 16)) == 0LL )
LABEL_148:
    sub_1C2E388(v14, v15);
  v94 = *v93;
  v95 = *(unsigned __int16 *)(*v93 + 302);
  if ( *(_WORD *)(*v93 + 302) )
  {
    v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v96 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v95;
      v96 += 4;
      if ( !v95 )
        goto LABEL_95;
    }
    v97 = v94 + 16LL * *v96 + 312;
  }
  else
  {
LABEL_95:
    v97 = sub_1C8010C(*(_QWORD *)(v14 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v99 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v97)(v93, *(_QWORD *)(v97 + 8));
  if ( !v99 )
    sub_1C2E388(0LL, v98);
  while ( 1 )
  {
    v100 = *(_QWORD *)v99;
    v101 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
    {
      v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v102 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_102;
      }
      v103 = v100 + 16LL * *v102 + 312;
    }
    else
    {
LABEL_102:
      v103 = sub_1C8010C(v99, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v99, *(_QWORD *)(v103 + 8)) & 1) == 0 )
      break;
    v104 = *(_QWORD *)v99;
    v105 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
    {
      v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v106 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v105;
        v106 += 4;
        if ( !v105 )
          goto LABEL_109;
      }
      v107 = v104 + 16LL * *v106 + 312;
    }
    else
    {
LABEL_109:
      v107 = sub_1C8010C(v99, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v108 = (*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v99, *(_QWORD *)(v107 + 8));
    v110 = this->fields.resourceCatalog;
    if ( !v110 )
      sub_1C2E388(v108, v109);
    v111 = v110->klass;
    v112 = (IClassBoardLineModel_o *)v108;
    v113 = *(unsigned __int16 *)(&v110->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v110->klass->_2.bitflags2 + 3) )
    {
      v114 = &v111->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v114 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v113;
        v114 += 4;
        if ( !v113 )
          goto LABEL_116;
      }
      v115 = (__int64)&v111->vtable[*v114].method;
    }
    else
    {
LABEL_116:
      v115 = sub_1C8010C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v116 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v115)(v110, *(_QWORD *)(v115 + 8));
    if ( !v116 )
      sub_1C2E388(0LL, v117);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v116 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v121 = Object_object;
    if ( !Object_object )
      sub_1C2E388(0LL, v119);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v112, v120);
    lineViewList = (System_Collections_Generic_List_object__o *)this->fields.lineViewList;
    if ( !lineViewList )
      sub_1C2E388(0LL, v122);
    v130 = lineViewList->fields._items;
    v131 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++lineViewList->fields._version;
    if ( !v130 )
      sub_1C2E388(lineViewList, v122);
    v132 = lineViewList->fields._size;
    if ( (unsigned int)v132 >= v130->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        lineViewList,
        v121,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
    }
    else
    {
      v133 = &v130->obj.klass + v132;
      lineViewList->fields._size = v132 + 1;
      v133[4] = (Il2CppClass *)v121;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v133 + 4), (int64_t)v121, v123, v124, v125, v126, v127, v128);
    }
  }
  v134 = *(_QWORD *)v99;
  v135 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
  {
    v136 = (int *)(*(_QWORD *)(v134 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v136 - 1) != System_IDisposable_TypeInfo )
    {
      --v135;
      v136 += 4;
      if ( !v135 )
        goto LABEL_129;
    }
    v137 = v134 + 16LL * *v136 + 312;
  }
  else
  {
LABEL_129:
    v137 = sub_1C8010C(v99, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v137)(v99, *(_QWORD *)(v137 + 8));
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  int32_t baseId; // w20
  CommonUI_o *v11; // x21
  System_Action_o *v12; // x22

  if ( (byte_4C00D64 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ClassBoardController__OnClickEffectList_b__32_0__, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4C00D64 = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v11 = (CommonUI_o *)v9;
        v12 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v11 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v11, 0, baseId, 1, v12, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_1C2E388(Instance, v8);
  }
}


void __fastcall ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  ClassBoardUIController_o *v6; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x20

  if ( (byte_4C00D63 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ClassBoardController__OnClickHelp_b__31_0__, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4C00D63 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v6 )
      sub_1C2E388(0LL, v7);
    ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
    v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__31_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v8, 0LL);
  }
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v6; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4C00D65 & 1) == 0 )
  {
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v3);
    byte_4C00D65 = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_38A84B4 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    v6 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v6;
        p_offset += 2;
        if ( !v6 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C8010C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
      resourceCatalog,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x20
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v29; // x0
  ClassBoardController___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v33; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  ClassBoardController___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  System_Func_object__int__o *_9__41_1; // x22
  Il2CppObject *v45; // x23
  struct ClassBoardController___c_StaticFields *v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x21
  System_Object_array *v55; // x0
  ClassBoardController___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x21
  System_Func_object__object__o *_9__41_2; // x22
  Il2CppObject *v59; // x23
  struct ClassBoardController___c_StaticFields *v60; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v68; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v70; // x21
  const MethodInfo *v71; // x2

  if ( (byte_4C00D6B & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v3);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v4);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v9);
    sub_1C2E12C(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v10);
    sub_1C2E12C(&System_Func_ClassBoardLock__int__TypeInfo, v11);
    sub_1C2E12C(&System_Func_ClassBoardLock__bool__TypeInfo, v12);
    sub_1C2E12C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13);
    sub_1C2E12C(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__, v14);
    sub_1C2E12C(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__, v15);
    sub_1C2E12C(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__, v16);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__, v17);
    sub_1C2E12C(&ClassBoardController___c__DisplayClass41_0_TypeInfo, v18);
    sub_1C2E12C(&ClassBoardController___c_TypeInfo, v19);
    byte_4C00D6B = 1;
  }
  v20 = sub_1C2E378(ClassBoardController___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v29 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.squareViewList,
          (const MethodInfo_2FFB080 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v30 = ClassBoardController___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v30 = ClassBoardController___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v30->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = ClassBoardController___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__41_0,
      v33,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__41_0,
      (int64_t)_9__41_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = System_Linq_Enumerable__Where_object_(
          v31,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v42 = ClassBoardController___c_TypeInfo;
  v43 = v41;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v42 = ClassBoardController___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__int__o *)v42->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = ClassBoardController___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__41_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__41_1,
      v45,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      0LL);
    v46 = ClassBoardController___c_TypeInfo->static_fields;
    v46->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v46->__9__41_1, (int64_t)_9__41_1, v47, v48, v49, v50, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v43,
                                                               (System_Func_TSource__TKey__o *)_9__41_1,
                                                               (const MethodInfo_2FFB4B4 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v20 + 16) = 0;
  v54 = v53;
  if ( System_Linq_Enumerable__Any_object_(
         v53,
         (const MethodInfo_2FDD22C *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v20 + 16) = 1;
    v55 = System_Linq_Enumerable__ToArray_object_(
            v54,
            (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v56 = ClassBoardController___c_TypeInfo;
    v57 = (System_Collections_Generic_IEnumerable_TSource__o *)v55;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v56 = ClassBoardController___c_TypeInfo;
    }
    _9__41_2 = (System_Func_object__object__o *)v56->static_fields->__9__41_2;
    if ( !_9__41_2 )
    {
      if ( !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v56 = ClassBoardController___c_TypeInfo;
      }
      v59 = (Il2CppObject *)v56->static_fields->__9;
      _9__41_2 = (System_Func_object__object__o *)sub_1C2E378(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__41_2,
        v59,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        0LL);
      v60 = ClassBoardController___c_TypeInfo->static_fields;
      v60->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v60->__9__41_2, (int64_t)_9__41_2, v61, v62, v63, v64, v65, v66);
    }
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v57,
                                                                 (System_Func_TSource__TResult__o *)_9__41_2,
                                                                 (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v68 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v67,
                                                                                      (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v68, 0LL);
  }
  effectController = this->fields.effectController;
  v70 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v20,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_29:
    sub_1C2E388(Instance, v22);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v70, v71);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  ClassBoardUIController_o *transform; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  ClassBoardEffectController_o *effectController; // x22
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s8
  float v29; // s9
  float v30; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  System_Action_o *v34; // x19
  const MethodInfo *v35; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C00D6D & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, square);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__, v7);
    sub_1C2E12C(&ClassBoardController___c__DisplayClass43_0_TypeInfo, v8);
    byte_4C00D6D = 1;
  }
  v9 = sub_1C2E378(ClassBoardController___c__DisplayClass43_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
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
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (ClassBoardUIController_o *)this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v28 = v25;
  v29 = v26;
  v30 = v27;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v34 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v9,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_1C2E388(transform, v11);
  v37.fields.z = v30 * z;
  v37.fields.y = v29 * y;
  v37.fields.x = v28 * x;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v37, v34, v35);
}


void __fastcall ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x3

  if ( (byte_4C00D6A & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, square);
    sub_1C2E12C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__, v8);
    sub_1C2E12C(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v9);
    byte_4C00D6A = 1;
  }
  v10 = sub_1C2E378(ClassBoardController___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = endAct;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)endAct, v19, v20, v21, v22, v23, v24);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList((ClassBoardUIController_o *)Instance, 0LL),
        effectController = this->fields.effectController,
        v26 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)v10,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_10:
    sub_1C2E388(Instance, v12);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v26, v27);
}


void __fastcall ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Component_o *v15; // x0
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  ClassBoardController___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  System_Action_object__o *_9__29_0; // x21
  Il2CppObject *v22; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v32; // w9
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  ClassBoardController___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_T__o *v35; // x20
  System_Action_object__o *_9__29_1; // x21
  Il2CppObject *v37; // x22
  struct ClassBoardController___c_StaticFields *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int64_t v51; // x2
  int v52; // w9
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4C00D61 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1C2E12C(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v4);
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v5);
    sub_1C2E12C(&Method_BasicHelper_ForEach_ClassBoardLine___, v6);
    sub_1C2E12C(&Method_BasicHelper_ForEach_ClassBoardSquare___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v9);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    sub_1C2E12C(&Method_ClassBoardController___c__Release_b__29_0__, v11);
    sub_1C2E12C(&Method_ClassBoardController___c__Release_b__29_1__, v12);
    sub_1C2E12C(&ClassBoardController___c_TypeInfo, v13);
    byte_4C00D61 = 1;
  }
  v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                  this,
                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
  {
    v15 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v15 )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
  }
  v18 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v19 = ClassBoardController___c_TypeInfo;
  v20 = v18;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v19 = ClassBoardController___c_TypeInfo;
  }
  _9__29_0 = (System_Action_object__o *)v19->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ClassBoardController___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__29_0 = (System_Action_object__o *)sub_1C2E378(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__29_0, v22, Method_ClassBoardController___c__Release_b__29_0__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__29_0,
      (int64_t)_9__29_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__29_0,
    (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_30;
  size = squareViewList->fields._size;
  v32 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v32;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0LL);
  v33 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v34 = ClassBoardController___c_TypeInfo;
  v35 = v33;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v34 = ClassBoardController___c_TypeInfo;
  }
  _9__29_1 = (System_Action_object__o *)v34->static_fields->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ClassBoardController___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__29_1 = (System_Action_object__o *)sub_1C2E378(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__29_1, v37, Method_ClassBoardController___c__Release_b__29_1__, 0LL);
    v38 = ClassBoardController___c_TypeInfo->static_fields;
    v38->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v38->__9__29_1, (int64_t)_9__29_1, v39, v40, v41, v42, v43, v44);
  }
  BasicHelper__ForEach_object_(
    v35,
    (System_Action_T__o *)_9__29_1,
    (const MethodInfo_2FBE538 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_30;
  v51 = (unsigned int)lineViewList->fields._size;
  v52 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v52;
  if ( (int)v51 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v51, 0LL);
  this->fields.effectController = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.effectController, 0LL, v51, v45, v46, v47, v48, v49);
  this->fields.background = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.background, 0LL, v53, v54, v55, v56, v57, v58);
  v15 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                     this,
                                     this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v15 )
LABEL_30:
    sub_1C2E388(v15, v16);
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v15, v16);
}


void __fastcall ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C00D62 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, action);
    byte_4C00D62 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
           this,
           this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v6 )
      sub_1C2E388(0LL, v7);
    *(_QWORD *)(v6 + 88) = action;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v6 + 88), (int64_t)action, v8, v9, v10, v11, v12, v13);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  MapCamera_o *mapCamera; // x0
  UnityEngine_Texture_o *RenderTexture; // x23
  __int64 v33; // x1
  const MethodInfo_378C1F0 *v34; // x2
  MapCamera_o *v35; // x23
  BalanceConfig_c *v36; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  const MethodInfo *v39; // x1
  System_Action_o *v40; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x2
  ClassBoardModelBuilder_o *v48; // x22
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x1
  Il2CppObject *current; // x22
  System_Action_object__o *v52; // x23
  __int64 v53; // x0
  __int64 v54; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v57; // x23
  ClassBoardEffectController_o *v58; // x24
  const MethodInfo *v59; // x5
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v67; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v70; // 0:x3.8
  System_Nullable_Vector3__o v71; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C00D60 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_ClassBoardSquare__TypeInfo, setResourceCatalog);
    sub_1C2E12C(&System_Action_TypeInfo, v13);
    sub_1C2E12C(&BalanceConfig_TypeInfo, v14);
    sub_1C2E12C(&Method_ClassBoardController_ShowBoard__, v15);
    sub_1C2E12C(&ClassBoardEffectController_TypeInfo, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v20);
    sub_1C2E12C(&Method_System_Nullable_Vector3___ctor__, v21);
    sub_1C2E12C(&Method_System_Nullable_float___ctor__, v22);
    sub_1C2E12C(&StringLiteral_13086/*"Sony SO-41B"*/, v23);
    byte_4C00D60 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.resourceCatalog,
    (int64_t)setResourceCatalog,
    (int64_t)classBoardBackground,
    baseId,
    *(System_String_o **)&iconId,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.background = classBoardBackground;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.background,
    (int64_t)classBoardBackground,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_25;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_25;
  ClassBoardBackground__UseClassBoardViewCamera(classBoardBackground, 0LL);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 1, 0LL);
  RenderTexture = (UnityEngine_Texture_o *)ClassBoardBackground__GetRenderTexture(classBoardBackground, 0LL);
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_maxTextureSize(0LL);
  if ( (int)mapCamera <= 4096 )
    goto LABEL_8;
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  if ( !mapCamera )
    goto LABEL_25;
  mapCamera = (MapCamera_o *)System_String__Equals_63243900(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_13086/*"Sony SO-41B"*/,
                               0LL);
  if ( ((unsigned __int8)mapCamera & 1) != 0 )
  {
LABEL_8:
    if ( !RenderTexture )
      goto LABEL_25;
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, Il2CppMethodPointer))RenderTexture->klass->vtable._5_set_width.method)(
      RenderTexture,
      4096LL,
      RenderTexture->klass->vtable._6_get_height.methodPtr);
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, Il2CppMethodPointer))RenderTexture->klass->vtable._7_set_height.method)(
      RenderTexture,
      2367LL,
      RenderTexture->klass->vtable._8_set_dimension.methodPtr);
  }
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_25;
  MapCamera__SetMapTexture(mapCamera, RenderTexture, 2491, 1440, 0LL);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_25;
  MapCamera__SetEnable(mapCamera, 1, 0LL);
  v35 = this->fields.mapCamera;
  if ( !byte_4BF7D91 )
  {
    sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4BF7D91 = 1;
  }
  *(_QWORD *)&v71.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v71.fields.hasValue = &v67;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v67.fields.hasValue = 0LL;
  *(_QWORD *)&v67.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v71, zeroVector, v34);
  v36 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v36 = BalanceConfig_TypeInfo;
  }
  static_fields = v36->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_378A18C *)Method_System_Nullable_float___ctor__);
  if ( !v35 )
    goto LABEL_25;
  v70 = size;
  MapCamera__StartAutoWork(v35, 0.0, v67, v70, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, v39);
  v40 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v40;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&classBoardBackground->fields.showBoardCallback,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, 0LL);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, 0LL);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (v48 = (ClassBoardModelBuilder_o *)mapCamera,
        ClassBoardModelBuilder__MakeSquare((ClassBoardModelBuilder_o *)mapCamera, baseId, v47),
        ClassBoardModelBuilder__MakeLine(v48, baseId, v49),
        ClassBoardController__CreateViews(this, v50),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_25:
    sub_1C2E388(mapCamera, v30);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    (System_Collections_Generic_List_object__o *)mapCamera,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v68,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v68.fields._current;
    v52 = (System_Action_object__o *)sub_1C2E378(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(
      v52,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      0LL);
    if ( !current )
      sub_1C2E388(v53, v54);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v52, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v68,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v57 = this->fields.mapCamera;
  v58 = (ClassBoardEffectController_o *)sub_1C2E378(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v58,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v57,
    classBoardBackground,
    v59);
  this->fields.effectController = v58;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.effectController, (int64_t)v58, v60, v61, v62, v63, v64, v65);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v21; // x20
  System_Action_o *v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x20
  System_Action_o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  System_String_o *v41; // x20
  MethodInfo *v42; // x21
  MethodInfo *v43; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  Il2CppClass *v45; // x20
  ClassBoardController_o *v46; // x19
  int32_t v47; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4C00D68 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&baseId);
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v4);
    sub_1C2E12C(&Method_ClassBoardController_OnClickEffectList__, v5);
    sub_1C2E12C(&Method_ClassBoardController_OnClickHelp__, v6);
    sub_1C2E12C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1C2E12C(&DataManager_TypeInfo, v8);
    sub_1C2E12C(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_1C2E12C(&int_TypeInfo, v11);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_20896/*"img_txt_classscore_{0}"*/, v13);
    this = (ClassBoardController_o *)sub_1C2E12C(&StringLiteral_3536/*"CLASS_BOARD_HEADER_MESSAGE"*/, v14);
    byte_4C00D68 = 1;
  }
  entity = 0LL;
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_28;
  klass = resourceCatalog->klass;
  v17 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C8010C(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                    (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
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
  v21 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v22 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v3, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v21 )
    goto LABEL_28;
  *(_QWORD *)(v21 + 96) = v22;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v21 + 96), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v30 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v3, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v29 )
    goto LABEL_28;
  *(_QWORD *)(v29 + 104) = v30;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v29 + 104), (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v47 = v3->fields.baseId;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v37, v38, v39);
  v41 = System_String__Format((System_String_o *)StringLiteral_20896/*"img_txt_classscore_{0}"*/, v40, 0LL);
  v42 = (MethodInfo *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                        v3,
                        v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(v42);
  if ( !v42 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderTitle((ClassBoardUIController_o *)v42, (AtlasManagerUnit_o *)this, v41, 0LL);
  v43 = (MethodInfo *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                        v3,
                        v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(v43);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3536/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v43 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderMessage(
    (ClassBoardUIController_o *)v43,
    UiAtlasManagerUnit,
    (System_String_o *)this,
    0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_28;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v3->fields.baseId,
                                     (const MethodInfo_327B1CC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    || (v45 = entity[4].klass,
        v46 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)this),
        !v46) )
  {
LABEL_28:
    sub_1C2E388(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v46,
    (System_Int32_array *)v45,
    (AtlasManagerUnit_o *)this,
    0LL);
}


void __fastcall ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  ClassBoardSquare_o *v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  ClassBoardSquare_o **v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 *v25; // x22
  __int64 v26; // x8
  __int64 v27; // x9
  IClassBoardSquareModel_c **v28; // x10
  __int64 v29; // x0
  ClassBoardSquare_o *v30; // x8
  __int64 methodPtr_low; // x11
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v34; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardSquare_o *v37; // x21
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3

  if ( (byte_4C00D69 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, square);
    sub_1C2E12C(&ClassBoardLock_TypeInfo, v5);
    sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__, v7);
    sub_1C2E12C(&ClassBoardController___c__DisplayClass39_0_TypeInfo, v8);
    byte_4C00D69 = 1;
  }
  v9 = sub_1C2E378(ClassBoardController___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_29;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = square;
  v18 = (ClassBoardSquare_o **)(v9 + 32);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)square, v19, v20, v21, v22, v23, v24);
  if ( !*(_QWORD *)(v9 + 32) )
    goto LABEL_29;
  v25 = *(__int64 **)(*(_QWORD *)(v9 + 32) + 176LL);
  if ( !v25 )
    goto LABEL_29;
  v26 = *v25;
  v27 = *(unsigned __int16 *)(*v25 + 302);
  if ( *(_WORD *)(*v25 + 302) )
  {
    v28 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *(v28 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v27;
      v28 += 2;
      if ( !v27 )
        goto LABEL_10;
    }
    v29 = v26 + 16LL * (*(_DWORD *)v28 + 13) + 312;
  }
  else
  {
LABEL_10:
    v29 = sub_1C8010C(v25, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v10 = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v29)(v25, 0LL, *(_QWORD *)(v29 + 8));
  *(_DWORD *)(v9 + 16) = (_DWORD)v10;
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v30 = *v18;
    if ( *v18 )
    {
      methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v30->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ClassBoardLock_c *)v30->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      {
        return;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v30 = *v18;
  }
  if ( !v30 )
    goto LABEL_29;
LABEL_19:
  SquareModel_k__BackingField = v30->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_29;
  klass = SquareModel_k__BackingField->klass;
  v34 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v34;
      p_offset += 2;
      if ( !v34 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_24:
    p_method = sub_1C8010C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          SquareModel_k__BackingField,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v10 = *v18;
    if ( *v18 )
    {
      ClassBoardSquare__SetSelectedEffectActive(v10, 1, 0LL);
      v37 = *(ClassBoardSquare_o **)(v9 + 32);
      v38 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v9,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v37, v38, v39);
      return;
    }
LABEL_29:
    sub_1C2E388(v10, v11);
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C00D6E & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo, method);
    byte_4C00D6E = 1;
  }
  v3 = sub_1C2E378(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
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
    sub_1C2E388(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C00D70 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C00D70 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_1C2E388(Instance, v4);
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
    sub_1C2E388(0LL, v3);
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
    sub_1C2E388(0LL, v3);
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
  sub_1C2E0D0(
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
  ClassBoardController__ShowBoardCoroutine_d__45_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ClassBoardController__ShowBoardCoroutine_d__45_o **_4__this; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  PartyOrganizationUtility_o *p__2__current; // x20
  bool result; // w0
  const MethodInfo *v22; // x1
  System_Action_o *v23; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_4C00D7F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v10);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)sub_1C2E12C(
                                                                 &Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__,
                                                                 v11);
    byte_4C00D7F = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v25, 0, sizeof(v25));
  if ( v2->fields.__1__state < 2u )
  {
    _4__this = (ClassBoardController__ShowBoardCoroutine_d__45_o **)v2->fields.__4__this;
    v2->fields.__1__state = -1;
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
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C2E0D0(p__2__current, 0LL, v13, v14, v15, v16, v17, v18);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    this = _4__this[13];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v24;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          ((void (*)(void))i.fields._current->klass->vtable[7].method)() )
    {
      if ( !i.fields._current )
        sub_1C2E388(0LL, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = _4__this[14];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v25.fields._current )
        sub_1C2E388(0LL, v22);
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v25.fields._current, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)(*(__int64 (__fastcall **)(ClassBoardController__ShowBoardCoroutine_d__45_o **, Il2CppObject *))&(*_4__this)[9].fields.__1__state)(
                                                                 _4__this,
                                                                 (*_4__this)[9].fields.__2__current);
    if ( !this )
LABEL_25:
      sub_1C2E388(this, method);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    v23 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
    EventTutorialMaster__CheckTutorial(0, 82, v23, 0, 0, 0, 0, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C00D71 & 1) == 0 )
  {
    sub_1C2E12C(&ClassBoardController___c_TypeInfo, v1);
    byte_4C00D71 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ClassBoardController___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  IClassBoardLockModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  IClassBoardLockModel_c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  IClassBoardLockModel_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  IClassBoardLockModel_c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  char v23; // w8
  __int64 v25; // [xsp+0h] [xbp-30h] BYREF
  int v26; // [xsp+8h] [xbp-28h]
  ClassBoardCondData_o v27; // 0:x0.12

  if ( (byte_4C00D76 & 1) == 0 )
  {
    sub_1C2E12C(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4C00D76 = 1;
  }
  v26 = 0;
  v25 = 0LL;
  if ( !x )
    sub_1C2E388(this, x);
  klass = x->klass;
  v6 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C8010C(x, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v26 = v9;
  *(_QWORD *)&v27.fields.Type = &v25;
  v27.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v27, v10) )
    goto LABEL_30;
  v11 = x->klass;
  v12 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v13 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v13 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_15;
    }
    v14 = (__int64)&v11->vtable[*v13 + 13].method;
  }
  else
  {
LABEL_15:
    v14 = sub_1C8010C(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v14)(x, 0LL, *(_QWORD *)(v14 + 8)) & 2) != 0 )
    goto LABEL_30;
  v15 = x->klass;
  v16 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v17 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v17 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_22;
    }
    v18 = (__int64)&v15->vtable[*v17 + 13].method;
  }
  else
  {
LABEL_22:
    v18 = sub_1C8010C(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v18)(x, 0LL, *(_QWORD *)(v18 + 8)) & 4) != 0 )
  {
LABEL_30:
    v23 = 0;
  }
  else
  {
    v19 = x->klass;
    v20 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v21 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_29;
      }
      v22 = (__int64)&v19->vtable[*v21 + 1].method;
    }
    else
    {
LABEL_29:
      v22 = sub_1C8010C(x, IClassBoardLockModel_TypeInfo, 1LL);
    }
    v23 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v22)(x, *(_QWORD *)(v22 + 8)) ^ 1;
  }
  return v23 & 1;
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

  if ( (byte_4C00D77 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, x);
    byte_4C00D77 = 1;
  }
  if ( !x )
    sub_1C2E388(this, x);
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
    p_method = sub_1C8010C(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


bool __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v6; // x20
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  int v10; // w1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  ClassBoardController___c_c *v13; // x8
  ClassBoardController___c_o *v14; // x20
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  ClassBoardController___c_c *v19; // x8
  ClassBoardController___c_o *v20; // x20
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x1
  ClassBoardController___c_c *v25; // x8
  ClassBoardController___c_o *v26; // x19
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  char v30; // w8
  __int64 v32; // [xsp+0h] [xbp-40h] BYREF
  int v33; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v34; // 0:x0.12

  if ( (byte_4C00D74 & 1) == 0 )
  {
    sub_1C2E12C(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4C00D74 = 1;
  }
  v33 = 0;
  v32 = 0LL;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, (const MethodInfo *)x);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v6 = this;
  v7 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_1C8010C(this, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  v33 = v10;
  *(_QWORD *)&v34.fields.Type = &v32;
  v34.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v34, v11) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v12);
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
    v17 = sub_1C8010C(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v17)(v14, 0LL, *(_QWORD *)(v17 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v18);
  if ( !this )
    goto LABEL_38;
  v19 = this->klass;
  v20 = this;
  v21 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v22 = &v19->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_25;
    }
    v23 = (__int64)(&v19[1]._1.methods + 2 * *v22);
  }
  else
  {
LABEL_25:
    v23 = sub_1C8010C(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v23)(v20, 0LL, *(_QWORD *)(v23 + 8)) & 4) != 0 )
  {
LABEL_34:
    v30 = 0;
    return v30 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v24);
  if ( !this )
LABEL_38:
    sub_1C2E388(this, x);
  v25 = this->klass;
  v26 = this;
  v27 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v28 = &v25->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v28 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_33;
    }
    v29 = (__int64)(&v25->vtable._1_Finalize.method + 2 * *v28);
  }
  else
  {
LABEL_33:
    v29 = sub_1C8010C(this, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v30 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8)) ^ 1;
  return v30 & 1;
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

  if ( (byte_4C00D75 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, x);
    byte_4C00D75 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, (const MethodInfo *)x)) == 0LL )
    sub_1C2E388(this, x);
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
    v8 = sub_1C8010C(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return ClassBoardLock__get_LockModel(x, (const MethodInfo *)x);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  x->fields.isUpdateLine = 1;
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C00D72 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, x);
    byte_4C00D72 = 1;
  }
  if ( !x )
    sub_1C2E388(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C00D73 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, x);
    byte_4C00D73 = 1;
  }
  if ( !x )
    sub_1C2E388(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
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
  ClassBoardController___c__DisplayClass39_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
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
  int32_t acquireFlag; // w8
  struct ClassBoardSquare_o *v23; // x8
  __int64 methodPtr_low; // x11
  struct ClassBoardSquare_o *v25; // x22
  BaseMonoBehaviour_o *_4__this; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  System_Threading_CancellationTokenSource_c *klass; // x8
  __int64 v29; // x9
  int *p_offset; // x10
  __int64 v31; // x0
  BaseMonoBehaviour_o *v32; // x20
  struct System_Threading_CancellationTokenSource_o *v33; // x21
  System_Threading_CancellationTokenSource_c *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  struct ClassBoardController_o *v38; // x8
  ClassBoardController___c__DisplayClass39_0_o *v39; // x20
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  BaseMonoBehaviour_o *v48; // x20
  struct System_Threading_CancellationTokenSource_o *v49; // x21
  System_Threading_CancellationTokenSource_c *v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  struct ClassBoardController_o *v54; // x8
  ClassBoardController___c__DisplayClass39_0_o *v55; // x20
  const MethodInfo *v56; // x3
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  BaseMonoBehaviour_o *v65; // x20
  struct System_Threading_CancellationTokenSource_o *v66; // x21
  System_Threading_CancellationTokenSource_c *v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  struct ClassBoardController_o *v71; // x8
  ClassBoardController___c__DisplayClass39_0_o *v72; // x20
  const MethodInfo *v73; // x4
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v75; // x21
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  BaseMonoBehaviour_o *v82; // x20
  struct System_Threading_CancellationTokenSource_o *v83; // x21
  System_Threading_CancellationTokenSource_c *v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  struct ClassBoardController_o *v88; // x8
  ClassBoardController___c__DisplayClass39_0_o *v89; // x20
  const MethodInfo *v90; // x5
  ClassBoardSquare_o *v91; // x21
  ClassBoardController___c_c *v92; // x0
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v94; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_Action_o *_9__5; // x24
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  ClassBoardLockOpenConfirmDialog_o *v109; // x0
  ClassBoardSquare_o *v110; // x1
  bool v111; // w2
  struct ClassBoardController_o *v112; // x8
  ClassBoardController___c__DisplayClass39_0_o *v113; // x20
  ClassBoardSquare_o *v114; // x21
  ClassBoardController___c_c *v115; // x0
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v117; // x23
  struct ClassBoardController___c_StaticFields *v118; // x0
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_Action_o *_9__7; // x23
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  ClassBoardSquareOpenConfirmDialog_o *v132; // x0
  ClassBoardSquare_o *v133; // x1
  bool v134; // w2
  BaseMonoBehaviour_o *v135; // x20
  struct System_Threading_CancellationTokenSource_o *v136; // x21
  System_Threading_CancellationTokenSource_c *v137; // x8
  __int64 v138; // x9
  int *v139; // x10
  __int64 v140; // x0
  struct ClassBoardController_o *v141; // x8
  ClassBoardController___c__DisplayClass39_0_o *v142; // x20
  ClassBoardSquare_o *v143; // x21
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  ClassBoardController___c__DisplayClass39_0_o *v156; // x20
  ClassBoardSquare_o *v157; // x21
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7

  v2 = this;
  if ( (byte_4C00D78 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v3);
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v4);
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v5);
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v6);
    sub_1C2E12C(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v7);
    sub_1C2E12C(&ClassBoardLock_TypeInfo, v8);
    sub_1C2E12C(&IClassBoardResourceCatalog_TypeInfo, v9);
    sub_1C2E12C(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, v10);
    sub_1C2E12C(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, v11);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__, v12);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__, v13);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__, v14);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__, v15);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__, v16);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__, v17);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__, v18);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__, v19);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__, v20);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1C2E12C(&ClassBoardController___c_TypeInfo, v21);
    byte_4C00D78 = 1;
  }
  acquireFlag = v2->fields.acquireFlag;
  if ( (acquireFlag & 1) != 0 )
  {
    _4__this = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_136;
    m_CancellationTokenSource = _4__this[2].fields.m_CancellationTokenSource;
    if ( !m_CancellationTokenSource )
      goto LABEL_136;
    klass = m_CancellationTokenSource->klass;
    v29 = *(unsigned __int16 *)(&m_CancellationTokenSource->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&m_CancellationTokenSource->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v29;
        p_offset += 4;
        if ( !v29 )
          goto LABEL_17;
      }
      v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_17:
      v31 = sub_1C8010C(_4__this[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v31)(
                                                             m_CancellationTokenSource,
                                                             *(_QWORD *)(v31 + 8));
    if ( !this )
      goto LABEL_136;
    v38 = v2->fields.__4__this;
    if ( !v38 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             _4__this,
                                                             (Il2CppObject *)this->fields.__9__11,
                                                             v38->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    if ( !this )
      goto LABEL_136;
    v39 = this;
    ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)this, 0LL);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    _9__1 = v2->fields.__9__1;
    square = v2->fields.square;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
        0LL);
      v2->fields.__9__1 = _9__1;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__9__1, (int64_t)_9__1, v42, v43, v44, v45, v46, v47);
    }
    ClassBoardSquareDetailDialog__Open((ClassBoardSquareDetailDialog_o *)v39, square, _9__1, 0LL);
  }
  else if ( (acquireFlag & 2) != 0 )
  {
    v32 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v32 )
      goto LABEL_136;
    v33 = v32[2].fields.m_CancellationTokenSource;
    if ( !v33 )
      goto LABEL_136;
    v34 = v33->klass;
    v35 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v36 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_24;
      }
      v37 = (__int64)(&v34->vtable._0_Equals.method + 2 * *v36);
    }
    else
    {
LABEL_24:
      v37 = sub_1C8010C(v32[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v37)(
                                                             v33,
                                                             *(_QWORD *)(v37 + 8));
    if ( !this )
      goto LABEL_136;
    v54 = v2->fields.__4__this;
    if ( !v54 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v32,
                                                             (Il2CppObject *)this->fields.__9__2,
                                                             v54->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v55 = this;
    LOBYTE(this[3].klass) = 0;
    ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    _9__2 = v2->fields.__9__2;
    v58 = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      v2->fields.__9__2 = _9__2;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v59, v60, v61, v62, v63, v64);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v55, v58, _9__2, v56);
  }
  else if ( (acquireFlag & 4) != 0 )
  {
    v48 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v48 )
      goto LABEL_136;
    v49 = v48[2].fields.m_CancellationTokenSource;
    if ( !v49 )
      goto LABEL_136;
    v50 = v49->klass;
    v51 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
    {
      v52 = &v50->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v52 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_40;
      }
      v53 = (__int64)(&v50->vtable._0_Equals.method + 2 * *v52);
    }
    else
    {
LABEL_40:
      v53 = sub_1C8010C(v48[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v53)(
                                                             v49,
                                                             *(_QWORD *)(v53 + 8));
    if ( !this )
      goto LABEL_136;
    v71 = v2->fields.__4__this;
    if ( !v71 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v48,
                                                             (Il2CppObject *)this->fields.__9__7,
                                                             v71->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v72 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    _9__3 = v2->fields.__9__3;
    v75 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
        0LL);
      v2->fields.__9__3 = _9__3;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__9__3, (int64_t)_9__3, v76, v77, v78, v79, v80, v81);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v72, v75, 0, _9__3, v73);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v65 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( v65 )
      {
        v66 = v65[2].fields.m_CancellationTokenSource;
        if ( v66 )
        {
          v67 = v66->klass;
          v68 = *(unsigned __int16 *)(&v66->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v66->klass->_2.bitflags2 + 3) )
          {
            v69 = &v67->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v69 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v68;
              v69 += 4;
              if ( !v68 )
                goto LABEL_56;
            }
            v70 = (__int64)(&v67->vtable._0_Equals.method + 2 * *v69);
          }
          else
          {
LABEL_56:
            v70 = sub_1C8010C(v65[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v70)(
                                                                   v66,
                                                                   *(_QWORD *)(v70 + 8));
          if ( this )
          {
            v88 = v2->fields.__4__this;
            if ( v88 )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v65,
                                                                       (Il2CppObject *)this->fields.__9__5,
                                                                       v88->fields.uiRoot,
                                                                       0LL,
                                                                       (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v89 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
                this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                           this,
                                                                           this->klass[1]._1.name);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
                    v91 = v2->fields.square;
                    v92 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                      v92 = ClassBoardController___c_TypeInfo;
                    }
                    _9__39_4 = v92->static_fields->__9__39_4;
                    if ( !_9__39_4 )
                    {
                      if ( !v92->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v92);
                        v92 = ClassBoardController___c_TypeInfo;
                      }
                      v94 = (Il2CppObject *)v92->static_fields->__9;
                      _9__39_4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__39_4,
                        v94,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__,
                        0LL);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__39_4 = _9__39_4;
                      sub_1C2E0D0(
                        (PartyOrganizationUtility_o *)&static_fields->__9__39_4,
                        (int64_t)_9__39_4,
                        v96,
                        v97,
                        v98,
                        v99,
                        v100,
                        v101);
                    }
                    _9__5 = v2->fields.__9__5;
                    if ( !_9__5 )
                    {
                      _9__5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__5,
                        (Il2CppObject *)v2,
                        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
                        0LL);
                      v2->fields.__9__5 = _9__5;
                      sub_1C2E0D0(
                        (PartyOrganizationUtility_o *)&v2->fields.__9__5,
                        (int64_t)_9__5,
                        v103,
                        v104,
                        v105,
                        v106,
                        v107,
                        v108);
                    }
                    v109 = (ClassBoardLockOpenConfirmDialog_o *)v89;
                    v110 = v91;
                    v111 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1C2E388(this, method);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v82 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v82 )
        goto LABEL_136;
      v83 = v82[2].fields.m_CancellationTokenSource;
      if ( !v83 )
        goto LABEL_136;
      v84 = v83->klass;
      v85 = *(unsigned __int16 *)(&v83->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v83->klass->_2.bitflags2 + 3) )
      {
        v86 = &v84->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v86 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v85;
          v86 += 4;
          if ( !v85 )
            goto LABEL_72;
        }
        v87 = (__int64)(&v84->vtable._0_Equals.method + 2 * *v86);
      }
      else
      {
LABEL_72:
        v87 = sub_1C8010C(v82[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v87)(
                                                               v83,
                                                               *(_QWORD *)(v87 + 8));
      if ( !this )
        goto LABEL_136;
      v112 = v2->fields.__4__this;
      if ( !v112 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v82,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v112->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v113 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0LL);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
      v114 = v2->fields.square;
      v115 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v115 = ClassBoardController___c_TypeInfo;
      }
      _9__39_6 = v115->static_fields->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( !v115->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v115);
          v115 = ClassBoardController___c_TypeInfo;
        }
        v117 = (Il2CppObject *)v115->static_fields->__9;
        _9__39_6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(_9__39_6, v117, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v118 = ClassBoardController___c_TypeInfo->static_fields;
        v118->__9__39_6 = _9__39_6;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v118->__9__39_6,
          (int64_t)_9__39_6,
          v119,
          v120,
          v121,
          v122,
          v123,
          v124);
      }
      _9__7 = v2->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        v2->fields.__9__7 = _9__7;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v2->fields.__9__7,
          (int64_t)_9__7,
          v126,
          v127,
          v128,
          v129,
          v130,
          v131);
      }
      v132 = (ClassBoardSquareOpenConfirmDialog_o *)v113;
      v133 = v114;
      v134 = 0;
    }
    else
    {
      v23 = v2->fields.square;
      if ( v23
        && (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v23->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ClassBoardLock_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
          v25 = v2->fields.square;
        else
          v25 = 0LL;
      }
      else
      {
        v25 = 0LL;
      }
      v135 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v135 )
        goto LABEL_136;
      v136 = v135[2].fields.m_CancellationTokenSource;
      if ( !v136 )
        goto LABEL_136;
      v137 = v136->klass;
      v138 = *(unsigned __int16 *)(&v136->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v136->klass->_2.bitflags2 + 3) )
      {
        v139 = &v137->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v139 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v138;
          v139 += 4;
          if ( !v138 )
            goto LABEL_112;
        }
        v140 = (__int64)(&v137->vtable._0_Equals.method + 2 * *v139);
      }
      else
      {
LABEL_112:
        v140 = sub_1C8010C(v135[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v140)(
                                                               v136,
                                                               *(_QWORD *)(v140 + 8));
      if ( !this )
        goto LABEL_136;
      v141 = v2->fields.__4__this;
      if ( v25 )
      {
        if ( v141 )
        {
          this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v135,
                                                                   (Il2CppObject *)this->fields.__9__5,
                                                                   v141->fields.uiRoot,
                                                                   0LL,
                                                                   (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v142 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
            this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
            if ( this )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                       this,
                                                                       this->klass[1]._1.name);
              if ( this )
              {
                ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
                _9__39_4 = v2->fields.__9__8;
                v143 = v2->fields.square;
                if ( !_9__39_4 )
                {
                  _9__39_4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__39_4,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
                    0LL);
                  v2->fields.__9__8 = _9__39_4;
                  sub_1C2E0D0(
                    (PartyOrganizationUtility_o *)&v2->fields.__9__8,
                    (int64_t)_9__39_4,
                    v144,
                    v145,
                    v146,
                    v147,
                    v148,
                    v149);
                }
                _9__5 = v2->fields.__9__9;
                if ( !_9__5 )
                {
                  _9__5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__5,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
                    0LL);
                  v2->fields.__9__9 = _9__5;
                  sub_1C2E0D0(
                    (PartyOrganizationUtility_o *)&v2->fields.__9__9,
                    (int64_t)_9__5,
                    v150,
                    v151,
                    v152,
                    v153,
                    v154,
                    v155);
                }
                v111 = 1;
                v109 = (ClassBoardLockOpenConfirmDialog_o *)v142;
                v110 = v143;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v109, v110, v111, _9__39_4, _9__5, v90);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v141 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v135,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v141->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2FBBBB0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v156 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0LL);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
      _9__39_6 = v2->fields.__9__12;
      v157 = v2->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        v2->fields.__9__12 = _9__39_6;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v2->fields.__9__12,
          (int64_t)_9__39_6,
          v158,
          v159,
          v160,
          v161,
          v162,
          v163);
      }
      _9__7 = v2->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        v2->fields.__9__13 = _9__7;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v2->fields.__9__13,
          (int64_t)_9__7,
          v164,
          v165,
          v166,
          v167,
          v168,
          v169);
      }
      v134 = 1;
      v132 = (ClassBoardSquareOpenConfirmDialog_o *)v156;
      v133 = v157;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v132, v133, v134, _9__39_6, _9__7, 0LL);
  }
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__1(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass39_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__11; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4C00D7A & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1C2E12C(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
                                                             v5);
    byte_4C00D7A = 1;
  }
  _9__11 = v4->fields.__9__11;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v4->fields.__9__11 = _9__11;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.__9__11, (int64_t)_9__11, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_1C2E388(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__11, v3);
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
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL),
        (square = this->fields.square) == 0LL)
    || (_4__this = this->fields.__4__this) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, v4);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass39_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v11; // x0
  System_Action_object__o *_9__14; // x21
  ClassBoardController___c__DisplayClass39_0_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  ClassBoardController___c__DisplayClass39_0_c *v20; // x8
  __int64 v21; // x9
  IClassBoardSquareUser_c **v22; // x10
  __int64 v23; // x0

  v2 = this;
  if ( (byte_4C00D7B & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1C2E12C(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1C2E12C(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
                                                             v5);
    byte_4C00D7B = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v9 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    v11 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v11 = sub_1C8010C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v11 + 8));
  _9__14 = (System_Action_object__o *)v2->fields.__9__14;
  v13 = this;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_object__o *)sub_1C2E378(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__14,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      0LL);
    v2->fields.__9__14 = (struct System_Action_IClassBoardSquareUser__o *)_9__14;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__9__14, (int64_t)_9__14, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
LABEL_21:
    sub_1C2E388(this, method);
  v20 = v13->klass;
  v21 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v22 = (IClassBoardSquareUser_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_18;
    }
    v23 = (__int64)(&v20->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v22);
  }
  else
  {
LABEL_18:
    v23 = sub_1C8010C(v13, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v23)(
    v13,
    _9__14,
    *(_QWORD *)(v23 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__13(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass39_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__15; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v4 = this;
  if ( (byte_4C00D7C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1C2E12C(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
                                                             v5);
    byte_4C00D7C = 1;
  }
  _9__15 = v4->fields.__9__15;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      _9__15,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v4->fields.__9__15 = _9__15;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v4->fields.__9__15, (int64_t)_9__15, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_1C2E388(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__15, v3);
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
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL),
        (square = this->fields.square) == 0LL)
    || (_4__this = this->fields.__4__this) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, v4);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__2(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__3(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__5(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__7(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass39_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v11; // x0
  System_Action_object__o *_9__10; // x21
  ClassBoardController___c__DisplayClass39_0_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  ClassBoardController___c__DisplayClass39_0_c *v20; // x8
  __int64 v21; // x9
  IClassBoardSquareUser_c **v22; // x10
  __int64 v23; // x0

  v2 = this;
  if ( (byte_4C00D79 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1C2E12C(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1C2E12C(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
                                                             v5);
    byte_4C00D79 = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v9 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    v11 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v11 = sub_1C8010C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v11 + 8));
  _9__10 = (System_Action_object__o *)v2->fields.__9__10;
  v13 = this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_object__o *)sub_1C2E378(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__10,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      0LL);
    v2->fields.__9__10 = (struct System_Action_IClassBoardSquareUser__o *)_9__10;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v2->fields.__9__10, (int64_t)_9__10, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
LABEL_21:
    sub_1C2E388(this, method);
  v20 = v13->klass;
  v21 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v22 = (IClassBoardSquareUser_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_18;
    }
    v23 = (__int64)(&v20->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v22);
  }
  else
  {
LABEL_18:
    v23 = sub_1C8010C(v13, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v23)(
    v13,
    _9__10,
    *(_QWORD *)(v23 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__9(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *Instance; // x0
  __int64 v11; // x1
  struct ClassBoardController_o *_4__this; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  System_Action_object__o *v14; // x21
  Il2CppObject *v15; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct ClassBoardController_o *v23; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v25; // x21
  Il2CppObject *v26; // x22
  struct ClassBoardController___c_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4C00D7D & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1C2E12C(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v5);
    sub_1C2E12C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1C2E12C(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, v7);
    sub_1C2E12C(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, v8);
    sub_1C2E12C(&ClassBoardController___c_TypeInfo, v9);
    byte_4C00D7D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)Instance, 0LL);
  Instance = this->fields.__4__this;
  if ( !Instance )
    goto LABEL_25;
  Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  if ( !Instance )
    goto LABEL_25;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  squareViewList = (System_Collections_Generic_List_object__o *)_4__this->fields.squareViewList;
  Instance = ClassBoardController___c_TypeInfo;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    Instance = ClassBoardController___c_TypeInfo;
  }
  v14 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v14 = (System_Action_object__o *)sub_1C2E378(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v14, v15, Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)v14;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__40_1, (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
  if ( !squareViewList )
    goto LABEL_25;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v14,
    (const MethodInfo_366C2EC *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v23 = this->fields.__4__this;
  if ( !v23 )
    goto LABEL_25;
  Instance = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v23->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    Instance = ClassBoardController___c_TypeInfo;
  }
  v25 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v25 = (System_Action_object__o *)sub_1C2E378(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v25, v26, Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, 0LL);
    v27 = ClassBoardController___c_TypeInfo->static_fields;
    v27->__9__40_2 = (struct System_Action_ClassBoardLine__o *)v25;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v27->__9__40_2, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !lineViewList )
LABEL_25:
    sub_1C2E388(Instance, v11);
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v25,
    (const MethodInfo_366C2EC *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  ClassBoardUIController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  ClassBoardUIController_o *v7; // x20
  System_Action_o *_9__4; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4C00D7E & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_1C2E12C(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__, v4);
    byte_4C00D7E = 1;
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
  ClassBoardUIController__TouchEnable(_4__this, 0LL);
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                           _4__this,
                                           _4__this->klass[1]._1.name);
  v7 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v9, v10, v11, v12, v13, v14);
    }
    if ( v7 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v7, _9__4, 0LL);
      goto LABEL_13;
    }
LABEL_15:
    sub_1C2E388(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0LL);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass41_0___PlayClassBoardStartEffect_b__4(
        ClassBoardController___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1C2E388(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
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
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL),
        (callback = this->fields.callback) == 0LL) )
  {
    sub_1C2E388(_4__this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}