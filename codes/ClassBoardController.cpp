void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardModelBuilder_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_List_object__o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B6A0F6 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardModelBuilder_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v6);
    byte_4B6A0F6 = 1;
  }
  v7 = (ClassBoardModelBuilder_o *)sub_1BE4D18(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v7, 0LL);
  this->fields._builder_k__BackingField = v7;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._builder_k__BackingField,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v14;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.squareViewList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v21;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.lineViewList, (int64_t)v21, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_4B6A0F3 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, squareModel);
    sub_1BE4ACC(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v9);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v10);
    sub_1BE4ACC(&System_Func_IClassBoardLockModel__int__TypeInfo, v11);
    sub_1BE4ACC(&System_Func_IClassBoardLockModel__bool__TypeInfo, v12);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v14);
    sub_1BE4ACC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v15);
    sub_1BE4ACC(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__, v16);
    sub_1BE4ACC(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__, v17);
    sub_1BE4ACC(&ClassBoardController___c_TypeInfo, v18);
    byte_4B6A0F3 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
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
    p_method = sub_1C36AAC(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v26 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
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
    _9__42_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__42_0,
      v30,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_1BE4A70(
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
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
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
    _9__42_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_1,
      v42,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      0LL);
    v43 = ClassBoardController___c_TypeInfo->static_fields;
    v43->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v43->__9__42_1, (int64_t)_9__42_1, v44, v45, v46, v47, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v40,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_2F821CC *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_object_(
         v50,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
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
      v52 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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
    sub_1BE4D28(v20, v21);
  }
LABEL_26:
  v53 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v50,
                                                                                    (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
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
  if ( (byte_4B6A0EE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab);
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7);
    sub_1BE4ACC(&IClassBoardResourceCatalog_TypeInfo, v8);
    this = (ClassBoardController_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    byte_4B6A0EE = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_1BE4D28(this, defaultPrefab);
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
      p_method = sub_1C36AAC(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
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
                      (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
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
  Il2CppObject *v120; // x22
  __int64 v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  System_Collections_Generic_List_object__o *lineViewList; // x0
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  Il2CppClass **v132; // x8
  __int64 v133; // x8
  __int64 v134; // x9
  int *v135; // x10
  __int64 v136; // x0

  if ( (byte_4B6A0ED & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, method);
    sub_1BE4ACC(&IClassBoardLockModel_TypeInfo, v3);
    sub_1BE4ACC(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v10);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v13);
    byte_4B6A0ED = 1;
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
    v20 = sub_1C36AAC(
            *(_QWORD *)(v14 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL);
  }
  v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
  if ( !v22 )
    sub_1BE4D28(0LL, v21);
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
      v26 = sub_1C36AAC(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v30 = sub_1C36AAC(v22, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v31 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
    v32 = sub_1BE4C08(v31, IClassBoardLockModel_TypeInfo);
    if ( v32 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_1BE4D28(v32, v33);
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
        p_method = sub_1C36AAC(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v43 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v43 )
        sub_1BE4D28(0LL, v44);
      if ( !v31 )
        sub_1BE4D28(v43, v44);
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
        sub_1BE4D28(0LL, v33);
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
        v42 = sub_1C36AAC(v31, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v51 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v42)(v31, *(_QWORD *)(v42 + 8));
      v53 = this->fields.resourceCatalog;
      if ( (v51 & 1) != 0 )
      {
        if ( !v53 )
          sub_1BE4D28(v51, v52);
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
          v57 = sub_1C36AAC(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v62 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
        if ( !v62 )
          sub_1BE4D28(0LL, v63);
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
          sub_1BE4D28(v51, v52);
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
          v61 = sub_1C36AAC(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v67 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
        if ( !v67 )
          sub_1BE4D28(0LL, v68);
        v69 = v31->klass;
        v46 = *(ClassBoardSquare_o **)(v67 + 16);
        v47 = IClassBoardSquareModel_TypeInfo;
        v70 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
        {
LABEL_67:
          v50 = sub_1C36AAC(v31, v47, 10LL);
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
      sub_1BE4D28(0LL, v75);
    ClassBoardSquare__Setup(v74, v31, 0LL);
    squareViewList = (System_Collections_Generic_List_object__o *)this->fields.squareViewList;
    if ( !squareViewList )
      sub_1BE4D28(0LL, v77);
    items = squareViewList->fields._items;
    v86 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++squareViewList->fields._version;
    if ( !items )
      sub_1BE4D28(squareViewList, v77);
    size = squareViewList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        squareViewList,
        v76,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &items->obj.klass + size;
      squareViewList->fields._size = size + 1;
      v88[4] = (Il2CppClass *)v76;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v88 + 4), (int64_t)v76, v78, v79, v80, v81, v82, v83);
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
    v92 = sub_1C36AAC(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v92)(v22, *(_QWORD *)(v92 + 8));
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 || (v93 = *(__int64 **)(v14 + 16)) == 0LL )
LABEL_148:
    sub_1BE4D28(v14, v15);
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
    v97 = sub_1C36AAC(*(_QWORD *)(v14 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v99 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v97)(v93, *(_QWORD *)(v97 + 8));
  if ( !v99 )
    sub_1BE4D28(0LL, v98);
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
      v103 = sub_1C36AAC(v99, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v107 = sub_1C36AAC(v99, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v108 = (*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v99, *(_QWORD *)(v107 + 8));
    v110 = this->fields.resourceCatalog;
    if ( !v110 )
      sub_1BE4D28(v108, v109);
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
      v115 = sub_1C36AAC(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v116 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v115)(v110, *(_QWORD *)(v115 + 8));
    if ( !v116 )
      sub_1BE4D28(0LL, v117);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v116 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v120 = Object_object;
    if ( !Object_object )
      sub_1BE4D28(0LL, v119);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v112, 0LL);
    lineViewList = (System_Collections_Generic_List_object__o *)this->fields.lineViewList;
    if ( !lineViewList )
      sub_1BE4D28(0LL, v121);
    v129 = lineViewList->fields._items;
    v130 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++lineViewList->fields._version;
    if ( !v129 )
      sub_1BE4D28(lineViewList, v121);
    v131 = lineViewList->fields._size;
    if ( (unsigned int)v131 >= v129->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        lineViewList,
        v120,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
    }
    else
    {
      v132 = &v129->obj.klass + v131;
      lineViewList->fields._size = v131 + 1;
      v132[4] = (Il2CppClass *)v120;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v132 + 4), (int64_t)v120, v122, v123, v124, v125, v126, v127);
    }
  }
  v133 = *(_QWORD *)v99;
  v134 = *(unsigned __int16 *)(*(_QWORD *)v99 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v99 + 302LL) )
  {
    v135 = (int *)(*(_QWORD *)(v133 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v135 - 1) != System_IDisposable_TypeInfo )
    {
      --v134;
      v135 += 4;
      if ( !v134 )
        goto LABEL_129;
    }
    v136 = v133 + 16LL * *v135 + 312;
  }
  else
  {
LABEL_129:
    v136 = sub_1C36AAC(v99, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v136)(v99, *(_QWORD *)(v136 + 8));
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

  if ( (byte_4B6A0EB & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ClassBoardController__OnClickEffectList_b__32_0__, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B6A0EB = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v11 = (CommonUI_o *)v9;
        v12 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v11 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v11, 0, baseId, 1, v12, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_1BE4D28(Instance, v8);
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

  if ( (byte_4B6A0EA & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ClassBoardController__OnClickHelp_b__31_0__, v3);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v4);
    byte_4B6A0EA = 1;
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
      sub_1BE4D28(0LL, v7);
    ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
    v8 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
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

  if ( (byte_4B6A0EC & 1) == 0 )
  {
    sub_1BE4ACC(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v3);
    byte_4B6A0EC = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_38292EC *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
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
      p_method = sub_1C36AAC(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
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

  if ( (byte_4B6A0F2 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v3);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v4);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v6);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v7);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v8);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v9);
    sub_1BE4ACC(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v10);
    sub_1BE4ACC(&System_Func_ClassBoardLock__int__TypeInfo, v11);
    sub_1BE4ACC(&System_Func_ClassBoardLock__bool__TypeInfo, v12);
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13);
    sub_1BE4ACC(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__, v14);
    sub_1BE4ACC(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__, v15);
    sub_1BE4ACC(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__, v16);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__, v17);
    sub_1BE4ACC(&ClassBoardController___c__DisplayClass41_0_TypeInfo, v18);
    sub_1BE4ACC(&ClassBoardController___c_TypeInfo, v19);
    byte_4B6A0F2 = 1;
  }
  v20 = sub_1BE4D18(ClassBoardController___c__DisplayClass41_0_TypeInfo);
  ClassBoardController___c__DisplayClass41_0___ctor((ClassBoardController___c__DisplayClass41_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v29 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.squareViewList,
          (const MethodInfo_2F81D2C *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
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
    _9__41_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__41_0,
      v33,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_1BE4A70(
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
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
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
    _9__41_1 = (System_Func_object__int__o *)sub_1BE4D18(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__41_1,
      v45,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      0LL);
    v46 = ClassBoardController___c_TypeInfo->static_fields;
    v46->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v46->__9__41_1, (int64_t)_9__41_1, v47, v48, v49, v50, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v43,
                                                               (System_Func_TSource__TKey__o *)_9__41_1,
                                                               (const MethodInfo_2F821CC *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v20 + 16) = 0;
  v54 = v53;
  if ( System_Linq_Enumerable__Any_object_(
         v53,
         (const MethodInfo_2F64CC4 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v20 + 16) = 1;
    v55 = System_Linq_Enumerable__ToArray_object_(
            v54,
            (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
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
      _9__41_2 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__41_2,
        v59,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        0LL);
      v60 = ClassBoardController___c_TypeInfo->static_fields;
      v60->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v60->__9__41_2, (int64_t)_9__41_2, v61, v62, v63, v64, v65, v66);
    }
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v57,
                                                                 (System_Func_TSource__TResult__o *)_9__41_2,
                                                                 (const MethodInfo_2F8A8A8 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v68 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v67,
                                                                                      (const MethodInfo_2F92AD4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v68, 0LL);
  }
  effectController = this->fields.effectController;
  v70 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v70,
    (Il2CppObject *)v20,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_29:
    sub_1BE4D28(Instance, v22);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v70, 0LL);
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
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6A0F4 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, square);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__, v7);
    sub_1BE4ACC(&ClassBoardController___c__DisplayClass43_0_TypeInfo, v8);
    byte_4B6A0F4 = 1;
  }
  v9 = sub_1BE4D18(ClassBoardController___c__DisplayClass43_0_TypeInfo);
  ClassBoardController___c__DisplayClass43_0___ctor((ClassBoardController___c__DisplayClass43_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
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
  v34 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v9,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_1BE4D28(transform, v11);
  v36.fields.z = v30 * z;
  v36.fields.y = v29 * y;
  v36.fields.x = v28 * x;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v36, v34, 0LL);
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

  if ( (byte_4B6A0F1 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, square);
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__, v8);
    sub_1BE4ACC(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v9);
    byte_4B6A0F1 = 1;
  }
  v10 = sub_1BE4D18(ClassBoardController___c__DisplayClass40_0_TypeInfo);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = endAct;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)endAct, v19, v20, v21, v22, v23, v24);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList((ClassBoardUIController_o *)Instance, 0LL),
        effectController = this->fields.effectController,
        v26 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)v10,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_10:
    sub_1BE4D28(Instance, v12);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v26, 0LL);
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
  __int64 v16; // x1
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

  if ( (byte_4B6A0E8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1BE4ACC(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1BE4ACC(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v4);
    sub_1BE4ACC(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v5);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_ClassBoardLine___, v6);
    sub_1BE4ACC(&Method_BasicHelper_ForEach_ClassBoardSquare___, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v9);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v10);
    sub_1BE4ACC(&Method_ClassBoardController___c__Release_b__29_0__, v11);
    sub_1BE4ACC(&Method_ClassBoardController___c__Release_b__29_1__, v12);
    sub_1BE4ACC(&ClassBoardController___c_TypeInfo, v13);
    byte_4B6A0E8 = 1;
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
    UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
  }
  v18 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_2F449D0 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
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
    _9__29_0 = (System_Action_object__o *)sub_1BE4D18(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__29_0, v22, Method_ClassBoardController___c__Release_b__29_0__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_1BE4A70(
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
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_ClassBoardSquare___);
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
          (const MethodInfo_2F449D0 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
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
    _9__29_1 = (System_Action_object__o *)sub_1BE4D18(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__29_1, v37, Method_ClassBoardController___c__Release_b__29_1__, 0LL);
    v38 = ClassBoardController___c_TypeInfo->static_fields;
    v38->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v38->__9__29_1, (int64_t)_9__29_1, v39, v40, v41, v42, v43, v44);
  }
  BasicHelper__ForEach_object_(
    v35,
    (System_Action_T__o *)_9__29_1,
    (const MethodInfo_2F4606C *)Method_BasicHelper_ForEach_ClassBoardLine___);
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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.effectController, 0LL, v51, v45, v46, v47, v48, v49);
  this->fields.background = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.background, 0LL, v53, v54, v55, v56, v57, v58);
  v15 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                     this,
                                     this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v15 )
LABEL_30:
    sub_1BE4D28(v15, v16);
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v15, 0LL);
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

  if ( (byte_4B6A0E9 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, action);
    byte_4B6A0E9 = 1;
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
      sub_1BE4D28(0LL, v7);
    *(_QWORD *)(v6 + 88) = action;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v6 + 88), (int64_t)action, v8, v9, v10, v11, v12, v13);
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
  const MethodInfo *v32; // x2
  UnityEngine_Texture_o *targetTexture; // x23
  __int64 v34; // x1
  const MethodInfo_370D494 *v35; // x2
  MapCamera_o *v36; // x23
  BalanceConfig_c *v37; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  System_Action_o *v40; // x23
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x1
  Il2CppObject *current; // x22
  System_Action_object__o *v51; // x23
  __int64 v52; // x0
  __int64 v53; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v56; // x23
  ClassBoardEffectController_o *v57; // x24
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v65; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v68; // 0:x3.8
  System_Nullable_Vector3__o v69; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B6A0E7 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_ClassBoardSquare__TypeInfo, setResourceCatalog);
    sub_1BE4ACC(&System_Action_TypeInfo, v13);
    sub_1BE4ACC(&BalanceConfig_TypeInfo, v14);
    sub_1BE4ACC(&Method_ClassBoardController_ShowBoard__, v15);
    sub_1BE4ACC(&ClassBoardEffectController_TypeInfo, v16);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v18);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v20);
    sub_1BE4ACC(&Method_System_Nullable_Vector3___ctor__, v21);
    sub_1BE4ACC(&Method_System_Nullable_float___ctor__, v22);
    sub_1BE4ACC(&StringLiteral_13021/*"Sony SO-41B"*/, v23);
    byte_4B6A0E7 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.resourceCatalog,
    (int64_t)setResourceCatalog,
    (int64_t)classBoardBackground,
    baseId,
    *(System_String_o **)&iconId,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.background = classBoardBackground;
  sub_1BE4A70(
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
    goto LABEL_27;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_27;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v32);
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
  mapCamera = (MapCamera_o *)System_String__Equals_62707124(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_13021/*"Sony SO-41B"*/,
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
  v36 = this->fields.mapCamera;
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v34);
    byte_4B612E1 = 1;
  }
  *(_QWORD *)&v69.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v69.fields.hasValue = &v65;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v65.fields.hasValue = 0LL;
  *(_QWORD *)&v65.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v69, zeroVector, v35);
  v37 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v37 = BalanceConfig_TypeInfo;
  }
  static_fields = v37->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_370B430 *)Method_System_Nullable_float___ctor__);
  if ( !v36 )
    goto LABEL_27;
  v68 = size;
  MapCamera__StartAutoWork(v36, 0.0, v65, v68, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v40 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v40;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&classBoardBackground->fields.showBoardCallback,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v47);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v48);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v49),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_27:
    sub_1BE4D28(mapCamera, v30);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)mapCamera,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v66.fields._current;
    v51 = (System_Action_object__o *)sub_1BE4D18(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(
      v51,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      0LL);
    if ( !current )
      sub_1BE4D28(v52, v53);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v51, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v56 = this->fields.mapCamera;
  v57 = (ClassBoardEffectController_o *)sub_1BE4D18(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v57,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v56,
    classBoardBackground,
    0LL);
  this->fields.effectController = v57;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.effectController, (int64_t)v57, v58, v59, v60, v61, v62, v63);
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
  ClassBoardUIController_o *v42; // x21
  ClassBoardUIController_o *v43; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  Il2CppClass *v45; // x20
  ClassBoardController_o *v46; // x19
  int32_t v47; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4B6A0EF & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&baseId);
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v4);
    sub_1BE4ACC(&Method_ClassBoardController_OnClickEffectList__, v5);
    sub_1BE4ACC(&Method_ClassBoardController_OnClickHelp__, v6);
    sub_1BE4ACC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1BE4ACC(&DataManager_TypeInfo, v8);
    sub_1BE4ACC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_1BE4ACC(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_1BE4ACC(&int_TypeInfo, v11);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_20805/*"img_txt_classscore_{0}"*/, v13);
    this = (ClassBoardController_o *)sub_1BE4ACC(&StringLiteral_3533/*"CLASS_BOARD_HEADER_MESSAGE"*/, v14);
    byte_4B6A0EF = 1;
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
    p_method = sub_1C36AAC(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                    (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
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
  v22 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v3, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v21 )
    goto LABEL_28;
  *(_QWORD *)(v21 + 96) = v22;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v21 + 96), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v30 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v3, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v29 )
    goto LABEL_28;
  *(_QWORD *)(v29 + 104) = v30;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v29 + 104), (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v47 = v3->fields.baseId;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v37, v38, v39);
  v41 = System_String__Format((System_String_o *)StringLiteral_20805/*"img_txt_classscore_{0}"*/, v40, 0LL);
  v42 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v42 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderTitle(v42, (AtlasManagerUnit_o *)this, v41, 0LL);
  v43 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3533/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v43 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderMessage(v43, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_28;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v3->fields.baseId,
                                     (const MethodInfo_31FD818 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v46) )
  {
LABEL_28:
    sub_1BE4D28(this, *(_QWORD *)&baseId);
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

  if ( (byte_4B6A0F0 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, square);
    sub_1BE4ACC(&ClassBoardLock_TypeInfo, v5);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__, v7);
    sub_1BE4ACC(&ClassBoardController___c__DisplayClass39_0_TypeInfo, v8);
    byte_4B6A0F0 = 1;
  }
  v9 = sub_1BE4D18(ClassBoardController___c__DisplayClass39_0_TypeInfo);
  ClassBoardController___c__DisplayClass39_0___ctor((ClassBoardController___c__DisplayClass39_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_29;
  *(_QWORD *)(v9 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = square;
  v18 = (ClassBoardSquare_o **)(v9 + 32);
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)square, v19, v20, v21, v22, v23, v24);
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
    v29 = sub_1C36AAC(v25, IClassBoardSquareModel_TypeInfo, 13LL);
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
    p_method = sub_1C36AAC(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 5LL);
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
      v38 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v9,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v37, v38, v39);
      return;
    }
LABEL_29:
    sub_1BE4D28(v10, v11);
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B6A0F5 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo, method);
    byte_4B6A0F5 = 1;
  }
  v3 = sub_1BE4D18(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__45___ctor((ClassBoardController__ShowBoardCoroutine_d__45_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BE4D28(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
    sub_1BE4D28(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B6A0F7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B6A0F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_1BE4D28(Instance, v4);
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
    sub_1BE4D28(0LL, v3);
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
    sub_1BE4D28(0LL, v3);
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
  sub_1BE4A70(
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
  const MethodInfo *v23; // x2
  System_Action_o *v24; // x20
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_4B6A108 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v10);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)sub_1BE4ACC(
                                                                 &Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__,
                                                                 v11);
    byte_4B6A108 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v26, 0, sizeof(v26));
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
      sub_1BE4A70(p__2__current, 0LL, v13, v14, v15, v16, v17, v18);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    this = _4__this[13];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v25;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          ((void (*)(void))i.fields._current->klass->vtable[7].method)() )
    {
      if ( !i.fields._current )
        sub_1BE4D28(0LL, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = _4__this[14];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v26.fields._current )
        sub_1BE4D28(0LL, v22);
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v26.fields._current, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)(*(__int64 (__fastcall **)(ClassBoardController__ShowBoardCoroutine_d__45_o **, Il2CppObject *))&(*_4__this)[9].fields.__1__state)(
                                                                 _4__this,
                                                                 (*_4__this)[9].fields.__2__current);
    if ( !this )
LABEL_25:
      sub_1BE4D28(this, method);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v23);
    v24 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
    EventTutorialMaster__CheckTutorial(0, 82, v24, 0, 0, 0, 0, 0LL);
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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

  if ( (byte_4B6A0F8 & 1) == 0 )
  {
    sub_1BE4ACC(&ClassBoardController___c_TypeInfo, v1);
    byte_4B6A0F8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v2;
  sub_1BE4A70(
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

  if ( (byte_4B6A0FD & 1) == 0 )
  {
    sub_1BE4ACC(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4B6A0FD = 1;
  }
  v26 = 0;
  v25 = 0LL;
  if ( !x )
    sub_1BE4D28(this, x);
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
    p_method = sub_1C36AAC(x, IClassBoardLockModel_TypeInfo, 0LL);
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
    v14 = sub_1C36AAC(x, IClassBoardSquareModel_TypeInfo, 13LL);
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
    v18 = sub_1C36AAC(x, IClassBoardSquareModel_TypeInfo, 13LL);
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
      v22 = sub_1C36AAC(x, IClassBoardLockModel_TypeInfo, 1LL);
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

  if ( (byte_4B6A0FE & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, x);
    byte_4B6A0FE = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
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
    p_method = sub_1C36AAC(x, IClassBoardSquareModel_TypeInfo, 0LL);
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
  ClassBoardController___c_c *v12; // x8
  ClassBoardController___c_o *v13; // x20
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ClassBoardController___c_c *v17; // x8
  ClassBoardController___c_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  ClassBoardController___c_c *v22; // x8
  ClassBoardController___c_o *v23; // x19
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  char v27; // w8
  __int64 v29; // [xsp+0h] [xbp-40h] BYREF
  int v30; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v31; // 0:x0.12

  if ( (byte_4B6A0FB & 1) == 0 )
  {
    sub_1BE4ACC(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4B6A0FB = 1;
  }
  v30 = 0;
  v29 = 0LL;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
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
    v9 = sub_1C36AAC(this, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  v30 = v10;
  *(_QWORD *)&v31.fields.Type = &v29;
  v31.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v31, v11) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v12 = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      v15 += 4;
      if ( !v14 )
        goto LABEL_17;
    }
    v16 = (__int64)(&v12[1]._1.methods + 2 * *v15);
  }
  else
  {
LABEL_17:
    v16 = sub_1C36AAC(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v16)(v13, 0LL, *(_QWORD *)(v16 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v17 = this->klass;
  v18 = this;
  v19 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v20 = &v17->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_25;
    }
    v21 = (__int64)(&v17[1]._1.methods + 2 * *v20);
  }
  else
  {
LABEL_25:
    v21 = sub_1C36AAC(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v21)(v18, 0LL, *(_QWORD *)(v21 + 8)) & 4) != 0 )
  {
LABEL_34:
    v27 = 0;
    return v27 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_38:
    sub_1BE4D28(this, x);
  v22 = this->klass;
  v23 = this;
  v24 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v25 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)(&v22->vtable._1_Finalize.method + 2 * *v25);
  }
  else
  {
LABEL_33:
    v26 = sub_1C36AAC(this, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v27 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8)) ^ 1;
  return v27 & 1;
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

  if ( (byte_4B6A0FC & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, x);
    byte_4B6A0FC = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_1BE4D28(this, x);
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
    v8 = sub_1C36AAC(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BE4D28(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B6A0F9 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, x);
    byte_4B6A0F9 = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B6A0FA & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, x);
    byte_4B6A0FA = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
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
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x3
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  BaseMonoBehaviour_o *v50; // x20
  struct System_Threading_CancellationTokenSource_o *v51; // x21
  System_Threading_CancellationTokenSource_c *v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  struct ClassBoardController_o *v56; // x8
  ClassBoardController___c__DisplayClass39_0_o *v57; // x20
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x3
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v61; // x21
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  BaseMonoBehaviour_o *v68; // x20
  struct System_Threading_CancellationTokenSource_o *v69; // x21
  System_Threading_CancellationTokenSource_c *v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  struct ClassBoardController_o *v74; // x8
  ClassBoardController___c__DisplayClass39_0_o *v75; // x20
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x4
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  BaseMonoBehaviour_o *v86; // x20
  struct System_Threading_CancellationTokenSource_o *v87; // x21
  System_Threading_CancellationTokenSource_c *v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  struct ClassBoardController_o *v92; // x8
  ClassBoardController___c__DisplayClass39_0_o *v93; // x20
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x5
  ClassBoardSquare_o *v96; // x21
  ClassBoardController___c_c *v97; // x0
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v99; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_Action_o *_9__5; // x24
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  ClassBoardLockOpenConfirmDialog_o *v114; // x0
  ClassBoardSquare_o *v115; // x1
  bool v116; // w2
  struct ClassBoardController_o *v117; // x8
  ClassBoardController___c__DisplayClass39_0_o *v118; // x20
  const MethodInfo *v119; // x2
  const MethodInfo *v120; // x5
  ClassBoardSquare_o *v121; // x21
  ClassBoardController___c_c *v122; // x0
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v124; // x23
  struct ClassBoardController___c_StaticFields *v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  System_Action_o *_9__7; // x24
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  ClassBoardSquareOpenConfirmDialog_o *v139; // x0
  ClassBoardSquare_o *v140; // x1
  bool v141; // w2
  BaseMonoBehaviour_o *v142; // x20
  struct System_Threading_CancellationTokenSource_o *v143; // x21
  System_Threading_CancellationTokenSource_c *v144; // x8
  __int64 v145; // x9
  int *v146; // x10
  __int64 v147; // x0
  struct ClassBoardController_o *v148; // x8
  ClassBoardController___c__DisplayClass39_0_o *v149; // x20
  const MethodInfo *v150; // x2
  ClassBoardSquare_o *v151; // x21
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  ClassBoardController___c__DisplayClass39_0_o *v164; // x20
  const MethodInfo *v165; // x2
  ClassBoardSquare_o *v166; // x21
  int64_t v167; // x2
  int32_t v168; // w3
  System_String_o *v169; // x4
  BattleSetupInfo_o *v170; // x5
  FollowerInfo_o *v171; // x6
  PartyListViewItem_o *v172; // x7
  int64_t v173; // x2
  int32_t v174; // w3
  System_String_o *v175; // x4
  BattleSetupInfo_o *v176; // x5
  FollowerInfo_o *v177; // x6
  PartyListViewItem_o *v178; // x7

  v2 = this;
  if ( (byte_4B6A101 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v3);
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v4);
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v5);
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v6);
    sub_1BE4ACC(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v7);
    sub_1BE4ACC(&ClassBoardLock_TypeInfo, v8);
    sub_1BE4ACC(&IClassBoardResourceCatalog_TypeInfo, v9);
    sub_1BE4ACC(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, v10);
    sub_1BE4ACC(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, v11);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__, v12);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__, v13);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__, v14);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__, v15);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__, v16);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__, v17);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__, v18);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__, v19);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__, v20);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BE4ACC(&ClassBoardController___c_TypeInfo, v21);
    byte_4B6A101 = 1;
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
      v31 = sub_1C36AAC(_4__this[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                                                             (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    if ( !this )
      goto LABEL_136;
    v39 = this;
    ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v40);
    _9__1 = v2->fields.__9__1;
    square = v2->fields.square;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
        0LL);
      v2->fields.__9__1 = _9__1;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.__9__1, (int64_t)_9__1, v44, v45, v46, v47, v48, v49);
    }
    ClassBoardSquareDetailDialog__Open((ClassBoardSquareDetailDialog_o *)v39, square, _9__1, v41);
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
      v37 = sub_1C36AAC(v32[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v37)(
                                                             v33,
                                                             *(_QWORD *)(v37 + 8));
    if ( !this )
      goto LABEL_136;
    v56 = v2->fields.__4__this;
    if ( !v56 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v32,
                                                             (Il2CppObject *)this->fields.__9__2,
                                                             v56->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v57 = this;
    LOBYTE(this[3].klass) = 0;
    ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v58);
    _9__2 = v2->fields.__9__2;
    v61 = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      v2->fields.__9__2 = _9__2;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.__9__2, (int64_t)_9__2, v62, v63, v64, v65, v66, v67);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v57, v61, _9__2, v59);
  }
  else if ( (acquireFlag & 4) != 0 )
  {
    v50 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v50 )
      goto LABEL_136;
    v51 = v50[2].fields.m_CancellationTokenSource;
    if ( !v51 )
      goto LABEL_136;
    v52 = v51->klass;
    v53 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
    {
      v54 = &v52->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v54 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_40;
      }
      v55 = (__int64)(&v52->vtable._0_Equals.method + 2 * *v54);
    }
    else
    {
LABEL_40:
      v55 = sub_1C36AAC(v50[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v55)(
                                                             v51,
                                                             *(_QWORD *)(v55 + 8));
    if ( !this )
      goto LABEL_136;
    v74 = v2->fields.__4__this;
    if ( !v74 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v50,
                                                             (Il2CppObject *)this->fields.__9__7,
                                                             v74->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v75 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v76);
    _9__3 = v2->fields.__9__3;
    v79 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
        0LL);
      v2->fields.__9__3 = _9__3;
      sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.__9__3, (int64_t)_9__3, v80, v81, v82, v83, v84, v85);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v75, v79, 0, _9__3, v77);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v68 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( v68 )
      {
        v69 = v68[2].fields.m_CancellationTokenSource;
        if ( v69 )
        {
          v70 = v69->klass;
          v71 = *(unsigned __int16 *)(&v69->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v69->klass->_2.bitflags2 + 3) )
          {
            v72 = &v70->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v72 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v71;
              v72 += 4;
              if ( !v71 )
                goto LABEL_56;
            }
            v73 = (__int64)(&v70->vtable._0_Equals.method + 2 * *v72);
          }
          else
          {
LABEL_56:
            v73 = sub_1C36AAC(v68[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v73)(
                                                                   v69,
                                                                   *(_QWORD *)(v73 + 8));
          if ( this )
          {
            v92 = v2->fields.__4__this;
            if ( v92 )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v68,
                                                                       (Il2CppObject *)this->fields.__9__5,
                                                                       v92->fields.uiRoot,
                                                                       0LL,
                                                                       (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v93 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
                this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                           this,
                                                                           this->klass[1]._1.name);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v94);
                    v96 = v2->fields.square;
                    v97 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                      v97 = ClassBoardController___c_TypeInfo;
                    }
                    _9__39_4 = v97->static_fields->__9__39_4;
                    if ( !_9__39_4 )
                    {
                      if ( !v97->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v97);
                        v97 = ClassBoardController___c_TypeInfo;
                      }
                      v99 = (Il2CppObject *)v97->static_fields->__9;
                      _9__39_4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__39_4,
                        v99,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__,
                        0LL);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__39_4 = _9__39_4;
                      sub_1BE4A70(
                        (PartyOrganizationUtility_o *)&static_fields->__9__39_4,
                        (int64_t)_9__39_4,
                        v101,
                        v102,
                        v103,
                        v104,
                        v105,
                        v106);
                    }
                    _9__5 = v2->fields.__9__5;
                    if ( !_9__5 )
                    {
                      _9__5 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__5,
                        (Il2CppObject *)v2,
                        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
                        0LL);
                      v2->fields.__9__5 = _9__5;
                      sub_1BE4A70(
                        (PartyOrganizationUtility_o *)&v2->fields.__9__5,
                        (int64_t)_9__5,
                        v108,
                        v109,
                        v110,
                        v111,
                        v112,
                        v113);
                    }
                    v114 = (ClassBoardLockOpenConfirmDialog_o *)v93;
                    v115 = v96;
                    v116 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1BE4D28(this, method);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v86 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v86 )
        goto LABEL_136;
      v87 = v86[2].fields.m_CancellationTokenSource;
      if ( !v87 )
        goto LABEL_136;
      v88 = v87->klass;
      v89 = *(unsigned __int16 *)(&v87->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v87->klass->_2.bitflags2 + 3) )
      {
        v90 = &v88->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v90 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v89;
          v90 += 4;
          if ( !v89 )
            goto LABEL_72;
        }
        v91 = (__int64)(&v88->vtable._0_Equals.method + 2 * *v90);
      }
      else
      {
LABEL_72:
        v91 = sub_1C36AAC(v86[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v91)(
                                                               v87,
                                                               *(_QWORD *)(v91 + 8));
      if ( !this )
        goto LABEL_136;
      v117 = v2->fields.__4__this;
      if ( !v117 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v86,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v117->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v118 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, method);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v119);
      v121 = v2->fields.square;
      v122 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v122 = ClassBoardController___c_TypeInfo;
      }
      _9__39_6 = v122->static_fields->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( !v122->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v122);
          v122 = ClassBoardController___c_TypeInfo;
        }
        v124 = (Il2CppObject *)v122->static_fields->__9;
        _9__39_6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(_9__39_6, v124, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v125 = ClassBoardController___c_TypeInfo->static_fields;
        v125->__9__39_6 = _9__39_6;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v125->__9__39_6,
          (int64_t)_9__39_6,
          v126,
          v127,
          v128,
          v129,
          v130,
          v131);
      }
      _9__7 = v2->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        v2->fields.__9__7 = _9__7;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v2->fields.__9__7,
          (int64_t)_9__7,
          v133,
          v134,
          v135,
          v136,
          v137,
          v138);
      }
      v139 = (ClassBoardSquareOpenConfirmDialog_o *)v118;
      v140 = v121;
      v141 = 0;
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
      v142 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v142 )
        goto LABEL_136;
      v143 = v142[2].fields.m_CancellationTokenSource;
      if ( !v143 )
        goto LABEL_136;
      v144 = v143->klass;
      v145 = *(unsigned __int16 *)(&v143->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v143->klass->_2.bitflags2 + 3) )
      {
        v146 = &v144->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v146 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v145;
          v146 += 4;
          if ( !v145 )
            goto LABEL_112;
        }
        v147 = (__int64)(&v144->vtable._0_Equals.method + 2 * *v146);
      }
      else
      {
LABEL_112:
        v147 = sub_1C36AAC(v142[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v147)(
                                                               v143,
                                                               *(_QWORD *)(v147 + 8));
      if ( !this )
        goto LABEL_136;
      v148 = v2->fields.__4__this;
      if ( v25 )
      {
        if ( v148 )
        {
          this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v142,
                                                                   (Il2CppObject *)this->fields.__9__5,
                                                                   v148->fields.uiRoot,
                                                                   0LL,
                                                                   (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v149 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
            this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
            if ( this )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                       this,
                                                                       this->klass[1]._1.name);
              if ( this )
              {
                ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v150);
                _9__39_4 = v2->fields.__9__8;
                v151 = v2->fields.square;
                if ( !_9__39_4 )
                {
                  _9__39_4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__39_4,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
                    0LL);
                  v2->fields.__9__8 = _9__39_4;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)&v2->fields.__9__8,
                    (int64_t)_9__39_4,
                    v152,
                    v153,
                    v154,
                    v155,
                    v156,
                    v157);
                }
                _9__5 = v2->fields.__9__9;
                if ( !_9__5 )
                {
                  _9__5 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__5,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
                    0LL);
                  v2->fields.__9__9 = _9__5;
                  sub_1BE4A70(
                    (PartyOrganizationUtility_o *)&v2->fields.__9__9,
                    (int64_t)_9__5,
                    v158,
                    v159,
                    v160,
                    v161,
                    v162,
                    v163);
                }
                v116 = 1;
                v114 = (ClassBoardLockOpenConfirmDialog_o *)v149;
                v115 = v151;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v114, v115, v116, _9__39_4, _9__5, v95);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v148 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v142,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v148->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2F439F0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v164 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, method);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v165);
      _9__39_6 = v2->fields.__9__12;
      v166 = v2->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        v2->fields.__9__12 = _9__39_6;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v2->fields.__9__12,
          (int64_t)_9__39_6,
          v167,
          v168,
          v169,
          v170,
          v171,
          v172);
      }
      _9__7 = v2->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        v2->fields.__9__13 = _9__7;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&v2->fields.__9__13,
          (int64_t)_9__7,
          v173,
          v174,
          v175,
          v176,
          v177,
          v178);
      }
      v141 = 1;
      v139 = (ClassBoardSquareOpenConfirmDialog_o *)v164;
      v140 = v166;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v139, v140, v141, _9__39_6, _9__7, v120);
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
    sub_1BE4D28(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__11; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v3 = this;
  if ( (byte_4B6A103 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BE4ACC(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
                                                             v4);
    byte_4B6A103 = 1;
  }
  _9__11 = v3->fields.__9__11;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v3->fields.__9__11 = _9__11;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v3->fields.__9__11, (int64_t)_9__11, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
    sub_1BE4D28(this, _);
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
    sub_1BE4D28(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
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
  if ( (byte_4B6A104 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1BE4ACC(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BE4ACC(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
                                                             v5);
    byte_4B6A104 = 1;
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
    v11 = sub_1C36AAC(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v11 + 8));
  _9__14 = (System_Action_object__o *)v2->fields.__9__14;
  v13 = this;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_object__o *)sub_1BE4D18(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__14,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      0LL);
    v2->fields.__9__14 = (struct System_Action_IClassBoardSquareUser__o *)_9__14;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.__9__14, (int64_t)_9__14, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
LABEL_21:
    sub_1BE4D28(this, method);
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
    v23 = sub_1C36AAC(v13, IClassBoardSquareUser_TypeInfo, 2LL);
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
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BE4D28(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass39_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__15; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v3 = this;
  if ( (byte_4B6A105 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BE4ACC(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
                                                             v4);
    byte_4B6A105 = 1;
  }
  _9__15 = v3->fields.__9__15;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__15,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v3->fields.__9__15 = _9__15;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v3->fields.__9__15, (int64_t)_9__15, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
    sub_1BE4D28(this, _);
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
    sub_1BE4D28(_4__this, method);
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
    sub_1BE4D28(_4__this, method);
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
    sub_1BE4D28(_4__this, method);
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
    sub_1BE4D28(_4__this, method);
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
    sub_1BE4D28(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
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
  if ( (byte_4B6A102 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1BE4ACC(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1BE4ACC(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1BE4ACC(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
                                                             v5);
    byte_4B6A102 = 1;
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
    v11 = sub_1C36AAC(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v11 + 8));
  _9__10 = (System_Action_object__o *)v2->fields.__9__10;
  v13 = this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_object__o *)sub_1BE4D18(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__10,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      0LL);
    v2->fields.__9__10 = (struct System_Action_IClassBoardSquareUser__o *)_9__10;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v2->fields.__9__10, (int64_t)_9__10, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
LABEL_21:
    sub_1BE4D28(this, method);
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
    v23 = sub_1C36AAC(v13, IClassBoardSquareUser_TypeInfo, 2LL);
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
  const MethodInfo *v3; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BE4D28(_4__this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *Instance; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct ClassBoardController_o *_4__this; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  System_Action_object__o *v15; // x21
  Il2CppObject *v16; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct ClassBoardController_o *v24; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v26; // x21
  Il2CppObject *v27; // x22
  struct ClassBoardController___c_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B6A106 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1BE4ACC(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v5);
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1BE4ACC(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, v7);
    sub_1BE4ACC(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, v8);
    sub_1BE4ACC(&ClassBoardController___c_TypeInfo, v9);
    byte_4B6A106 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)Instance, v11);
  Instance = this->fields.__4__this;
  if ( !Instance )
    goto LABEL_25;
  Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  if ( !Instance )
    goto LABEL_25;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, v12);
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
  v15 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v15 = (System_Action_object__o *)sub_1BE4D18(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v15, v16, Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)v15;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__40_1, (int64_t)v15, v18, v19, v20, v21, v22, v23);
  }
  if ( !squareViewList )
    goto LABEL_25;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v15,
    (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_25;
  Instance = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v24->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    Instance = ClassBoardController___c_TypeInfo;
  }
  v26 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v26 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v27 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v26 = (System_Action_object__o *)sub_1BE4D18(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v26, v27, Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, 0LL);
    v28 = ClassBoardController___c_TypeInfo->static_fields;
    v28->__9__40_2 = (struct System_Action_ClassBoardLine__o *)v26;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v28->__9__40_2, (int64_t)v26, v29, v30, v31, v32, v33, v34);
  }
  if ( !lineViewList )
LABEL_25:
    sub_1BE4D28(Instance, v11);
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v26,
    (const MethodInfo_35ECC64 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  const MethodInfo *v7; // x2
  ClassBoardUIController_o *v8; // x20
  System_Action_o *_9__4; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B6A107 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_1BE4ACC(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__, v4);
    byte_4B6A107 = 1;
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
  v8 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v10, v11, v12, v13, v14, v15);
    }
    if ( v8 )
    {
      ClassBoardUIController__OpenMissionClearDialog(_4__this, _9__4, v7);
      goto LABEL_13;
    }
LABEL_15:
    sub_1BE4D28(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, v7);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1BE4D28(_4__this, method);
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
    sub_1BE4D28(_4__this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}