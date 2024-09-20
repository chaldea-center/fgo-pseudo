void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5E54B & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardModelBuilder_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardLine__TypeInfo);
    byte_4A5E54B = 1;
  }
  v3 = (ClassBoardModelBuilder_o *)sub_1B887FC(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v3, 0LL);
  this->fields._builder_k__BackingField = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._builder_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.squareViewList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lineViewList, (int32_t)v9, v10, v11);
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
  System_Collections_Generic_List_object__o *v5; // x21
  ClassBoardUIController_o *v6; // x0
  __int64 v7; // x1
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0
  ClassBoardController___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__bool__o *_9__42_0; // x21
  Il2CppObject *v16; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  ClassBoardController___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__int__o *_9__42_1; // x21
  Il2CppObject *v24; // x22
  struct ClassBoardController___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  ClassBoardUIController_o *v29; // x21
  System_Action_o *v30; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v31; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5E548 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
    sub_1B885B0(&System_Func_IClassBoardLockModel__int__TypeInfo);
    sub_1B885B0(&System_Func_IClassBoardLockModel__bool__TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_1B885B0(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__);
    sub_1B885B0(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__);
    sub_1B885B0(&ClassBoardController___c_TypeInfo);
    byte_4A5E548 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v5;
  if ( !squareModel )
    goto LABEL_27;
  klass = squareModel->klass;
  v9 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v12 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v13 = ClassBoardController___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v13 = ClassBoardController___c_TypeInfo;
  }
  _9__42_0 = (System_Func_object__bool__o *)v13->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ClassBoardController___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__42_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__42_0,
      v16,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v21 = ClassBoardController___c_TypeInfo;
  v22 = v20;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v21 = ClassBoardController___c_TypeInfo;
  }
  _9__42_1 = (System_Func_object__int__o *)v21->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ClassBoardController___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__42_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__42_1,
      v24,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      0LL);
    v25 = ClassBoardController___c_TypeInfo->static_fields;
    v25->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->__9__42_1, (int32_t)_9__42_1, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v22,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_object_(
         v28,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v6 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
      v29 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v30 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v30,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__,
        0LL);
      if ( v29 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v29, v30, 0LL);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_1B8880C(v6, v7);
  }
LABEL_26:
  v31 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v28,
                                                                                    (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v31, 0LL);
}


ClassBoardSquare_o *__fastcall ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        const MethodInfo *method)
{
  ClassBoardController_o *v6; // x20
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v9; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x21
  Il2CppObject *v13; // x0

  v6 = this;
  if ( (byte_4A5E543 & 1) == 0 )
  {
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardController_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E543 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_1B8880C(this, defaultPrefab);
    klass = resourceCatalog->klass;
    v9 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v9;
        p_offset += 2;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
    }
    v13 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD, _QWORD))p_method)(
                            resourceCatalog,
                            (unsigned int)assetId,
                            *(_QWORD *)(p_method + 8));
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)v6,
                      v13,
                      v6->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
}


void __fastcall ClassBoardController__CreateViews(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x9
  int *v8; // x10
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  IClassBoardSquareModel_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v28; // x8
  __int64 v29; // x9
  IClassBoardSquareModel_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  IClassBoardSquareModel_c *v34; // x8
  ClassBoardSquare_o *v35; // x22
  IClassBoardSquareModel_c *v36; // x1
  __int64 v37; // x9
  IClassBoardSquareModel_c **v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  struct IClassBoardResourceCatalog_o *v42; // x22
  IClassBoardResourceCatalog_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  IClassBoardResourceCatalog_c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  IClassBoardSquareModel_c *v53; // x8
  __int64 v54; // x9
  IClassBoardSquareModel_c **v55; // x10
  __int64 v56; // x0
  __int64 v57; // x1
  IClassBoardSquareModel_c *v58; // x8
  __int64 v59; // x9
  IClassBoardSquareModel_c **v60; // x10
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ClassBoardSquare_o *v63; // x0
  __int64 v64; // x1
  Il2CppObject *v65; // x22
  __int64 v66; // x1
  int32_t v67; // w2
  int32_t v68; // w3
  System_Collections_Generic_List_object__o *squareViewList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x8
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  __int64 *v78; // x20
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x20
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x1
  struct IClassBoardResourceCatalog_o *v95; // x22
  IClassBoardResourceCatalog_c *v96; // x8
  IClassBoardLineModel_o *v97; // x21
  __int64 v98; // x9
  int32_t *v99; // x10
  __int64 v100; // x0
  __int64 v101; // x0
  __int64 v102; // x1
  Il2CppObject *Object_object; // x0
  __int64 v104; // x1
  Il2CppObject *v105; // x22
  __int64 v106; // x1
  int32_t v107; // w2
  int32_t v108; // w3
  System_Collections_Generic_List_object__o *lineViewList; // x0
  struct System_Object_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  Il2CppClass **v113; // x8
  __int64 v114; // x8
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0

  if ( (byte_4A5E542 & 1) == 0 )
  {
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    sub_1B885B0(&IClassBoardLockModel_TypeInfo);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardLine__Add__);
    byte_4A5E542 = 1;
  }
  v3 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
         this,
         this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v3 )
    goto LABEL_148;
  v5 = *(__int64 **)(v3 + 24);
  if ( !v5 )
    goto LABEL_148;
  v6 = *v5;
  v7 = *(unsigned __int16 *)(*v5 + 302);
  if ( *(_WORD *)(*v5 + 302) )
  {
    v8 = (int *)(*(_QWORD *)(v6 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v8 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v7;
      v8 += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = v6 + 16LL * *v8 + 312;
  }
  else
  {
LABEL_9:
    v9 = sub_1BDA590(*(_QWORD *)(v3 + 24), System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL);
  }
  v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v9)(v5, *(_QWORD *)(v9 + 8));
  if ( !v11 )
    sub_1B8880C(0LL, v10);
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_16:
      v15 = sub_1BDA590(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v11;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v18 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_23;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_23:
      v19 = sub_1BDA590(v11, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v20 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
    v21 = sub_1B886EC(v20, IClassBoardLockModel_TypeInfo);
    if ( v21 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_1B8880C(v21, v22);
      klass = resourceCatalog->klass;
      v25 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v25;
          p_offset += 4;
          if ( !v25 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_1BDA590(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v32 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v32 )
        sub_1B8880C(0LL, v33);
      if ( !v20 )
        sub_1B8880C(v32, v33);
      v34 = v20->klass;
      v35 = *(ClassBoardSquare_o **)(v32 + 32);
      v36 = IClassBoardSquareModel_TypeInfo;
      v37 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
      if ( !*(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
        goto LABEL_67;
      v38 = (IClassBoardSquareModel_c **)&v34->_1.interfaceOffsets->offset;
      while ( *(v38 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v37;
        v38 += 2;
        if ( !v37 )
          goto LABEL_67;
      }
      v39 = (__int64)&v34->vtable[*(_DWORD *)v38 + 10].method;
    }
    else
    {
      if ( !v20 )
        sub_1B8880C(0LL, v22);
      v28 = v20->klass;
      v29 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
      {
        v30 = (IClassBoardSquareModel_c **)&v28->_1.interfaceOffsets->offset;
        while ( *(v30 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v29;
          v30 += 2;
          if ( !v29 )
            goto LABEL_37;
        }
        v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 5].method;
      }
      else
      {
LABEL_37:
        v31 = sub_1BDA590(v20, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v40 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v31)(v20, *(_QWORD *)(v31 + 8));
      v42 = this->fields.resourceCatalog;
      if ( (v40 & 1) != 0 )
      {
        if ( !v42 )
          sub_1B8880C(v40, v41);
        v43 = v42->klass;
        v44 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
        {
          v45 = &v43->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v45 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_54;
          }
          v46 = (__int64)&v43->vtable[*v45].method;
        }
        else
        {
LABEL_54:
          v46 = sub_1BDA590(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v51 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
        if ( !v51 )
          sub_1B8880C(0LL, v52);
        v53 = v20->klass;
        v35 = *(ClassBoardSquare_o **)(v51 + 40);
        v36 = IClassBoardSquareModel_TypeInfo;
        v54 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
          goto LABEL_67;
        v55 = (IClassBoardSquareModel_c **)&v53->_1.interfaceOffsets->offset;
        while ( *(v55 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v54;
          v55 += 2;
          if ( !v54 )
            goto LABEL_67;
        }
        v39 = (__int64)&v53->vtable[*(_DWORD *)v55 + 10].method;
      }
      else
      {
        if ( !v42 )
          sub_1B8880C(v40, v41);
        v47 = v42->klass;
        v48 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
        {
          v49 = &v47->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v49 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v48;
            v49 += 4;
            if ( !v48 )
              goto LABEL_60;
          }
          v50 = (__int64)&v47->vtable[*v49].method;
        }
        else
        {
LABEL_60:
          v50 = sub_1BDA590(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v56 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
        if ( !v56 )
          sub_1B8880C(0LL, v57);
        v58 = v20->klass;
        v35 = *(ClassBoardSquare_o **)(v56 + 16);
        v36 = IClassBoardSquareModel_TypeInfo;
        v59 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
        if ( !*(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
        {
LABEL_67:
          v39 = sub_1BDA590(v20, v36, 10LL);
          goto LABEL_77;
        }
        v60 = (IClassBoardSquareModel_c **)&v58->_1.interfaceOffsets->offset;
        while ( *(v60 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v59;
          v60 += 2;
          if ( !v59 )
            goto LABEL_67;
        }
        v39 = (__int64)&v58->vtable[*(_DWORD *)v60 + 10].method;
      }
    }
LABEL_77:
    v61 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8));
    v63 = ClassBoardController__CloneSquareObject(this, v35, v61, v62);
    v65 = (Il2CppObject *)v63;
    if ( !v63 )
      sub_1B8880C(0LL, v64);
    ClassBoardSquare__Setup(v63, v20, 0LL);
    squareViewList = (System_Collections_Generic_List_object__o *)this->fields.squareViewList;
    if ( !squareViewList )
      sub_1B8880C(0LL, v66);
    items = squareViewList->fields._items;
    v71 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++squareViewList->fields._version;
    if ( !items )
      sub_1B8880C(squareViewList, v66);
    size = squareViewList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        squareViewList,
        v65,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
    }
    else
    {
      v73 = &items->obj.klass + size;
      squareViewList->fields._size = size + 1;
      v73[4] = (Il2CppClass *)v65;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v73 + 4), (int32_t)v65, v67, v68);
    }
  }
  v74 = *(_QWORD *)v11;
  v75 = *(unsigned __int16 *)(*(_QWORD *)v11 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 302LL) )
  {
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_87;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_87:
    v77 = sub_1BDA590(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v77)(v11, *(_QWORD *)(v77 + 8));
  v3 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
         this,
         this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v3 || (v78 = *(__int64 **)(v3 + 16)) == 0LL )
LABEL_148:
    sub_1B8880C(v3, v4);
  v79 = *v78;
  v80 = *(unsigned __int16 *)(*v78 + 302);
  if ( *(_WORD *)(*v78 + 302) )
  {
    v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v81 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v80;
      v81 += 4;
      if ( !v80 )
        goto LABEL_95;
    }
    v82 = v79 + 16LL * *v81 + 312;
  }
  else
  {
LABEL_95:
    v82 = sub_1BDA590(*(_QWORD *)(v3 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v84 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8));
  if ( !v84 )
    sub_1B8880C(0LL, v83);
  while ( 1 )
  {
    v85 = *(_QWORD *)v84;
    v86 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v87 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v86;
        v87 += 4;
        if ( !v86 )
          goto LABEL_102;
      }
      v88 = v85 + 16LL * *v87 + 312;
    }
    else
    {
LABEL_102:
      v88 = sub_1BDA590(v84, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8)) & 1) == 0 )
      break;
    v89 = *(_QWORD *)v84;
    v90 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
    {
      v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v91 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_109;
      }
      v92 = v89 + 16LL * *v91 + 312;
    }
    else
    {
LABEL_109:
      v92 = sub_1BDA590(v84, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v93 = (*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v84, *(_QWORD *)(v92 + 8));
    v95 = this->fields.resourceCatalog;
    if ( !v95 )
      sub_1B8880C(v93, v94);
    v96 = v95->klass;
    v97 = (IClassBoardLineModel_o *)v93;
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
      v100 = sub_1BDA590(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v101 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v100)(v95, *(_QWORD *)(v100 + 8));
    if ( !v101 )
      sub_1B8880C(0LL, v102);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v101 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v105 = Object_object;
    if ( !Object_object )
      sub_1B8880C(0LL, v104);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v97, 0LL);
    lineViewList = (System_Collections_Generic_List_object__o *)this->fields.lineViewList;
    if ( !lineViewList )
      sub_1B8880C(0LL, v106);
    v110 = lineViewList->fields._items;
    v111 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++lineViewList->fields._version;
    if ( !v110 )
      sub_1B8880C(lineViewList, v106);
    v112 = lineViewList->fields._size;
    if ( (unsigned int)v112 >= v110->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        lineViewList,
        v105,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
    }
    else
    {
      v113 = &v110->obj.klass + v112;
      lineViewList->fields._size = v112 + 1;
      v113[4] = (Il2CppClass *)v105;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v113 + 4), (int32_t)v105, v107, v108);
    }
  }
  v114 = *(_QWORD *)v84;
  v115 = *(unsigned __int16 *)(*(_QWORD *)v84 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v84 + 302LL) )
  {
    v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v116 - 1) != System_IDisposable_TypeInfo )
    {
      --v115;
      v116 += 4;
      if ( !v115 )
        goto LABEL_129;
    }
    v117 = v114 + 16LL * *v116 + 312;
  }
  else
  {
LABEL_129:
    v117 = sub_1BDA590(v84, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v117)(v84, *(_QWORD *)(v117 + 8));
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  int32_t baseId; // w20
  CommonUI_o *v8; // x21
  System_Action_o *v9; // x22

  if ( (byte_4A5E540 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController__OnClickEffectList_b__32_0__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E540 = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v8 = (CommonUI_o *)v6;
        v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v8 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v8, 0, baseId, 1, v9, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_1B8880C(Instance, v5);
  }
}


void __fastcall ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4A5E53F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController__OnClickHelp_b__31_0__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E53F = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
  {
    v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v4 )
      sub_1B8880C(0LL, v5);
    ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0LL);
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__31_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v6, 0LL);
  }
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A5E541 & 1) == 0 )
  {
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
    byte_4A5E541 = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_3739C3C *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    v5 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v5;
        p_offset += 2;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1BDA590(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
      resourceCatalog,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerable_TResult__o *v8; // x0
  ClassBoardController___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v12; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  ClassBoardController___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__int__o *_9__41_1; // x22
  Il2CppObject *v20; // x23
  struct ClassBoardController___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  System_Object_array *v26; // x0
  ClassBoardController___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_object__object__o *_9__41_2; // x22
  Il2CppObject *v30; // x23
  struct ClassBoardController___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v35; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v37; // x21

  if ( (byte_4A5E547 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ClassBoardLock___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ClassBoardLock___);
    sub_1B885B0(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
    sub_1B885B0(&System_Func_ClassBoardLock__int__TypeInfo);
    sub_1B885B0(&System_Func_ClassBoardLock__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__);
    sub_1B885B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__);
    sub_1B885B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__);
    sub_1B885B0(&ClassBoardController___c__DisplayClass41_0_TypeInfo);
    sub_1B885B0(&ClassBoardController___c_TypeInfo);
    byte_4A5E547 = 1;
  }
  v3 = sub_1B887FC(ClassBoardController___c__DisplayClass41_0_TypeInfo);
  ClassBoardController___c__DisplayClass41_0___ctor((ClassBoardController___c__DisplayClass41_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v8 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.squareViewList,
         (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v9 = ClassBoardController___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v9 = ClassBoardController___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v9->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ClassBoardController___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__41_0,
      v12,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v17 = ClassBoardController___c_TypeInfo;
  v18 = v16;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v17 = ClassBoardController___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__int__o *)v17->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ClassBoardController___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__41_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__41_1,
      v20,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      0LL);
    v21 = ClassBoardController___c_TypeInfo->static_fields;
    v21->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->__9__41_1, (int32_t)_9__41_1, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__41_1,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v3 + 16) = 0;
  v25 = v24;
  if ( System_Linq_Enumerable__Any_object_(
         v24,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v26 = System_Linq_Enumerable__ToArray_object_(
            v25,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v27 = ClassBoardController___c_TypeInfo;
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v27 = ClassBoardController___c_TypeInfo;
    }
    _9__41_2 = (System_Func_object__object__o *)v27->static_fields->__9__41_2;
    if ( !_9__41_2 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = ClassBoardController___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v27->static_fields->__9;
      _9__41_2 = (System_Func_object__object__o *)sub_1B887FC(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__41_2,
        v30,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        0LL);
      v31 = ClassBoardController___c_TypeInfo->static_fields;
      v31->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->__9__41_2, (int32_t)_9__41_2, v32, v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v28,
                                                                 (System_Func_TSource__TResult__o *)_9__41_2,
                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v35 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v34,
                                                                                      (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v35, 0LL);
  }
  effectController = this->fields.effectController;
  v37 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_29:
    sub_1B8880C(Instance, v5);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v37, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardUIController_o *transform; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  ClassBoardEffectController_o *effectController; // x22
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  System_Action_o *v24; // x19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E549 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__);
    sub_1B885B0(&ClassBoardController___c__DisplayClass43_0_TypeInfo);
    byte_4A5E549 = 1;
  }
  v7 = sub_1B887FC(ClassBoardController___c__DisplayClass43_0_TypeInfo);
  ClassBoardController___c__DisplayClass43_0___ctor((ClassBoardController___c__DisplayClass43_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callback, v12, v13);
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
  *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (ClassBoardUIController_o *)this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v18 = v15;
  v19 = v16;
  v20 = v17;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v24 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_1B8880C(transform, v9);
  v26.fields.z = v20 * z;
  v26.fields.y = v19 * y;
  v26.fields.x = v18 * x;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v26, v24, 0LL);
}


void __fastcall ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v15; // x22

  if ( (byte_4A5E546 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__);
    sub_1B885B0(&ClassBoardController___c__DisplayClass40_0_TypeInfo);
    byte_4A5E546 = 1;
  }
  v7 = sub_1B887FC(ClassBoardController___c__DisplayClass40_0_TypeInfo);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = endAct;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)endAct, v12, v13);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList((ClassBoardUIController_o *)Instance, 0LL),
        effectController = this->fields.effectController,
        v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_10:
    sub_1B8880C(Instance, v9);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v15, 0LL);
}


void __fastcall ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  UnityEngine_Component_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  ClassBoardController___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_T__o *v9; // x20
  System_Action_object__o *_9__29_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v17; // w9
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  ClassBoardController___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  System_Action_object__o *_9__29_1; // x21
  Il2CppObject *v22; // x22
  struct ClassBoardController___c_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w3
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int32_t v28; // w2
  int v29; // w9
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A5E53D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1B885B0(&System_Action_ClassBoardLine__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_ClassBoardLine___);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
    sub_1B885B0(&Method_BasicHelper_ForEach_ClassBoardLine___);
    sub_1B885B0(&Method_BasicHelper_ForEach_ClassBoardSquare___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController___c__Release_b__29_0__);
    sub_1B885B0(&Method_ClassBoardController___c__Release_b__29_1__);
    sub_1B885B0(&ClassBoardController___c_TypeInfo);
    byte_4A5E53D = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v4 )
      goto LABEL_30;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
  }
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
         (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v8 = ClassBoardController___c_TypeInfo;
  v9 = v7;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v8 = ClassBoardController___c_TypeInfo;
  }
  _9__29_0 = (System_Action_object__o *)v8->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ClassBoardController___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__29_0 = (System_Action_object__o *)sub_1B887FC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__29_0, v11, Method_ClassBoardController___c__Release_b__29_0__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__29_0, (int32_t)_9__29_0, v13, v14);
  }
  BasicHelper__ForEach_object_(
    v9,
    (System_Action_T__o *)_9__29_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_30;
  size = squareViewList->fields._size;
  v17 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0LL);
  v18 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v19 = ClassBoardController___c_TypeInfo;
  v20 = v18;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v19 = ClassBoardController___c_TypeInfo;
  }
  _9__29_1 = (System_Action_object__o *)v19->static_fields->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ClassBoardController___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__29_1 = (System_Action_object__o *)sub_1B887FC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__29_1, v22, Method_ClassBoardController___c__Release_b__29_1__, 0LL);
    v23 = ClassBoardController___c_TypeInfo->static_fields;
    v23->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v23->__9__29_1, (int32_t)_9__29_1, v24, v25);
  }
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)_9__29_1,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_30;
  v28 = lineViewList->fields._size;
  v29 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v29;
  if ( v28 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v28, 0LL);
  this->fields.effectController = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectController, 0, v28, v26);
  this->fields.background = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.background, 0, v30, v31);
  v4 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                    this,
                                    this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v4 )
LABEL_30:
    sub_1B8880C(v4, v5);
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v4, 0LL);
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

  if ( (byte_4A5E53E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E53E = 1;
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
      sub_1B8880C(0LL, v7);
    *(_QWORD *)(v6 + 88) = action;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 88), (int32_t)action, v8, v9);
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v15; // x2
  UnityEngine_Texture_o *targetTexture; // x23
  const MethodInfo_361E548 *v17; // x2
  MapCamera_o *v18; // x23
  BalanceConfig_c *v19; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  System_Action_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  Il2CppObject *current; // x22
  System_Action_object__o *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v34; // x23
  ClassBoardEffectController_o *v35; // x24
  int32_t v36; // w2
  int32_t v37; // w3
  System_Nullable_float__o size; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v39; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+18h] [xbp-68h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v42; // 0:x3.8
  System_Nullable_Vector3__o v43; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E53C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController_ShowBoard__);
    sub_1B885B0(&ClassBoardEffectController_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    sub_1B885B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&StringLiteral_12826/*"Sony SO-41B"*/);
    byte_4A5E53C = 1;
  }
  memset(&v40, 0, sizeof(v40));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.resourceCatalog,
    (int32_t)setResourceCatalog,
    (int32_t)classBoardBackground,
    baseId);
  this->fields.background = classBoardBackground;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.background, (int32_t)classBoardBackground, v11, v12);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_27;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_27;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v15);
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
  mapCamera = (MapCamera_o *)System_String__Equals_61715348(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_12826/*"Sony SO-41B"*/,
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
  v18 = this->fields.mapCamera;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  *(_QWORD *)&v43.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v43.fields.hasValue = &v39;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v39.fields.hasValue = 0LL;
  *(_QWORD *)&v39.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v43, zeroVector, v17);
  v19 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  static_fields = v19->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  if ( !v18 )
    goto LABEL_27;
  v42 = size;
  MapCamera__StartAutoWork(v18, 0.0, v39, v42, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v22;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&classBoardBackground->fields.showBoardCallback,
    (int32_t)v22,
    v23,
    v24);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v25);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v26);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v27),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_27:
    sub_1B8880C(mapCamera, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)mapCamera,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v40.fields._current;
    v29 = (System_Action_object__o *)sub_1B887FC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(
      v29,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      0LL);
    if ( !current )
      sub_1B8880C(v30, v31);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v29, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v34 = this->fields.mapCamera;
  v35 = (ClassBoardEffectController_o *)sub_1B887FC(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v35,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v34,
    classBoardBackground,
    0LL);
  this->fields.effectController = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectController, (int32_t)v35, v36, v37);
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
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v10; // x20
  System_Action_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x20
  System_Action_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  ClassBoardUIController_o *v23; // x21
  ClassBoardUIController_o *v24; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  Il2CppClass *v26; // x20
  ClassBoardController_o *v27; // x19
  int32_t v28; // [xsp+4h] [xbp-3Ch] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4A5E544 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
    sub_1B885B0(&Method_ClassBoardController_OnClickEffectList__);
    sub_1B885B0(&Method_ClassBoardController_OnClickHelp__);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_20513/*"img_txt_classscore_{0}"*/);
    this = (ClassBoardController_o *)sub_1B885B0(&StringLiteral_3498/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_4A5E544 = 1;
  }
  entity = 0LL;
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_28;
  klass = resourceCatalog->klass;
  v6 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
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
    p_method = sub_1BDA590(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                    (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
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
  v10 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v3, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v10 )
    goto LABEL_28;
  *(_QWORD *)(v10 + 96) = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 96), (int32_t)v11, v12, v13);
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)v3, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v14 )
    goto LABEL_28;
  *(_QWORD *)(v14 + 104) = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 104), (int32_t)v15, v16, v17);
  v28 = v3->fields.baseId;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v18, v19, v20);
  v22 = System_String__Format((System_String_o *)StringLiteral_20513/*"img_txt_classscore_{0}"*/, v21, 0LL);
  v23 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v23 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderTitle(v23, (AtlasManagerUnit_o *)this, v22, 0LL);
  v24 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3498/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v24 )
    goto LABEL_28;
  ClassBoardUIController__SetHeaderMessage(v24, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_28;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v3->fields.baseId,
                                     (const MethodInfo_311D988 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    || (v26 = entity[4].klass,
        v27 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v27) )
  {
LABEL_28:
    sub_1B8880C(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v27,
    (System_Int32_array *)v26,
    (AtlasManagerUnit_o *)this,
    0LL);
}


void __fastcall ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ClassBoardSquare_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ClassBoardSquare_o **v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 *v13; // x22
  __int64 v14; // x8
  __int64 v15; // x9
  IClassBoardSquareModel_c **v16; // x10
  __int64 v17; // x0
  ClassBoardSquare_o *v18; // x8
  __int64 methodPtr_low; // x11
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v22; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  ClassBoardSquare_o *v25; // x21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x3

  if ( (byte_4A5E545 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ClassBoardLock_TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__);
    sub_1B885B0(&ClassBoardController___c__DisplayClass39_0_TypeInfo);
    byte_4A5E545 = 1;
  }
  v5 = sub_1B887FC(ClassBoardController___c__DisplayClass39_0_TypeInfo);
  ClassBoardController___c__DisplayClass39_0___ctor((ClassBoardController___c__DisplayClass39_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 32) = square;
  v10 = (ClassBoardSquare_o **)(v5 + 32);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)square, v11, v12);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_29;
  v13 = *(__int64 **)(*(_QWORD *)(v5 + 32) + 176LL);
  if ( !v13 )
    goto LABEL_29;
  v14 = *v13;
  v15 = *(unsigned __int16 *)(*v13 + 302);
  if ( *(_WORD *)(*v13 + 302) )
  {
    v16 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v14 + 176) + 8LL);
    while ( *(v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      v16 += 2;
      if ( !v15 )
        goto LABEL_10;
    }
    v17 = v14 + 16LL * (*(_DWORD *)v16 + 13) + 312;
  }
  else
  {
LABEL_10:
    v17 = sub_1BDA590(v13, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v6 = (ClassBoardSquare_o *)(*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v17)(v13, 0LL, *(_QWORD *)(v17 + 8));
  *(_DWORD *)(v5 + 16) = (_DWORD)v6;
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v18 = *v10;
    if ( *v10 )
    {
      methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ClassBoardLock_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
      {
        return;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v18 = *v10;
  }
  if ( !v18 )
    goto LABEL_29;
LABEL_19:
  SquareModel_k__BackingField = v18->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_29;
  klass = SquareModel_k__BackingField->klass;
  v22 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v22;
      p_offset += 2;
      if ( !v22 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_24:
    p_method = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          SquareModel_k__BackingField,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v6 = *v10;
    if ( *v10 )
    {
      ClassBoardSquare__SetSelectedEffectActive(v6, 1, 0LL);
      v25 = *(ClassBoardSquare_o **)(v5 + 32);
      v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v5,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v25, v26, v27);
      return;
    }
LABEL_29:
    sub_1B8880C(v6, v7);
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_4A5E54A & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
    byte_4A5E54A = 1;
  }
  v3 = sub_1B887FC(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__45___ctor((ClassBoardController__ShowBoardCoroutine_d__45_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
    sub_1B8880C(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E54C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E54C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(0LL, v3);
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
    sub_1B8880C(0LL, v3);
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
  sub_1B88554(
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
  ClassBoardController__ShowBoardCoroutine_d__45_o **_4__this; // x19
  int32_t v4; // w2
  int32_t v5; // w3
  __int64 v6; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  System_Action_o *v11; // x20
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_4A5E55D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    byte_4A5E55D = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v13, 0, sizeof(v13));
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
      sub_1B88554(p__2__current, 0, v4, v5);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    this = _4__this[13];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v12;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          ((void (*)(void))i.fields._current->klass->vtable[7].method)() )
    {
      if ( !i.fields._current )
        sub_1B8880C(0LL, v6);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = _4__this[14];
    if ( !this )
      goto LABEL_25;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v13.fields._current )
        sub_1B8880C(0LL, v9);
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v13.fields._current, v9);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__45_o *)(*(__int64 (__fastcall **)(ClassBoardController__ShowBoardCoroutine_d__45_o **, Il2CppObject *))&(*_4__this)[9].fields.__1__state)(
                                                                 _4__this,
                                                                 (*_4__this)[9].fields.__2__current);
    if ( !this )
LABEL_25:
      sub_1B8880C(this, method);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v10);
    v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
    EventTutorialMaster__CheckTutorial(0, 82, v11, 0, 0, 0, 0, 0LL);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E54D & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardController___c_TypeInfo);
    byte_4A5E54D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v8; // w1
  const MethodInfo *v9; // x2
  IClassBoardLockModel_c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  IClassBoardLockModel_c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  IClassBoardLockModel_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  char v22; // w8
  __int64 v24; // [xsp+0h] [xbp-30h] BYREF
  int v25; // [xsp+8h] [xbp-28h]
  ClassBoardCondData_o v26; // 0:x0.12

  if ( (byte_4A5E552 & 1) == 0 )
  {
    sub_1B885B0(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E552 = 1;
  }
  v25 = 0;
  v24 = 0LL;
  if ( !x )
    sub_1B8880C(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
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
    p_method = sub_1BDA590(x, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v24 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v25 = v8;
  *(_QWORD *)&v26.fields.Type = &v24;
  v26.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v26, v9) )
    goto LABEL_30;
  v10 = x->klass;
  v11 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      v12 += 4;
      if ( !v11 )
        goto LABEL_15;
    }
    v13 = (__int64)&v10->vtable[*v12 + 13].method;
  }
  else
  {
LABEL_15:
    v13 = sub_1BDA590(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v13)(x, 0LL, *(_QWORD *)(v13 + 8)) & 2) != 0 )
    goto LABEL_30;
  v14 = x->klass;
  v15 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v16 = &v14->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_22;
    }
    v17 = (__int64)&v14->vtable[*v16 + 13].method;
  }
  else
  {
LABEL_22:
    v17 = sub_1BDA590(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v17)(x, 0LL, *(_QWORD *)(v17 + 8)) & 4) != 0 )
  {
LABEL_30:
    v22 = 0;
  }
  else
  {
    v18 = x->klass;
    v19 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v20 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_29;
      }
      v21 = (__int64)&v18->vtable[*v20 + 1].method;
    }
    else
    {
LABEL_29:
      v21 = sub_1BDA590(x, IClassBoardLockModel_TypeInfo, 1LL);
    }
    v22 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v21)(x, *(_QWORD *)(v21 + 8)) ^ 1;
  }
  return v22 & 1;
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

  if ( (byte_4A5E553 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E553 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
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
    p_method = sub_1BDA590(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


bool __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x20
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  ClassBoardController___c_c *v11; // x8
  ClassBoardController___c_o *v12; // x20
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  ClassBoardController___c_c *v16; // x8
  ClassBoardController___c_o *v17; // x20
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  ClassBoardController___c_c *v21; // x8
  ClassBoardController___c_o *v22; // x19
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  char v26; // w8
  __int64 v28; // [xsp+0h] [xbp-40h] BYREF
  int v29; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v30; // 0:x0.12

  if ( (byte_4A5E550 & 1) == 0 )
  {
    sub_1B885B0(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E550 = 1;
  }
  v29 = 0;
  v28 = 0LL;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
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
    v8 = sub_1BDA590(this, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  v29 = v9;
  *(_QWORD *)&v30.fields.Type = &v28;
  v30.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v30, v10) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v11 = this->klass;
  v12 = this;
  v13 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_17;
    }
    v15 = (__int64)(&v11[1]._1.methods + 2 * *v14);
  }
  else
  {
LABEL_17:
    v15 = sub_1BDA590(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v15)(v12, 0LL, *(_QWORD *)(v15 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v16 = this->klass;
  v17 = this;
  v18 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 4;
      if ( !v18 )
        goto LABEL_25;
    }
    v20 = (__int64)(&v16[1]._1.methods + 2 * *v19);
  }
  else
  {
LABEL_25:
    v20 = sub_1BDA590(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v20)(v17, 0LL, *(_QWORD *)(v20 + 8)) & 4) != 0 )
  {
LABEL_34:
    v26 = 0;
    return v26 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_38:
    sub_1B8880C(this, x);
  v21 = this->klass;
  v22 = this;
  v23 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v24 = &v21->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v24 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_33;
    }
    v25 = (__int64)(&v21->vtable._1_Finalize.method + 2 * *v24);
  }
  else
  {
LABEL_33:
    v25 = sub_1BDA590(this, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v26 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8)) ^ 1;
  return v26 & 1;
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

  if ( (byte_4A5E551 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    byte_4A5E551 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_1B8880C(this, x);
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
    v8 = sub_1BDA590(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5E54E & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E54E = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5E54F & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E54F = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
  int32_t acquireFlag; // w8
  struct ClassBoardSquare_o *v4; // x8
  __int64 methodPtr_low; // x11
  struct ClassBoardSquare_o *v6; // x22
  BaseMonoBehaviour_o *_4__this; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  System_Threading_CancellationTokenSource_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  BaseMonoBehaviour_o *v13; // x20
  struct System_Threading_CancellationTokenSource_o *v14; // x21
  System_Threading_CancellationTokenSource_c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  struct ClassBoardController_o *v19; // x8
  ClassBoardController___c__DisplayClass39_0_o *v20; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  BaseMonoBehaviour_o *v27; // x20
  struct System_Threading_CancellationTokenSource_o *v28; // x21
  System_Threading_CancellationTokenSource_c *v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  struct ClassBoardController_o *v33; // x8
  ClassBoardController___c__DisplayClass39_0_o *v34; // x20
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v38; // x21
  int32_t v39; // w2
  int32_t v40; // w3
  BaseMonoBehaviour_o *v41; // x20
  struct System_Threading_CancellationTokenSource_o *v42; // x21
  System_Threading_CancellationTokenSource_c *v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  struct ClassBoardController_o *v47; // x8
  ClassBoardController___c__DisplayClass39_0_o *v48; // x20
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x4
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  BaseMonoBehaviour_o *v55; // x20
  struct System_Threading_CancellationTokenSource_o *v56; // x21
  System_Threading_CancellationTokenSource_c *v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  struct ClassBoardController_o *v61; // x8
  ClassBoardController___c__DisplayClass39_0_o *v62; // x20
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x5
  ClassBoardSquare_o *v65; // x21
  ClassBoardController___c_c *v66; // x0
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v68; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_Action_o *_9__5; // x24
  int32_t v73; // w2
  int32_t v74; // w3
  ClassBoardLockOpenConfirmDialog_o *v75; // x0
  ClassBoardSquare_o *v76; // x1
  bool v77; // w2
  struct ClassBoardController_o *v78; // x8
  ClassBoardController___c__DisplayClass39_0_o *v79; // x20
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x5
  ClassBoardSquare_o *v82; // x21
  ClassBoardController___c_c *v83; // x0
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v85; // x23
  struct ClassBoardController___c_StaticFields *v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  System_Action_o *_9__7; // x24
  int32_t v90; // w2
  int32_t v91; // w3
  ClassBoardSquareOpenConfirmDialog_o *v92; // x0
  ClassBoardSquare_o *v93; // x1
  bool v94; // w2
  BaseMonoBehaviour_o *v95; // x20
  struct System_Threading_CancellationTokenSource_o *v96; // x21
  System_Threading_CancellationTokenSource_c *v97; // x8
  __int64 v98; // x9
  int *v99; // x10
  __int64 v100; // x0
  struct ClassBoardController_o *v101; // x8
  ClassBoardController___c__DisplayClass39_0_o *v102; // x20
  const MethodInfo *v103; // x2
  ClassBoardSquare_o *v104; // x21
  int32_t v105; // w2
  int32_t v106; // w3
  int32_t v107; // w2
  int32_t v108; // w3
  ClassBoardController___c__DisplayClass39_0_o *v109; // x20
  const MethodInfo *v110; // x2
  ClassBoardSquare_o *v111; // x21
  int32_t v112; // w2
  int32_t v113; // w3
  int32_t v114; // w2
  int32_t v115; // w3

  v2 = this;
  if ( (byte_4A5E556 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_1B885B0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1B885B0(&ClassBoardLock_TypeInfo);
    sub_1B885B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1B885B0(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__);
    sub_1B885B0(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B885B0(&ClassBoardController___c_TypeInfo);
    byte_4A5E556 = 1;
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
    v10 = *(unsigned __int16 *)(&m_CancellationTokenSource->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&m_CancellationTokenSource->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_17;
      }
      v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_17:
      v12 = sub_1BDA590(_4__this[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v12)(
                                                             m_CancellationTokenSource,
                                                             *(_QWORD *)(v12 + 8));
    if ( !this )
      goto LABEL_136;
    v19 = v2->fields.__4__this;
    if ( !v19 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             _4__this,
                                                             (Il2CppObject *)this->fields.__9__11,
                                                             v19->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    if ( !this )
      goto LABEL_136;
    v20 = this;
    ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v21);
    _9__1 = v2->fields.__9__1;
    square = v2->fields.square;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
        0LL);
      v2->fields.__9__1 = _9__1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__1, (int32_t)_9__1, v25, v26);
    }
    ClassBoardSquareDetailDialog__Open((ClassBoardSquareDetailDialog_o *)v20, square, _9__1, v22);
  }
  else if ( (acquireFlag & 2) != 0 )
  {
    v13 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v13 )
      goto LABEL_136;
    v14 = v13[2].fields.m_CancellationTokenSource;
    if ( !v14 )
      goto LABEL_136;
    v15 = v14->klass;
    v16 = *(unsigned __int16 *)(&v14->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v14->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v17 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_24;
      }
      v18 = (__int64)(&v15->vtable._0_Equals.method + 2 * *v17);
    }
    else
    {
LABEL_24:
      v18 = sub_1BDA590(v13[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v18)(
                                                             v14,
                                                             *(_QWORD *)(v18 + 8));
    if ( !this )
      goto LABEL_136;
    v33 = v2->fields.__4__this;
    if ( !v33 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v13,
                                                             (Il2CppObject *)this->fields.__9__2,
                                                             v33->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v34 = this;
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
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v35);
    _9__2 = v2->fields.__9__2;
    v38 = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      v2->fields.__9__2 = _9__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v39, v40);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v34, v38, _9__2, v36);
  }
  else if ( (acquireFlag & 4) != 0 )
  {
    v27 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v27 )
      goto LABEL_136;
    v28 = v27[2].fields.m_CancellationTokenSource;
    if ( !v28 )
      goto LABEL_136;
    v29 = v28->klass;
    v30 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v31 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_40;
      }
      v32 = (__int64)(&v29->vtable._0_Equals.method + 2 * *v31);
    }
    else
    {
LABEL_40:
      v32 = sub_1BDA590(v27[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v32)(
                                                             v28,
                                                             *(_QWORD *)(v32 + 8));
    if ( !this )
      goto LABEL_136;
    v47 = v2->fields.__4__this;
    if ( !v47 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v27,
                                                             (Il2CppObject *)this->fields.__9__7,
                                                             v47->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v48 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v49);
    _9__3 = v2->fields.__9__3;
    v52 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
        0LL);
      v2->fields.__9__3 = _9__3;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v53, v54);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v48, v52, 0, _9__3, v50);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v41 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( v41 )
      {
        v42 = v41[2].fields.m_CancellationTokenSource;
        if ( v42 )
        {
          v43 = v42->klass;
          v44 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
          {
            v45 = &v43->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v45 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v44;
              v45 += 4;
              if ( !v44 )
                goto LABEL_56;
            }
            v46 = (__int64)(&v43->vtable._0_Equals.method + 2 * *v45);
          }
          else
          {
LABEL_56:
            v46 = sub_1BDA590(v41[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v46)(
                                                                   v42,
                                                                   *(_QWORD *)(v46 + 8));
          if ( this )
          {
            v61 = v2->fields.__4__this;
            if ( v61 )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v41,
                                                                       (Il2CppObject *)this->fields.__9__5,
                                                                       v61->fields.uiRoot,
                                                                       0LL,
                                                                       (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v62 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
                this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                           this,
                                                                           this->klass[1]._1.name);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v63);
                    v65 = v2->fields.square;
                    v66 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                      v66 = ClassBoardController___c_TypeInfo;
                    }
                    _9__39_4 = v66->static_fields->__9__39_4;
                    if ( !_9__39_4 )
                    {
                      if ( !v66->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v66);
                        v66 = ClassBoardController___c_TypeInfo;
                      }
                      v68 = (Il2CppObject *)v66->static_fields->__9;
                      _9__39_4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__39_4,
                        v68,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__,
                        0LL);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__39_4 = _9__39_4;
                      sub_1B88554(
                        (ServantStatusBattleListViewItem_o *)&static_fields->__9__39_4,
                        (int32_t)_9__39_4,
                        v70,
                        v71);
                    }
                    _9__5 = v2->fields.__9__5;
                    if ( !_9__5 )
                    {
                      _9__5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__5,
                        (Il2CppObject *)v2,
                        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
                        0LL);
                      v2->fields.__9__5 = _9__5;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__5, (int32_t)_9__5, v73, v74);
                    }
                    v75 = (ClassBoardLockOpenConfirmDialog_o *)v62;
                    v76 = v65;
                    v77 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1B8880C(this, method);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v55 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v55 )
        goto LABEL_136;
      v56 = v55[2].fields.m_CancellationTokenSource;
      if ( !v56 )
        goto LABEL_136;
      v57 = v56->klass;
      v58 = *(unsigned __int16 *)(&v56->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v56->klass->_2.bitflags2 + 3) )
      {
        v59 = &v57->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v59 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v58;
          v59 += 4;
          if ( !v58 )
            goto LABEL_72;
        }
        v60 = (__int64)(&v57->vtable._0_Equals.method + 2 * *v59);
      }
      else
      {
LABEL_72:
        v60 = sub_1BDA590(v55[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v60)(
                                                               v56,
                                                               *(_QWORD *)(v60 + 8));
      if ( !this )
        goto LABEL_136;
      v78 = v2->fields.__4__this;
      if ( !v78 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v55,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v78->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v79 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, method);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v80);
      v82 = v2->fields.square;
      v83 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v83 = ClassBoardController___c_TypeInfo;
      }
      _9__39_6 = v83->static_fields->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          v83 = ClassBoardController___c_TypeInfo;
        }
        v85 = (Il2CppObject *)v83->static_fields->__9;
        _9__39_6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__39_6, v85, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v86 = ClassBoardController___c_TypeInfo->static_fields;
        v86->__9__39_6 = _9__39_6;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v86->__9__39_6, (int32_t)_9__39_6, v87, v88);
      }
      _9__7 = v2->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        v2->fields.__9__7 = _9__7;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__7, (int32_t)_9__7, v90, v91);
      }
      v92 = (ClassBoardSquareOpenConfirmDialog_o *)v79;
      v93 = v82;
      v94 = 0;
    }
    else
    {
      v4 = v2->fields.square;
      if ( v4
        && (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ClassBoardLock_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
          v6 = v2->fields.square;
        else
          v6 = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      v95 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v95 )
        goto LABEL_136;
      v96 = v95[2].fields.m_CancellationTokenSource;
      if ( !v96 )
        goto LABEL_136;
      v97 = v96->klass;
      v98 = *(unsigned __int16 *)(&v96->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v96->klass->_2.bitflags2 + 3) )
      {
        v99 = &v97->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v99 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v98;
          v99 += 4;
          if ( !v98 )
            goto LABEL_112;
        }
        v100 = (__int64)(&v97->vtable._0_Equals.method + 2 * *v99);
      }
      else
      {
LABEL_112:
        v100 = sub_1BDA590(v95[2].fields.m_CancellationTokenSource, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct System_Threading_CancellationTokenSource_o *, _QWORD))v100)(
                                                               v96,
                                                               *(_QWORD *)(v100 + 8));
      if ( !this )
        goto LABEL_136;
      v101 = v2->fields.__4__this;
      if ( v6 )
      {
        if ( v101 )
        {
          this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v95,
                                                                   (Il2CppObject *)this->fields.__9__5,
                                                                   v101->fields.uiRoot,
                                                                   0LL,
                                                                   (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v102 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
            this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
            if ( this )
            {
              this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                       this,
                                                                       this->klass[1]._1.name);
              if ( this )
              {
                ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v103);
                _9__39_4 = v2->fields.__9__8;
                v104 = v2->fields.square;
                if ( !_9__39_4 )
                {
                  _9__39_4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__39_4,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
                    0LL);
                  v2->fields.__9__8 = _9__39_4;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__8, (int32_t)_9__39_4, v105, v106);
                }
                _9__5 = v2->fields.__9__9;
                if ( !_9__5 )
                {
                  _9__5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__5,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
                    0LL);
                  v2->fields.__9__9 = _9__5;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__9, (int32_t)_9__5, v107, v108);
                }
                v77 = 1;
                v75 = (ClassBoardLockOpenConfirmDialog_o *)v102;
                v76 = v104;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v75, v76, v77, _9__39_4, _9__5, v64);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v101 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v95,
                                                               (Il2CppObject *)this->fields.__9__3,
                                                               v101->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_2E6A584 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v109 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, method);
      this = (ClassBoardController___c__DisplayClass39_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass39_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass39_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, v110);
      _9__39_6 = v2->fields.__9__12;
      v111 = v2->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        v2->fields.__9__12 = _9__39_6;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__12, (int32_t)_9__39_6, v112, v113);
      }
      _9__7 = v2->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        v2->fields.__9__13 = _9__7;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__13, (int32_t)_9__7, v114, v115);
      }
      v94 = 1;
      v92 = (ClassBoardSquareOpenConfirmDialog_o *)v109;
      v93 = v111;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v92, v93, v94, _9__39_6, _9__7, v81);
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
    sub_1B8880C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass39_0_o *v3; // x19
  System_Action_o *_9__11; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A5E558 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__);
    byte_4A5E558 = 1;
  }
  _9__11 = v3->fields.__9__11;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v3->fields.__9__11 = _9__11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__11, (int32_t)_9__11, v7, v8);
  }
  if ( !_4__this )
    sub_1B8880C(this, _);
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
    sub_1B8880C(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass39_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__14; // x21
  ClassBoardController___c__DisplayClass39_0_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  ClassBoardController___c__DisplayClass39_0_c *v13; // x8
  __int64 v14; // x9
  IClassBoardSquareUser_c **v15; // x10
  __int64 v16; // x0

  v2 = this;
  if ( (byte_4A5E559 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__);
    byte_4A5E559 = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v8 = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__14 = (System_Action_object__o *)v2->fields.__9__14;
  v10 = this;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_object__o *)sub_1B887FC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__14,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      0LL);
    v2->fields.__9__14 = (struct System_Action_IClassBoardSquareUser__o *)_9__14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__14, (int32_t)_9__14, v11, v12);
  }
  if ( !v10 )
LABEL_21:
    sub_1B8880C(this, method);
  v13 = v10->klass;
  v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    v15 = (IClassBoardSquareUser_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_18;
    }
    v16 = (__int64)(&v13->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v15);
  }
  else
  {
LABEL_18:
    v16 = sub_1BDA590(v10, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v16)(
    v10,
    _9__14,
    *(_QWORD *)(v16 + 8));
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
    sub_1B8880C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass39_0_o *v3; // x19
  System_Action_o *_9__15; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  v3 = this;
  if ( (byte_4A5E55A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__);
    byte_4A5E55A = 1;
  }
  _9__15 = v3->fields.__9__15;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__15,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v3->fields.__9__15 = _9__15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v3->fields.__9__15, (int32_t)_9__15, v7, v8);
  }
  if ( !_4__this )
    sub_1B8880C(this, _);
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
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, v3);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass39_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__10; // x21
  ClassBoardController___c__DisplayClass39_0_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  ClassBoardController___c__DisplayClass39_0_c *v13; // x8
  __int64 v14; // x9
  IClassBoardSquareUser_c **v15; // x10
  __int64 v16; // x0

  v2 = this;
  if ( (byte_4A5E557 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_1B885B0(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__);
    byte_4A5E557 = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v8 = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__10 = (System_Action_object__o *)v2->fields.__9__10;
  v10 = this;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_object__o *)sub_1B887FC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__10,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      0LL);
    v2->fields.__9__10 = (struct System_Action_IClassBoardSquareUser__o *)_9__10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__10, (int32_t)_9__10, v11, v12);
  }
  if ( !v10 )
LABEL_21:
    sub_1B8880C(this, method);
  v13 = v10->klass;
  v14 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    v15 = (IClassBoardSquareUser_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_18;
    }
    v16 = (__int64)(&v13->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v15);
  }
  else
  {
LABEL_18:
    v16 = sub_1BDA590(v10, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_object__o *, _QWORD))v16)(
    v10,
    _9__10,
    *(_QWORD *)(v16 + 8));
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
    sub_1B8880C(_4__this, method);
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
  void *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct ClassBoardController_o *_4__this; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  System_Action_object__o *v8; // x21
  Il2CppObject *v9; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct ClassBoardController_o *v13; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v15; // x21
  Il2CppObject *v16; // x22
  struct ClassBoardController___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5E55B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1B885B0(&System_Action_ClassBoardLine__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__);
    sub_1B885B0(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__);
    sub_1B885B0(&ClassBoardController___c_TypeInfo);
    byte_4A5E55B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)Instance, v4);
  Instance = this->fields.__4__this;
  if ( !Instance )
    goto LABEL_25;
  Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)Instance + 376LL))(
                       Instance,
                       *(_QWORD *)(*(_QWORD *)Instance + 384LL));
  if ( !Instance )
    goto LABEL_25;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, v5);
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
  v8 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 40LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v8 = (System_Action_object__o *)sub_1B887FC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v8, v9, Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_1, (int32_t)v8, v11, v12);
  }
  if ( !squareViewList )
    goto LABEL_25;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v8,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_25;
  Instance = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v13->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    Instance = ClassBoardController___c_TypeInfo;
  }
  v15 = *(System_Action_object__o **)(*((_QWORD *)Instance + 23) + 48LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ClassBoardController___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v15 = (System_Action_object__o *)sub_1B887FC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v15, v16, Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, 0LL);
    v17 = ClassBoardController___c_TypeInfo->static_fields;
    v17->__9__40_2 = (struct System_Action_ClassBoardLine__o *)v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->__9__40_2, (int32_t)v15, v18, v19);
  }
  if ( !lineViewList )
LABEL_25:
    sub_1B8880C(Instance, v4);
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v15,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  ClassBoardUIController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  const MethodInfo *v5; // x2
  ClassBoardUIController_o *v6; // x20
  System_Action_o *_9__4; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E55C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__);
    byte_4A5E55C = 1;
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
  v6 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v8, v9);
    }
    if ( v6 )
    {
      ClassBoardUIController__OpenMissionClearDialog(_4__this, _9__4, v5);
      goto LABEL_13;
    }
LABEL_15:
    sub_1B8880C(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, v5);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1B8880C(_4__this, method);
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
    sub_1B8880C(_4__this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}