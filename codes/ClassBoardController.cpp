void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardModelBuilder_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A73264 & 1) == 0 )
  {
    sub_1B90010(&ClassBoardModelBuilder_TypeInfo, method);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v4);
    sub_1B90010(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v6);
    byte_4A73264 = 1;
  }
  v7 = (ClassBoardModelBuilder_o *)sub_1B9025C(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v7, 0LL);
  this->fields._builder_k__BackingField = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._builder_k__BackingField, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v10;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.squareViewList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v13;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.lineViewList, (int32_t)v13, v14, v15);
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
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  ClassBoardController___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  System_Func_object__int__o *_9__42_1; // x21
  Il2CppObject *v38; // x22
  struct ClassBoardController___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  ClassBoardUIController_o *v43; // x21
  System_Action_o *v44; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v45; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A73261 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, squareModel);
    sub_1B90010(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v10);
    sub_1B90010(&System_Func_IClassBoardLockModel__int__TypeInfo, v11);
    sub_1B90010(&System_Func_IClassBoardLockModel__bool__TypeInfo, v12);
    sub_1B90010(&IClassBoardSquareModel_TypeInfo, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v14);
    sub_1B90010(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v15);
    sub_1B90010(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__, v16);
    sub_1B90010(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__, v17);
    sub_1B90010(&ClassBoardController___c_TypeInfo, v18);
    byte_4A73261 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
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
    p_method = sub_1BE1FF0(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v26 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_2EB82A0 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
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
    _9__42_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__42_0,
      v30,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v32, v33);
  }
  v34 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v35 = ClassBoardController___c_TypeInfo;
  v36 = v34;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v35 = ClassBoardController___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v35->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = ClassBoardController___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1B9025C(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_1,
      v38,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      0LL);
    v39 = ClassBoardController___c_TypeInfo->static_fields;
    v39->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v39->__9__42_1, (int32_t)_9__42_1, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v36,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_2EB8740 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_object_(
         v42,
         (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v20 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v20 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v20, 1, 0LL);
      v43 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v44 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        v44,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__,
        0LL);
      if ( v43 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v43, v44, 0LL);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1B9026C(v20, v21);
  }
LABEL_26:
  v45 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v42,
                                                                                    (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v45, 0LL);
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
  if ( (byte_4A7325C & 1) == 0 )
  {
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab);
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7);
    sub_1B90010(&IClassBoardResourceCatalog_TypeInfo, v8);
    this = (ClassBoardController_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, v9);
    byte_4A7325C = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_1B9026C(this, defaultPrefab);
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
      p_method = sub_1BE1FF0(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
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
                      (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
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
  int32_t v78; // w2
  int32_t v79; // w3
  System_Collections_Generic_List_object__o *squareViewList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v82; // x9
  __int64 size; // x10
  Il2CppClass **v84; // x8
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  __int64 *v89; // x20
  __int64 v90; // x8
  __int64 v91; // x9
  int *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x20
  __int64 v96; // x8
  __int64 v97; // x9
  int *v98; // x10
  __int64 v99; // x0
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  struct IClassBoardResourceCatalog_o *v106; // x22
  IClassBoardResourceCatalog_c *v107; // x8
  IClassBoardLineModel_o *v108; // x21
  __int64 v109; // x9
  int32_t *v110; // x10
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x1
  Il2CppObject *Object_object; // x0
  __int64 v115; // x1
  Il2CppObject *v116; // x22
  __int64 v117; // x1
  int32_t v118; // w2
  int32_t v119; // w3
  System_Collections_Generic_List_object__o *lineViewList; // x0
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x8
  __int64 v125; // x8
  __int64 v126; // x9
  int *v127; // x10
  __int64 v128; // x0

  if ( (byte_4A7325B & 1) == 0 )
  {
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, method);
    sub_1B90010(&IClassBoardLockModel_TypeInfo, v3);
    sub_1B90010(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_1B90010(&IClassBoardSquareModel_TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v9);
    sub_1B90010(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v10);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v13);
    byte_4A7325B = 1;
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
    v20 = sub_1BE1FF0(
            *(_QWORD *)(v14 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL);
  }
  v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
  if ( !v22 )
    sub_1B9026C(0LL, v21);
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
      v26 = sub_1BE1FF0(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v30 = sub_1BE1FF0(v22, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v31 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
    v32 = sub_1B9014C(v31, IClassBoardLockModel_TypeInfo);
    if ( v32 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_1B9026C(v32, v33);
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
        p_method = sub_1BE1FF0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v43 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v43 )
        sub_1B9026C(0LL, v44);
      if ( !v31 )
        sub_1B9026C(v43, v44);
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
        sub_1B9026C(0LL, v33);
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
        v42 = sub_1BE1FF0(v31, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v51 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v42)(v31, *(_QWORD *)(v42 + 8));
      v53 = this->fields.resourceCatalog;
      if ( (v51 & 1) != 0 )
      {
        if ( !v53 )
          sub_1B9026C(v51, v52);
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
          v57 = sub_1BE1FF0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v62 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
        if ( !v62 )
          sub_1B9026C(0LL, v63);
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
          sub_1B9026C(v51, v52);
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
          v61 = sub_1BE1FF0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v67 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
        if ( !v67 )
          sub_1B9026C(0LL, v68);
        v69 = v31->klass;
        v46 = *(ClassBoardSquare_o **)(v67 + 16);
        v47 = IClassBoardSquareModel_TypeInfo;
        v70 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
        {
LABEL_67:
          v50 = sub_1BE1FF0(v31, v47, 10LL);
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
      sub_1B9026C(0LL, v75);
    ClassBoardSquare__Setup(v74, v31, 0LL);
    squareViewList = (System_Collections_Generic_List_object__o *)this->fields.squareViewList;
    if ( !squareViewList )
      sub_1B9026C(0LL, v77);
    items = squareViewList->fields._items;
    v82 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++squareViewList->fields._version;
    if ( !items )
      sub_1B9026C(squareViewList, v77);
    size = squareViewList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        squareViewList,
        v76,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
    }
    else
    {
      v84 = &items->obj.klass + size;
      squareViewList->fields._size = size + 1;
      v84[4] = (Il2CppClass *)v76;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v84 + 4), (int32_t)v76, v78, v79);
    }
  }
  v85 = *(_QWORD *)v22;
  v86 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_87;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_87:
    v88 = sub_1BE1FF0(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v88)(v22, *(_QWORD *)(v88 + 8));
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 || (v89 = *(__int64 **)(v14 + 16)) == 0LL )
LABEL_148:
    sub_1B9026C(v14, v15);
  v90 = *v89;
  v91 = *(unsigned __int16 *)(*v89 + 302);
  if ( *(_WORD *)(*v89 + 302) )
  {
    v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v92 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v91;
      v92 += 4;
      if ( !v91 )
        goto LABEL_95;
    }
    v93 = v90 + 16LL * *v92 + 312;
  }
  else
  {
LABEL_95:
    v93 = sub_1BE1FF0(*(_QWORD *)(v14 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v95 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8));
  if ( !v95 )
    sub_1B9026C(0LL, v94);
  while ( 1 )
  {
    v96 = *(_QWORD *)v95;
    v97 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
    {
      v98 = (int *)(*(_QWORD *)(v96 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v98 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v97;
        v98 += 4;
        if ( !v97 )
          goto LABEL_102;
      }
      v99 = v96 + 16LL * *v98 + 312;
    }
    else
    {
LABEL_102:
      v99 = sub_1BE1FF0(v95, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v99)(v95, *(_QWORD *)(v99 + 8)) & 1) == 0 )
      break;
    v100 = *(_QWORD *)v95;
    v101 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
    {
      v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v102 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_109;
      }
      v103 = v100 + 16LL * *v102 + 312;
    }
    else
    {
LABEL_109:
      v103 = sub_1BE1FF0(v95, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v104 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v95, *(_QWORD *)(v103 + 8));
    v106 = this->fields.resourceCatalog;
    if ( !v106 )
      sub_1B9026C(v104, v105);
    v107 = v106->klass;
    v108 = (IClassBoardLineModel_o *)v104;
    v109 = *(unsigned __int16 *)(&v106->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v106->klass->_2.bitflags2 + 3) )
    {
      v110 = &v107->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v110 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v109;
        v110 += 4;
        if ( !v109 )
          goto LABEL_116;
      }
      v111 = (__int64)&v107->vtable[*v110].method;
    }
    else
    {
LABEL_116:
      v111 = sub_1BE1FF0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v112 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v111)(v106, *(_QWORD *)(v111 + 8));
    if ( !v112 )
      sub_1B9026C(0LL, v113);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v112 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v116 = Object_object;
    if ( !Object_object )
      sub_1B9026C(0LL, v115);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v108, 0LL);
    lineViewList = (System_Collections_Generic_List_object__o *)this->fields.lineViewList;
    if ( !lineViewList )
      sub_1B9026C(0LL, v117);
    v121 = lineViewList->fields._items;
    v122 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++lineViewList->fields._version;
    if ( !v121 )
      sub_1B9026C(lineViewList, v117);
    v123 = lineViewList->fields._size;
    if ( (unsigned int)v123 >= v121->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        lineViewList,
        v116,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
    }
    else
    {
      v124 = &v121->obj.klass + v123;
      lineViewList->fields._size = v123 + 1;
      v124[4] = (Il2CppClass *)v116;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v124 + 4), (int32_t)v116, v118, v119);
    }
  }
  v125 = *(_QWORD *)v95;
  v126 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
  {
    v127 = (int *)(*(_QWORD *)(v125 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v127 - 1) != System_IDisposable_TypeInfo )
    {
      --v126;
      v127 += 4;
      if ( !v126 )
        goto LABEL_129;
    }
    v128 = v125 + 16LL * *v127 + 312;
  }
  else
  {
LABEL_129:
    v128 = sub_1BE1FF0(v95, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v128)(v95, *(_QWORD *)(v128 + 8));
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

  if ( (byte_4A73259 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_ClassBoardController__OnClickEffectList_b__32_0__, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A73259 = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v11 = (CommonUI_o *)v9;
        v12 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v11 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v11, 0, baseId, 1, v12, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_1B9026C(Instance, v8);
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

  if ( (byte_4A73258 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_ClassBoardController__OnClickHelp_b__31_0__, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A73258 = 1;
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
      sub_1B9026C(0LL, v7);
    ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
    v8 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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

  if ( (byte_4A7325A & 1) == 0 )
  {
    sub_1B90010(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_1B90010(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v3);
    byte_4A7325A = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_374D564 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
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
      p_method = sub_1BE1FF0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x0
  ClassBoardController___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v29; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  ClassBoardController___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  System_Func_object__int__o *_9__41_1; // x22
  Il2CppObject *v37; // x23
  struct ClassBoardController___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  System_Object_array *v43; // x0
  ClassBoardController___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x21
  System_Func_object__object__o *_9__41_2; // x22
  Il2CppObject *v47; // x23
  struct ClassBoardController___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v52; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v54; // x21

  if ( (byte_4A73260 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v3);
    sub_1B90010(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v4);
    sub_1B90010(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v9);
    sub_1B90010(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v10);
    sub_1B90010(&System_Func_ClassBoardLock__int__TypeInfo, v11);
    sub_1B90010(&System_Func_ClassBoardLock__bool__TypeInfo, v12);
    sub_1B90010(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13);
    sub_1B90010(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__, v14);
    sub_1B90010(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__, v15);
    sub_1B90010(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__, v16);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__, v17);
    sub_1B90010(&ClassBoardController___c__DisplayClass41_0_TypeInfo, v18);
    sub_1B90010(&ClassBoardController___c_TypeInfo, v19);
    byte_4A73260 = 1;
  }
  v20 = sub_1B9025C(ClassBoardController___c__DisplayClass41_0_TypeInfo);
  ClassBoardController___c__DisplayClass41_0___ctor((ClassBoardController___c__DisplayClass41_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_29;
  *(_QWORD *)(v20 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)this, v23, v24);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v25 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.squareViewList,
          (const MethodInfo_2EB82A0 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v26 = ClassBoardController___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v26 = ClassBoardController___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v26->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = ClassBoardController___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__41_0,
      v29,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v31, v32);
  }
  v33 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v34 = ClassBoardController___c_TypeInfo;
  v35 = v33;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v34 = ClassBoardController___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__int__o *)v34->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ClassBoardController___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__41_1 = (System_Func_object__int__o *)sub_1B9025C(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__41_1,
      v37,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      0LL);
    v38 = ClassBoardController___c_TypeInfo->static_fields;
    v38->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v38->__9__41_1, (int32_t)_9__41_1, v39, v40);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v35,
                                                               (System_Func_TSource__TKey__o *)_9__41_1,
                                                               (const MethodInfo_2EB8740 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v20 + 16) = 0;
  v42 = v41;
  if ( System_Linq_Enumerable__Any_object_(
         v41,
         (const MethodInfo_2E9BBF0 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v20 + 16) = 1;
    v43 = System_Linq_Enumerable__ToArray_object_(
            v42,
            (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v44 = ClassBoardController___c_TypeInfo;
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v43;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v44 = ClassBoardController___c_TypeInfo;
    }
    _9__41_2 = (System_Func_object__object__o *)v44->static_fields->__9__41_2;
    if ( !_9__41_2 )
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v44 = ClassBoardController___c_TypeInfo;
      }
      v47 = (Il2CppObject *)v44->static_fields->__9;
      _9__41_2 = (System_Func_object__object__o *)sub_1B9025C(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__41_2,
        v47,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        0LL);
      v48 = ClassBoardController___c_TypeInfo->static_fields;
      v48->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v48->__9__41_2, (int32_t)_9__41_2, v49, v50);
    }
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v45,
                                                                 (System_Func_TSource__TResult__o *)_9__41_2,
                                                                 (const MethodInfo_2EBED8C *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v52 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v51,
                                                                                      (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v52, 0LL);
  }
  effectController = this->fields.effectController;
  v54 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v54,
    (Il2CppObject *)v20,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_29:
    sub_1B9026C(Instance, v22);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v54, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  ClassBoardEffectController_o *effectController; // x22
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s8
  float v21; // s9
  float v22; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  System_Action_o *v26; // x19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A73262 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, square);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__, v7);
    sub_1B90010(&ClassBoardController___c__DisplayClass43_0_TypeInfo, v8);
    byte_4A73262 = 1;
  }
  v9 = sub_1B9025C(ClassBoardController___c__DisplayClass43_0_TypeInfo);
  ClassBoardController___c__DisplayClass43_0___ctor((ClassBoardController___c__DisplayClass43_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
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
  *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (ClassBoardUIController_o *)this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v20 = v17;
  v21 = v18;
  v22 = v19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v26 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_1B9026C(transform, v11);
  v28.fields.z = v22 * z;
  v28.fields.y = v21 * y;
  v28.fields.x = v20 * x;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v28, v26, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v18; // x22

  if ( (byte_4A7325F & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, square);
    sub_1B90010(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__, v8);
    sub_1B90010(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v9);
    byte_4A7325F = 1;
  }
  v10 = sub_1B9025C(ClassBoardController___c__DisplayClass40_0_TypeInfo);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_10;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = endAct;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)endAct, v15, v16);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList((ClassBoardUIController_o *)Instance, 0LL),
        effectController = this->fields.effectController,
        v18 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo),
        System_Action___ctor(
          v18,
          (Il2CppObject *)v10,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_10:
    sub_1B9026C(Instance, v12);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v18, 0LL);
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
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v28; // w9
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  ClassBoardController___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_T__o *v31; // x20
  System_Action_object__o *_9__29_1; // x21
  Il2CppObject *v33; // x22
  struct ClassBoardController___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w3
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int32_t v39; // w2
  int v40; // w9
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_4A73256 & 1) == 0 )
  {
    sub_1B90010(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1B90010(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1B90010(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v4);
    sub_1B90010(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v5);
    sub_1B90010(&Method_BasicHelper_ForEach_ClassBoardLine___, v6);
    sub_1B90010(&Method_BasicHelper_ForEach_ClassBoardSquare___, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v9);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v10);
    sub_1B90010(&Method_ClassBoardController___c__Release_b__29_0__, v11);
    sub_1B90010(&Method_ClassBoardController___c__Release_b__29_1__, v12);
    sub_1B90010(&ClassBoardController___c_TypeInfo, v13);
    byte_4A73256 = 1;
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
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
  }
  v18 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_2E79F38 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
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
    _9__29_0 = (System_Action_object__o *)sub_1B9025C(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__29_0, v22, Method_ClassBoardController___c__Release_b__29_0__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v24, v25);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__29_0,
    (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_30;
  size = squareViewList->fields._size;
  v28 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v28;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0LL);
  v29 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_2E79F38 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v30 = ClassBoardController___c_TypeInfo;
  v31 = v29;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v30 = ClassBoardController___c_TypeInfo;
  }
  _9__29_1 = (System_Action_object__o *)v30->static_fields->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = ClassBoardController___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__29_1 = (System_Action_object__o *)sub_1B9025C(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__29_1, v33, Method_ClassBoardController___c__Release_b__29_1__, 0LL);
    v34 = ClassBoardController___c_TypeInfo->static_fields;
    v34->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v34->__9__29_1, (int32_t)_9__29_1, v35, v36);
  }
  BasicHelper__ForEach_object_(
    v31,
    (System_Action_T__o *)_9__29_1,
    (const MethodInfo_2E7B5D4 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_30;
  v39 = lineViewList->fields._size;
  v40 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v40;
  if ( v39 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v39, 0LL);
  this->fields.effectController = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.effectController, 0, v39, v37);
  this->fields.background = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.background, 0, v41, v42);
  v15 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                     this,
                                     this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v15 )
LABEL_30:
    sub_1B9026C(v15, v16);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A73257 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, action);
    byte_4A73257 = 1;
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
      sub_1B9026C(0LL, v7);
    *(_QWORD *)(v6 + 88) = action;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 88), (int32_t)action, v8, v9);
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
  __int64 v24; // x1
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v26; // x2
  UnityEngine_Texture_o *targetTexture; // x23
  __int64 v28; // x1
  const MethodInfo_3631B98 *v29; // x2
  MapCamera_o *v30; // x23
  BalanceConfig_c *v31; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  System_Action_o *v34; // x23
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x1
  Il2CppObject *current; // x22
  System_Action_object__o *v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v46; // x23
  ClassBoardEffectController_o *v47; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v54; // 0:x3.8
  System_Nullable_Vector3__o v55; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A73255 & 1) == 0 )
  {
    sub_1B90010(&System_Action_ClassBoardSquare__TypeInfo, setResourceCatalog);
    sub_1B90010(&System_Action_TypeInfo, v11);
    sub_1B90010(&BalanceConfig_TypeInfo, v12);
    sub_1B90010(&Method_ClassBoardController_ShowBoard__, v13);
    sub_1B90010(&ClassBoardEffectController_TypeInfo, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v18);
    sub_1B90010(&Method_System_Nullable_Vector3___ctor__, v19);
    sub_1B90010(&Method_System_Nullable_float___ctor__, v20);
    sub_1B90010(&StringLiteral_12851/*"Sony SO-41B"*/, v21);
    byte_4A73255 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.resourceCatalog,
    (int32_t)setResourceCatalog,
    (int32_t)classBoardBackground,
    baseId);
  this->fields.background = classBoardBackground;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.background, (int32_t)classBoardBackground, v22, v23);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_27;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_27;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v26);
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
  mapCamera = (MapCamera_o *)System_String__Equals_61795408(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_12851/*"Sony SO-41B"*/,
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
  v30 = this->fields.mapCamera;
  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v28);
    byte_4A6A9C1 = 1;
  }
  *(_QWORD *)&v55.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v55.fields.hasValue = &v51;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v51.fields.hasValue = 0LL;
  *(_QWORD *)&v51.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v55, zeroVector, v29);
  v31 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v31 = BalanceConfig_TypeInfo;
  }
  static_fields = v31->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_362FB34 *)Method_System_Nullable_float___ctor__);
  if ( !v30 )
    goto LABEL_27;
  v54 = size;
  MapCamera__StartAutoWork(v30, 0.0, v51, v54, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v34 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v34;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&classBoardBackground->fields.showBoardCallback,
    (int32_t)v34,
    v35,
    v36);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v37);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v38);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v39),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_27:
    sub_1B9026C(mapCamera, v24);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)mapCamera,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v52.fields._current;
    v41 = (System_Action_object__o *)sub_1B9025C(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(
      v41,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      0LL);
    if ( !current )
      sub_1B9026C(v42, v43);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v41, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v46 = this->fields.mapCamera;
  v47 = (ClassBoardEffectController_o *)sub_1B9025C(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v47,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v46,
    classBoardBackground,
    0LL);
  this->fields.effectController = v47;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.effectController, (int32_t)v47, v48, v49);
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
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x20
  System_Action_o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  System_String_o *v33; // x20
  ClassBoardUIController_o *v34; // x21
  ClassBoardUIController_o *v35; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  Il2CppClass *v37; // x20
  ClassBoardController_o *v38; // x19
  int32_t v39; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4A7325D & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&baseId);
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v4);
    sub_1B90010(&Method_ClassBoardController_OnClickEffectList__, v5);
    sub_1B90010(&Method_ClassBoardController_OnClickHelp__, v6);
    sub_1B90010(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_1B90010(&DataManager_TypeInfo, v8);
    sub_1B90010(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_1B90010(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_1B90010(&int_TypeInfo, v11);
    sub_1B90010(&LocalizationManager_TypeInfo, v12);
    sub_1B90010(&StringLiteral_20541/*"img_txt_classscore_{0}"*/, v13);
    this = (ClassBoardController_o *)sub_1B90010(&StringLiteral_3499/*"CLASS_BOARD_HEADER_MESSAGE"*/, v14);
    byte_4A7325D = 1;
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
    p_method = sub_1BE1FF0(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                    (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
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
  v22 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v3, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v21 )
    goto LABEL_28;
  *(_QWORD *)(v21 + 96) = v22;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v21 + 96), (int32_t)v22, v23, v24);
  v25 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v26 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v3, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v25 )
    goto LABEL_28;
  *(_QWORD *)(v25 + 104) = v26;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v25 + 104), (int32_t)v26, v27, v28);
  v39 = v3->fields.baseId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v29, v30, v31);
  v33 = System_String__Format((System_String_o *)StringLiteral_20541/*"img_txt_classscore_{0}"*/, v32, 0LL);
  v34 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v34 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderTitle(v34, (AtlasManagerUnit_o *)this, v33, 0LL);
  v35 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3499/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v35 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderMessage(v35, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_28;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v3->fields.baseId,
                                     (const MethodInfo_312C5FC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    || (v37 = entity[4].klass,
        v38 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v38) )
  {
LABEL_28:
    sub_1B9026C(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v38,
    (System_Int32_array *)v37,
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
  int32_t v12; // w2
  int32_t v13; // w3
  ClassBoardSquare_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 *v17; // x22
  __int64 v18; // x8
  __int64 v19; // x9
  IClassBoardSquareModel_c **v20; // x10
  __int64 v21; // x0
  ClassBoardSquare_o *v22; // x8
  __int64 methodPtr_low; // x11
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v26; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardSquare_o *v29; // x21
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x3

  if ( (byte_4A7325E & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, square);
    sub_1B90010(&ClassBoardLock_TypeInfo, v5);
    sub_1B90010(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__, v7);
    sub_1B90010(&ClassBoardController___c__DisplayClass39_0_TypeInfo, v8);
    byte_4A7325E = 1;
  }
  v9 = sub_1B9025C(ClassBoardController___c__DisplayClass39_0_TypeInfo);
  ClassBoardController___c__DisplayClass39_0___ctor((ClassBoardController___c__DisplayClass39_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_29;
  *(_QWORD *)(v9 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = square;
  v14 = (ClassBoardSquare_o **)(v9 + 32);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)square, v15, v16);
  if ( !*(_QWORD *)(v9 + 32) )
    goto LABEL_29;
  v17 = *(__int64 **)(*(_QWORD *)(v9 + 32) + 176LL);
  if ( !v17 )
    goto LABEL_29;
  v18 = *v17;
  v19 = *(unsigned __int16 *)(*v17 + 302);
  if ( *(_WORD *)(*v17 + 302) )
  {
    v20 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *(v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_10;
    }
    v21 = v18 + 16LL * (*(_DWORD *)v20 + 13) + 312;
  }
  else
  {
LABEL_10:
    v21 = sub_1BE1FF0(v17, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v10 = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v21)(v17, 0LL, *(_QWORD *)(v21 + 8));
  *(_DWORD *)(v9 + 16) = (_DWORD)v10;
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v22 = *v14;
    if ( *v14 )
    {
      methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v22->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ClassBoardLock_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      {
        return;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v22 = *v14;
  }
  if ( !v22 )
    goto LABEL_29;
LABEL_19:
  SquareModel_k__BackingField = v22->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_29;
  klass = SquareModel_k__BackingField->klass;
  v26 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v26;
      p_offset += 2;
      if ( !v26 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_24:
    p_method = sub_1BE1FF0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          SquareModel_k__BackingField,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v10 = *v14;
    if ( *v14 )
    {
      ClassBoardSquare__SetSelectedEffectActive(v10, 1, 0LL);
      v29 = *(ClassBoardSquare_o **)(v9 + 32);
      v30 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)v9,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v29, v30, v31);
      return;
    }
LABEL_29:
    sub_1B9026C(v10, v11);
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A73263 & 1) == 0 )
  {
    sub_1B90010(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo, method);
    byte_4A73263 = 1;
  }
  v3 = sub_1B9025C(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__45___ctor((ClassBoardController__ShowBoardCoroutine_d__45_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B9026C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
    sub_1B9026C(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A73265 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A73265 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_1B9026C(Instance, v4);
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
    sub_1B9026C(0LL, v3);
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
    sub_1B9026C(0LL, v3);
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
  sub_1B8FFB4(
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
  __int64 v15; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  System_Action_o *v20; // x20
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_4A73276 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v6);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v10);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)sub_1B90010(
                                                                 &Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__,
                                                                 v11);
    byte_4A73276 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v22, 0, sizeof(v22));
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
      sub_1B8FFB4(p__2__current, 0, v13, v14);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    this = _4__this[13];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v21;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          ((void (*)(void))i.fields._current->klass->vtable[7].method)() )
    {
      if ( !i.fields._current )
        sub_1B9026C(0LL, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = _4__this[14];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v22.fields._current )
        sub_1B9026C(0LL, v18);
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v22.fields._current, v18);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)(*(__int64 (__fastcall **)(ClassBoardController__ShowBoardCoroutine_d__45_o **, Il2CppObject *))&(*_4__this)[9].fields.__1__state)(
                                                                 _4__this,
                                                                 (*_4__this)[9].fields.__2__current);
    if ( !this )
LABEL_25:
      sub_1B9026C(this, method);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v19);
    v20 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
    EventTutorialMaster__CheckTutorial(0, 82, v20, 0, 0, 0, 0, 0LL);
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A73266 & 1) == 0 )
  {
    sub_1B90010(&ClassBoardController___c_TypeInfo, v1);
    byte_4A73266 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)ClassBoardController___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A7326B & 1) == 0 )
  {
    sub_1B90010(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1B90010(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4A7326B = 1;
  }
  v26 = 0;
  v25 = 0LL;
  if ( !x )
    sub_1B9026C(this, x);
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
    p_method = sub_1BE1FF0(x, IClassBoardLockModel_TypeInfo, 0LL);
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
    v14 = sub_1BE1FF0(x, IClassBoardSquareModel_TypeInfo, 13LL);
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
    v18 = sub_1BE1FF0(x, IClassBoardSquareModel_TypeInfo, 13LL);
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
      v22 = sub_1BE1FF0(x, IClassBoardLockModel_TypeInfo, 1LL);
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

  if ( (byte_4A7326C & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B90010(&IClassBoardSquareModel_TypeInfo, x);
    byte_4A7326C = 1;
  }
  if ( !x )
    sub_1B9026C(this, x);
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
    p_method = sub_1BE1FF0(x, IClassBoardSquareModel_TypeInfo, 0LL);
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

  if ( (byte_4A73269 & 1) == 0 )
  {
    sub_1B90010(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1B90010(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4A73269 = 1;
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
    v9 = sub_1BE1FF0(this, IClassBoardLockModel_TypeInfo, 0LL);
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
    v16 = sub_1BE1FF0(this, IClassBoardSquareModel_TypeInfo, 13LL);
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
    v21 = sub_1BE1FF0(this, IClassBoardSquareModel_TypeInfo, 13LL);
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
    sub_1B9026C(this, x);
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
    v26 = sub_1BE1FF0(this, IClassBoardLockModel_TypeInfo, 1LL);
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

  if ( (byte_4A7326A & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B90010(&IClassBoardSquareModel_TypeInfo, x);
    byte_4A7326A = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_1B9026C(this, x);
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
    v8 = sub_1BE1FF0(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A73267 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, x);
    byte_4A73267 = 1;
  }
  if ( !x )
    sub_1B9026C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A73268 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B90010(&UnityEngine_Object_TypeInfo, x);
    byte_4A73268 = 1;
  }
  if ( !x )
    sub_1B9026C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
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
  int32_t v44; // w2
  int32_t v45; // w3
  BaseMonoBehaviour_o *v46; // x20
  struct System_Threading_CancellationTokenSource_o *v47; // x21
  System_Threading_CancellationTokenSource_c *v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  struct ClassBoardController_o *v52; // x8
  ClassBoardController___c__DisplayClass39_0_o *v53; // x20
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x3
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v57; // x21
  int32_t v58; // w2
  int32_t v59; // w3
  BaseMonoBehaviour_o *v60; // x20
  struct System_Threading_CancellationTokenSource_o *v61; // x21
  System_Threading_CancellationTokenSource_c *v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  struct ClassBoardController_o *v66; // x8
  ClassBoardController___c__DisplayClass39_0_o *v67; // x20
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x4
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v71; // x21
  int32_t v72; // w2
  int32_t v73; // w3
  BaseMonoBehaviour_o *v74; // x20
  struct System_Threading_CancellationTokenSource_o *v75; // x21
  System_Threading_CancellationTokenSource_c *v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  struct ClassBoardController_o *v80; // x8
  ClassBoardController___c__DisplayClass39_0_o *v81; // x20
  const MethodInfo *v82; // x2
  const MethodInfo *v83; // x5
  ClassBoardSquare_o *v84; // x21
  ClassBoardController___c_c *v85; // x0
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v87; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_Action_o *_9__5; // x24
  int32_t v92; // w2
  int32_t v93; // w3
  ClassBoardLockOpenConfirmDialog_o *v94; // x0
  ClassBoardSquare_o *v95; // x1
  bool v96; // w2
  struct ClassBoardController_o *v97; // x8
  ClassBoardController___c__DisplayClass39_0_o *v98; // x20
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x5
  ClassBoardSquare_o *v101; // x21
  ClassBoardController___c_c *v102; // x0
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v104; // x23
  struct ClassBoardController___c_StaticFields *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  System_Action_o *_9__7; // x24
  int32_t v109; // w2
  int32_t v110; // w3
  ClassBoardSquareOpenConfirmDialog_o *v111; // x0
  ClassBoardSquare_o *v112; // x1
  bool v113; // w2
  BaseMonoBehaviour_o *v114; // x20
  struct System_Threading_CancellationTokenSource_o *v115; // x21
  System_Threading_CancellationTokenSource_c *v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  struct ClassBoardController_o *v120; // x8
  ClassBoardController___c__DisplayClass39_0_o *v121; // x20
  const MethodInfo *v122; // x2
  ClassBoardSquare_o *v123; // x21
  int32_t v124; // w2
  int32_t v125; // w3
  int32_t v126; // w2
  int32_t v127; // w3
  ClassBoardController___c__DisplayClass39_0_o *v128; // x20
  const MethodInfo *v129; // x2
  ClassBoardSquare_o *v130; // x21
  int32_t v131; // w2
  int32_t v132; // w3
  int32_t v133; // w2
  int32_t v134; // w3

  v2 = this;
  if ( (byte_4A7326F & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v3);
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v4);
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v5);
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v6);
    sub_1B90010(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v7);
    sub_1B90010(&ClassBoardLock_TypeInfo, v8);
    sub_1B90010(&IClassBoardResourceCatalog_TypeInfo, v9);
    sub_1B90010(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, v10);
    sub_1B90010(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, v11);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__, v12);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__, v13);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__, v14);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__, v15);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__, v16);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__, v17);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__, v18);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__, v19);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__, v20);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B90010(&ClassBoardController___c_TypeInfo, v21);
    byte_4A7326F = 1;
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
      v31 = sub_1BE1FF0(_4__this[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                                                             (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
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
      _9__1 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
        0LL);
      v2->fields.__9__1 = _9__1;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v44, v45);
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
      v37 = sub_1BE1FF0(v32[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                                                             (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v53 = this;
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
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v54);
    _9__2 = v2->fields.__9__2;
    v57 = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      v2->fields.__9__2 = _9__2;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v58, v59);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v53, v57, _9__2, v55);
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
      v51 = sub_1BE1FF0(v46[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v51)(
                                                             v47,
                                                             *(_QWORD *)(v51 + 8));
    if ( !this )
      goto LABEL_136;
    v66 = v2->fields.__4__this;
    if ( !v66 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v46,
                                                             (Il2CppObject *)this->fields.__9__7,
                                                             v66->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v67 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v68);
    _9__3 = v2->fields.__9__3;
    v71 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
        0LL);
      v2->fields.__9__3 = _9__3;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v72, v73);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v67, v71, 0, _9__3, v69);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v60 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( v60 )
      {
        v61 = v60[2].fields.m_CancellationTokenSource;
        if ( v61 )
        {
          v62 = v61->klass;
          v63 = *(unsigned __int16 *)(&v61->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v61->klass->_2.bitflags2 + 3) )
          {
            v64 = &v62->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v64 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v63;
              v64 += 4;
              if ( !v63 )
                goto LABEL_56;
            }
            v65 = (__int64)(&v62->vtable._0_Equals.method + 2 * *v64);
          }
          else
          {
LABEL_56:
            v65 = sub_1BE1FF0(v60[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v65)(
                                                                   v61,
                                                                   *(_QWORD *)(v65 + 8));
          if ( this )
          {
            v80 = v2->fields.__4__this;
            if ( v80 )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v60,
                                                                       (Il2CppObject *)this->fields.__9__5,
                                                                       v80->fields.uiRoot,
                                                                       0LL,
                                                                       (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v81 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
                this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                           this,
                                                                           this->klass[1]._1.name);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v82);
                    v84 = v2->fields.square;
                    v85 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                      v85 = ClassBoardController___c_TypeInfo;
                    }
                    _9__39_4 = v85->static_fields->__9__39_4;
                    if ( !_9__39_4 )
                    {
                      if ( !v85->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v85);
                        v85 = ClassBoardController___c_TypeInfo;
                      }
                      v87 = (Il2CppObject *)v85->static_fields->__9;
                      _9__39_4 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__39_4,
                        v87,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__,
                        0LL);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__39_4 = _9__39_4;
                      sub_1B8FFB4(
                        (ServantStatusBattleListViewItem_o *)&static_fields->__9__39_4,
                        (int32_t)_9__39_4,
                        v89,
                        v90);
                    }
                    _9__5 = v2->fields.__9__5;
                    if ( !_9__5 )
                    {
                      _9__5 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__5,
                        (Il2CppObject *)v2,
                        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
                        0LL);
                      v2->fields.__9__5 = _9__5;
                      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v92, v93);
                    }
                    v94 = (ClassBoardLockOpenConfirmDialog_o *)v81;
                    v95 = v84;
                    v96 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1B9026C(this, method);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v74 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v74 )
        goto LABEL_136;
      v75 = v74[2].fields.m_CancellationTokenSource;
      if ( !v75 )
        goto LABEL_136;
      v76 = v75->klass;
      v77 = *(unsigned __int16 *)(&v75->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v75->klass->_2.bitflags2 + 3) )
      {
        v78 = &v76->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v78 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v77;
          v78 += 4;
          if ( !v77 )
            goto LABEL_72;
        }
        v79 = (__int64)(&v76->vtable._0_Equals.method + 2 * *v78);
      }
      else
      {
LABEL_72:
        v79 = sub_1BE1FF0(v74[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v79)(
                                                               v75,
                                                               *(_QWORD *)(v79 + 8));
      if ( !this )
        goto LABEL_136;
      v97 = v2->fields.__4__this;
      if ( !v97 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v74,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v97->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v98 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, method);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v99);
      v101 = v2->fields.square;
      v102 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v102 = ClassBoardController___c_TypeInfo;
      }
      _9__39_6 = v102->static_fields->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( !v102->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v102);
          v102 = ClassBoardController___c_TypeInfo;
        }
        v104 = (Il2CppObject *)v102->static_fields->__9;
        _9__39_6 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
        System_Action___ctor(_9__39_6, v104, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v105 = ClassBoardController___c_TypeInfo->static_fields;
        v105->__9__39_6 = _9__39_6;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v105->__9__39_6, (int32_t)_9__39_6, v106, v107);
      }
      _9__7 = v2->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        v2->fields.__9__7 = _9__7;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__7, (int32_t)_9__7, v109, v110);
      }
      v111 = (ClassBoardSquareOpenConfirmDialog_o *)v98;
      v112 = v101;
      v113 = 0;
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
      v114 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v114 )
        goto LABEL_136;
      v115 = v114[2].fields.m_CancellationTokenSource;
      if ( !v115 )
        goto LABEL_136;
      v116 = v115->klass;
      v117 = *(unsigned __int16 *)(&v115->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v115->klass->_2.bitflags2 + 3) )
      {
        v118 = &v116->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v118 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v117;
          v118 += 4;
          if ( !v117 )
            goto LABEL_112;
        }
        v119 = (__int64)(&v116->vtable._0_Equals.method + 2 * *v118);
      }
      else
      {
LABEL_112:
        v119 = sub_1BE1FF0(v114[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v119)(
                                                               v115,
                                                               *(_QWORD *)(v119 + 8));
      if ( !this )
        goto LABEL_136;
      v120 = v2->fields.__4__this;
      if ( v25 )
      {
        if ( v120 )
        {
          this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v114,
                                                                   (Il2CppObject *)this->fields.__9__5,
                                                                   v120->fields.uiRoot,
                                                                   0LL,
                                                                   (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v121 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
            this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
            if ( this )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                       this,
                                                                       this->klass[1]._1.name);
              if ( this )
              {
                ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v122);
                _9__39_4 = v2->fields.__9__8;
                v123 = v2->fields.square;
                if ( !_9__39_4 )
                {
                  _9__39_4 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__39_4,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
                    0LL);
                  v2->fields.__9__8 = _9__39_4;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__8, (int32_t)_9__39_4, v124, v125);
                }
                _9__5 = v2->fields.__9__9;
                if ( !_9__5 )
                {
                  _9__5 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__5,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
                    0LL);
                  v2->fields.__9__9 = _9__5;
                  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__9, (int32_t)_9__5, v126, v127);
                }
                v96 = 1;
                v94 = (ClassBoardLockOpenConfirmDialog_o *)v121;
                v95 = v123;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v94, v95, v96, _9__39_4, _9__5, v83);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v120 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v114,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v120->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2E78E98 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v128 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, method);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v129);
      _9__39_6 = v2->fields.__9__12;
      v130 = v2->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        v2->fields.__9__12 = _9__39_6;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__12, (int32_t)_9__39_6, v131, v132);
      }
      _9__7 = v2->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        v2->fields.__9__13 = _9__7;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__13, (int32_t)_9__7, v133, v134);
      }
      v113 = 1;
      v111 = (ClassBoardSquareOpenConfirmDialog_o *)v128;
      v112 = v130;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v111, v112, v113, _9__39_6, _9__7, v100);
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
    sub_1B9026C(_4__this, method);
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
  int32_t v8; // w2
  int32_t v9; // w3

  v3 = this;
  if ( (byte_4A73271 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B90010(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
                                                             v4);
    byte_4A73271 = 1;
  }
  _9__11 = v3->fields.__9__11;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v3->fields.__9__11 = _9__11;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__11, (int32_t)_9__11, v8, v9);
  }
  if ( !_4__this )
    sub_1B9026C(this, _);
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
    sub_1B9026C(_4__this, method);
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
  int32_t v14; // w2
  int32_t v15; // w3
  ClassBoardController___c__DisplayClass39_0_c *v16; // x8
  __int64 v17; // x9
  IClassBoardSquareUser_c **v18; // x10
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4A73272 & 1) == 0 )
  {
    sub_1B90010(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1B90010(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1B90010(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B90010(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
                                                             v5);
    byte_4A73272 = 1;
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
    v11 = sub_1BE1FF0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v11 + 8));
  _9__14 = (System_Action_object__o *)v2->fields.__9__14;
  v13 = this;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_object__o *)sub_1B9025C(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__14,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      0LL);
    v2->fields.__9__14 = (struct System_Action_IClassBoardSquareUser__o *)_9__14;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__14, (int32_t)_9__14, v14, v15);
  }
  if ( !v13 )
LABEL_21:
    sub_1B9026C(this, method);
  v16 = v13->klass;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v18 = (IClassBoardSquareUser_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_18;
    }
    v19 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
  }
  else
  {
LABEL_18:
    v19 = sub_1BE1FF0(v13, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v19)(
    v13,
    _9__14,
    *(_QWORD *)(v19 + 8));
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
    sub_1B9026C(_4__this, method);
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
  int32_t v8; // w2
  int32_t v9; // w3

  v3 = this;
  if ( (byte_4A73273 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B90010(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
                                                             v4);
    byte_4A73273 = 1;
  }
  _9__15 = v3->fields.__9__15;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__15,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v3->fields.__9__15 = _9__15;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v3->fields.__9__15, (int32_t)_9__15, v8, v9);
  }
  if ( !_4__this )
    sub_1B9026C(this, _);
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
    sub_1B9026C(_4__this, method);
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
    sub_1B9026C(_4__this, method);
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
    sub_1B9026C(_4__this, method);
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
    sub_1B9026C(_4__this, method);
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
    sub_1B9026C(_4__this, method);
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
  int32_t v14; // w2
  int32_t v15; // w3
  ClassBoardController___c__DisplayClass39_0_c *v16; // x8
  __int64 v17; // x9
  IClassBoardSquareUser_c **v18; // x10
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4A73270 & 1) == 0 )
  {
    sub_1B90010(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1B90010(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1B90010(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B90010(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
                                                             v5);
    byte_4A73270 = 1;
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
    v11 = sub_1BE1FF0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v11 + 8));
  _9__10 = (System_Action_object__o *)v2->fields.__9__10;
  v13 = this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_object__o *)sub_1B9025C(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__10,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      0LL);
    v2->fields.__9__10 = (struct System_Action_IClassBoardSquareUser__o *)_9__10;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v2->fields.__9__10, (int32_t)_9__10, v14, v15);
  }
  if ( !v13 )
LABEL_21:
    sub_1B9026C(this, method);
  v16 = v13->klass;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v18 = (IClassBoardSquareUser_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_18;
    }
    v19 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
  }
  else
  {
LABEL_18:
    v19 = sub_1BE1FF0(v13, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v19)(
    v13,
    _9__10,
    *(_QWORD *)(v19 + 8));
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
    sub_1B9026C(_4__this, method);
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
  int32_t v18; // w2
  int32_t v19; // w3
  struct ClassBoardController_o *v20; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v22; // x21
  Il2CppObject *v23; // x22
  struct ClassBoardController___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A73274 & 1) == 0 )
  {
    sub_1B90010(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1B90010(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v5);
    sub_1B90010(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6);
    sub_1B90010(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, v7);
    sub_1B90010(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, v8);
    sub_1B90010(&ClassBoardController___c_TypeInfo, v9);
    byte_4A73274 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    v15 = (System_Action_object__o *)sub_1B9025C(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v15, v16, Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)v15;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_1, (int32_t)v15, v18, v19);
  }
  if ( !squareViewList )
    goto LABEL_25;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v15,
    (const MethodInfo_3511400 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v20 = this->fields.__4__this;
  if ( !v20 )
    goto LABEL_25;
  Instance = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v20->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    Instance = ClassBoardController___c_TypeInfo;
  }
  v22 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v22 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v23 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v22 = (System_Action_object__o *)sub_1B9025C(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v22, v23, Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, 0LL);
    v24 = ClassBoardController___c_TypeInfo->static_fields;
    v24->__9__40_2 = (struct System_Action_ClassBoardLine__o *)v22;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v24->__9__40_2, (int32_t)v22, v25, v26);
  }
  if ( !lineViewList )
LABEL_25:
    sub_1B9026C(Instance, v11);
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v22,
    (const MethodInfo_3511400 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A73275 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_1B90010(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__, v4);
    byte_4A73275 = 1;
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
      _9__4 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v10, v11);
    }
    if ( v8 )
    {
      ClassBoardUIController__OpenMissionClearDialog(_4__this, _9__4, v7);
      goto LABEL_13;
    }
LABEL_15:
    sub_1B9026C(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, v7);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1B9026C(_4__this, method);
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
    sub_1B9026C(_4__this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}