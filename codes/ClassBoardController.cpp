void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_438C42B & 1) == 0 )
  {
    sub_B775C4(&ClassBoardModelBuilder_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardLine__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
    byte_438C42B = 1;
  }
  v3 = (ClassBoardModelBuilder_o *)sub_B77694(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v3, 0LL);
  this->fields._builder_k__BackingField = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._builder_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.squareViewList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  ClassBoardUIController_o *v6; // x0
  __int64 v7; // x1
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  ClassBoardController___c_c *v13; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_0; // x21
  Il2CppObject *v16; // x22
  struct ClassBoardController___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  ClassBoardController___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  struct ClassBoardController___c_StaticFields *v27; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__42_1; // x21
  Il2CppObject *v29; // x22
  struct ClassBoardController___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  ClassBoardUIController_o *v38; // x21
  System_Action_o *v39; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v40; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C428 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___);
    sub_B775C4(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
    sub_B775C4(&Method_System_Func_IClassBoardLockModel__int___ctor__);
    sub_B775C4(&Method_System_Func_IClassBoardLockModel__bool___ctor__);
    sub_B775C4(&System_Func_IClassBoardLockModel__bool__TypeInfo);
    sub_B775C4(&System_Func_IClassBoardLockModel__int__TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B775C4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__);
    sub_B775C4(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__);
    sub_B775C4(&ClassBoardController___c_TypeInfo);
    byte_438C428 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v5;
  if ( !squareModel )
    goto LABEL_31;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               source,
                                                               (const MethodInfo_1D34774 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v13 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v13 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_0,
      v16,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_IClassBoardLockModel__bool___ctor__);
    v17 = ClassBoardController___c_TypeInfo->static_fields;
    v17->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v17->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v12,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v25 = ClassBoardController___c_TypeInfo;
  v26 = v24;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v25 = ClassBoardController___c_TypeInfo;
  }
  v27 = v25->static_fields;
  _9__42_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v27->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v27 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)v27->__9;
    _9__42_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__42_1,
      v29,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      (const MethodInfo_29E9E70 *)Method_System_Func_IClassBoardLockModel__int___ctor__);
    v30 = ClassBoardController___c_TypeInfo->static_fields;
    v30->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v30->__9__42_1,
      (System_Int32_array **)_9__42_1,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v26,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v37,
         (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v6 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
      v38 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v39 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v39,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__,
        0LL);
      if ( v38 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v38, v39, 0LL);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_B7769C(v6, v7);
  }
LABEL_30:
  v40 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                    v37,
                                                                                    (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v40, 0LL);
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
  unsigned __int64 v9; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x21
  Il2CppObject *v13; // x0

  v6 = this;
  if ( (byte_438C423 & 1) == 0 )
  {
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
    sub_B775C4(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardController_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C423 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_B7769C(this, defaultPrefab);
    klass = resourceCatalog->klass;
    if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v9;
        p_offset += 2;
        if ( v9 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
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
                      (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
  }
  else
  {
    Object_object = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object, 0LL, 0LL) )
    return (ClassBoardSquare_o *)BaseMonoBehaviour__createObject_object_(
                                   (BaseMonoBehaviour_o *)v6,
                                   (Il2CppObject *)defaultPrefab,
                                   v6->fields.boardObjectsParent,
                                   0LL,
                                   (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
  return (ClassBoardSquare_o *)Object_object;
}


void __fastcall ClassBoardController__CreateViews(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 *v5; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x10
  int *v8; // x11
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  int *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  IClassBoardSquareModel_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v28; // x8
  unsigned __int64 v29; // x10
  IClassBoardSquareModel_c **v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  IClassBoardSquareModel_c *v34; // x8
  ClassBoardSquare_o *v35; // x22
  IClassBoardSquareModel_c *v36; // x1
  unsigned __int64 v37; // x10
  IClassBoardSquareModel_c **v38; // x11
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  struct IClassBoardResourceCatalog_o *v42; // x22
  IClassBoardResourceCatalog_c *v43; // x8
  unsigned __int64 v44; // x10
  int32_t *v45; // x11
  __int64 v46; // x0
  IClassBoardResourceCatalog_c *v47; // x8
  unsigned __int64 v48; // x10
  int32_t *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  IClassBoardSquareModel_c *v53; // x8
  unsigned __int64 v54; // x10
  IClassBoardSquareModel_c **v55; // x11
  __int64 v56; // x0
  __int64 v57; // x1
  IClassBoardSquareModel_c *v58; // x8
  unsigned __int64 v59; // x10
  IClassBoardSquareModel_c **v60; // x11
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  ClassBoardSquare_o *v63; // x0
  __int64 v64; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v65; // x22
  __int64 v66; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x0
  __int64 v68; // x8
  unsigned __int64 v69; // x10
  int *v70; // x11
  __int64 v71; // x0
  __int64 *v72; // x20
  __int64 v73; // x8
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x20
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  int *v81; // x11
  __int64 v82; // x0
  __int64 v83; // x8
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  __int64 v87; // x0
  __int64 v88; // x1
  struct IClassBoardResourceCatalog_o *v89; // x22
  IClassBoardResourceCatalog_c *v90; // x8
  IClassBoardLineModel_o *v91; // x21
  unsigned __int64 v92; // x10
  int32_t *v93; // x11
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x1
  Il2CppObject *Object_object; // x0
  __int64 v98; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v99; // x22
  __int64 v100; // x1
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x0
  int v102; // w23
  __int64 v103; // x8
  unsigned __int64 v104; // x10
  int *v105; // x11
  __int64 v106; // x0
  int v107[2]; // [xsp+0h] [xbp-60h]
  int v108; // [xsp+8h] [xbp-58h]

  if ( (byte_438C422 & 1) == 0 )
  {
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    sub_B775C4(&IClassBoardLockModel_TypeInfo);
    sub_B775C4(&IClassBoardResourceCatalog_TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardLine__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
    byte_438C422 = 1;
  }
  v108 = 0;
  v3 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
         this,
         this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v3 )
    goto LABEL_143;
  v5 = *(__int64 **)(v3 + 24);
  if ( !v5 )
    goto LABEL_143;
  v6 = *v5;
  if ( *(_WORD *)(*v5 + 298) )
  {
    v7 = 0LL;
    v8 = (int *)(*(_QWORD *)(v6 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v8 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v7;
      v8 += 4;
      if ( v7 >= *(unsigned __int16 *)(*v5 + 298) )
        goto LABEL_9;
    }
    v9 = v6 + 16LL * *v8 + 312;
  }
  else
  {
LABEL_9:
    v9 = sub_B0F4C0(*(_QWORD *)(v3 + 24), System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL);
  }
  v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v9)(v5, *(_QWORD *)(v9 + 8));
  if ( !v11 )
    sub_B7769C(0LL, v10);
  while ( 1 )
  {
    v12 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 298LL) )
    {
      v13 = 0LL;
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)(*(_QWORD *)v11 + 298LL) )
          goto LABEL_16;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_16:
      v15 = sub_B0F4C0(v11, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8)) & 1) == 0 )
      break;
    v16 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 298LL) )
    {
      v17 = 0LL;
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v18 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)(*(_QWORD *)v11 + 298LL) )
          goto LABEL_23;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_23:
      v19 = sub_B0F4C0(v11, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v20 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v11, *(_QWORD *)(v19 + 8));
    v21 = sub_B77684(v20, IClassBoardLockModel_TypeInfo);
    if ( v21 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_B7769C(v21, v22);
      klass = resourceCatalog->klass;
      if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
      {
        v25 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v25;
          p_offset += 4;
          if ( v25 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_B0F4C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v32 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v32 )
        sub_B7769C(0LL, v33);
      if ( !v20 )
        sub_B7769C(v32, v33);
      v34 = v20->klass;
      v35 = *(ClassBoardSquare_o **)(v32 + 32);
      v36 = IClassBoardSquareModel_TypeInfo;
      if ( !*(_WORD *)&v20->klass->_2.bitflags1 )
        goto LABEL_67;
      v37 = 0LL;
      v38 = (IClassBoardSquareModel_c **)&v34->_1.interfaceOffsets->offset;
      while ( *(v38 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v37;
        v38 += 2;
        if ( v37 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v39 = (__int64)&v34->vtable[*(_DWORD *)v38 + 10].method;
    }
    else
    {
      if ( !v20 )
        sub_B7769C(0LL, v22);
      v28 = v20->klass;
      if ( *(_WORD *)&v20->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        v30 = (IClassBoardSquareModel_c **)&v28->_1.interfaceOffsets->offset;
        while ( *(v30 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v29;
          v30 += 2;
          if ( v29 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
            goto LABEL_37;
        }
        v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 5].method;
      }
      else
      {
LABEL_37:
        v31 = sub_B0F4C0(v20, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v40 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v31)(v20, *(_QWORD *)(v31 + 8));
      v42 = this->fields.resourceCatalog;
      if ( (v40 & 1) != 0 )
      {
        if ( !v42 )
          sub_B7769C(v40, v41);
        v43 = v42->klass;
        if ( *(_WORD *)&v42->klass->_2.bitflags1 )
        {
          v44 = 0LL;
          v45 = &v43->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v45 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v44;
            v45 += 4;
            if ( v44 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
              goto LABEL_54;
          }
          v46 = (__int64)&v43->vtable[*v45].method;
        }
        else
        {
LABEL_54:
          v46 = sub_B0F4C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v51 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
        if ( !v51 )
          sub_B7769C(0LL, v52);
        v53 = v20->klass;
        v35 = *(ClassBoardSquare_o **)(v51 + 40);
        v36 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v20->klass->_2.bitflags1 )
          goto LABEL_67;
        v54 = 0LL;
        v55 = (IClassBoardSquareModel_c **)&v53->_1.interfaceOffsets->offset;
        while ( *(v55 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v54;
          v55 += 2;
          if ( v54 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v39 = (__int64)&v53->vtable[*(_DWORD *)v55 + 10].method;
      }
      else
      {
        if ( !v42 )
          sub_B7769C(v40, v41);
        v47 = v42->klass;
        if ( *(_WORD *)&v42->klass->_2.bitflags1 )
        {
          v48 = 0LL;
          v49 = &v47->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v49 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v48;
            v49 += 4;
            if ( v48 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v50 = (__int64)&v47->vtable[*v49].method;
        }
        else
        {
LABEL_60:
          v50 = sub_B0F4C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v56 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
        if ( !v56 )
          sub_B7769C(0LL, v57);
        v58 = v20->klass;
        v35 = *(ClassBoardSquare_o **)(v56 + 16);
        v36 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v20->klass->_2.bitflags1 )
        {
LABEL_67:
          v39 = sub_B0F4C0(v20, v36, 10LL);
          goto LABEL_77;
        }
        v59 = 0LL;
        v60 = (IClassBoardSquareModel_c **)&v58->_1.interfaceOffsets->offset;
        while ( *(v60 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v59;
          v60 += 2;
          if ( v59 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v39 = (__int64)&v58->vtable[*(_DWORD *)v60 + 10].method;
      }
    }
LABEL_77:
    v61 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8));
    v63 = ClassBoardController__CloneSquareObject(this, v35, v61, v62);
    v65 = (EventMissionProgressRequest_Argument_ProgressData_o *)v63;
    if ( !v63 )
      sub_B7769C(0LL, v64);
    ClassBoardSquare__Setup(v63, v20, 0LL);
    squareViewList = this->fields.squareViewList;
    if ( !squareViewList )
      sub_B7769C(0LL, v66);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareViewList,
      v65,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
  }
  v107[0] = 180;
  v108 = 1;
  v68 = *(_QWORD *)v11;
  if ( *(_WORD *)(*(_QWORD *)v11 + 298LL) )
  {
    v69 = 0LL;
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      ++v69;
      v70 += 4;
      if ( v69 >= *(unsigned __int16 *)(*(_QWORD *)v11 + 298LL) )
        goto LABEL_84;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_84:
    v71 = sub_B0F4C0(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v11, *(_QWORD *)(v71 + 8));
  v108 = 0;
  v3 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
         this,
         this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v3 || (v72 = *(__int64 **)(v3 + 16)) == 0LL )
LABEL_143:
    sub_B7769C(v3, v4);
  v73 = *v72;
  if ( *(_WORD *)(*v72 + 298) )
  {
    v74 = 0LL;
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v75 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v74;
      v75 += 4;
      if ( v74 >= *(unsigned __int16 *)(*v72 + 298) )
        goto LABEL_92;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_92:
    v76 = sub_B0F4C0(*(_QWORD *)(v3 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v78 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v76)(v72, *(_QWORD *)(v76 + 8));
  if ( !v78 )
    sub_B7769C(0LL, v77);
  while ( 1 )
  {
    v79 = *(_QWORD *)v78;
    if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
    {
      v80 = 0LL;
      v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v81 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v80;
        v81 += 4;
        if ( v80 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
          goto LABEL_99;
      }
      v82 = v79 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_99:
      v82 = sub_B0F4C0(v78, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8)) & 1) == 0 )
      break;
    v83 = *(_QWORD *)v78;
    if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
    {
      v84 = 0LL;
      v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v85 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v84;
        v85 += 4;
        if ( v84 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
          goto LABEL_106;
      }
      v86 = v83 + 16LL * *v85 + 312;
    }
    else
    {
LABEL_106:
      v86 = sub_B0F4C0(v78, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v87 = (*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v78, *(_QWORD *)(v86 + 8));
    v89 = this->fields.resourceCatalog;
    if ( !v89 )
      sub_B7769C(v87, v88);
    v90 = v89->klass;
    v91 = (IClassBoardLineModel_o *)v87;
    if ( *(_WORD *)&v89->klass->_2.bitflags1 )
    {
      v92 = 0LL;
      v93 = &v90->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v93 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v92;
        v93 += 4;
        if ( v92 >= *(unsigned __int16 *)&v89->klass->_2.bitflags1 )
          goto LABEL_113;
      }
      v94 = (__int64)&v90->vtable[*v93].method;
    }
    else
    {
LABEL_113:
      v94 = sub_B0F4C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v95 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v94)(v89, *(_QWORD *)(v94 + 8));
    if ( !v95 )
      sub_B7769C(0LL, v96);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v95 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v99 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object;
    if ( !Object_object )
      sub_B7769C(0LL, v98);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v91, 0LL);
    lineViewList = this->fields.lineViewList;
    if ( !lineViewList )
      sub_B7769C(0LL, v100);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineViewList,
      v99,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardLine__Add__);
  }
  v107[0] = 280;
  v102 = ++v108;
  v103 = *(_QWORD *)v78;
  if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
  {
    v104 = 0LL;
    v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v105 - 1) != System_IDisposable_TypeInfo )
    {
      ++v104;
      v105 += 4;
      if ( v104 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
        goto LABEL_123;
    }
    v106 = v103 + 16LL * *v105 + 312;
  }
  else
  {
LABEL_123:
    v106 = sub_B0F4C0(v78, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v106)(v78, *(_QWORD *)(v106 + 8));
  if ( v102 && v107[v102 - 1] == 280 )
    v108 = v102 - 1;
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  WebViewManager_o *v6; // x0
  int32_t baseId; // w20
  CommonUI_o *v8; // x21
  System_Action_o *v9; // x22

  if ( (byte_438C420 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardController__OnClickEffectList_b__32_0__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C420 = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( CommonUI__IsOpenClassBoardEffectListDialog(Instance, 0LL) )
        return;
      Instance = (CommonUI_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
      if ( Instance )
      {
        ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0LL);
        v6 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v8 = (CommonUI_o *)v6;
        v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v8 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v8, 0, baseId, 1, v9, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B7769C(Instance, v5);
  }
}


void __fastcall ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_438C41F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardController__OnClickHelp_b__31_0__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C41F = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v3, 0LL, 0LL) )
  {
    v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v4 )
      sub_B7769C(0LL, v5);
    ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0LL);
    v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__31_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v6, 0LL);
  }
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v5; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_438C421 & 1) == 0 )
  {
    sub_B775C4(&IClassBoardResourceCatalog_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
    sub_B775C4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
    byte_438C421 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_object___Delete((const MethodInfo_2D16BC4 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
    {
      v5 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v5;
        p_offset += 2;
        if ( v5 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_11:
      p_method = sub_B0F4C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
      resourceCatalog,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x21
  ClassBoardController___c_c *v13; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__41_0; // x22
  Il2CppObject *v16; // x23
  struct ClassBoardController___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  ClassBoardController___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x21
  struct ClassBoardController___c_StaticFields *v27; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__41_1; // x22
  Il2CppObject *v29; // x23
  struct ClassBoardController___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v39; // x0
  ClassBoardController___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  struct ClassBoardController___c_StaticFields *v42; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__41_2; // x22
  Il2CppObject *v44; // x23
  struct ClassBoardController___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v53; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v55; // x21
  const MethodInfo *v56; // x2

  if ( (byte_438C427 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Any_ClassBoardLock___);
    sub_B775C4(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_ClassBoardLock___);
    sub_B775C4(&Method_System_Func_ClassBoardLock__bool___ctor__);
    sub_B775C4(&Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__);
    sub_B775C4(&Method_System_Func_ClassBoardLock__int___ctor__);
    sub_B775C4(&System_Func_ClassBoardLock__int__TypeInfo);
    sub_B775C4(&System_Func_ClassBoardLock__bool__TypeInfo);
    sub_B775C4(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B775C4(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__);
    sub_B775C4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__);
    sub_B775C4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__);
    sub_B775C4(&ClassBoardController___c__DisplayClass41_0_TypeInfo);
    sub_B775C4(&ClassBoardController___c_TypeInfo);
    byte_438C427 = 1;
  }
  v3 = sub_B77694(ClassBoardController___c__DisplayClass41_0_TypeInfo);
  ClassBoardController___c__DisplayClass41_0___ctor((ClassBoardController___c__DisplayClass41_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_38;
  *(_QWORD *)(v3 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v4 )
    goto LABEL_38;
  ClassBoardUIController__TouchDisable(v4, 0LL);
  v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v4 )
    goto LABEL_38;
  ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    goto LABEL_38;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)v4, 0LL);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.squareViewList,
                                                               (const MethodInfo_1D34774 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v13 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v13 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__41_0,
      v16,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_ClassBoardLock__bool___ctor__);
    v17 = ClassBoardController___c_TypeInfo->static_fields;
    v17->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v17->__9__41_0,
      (System_Int32_array **)_9__41_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v12,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v25 = ClassBoardController___c_TypeInfo;
  v26 = v24;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v25 = ClassBoardController___c_TypeInfo;
  }
  v27 = v25->static_fields;
  _9__41_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v27->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v27 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)v27->__9;
    _9__41_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__41_1,
      v29,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      (const MethodInfo_29E9E70 *)Method_System_Func_ClassBoardLock__int___ctor__);
    v30 = ClassBoardController___c_TypeInfo->static_fields;
    v30->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v30->__9__41_1,
      (System_Int32_array **)_9__41_1,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v26,
                                                               (System_Func_TSource__TKey__o *)_9__41_1,
                                                               (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v3 + 16) = 0;
  v38 = v37;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v37,
         (const MethodInfo_1D1D960 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v39 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v38,
            (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v40 = ClassBoardController___c_TypeInfo;
    v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
    if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v40 = ClassBoardController___c_TypeInfo;
    }
    v42 = v40->static_fields;
    _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v42->__9__41_2;
    if ( !_9__41_2 )
    {
      if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v42 = ClassBoardController___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v42->__9;
      _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__41_2,
        v44,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        (const MethodInfo_29EAA10 *)Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__);
      v45 = ClassBoardController___c_TypeInfo->static_fields;
      v45->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_B77560(
        (BattleServantConfConponent_o *)&v45->__9__41_2,
        (System_Int32_array **)_9__41_2,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v41,
                                                                 (System_Func_TSource__TResult__o *)_9__41_2,
                                                                 (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v53 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                      v52,
                                                                                      (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v53, 0LL);
  }
  effectController = this->fields.effectController;
  v55 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_38:
    sub_B7769C(v4, v5);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v55, v56);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ClassBoardEffectController_o *effectController; // x22
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  System_Action_o *v32; // x19
  const MethodInfo *v33; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C429 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__);
    sub_B775C4(&ClassBoardController___c__DisplayClass43_0_TypeInfo);
    byte_438C429 = 1;
  }
  v7 = sub_B77694(ClassBoardController___c__DisplayClass43_0_TypeInfo);
  ClassBoardController___c__DisplayClass43_0___ctor((ClassBoardController___c__DisplayClass43_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
  transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                           this,
                                           this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !transform )
    goto LABEL_11;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)transform, 0LL);
  transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                           this,
                                           this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !transform )
    goto LABEL_11;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)transform, 1, 0LL);
  if ( !square )
    goto LABEL_11;
  effectController = this->fields.effectController;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)square, 0LL);
  if ( !transform )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  transform = this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v26 = v23;
  v27 = v24;
  v28 = v25;
  localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v32 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_B7769C(transform, v9);
  v35.fields.x = v26 * x;
  v35.fields.y = v27 * y;
  v35.fields.z = v28 * z;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v35, v32, v33);
}


void __fastcall ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  ClassBoardUIController_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_438C426 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B775C4(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__);
    sub_B775C4(&ClassBoardController___c__DisplayClass40_0_TypeInfo);
    byte_438C426 = 1;
  }
  v7 = sub_B77694(ClassBoardController___c__DisplayClass40_0_TypeInfo);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endAct;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)endAct, v16, v17, v18, v19, v20, v21);
  v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v8 )
    goto LABEL_13;
  ClassBoardUIController__TouchDisable(v8, 0LL);
  v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v8 )
    goto LABEL_13;
  ClassBoardUIController__SetCameraWorkBlock(v8, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)v8, 0LL),
        (v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList(v8, 0LL),
        effectController = this->fields.effectController,
        v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_13:
    sub_B7769C(v8, v9);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v23, v24);
}


void __fastcall ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  UnityEngine_Component_o *squareViewList; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  ClassBoardController___c_c *v8; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardController___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  ClassBoardController___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x20
  struct ClassBoardController___c_StaticFields *v22; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_1; // x21
  Il2CppObject *v24; // x22
  struct ClassBoardController___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_438C41D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ClassBoardLine___ctor__);
    sub_B775C4(&Method_System_Action_ClassBoardSquare___ctor__);
    sub_B775C4(&System_Action_ClassBoardSquare__TypeInfo);
    sub_B775C4(&System_Action_ClassBoardLine__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ExcludeNull_ClassBoardLine___);
    sub_B775C4(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
    sub_B775C4(&Method_BasicHelper_ForEach_ClassBoardLine___);
    sub_B775C4(&Method_BasicHelper_ForEach_ClassBoardSquare___);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__Release_b__29_0__);
    sub_B775C4(&Method_ClassBoardController___c__Release_b__29_1__);
    sub_B775C4(&ClassBoardController___c_TypeInfo);
    byte_438C41D = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    squareViewList = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                                  this,
                                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !squareViewList )
      goto LABEL_32;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(squareViewList, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  v7 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
         (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v8 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v8 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__29_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_0,
      v11,
      Method_ClassBoardController___c__Release_b__29_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_ClassBoardSquare___ctor__);
    v12 = ClassBoardController___c_TypeInfo->static_fields;
    v12->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v12->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v7,
    (System_Action_T__o *)_9__29_0,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = (UnityEngine_Component_o *)this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
  v19 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v20 = ClassBoardController___c_TypeInfo;
  v21 = v19;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v20 = ClassBoardController___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__29_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v22->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v22 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__29_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_ClassBoardLine__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_1,
      v24,
      Method_ClassBoardController___c__Release_b__29_1__,
      (const MethodInfo_26A0868 *)Method_System_Action_ClassBoardLine___ctor__);
    v25 = ClassBoardController___c_TypeInfo->static_fields;
    v25->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v25->__9__29_1,
      (System_Int32_array **)_9__29_1,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v21,
    (System_Action_T__o *)_9__29_1,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  squareViewList = (UnityEngine_Component_o *)this->fields.lineViewList;
  if ( !squareViewList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
          (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_ClassBoardLine__Clear__),
        this->fields.effectController = 0LL,
        sub_B77560((BattleServantConfConponent_o *)&this->fields.effectController, 0LL, v32, v33, v34, v35, v36, v37),
        this->fields.background = 0LL,
        sub_B77560((BattleServantConfConponent_o *)&this->fields.background, 0LL, v38, v39, v40, v41, v42, v43),
        (squareViewList = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                                       this,
                                                       this->klass->vtable._7_SetupClassBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_32:
    sub_B7769C(squareViewList, v5);
  }
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)squareViewList, 0LL);
}


void __fastcall ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438C41E & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C41E = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr,
                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
           this,
           this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v6 )
      sub_B7769C(0LL, v7);
    *(_QWORD *)(v6 + 80) = action;
    sub_B77560((BattleServantConfConponent_o *)(v6 + 80), (System_Int32_array **)action, v8, v9, v10, v11, v12, v13);
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
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v21; // x2
  UnityEngine_Texture_o *targetTexture; // x23
  MapCamera_o *v23; // x23
  const MethodInfo_247A004 *v24; // x2
  BalanceConfig_c *v25; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  System_Action_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x1
  Il2CppObject *current; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v39; // x23
  __int64 v40; // x0
  __int64 v41; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v44; // x23
  ClassBoardEffectController_o *v45; // x24
  const MethodInfo *v46; // x5
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v54; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v57; // 0:x3.8
  System_Nullable_Vector3__o v58; // 0:x0.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C41C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ClassBoardSquare___ctor__);
    sub_B775C4(&System_Action_ClassBoardSquare__TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_ClassBoardController_ShowBoard__);
    sub_B775C4(&ClassBoardEffectController_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    sub_B775C4(&Method_System_Nullable_Vector3___ctor__);
    byte_438C41C = 1;
  }
  memset(&v55, 0, sizeof(v55));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)setResourceCatalog,
    (System_String_array **)classBoardBackground,
    *(System_String_array ***)&baseId,
    *(System_Boolean_array ***)&iconId,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.background = classBoardBackground;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.background,
    (System_Int32_array **)classBoardBackground,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_24;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v21);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.earthAccessoriesObject;
  if ( !mapCamera )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapCamera, 1, 0LL);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.currentCamera;
  if ( !mapCamera )
    goto LABEL_24;
  targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)mapCamera, 0LL);
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_maxTextureSize(0LL);
  if ( (int)mapCamera <= 4096 )
  {
    if ( !targetTexture )
      goto LABEL_24;
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
    goto LABEL_24;
  MapCamera__SetMapTexture(mapCamera, targetTexture, 2491, 1440, 0LL);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__SetEnable(mapCamera, 1, 0LL);
  v23 = this->fields.mapCamera;
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v58.fields.value.fields.x = &v54;
  *(_QWORD *)&v54.fields.value.fields.x = 0LL;
  *(_QWORD *)&v54.fields.value.fields.z = 0LL;
  *(_QWORD *)&v58.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v58, zero, v24);
  v25 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  static_fields = v25->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
  if ( !v23 )
    goto LABEL_24;
  v57 = size;
  MapCamera__StartAutoWork(v23, 0.0, v54, v57, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v28 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v28;
  sub_B77560(
    (BattleServantConfConponent_o *)&classBoardBackground->fields.showBoardCallback,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v35);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v36);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v37),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_24:
    sub_B7769C(mapCamera, v19);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v55,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapCamera,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v55.fields.current;
    v39 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v39,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      (const MethodInfo_26A0868 *)Method_System_Action_ClassBoardSquare___ctor__);
    if ( !current )
      sub_B7769C(v40, v41);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v39, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v44 = this->fields.mapCamera;
  v45 = (ClassBoardEffectController_o *)sub_B77694(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v45,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v44,
    classBoardBackground,
    v46);
  this->fields.effectController = v45;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.effectController,
    (System_Int32_array **)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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
  unsigned __int64 v6; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v10; // x20
  System_Action_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x20
  System_Action_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x2
  Il2CppObject *v27; // x0
  System_String_o *v28; // x20
  ClassBoardUIController_o *v29; // x21
  ClassBoardUIController_o *v30; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  System_Int32_array *v32; // x20
  ClassBoardController_o *v33; // x19
  int32_t v34; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_438C424 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
    sub_B775C4(&Method_ClassBoardController_OnClickEffectList__);
    sub_B775C4(&Method_ClassBoardController_OnClickHelp__);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_B775C4(&IClassBoardResourceCatalog_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_20074/*"img_txt_classscore_{0}"*/);
    this = (ClassBoardController_o *)sub_B775C4(&StringLiteral_3131/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_438C424 = 1;
  }
  entity = 0LL;
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_30;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                     resourceCatalog,
                                     *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_30;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v3,
                    (Il2CppObject *)this->fields._builder_k__BackingField,
                    v3->fields.uiRoot,
                    0LL,
                    (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, Il2CppMethodPointer))v3->klass->vtable._5_set_classBoardUIController.method)(
    v3,
    Object_object,
    v3->klass->vtable._6_get_builder.methodPtr);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                     v3,
                                     v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !this )
    goto LABEL_30;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0LL);
  v10 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)v3, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v10 )
    goto LABEL_30;
  *(_QWORD *)(v10 + 88) = v11;
  sub_B77560((BattleServantConfConponent_o *)(v10 + 88), (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  v18 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v19 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v3, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v18 )
    goto LABEL_30;
  *(_QWORD *)(v18 + 96) = v19;
  sub_B77560((BattleServantConfConponent_o *)(v18 + 96), (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
  v34 = v3->fields.baseId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v26);
  v28 = System_String__Format((System_String_o *)StringLiteral_20074/*"img_txt_classscore_{0}"*/, v27, 0LL);
  v29 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v29 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderTitle(v29, (AtlasManagerUnit_o *)this, v28, 0LL);
  v30 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                      v3,
                                      v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3131/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v30 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderMessage(v30, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_30;
  this = (ClassBoardController_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     &entity,
                                     v3->fields.baseId,
                                     (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_30;
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&entity->fields.flag, 0LL) )
    return;
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                                     v3,
                                     v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !entity
    || (v32 = *(System_Int32_array **)&entity->fields.flag,
        v33 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v33) )
  {
LABEL_30:
    sub_B7769C(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList((ClassBoardUIController_o *)v33, v32, (AtlasManagerUnit_o *)this, 0LL);
}


void __fastcall ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Enum_o *HasFlag; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Enum_o **v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 *v21; // x22
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  IClassBoardSquareModel_c **v24; // x11
  __int64 v25; // x0
  int v26; // w0
  __int64 v27; // x2
  System_Enum_o *v28; // x22
  __int64 v29; // x2
  System_Enum_o *v30; // x8
  __int64 v31; // x11
  __int64 *monitor; // x22
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  IClassBoardSquareModel_c **v35; // x11
  __int64 v36; // x0
  ClassBoardSquare_o *v37; // x21
  System_Action_o *v38; // x22
  const MethodInfo *v39; // x3
  int v40; // [xsp+8h] [xbp-38h] BYREF
  int v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438C425 & 1) == 0 )
  {
    sub_B775C4(&AcquireFlag_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&ClassBoardLock_TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__);
    sub_B775C4(&ClassBoardController___c__DisplayClass39_0_TypeInfo);
    byte_438C425 = 1;
  }
  v5 = sub_B77694(ClassBoardController___c__DisplayClass39_0_TypeInfo);
  ClassBoardController___c__DisplayClass39_0___ctor((ClassBoardController___c__DisplayClass39_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = square;
  v14 = (System_Enum_o **)(v5 + 32);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)square, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_30;
  v21 = *(__int64 **)(*(_QWORD *)(v5 + 32) + 168LL);
  if ( !v21 )
    goto LABEL_30;
  v22 = *v21;
  if ( *(_WORD *)(*v21 + 298) )
  {
    v23 = 0LL;
    v24 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *(v24 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)(*v21 + 298) )
        goto LABEL_10;
    }
    v25 = v22 + 16LL * (*(_DWORD *)v24 + 13) + 312;
  }
  else
  {
LABEL_10:
    v25 = sub_B0F4C0(v21, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v25)(v21, 0LL, *(_QWORD *)(v25 + 8));
  *(_DWORD *)(v5 + 16) = v26;
  v41 = v26;
  v28 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v41, v27);
  v40 = 1;
  HasFlag = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v40, v29);
  if ( !v28 )
    goto LABEL_30;
  HasFlag = (System_Enum_o *)System_Enum__HasFlag(v28, HasFlag, 0LL);
  v30 = *v14;
  if ( ((unsigned __int8)HasFlag & 1) != 0 )
  {
    if ( !v30 )
      goto LABEL_30;
    v31 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) >= (unsigned int)v31
      && (ClassBoardLock_c *)v30->klass->_2.typeHierarchy[v31 - 1] == ClassBoardLock_TypeInfo )
    {
      return;
    }
  }
  else if ( !v30 )
  {
    goto LABEL_30;
  }
  monitor = (__int64 *)v30[10].monitor;
  if ( !monitor )
LABEL_30:
    sub_B7769C(HasFlag, v7);
  v33 = *monitor;
  if ( *(_WORD *)(*monitor + 298) )
  {
    v34 = 0LL;
    v35 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *(v35 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v34;
      v35 += 2;
      if ( v34 >= *(unsigned __int16 *)(*monitor + 298) )
        goto LABEL_24;
    }
    v36 = v33 + 16LL * (*(_DWORD *)v35 + 5) + 312;
  }
  else
  {
LABEL_24:
    v36 = sub_B0F4C0(monitor, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v36)(monitor, *(_QWORD *)(v36 + 8)) & 1) == 0 )
  {
    HasFlag = *v14;
    if ( *v14 )
    {
      ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)HasFlag, 1, 0LL);
      v37 = *(ClassBoardSquare_o **)(v5 + 32);
      v38 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)v5,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v37, v38, v39);
      return;
    }
    goto LABEL_30;
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438C42A & 1) == 0 )
  {
    sub_B775C4(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
    byte_438C42A = 1;
  }
  v3 = sub_B77694(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__45___ctor((ClassBoardController__ShowBoardCoroutine_d__45_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
    sub_B7769C(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438C42C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438C42C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                    this,
                                    this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_B7769C(Instance, v4);
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
    sub_B7769C(0LL, v3);
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
    sub_B7769C(0LL, v3);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._classBoardUIController_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._classBoardUIController_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  UnityEngine_Component_o *klass; // x0
  Il2CppObject *_4__this; // x19
  __int64 v5; // x1
  Il2CppObject **p__2__current; // x20
  __int64 v7; // x1
  int v8; // w20
  System_Action_o *v9; // x20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+0h] [xbp-70h] BYREF
  int v12[2]; // [xsp+18h] [xbp-58h]
  int v13; // [xsp+20h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+28h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-30h] BYREF

  if ( (byte_4388583 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    byte_4388583 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v14, 0, sizeof(v14));
  v13 = 0;
  klass = 0LL;
  if ( this->fields.__1__state < 2u )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_27;
    klass = (UnityEngine_Component_o *)_4__this[2].klass;
    if ( !klass )
      goto LABEL_27;
    klass = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !klass )
      goto LABEL_27;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)klass, 0LL) )
    {
      klass = (UnityEngine_Component_o *)_4__this[6].klass;
      if ( klass )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v11,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
        for ( i = v11;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields.current->klass->vtable[7].method)(
                i.fields.current,
                i.fields.current->klass->vtable[8].methodPtr) )
        {
          if ( !i.fields.current )
            sub_B7769C(0LL, v5);
        }
        v12[0] = 124;
        v13 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
        v13 = 0;
        klass = (UnityEngine_Component_o *)_4__this[6].monitor;
        if ( klass )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v14,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
            (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v14,
                    (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
          {
            if ( !v14.fields.current )
              sub_B7769C(0LL, v7);
            ClassBoardLine__PlayTransition((ClassBoardLine_o *)v14.fields.current, 0LL);
          }
          v12[0] = 175;
          v8 = ++v13;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v14,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
          if ( v8 && v12[v8 - 1] == 175 )
            v13 = v8 - 1;
          klass = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))_4__this->klass->vtable[4].method)(
                                               _4__this,
                                               _4__this->klass->vtable[5].methodPtr);
          if ( klass )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)klass, 1, 0LL);
            v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
            System_Action___ctor(v9, _4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
            EventTutorialMaster__CheckTutorial(0, 82, v9, 0, 0, 0, 0, 0LL);
            LOBYTE(klass) = 0;
            return (char)klass;
          }
        }
      }
LABEL_27:
      sub_B7769C(klass, method);
    }
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B77560(p__2__current);
    LOBYTE(klass) = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return (char)klass;
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  struct ClassBoardController___c_StaticFields *static_fields; // x0

  if ( (byte_4388575 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardController___c_TypeInfo);
    byte_4388575 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardController___c_o *)v1;
  sub_B77560(static_fields);
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
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v8; // w1
  const MethodInfo *v9; // x2
  IClassBoardLockModel_c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x2
  System_Enum_o *v15; // x20
  __int64 v16; // x2
  IClassBoardLockModel_c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x2
  System_Enum_o *v22; // x20
  __int64 v23; // x2
  char v24; // w8
  IClassBoardLockModel_c *v26; // x8
  unsigned __int64 v27; // x10
  int32_t *v28; // x11
  __int64 v29; // x0
  __int64 v30; // [xsp+0h] [xbp-40h] BYREF
  int v31; // [xsp+8h] [xbp-38h]
  int v32; // [xsp+18h] [xbp-28h] BYREF
  int v33; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v34; // 0:x0.12

  if ( (byte_438857A & 1) == 0 )
  {
    sub_B775C4(&AcquireFlag_TypeInfo);
    sub_B775C4(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_438857A = 1;
  }
  v31 = 0;
  v30 = 0LL;
  if ( !x )
    goto LABEL_36;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(x, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v31 = v8;
  *(_QWORD *)&v34.fields.Type = &v30;
  v34.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v34, v9) )
    goto LABEL_27;
  v10 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v11;
      v12 += 4;
      if ( v11 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v13 = (__int64)&v10->vtable[*v12 + 13].method;
  }
  else
  {
LABEL_15:
    v13 = sub_B0F4C0(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v33 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v13)(x, 0LL, *(_QWORD *)(v13 + 8));
  v15 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33, v14);
  v32 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32, v16);
  if ( !v15 )
    goto LABEL_36;
  if ( System_Enum__HasFlag(v15, (System_Enum_o *)this, 0LL) )
  {
LABEL_27:
    v24 = 0;
    return v24 & 1;
  }
  v17 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = &v17->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v20 = (__int64)&v17->vtable[*v19 + 13].method;
  }
  else
  {
LABEL_23:
    v20 = sub_B0F4C0(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v33 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v20)(x, 0LL, *(_QWORD *)(v20 + 8));
  v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33, v21);
  v32 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32, v23);
  if ( !v22 )
LABEL_36:
    sub_B7769C(this, x);
  if ( System_Enum__HasFlag(v22, (System_Enum_o *)this, 0LL) )
    goto LABEL_27;
  v26 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v28 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v27;
      v28 += 4;
      if ( v27 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v29 = (__int64)&v26->vtable[*v28 + 1].method;
  }
  else
  {
LABEL_33:
    v29 = sub_B0F4C0(x, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v24 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v29)(x, *(_QWORD *)(v29 + 8)) ^ 1;
  return v24 & 1;
}


int32_t __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__42_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_438857B & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_438857B = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(x, IClassBoardSquareModel_TypeInfo, 0LL);
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
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 v8; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  ClassBoardController___c_c *v11; // x8
  ClassBoardController___c_o *v12; // x20
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x2
  System_Enum_o *v17; // x20
  __int64 v18; // x2
  ClassBoardController___c_c *v19; // x8
  ClassBoardController___c_o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x2
  System_Enum_o *v25; // x20
  __int64 v26; // x2
  char v27; // w8
  ClassBoardController___c_c *v29; // x8
  ClassBoardController___c_o *v30; // x19
  unsigned __int64 v31; // x10
  int32_t *v32; // x11
  __int64 v33; // x0
  __int64 v34; // [xsp+0h] [xbp-40h] BYREF
  int v35; // [xsp+8h] [xbp-38h]
  int v36; // [xsp+18h] [xbp-28h] BYREF
  int v37; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v38; // 0:x0.12

  if ( (byte_4388578 & 1) == 0 )
  {
    sub_B775C4(&AcquireFlag_TypeInfo);
    sub_B775C4(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_4388578 = 1;
  }
  v35 = 0;
  v34 = 0LL;
  if ( !x )
    goto LABEL_40;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  klass = this->klass;
  v5 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v8 = sub_B0F4C0(this, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  v35 = v9;
  *(_QWORD *)&v38.fields.Type = &v34;
  v38.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v38, v10) )
    goto LABEL_30;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  v11 = this->klass;
  v12 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v15 = (__int64)(&v11[1]._1.methods + 2 * *v14);
  }
  else
  {
LABEL_17:
    v15 = sub_B0F4C0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v37 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v15)(v12, 0LL, *(_QWORD *)(v15 + 8));
  v17 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v37, v16);
  v36 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v36, v18);
  if ( !v17 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v17, (System_Enum_o *)this, 0LL) )
  {
LABEL_30:
    v27 = 0;
    return v27 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  v19 = this->klass;
  v20 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v19->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v23 = (__int64)(&v19[1]._1.methods + 2 * *v22);
  }
  else
  {
LABEL_26:
    v23 = sub_B0F4C0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v37 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v23)(v20, 0LL, *(_QWORD *)(v23 + 8));
  v25 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v37, v24);
  v36 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v36, v26);
  if ( !v25 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v25, (System_Enum_o *)this, 0LL) )
    goto LABEL_30;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_40:
    sub_B7769C(this, x);
  v29 = this->klass;
  v30 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    v32 = &v29->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v32 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v31;
      v32 += 4;
      if ( v31 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v33 = (__int64)(&v29->vtable._1_Finalize.method + 2 * *v32);
  }
  else
  {
LABEL_37:
    v33 = sub_B0F4C0(this, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v27 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8)) ^ 1;
  return v27 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 v8; // x0

  if ( (byte_4388579 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    byte_4388579 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_B7769C(this, x);
  klass = this->klass;
  v5 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v8 = sub_B0F4C0(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4388576 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4388576 = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4388577 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4388577 = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
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
  System_Enum_o *v4; // x20
  __int64 v5; // x2
  __int64 HasFlag; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  BaseMonoBehaviour_o *_4__this; // x20
  __int64 *monitor; // x21
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  int *v13; // x11
  __int64 v14; // x0
  System_Enum_o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x2
  BaseMonoBehaviour_o *v18; // x20
  __int64 *v19; // x21
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  System_Enum_o *v24; // x20
  __int64 v25; // x2
  __int64 v26; // x2
  BaseMonoBehaviour_o *v27; // x20
  __int64 *v28; // x21
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  struct ClassBoardController_o *v33; // x8
  ClassBoardSquareDetailDialog_o *v34; // x20
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  System_Enum_o *v37; // x20
  __int64 v38; // x2
  __int64 v39; // x2
  BaseMonoBehaviour_o *v40; // x20
  __int64 *v41; // x21
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  struct ClassBoardController_o *v46; // x8
  ClassBoardDisableOpenDialog_o *v47; // x20
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v49; // x21
  System_Enum_o *v50; // x20
  __int64 v51; // x2
  BaseMonoBehaviour_o *v52; // x20
  __int64 *v53; // x21
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  struct ClassBoardController_o *v58; // x8
  ClassBoardLockReleaseConditionDialog_o *v59; // x20
  System_Action_o *_9__3; // x22
  ClassBoardSquare_o *v61; // x21
  struct ClassBoardSquare_o *v62; // x8
  __int64 v63; // x11
  struct ClassBoardSquare_o *v64; // x22
  struct ClassBoardController_o *v65; // x8
  ClassBoardLockOpenConfirmDialog_o *v66; // x20
  struct ClassBoardSquare_o *v67; // x21
  ClassBoardController___c_c *v68; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v71; // x23
  struct ClassBoardController___c_StaticFields *v72; // x0
  System_Action_o *_9__5; // x23
  ClassBoardLockOpenConfirmDialog_o *v74; // x0
  ClassBoardSquare_o *v75; // x1
  bool v76; // w2
  struct ClassBoardController_o *v77; // x8
  ClassBoardSquareOpenConfirmDialog_o *v78; // x20
  struct ClassBoardSquare_o *v79; // x21
  ClassBoardController___c_c *v80; // x0
  struct ClassBoardController___c_StaticFields *v81; // x8
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v83; // x23
  struct ClassBoardController___c_StaticFields *v84; // x0
  System_Action_o *_9__7; // x23
  ClassBoardSquareOpenConfirmDialog_o *v86; // x0
  ClassBoardSquare_o *v87; // x1
  bool v88; // w2
  BaseMonoBehaviour_o *v89; // x20
  __int64 *v90; // x21
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  int *v93; // x11
  __int64 v94; // x0
  struct ClassBoardController_o *v95; // x8
  ClassBoardLockOpenConfirmDialog_o *v96; // x20
  struct ClassBoardSquare_o *v97; // x21
  ClassBoardSquareOpenConfirmDialog_o *v98; // x20
  struct ClassBoardSquare_o *v99; // x21
  int v100; // [xsp+8h] [xbp-38h] BYREF
  int32_t acquireFlag; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438857C & 1) == 0 )
  {
    sub_B775C4(&AcquireFlag_TypeInfo);
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_B775C4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_B775C4(&ClassBoardLock_TypeInfo);
    sub_B775C4(&IClassBoardResourceCatalog_TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__);
    sub_B775C4(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__);
    sub_B775C4(&ClassBoardController___c_TypeInfo);
    byte_438857C = 1;
  }
  acquireFlag = this->fields.acquireFlag;
  v4 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag, v2);
  v100 = 1;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v100, v5);
  if ( !v4 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v4, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) != 0 )
  {
    _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      monitor = (__int64 *)_4__this[3].monitor;
      if ( monitor )
      {
        v11 = *monitor;
        if ( *(_WORD *)(*monitor + 298) )
        {
          v12 = 0LL;
          v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
          while ( *((IClassBoardResourceCatalog_c **)v13 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v12;
            v13 += 4;
            if ( v12 >= *(unsigned __int16 *)(*monitor + 298) )
              goto LABEL_11;
          }
          v14 = v11 + 16LL * *v13 + 312;
        }
        else
        {
LABEL_11:
          v14 = sub_B0F4C0(_4__this[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v14)(monitor, *(_QWORD *)(v14 + 8));
        if ( HasFlag )
        {
          v33 = this->fields.__4__this;
          if ( v33 )
          {
            HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                                 _4__this,
                                 *(Il2CppObject **)(HasFlag + 80),
                                 v33->fields.uiRoot,
                                 0LL,
                                 (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
            if ( HasFlag )
            {
              v34 = (ClassBoardSquareDetailDialog_o *)HasFlag;
              ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)HasFlag, 0LL);
              HasFlag = (__int64)this->fields.__4__this;
              if ( HasFlag )
              {
                HasFlag = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)HasFlag + 376LL))(
                            HasFlag,
                            *(_QWORD *)(*(_QWORD *)HasFlag + 384LL));
                if ( HasFlag )
                {
                  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)HasFlag, 1, 0LL);
                  _9__1 = this->fields.__9__1;
                  square = this->fields.square;
                  if ( !_9__1 )
                  {
                    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
                    System_Action___ctor(
                      _9__1,
                      (Il2CppObject *)this,
                      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
                      0LL);
                    this->fields.__9__1 = _9__1;
                    sub_B77560(&this->fields.__9__1);
                  }
                  ClassBoardSquareDetailDialog__Open(v34, square, _9__1, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_146:
    sub_B7769C(HasFlag, v7);
  }
  acquireFlag = this->fields.acquireFlag;
  v15 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag, v8);
  v100 = 2;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v100, v16);
  if ( !v15 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v15, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) != 0 )
  {
    v18 = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( !v18 )
      goto LABEL_146;
    v19 = (__int64 *)v18[3].monitor;
    if ( !v19 )
      goto LABEL_146;
    v20 = *v19;
    if ( *(_WORD *)(*v19 + 298) )
    {
      v21 = 0LL;
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v22 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)(*v19 + 298) )
          goto LABEL_20;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_20:
      v23 = sub_B0F4C0(v18[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
    if ( !HasFlag )
      goto LABEL_146;
    v46 = this->fields.__4__this;
    if ( !v46 )
      goto LABEL_146;
    HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                         v18,
                         *(Il2CppObject **)(HasFlag + 48),
                         v46->fields.uiRoot,
                         0LL,
                         (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !HasFlag )
      goto LABEL_146;
    v47 = (ClassBoardDisableOpenDialog_o *)HasFlag;
    ClassBoardDisableOpenDialog__Init((ClassBoardDisableOpenDialog_o *)HasFlag, 0LL);
    HasFlag = (__int64)this->fields.__4__this;
    if ( !HasFlag )
      goto LABEL_146;
    HasFlag = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)HasFlag + 376LL))(
                HasFlag,
                *(_QWORD *)(*(_QWORD *)HasFlag + 384LL));
    if ( !HasFlag )
      goto LABEL_146;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)HasFlag, 1, 0LL);
    _9__2 = this->fields.__9__2;
    v49 = this->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B77560(&this->fields.__9__2);
    }
    ClassBoardDisableOpenDialog__Open(v47, v49, _9__2, 0LL);
    return;
  }
  acquireFlag = this->fields.acquireFlag;
  v24 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag, v17);
  v100 = 4;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v100, v25);
  if ( !v24 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v24, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) == 0 )
  {
    acquireFlag = this->fields.acquireFlag;
    v37 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag, v26);
    v100 = 16;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v100, v38);
    if ( !v37 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v37, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v40 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v40 )
        goto LABEL_146;
      v41 = (__int64 *)v40[3].monitor;
      if ( !v41 )
        goto LABEL_146;
      v42 = *v41;
      if ( *(_WORD *)(*v41 + 298) )
      {
        v43 = 0LL;
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v44 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v43;
          v44 += 4;
          if ( v43 >= *(unsigned __int16 *)(*v41 + 298) )
            goto LABEL_47;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_47:
        v45 = sub_B0F4C0(v40[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v65 = this->fields.__4__this;
      if ( !v65 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v40,
                           *(Il2CppObject **)(HasFlag + 64),
                           v65->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v66 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
      ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)HasFlag, 0LL);
      HasFlag = (__int64)this->fields.__4__this;
      if ( !HasFlag )
        goto LABEL_146;
      HasFlag = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)HasFlag + 376LL))(
                  HasFlag,
                  *(_QWORD *)(*(_QWORD *)HasFlag + 384LL));
      if ( !HasFlag )
        goto LABEL_146;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)HasFlag, 1, 0LL);
      v67 = this->fields.square;
      v68 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v68 = ClassBoardController___c_TypeInfo;
      }
      static_fields = v68->static_fields;
      _9__39_4 = static_fields->__9__39_4;
      if ( !_9__39_4 )
      {
        if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          static_fields = ClassBoardController___c_TypeInfo->static_fields;
        }
        v71 = (Il2CppObject *)static_fields->__9;
        _9__39_4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(_9__39_4, v71, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, 0LL);
        v72 = ClassBoardController___c_TypeInfo->static_fields;
        v72->__9__39_4 = _9__39_4;
        sub_B77560(&v72->__9__39_4);
      }
      _9__5 = this->fields.__9__5;
      if ( !_9__5 )
      {
        _9__5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__5,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
          0LL);
        this->fields.__9__5 = _9__5;
        sub_B77560(&this->fields.__9__5);
      }
      v74 = v66;
      v75 = v67;
      v76 = 0;
LABEL_134:
      ClassBoardLockOpenConfirmDialog__Open(v74, v75, v76, _9__39_4, _9__5, 0LL);
      return;
    }
    acquireFlag = this->fields.acquireFlag;
    v50 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag, v39);
    v100 = 8;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v100, v51);
    if ( !v50 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v50, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v52 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v52 )
        goto LABEL_146;
      v53 = (__int64 *)v52[3].monitor;
      if ( !v53 )
        goto LABEL_146;
      v54 = *v53;
      if ( *(_WORD *)(*v53 + 298) )
      {
        v55 = 0LL;
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v56 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v55;
          v56 += 4;
          if ( v55 >= *(unsigned __int16 *)(*v53 + 298) )
            goto LABEL_65;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_65:
        v57 = sub_B0F4C0(v52[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v77 = this->fields.__4__this;
      if ( !v77 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v52,
                           *(Il2CppObject **)(HasFlag + 56),
                           v77->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v78 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)HasFlag, 0LL);
      HasFlag = (__int64)this->fields.__4__this;
      if ( !HasFlag )
        goto LABEL_146;
      HasFlag = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)HasFlag + 376LL))(
                  HasFlag,
                  *(_QWORD *)(*(_QWORD *)HasFlag + 384LL));
      if ( !HasFlag )
        goto LABEL_146;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)HasFlag, 1, 0LL);
      v79 = this->fields.square;
      v80 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v80 = ClassBoardController___c_TypeInfo;
      }
      v81 = v80->static_fields;
      _9__39_6 = v81->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v80);
          v81 = ClassBoardController___c_TypeInfo->static_fields;
        }
        v83 = (Il2CppObject *)v81->__9;
        _9__39_6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(_9__39_6, v83, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v84 = ClassBoardController___c_TypeInfo->static_fields;
        v84->__9__39_6 = _9__39_6;
        sub_B77560(&v84->__9__39_6);
      }
      _9__7 = this->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        this->fields.__9__7 = _9__7;
        sub_B77560(&this->fields.__9__7);
      }
      v86 = v78;
      v87 = v79;
      v88 = 0;
    }
    else
    {
      v62 = this->fields.square;
      if ( v62
        && (v63 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1), *(&v62->klass->_2.bitflags2 + 1) >= (unsigned int)v63) )
      {
        if ( (ClassBoardLock_c *)v62->klass->_2.typeHierarchy[v63 - 1] == ClassBoardLock_TypeInfo )
          v64 = this->fields.square;
        else
          v64 = 0LL;
      }
      else
      {
        v64 = 0LL;
      }
      v89 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v89 )
        goto LABEL_146;
      v90 = (__int64 *)v89[3].monitor;
      if ( !v90 )
        goto LABEL_146;
      v91 = *v90;
      if ( *(_WORD *)(*v90 + 298) )
      {
        v92 = 0LL;
        v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v93 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v92;
          v93 += 4;
          if ( v92 >= *(unsigned __int16 *)(*v90 + 298) )
            goto LABEL_121;
        }
        v94 = v91 + 16LL * *v93 + 312;
      }
      else
      {
LABEL_121:
        v94 = sub_B0F4C0(v89[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v94)(v90, *(_QWORD *)(v94 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v95 = this->fields.__4__this;
      if ( v64 )
      {
        if ( !v95 )
          goto LABEL_146;
        HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                             v89,
                             *(Il2CppObject **)(HasFlag + 64),
                             v95->fields.uiRoot,
                             0LL,
                             (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( !HasFlag )
          goto LABEL_146;
        v96 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
        ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)HasFlag, 0LL);
        HasFlag = (__int64)this->fields.__4__this;
        if ( !HasFlag )
          goto LABEL_146;
        HasFlag = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)HasFlag + 376LL))(
                    HasFlag,
                    *(_QWORD *)(*(_QWORD *)HasFlag + 384LL));
        if ( !HasFlag )
          goto LABEL_146;
        ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)HasFlag, 1, 0LL);
        _9__39_4 = this->fields.__9__8;
        v97 = this->fields.square;
        if ( !_9__39_4 )
        {
          _9__39_4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            _9__39_4,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
            0LL);
          this->fields.__9__8 = _9__39_4;
          sub_B77560(&this->fields.__9__8);
        }
        _9__5 = this->fields.__9__9;
        if ( !_9__5 )
        {
          _9__5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            _9__5,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
            0LL);
          this->fields.__9__9 = _9__5;
          sub_B77560(&this->fields.__9__9);
        }
        v76 = 1;
        v74 = v96;
        v75 = v97;
        goto LABEL_134;
      }
      if ( !v95 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v89,
                           *(Il2CppObject **)(HasFlag + 56),
                           v95->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v98 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)HasFlag, 0LL);
      HasFlag = (__int64)this->fields.__4__this;
      if ( !HasFlag )
        goto LABEL_146;
      HasFlag = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)HasFlag + 376LL))(
                  HasFlag,
                  *(_QWORD *)(*(_QWORD *)HasFlag + 384LL));
      if ( !HasFlag )
        goto LABEL_146;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)HasFlag, 1, 0LL);
      _9__39_6 = this->fields.__9__12;
      v99 = this->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        this->fields.__9__12 = _9__39_6;
        sub_B77560(&this->fields.__9__12);
      }
      _9__7 = this->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        this->fields.__9__13 = _9__7;
        sub_B77560(&this->fields.__9__13);
      }
      v88 = 1;
      v86 = v98;
      v87 = v99;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v86, v87, v88, _9__39_6, _9__7, 0LL);
    return;
  }
  v27 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v27 )
    goto LABEL_146;
  v28 = (__int64 *)v27[3].monitor;
  if ( !v28 )
    goto LABEL_146;
  v29 = *v28;
  if ( *(_WORD *)(*v28 + 298) )
  {
    v30 = 0LL;
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((IClassBoardResourceCatalog_c **)v31 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)(*v28 + 298) )
        goto LABEL_29;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_29:
    v32 = sub_B0F4C0(v27[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
  if ( !HasFlag )
    goto LABEL_146;
  v58 = this->fields.__4__this;
  if ( !v58 )
    goto LABEL_146;
  HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                       v27,
                       *(Il2CppObject **)(HasFlag + 72),
                       v58->fields.uiRoot,
                       0LL,
                       (const MethodInfo_1C65AF4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
  if ( !HasFlag )
    goto LABEL_146;
  v59 = (ClassBoardLockReleaseConditionDialog_o *)HasFlag;
  ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)HasFlag, 0LL);
  HasFlag = (__int64)this->fields.__4__this;
  if ( !HasFlag )
    goto LABEL_146;
  HasFlag = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)HasFlag + 376LL))(
              HasFlag,
              *(_QWORD *)(*(_QWORD *)HasFlag + 384LL));
  if ( !HasFlag )
    goto LABEL_146;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)HasFlag, 1, 0LL);
  _9__3 = this->fields.__9__3;
  v61 = this->fields.square;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B77560(&this->fields.__9__3);
  }
  ClassBoardLockReleaseConditionDialog__Open(v59, v61, 0, _9__3, 0LL);
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
    sub_B7769C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  System_Action_o *klass; // x22
  ClassBoardController_o *monitor; // x20
  ClassBoardSquare_o *v6; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_438857E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__);
    byte_438857E = 1;
  }
  klass = (System_Action_o *)v3[5].klass;
  monitor = (ClassBoardController_o *)v3[1].monitor;
  v6 = (ClassBoardSquare_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v3[5].klass = (Il2CppClass *)klass;
    sub_B77560(&v3[5]);
  }
  if ( !monitor )
    sub_B7769C(this, _);
  ClassBoardController__PlayReleaseEffect(monitor, v6, klass, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__11(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
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
    sub_B7769C(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v5; // x8
  unsigned __int64 v6; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v8; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass39_0_o *v10; // x20
  ClassBoardController___c__DisplayClass39_0_c *v11; // x8
  unsigned __int64 v12; // x10
  IClassBoardSquareUser_c **v13; // x11
  __int64 v14; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_438857F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_IClassBoardSquareUser___ctor__);
    sub_B775C4(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__);
    byte_438857F = 1;
  }
  klass = v2[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v5 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v5->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 2;
      if ( v6 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v8 = (__int64)&(&v5->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v8 = sub_B0F4C0(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v8)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v8 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v2[7].monitor;
  v10 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      (const MethodInfo_26A0868 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v2[7].monitor = monitor;
    sub_B77560(&v2[7].monitor);
  }
  if ( !v10 )
LABEL_21:
    sub_B7769C(this, method);
  v11 = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = (IClassBoardSquareUser_c **)&v11->_1.interfaceOffsets->offset;
    while ( *(v13 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v12;
      v13 += 2;
      if ( v12 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v14 = (__int64)(&v11->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v13);
  }
  else
  {
LABEL_18:
    v14 = sub_B0F4C0(v10, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))v14)(
    v10,
    monitor,
    *(_QWORD *)(v14 + 8));
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
    sub_B7769C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  System_Action_o *klass; // x22
  ClassBoardController_o *monitor; // x20
  ClassBoardSquare_o *v6; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4388580 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__);
    byte_4388580 = 1;
  }
  klass = (System_Action_o *)v3[7].klass;
  monitor = (ClassBoardController_o *)v3[1].monitor;
  v6 = (ClassBoardSquare_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v3[7].klass = (Il2CppClass *)klass;
    sub_B77560(&v3[7]);
  }
  if ( !monitor )
    sub_B7769C(this, _);
  ClassBoardController__PlayReleaseEffect(monitor, v6, klass, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__15(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
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
    sub_B7769C(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
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
    sub_B7769C(_4__this, method);
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
    sub_B7769C(_4__this, method);
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
    sub_B7769C(_4__this, method);
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
    sub_B7769C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v5; // x8
  unsigned __int64 v6; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v8; // x0
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass39_0_o *v10; // x20
  ClassBoardController___c__DisplayClass39_0_c *v11; // x8
  unsigned __int64 v12; // x10
  IClassBoardSquareUser_c **v13; // x11
  __int64 v14; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_438857D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_IClassBoardSquareUser___ctor__);
    sub_B775C4(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B775C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__);
    byte_438857D = 1;
  }
  klass = v2[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v5 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v5->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 2;
      if ( v6 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v8 = (__int64)&(&v5->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v8 = sub_B0F4C0(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v8)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v8 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v2[5].monitor;
  v10 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v2,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      (const MethodInfo_26A0868 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v2[5].monitor = monitor;
    sub_B77560(&v2[5].monitor);
  }
  if ( !v10 )
LABEL_21:
    sub_B7769C(this, method);
  v11 = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    v13 = (IClassBoardSquareUser_c **)&v11->_1.interfaceOffsets->offset;
    while ( *(v13 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v12;
      v13 += 2;
      if ( v12 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v14 = (__int64)(&v11->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v13);
  }
  else
  {
LABEL_18:
    v14 = sub_B0F4C0(v10, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))v14)(
    v10,
    monitor,
    *(_QWORD *)(v14 + 8));
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
    sub_B7769C(_4__this, method);
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
  void *_4__this; // x0
  __int64 v4; // x1
  struct ClassBoardController_o *v5; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *squareViewList; // x20
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__40_1; // x21
  Il2CppObject *v9; // x22
  struct ClassBoardController___c_StaticFields *v10; // x0
  struct ClassBoardController_o *v11; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *lineViewList; // x20
  struct ClassBoardController___c_StaticFields *v13; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__40_2; // x21
  Il2CppObject *v15; // x22
  struct ClassBoardController___c_StaticFields *v16; // x0

  if ( (byte_4388581 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ClassBoardLine___ctor__);
    sub_B775C4(&Method_System_Action_ClassBoardSquare___ctor__);
    sub_B775C4(&System_Action_ClassBoardSquare__TypeInfo);
    sub_B775C4(&System_Action_ClassBoardLine__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
    sub_B775C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B775C4(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__);
    sub_B775C4(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__);
    sub_B775C4(&ClassBoardController___c_TypeInfo);
    byte_4388581 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_32;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_32;
  _4__this = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)_4__this + 376LL))(
                       _4__this,
                       *(_QWORD *)(*(_QWORD *)_4__this + 384LL));
  if ( !_4__this )
    goto LABEL_32;
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_32;
  _4__this = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)_4__this + 376LL))(
                       _4__this,
                       *(_QWORD *)(*(_QWORD *)_4__this + 384LL));
  if ( !_4__this )
    goto LABEL_32;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
  v5 = this->fields.__4__this;
  if ( !v5 )
    goto LABEL_32;
  squareViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v5->fields.squareViewList;
  _4__this = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  static_fields = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__40_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( (*((_BYTE *)_4__this + 307) & 4) != 0 && !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__40_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__40_1,
      v9,
      Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__,
      (const MethodInfo_26A0868 *)Method_System_Action_ClassBoardSquare___ctor__);
    v10 = ClassBoardController___c_TypeInfo->static_fields;
    v10->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)_9__40_1;
    sub_B77560(&v10->__9__40_1);
  }
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    squareViewList,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_32;
  _4__this = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v11->fields.lineViewList;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v13 = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__40_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v13->__9__40_2;
  if ( !_9__40_2 )
  {
    if ( (*((_BYTE *)_4__this + 307) & 4) != 0 && !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      v13 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)v13->__9;
    _9__40_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_ClassBoardLine__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__40_2,
      v15,
      Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__,
      (const MethodInfo_26A0868 *)Method_System_Action_ClassBoardLine___ctor__);
    v16 = ClassBoardController___c_TypeInfo->static_fields;
    v16->__9__40_2 = (struct System_Action_ClassBoardLine__o *)_9__40_2;
    sub_B77560(&v16->__9__40_2);
  }
  if ( !lineViewList )
LABEL_32:
    sub_B7769C(_4__this, v4);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    lineViewList,
    (System_Action_T__o *)_9__40_2,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  ClassBoardUIController_o *v5; // x20
  System_Action_o *_9__4; // x21

  if ( (byte_4388582 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B775C4(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B775C4(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__);
    byte_4388582 = 1;
  }
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  isLockCondReleased = this->fields.isLockCondReleased;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                           _4__this,
                                           _4__this->klass[1]._1.name);
  if ( !_4__this )
    goto LABEL_18;
  ClassBoardUIController__TouchEnable(_4__this, 0LL);
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                           _4__this,
                                           _4__this->klass[1]._1.name);
  v5 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B77560(&this->fields.__9__4);
    }
    if ( v5 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v5, _9__4, 0LL);
      goto LABEL_13;
    }
LABEL_18:
    sub_B7769C(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_18;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0LL);
LABEL_13:
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_18;
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
    sub_B7769C(_4__this, method);
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
  ClassBoardUIController_o *_4__this; // x0

  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                                 _4__this,
                                                 _4__this->klass[1]._1.name)) == 0LL
    || (ClassBoardUIController__TouchEnable(_4__this, 0LL),
        (_4__this = (ClassBoardUIController_o *)this->fields.__4__this) == 0LL)
    || (_4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                                 _4__this,
                                                 _4__this->klass[1]._1.name)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0LL),
        (_4__this = (ClassBoardUIController_o *)this->fields.callback) == 0LL) )
  {
    sub_B7769C(_4__this, method);
  }
  System_Action__Invoke((System_Action_o *)_4__this, 0LL);
}