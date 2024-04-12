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

  if ( (byte_42B382A & 1) == 0 )
  {
    sub_B52984(&ClassBoardModelBuilder_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
    sub_B52984(&System_Collections_Generic_List_ClassBoardLine__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
    byte_42B382A = 1;
  }
  v3 = (ClassBoardModelBuilder_o *)sub_B52A54(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v3, 0LL);
  this->fields._builder_k__BackingField = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._builder_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.squareViewList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v17;
  sub_B52920(
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
  __int64 v8; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  ClassBoardController___c_c *v14; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_0; // x21
  Il2CppObject *v17; // x22
  struct ClassBoardController___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  ClassBoardController___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  struct ClassBoardController___c_StaticFields *v28; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__42_1; // x21
  Il2CppObject *v30; // x22
  struct ClassBoardController___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  ClassBoardUIController_o *v39; // x21
  System_Action_o *v40; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v41; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B3827 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
    sub_B52984(&Method_System_Func_IClassBoardLockModel__int___ctor__);
    sub_B52984(&Method_System_Func_IClassBoardLockModel__bool___ctor__);
    sub_B52984(&System_Func_IClassBoardLockModel__bool__TypeInfo);
    sub_B52984(&System_Func_IClassBoardLockModel__int__TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_B52984(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__);
    sub_B52984(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__);
    sub_B52984(&ClassBoardController___c_TypeInfo);
    byte_42B3827 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v5;
  if ( !squareModel )
    goto LABEL_31;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(squareModel, IClassBoardSquareModel_TypeInfo, 15LL, v8);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               source,
                                                               (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v14 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v14 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_0,
      v17,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_IClassBoardLockModel__bool___ctor__);
    v18 = ClassBoardController___c_TypeInfo->static_fields;
    v18->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v18->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v13,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v26 = ClassBoardController___c_TypeInfo;
  v27 = v25;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v26 = ClassBoardController___c_TypeInfo;
  }
  v28 = v26->static_fields;
  _9__42_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v28->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v28 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__42_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__42_1,
      v30,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_IClassBoardLockModel__int___ctor__);
    v31 = ClassBoardController___c_TypeInfo->static_fields;
    v31->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v31->__9__42_1,
      (System_Int32_array **)_9__42_1,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v27,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v38,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v6 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
      v39 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v40 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__,
        0LL);
      if ( v39 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v39, v40, 0LL);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_B52A5C(v6, v7);
  }
LABEL_30:
  v41 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                    v38,
                                                                                    (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v41, 0LL);
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
  if ( (byte_42B3822 & 1) == 0 )
  {
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardController_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B3822 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_B52A5C(this, defaultPrefab);
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
      p_method = sub_AEB880(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL, method);
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
                      (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
  return (ClassBoardSquare_o *)Object_object;
}


void __fastcall ClassBoardController__CreateViews(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  __int64 *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x10
  int *v9; // x11
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  __int64 v13; // x20
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  int *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x3
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  IClassBoardSquareModel_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v32; // x8
  unsigned __int64 v33; // x10
  IClassBoardSquareModel_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x3
  IClassBoardSquareModel_c *v39; // x8
  ClassBoardSquare_o *v40; // x22
  IClassBoardSquareModel_c *v41; // x1
  unsigned __int64 v42; // x10
  IClassBoardSquareModel_c **v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  struct IClassBoardResourceCatalog_o *v48; // x22
  IClassBoardResourceCatalog_c *v49; // x8
  unsigned __int64 v50; // x10
  int32_t *v51; // x11
  __int64 v52; // x0
  IClassBoardResourceCatalog_c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  IClassBoardSquareModel_c *v59; // x8
  unsigned __int64 v60; // x10
  IClassBoardSquareModel_c **v61; // x11
  __int64 v62; // x0
  __int64 v63; // x1
  IClassBoardSquareModel_c *v64; // x8
  unsigned __int64 v65; // x10
  IClassBoardSquareModel_c **v66; // x11
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  ClassBoardSquare_o *v69; // x0
  __int64 v70; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v71; // x22
  __int64 v72; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x0
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  int *v76; // x11
  __int64 v77; // x0
  __int64 v78; // x3
  __int64 *v79; // x20
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x3
  __int64 v86; // x20
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  __int64 v91; // x3
  __int64 v92; // x8
  unsigned __int64 v93; // x10
  int *v94; // x11
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x3
  struct IClassBoardResourceCatalog_o *v99; // x22
  IClassBoardResourceCatalog_c *v100; // x8
  IClassBoardLineModel_o *v101; // x21
  unsigned __int64 v102; // x10
  int32_t *v103; // x11
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x1
  Il2CppObject *Object_object; // x0
  __int64 v108; // x1
  const MethodInfo *v109; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v110; // x22
  __int64 v111; // x1
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x0
  int v113; // w23
  __int64 v114; // x8
  unsigned __int64 v115; // x10
  int *v116; // x11
  __int64 v117; // x0
  int v118[2]; // [xsp+0h] [xbp-60h]
  int v119; // [xsp+8h] [xbp-58h]

  if ( (byte_42B3821 & 1) == 0 )
  {
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardLine__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
    byte_42B3821 = 1;
  }
  v119 = 0;
  v3 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
         this,
         this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v3 )
    goto LABEL_143;
  v6 = *(__int64 **)(v3 + 24);
  if ( !v6 )
    goto LABEL_143;
  v7 = *v6;
  if ( *(_WORD *)(*v6 + 298) )
  {
    v8 = 0LL;
    v9 = (int *)(*(_QWORD *)(v7 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v9 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v8;
      v9 += 4;
      if ( v8 >= *(unsigned __int16 *)(*v6 + 298) )
        goto LABEL_9;
    }
    v10 = v7 + 16LL * *v9 + 312;
  }
  else
  {
LABEL_9:
    v10 = sub_AEB880(
            *(_QWORD *)(v3 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL,
            v5);
  }
  v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v10)(v6, *(_QWORD *)(v10 + 8));
  if ( !v13 )
    sub_B52A5C(0LL, v11);
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
    {
      v15 = 0LL;
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        v16 += 4;
        if ( v15 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
          goto LABEL_16;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_16:
      v17 = sub_AEB880(v13, System_Collections_IEnumerator_TypeInfo, 0LL, v12);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v21 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
          goto LABEL_23;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_23:
      v22 = sub_AEB880(v13, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL, v18);
    }
    v23 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v13, *(_QWORD *)(v22 + 8));
    v24 = sub_B52A44(v23, IClassBoardLockModel_TypeInfo);
    if ( v24 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_B52A5C(v24, v25);
      klass = resourceCatalog->klass;
      if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v29;
          p_offset += 4;
          if ( v29 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_AEB880(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v26);
      }
      v36 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v36 )
        sub_B52A5C(0LL, v37);
      if ( !v23 )
        sub_B52A5C(v36, v37);
      v39 = v23->klass;
      v40 = *(ClassBoardSquare_o **)(v36 + 32);
      v41 = IClassBoardSquareModel_TypeInfo;
      if ( !*(_WORD *)&v23->klass->_2.bitflags1 )
        goto LABEL_67;
      v42 = 0LL;
      v43 = (IClassBoardSquareModel_c **)&v39->_1.interfaceOffsets->offset;
      while ( *(v43 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v42;
        v43 += 2;
        if ( v42 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v44 = (__int64)&v39->vtable[*(_DWORD *)v43 + 10].method;
    }
    else
    {
      if ( !v23 )
        sub_B52A5C(0LL, v25);
      v32 = v23->klass;
      if ( *(_WORD *)&v23->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        v34 = (IClassBoardSquareModel_c **)&v32->_1.interfaceOffsets->offset;
        while ( *(v34 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v33;
          v34 += 2;
          if ( v33 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
            goto LABEL_37;
        }
        v35 = (__int64)&v32->vtable[*(_DWORD *)v34 + 5].method;
      }
      else
      {
LABEL_37:
        v35 = sub_AEB880(v23, IClassBoardSquareModel_TypeInfo, 5LL, v26);
      }
      v45 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v35)(v23, *(_QWORD *)(v35 + 8));
      v48 = this->fields.resourceCatalog;
      if ( (v45 & 1) != 0 )
      {
        if ( !v48 )
          sub_B52A5C(v45, v46);
        v49 = v48->klass;
        if ( *(_WORD *)&v48->klass->_2.bitflags1 )
        {
          v50 = 0LL;
          v51 = &v49->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v51 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v50;
            v51 += 4;
            if ( v50 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
              goto LABEL_54;
          }
          v52 = (__int64)&v49->vtable[*v51].method;
        }
        else
        {
LABEL_54:
          v52 = sub_AEB880(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v47);
        }
        v57 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8));
        if ( !v57 )
          sub_B52A5C(0LL, v58);
        v59 = v23->klass;
        v40 = *(ClassBoardSquare_o **)(v57 + 40);
        v41 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v23->klass->_2.bitflags1 )
          goto LABEL_67;
        v60 = 0LL;
        v61 = (IClassBoardSquareModel_c **)&v59->_1.interfaceOffsets->offset;
        while ( *(v61 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v60;
          v61 += 2;
          if ( v60 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v44 = (__int64)&v59->vtable[*(_DWORD *)v61 + 10].method;
      }
      else
      {
        if ( !v48 )
          sub_B52A5C(v45, v46);
        v53 = v48->klass;
        if ( *(_WORD *)&v48->klass->_2.bitflags1 )
        {
          v54 = 0LL;
          v55 = &v53->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v55 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v54;
            v55 += 4;
            if ( v54 >= *(unsigned __int16 *)&v48->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v56 = (__int64)&v53->vtable[*v55].method;
        }
        else
        {
LABEL_60:
          v56 = sub_AEB880(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v47);
        }
        v62 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
        if ( !v62 )
          sub_B52A5C(0LL, v63);
        v64 = v23->klass;
        v40 = *(ClassBoardSquare_o **)(v62 + 16);
        v41 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v23->klass->_2.bitflags1 )
        {
LABEL_67:
          v44 = sub_AEB880(v23, v41, 10LL, v38);
          goto LABEL_77;
        }
        v65 = 0LL;
        v66 = (IClassBoardSquareModel_c **)&v64->_1.interfaceOffsets->offset;
        while ( *(v66 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v65;
          v66 += 2;
          if ( v65 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v44 = (__int64)&v64->vtable[*(_DWORD *)v66 + 10].method;
      }
    }
LABEL_77:
    v67 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v44)(v23, *(_QWORD *)(v44 + 8));
    v69 = ClassBoardController__CloneSquareObject(this, v40, v67, v68);
    v71 = (EventMissionProgressRequest_Argument_ProgressData_o *)v69;
    if ( !v69 )
      sub_B52A5C(0LL, v70);
    ClassBoardSquare__Setup(v69, v23, 0LL);
    squareViewList = this->fields.squareViewList;
    if ( !squareViewList )
      sub_B52A5C(0LL, v72);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareViewList,
      v71,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
  }
  v118[0] = 180;
  v119 = 1;
  v74 = *(_QWORD *)v13;
  if ( *(_WORD *)(*(_QWORD *)v13 + 298LL) )
  {
    v75 = 0LL;
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      ++v75;
      v76 += 4;
      if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)v13 + 298LL) )
        goto LABEL_84;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_84:
    v77 = sub_AEB880(v13, System_IDisposable_TypeInfo, 0LL, v18);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v77)(v13, *(_QWORD *)(v77 + 8));
  v119 = 0;
  v3 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
         this,
         this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v3 || (v79 = *(__int64 **)(v3 + 16)) == 0LL )
LABEL_143:
    sub_B52A5C(v3, v4);
  v80 = *v79;
  if ( *(_WORD *)(*v79 + 298) )
  {
    v81 = 0LL;
    v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v82 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v81;
      v82 += 4;
      if ( v81 >= *(unsigned __int16 *)(*v79 + 298) )
        goto LABEL_92;
    }
    v83 = v80 + 16LL * *v82 + 312;
  }
  else
  {
LABEL_92:
    v83 = sub_AEB880(
            *(_QWORD *)(v3 + 16),
            System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo,
            0LL,
            v78);
  }
  v86 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
  if ( !v86 )
    sub_B52A5C(0LL, v84);
  while ( 1 )
  {
    v87 = *(_QWORD *)v86;
    if ( *(_WORD *)(*(_QWORD *)v86 + 298LL) )
    {
      v88 = 0LL;
      v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v89 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v88;
        v89 += 4;
        if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v86 + 298LL) )
          goto LABEL_99;
      }
      v90 = v87 + 16LL * *v89 + 312;
    }
    else
    {
LABEL_99:
      v90 = sub_AEB880(v86, System_Collections_IEnumerator_TypeInfo, 0LL, v85);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8)) & 1) == 0 )
      break;
    v92 = *(_QWORD *)v86;
    if ( *(_WORD *)(*(_QWORD *)v86 + 298LL) )
    {
      v93 = 0LL;
      v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v94 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v93;
        v94 += 4;
        if ( v93 >= *(unsigned __int16 *)(*(_QWORD *)v86 + 298LL) )
          goto LABEL_106;
      }
      v95 = v92 + 16LL * *v94 + 312;
    }
    else
    {
LABEL_106:
      v95 = sub_AEB880(v86, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v91);
    }
    v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v86, *(_QWORD *)(v95 + 8));
    v99 = this->fields.resourceCatalog;
    if ( !v99 )
      sub_B52A5C(v96, v97);
    v100 = v99->klass;
    v101 = (IClassBoardLineModel_o *)v96;
    if ( *(_WORD *)&v99->klass->_2.bitflags1 )
    {
      v102 = 0LL;
      v103 = &v100->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v103 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v102;
        v103 += 4;
        if ( v102 >= *(unsigned __int16 *)&v99->klass->_2.bitflags1 )
          goto LABEL_113;
      }
      v104 = (__int64)&v100->vtable[*v103].method;
    }
    else
    {
LABEL_113:
      v104 = sub_AEB880(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v98);
    }
    v105 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v104)(v99, *(_QWORD *)(v104 + 8));
    if ( !v105 )
      sub_B52A5C(0LL, v106);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v105 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v110 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object;
    if ( !Object_object )
      sub_B52A5C(0LL, v108);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v101, v109);
    lineViewList = this->fields.lineViewList;
    if ( !lineViewList )
      sub_B52A5C(0LL, v111);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineViewList,
      v110,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ClassBoardLine__Add__);
  }
  v118[0] = 280;
  v113 = ++v119;
  v114 = *(_QWORD *)v86;
  if ( *(_WORD *)(*(_QWORD *)v86 + 298LL) )
  {
    v115 = 0LL;
    v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v116 - 1) != System_IDisposable_TypeInfo )
    {
      ++v115;
      v116 += 4;
      if ( v115 >= *(unsigned __int16 *)(*(_QWORD *)v86 + 298LL) )
        goto LABEL_123;
    }
    v117 = v114 + 16LL * *v116 + 312;
  }
  else
  {
LABEL_123:
    v117 = sub_AEB880(v86, System_IDisposable_TypeInfo, 0LL, v91);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v117)(v86, *(_QWORD *)(v117 + 8));
  if ( v113 && v118[v113 - 1] == 280 )
    v119 = v113 - 1;
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

  if ( (byte_42B381F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardController__OnClickEffectList_b__32_0__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B381F = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v6 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v8 = (CommonUI_o *)v6;
        v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v8 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v8, 0, baseId, 1, v9, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B52A5C(Instance, v5);
  }
}


void __fastcall ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_42B381E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardController__OnClickHelp_b__31_0__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B381E = 1;
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
      sub_B52A5C(0LL, v5);
    ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0LL);
    v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__31_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v6, 0LL);
  }
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v6; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42B3820 & 1) == 0 )
  {
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
    sub_B52984(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
    byte_42B3820 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_object___Delete((const MethodInfo_2B76438 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
    {
      v6 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v6;
        p_offset += 2;
        if ( v6 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AEB880(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL, v3);
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

  if ( (byte_42B3826 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_ClassBoardLock___);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_ClassBoardLock___);
    sub_B52984(&Method_System_Func_ClassBoardLock__bool___ctor__);
    sub_B52984(&Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__);
    sub_B52984(&Method_System_Func_ClassBoardLock__int___ctor__);
    sub_B52984(&System_Func_ClassBoardLock__int__TypeInfo);
    sub_B52984(&System_Func_ClassBoardLock__bool__TypeInfo);
    sub_B52984(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__);
    sub_B52984(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__);
    sub_B52984(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__);
    sub_B52984(&ClassBoardController___c__DisplayClass41_0_TypeInfo);
    sub_B52984(&ClassBoardController___c_TypeInfo);
    byte_42B3826 = 1;
  }
  v3 = sub_B52A54(ClassBoardController___c__DisplayClass41_0_TypeInfo);
  ClassBoardController___c__DisplayClass41_0___ctor((ClassBoardController___c__DisplayClass41_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_38;
  *(_QWORD *)(v3 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  v4 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    goto LABEL_38;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)v4, 0LL);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.squareViewList,
                                                               (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
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
    _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__41_0,
      v16,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_ClassBoardLock__bool___ctor__);
    v17 = ClassBoardController___c_TypeInfo->static_fields;
    v17->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_B52920(
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
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
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
    _9__41_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__41_1,
      v29,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_ClassBoardLock__int___ctor__);
    v30 = ClassBoardController___c_TypeInfo->static_fields;
    v30->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_B52920(
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
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v3 + 16) = 0;
  v38 = v37;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v37,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v39 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v38,
            (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
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
      _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__41_2,
        v44,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        (const MethodInfo_2BCA808 *)Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__);
      v45 = ClassBoardController___c_TypeInfo->static_fields;
      v45->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_B52920(
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
                                                                 (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v53 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                      v52,
                                                                                      (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v53, 0LL);
  }
  effectController = this->fields.effectController;
  v55 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v55,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_38:
    sub_B52A5C(v4, v5);
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

  if ( (byte_42B3828 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__);
    sub_B52984(&ClassBoardController___c__DisplayClass43_0_TypeInfo);
    byte_42B3828 = 1;
  }
  v7 = sub_B52A54(ClassBoardController___c__DisplayClass43_0_TypeInfo);
  ClassBoardController___c__DisplayClass43_0___ctor((ClassBoardController___c__DisplayClass43_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)callback, v16, v17, v18, v19, v20, v21);
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
  v32 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_B52A5C(transform, v9);
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

  if ( (byte_42B3825 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__);
    sub_B52984(&ClassBoardController___c__DisplayClass40_0_TypeInfo);
    byte_42B3825 = 1;
  }
  v7 = sub_B52A54(ClassBoardController___c__DisplayClass40_0_TypeInfo);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endAct;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)endAct, v16, v17, v18, v19, v20, v21);
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
  v8 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)v8, 0LL),
        (v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList(v8, 0LL),
        effectController = this->fields.effectController,
        v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo),
        System_Action___ctor(
          v23,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_13:
    sub_B52A5C(v8, v9);
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

  if ( (byte_42B381C & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ClassBoardLine___ctor__);
    sub_B52984(&Method_System_Action_ClassBoardSquare___ctor__);
    sub_B52984(&System_Action_ClassBoardSquare__TypeInfo);
    sub_B52984(&System_Action_ClassBoardLine__TypeInfo);
    sub_B52984(&Method_BasicHelper_ExcludeNull_ClassBoardLine___);
    sub_B52984(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
    sub_B52984(&Method_BasicHelper_ForEach_ClassBoardLine___);
    sub_B52984(&Method_BasicHelper_ForEach_ClassBoardSquare___);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__Release_b__29_0__);
    sub_B52984(&Method_ClassBoardController___c__Release_b__29_1__);
    sub_B52984(&ClassBoardController___c_TypeInfo);
    byte_42B381C = 1;
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
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  v7 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
         (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
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
    _9__29_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_0,
      v11,
      Method_ClassBoardController___c__Release_b__29_0__,
      (const MethodInfo_2627780 *)Method_System_Action_ClassBoardSquare___ctor__);
    v12 = ClassBoardController___c_TypeInfo->static_fields;
    v12->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_B52920(
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
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = (UnityEngine_Component_o *)this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
  v19 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
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
    _9__29_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ClassBoardLine__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_1,
      v24,
      Method_ClassBoardController___c__Release_b__29_1__,
      (const MethodInfo_2627780 *)Method_System_Action_ClassBoardLine___ctor__);
    v25 = ClassBoardController___c_TypeInfo->static_fields;
    v25->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_B52920(
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
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  squareViewList = (UnityEngine_Component_o *)this->fields.lineViewList;
  if ( !squareViewList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
          (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ClassBoardLine__Clear__),
        this->fields.effectController = 0LL,
        sub_B52920((BattleServantConfConponent_o *)&this->fields.effectController, 0LL, v32, v33, v34, v35, v36, v37),
        this->fields.background = 0LL,
        sub_B52920((BattleServantConfConponent_o *)&this->fields.background, 0LL, v38, v39, v40, v41, v42, v43),
        (squareViewList = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                                       this,
                                                       this->klass->vtable._7_SetupClassBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_32:
    sub_B52A5C(squareViewList, v5);
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

  if ( (byte_42B381D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B381D = 1;
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
      sub_B52A5C(0LL, v7);
    *(_QWORD *)(v6 + 80) = action;
    sub_B52920((BattleServantConfConponent_o *)(v6 + 80), (System_Int32_array **)action, v8, v9, v10, v11, v12, v13);
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
  const MethodInfo_2175340 *v24; // x2
  BalanceConfig_c *v25; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  const MethodInfo *v28; // x1
  System_Action_o *v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  Il2CppObject *current; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v45; // x23
  ClassBoardEffectController_o *v46; // x24
  const MethodInfo *v47; // x5
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v55; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v58; // 0:x3.8
  System_Nullable_Vector3__o v59; // 0:x0.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B381B & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ClassBoardSquare___ctor__);
    sub_B52984(&System_Action_ClassBoardSquare__TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_ClassBoardController_ShowBoard__);
    sub_B52984(&ClassBoardEffectController_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    sub_B52984(&Method_System_Nullable_float___ctor__);
    sub_B52984(&Method_System_Nullable_Vector3___ctor__);
    byte_42B381B = 1;
  }
  memset(&v56, 0, sizeof(v56));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)setResourceCatalog,
    (System_String_array **)classBoardBackground,
    *(System_String_array ***)&baseId,
    *(System_Boolean_array ***)&iconId,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.background = classBoardBackground;
  sub_B52920(
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
  *(_QWORD *)&v59.fields.value.fields.x = &v55;
  *(_QWORD *)&v55.fields.value.fields.x = 0LL;
  *(_QWORD *)&v55.fields.value.fields.z = 0LL;
  *(_QWORD *)&v59.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v59, zero, v24);
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
    (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
  if ( !v23 )
    goto LABEL_24;
  v58 = size;
  MapCamera__StartAutoWork(v23, 0.0, v55, v58, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, v28);
  v29 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v29;
  sub_B52920(
    (BattleServantConfConponent_o *)&classBoardBackground->fields.showBoardCallback,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v36);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v37);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v38),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_24:
    sub_B52A5C(mapCamera, v19);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapCamera,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v56,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v56.fields.current;
    v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v40,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      (const MethodInfo_2627780 *)Method_System_Action_ClassBoardSquare___ctor__);
    if ( !current )
      sub_B52A5C(v41, v42);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v40, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v56,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v45 = this->fields.mapCamera;
  v46 = (ClassBoardEffectController_o *)sub_B52A54(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v46,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v45,
    classBoardBackground,
    v47);
  this->fields.effectController = v46;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.effectController,
    (System_Int32_array **)v46,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
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
  __int64 v3; // x3
  ClassBoardController_o *v4; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v11; // x20
  System_Action_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x20
  System_Action_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  Il2CppObject *v27; // x0
  System_String_o *v28; // x20
  MethodInfo *v29; // x21
  MethodInfo *v30; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  System_Int32_array *v32; // x20
  ClassBoardController_o *v33; // x19
  int32_t v34; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42B3823 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
    sub_B52984(&Method_ClassBoardController_OnClickEffectList__);
    sub_B52984(&Method_ClassBoardController_OnClickHelp__);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_19818/*"img_txt_classscore_{0}"*/);
    this = (ClassBoardController_o *)sub_B52984(&StringLiteral_3046/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_42B3823 = 1;
  }
  entity = 0LL;
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_30;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(v4->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v3);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                     resourceCatalog,
                                     *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_30;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v4,
                    (Il2CppObject *)this->fields._builder_k__BackingField,
                    v4->fields.uiRoot,
                    0LL,
                    (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, Il2CppMethodPointer))v4->klass->vtable._5_set_classBoardUIController.method)(
    v4,
    Object_object,
    v4->klass->vtable._6_get_builder.methodPtr);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                     v4,
                                     v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !this )
    goto LABEL_30;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0LL);
  v11 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v4, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v11 )
    goto LABEL_30;
  *(_QWORD *)(v11 + 88) = v12;
  sub_B52920((BattleServantConfConponent_o *)(v11 + 88), (System_Int32_array **)v12, v13, v14, v15, v16, v17, v18);
  v19 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v20 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v4, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v19 )
    goto LABEL_30;
  *(_QWORD *)(v19 + 96) = v20;
  sub_B52920((BattleServantConfConponent_o *)(v19 + 96), (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v34 = v4->fields.baseId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v28 = System_String__Format((System_String_o *)StringLiteral_19818/*"img_txt_classscore_{0}"*/, v27, 0LL);
  v29 = (MethodInfo *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                        v4,
                        v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(v29);
  if ( !v29 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderTitle((ClassBoardUIController_o *)v29, (AtlasManagerUnit_o *)this, v28, 0LL);
  v30 = (MethodInfo *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                        v4,
                        v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(v30);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3046/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v30 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderMessage(
    (ClassBoardUIController_o *)v30,
    UiAtlasManagerUnit,
    (System_String_o *)this,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_30;
  this = (ClassBoardController_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     &entity,
                                     v4->fields.baseId,
                                     (const MethodInfo_23E2334 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_30;
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&entity->fields.flag, 0LL) )
    return;
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                     v4,
                                     v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !entity
    || (v32 = *(System_Int32_array **)&entity->fields.flag,
        v33 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)this),
        !v33) )
  {
LABEL_30:
    sub_B52A5C(this, *(_QWORD *)&baseId);
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
  __int64 v21; // x3
  __int64 *v22; // x22
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  IClassBoardSquareModel_c **v25; // x11
  __int64 v26; // x0
  int v27; // w0
  System_Enum_o *v28; // x22
  __int64 v29; // x3
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

  if ( (byte_42B3824 & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ClassBoardLock_TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__);
    sub_B52984(&ClassBoardController___c__DisplayClass39_0_TypeInfo);
    byte_42B3824 = 1;
  }
  v5 = sub_B52A54(ClassBoardController___c__DisplayClass39_0_TypeInfo);
  ClassBoardController___c__DisplayClass39_0___ctor((ClassBoardController___c__DisplayClass39_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = square;
  v14 = (System_Enum_o **)(v5 + 32);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)square, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_30;
  v22 = *(__int64 **)(*(_QWORD *)(v5 + 32) + 168LL);
  if ( !v22 )
    goto LABEL_30;
  v23 = *v22;
  if ( *(_WORD *)(*v22 + 298) )
  {
    v24 = 0LL;
    v25 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v23 + 176) + 8LL);
    while ( *(v25 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v24;
      v25 += 2;
      if ( v24 >= *(unsigned __int16 *)(*v22 + 298) )
        goto LABEL_10;
    }
    v26 = v23 + 16LL * (*(_DWORD *)v25 + 13) + 312;
  }
  else
  {
LABEL_10:
    v26 = sub_AEB880(v22, IClassBoardSquareModel_TypeInfo, 13LL, v21);
  }
  v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v26)(v22, 0LL, *(_QWORD *)(v26 + 8));
  *(_DWORD *)(v5 + 16) = v27;
  v41 = v27;
  v28 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v41);
  v40 = 1;
  HasFlag = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v40);
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
    sub_B52A5C(HasFlag, v7);
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
    v36 = sub_AEB880(monitor, IClassBoardSquareModel_TypeInfo, 5LL, v29);
  }
  if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v36)(monitor, *(_QWORD *)(v36 + 8)) & 1) == 0 )
  {
    HasFlag = *v14;
    if ( *v14 )
    {
      ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)HasFlag, 1, 0LL);
      v37 = *(ClassBoardSquare_o **)(v5 + 32);
      v38 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_42B3829 & 1) == 0 )
  {
    sub_B52984(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
    byte_42B3829 = 1;
  }
  v3 = sub_B52A54(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__45___ctor((ClassBoardController__ShowBoardCoroutine_d__45_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
    sub_B52A5C(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B382B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B382B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                    this,
                                    this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_B52A5C(Instance, v4);
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
    sub_B52A5C(0LL, v3);
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
    sub_B52A5C(0LL, v3);
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
  sub_B52920(
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

  if ( (byte_42AD6C2 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    byte_42AD6C2 = 1;
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
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
        for ( i = v11;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields.current->klass->vtable[7].method)(
                i.fields.current,
                i.fields.current->klass->vtable[8].methodPtr) )
        {
          if ( !i.fields.current )
            sub_B52A5C(0LL, v5);
        }
        v12[0] = 124;
        v13 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
        v13 = 0;
        klass = (UnityEngine_Component_o *)_4__this[6].monitor;
        if ( klass )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v14,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
            (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v14,
                    (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
          {
            if ( !v14.fields.current )
              sub_B52A5C(0LL, v7);
            ClassBoardLine__PlayTransition((ClassBoardLine_o *)v14.fields.current, 0LL);
          }
          v12[0] = 175;
          v8 = ++v13;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v14,
            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
          if ( v8 && v12[v8 - 1] == 175 )
            v13 = v8 - 1;
          klass = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))_4__this->klass->vtable[4].method)(
                                               _4__this,
                                               _4__this->klass->vtable[5].methodPtr);
          if ( klass )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)klass, 1, 0LL);
            v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(v9, _4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
            EventTutorialMaster__CheckTutorial(0, 82, v9, 0, 0, 0, 0, 0LL);
            LOBYTE(klass) = 0;
            return (char)klass;
          }
        }
      }
LABEL_27:
      sub_B52A5C(klass, method);
    }
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B52920(p__2__current);
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

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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

  if ( (byte_42AD6B4 & 1) == 0 )
  {
    sub_B52984(&ClassBoardController___c_TypeInfo);
    byte_42AD6B4 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardController___c_o *)v1;
  sub_B52920(static_fields);
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
  __int64 v3; // x3
  IClassBoardLockModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  __int64 v11; // x3
  IClassBoardLockModel_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  System_Enum_o *v16; // x20
  __int64 v17; // x3
  IClassBoardLockModel_c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  System_Enum_o *v22; // x20
  __int64 v23; // x3
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

  if ( (byte_42AD6B9 & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42AD6B9 = 1;
  }
  v31 = 0;
  v30 = 0LL;
  if ( !x )
    goto LABEL_36;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(x, IClassBoardLockModel_TypeInfo, 0LL, v3);
  }
  v30 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v31 = v9;
  *(_QWORD *)&v34.fields.Type = &v30;
  v34.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v34, v10) )
    goto LABEL_27;
  v12 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    v14 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v13;
      v14 += 4;
      if ( v13 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v15 = (__int64)&v12->vtable[*v14 + 13].method;
  }
  else
  {
LABEL_15:
    v15 = sub_AEB880(x, IClassBoardSquareModel_TypeInfo, 13LL, v11);
  }
  v33 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v15)(x, 0LL, *(_QWORD *)(v15 + 8));
  v16 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33);
  v32 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32);
  if ( !v16 )
    goto LABEL_36;
  if ( System_Enum__HasFlag(v16, (System_Enum_o *)this, 0LL) )
  {
LABEL_27:
    v24 = 0;
    return v24 & 1;
  }
  v18 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v21 = (__int64)&v18->vtable[*v20 + 13].method;
  }
  else
  {
LABEL_23:
    v21 = sub_AEB880(x, IClassBoardSquareModel_TypeInfo, 13LL, v17);
  }
  v33 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v21)(x, 0LL, *(_QWORD *)(v21 + 8));
  v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33);
  v32 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32);
  if ( !v22 )
LABEL_36:
    sub_B52A5C(this, x);
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
    v29 = sub_AEB880(x, IClassBoardLockModel_TypeInfo, 1LL, v23);
  }
  v24 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v29)(x, *(_QWORD *)(v29 + 8)) ^ 1;
  return v24 & 1;
}


int32_t __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__42_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IClassBoardLockModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42AD6BA & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42AD6BA = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


bool __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x3
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v6; // x20
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 v9; // x0
  int v10; // w1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  ClassBoardController___c_c *v13; // x8
  ClassBoardController___c_o *v14; // x20
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  System_Enum_o *v18; // x20
  __int64 v19; // x3
  ClassBoardController___c_c *v20; // x8
  ClassBoardController___c_o *v21; // x20
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  System_Enum_o *v25; // x20
  char v26; // w8
  __int64 v28; // x3
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

  if ( (byte_42AD6B7 & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42AD6B7 = 1;
  }
  v35 = 0;
  v34 = 0LL;
  if ( !x )
    goto LABEL_40;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  klass = this->klass;
  v6 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_AEB880(this, IClassBoardLockModel_TypeInfo, 0LL, v4);
  }
  v34 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  v35 = v10;
  *(_QWORD *)&v38.fields.Type = &v34;
  v38.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v38, v11) )
    goto LABEL_30;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  v13 = this->klass;
  v14 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = &v13->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v17 = (__int64)(&v13[1]._1.methods + 2 * *v16);
  }
  else
  {
LABEL_17:
    v17 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 13LL, v12);
  }
  v37 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v17)(v14, 0LL, *(_QWORD *)(v17 + 8));
  v18 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v37);
  v36 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v36);
  if ( !v18 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v18, (System_Enum_o *)this, 0LL) )
  {
LABEL_30:
    v26 = 0;
    return v26 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  v20 = this->klass;
  v21 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v20->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v23 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v24 = (__int64)(&v20[1]._1.methods + 2 * *v23);
  }
  else
  {
LABEL_26:
    v24 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 13LL, v19);
  }
  v37 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v24)(v21, 0LL, *(_QWORD *)(v24 + 8));
  v25 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v37);
  v36 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v36);
  if ( !v25 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v25, (System_Enum_o *)this, 0LL) )
    goto LABEL_30;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_40:
    sub_B52A5C(this, x);
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
    v33 = sub_AEB880(this, IClassBoardLockModel_TypeInfo, 1LL, v28);
  }
  v26 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8)) ^ 1;
  return v26 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x3
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v6; // x19
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 v9; // x0

  if ( (byte_42AD6B8 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B52984(&IClassBoardSquareModel_TypeInfo);
    byte_42AD6B8 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_B52A5C(this, x);
  klass = this->klass;
  v6 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_AEB880(this, IClassBoardSquareModel_TypeInfo, 0LL, v4);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AD6B5 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD6B5 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42AD6B6 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD6B6 = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
  System_Enum_o *v3; // x20
  __int64 HasFlag; // x0
  __int64 v5; // x1
  __int64 v6; // x3
  BaseMonoBehaviour_o *_4__this; // x20
  __int64 *monitor; // x21
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  int *v11; // x11
  __int64 v12; // x0
  System_Enum_o *v13; // x20
  __int64 v14; // x3
  BaseMonoBehaviour_o *v15; // x20
  __int64 *v16; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  System_Enum_o *v21; // x20
  __int64 v22; // x3
  BaseMonoBehaviour_o *v23; // x20
  __int64 *v24; // x21
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  struct ClassBoardController_o *v29; // x8
  ClassBoardSquareDetailDialog_o *v30; // x20
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  System_Enum_o *v33; // x20
  __int64 v34; // x3
  BaseMonoBehaviour_o *v35; // x20
  __int64 *v36; // x21
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  struct ClassBoardController_o *v41; // x8
  ClassBoardDisableOpenDialog_o *v42; // x20
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v44; // x21
  System_Enum_o *v45; // x20
  __int64 v46; // x3
  BaseMonoBehaviour_o *v47; // x20
  __int64 *v48; // x21
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  struct ClassBoardController_o *v53; // x8
  ClassBoardLockReleaseConditionDialog_o *v54; // x20
  System_Action_o *_9__3; // x22
  ClassBoardSquare_o *v56; // x21
  struct ClassBoardSquare_o *v57; // x8
  __int64 v58; // x11
  struct ClassBoardSquare_o *v59; // x22
  struct ClassBoardController_o *v60; // x8
  ClassBoardLockOpenConfirmDialog_o *v61; // x20
  struct ClassBoardSquare_o *v62; // x21
  ClassBoardController___c_c *v63; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v66; // x23
  struct ClassBoardController___c_StaticFields *v67; // x0
  System_Action_o *_9__5; // x23
  ClassBoardLockOpenConfirmDialog_o *v69; // x0
  ClassBoardSquare_o *v70; // x1
  bool v71; // w2
  struct ClassBoardController_o *v72; // x8
  ClassBoardSquareOpenConfirmDialog_o *v73; // x20
  struct ClassBoardSquare_o *v74; // x21
  ClassBoardController___c_c *v75; // x0
  struct ClassBoardController___c_StaticFields *v76; // x8
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v78; // x23
  struct ClassBoardController___c_StaticFields *v79; // x0
  System_Action_o *_9__7; // x23
  ClassBoardSquareOpenConfirmDialog_o *v81; // x0
  ClassBoardSquare_o *v82; // x1
  bool v83; // w2
  BaseMonoBehaviour_o *v84; // x20
  __int64 *v85; // x21
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  struct ClassBoardController_o *v90; // x8
  ClassBoardLockOpenConfirmDialog_o *v91; // x20
  struct ClassBoardSquare_o *v92; // x21
  ClassBoardSquareOpenConfirmDialog_o *v93; // x20
  struct ClassBoardSquare_o *v94; // x21
  int v95; // [xsp+8h] [xbp-38h] BYREF
  int32_t acquireFlag; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42AD6BB & 1) == 0 )
  {
    sub_B52984(&AcquireFlag_TypeInfo);
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_B52984(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_B52984(&ClassBoardLock_TypeInfo);
    sub_B52984(&IClassBoardResourceCatalog_TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__);
    sub_B52984(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__);
    sub_B52984(&ClassBoardController___c_TypeInfo);
    byte_42AD6BB = 1;
  }
  acquireFlag = this->fields.acquireFlag;
  v3 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v95 = 1;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v95);
  if ( !v3 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v3, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) != 0 )
  {
    _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      monitor = (__int64 *)_4__this[3].monitor;
      if ( monitor )
      {
        v9 = *monitor;
        if ( *(_WORD *)(*monitor + 298) )
        {
          v10 = 0LL;
          v11 = (int *)(*(_QWORD *)(v9 + 176) + 8LL);
          while ( *((IClassBoardResourceCatalog_c **)v11 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v10;
            v11 += 4;
            if ( v10 >= *(unsigned __int16 *)(*monitor + 298) )
              goto LABEL_11;
          }
          v12 = v9 + 16LL * *v11 + 312;
        }
        else
        {
LABEL_11:
          v12 = sub_AEB880(_4__this[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v6);
        }
        HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v12)(monitor, *(_QWORD *)(v12 + 8));
        if ( HasFlag )
        {
          v29 = this->fields.__4__this;
          if ( v29 )
          {
            HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                                 _4__this,
                                 *(Il2CppObject **)(HasFlag + 80),
                                 v29->fields.uiRoot,
                                 0LL,
                                 (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
            if ( HasFlag )
            {
              v30 = (ClassBoardSquareDetailDialog_o *)HasFlag;
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
                    _9__1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                    System_Action___ctor(
                      _9__1,
                      (Il2CppObject *)this,
                      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
                      0LL);
                    this->fields.__9__1 = _9__1;
                    sub_B52920(&this->fields.__9__1);
                  }
                  ClassBoardSquareDetailDialog__Open(v30, square, _9__1, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_146:
    sub_B52A5C(HasFlag, v5);
  }
  acquireFlag = this->fields.acquireFlag;
  v13 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v95 = 2;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v95);
  if ( !v13 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v13, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) != 0 )
  {
    v15 = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( !v15 )
      goto LABEL_146;
    v16 = (__int64 *)v15[3].monitor;
    if ( !v16 )
      goto LABEL_146;
    v17 = *v16;
    if ( *(_WORD *)(*v16 + 298) )
    {
      v18 = 0LL;
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v19 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)(*v16 + 298) )
          goto LABEL_20;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_20:
      v20 = sub_AEB880(v15[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v14);
    }
    HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
    if ( !HasFlag )
      goto LABEL_146;
    v41 = this->fields.__4__this;
    if ( !v41 )
      goto LABEL_146;
    HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                         v15,
                         *(Il2CppObject **)(HasFlag + 48),
                         v41->fields.uiRoot,
                         0LL,
                         (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !HasFlag )
      goto LABEL_146;
    v42 = (ClassBoardDisableOpenDialog_o *)HasFlag;
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
    v44 = this->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B52920(&this->fields.__9__2);
    }
    ClassBoardDisableOpenDialog__Open(v42, v44, _9__2, 0LL);
    return;
  }
  acquireFlag = this->fields.acquireFlag;
  v21 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v95 = 4;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v95);
  if ( !v21 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v21, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) == 0 )
  {
    acquireFlag = this->fields.acquireFlag;
    v33 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v95 = 16;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v95);
    if ( !v33 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v33, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v35 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v35 )
        goto LABEL_146;
      v36 = (__int64 *)v35[3].monitor;
      if ( !v36 )
        goto LABEL_146;
      v37 = *v36;
      if ( *(_WORD *)(*v36 + 298) )
      {
        v38 = 0LL;
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v39 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)(*v36 + 298) )
            goto LABEL_47;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_47:
        v40 = sub_AEB880(v35[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v34);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v60 = this->fields.__4__this;
      if ( !v60 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v35,
                           *(Il2CppObject **)(HasFlag + 64),
                           v60->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v61 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
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
      v62 = this->fields.square;
      v63 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v63 = ClassBoardController___c_TypeInfo;
      }
      static_fields = v63->static_fields;
      _9__39_4 = static_fields->__9__39_4;
      if ( !_9__39_4 )
      {
        if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v63);
          static_fields = ClassBoardController___c_TypeInfo->static_fields;
        }
        v66 = (Il2CppObject *)static_fields->__9;
        _9__39_4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(_9__39_4, v66, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, 0LL);
        v67 = ClassBoardController___c_TypeInfo->static_fields;
        v67->__9__39_4 = _9__39_4;
        sub_B52920(&v67->__9__39_4);
      }
      _9__5 = this->fields.__9__5;
      if ( !_9__5 )
      {
        _9__5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          _9__5,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
          0LL);
        this->fields.__9__5 = _9__5;
        sub_B52920(&this->fields.__9__5);
      }
      v69 = v61;
      v70 = v62;
      v71 = 0;
LABEL_134:
      ClassBoardLockOpenConfirmDialog__Open(v69, v70, v71, _9__39_4, _9__5, 0LL);
      return;
    }
    acquireFlag = this->fields.acquireFlag;
    v45 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v95 = 8;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v95);
    if ( !v45 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v45, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v47 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v47 )
        goto LABEL_146;
      v48 = (__int64 *)v47[3].monitor;
      if ( !v48 )
        goto LABEL_146;
      v49 = *v48;
      if ( *(_WORD *)(*v48 + 298) )
      {
        v50 = 0LL;
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v51 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v50;
          v51 += 4;
          if ( v50 >= *(unsigned __int16 *)(*v48 + 298) )
            goto LABEL_65;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_65:
        v52 = sub_AEB880(v47[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v46);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v72 = this->fields.__4__this;
      if ( !v72 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v47,
                           *(Il2CppObject **)(HasFlag + 56),
                           v72->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v73 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
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
      v74 = this->fields.square;
      v75 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v75 = ClassBoardController___c_TypeInfo;
      }
      v76 = v75->static_fields;
      _9__39_6 = v76->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v75);
          v76 = ClassBoardController___c_TypeInfo->static_fields;
        }
        v78 = (Il2CppObject *)v76->__9;
        _9__39_6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(_9__39_6, v78, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v79 = ClassBoardController___c_TypeInfo->static_fields;
        v79->__9__39_6 = _9__39_6;
        sub_B52920(&v79->__9__39_6);
      }
      _9__7 = this->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        this->fields.__9__7 = _9__7;
        sub_B52920(&this->fields.__9__7);
      }
      v81 = v73;
      v82 = v74;
      v83 = 0;
    }
    else
    {
      v57 = this->fields.square;
      if ( v57
        && (v58 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1), *(&v57->klass->_2.bitflags2 + 1) >= (unsigned int)v58) )
      {
        if ( (ClassBoardLock_c *)v57->klass->_2.typeHierarchy[v58 - 1] == ClassBoardLock_TypeInfo )
          v59 = this->fields.square;
        else
          v59 = 0LL;
      }
      else
      {
        v59 = 0LL;
      }
      v84 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v84 )
        goto LABEL_146;
      v85 = (__int64 *)v84[3].monitor;
      if ( !v85 )
        goto LABEL_146;
      v86 = *v85;
      if ( *(_WORD *)(*v85 + 298) )
      {
        v87 = 0LL;
        v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v88 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v87;
          v88 += 4;
          if ( v87 >= *(unsigned __int16 *)(*v85 + 298) )
            goto LABEL_121;
        }
        v89 = v86 + 16LL * *v88 + 312;
      }
      else
      {
LABEL_121:
        v89 = sub_AEB880(v84[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v46);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v89)(v85, *(_QWORD *)(v89 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v90 = this->fields.__4__this;
      if ( v59 )
      {
        if ( !v90 )
          goto LABEL_146;
        HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                             v84,
                             *(Il2CppObject **)(HasFlag + 64),
                             v90->fields.uiRoot,
                             0LL,
                             (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( !HasFlag )
          goto LABEL_146;
        v91 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
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
        v92 = this->fields.square;
        if ( !_9__39_4 )
        {
          _9__39_4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            _9__39_4,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
            0LL);
          this->fields.__9__8 = _9__39_4;
          sub_B52920(&this->fields.__9__8);
        }
        _9__5 = this->fields.__9__9;
        if ( !_9__5 )
        {
          _9__5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            _9__5,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
            0LL);
          this->fields.__9__9 = _9__5;
          sub_B52920(&this->fields.__9__9);
        }
        v71 = 1;
        v69 = v91;
        v70 = v92;
        goto LABEL_134;
      }
      if ( !v90 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v84,
                           *(Il2CppObject **)(HasFlag + 56),
                           v90->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v93 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
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
      v94 = this->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        this->fields.__9__12 = _9__39_6;
        sub_B52920(&this->fields.__9__12);
      }
      _9__7 = this->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        this->fields.__9__13 = _9__7;
        sub_B52920(&this->fields.__9__13);
      }
      v83 = 1;
      v81 = v93;
      v82 = v94;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v81, v82, v83, _9__39_6, _9__7, 0LL);
    return;
  }
  v23 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v23 )
    goto LABEL_146;
  v24 = (__int64 *)v23[3].monitor;
  if ( !v24 )
    goto LABEL_146;
  v25 = *v24;
  if ( *(_WORD *)(*v24 + 298) )
  {
    v26 = 0LL;
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((IClassBoardResourceCatalog_c **)v27 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v26;
      v27 += 4;
      if ( v26 >= *(unsigned __int16 *)(*v24 + 298) )
        goto LABEL_29;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_29:
    v28 = sub_AEB880(v23[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v22);
  }
  HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
  if ( !HasFlag )
    goto LABEL_146;
  v53 = this->fields.__4__this;
  if ( !v53 )
    goto LABEL_146;
  HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                       v23,
                       *(Il2CppObject **)(HasFlag + 72),
                       v53->fields.uiRoot,
                       0LL,
                       (const MethodInfo_1A4161C *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
  if ( !HasFlag )
    goto LABEL_146;
  v54 = (ClassBoardLockReleaseConditionDialog_o *)HasFlag;
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
  v56 = this->fields.square;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B52920(&this->fields.__9__3);
  }
  ClassBoardLockReleaseConditionDialog__Open(v54, v56, 0, _9__3, 0LL);
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
    sub_B52A5C(_4__this, method);
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
  if ( (byte_42AD6BD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__);
    byte_42AD6BD = 1;
  }
  klass = (System_Action_o *)v3[5].klass;
  monitor = (ClassBoardController_o *)v3[1].monitor;
  v6 = (ClassBoardSquare_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v3[5].klass = (Il2CppClass *)klass;
    sub_B52920(&v3[5]);
  }
  if ( !monitor )
    sub_B52A5C(this, _);
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
    sub_B52A5C(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  Il2CppObject *v3; // x19
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v6; // x8
  unsigned __int64 v7; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v9; // x0
  __int64 v10; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass39_0_o *v12; // x20
  ClassBoardController___c__DisplayClass39_0_c *v13; // x8
  unsigned __int64 v14; // x10
  IClassBoardSquareUser_c **v15; // x11
  __int64 v16; // x0

  v3 = (Il2CppObject *)this;
  if ( (byte_42AD6BE & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_IClassBoardSquareUser___ctor__);
    sub_B52984(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__);
    byte_42AD6BE = 1;
  }
  klass = v3[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v6 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v6->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 2;
      if ( v7 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v9 = (__int64)&(&v6->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v9 = sub_AEB880(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL, v2);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v9)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v9 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v3[7].monitor;
  v12 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      (const MethodInfo_2627780 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v3[7].monitor = monitor;
    sub_B52920(&v3[7].monitor);
  }
  if ( !v12 )
LABEL_21:
    sub_B52A5C(this, method);
  v13 = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = (IClassBoardSquareUser_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v16 = (__int64)(&v13->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v15);
  }
  else
  {
LABEL_18:
    v16 = sub_AEB880(v12, IClassBoardSquareUser_TypeInfo, 2LL, v10);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))v16)(
    v12,
    monitor,
    *(_QWORD *)(v16 + 8));
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
    sub_B52A5C(_4__this, method);
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
  if ( (byte_42AD6BF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__);
    byte_42AD6BF = 1;
  }
  klass = (System_Action_o *)v3[7].klass;
  monitor = (ClassBoardController_o *)v3[1].monitor;
  v6 = (ClassBoardSquare_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v3[7].klass = (Il2CppClass *)klass;
    sub_B52920(&v3[7]);
  }
  if ( !monitor )
    sub_B52A5C(this, _);
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
    sub_B52A5C(_4__this, method);
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
    sub_B52A5C(_4__this, method);
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
    sub_B52A5C(_4__this, method);
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
    sub_B52A5C(_4__this, method);
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
    sub_B52A5C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  Il2CppObject *v3; // x19
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v6; // x8
  unsigned __int64 v7; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v9; // x0
  __int64 v10; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass39_0_o *v12; // x20
  ClassBoardController___c__DisplayClass39_0_c *v13; // x8
  unsigned __int64 v14; // x10
  IClassBoardSquareUser_c **v15; // x11
  __int64 v16; // x0

  v3 = (Il2CppObject *)this;
  if ( (byte_42AD6BC & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_IClassBoardSquareUser___ctor__);
    sub_B52984(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_B52984(&IClassBoardSquareModel_TypeInfo);
    sub_B52984(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B52984(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__);
    byte_42AD6BC = 1;
  }
  klass = v3[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v6 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v6->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 2;
      if ( v7 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v9 = (__int64)&(&v6->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v9 = sub_AEB880(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL, v2);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v9)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v9 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v3[5].monitor;
  v12 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v3,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      (const MethodInfo_2627780 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v3[5].monitor = monitor;
    sub_B52920(&v3[5].monitor);
  }
  if ( !v12 )
LABEL_21:
    sub_B52A5C(this, method);
  v13 = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    v15 = (IClassBoardSquareUser_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v14;
      v15 += 2;
      if ( v14 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v16 = (__int64)(&v13->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v15);
  }
  else
  {
LABEL_18:
    v16 = sub_AEB880(v12, IClassBoardSquareUser_TypeInfo, 2LL, v10);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))v16)(
    v12,
    monitor,
    *(_QWORD *)(v16 + 8));
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
    sub_B52A5C(_4__this, method);
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

  if ( (byte_42AD6C0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ClassBoardLine___ctor__);
    sub_B52984(&Method_System_Action_ClassBoardSquare___ctor__);
    sub_B52984(&System_Action_ClassBoardSquare__TypeInfo);
    sub_B52984(&System_Action_ClassBoardLine__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
    sub_B52984(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__);
    sub_B52984(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__);
    sub_B52984(&ClassBoardController___c_TypeInfo);
    byte_42AD6C0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    _9__40_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__40_1,
      v9,
      Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__,
      (const MethodInfo_2627780 *)Method_System_Action_ClassBoardSquare___ctor__);
    v10 = ClassBoardController___c_TypeInfo->static_fields;
    v10->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)_9__40_1;
    sub_B52920(&v10->__9__40_1);
  }
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    squareViewList,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
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
    _9__40_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_ClassBoardLine__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__40_2,
      v15,
      Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__,
      (const MethodInfo_2627780 *)Method_System_Action_ClassBoardLine___ctor__);
    v16 = ClassBoardController___c_TypeInfo->static_fields;
    v16->__9__40_2 = (struct System_Action_ClassBoardLine__o *)_9__40_2;
    sub_B52920(&v16->__9__40_2);
  }
  if ( !lineViewList )
LABEL_32:
    sub_B52A5C(_4__this, v4);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    lineViewList,
    (System_Action_T__o *)_9__40_2,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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

  if ( (byte_42AD6C1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__);
    byte_42AD6C1 = 1;
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
      _9__4 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B52920(&this->fields.__9__4);
    }
    if ( v5 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v5, _9__4, 0LL);
      goto LABEL_13;
    }
LABEL_18:
    sub_B52A5C(_4__this, method);
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
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_B52A5C(_4__this, method);
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
    sub_B52A5C(_4__this, method);
  }
  System_Action__Invoke((System_Action_o *)_4__this, 0LL);
}