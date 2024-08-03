void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ClassBoardModelBuilder_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FF68F & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardModelBuilder_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v7);
    byte_49FF68F = 1;
  }
  v8 = (ClassBoardModelBuilder_o *)sub_1B64314(ClassBoardModelBuilder_TypeInfo, method, v2);
  ClassBoardModelBuilder___ctor(v8, 0LL);
  this->fields._builder_k__BackingField = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._builder_k__BackingField, (int32_t)v8, v9, v10);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClassBoardSquare__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.squareViewList, (int32_t)v13, v14, v15);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClassBoardLine__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lineViewList, (int32_t)v18, v19, v20);
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
  IClassBoardSquareModel_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  ClassBoardController___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Func_object__bool__o *_9__42_0; // x21
  Il2CppObject *v31; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  ClassBoardController___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  System_Func_object__int__o *_9__42_1; // x21
  Il2CppObject *v41; // x22
  struct ClassBoardController___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  ClassBoardUIController_o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v50; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF68C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, squareModel);
    sub_1B640C8(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v10);
    sub_1B640C8(&System_Func_IClassBoardLockModel__int__TypeInfo, v11);
    sub_1B640C8(&System_Func_IClassBoardLockModel__bool__TypeInfo, v12);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v15);
    sub_1B640C8(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__, v16);
    sub_1B640C8(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__, v17);
    sub_1B640C8(&ClassBoardController___c_TypeInfo, v18);
    byte_49FF68C = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                       squareModel,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v19;
  if ( !squareModel )
    goto LABEL_27;
  klass = squareModel->klass;
  v22 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v25 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v28 = ClassBoardController___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v28 = ClassBoardController___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__bool__o *)v28->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ClassBoardController___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_IClassBoardLockModel__bool__TypeInfo, v26, v27);
    System_Func_object__bool____ctor(
      _9__42_0,
      v31,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v33, v34);
  }
  v35 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v38 = ClassBoardController___c_TypeInfo;
  v39 = v35;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v38 = ClassBoardController___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v38->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = ClassBoardController___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_IClassBoardLockModel__int__TypeInfo, v36, v37);
    System_Func_object__int____ctor(
      _9__42_1,
      v41,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      0LL);
    v42 = ClassBoardController___c_TypeInfo->static_fields;
    v42->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->__9__42_1, (int32_t)_9__42_1, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v39,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_object_(
         v45,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v20 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v20 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v20, 1, 0LL);
      v46 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v49 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v47, v48);
      System_Action___ctor(
        v49,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__,
        0LL);
      if ( v46 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v46, v49, 0LL);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1B64324(v20);
  }
LABEL_26:
  v50 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v45,
                                                                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v50, 0LL);
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
  if ( (byte_49FF687 & 1) == 0 )
  {
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab);
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v8);
    this = (ClassBoardController_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FF687 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_1B64324(this);
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
      p_method = sub_1BB60A8(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
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
                      (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
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
  __int64 *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x20
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  IClassBoardSquareModel_o *v29; // x21
  __int64 v30; // x0
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v36; // x8
  __int64 v37; // x9
  IClassBoardSquareModel_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  IClassBoardSquareModel_c *v41; // x8
  ClassBoardSquare_o *v42; // x22
  IClassBoardSquareModel_c *v43; // x1
  __int64 v44; // x9
  IClassBoardSquareModel_c **v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  struct IClassBoardResourceCatalog_o *v48; // x22
  IClassBoardResourceCatalog_c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  IClassBoardResourceCatalog_c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x0
  IClassBoardSquareModel_c *v58; // x8
  __int64 v59; // x9
  IClassBoardSquareModel_c **v60; // x10
  __int64 v61; // x0
  IClassBoardSquareModel_c *v62; // x8
  __int64 v63; // x9
  IClassBoardSquareModel_c **v64; // x10
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  ClassBoardSquare_o *v67; // x0
  Il2CppObject *v68; // x22
  int32_t v69; // w2
  int32_t v70; // w3
  System_Collections_Generic_List_object__o *squareViewList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x8
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 *v80; // x20
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  __int64 v85; // x20
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x0
  struct IClassBoardResourceCatalog_o *v95; // x22
  IClassBoardResourceCatalog_c *v96; // x8
  IClassBoardLineModel_o *v97; // x21
  __int64 v98; // x9
  int32_t *v99; // x10
  __int64 v100; // x0
  __int64 v101; // x0
  Il2CppObject *Object_object; // x0
  Il2CppObject *v103; // x22
  int32_t v104; // w2
  int32_t v105; // w3
  System_Collections_Generic_List_object__o *lineViewList; // x0
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x8
  __int64 v111; // x8
  __int64 v112; // x9
  int *v113; // x10
  __int64 v114; // x0

  if ( (byte_49FF686 & 1) == 0 )
  {
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, method);
    sub_1B640C8(&IClassBoardLockModel_TypeInfo, v3);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v13);
    byte_49FF686 = 1;
  }
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 )
    goto LABEL_148;
  v15 = *(__int64 **)(v14 + 24);
  if ( !v15 )
    goto LABEL_148;
  v16 = *v15;
  v17 = *(unsigned __int16 *)(*v15 + 302);
  if ( *(_WORD *)(*v15 + 302) )
  {
    v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v18 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_9;
    }
    v19 = v16 + 16LL * *v18 + 312;
  }
  else
  {
LABEL_9:
    v19 = sub_1BB60A8(
            *(_QWORD *)(v14 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL);
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
  if ( !v20 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_16:
      v24 = sub_1BB60A8(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v27 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_1BB60A8(v20, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v29 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v30 = sub_1B64204(v29, IClassBoardLockModel_TypeInfo);
    if ( v30 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_1B64324(v30);
      klass = resourceCatalog->klass;
      v33 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v33;
          p_offset += 4;
          if ( !v33 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_1BB60A8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v40 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v40 )
        sub_1B64324(0LL);
      if ( !v29 )
        sub_1B64324(v40);
      v41 = v29->klass;
      v42 = *(ClassBoardSquare_o **)(v40 + 32);
      v43 = IClassBoardSquareModel_TypeInfo;
      v44 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
      if ( !*(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
        goto LABEL_67;
      v45 = (IClassBoardSquareModel_c **)&v41->_1.interfaceOffsets->offset;
      while ( *(v45 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v44;
        v45 += 2;
        if ( !v44 )
          goto LABEL_67;
      }
      v46 = (__int64)&v41->vtable[*(_DWORD *)v45 + 10].method;
    }
    else
    {
      if ( !v29 )
        sub_1B64324(0LL);
      v36 = v29->klass;
      v37 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
      {
        v38 = (IClassBoardSquareModel_c **)&v36->_1.interfaceOffsets->offset;
        while ( *(v38 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v37;
          v38 += 2;
          if ( !v37 )
            goto LABEL_37;
        }
        v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 5].method;
      }
      else
      {
LABEL_37:
        v39 = sub_1BB60A8(v29, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v47 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v39)(v29, *(_QWORD *)(v39 + 8));
      v48 = this->fields.resourceCatalog;
      if ( (v47 & 1) != 0 )
      {
        if ( !v48 )
          sub_1B64324(v47);
        v49 = v48->klass;
        v50 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
        {
          v51 = &v49->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v51 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v50;
            v51 += 4;
            if ( !v50 )
              goto LABEL_54;
          }
          v52 = (__int64)&v49->vtable[*v51].method;
        }
        else
        {
LABEL_54:
          v52 = sub_1BB60A8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v57 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8));
        if ( !v57 )
          sub_1B64324(0LL);
        v58 = v29->klass;
        v42 = *(ClassBoardSquare_o **)(v57 + 40);
        v43 = IClassBoardSquareModel_TypeInfo;
        v59 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
          goto LABEL_67;
        v60 = (IClassBoardSquareModel_c **)&v58->_1.interfaceOffsets->offset;
        while ( *(v60 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v59;
          v60 += 2;
          if ( !v59 )
            goto LABEL_67;
        }
        v46 = (__int64)&v58->vtable[*(_DWORD *)v60 + 10].method;
      }
      else
      {
        if ( !v48 )
          sub_1B64324(v47);
        v53 = v48->klass;
        v54 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
        {
          v55 = &v53->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v55 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v54;
            v55 += 4;
            if ( !v54 )
              goto LABEL_60;
          }
          v56 = (__int64)&v53->vtable[*v55].method;
        }
        else
        {
LABEL_60:
          v56 = sub_1BB60A8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v61 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
        if ( !v61 )
          sub_1B64324(0LL);
        v62 = v29->klass;
        v42 = *(ClassBoardSquare_o **)(v61 + 16);
        v43 = IClassBoardSquareModel_TypeInfo;
        v63 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
        {
LABEL_67:
          v46 = sub_1BB60A8(v29, v43, 10LL);
          goto LABEL_77;
        }
        v64 = (IClassBoardSquareModel_c **)&v62->_1.interfaceOffsets->offset;
        while ( *(v64 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v63;
          v64 += 2;
          if ( !v63 )
            goto LABEL_67;
        }
        v46 = (__int64)&v62->vtable[*(_DWORD *)v64 + 10].method;
      }
    }
LABEL_77:
    v65 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v46)(v29, *(_QWORD *)(v46 + 8));
    v67 = ClassBoardController__CloneSquareObject(this, v42, v65, v66);
    v68 = (Il2CppObject *)v67;
    if ( !v67 )
      sub_1B64324(0LL);
    ClassBoardSquare__Setup(v67, v29, 0LL);
    squareViewList = (System_Collections_Generic_List_object__o *)this->fields.squareViewList;
    if ( !squareViewList )
      sub_1B64324(0LL);
    items = squareViewList->fields._items;
    v73 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++squareViewList->fields._version;
    if ( !items )
      sub_1B64324(squareViewList);
    size = squareViewList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        squareViewList,
        v68,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
    }
    else
    {
      v75 = &items->obj.klass + size;
      squareViewList->fields._size = size + 1;
      v75[4] = (Il2CppClass *)v68;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v68, v69, v70);
    }
  }
  v76 = *(_QWORD *)v20;
  v77 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      --v77;
      v78 += 4;
      if ( !v77 )
        goto LABEL_87;
    }
    v79 = v76 + 16LL * *v78 + 312;
  }
  else
  {
LABEL_87:
    v79 = sub_1BB60A8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v79)(v20, *(_QWORD *)(v79 + 8));
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 || (v80 = *(__int64 **)(v14 + 16)) == 0LL )
LABEL_148:
    sub_1B64324(v14);
  v81 = *v80;
  v82 = *(unsigned __int16 *)(*v80 + 302);
  if ( *(_WORD *)(*v80 + 302) )
  {
    v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v83 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v82;
      v83 += 4;
      if ( !v82 )
        goto LABEL_95;
    }
    v84 = v81 + 16LL * *v83 + 312;
  }
  else
  {
LABEL_95:
    v84 = sub_1BB60A8(*(_QWORD *)(v14 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v85 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8));
  if ( !v85 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v86 = *(_QWORD *)v85;
    v87 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
    {
      v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v88 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v87;
        v88 += 4;
        if ( !v87 )
          goto LABEL_102;
      }
      v89 = v86 + 16LL * *v88 + 312;
    }
    else
    {
LABEL_102:
      v89 = sub_1BB60A8(v85, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v85, *(_QWORD *)(v89 + 8)) & 1) == 0 )
      break;
    v90 = *(_QWORD *)v85;
    v91 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
    {
      v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v92 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v91;
        v92 += 4;
        if ( !v91 )
          goto LABEL_109;
      }
      v93 = v90 + 16LL * *v92 + 312;
    }
    else
    {
LABEL_109:
      v93 = sub_1BB60A8(v85, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v94 = (*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v85, *(_QWORD *)(v93 + 8));
    v95 = this->fields.resourceCatalog;
    if ( !v95 )
      sub_1B64324(v94);
    v96 = v95->klass;
    v97 = (IClassBoardLineModel_o *)v94;
    v98 = *(unsigned __int16 *)(&v95->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v95->klass->_2.bitflags2 + 3) )
    {
      v99 = &v96->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v99 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v98;
        v99 += 4;
        if ( !v98 )
          goto LABEL_116;
      }
      v100 = (__int64)&v96->vtable[*v99].method;
    }
    else
    {
LABEL_116:
      v100 = sub_1BB60A8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v101 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v100)(v95, *(_QWORD *)(v100 + 8));
    if ( !v101 )
      sub_1B64324(0LL);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v101 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v103 = Object_object;
    if ( !Object_object )
      sub_1B64324(0LL);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v97, 0LL);
    lineViewList = (System_Collections_Generic_List_object__o *)this->fields.lineViewList;
    if ( !lineViewList )
      sub_1B64324(0LL);
    v107 = lineViewList->fields._items;
    v108 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++lineViewList->fields._version;
    if ( !v107 )
      sub_1B64324(lineViewList);
    v109 = lineViewList->fields._size;
    if ( (unsigned int)v109 >= v107->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        lineViewList,
        v103,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
    }
    else
    {
      v110 = &v107->obj.klass + v109;
      lineViewList->fields._size = v109 + 1;
      v110[4] = (Il2CppClass *)v103;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v110 + 4), (int32_t)v103, v104, v105);
    }
  }
  v111 = *(_QWORD *)v85;
  v112 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
  {
    v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
    {
      --v112;
      v113 += 4;
      if ( !v112 )
        goto LABEL_129;
    }
    v114 = v111 + 16LL * *v113 + 312;
  }
  else
  {
LABEL_129:
    v114 = sub_1BB60A8(v85, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v114)(v85, *(_QWORD *)(v114 + 8));
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  Il2CppObject *Instance; // x0
  Il2CppObject *v8; // x0
  int32_t baseId; // w20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22

  if ( (byte_49FF684 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardController__OnClickEffectList_b__32_0__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49FF684 = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v10 = (CommonUI_o *)v8;
        v13 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v11, v12);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v10 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v10, 0, baseId, 1, v13, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_1B64324(Instance);
  }
}


void __fastcall ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x20
  ClassBoardUIController_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FF683 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardController__OnClickHelp_b__31_0__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FF683 = 1;
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
      sub_1B64324(0LL);
    ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__31_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v9, 0LL);
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

  if ( (byte_49FF685 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_1B640C8(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v3);
    byte_49FF685 = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_36EC560 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
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
      p_method = sub_1BB60A8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
      resourceCatalog,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v21; // x20
  Il2CppObject *Instance; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  ClassBoardController___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v31; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  ClassBoardController___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  System_Func_object__int__o *_9__41_1; // x22
  Il2CppObject *v41; // x23
  struct ClassBoardController___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  System_Object_array *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  ClassBoardController___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x21
  System_Func_object__object__o *_9__41_2; // x22
  Il2CppObject *v55; // x23
  struct ClassBoardController___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v60; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v62; // x21
  const MethodInfo *v63; // x2

  if ( (byte_49FF68B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v10);
    sub_1B640C8(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v11);
    sub_1B640C8(&System_Func_ClassBoardLock__int__TypeInfo, v12);
    sub_1B640C8(&System_Func_ClassBoardLock__bool__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14);
    sub_1B640C8(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__, v15);
    sub_1B640C8(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__, v16);
    sub_1B640C8(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__, v17);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__, v18);
    sub_1B640C8(&ClassBoardController___c__DisplayClass41_0_TypeInfo, v19);
    sub_1B640C8(&ClassBoardController___c_TypeInfo, v20);
    byte_49FF68B = 1;
  }
  v21 = sub_1B64314(ClassBoardController___c__DisplayClass41_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_29;
  *(_QWORD *)(v21 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)this, v23, v24);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v25 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.squareViewList,
          (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v28 = ClassBoardController___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v28 = ClassBoardController___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v28->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ClassBoardController___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ClassBoardLock__bool__TypeInfo, v26, v27);
    System_Func_object__bool____ctor(
      _9__41_0,
      v31,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v33, v34);
  }
  v35 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v38 = ClassBoardController___c_TypeInfo;
  v39 = v35;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v38 = ClassBoardController___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__int__o *)v38->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = ClassBoardController___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__41_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_ClassBoardLock__int__TypeInfo, v36, v37);
    System_Func_object__int____ctor(
      _9__41_1,
      v41,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      0LL);
    v42 = ClassBoardController___c_TypeInfo->static_fields;
    v42->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->__9__41_1, (int32_t)_9__41_1, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v39,
                                                               (System_Func_TSource__TKey__o *)_9__41_1,
                                                               (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v21 + 16) = 0;
  v46 = v45;
  if ( System_Linq_Enumerable__Any_object_(
         v45,
         (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v21 + 16) = 1;
    v49 = System_Linq_Enumerable__ToArray_object_(
            v46,
            (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v52 = ClassBoardController___c_TypeInfo;
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)v49;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v52 = ClassBoardController___c_TypeInfo;
    }
    _9__41_2 = (System_Func_object__object__o *)v52->static_fields->__9__41_2;
    if ( !_9__41_2 )
    {
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        v52 = ClassBoardController___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v52->static_fields->__9;
      _9__41_2 = (System_Func_object__object__o *)sub_1B64314(
                                                    System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo,
                                                    v50,
                                                    v51);
      System_Func_object__object____ctor(
        _9__41_2,
        v55,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        0LL);
      v56 = ClassBoardController___c_TypeInfo->static_fields;
      v56->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v56->__9__41_2, (int32_t)_9__41_2, v57, v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v53,
                                                                 (System_Func_TSource__TResult__o *)_9__41_2,
                                                                 (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v60 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v59,
                                                                                      (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v60, 0LL);
  }
  effectController = this->fields.effectController;
  v62 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v47, v48);
  System_Action___ctor(
    v62,
    (Il2CppObject *)v21,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_29:
    sub_1B64324(Instance);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v62, v63);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  ClassBoardEffectController_o *effectController; // x22
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  __int64 v25; // x1
  __int64 v26; // x2
  System_Action_o *v27; // x19
  const MethodInfo *v28; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF68D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, square);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__, v7);
    sub_1B640C8(&ClassBoardController___c__DisplayClass43_0_TypeInfo, v8);
    byte_49FF68D = 1;
  }
  v9 = sub_1B64314(ClassBoardController___c__DisplayClass43_0_TypeInfo, square, callback);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v13, v14);
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
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (ClassBoardUIController_o *)this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v19 = v16;
  v20 = v17;
  v21 = v18;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v27 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v25, v26);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_1B64324(transform);
  v30.fields.z = v21 * z;
  v30.fields.y = v20 * y;
  v30.fields.x = v19 * x;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v30, v27, v28);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  ClassBoardEffectController_o *effectController; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3

  if ( (byte_49FF68A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, square);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__, v8);
    sub_1B640C8(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v9);
    byte_49FF68A = 1;
  }
  v10 = sub_1B64314(ClassBoardController___c__DisplayClass40_0_TypeInfo, square, endAct);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 24) = endAct;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)endAct, v14, v15);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList((ClassBoardUIController_o *)Instance, 0LL),
        effectController = this->fields.effectController,
        v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18),
        System_Action___ctor(
          v19,
          (Il2CppObject *)v10,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_10:
    sub_1B64324(Instance);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v19, v20);
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
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  ClassBoardController___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x20
  System_Action_object__o *_9__29_0; // x21
  Il2CppObject *v23; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v29; // w9
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  ClassBoardController___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_T__o *v34; // x20
  System_Action_object__o *_9__29_1; // x21
  Il2CppObject *v36; // x22
  struct ClassBoardController___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w3
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int32_t v42; // w2
  int v43; // w9
  int32_t v44; // w2
  int32_t v45; // w3

  if ( (byte_49FF681 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1B640C8(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v4);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v5);
    sub_1B640C8(&Method_BasicHelper_ForEach_ClassBoardLine___, v6);
    sub_1B640C8(&Method_BasicHelper_ForEach_ClassBoardSquare___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_ClassBoardController___c__Release_b__29_0__, v11);
    sub_1B640C8(&Method_ClassBoardController___c__Release_b__29_1__, v12);
    sub_1B640C8(&ClassBoardController___c_TypeInfo, v13);
    byte_49FF681 = 1;
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
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  v17 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v20 = ClassBoardController___c_TypeInfo;
  v21 = v17;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v20 = ClassBoardController___c_TypeInfo;
  }
  _9__29_0 = (System_Action_object__o *)v20->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ClassBoardController___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__29_0 = (System_Action_object__o *)sub_1B64314(System_Action_ClassBoardSquare__TypeInfo, v18, v19);
    System_Action_object____ctor(_9__29_0, v23, Method_ClassBoardController___c__Release_b__29_0__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v25, v26);
  }
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)_9__29_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_30;
  size = squareViewList->fields._size;
  v29 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v29;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0LL);
  v30 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v33 = ClassBoardController___c_TypeInfo;
  v34 = v30;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v33 = ClassBoardController___c_TypeInfo;
  }
  _9__29_1 = (System_Action_object__o *)v33->static_fields->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = ClassBoardController___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__29_1 = (System_Action_object__o *)sub_1B64314(System_Action_ClassBoardLine__TypeInfo, v31, v32);
    System_Action_object____ctor(_9__29_1, v36, Method_ClassBoardController___c__Release_b__29_1__, 0LL);
    v37 = ClassBoardController___c_TypeInfo->static_fields;
    v37->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v37->__9__29_1, (int32_t)_9__29_1, v38, v39);
  }
  BasicHelper__ForEach_object_(
    v34,
    (System_Action_T__o *)_9__29_1,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_30;
  v42 = lineViewList->fields._size;
  v43 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v43;
  if ( v42 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v42, 0LL);
  this->fields.effectController = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectController, 0, v42, v40);
  this->fields.background = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.background, 0, v44, v45);
  v15 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                     this,
                                     this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v15 )
LABEL_30:
    sub_1B64324(v15);
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v15, 0LL);
}


void __fastcall ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FF682 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, action);
    byte_49FF682 = 1;
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
      sub_1B64324(0LL);
    *(_QWORD *)(v6 + 88) = action;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v6 + 88), (int32_t)action, v7, v8);
  }
}


void __fastcall ClassBoardController__Setup(
        ClassBoardController_o *this,
        IClassBoardResourceCatalog_o *setResourceCatalog,
        ClassBoardBackground_o *classBoardBackground,
        int32_t baseId,
        int32_t iconId,
        const MethodInfo *method)
{
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
  int32_t v22; // w2
  int32_t v23; // w3
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v25; // x2
  UnityEngine_Texture_o *targetTexture; // x23
  __int64 v27; // x1
  const MethodInfo_35D2010 *v28; // x2
  MapCamera_o *v29; // x23
  BalanceConfig_c *v30; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x1
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *current; // x22
  System_Action_object__o *v44; // x23
  __int64 v45; // x0
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v48; // x23
  __int64 v49; // x1
  __int64 v50; // x2
  ClassBoardEffectController_o *v51; // x24
  const MethodInfo *v52; // x5
  int32_t v53; // w2
  int32_t v54; // w3
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v56; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v59; // 0:x3.8
  System_Nullable_Vector3__o v60; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF680 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ClassBoardSquare__TypeInfo, setResourceCatalog);
    sub_1B640C8(&System_Action_TypeInfo, v11);
    sub_1B640C8(&BalanceConfig_TypeInfo, v12);
    sub_1B640C8(&Method_ClassBoardController_ShowBoard__, v13);
    sub_1B640C8(&ClassBoardEffectController_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v18);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v19);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v20);
    sub_1B640C8(&StringLiteral_12762/*"Sony SO-41B"*/, v21);
    byte_49FF680 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.resourceCatalog,
    (int32_t)setResourceCatalog,
    (int32_t)classBoardBackground,
    baseId);
  this->fields.background = classBoardBackground;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.background, (int32_t)classBoardBackground, v22, v23);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_27;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_27;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v25);
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
  mapCamera = (MapCamera_o *)System_String__Equals_61383712(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_12762/*"Sony SO-41B"*/,
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
  v29 = this->fields.mapCamera;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v27);
    byte_49F7111 = 1;
  }
  *(_QWORD *)&v60.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v60.fields.hasValue = &v56;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v56.fields.hasValue = 0LL;
  *(_QWORD *)&v56.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v60, zeroVector, v28);
  v30 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  static_fields = v30->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
  if ( !v29 )
    goto LABEL_27;
  v59 = size;
  MapCamera__StartAutoWork(v29, 0.0, v56, v59, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v35;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&classBoardBackground->fields.showBoardCallback,
    (int32_t)v35,
    v36,
    v37);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v38);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v39);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v40),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_27:
    sub_1B64324(mapCamera);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)mapCamera,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v57.fields._current;
    v44 = (System_Action_object__o *)sub_1B64314(System_Action_ClassBoardSquare__TypeInfo, v41, v42);
    System_Action_object____ctor(
      v44,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      0LL);
    if ( !current )
      sub_1B64324(v45);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v44, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v48 = this->fields.mapCamera;
  v51 = (ClassBoardEffectController_o *)sub_1B64314(ClassBoardEffectController_TypeInfo, v49, v50);
  ClassBoardEffectController___ctor(
    v51,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v48,
    classBoardBackground,
    v52);
  this->fields.effectController = v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectController, (int32_t)v51, v53, v54);
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
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x0
  System_String_o *v34; // x20
  ClassBoardUIController_o *v35; // x21
  ClassBoardUIController_o *v36; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  Il2CppClass *v38; // x20
  ClassBoardController_o *v39; // x19
  int32_t v40; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_49FF688 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&baseId);
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v4);
    sub_1B640C8(&Method_ClassBoardController_OnClickEffectList__, v5);
    sub_1B640C8(&Method_ClassBoardController_OnClickHelp__, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_20432/*"img_txt_classscore_{0}"*/, v13);
    this = (ClassBoardController_o *)sub_1B640C8(&StringLiteral_3476/*"CLASS_BOARD_HEADER_MESSAGE"*/, v14);
    byte_49FF688 = 1;
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
    p_method = sub_1BB60A8(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                    (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
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
  v24 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)v3, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v21 )
    goto LABEL_28;
  *(_QWORD *)(v21 + 96) = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 96), (int32_t)v24, v25, v26);
  v27 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v28, v29);
  System_Action___ctor(v30, (Il2CppObject *)v3, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v27 )
    goto LABEL_28;
  *(_QWORD *)(v27 + 104) = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 104), (int32_t)v30, v31, v32);
  v40 = v3->fields.baseId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
  v34 = System_String__Format((System_String_o *)StringLiteral_20432/*"img_txt_classscore_{0}"*/, v33, 0LL);
  v35 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v35 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderTitle(v35, (AtlasManagerUnit_o *)this, v34, 0LL);
  v36 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v36 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderMessage(v36, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_28;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v3->fields.baseId,
                                     (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    || (v38 = entity[4].klass,
        v39 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v39) )
  {
LABEL_28:
    sub_1B64324(this);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v39,
    (System_Int32_array *)v38,
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
  int32_t v11; // w2
  int32_t v12; // w3
  ClassBoardSquare_o **v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 *v16; // x22
  __int64 v17; // x8
  __int64 v18; // x9
  IClassBoardSquareModel_c **v19; // x10
  __int64 v20; // x0
  ClassBoardSquare_o *v21; // x8
  __int64 methodPtr_low; // x11
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v25; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardSquare_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3

  if ( (byte_49FF689 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, square);
    sub_1B640C8(&ClassBoardLock_TypeInfo, v5);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__, v7);
    sub_1B640C8(&ClassBoardController___c__DisplayClass39_0_TypeInfo, v8);
    byte_49FF689 = 1;
  }
  v9 = sub_1B64314(ClassBoardController___c__DisplayClass39_0_TypeInfo, square, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_29;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 32) = square;
  v13 = (ClassBoardSquare_o **)(v9 + 32);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)square, v14, v15);
  if ( !*(_QWORD *)(v9 + 32) )
    goto LABEL_29;
  v16 = *(__int64 **)(*(_QWORD *)(v9 + 32) + 176LL);
  if ( !v16 )
    goto LABEL_29;
  v17 = *v16;
  v18 = *(unsigned __int16 *)(*v16 + 302);
  if ( *(_WORD *)(*v16 + 302) )
  {
    v19 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *(v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_10;
    }
    v20 = v17 + 16LL * (*(_DWORD *)v19 + 13) + 312;
  }
  else
  {
LABEL_10:
    v20 = sub_1BB60A8(v16, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v10 = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v20)(v16, 0LL, *(_QWORD *)(v20 + 8));
  *(_DWORD *)(v9 + 16) = (_DWORD)v10;
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v21 = *v13;
    if ( *v13 )
    {
      methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ClassBoardLock_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      {
        return;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v21 = *v13;
  }
  if ( !v21 )
    goto LABEL_29;
LABEL_19:
  SquareModel_k__BackingField = v21->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_29;
  klass = SquareModel_k__BackingField->klass;
  v25 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_24:
    p_method = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          SquareModel_k__BackingField,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v10 = *v13;
    if ( *v13 )
    {
      ClassBoardSquare__SetSelectedEffectActive(v10, 1, 0LL);
      v28 = *(ClassBoardSquare_o **)(v9 + 32);
      v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
      System_Action___ctor(
        v31,
        (Il2CppObject *)v9,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v28, v31, v32);
      return;
    }
LABEL_29:
    sub_1B64324(v10);
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF68E & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo, method);
    byte_49FF68E = 1;
  }
  v4 = sub_1B64314(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1B64324(0LL);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FF690 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49FF690 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickHelp_b__31_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1B64324(0LL);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___ShowBoardCoroutine_b__45_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1B64324(0LL);
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

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_49FF69F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v10);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)sub_1B640C8(
                                                                 &Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__,
                                                                 v11);
    byte_49FF69F = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v21, 0, sizeof(v21));
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
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v13, v14);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    this = _4__this[13];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v20;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          ((void (*)(void))i.fields._current->klass->vtable[7].method)() )
    {
      if ( !i.fields._current )
        sub_1B64324(0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = _4__this[14];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v21.fields._current )
        sub_1B64324(0LL);
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v21.fields._current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)(*(__int64 (__fastcall **)(ClassBoardController__ShowBoardCoroutine_d__45_o **, Il2CppObject *))&(*_4__this)[9].fields.__1__state)(
                                                                 _4__this,
                                                                 (*_4__this)[9].fields.__2__current);
    if ( !this )
LABEL_25:
      sub_1B64324(this);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
    System_Action___ctor(v19, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
    EventTutorialMaster__CheckTutorial(0, 82, v19, 0, 0, 0, 0, 0LL);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF691 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardController___c_TypeInfo, v1);
    byte_49FF691 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardController___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardController___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FF696 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v4);
    byte_49FF696 = 1;
  }
  v26 = 0;
  v25 = 0LL;
  if ( !x )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(x, IClassBoardLockModel_TypeInfo, 0LL);
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
    v14 = sub_1BB60A8(x, IClassBoardSquareModel_TypeInfo, 13LL);
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
    v18 = sub_1BB60A8(x, IClassBoardSquareModel_TypeInfo, 13LL);
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
      v22 = sub_1BB60A8(x, IClassBoardLockModel_TypeInfo, 1LL);
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

  if ( (byte_49FF697 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, x);
    byte_49FF697 = 1;
  }
  if ( !x )
    sub_1B64324(this);
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
    p_method = sub_1BB60A8(x, IClassBoardSquareModel_TypeInfo, 0LL);
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

  if ( (byte_49FF694 & 1) == 0 )
  {
    sub_1B640C8(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v4);
    byte_49FF694 = 1;
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
    v9 = sub_1BB60A8(this, IClassBoardLockModel_TypeInfo, 0LL);
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
    v16 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 13LL);
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
    v21 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 13LL);
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
    sub_1B64324(this);
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
    v26 = sub_1BB60A8(this, IClassBoardLockModel_TypeInfo, 1LL);
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

  if ( (byte_49FF695 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, x);
    byte_49FF695 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_1B64324(this);
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
    v8 = sub_1BB60A8(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FF692 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49FF692 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49FF693 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49FF693 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  BaseMonoBehaviour_o *v46; // x20
  struct System_Threading_CancellationTokenSource_o *v47; // x21
  System_Threading_CancellationTokenSource_c *v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  struct ClassBoardController_o *v52; // x8
  const MethodInfo *v53; // x1
  ClassBoardController___c__DisplayClass39_0_o *v54; // x20
  __int64 v55; // x1
  __int64 v56; // x2
  const MethodInfo *v57; // x3
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v59; // x21
  int32_t v60; // w2
  int32_t v61; // w3
  BaseMonoBehaviour_o *v62; // x20
  struct System_Threading_CancellationTokenSource_o *v63; // x21
  System_Threading_CancellationTokenSource_c *v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  struct ClassBoardController_o *v68; // x8
  ClassBoardController___c__DisplayClass39_0_o *v69; // x20
  __int64 v70; // x1
  __int64 v71; // x2
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v73; // x21
  int32_t v74; // w2
  int32_t v75; // w3
  BaseMonoBehaviour_o *v76; // x20
  struct System_Threading_CancellationTokenSource_o *v77; // x21
  System_Threading_CancellationTokenSource_c *v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  struct ClassBoardController_o *v82; // x8
  ClassBoardController___c__DisplayClass39_0_o *v83; // x20
  __int64 v84; // x1
  __int64 v85; // x2
  ClassBoardSquare_o *v86; // x21
  ClassBoardController___c_c *v87; // x0
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v89; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_Action_o *_9__5; // x23
  int32_t v94; // w2
  int32_t v95; // w3
  ClassBoardLockOpenConfirmDialog_o *v96; // x0
  ClassBoardSquare_o *v97; // x1
  bool v98; // w2
  struct ClassBoardController_o *v99; // x8
  ClassBoardController___c__DisplayClass39_0_o *v100; // x20
  __int64 v101; // x1
  __int64 v102; // x2
  ClassBoardSquare_o *v103; // x21
  ClassBoardController___c_c *v104; // x0
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v106; // x23
  struct ClassBoardController___c_StaticFields *v107; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  System_Action_o *_9__7; // x23
  int32_t v111; // w2
  int32_t v112; // w3
  ClassBoardSquareOpenConfirmDialog_o *v113; // x0
  ClassBoardSquare_o *v114; // x1
  bool v115; // w2
  BaseMonoBehaviour_o *v116; // x20
  struct System_Threading_CancellationTokenSource_o *v117; // x21
  System_Threading_CancellationTokenSource_c *v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  struct ClassBoardController_o *v122; // x8
  ClassBoardController___c__DisplayClass39_0_o *v123; // x20
  __int64 v124; // x1
  __int64 v125; // x2
  ClassBoardSquare_o *v126; // x21
  int32_t v127; // w2
  int32_t v128; // w3
  int32_t v129; // w2
  int32_t v130; // w3
  ClassBoardController___c__DisplayClass39_0_o *v131; // x20
  __int64 v132; // x1
  __int64 v133; // x2
  ClassBoardSquare_o *v134; // x21
  int32_t v135; // w2
  int32_t v136; // w3
  int32_t v137; // w2
  int32_t v138; // w3

  v2 = this;
  if ( (byte_49FF698 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v3);
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v4);
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v5);
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v6);
    sub_1B640C8(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v7);
    sub_1B640C8(&ClassBoardLock_TypeInfo, v8);
    sub_1B640C8(&IClassBoardResourceCatalog_TypeInfo, v9);
    sub_1B640C8(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, v10);
    sub_1B640C8(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, v11);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__, v12);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__, v13);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__, v14);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__, v15);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__, v16);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__, v17);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__, v18);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__, v19);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__, v20);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B640C8(&ClassBoardController___c_TypeInfo, v21);
    byte_49FF698 = 1;
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
      v31 = sub_1BB60A8(_4__this[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                                                             (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
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
      _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v40, v41);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
        0LL);
      v2->fields.__9__1 = _9__1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v44, v45);
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
      v37 = sub_1BB60A8(v32[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v37)(
                                                             v33,
                                                             *(_QWORD *)(v37 + 8));
    if ( !this )
      goto LABEL_136;
    v52 = v2->fields.__4__this;
    if ( !v52 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v32,
                                                             (Il2CppObject *)this->fields.__9__2,
                                                             v52->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v54 = this;
    LOBYTE(this[3].klass) = 0;
    ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, v53);
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
    v59 = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v55, v56);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      v2->fields.__9__2 = _9__2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v60, v61);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v54, v59, _9__2, v57);
  }
  else if ( (acquireFlag & 4) != 0 )
  {
    v46 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v46 )
      goto LABEL_136;
    v47 = v46[2].fields.m_CancellationTokenSource;
    if ( !v47 )
      goto LABEL_136;
    v48 = v47->klass;
    v49 = *(unsigned __int16 *)(&v47->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v47->klass->_2.bitflags2 + 3) )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_40;
      }
      v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
    }
    else
    {
LABEL_40:
      v51 = sub_1BB60A8(v46[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v51)(
                                                             v47,
                                                             *(_QWORD *)(v51 + 8));
    if ( !this )
      goto LABEL_136;
    v68 = v2->fields.__4__this;
    if ( !v68 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v46,
                                                             (Il2CppObject *)this->fields.__9__7,
                                                             v68->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v69 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, 0LL);
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
    v73 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v70, v71);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
        0LL);
      v2->fields.__9__3 = _9__3;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v74, v75);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v69, v73, 0, _9__3, 0LL);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v62 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( v62 )
      {
        v63 = v62[2].fields.m_CancellationTokenSource;
        if ( v63 )
        {
          v64 = v63->klass;
          v65 = *(unsigned __int16 *)(&v63->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v63->klass->_2.bitflags2 + 3) )
          {
            v66 = &v64->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v66 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v65;
              v66 += 4;
              if ( !v65 )
                goto LABEL_56;
            }
            v67 = (__int64)(&v64->vtable._0_Equals.method + 2 * *v66);
          }
          else
          {
LABEL_56:
            v67 = sub_1BB60A8(v62[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v67)(
                                                                   v63,
                                                                   *(_QWORD *)(v67 + 8));
          if ( this )
          {
            v82 = v2->fields.__4__this;
            if ( v82 )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v62,
                                                                       (Il2CppObject *)this->fields.__9__5,
                                                                       v82->fields.uiRoot,
                                                                       0LL,
                                                                       (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v83 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, 0LL);
                this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                           this,
                                                                           this->klass[1]._1.name);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
                    v86 = v2->fields.square;
                    v87 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                      v87 = ClassBoardController___c_TypeInfo;
                    }
                    _9__39_4 = v87->static_fields->__9__39_4;
                    if ( !_9__39_4 )
                    {
                      if ( !v87->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v87);
                        v87 = ClassBoardController___c_TypeInfo;
                      }
                      v89 = (Il2CppObject *)v87->static_fields->__9;
                      _9__39_4 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v84, v85);
                      System_Action___ctor(
                        _9__39_4,
                        v89,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__,
                        0LL);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__39_4 = _9__39_4;
                      sub_1B6406C(
                        (ServantStatusBattleListViewItem_o *)&static_fields->__9__39_4,
                        (int32_t)_9__39_4,
                        v91,
                        v92);
                    }
                    _9__5 = v2->fields.__9__5;
                    if ( !_9__5 )
                    {
                      _9__5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v84, v85);
                      System_Action___ctor(
                        _9__5,
                        (Il2CppObject *)v2,
                        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
                        0LL);
                      v2->fields.__9__5 = _9__5;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v94, v95);
                    }
                    v96 = (ClassBoardLockOpenConfirmDialog_o *)v83;
                    v97 = v86;
                    v98 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1B64324(this);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v76 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v76 )
        goto LABEL_136;
      v77 = v76[2].fields.m_CancellationTokenSource;
      if ( !v77 )
        goto LABEL_136;
      v78 = v77->klass;
      v79 = *(unsigned __int16 *)(&v77->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v77->klass->_2.bitflags2 + 3) )
      {
        v80 = &v78->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v80 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v79;
          v80 += 4;
          if ( !v79 )
            goto LABEL_72;
        }
        v81 = (__int64)(&v78->vtable._0_Equals.method + 2 * *v80);
      }
      else
      {
LABEL_72:
        v81 = sub_1BB60A8(v76[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v81)(
                                                               v77,
                                                               *(_QWORD *)(v81 + 8));
      if ( !this )
        goto LABEL_136;
      v99 = v2->fields.__4__this;
      if ( !v99 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v76,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v99->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v100 = this;
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
      v103 = v2->fields.square;
      v104 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v104 = ClassBoardController___c_TypeInfo;
      }
      _9__39_6 = v104->static_fields->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( !v104->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v104);
          v104 = ClassBoardController___c_TypeInfo;
        }
        v106 = (Il2CppObject *)v104->static_fields->__9;
        _9__39_6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v101, v102);
        System_Action___ctor(_9__39_6, v106, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v107 = ClassBoardController___c_TypeInfo->static_fields;
        v107->__9__39_6 = _9__39_6;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v107->__9__39_6, (int32_t)_9__39_6, v108, v109);
      }
      _9__7 = v2->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v101, v102);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        v2->fields.__9__7 = _9__7;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__7, (int32_t)_9__7, v111, v112);
      }
      v113 = (ClassBoardSquareOpenConfirmDialog_o *)v100;
      v114 = v103;
      v115 = 0;
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
      v116 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v116 )
        goto LABEL_136;
      v117 = v116[2].fields.m_CancellationTokenSource;
      if ( !v117 )
        goto LABEL_136;
      v118 = v117->klass;
      v119 = *(unsigned __int16 *)(&v117->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v117->klass->_2.bitflags2 + 3) )
      {
        v120 = &v118->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v120 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v119;
          v120 += 4;
          if ( !v119 )
            goto LABEL_112;
        }
        v121 = (__int64)(&v118->vtable._0_Equals.method + 2 * *v120);
      }
      else
      {
LABEL_112:
        v121 = sub_1BB60A8(v116[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v121)(
                                                               v117,
                                                               *(_QWORD *)(v121 + 8));
      if ( !this )
        goto LABEL_136;
      v122 = v2->fields.__4__this;
      if ( v25 )
      {
        if ( v122 )
        {
          this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v116,
                                                                   (Il2CppObject *)this->fields.__9__5,
                                                                   v122->fields.uiRoot,
                                                                   0LL,
                                                                   (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v123 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, 0LL);
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
                v126 = v2->fields.square;
                if ( !_9__39_4 )
                {
                  _9__39_4 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v124, v125);
                  System_Action___ctor(
                    _9__39_4,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
                    0LL);
                  v2->fields.__9__8 = _9__39_4;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__8, (int32_t)_9__39_4, v127, v128);
                }
                _9__5 = v2->fields.__9__9;
                if ( !_9__5 )
                {
                  _9__5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v124, v125);
                  System_Action___ctor(
                    _9__5,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
                    0LL);
                  v2->fields.__9__9 = _9__5;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__9, (int32_t)_9__5, v129, v130);
                }
                v98 = 1;
                v96 = (ClassBoardLockOpenConfirmDialog_o *)v123;
                v97 = v126;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v96, v97, v98, _9__39_4, _9__5, 0LL);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v122 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v116,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v122->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2E24124 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v131 = this;
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
      v134 = v2->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v132, v133);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        v2->fields.__9__12 = _9__39_6;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__12, (int32_t)_9__39_6, v135, v136);
      }
      _9__7 = v2->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v132, v133);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        v2->fields.__9__13 = _9__7;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__13, (int32_t)_9__7, v137, v138);
      }
      v115 = 1;
      v113 = (ClassBoardSquareOpenConfirmDialog_o *)v131;
      v114 = v134;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v113, v114, v115, _9__39_6, _9__7, 0LL);
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
    sub_1B64324(_4__this);
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
  int32_t v9; // w2
  int32_t v10; // w3

  v4 = this;
  if ( (byte_49FF69A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B640C8(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
                                                             v5);
    byte_49FF69A = 1;
  }
  _9__11 = v4->fields.__9__11;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, _, method);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v4->fields.__9__11 = _9__11;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__11, (int32_t)_9__11, v9, v10);
  }
  if ( !_4__this )
    sub_1B64324(this);
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
    sub_1B64324(_4__this);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_object__o *_9__14; // x21
  ClassBoardController___c__DisplayClass39_0_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  ClassBoardController___c__DisplayClass39_0_c *v18; // x8
  __int64 v19; // x9
  IClassBoardSquareUser_c **v20; // x10
  __int64 v21; // x0

  v2 = this;
  if ( (byte_49FF69B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1B640C8(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B640C8(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
                                                             v5);
    byte_49FF69B = 1;
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
    v11 = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v11 + 8));
  _9__14 = (System_Action_object__o *)v2->fields.__9__14;
  v15 = this;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_object__o *)sub_1B64314(System_Action_IClassBoardSquareUser__TypeInfo, v12, v13);
    System_Action_object____ctor(
      _9__14,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      0LL);
    v2->fields.__9__14 = (struct System_Action_IClassBoardSquareUser__o *)_9__14;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__14, (int32_t)_9__14, v16, v17);
  }
  if ( !v15 )
LABEL_21:
    sub_1B64324(this);
  v18 = v15->klass;
  v19 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    v20 = (IClassBoardSquareUser_c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_18;
    }
    v21 = (__int64)(&v18->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v20);
  }
  else
  {
LABEL_18:
    v21 = sub_1BB60A8(v15, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v21)(
    v15,
    _9__14,
    *(_QWORD *)(v21 + 8));
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
    sub_1B64324(_4__this);
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
  int32_t v9; // w2
  int32_t v10; // w3

  v4 = this;
  if ( (byte_49FF69C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B640C8(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
                                                             v5);
    byte_49FF69C = 1;
  }
  _9__15 = v4->fields.__9__15;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, _, method);
    System_Action___ctor(
      _9__15,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v4->fields.__9__15 = _9__15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__9__15, (int32_t)_9__15, v9, v10);
  }
  if ( !_4__this )
    sub_1B64324(this);
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
    sub_1B64324(_4__this);
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
    sub_1B64324(_4__this);
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
    sub_1B64324(_4__this);
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
    sub_1B64324(_4__this);
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
    sub_1B64324(_4__this);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_object__o *_9__10; // x21
  ClassBoardController___c__DisplayClass39_0_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  ClassBoardController___c__DisplayClass39_0_c *v18; // x8
  __int64 v19; // x9
  IClassBoardSquareUser_c **v20; // x10
  __int64 v21; // x0

  v2 = this;
  if ( (byte_49FF699 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1B640C8(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B640C8(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
                                                             v5);
    byte_49FF699 = 1;
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
    v11 = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v11 + 8));
  _9__10 = (System_Action_object__o *)v2->fields.__9__10;
  v15 = this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_object__o *)sub_1B64314(System_Action_IClassBoardSquareUser__TypeInfo, v12, v13);
    System_Action_object____ctor(
      _9__10,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      0LL);
    v2->fields.__9__10 = (struct System_Action_IClassBoardSquareUser__o *)_9__10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__9__10, (int32_t)_9__10, v16, v17);
  }
  if ( !v15 )
LABEL_21:
    sub_1B64324(this);
  v18 = v15->klass;
  v19 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    v20 = (IClassBoardSquareUser_c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_18;
    }
    v21 = (__int64)(&v18->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v20);
  }
  else
  {
LABEL_18:
    v21 = sub_1BB60A8(v15, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v21)(
    v15,
    _9__10,
    *(_QWORD *)(v21 + 8));
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
    sub_1B64324(_4__this);
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
  __int64 v12; // x2
  struct ClassBoardController_o *_4__this; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  System_Action_object__o *v15; // x21
  Il2CppObject *v16; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  struct ClassBoardController_o *v22; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v24; // x21
  Il2CppObject *v25; // x22
  struct ClassBoardController___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FF69D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1B640C8(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v5);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B640C8(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, v7);
    sub_1B640C8(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, v8);
    sub_1B640C8(&ClassBoardController___c_TypeInfo, v9);
    byte_49FF69D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  v15 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v15 = (System_Action_object__o *)sub_1B64314(System_Action_ClassBoardSquare__TypeInfo, v11, v12);
    System_Action_object____ctor(v15, v16, Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)v15;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_1, (int32_t)v15, v18, v19);
  }
  if ( !squareViewList )
    goto LABEL_25;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v15,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_25;
  Instance = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v22->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    Instance = ClassBoardController___c_TypeInfo;
  }
  v24 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v24 = (System_Action_object__o *)sub_1B64314(System_Action_ClassBoardLine__TypeInfo, v20, v21);
    System_Action_object____ctor(v24, v25, Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, 0LL);
    v26 = ClassBoardController___c_TypeInfo->static_fields;
    v26->__9__40_2 = (struct System_Action_ClassBoardLine__o *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->__9__40_2, (int32_t)v24, v27, v28);
  }
  if ( !lineViewList )
LABEL_25:
    sub_1B64324(Instance);
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v24,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  __int64 v7; // x1
  __int64 v8; // x2
  ClassBoardUIController_o *v9; // x20
  System_Action_o *_9__4; // x21
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FF69E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_1B640C8(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__, v4);
    byte_49FF69E = 1;
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
  v9 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v11, v12);
    }
    if ( v9 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v9, _9__4, 0LL);
      goto LABEL_13;
    }
LABEL_15:
    sub_1B64324(_4__this);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0LL);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1B64324(_4__this);
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
    sub_1B64324(_4__this);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}