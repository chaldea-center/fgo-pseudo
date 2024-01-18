void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardModelBuilder_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4187D60 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardModelBuilder_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v6);
    byte_4187D60 = 1;
  }
  v7 = (ClassBoardModelBuilder_o *)sub_B2C42C(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v7, 0LL);
  this->fields._builder_k__BackingField = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._builder_k__BackingField,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.squareViewList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v21;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  ClassBoardUIController_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  ClassBoardController___c_c *v30; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__39_0; // x21
  Il2CppObject *v33; // x22
  struct ClassBoardController___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  ClassBoardController___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  struct ClassBoardController___c_StaticFields *v44; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__39_1; // x21
  Il2CppObject *v46; // x22
  struct ClassBoardController___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x20
  ClassBoardUIController_o *v55; // x21
  System_Action_o *v56; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v57; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187D5D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, squareModel);
    sub_B2C35C(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__39_2__, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v10);
    sub_B2C35C(&Method_System_Func_IClassBoardLockModel__int___ctor__, v11);
    sub_B2C35C(&Method_System_Func_IClassBoardLockModel__bool___ctor__, v12);
    sub_B2C35C(&System_Func_IClassBoardLockModel__bool__TypeInfo, v13);
    sub_B2C35C(&System_Func_IClassBoardLockModel__int__TypeInfo, v14);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v17);
    sub_B2C35C(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_0__, v18);
    sub_B2C35C(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_1__, v19);
    sub_B2C35C(&ClassBoardController___c_TypeInfo, v20);
    byte_4187D5D = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v21;
  if ( !squareModel )
    goto LABEL_31;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(squareModel, IClassBoardSquareModel_TypeInfo, 15LL, v24);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               source,
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v30 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v30 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__39_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__39_0,
      v33,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_IClassBoardLockModel__bool___ctor__);
    v34 = ClassBoardController___c_TypeInfo->static_fields;
    v34->__9__39_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__39_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v34->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v29,
          (System_Func_TSource__bool__o *)_9__39_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v42 = ClassBoardController___c_TypeInfo;
  v43 = v41;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v42 = ClassBoardController___c_TypeInfo;
  }
  v44 = v42->static_fields;
  _9__39_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v44->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v44 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__39_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__39_1,
      v46,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_IClassBoardLockModel__int___ctor__);
    v47 = ClassBoardController___c_TypeInfo->static_fields;
    v47->__9__39_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__39_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v47->__9__39_1,
      (System_Int32_array **)_9__39_1,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v43,
                                                               (System_Func_TSource__TKey__o *)_9__39_1,
                                                               (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v54,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v22 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v22 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v22, 1, 0LL);
      v55 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v56 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v56,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__39_2__,
        0LL);
      if ( v55 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v55, v56, 0LL);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_B2C434(v22, v23);
  }
LABEL_30:
  v57 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                    v54,
                                                                                    (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v57, 0LL);
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
  unsigned __int64 v12; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x21
  Il2CppObject *v16; // x0

  v6 = this;
  if ( (byte_4187D58 & 1) == 0 )
  {
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab);
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v8);
    this = (ClassBoardController_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4187D58 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_B2C434(this, defaultPrefab);
    klass = resourceCatalog->klass;
    if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v12;
        p_offset += 2;
        if ( v12 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL, method);
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
                      (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
  return (ClassBoardSquare_o *)Object_object;
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
  __int64 v16; // x3
  __int64 *v17; // x20
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  IClassBoardSquareModel_o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v43; // x8
  unsigned __int64 v44; // x10
  IClassBoardSquareModel_c **v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x3
  IClassBoardSquareModel_c *v50; // x8
  ClassBoardSquare_o *v51; // x22
  IClassBoardSquareModel_c *v52; // x1
  unsigned __int64 v53; // x10
  IClassBoardSquareModel_c **v54; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 v58; // x3
  struct IClassBoardResourceCatalog_o *v59; // x22
  IClassBoardResourceCatalog_c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  IClassBoardResourceCatalog_c *v64; // x8
  unsigned __int64 v65; // x10
  int32_t *v66; // x11
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  IClassBoardSquareModel_c *v70; // x8
  unsigned __int64 v71; // x10
  IClassBoardSquareModel_c **v72; // x11
  __int64 v73; // x0
  __int64 v74; // x1
  IClassBoardSquareModel_c *v75; // x8
  unsigned __int64 v76; // x10
  IClassBoardSquareModel_c **v77; // x11
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  ClassBoardSquare_o *v80; // x0
  __int64 v81; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v82; // x22
  __int64 v83; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x0
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  __int64 v89; // x3
  __int64 *v90; // x20
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  int *v93; // x11
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x3
  __int64 v97; // x20
  __int64 v98; // x8
  unsigned __int64 v99; // x10
  int *v100; // x11
  __int64 v101; // x0
  __int64 v102; // x3
  __int64 v103; // x8
  unsigned __int64 v104; // x10
  int *v105; // x11
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x3
  struct IClassBoardResourceCatalog_o *v110; // x22
  IClassBoardResourceCatalog_c *v111; // x8
  IClassBoardLineModel_o *v112; // x21
  unsigned __int64 v113; // x10
  int32_t *v114; // x11
  __int64 v115; // x0
  __int64 v116; // x0
  __int64 v117; // x1
  Il2CppObject *Object_object; // x0
  __int64 v119; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v120; // x22
  __int64 v121; // x1
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x0
  int v123; // w23
  __int64 v124; // x8
  unsigned __int64 v125; // x10
  int *v126; // x11
  __int64 v127; // x0
  int v128[2]; // [xsp+0h] [xbp-60h]
  int v129; // [xsp+8h] [xbp-58h]

  if ( (byte_4187D57 & 1) == 0 )
  {
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, method);
    sub_B2C35C(&IClassBoardLockModel_TypeInfo, v3);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v13);
    byte_4187D57 = 1;
  }
  v129 = 0;
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 )
    goto LABEL_143;
  v17 = *(__int64 **)(v14 + 24);
  if ( !v17 )
    goto LABEL_143;
  v18 = *v17;
  if ( *(_WORD *)(*v17 + 298) )
  {
    v19 = 0LL;
    v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v20 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)(*v17 + 298) )
        goto LABEL_9;
    }
    v21 = v18 + 16LL * *v20 + 312;
  }
  else
  {
LABEL_9:
    v21 = sub_AC5258(
            *(_QWORD *)(v14 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL,
            v16);
  }
  v24 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8));
  if ( !v24 )
    sub_B2C434(0LL, v22);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_16;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_16:
      v28 = sub_AC5258(v24, System_Collections_IEnumerator_TypeInfo, 0LL, v23);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v32 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_23;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_23:
      v33 = sub_AC5258(v24, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL, v29);
    }
    v34 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
    v35 = sub_B2C41C(v34, IClassBoardLockModel_TypeInfo);
    if ( v35 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_B2C434(v35, v36);
      klass = resourceCatalog->klass;
      if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
      {
        v40 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v40;
          p_offset += 4;
          if ( v40 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_AC5258(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v37);
      }
      v47 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v47 )
        sub_B2C434(0LL, v48);
      if ( !v34 )
        sub_B2C434(v47, v48);
      v50 = v34->klass;
      v51 = *(ClassBoardSquare_o **)(v47 + 32);
      v52 = IClassBoardSquareModel_TypeInfo;
      if ( !*(_WORD *)&v34->klass->_2.bitflags1 )
        goto LABEL_67;
      v53 = 0LL;
      v54 = (IClassBoardSquareModel_c **)&v50->_1.interfaceOffsets->offset;
      while ( *(v54 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v53;
        v54 += 2;
        if ( v53 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v55 = (__int64)&v50->vtable[*(_DWORD *)v54 + 10].method;
    }
    else
    {
      if ( !v34 )
        sub_B2C434(0LL, v36);
      v43 = v34->klass;
      if ( *(_WORD *)&v34->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        v45 = (IClassBoardSquareModel_c **)&v43->_1.interfaceOffsets->offset;
        while ( *(v45 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v44;
          v45 += 2;
          if ( v44 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
            goto LABEL_37;
        }
        v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 5].method;
      }
      else
      {
LABEL_37:
        v46 = sub_AC5258(v34, IClassBoardSquareModel_TypeInfo, 5LL, v37);
      }
      v56 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v46)(v34, *(_QWORD *)(v46 + 8));
      v59 = this->fields.resourceCatalog;
      if ( (v56 & 1) != 0 )
      {
        if ( !v59 )
          sub_B2C434(v56, v57);
        v60 = v59->klass;
        if ( *(_WORD *)&v59->klass->_2.bitflags1 )
        {
          v61 = 0LL;
          v62 = &v60->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v62 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v61;
            v62 += 4;
            if ( v61 >= *(unsigned __int16 *)&v59->klass->_2.bitflags1 )
              goto LABEL_54;
          }
          v63 = (__int64)&v60->vtable[*v62].method;
        }
        else
        {
LABEL_54:
          v63 = sub_AC5258(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v58);
        }
        v68 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
        if ( !v68 )
          sub_B2C434(0LL, v69);
        v70 = v34->klass;
        v51 = *(ClassBoardSquare_o **)(v68 + 40);
        v52 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v34->klass->_2.bitflags1 )
          goto LABEL_67;
        v71 = 0LL;
        v72 = (IClassBoardSquareModel_c **)&v70->_1.interfaceOffsets->offset;
        while ( *(v72 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v71;
          v72 += 2;
          if ( v71 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v55 = (__int64)&v70->vtable[*(_DWORD *)v72 + 10].method;
      }
      else
      {
        if ( !v59 )
          sub_B2C434(v56, v57);
        v64 = v59->klass;
        if ( *(_WORD *)&v59->klass->_2.bitflags1 )
        {
          v65 = 0LL;
          v66 = &v64->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v66 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v65;
            v66 += 4;
            if ( v65 >= *(unsigned __int16 *)&v59->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v67 = (__int64)&v64->vtable[*v66].method;
        }
        else
        {
LABEL_60:
          v67 = sub_AC5258(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v58);
        }
        v73 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v67)(v59, *(_QWORD *)(v67 + 8));
        if ( !v73 )
          sub_B2C434(0LL, v74);
        v75 = v34->klass;
        v51 = *(ClassBoardSquare_o **)(v73 + 16);
        v52 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v34->klass->_2.bitflags1 )
        {
LABEL_67:
          v55 = sub_AC5258(v34, v52, 10LL, v49);
          goto LABEL_77;
        }
        v76 = 0LL;
        v77 = (IClassBoardSquareModel_c **)&v75->_1.interfaceOffsets->offset;
        while ( *(v77 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v76;
          v77 += 2;
          if ( v76 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v55 = (__int64)&v75->vtable[*(_DWORD *)v77 + 10].method;
      }
    }
LABEL_77:
    v78 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v55)(v34, *(_QWORD *)(v55 + 8));
    v80 = ClassBoardController__CloneSquareObject(this, v51, v78, v79);
    v82 = (EventMissionProgressRequest_Argument_ProgressData_o *)v80;
    if ( !v80 )
      sub_B2C434(0LL, v81);
    ClassBoardSquare__Setup(v80, v34, 0LL);
    squareViewList = this->fields.squareViewList;
    if ( !squareViewList )
      sub_B2C434(0LL, v83);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareViewList,
      v82,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
  }
  v128[0] = 180;
  v129 = 1;
  v85 = *(_QWORD *)v24;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v86 = 0LL;
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      ++v86;
      v87 += 4;
      if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_84;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_84:
    v88 = sub_AC5258(v24, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v88)(v24, *(_QWORD *)(v88 + 8));
  v129 = 0;
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 || (v90 = *(__int64 **)(v14 + 16)) == 0LL )
LABEL_143:
    sub_B2C434(v14, v15);
  v91 = *v90;
  if ( *(_WORD *)(*v90 + 298) )
  {
    v92 = 0LL;
    v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v93 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v92;
      v93 += 4;
      if ( v92 >= *(unsigned __int16 *)(*v90 + 298) )
        goto LABEL_92;
    }
    v94 = v91 + 16LL * *v93 + 312;
  }
  else
  {
LABEL_92:
    v94 = sub_AC5258(
            *(_QWORD *)(v14 + 16),
            System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo,
            0LL,
            v89);
  }
  v97 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v94)(v90, *(_QWORD *)(v94 + 8));
  if ( !v97 )
    sub_B2C434(0LL, v95);
  while ( 1 )
  {
    v98 = *(_QWORD *)v97;
    if ( *(_WORD *)(*(_QWORD *)v97 + 298LL) )
    {
      v99 = 0LL;
      v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v100 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v99;
        v100 += 4;
        if ( v99 >= *(unsigned __int16 *)(*(_QWORD *)v97 + 298LL) )
          goto LABEL_99;
      }
      v101 = v98 + 16LL * *v100 + 312;
    }
    else
    {
LABEL_99:
      v101 = sub_AC5258(v97, System_Collections_IEnumerator_TypeInfo, 0LL, v96);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8)) & 1) == 0 )
      break;
    v103 = *(_QWORD *)v97;
    if ( *(_WORD *)(*(_QWORD *)v97 + 298LL) )
    {
      v104 = 0LL;
      v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v105 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v104;
        v105 += 4;
        if ( v104 >= *(unsigned __int16 *)(*(_QWORD *)v97 + 298LL) )
          goto LABEL_106;
      }
      v106 = v103 + 16LL * *v105 + 312;
    }
    else
    {
LABEL_106:
      v106 = sub_AC5258(v97, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v102);
    }
    v107 = (*(__int64 (__fastcall **)(__int64, _QWORD))v106)(v97, *(_QWORD *)(v106 + 8));
    v110 = this->fields.resourceCatalog;
    if ( !v110 )
      sub_B2C434(v107, v108);
    v111 = v110->klass;
    v112 = (IClassBoardLineModel_o *)v107;
    if ( *(_WORD *)&v110->klass->_2.bitflags1 )
    {
      v113 = 0LL;
      v114 = &v111->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v114 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v113;
        v114 += 4;
        if ( v113 >= *(unsigned __int16 *)&v110->klass->_2.bitflags1 )
          goto LABEL_113;
      }
      v115 = (__int64)&v111->vtable[*v114].method;
    }
    else
    {
LABEL_113:
      v115 = sub_AC5258(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v109);
    }
    v116 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v115)(v110, *(_QWORD *)(v115 + 8));
    if ( !v116 )
      sub_B2C434(0LL, v117);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v116 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v120 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object;
    if ( !Object_object )
      sub_B2C434(0LL, v119);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v112, 0LL);
    lineViewList = this->fields.lineViewList;
    if ( !lineViewList )
      sub_B2C434(0LL, v121);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineViewList,
      v120,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardLine__Add__);
  }
  v128[0] = 280;
  v123 = ++v129;
  v124 = *(_QWORD *)v97;
  if ( *(_WORD *)(*(_QWORD *)v97 + 298LL) )
  {
    v125 = 0LL;
    v126 = (int *)(*(_QWORD *)(v124 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v126 - 1) != System_IDisposable_TypeInfo )
    {
      ++v125;
      v126 += 4;
      if ( v125 >= *(unsigned __int16 *)(*(_QWORD *)v97 + 298LL) )
        goto LABEL_123;
    }
    v127 = v124 + 16LL * *v126 + 312;
  }
  else
  {
LABEL_123:
    v127 = sub_AC5258(v97, System_IDisposable_TypeInfo, 0LL, v102);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v127)(v97, *(_QWORD *)(v127 + 8));
  if ( v123 && v128[v123 - 1] == 280 )
    v129 = v123 - 1;
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  WebViewManager_o *v9; // x0
  int32_t baseId; // w20
  CommonUI_o *v11; // x21
  System_Action_o *v12; // x22

  if ( (byte_4187D55 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardController__OnClickEffectList_b__29_0__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4187D55 = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v11 = (CommonUI_o *)v9;
        v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__29_0__, 0LL);
        if ( v11 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v11, 0, baseId, 1, v12, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B2C434(Instance, v8);
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

  if ( (byte_4187D54 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardController__OnClickHelp_b__28_0__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4187D54 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v6 )
      sub_B2C434(0LL, v7);
    ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
    v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__28_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v8, 0LL);
  }
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v8; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4187D56 & 1) == 0 )
  {
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v3);
    sub_B2C35C(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v4);
    byte_4187D56 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_object___Delete((const MethodInfo_2841CF0 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v8;
        p_offset += 2;
        if ( v8 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL, v5);
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x20
  ClassBoardUIController_o *v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  ClassBoardController___c_c *v34; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__38_0; // x22
  Il2CppObject *v37; // x23
  struct ClassBoardController___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  ClassBoardController___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x21
  struct ClassBoardController___c_StaticFields *v48; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__38_1; // x22
  Il2CppObject *v50; // x23
  struct ClassBoardController___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x21
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v60; // x0
  ClassBoardController___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x21
  struct ClassBoardController___c_StaticFields *v63; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__38_2; // x22
  Il2CppObject *v65; // x23
  struct ClassBoardController___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v74; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v76; // x21

  if ( (byte_4187D5C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v9);
    sub_B2C35C(&Method_System_Func_ClassBoardLock__bool___ctor__, v10);
    sub_B2C35C(&Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__, v11);
    sub_B2C35C(&Method_System_Func_ClassBoardLock__int___ctor__, v12);
    sub_B2C35C(&System_Func_ClassBoardLock__int__TypeInfo, v13);
    sub_B2C35C(&System_Func_ClassBoardLock__bool__TypeInfo, v14);
    sub_B2C35C(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v15);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v17);
    sub_B2C35C(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_0__, v18);
    sub_B2C35C(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_1__, v19);
    sub_B2C35C(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_2__, v20);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__3__, v21);
    sub_B2C35C(&ClassBoardController___c__DisplayClass38_0_TypeInfo, v22);
    sub_B2C35C(&ClassBoardController___c_TypeInfo, v23);
    byte_4187D5C = 1;
  }
  v24 = sub_B2C42C(ClassBoardController___c__DisplayClass38_0_TypeInfo);
  ClassBoardController___c__DisplayClass38_0___ctor((ClassBoardController___c__DisplayClass38_0_o *)v24, 0LL);
  if ( !v24 )
    goto LABEL_38;
  *(_QWORD *)(v24 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  v25 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v25 )
    goto LABEL_38;
  ClassBoardUIController__TouchDisable(v25, 0LL);
  v25 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v25 )
    goto LABEL_38;
  ClassBoardUIController__SetCameraWorkBlock(v25, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v25 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v25 )
    goto LABEL_38;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)v25, 0LL);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.squareViewList,
                                                               (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v34 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v34 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__38_0,
      v37,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_ClassBoardLock__bool___ctor__);
    v38 = ClassBoardController___c_TypeInfo->static_fields;
    v38->__9__38_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__38_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v38->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v33,
          (System_Func_TSource__bool__o *)_9__38_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v46 = ClassBoardController___c_TypeInfo;
  v47 = v45;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v46 = ClassBoardController___c_TypeInfo;
  }
  v48 = v46->static_fields;
  _9__38_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v48->__9__38_1;
  if ( !_9__38_1 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v48 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)v48->__9;
    _9__38_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__38_1,
      v50,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_ClassBoardLock__int___ctor__);
    v51 = ClassBoardController___c_TypeInfo->static_fields;
    v51->__9__38_1 = (struct System_Func_ClassBoardLock__int__o *)_9__38_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v51->__9__38_1,
      (System_Int32_array **)_9__38_1,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v47,
                                                               (System_Func_TSource__TKey__o *)_9__38_1,
                                                               (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v24 + 16) = 0;
  v59 = v58;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v58,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v24 + 16) = 1;
    v60 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v59,
            (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v61 = ClassBoardController___c_TypeInfo;
    v62 = (System_Collections_Generic_IEnumerable_TSource__o *)v60;
    if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v61 = ClassBoardController___c_TypeInfo;
    }
    v63 = v61->static_fields;
    _9__38_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v63->__9__38_2;
    if ( !_9__38_2 )
    {
      if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        v63 = ClassBoardController___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)v63->__9;
      _9__38_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__38_2,
        v65,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_2__,
        (const MethodInfo_2713350 *)Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__);
      v66 = ClassBoardController___c_TypeInfo->static_fields;
      v66->__9__38_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__38_2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v66->__9__38_2,
        (System_Int32_array **)_9__38_2,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v62,
                                                                 (System_Func_TSource__TResult__o *)_9__38_2,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v74 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                      v73,
                                                                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v74, 0LL);
  }
  effectController = this->fields.effectController;
  v76 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v76,
    (Il2CppObject *)v24,
    Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_38:
    sub_B2C434(v25, v26);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v76, 0LL);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
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

  if ( (byte_4187D5E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, square);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass40_0__PlayMoveCamera_b__0__, v7);
    sub_B2C35C(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v8);
    byte_4187D5E = 1;
  }
  v9 = sub_B2C42C(ClassBoardController___c__DisplayClass40_0_TypeInfo);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
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
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  transform = this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v28 = v25;
  v29 = v26;
  v30 = v27;
  localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v34 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v9,
    Method_ClassBoardController___c__DisplayClass40_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_B2C434(transform, v11);
  v36.fields.x = v28 * x;
  v36.fields.y = v29 * y;
  v36.fields.z = v30 * z;
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
  __int64 v10; // x1
  __int64 v11; // x21
  ClassBoardUIController_o *v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v27; // x22

  if ( (byte_4187D5B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, square);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass37_0__PlayReleaseEffect_b__0__, v9);
    sub_B2C35C(&ClassBoardController___c__DisplayClass37_0_TypeInfo, v10);
    byte_4187D5B = 1;
  }
  v11 = sub_B2C42C(ClassBoardController___c__DisplayClass37_0_TypeInfo);
  ClassBoardController___c__DisplayClass37_0___ctor((ClassBoardController___c__DisplayClass37_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = endAct;
  sub_B2C2F8((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)endAct, v20, v21, v22, v23, v24, v25);
  v12 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v12 )
    goto LABEL_13;
  ClassBoardUIController__TouchDisable(v12, 0LL);
  v12 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v12 )
    goto LABEL_13;
  ClassBoardUIController__SetCameraWorkBlock(v12, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v12 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v12
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)v12, 0LL),
        (v12 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                             this,
                                             this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList(v12, 0LL),
        effectController = this->fields.effectController,
        v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
        System_Action___ctor(
          v27,
          (Il2CppObject *)v11,
          Method_ClassBoardController___c__DisplayClass37_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_13:
    sub_B2C434(v12, v13);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v27, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Component_o *squareViewList; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_IEnumerable_T__o *v20; // x20
  ClassBoardController___c_c *v21; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x21
  Il2CppObject *v24; // x22
  struct ClassBoardController___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  ClassBoardController___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_T__o *v34; // x20
  struct ClassBoardController___c_StaticFields *v35; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_1; // x21
  Il2CppObject *v37; // x22
  struct ClassBoardController___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_4187D52 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ClassBoardLine___ctor__, method);
    sub_B2C35C(&Method_System_Action_ClassBoardSquare___ctor__, v3);
    sub_B2C35C(&System_Action_ClassBoardSquare__TypeInfo, v4);
    sub_B2C35C(&System_Action_ClassBoardLine__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v6);
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v7);
    sub_B2C35C(&Method_BasicHelper_ForEach_ClassBoardLine___, v8);
    sub_B2C35C(&Method_BasicHelper_ForEach_ClassBoardSquare___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_ClassBoardController___c__Release_b__26_0__, v13);
    sub_B2C35C(&Method_ClassBoardController___c__Release_b__26_1__, v14);
    sub_B2C35C(&ClassBoardController___c_TypeInfo, v15);
    byte_4187D52 = 1;
  }
  v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                  this,
                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
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
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  v20 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v21 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v21 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_0,
      v24,
      Method_ClassBoardController___c__Release_b__26_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardSquare___ctor__);
    v25 = ClassBoardController___c_TypeInfo->static_fields;
    v25->__9__26_0 = (struct System_Action_ClassBoardSquare__o *)_9__26_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v20,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = (UnityEngine_Component_o *)this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
  v32 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v33 = ClassBoardController___c_TypeInfo;
  v34 = v32;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v33 = ClassBoardController___c_TypeInfo;
  }
  v35 = v33->static_fields;
  _9__26_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v35->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v35 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)v35->__9;
    _9__26_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ClassBoardLine__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_1,
      v37,
      Method_ClassBoardController___c__Release_b__26_1__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardLine___ctor__);
    v38 = ClassBoardController___c_TypeInfo->static_fields;
    v38->__9__26_1 = (struct System_Action_ClassBoardLine__o *)_9__26_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v38->__9__26_1,
      (System_Int32_array **)_9__26_1,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v34,
    (System_Action_T__o *)_9__26_1,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  squareViewList = (UnityEngine_Component_o *)this->fields.lineViewList;
  if ( !squareViewList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_ClassBoardLine__Clear__),
        this->fields.effectController = 0LL,
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.effectController, 0LL, v45, v46, v47, v48, v49, v50),
        (squareViewList = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                                       this,
                                                       this->klass->vtable._7_SetupClassBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_32:
    sub_B2C434(squareViewList, v18);
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

  if ( (byte_4187D53 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, action);
    byte_4187D53 = 1;
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
      sub_B2C434(0LL, v7);
    *(_QWORD *)(v6 + 80) = action;
    sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 80), (System_Int32_array **)action, v8, v9, v10, v11, v12, v13);
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
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v26; // x2
  UnityEngine_Texture_o *v27; // x23
  int v28; // w0
  struct MapCamera_o *v29; // x24
  int v30; // w26
  int v31; // w25
  int v32; // w3
  int v33; // w8
  int v34; // w2
  int v35; // w8
  MapCamera_o *v36; // x0
  UnityEngine_Texture_o *v37; // x1
  MapCamera_o *v38; // x23
  const MethodInfo_2155668 *v39; // x2
  BalanceConfig_c *v40; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  System_Action_o *v43; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x1
  Il2CppObject *current; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v54; // x23
  __int64 v55; // x0
  __int64 v56; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v59; // x23
  ClassBoardEffectController_o *v60; // x24
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v68; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v71; // 0:x3.8
  System_Nullable_Vector3__o v72; // 0:x0.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187D51 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ClassBoardSquare___ctor__, setResourceCatalog);
    sub_B2C35C(&System_Action_ClassBoardSquare__TypeInfo, v13);
    sub_B2C35C(&System_Action_TypeInfo, v14);
    sub_B2C35C(&BalanceConfig_TypeInfo, v15);
    sub_B2C35C(&Method_ClassBoardController_ShowBoard__, v16);
    sub_B2C35C(&ClassBoardEffectController_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v21);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v22);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v23);
    byte_4187D51 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  this->fields.resourceCatalog = setResourceCatalog;
  this->fields.baseId = baseId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)setResourceCatalog,
    (System_String_array **)classBoardBackground,
    *(System_String_array ***)&baseId,
    *(System_Boolean_array ***)&iconId,
    (System_Int32_array **)method,
    v6,
    v7);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_31;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_31;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v26);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.earthAccessoriesObject;
  if ( !mapCamera )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapCamera, 1, 0LL);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.currentCamera;
  if ( !mapCamera )
    goto LABEL_31;
  mapCamera = (MapCamera_o *)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)mapCamera, 0LL);
  if ( !mapCamera )
    goto LABEL_31;
  v27 = (UnityEngine_Texture_o *)mapCamera;
  v28 = ((__int64 (__fastcall *)(MapCamera_o *, const char *))mapCamera->klass[1]._1.gc_desc)(
          mapCamera,
          mapCamera->klass[1]._1.name);
  v29 = this->fields.mapCamera;
  v30 = v28;
  v31 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v27->klass->vtable._4_get_width.method)(
          v27,
          v27->klass->vtable._5_set_width.methodPtr);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v27->klass->vtable._6_get_height.method)(
                               v27,
                               v27->klass->vtable._7_set_height.methodPtr);
  if ( !v29 )
    goto LABEL_31;
  v32 = (int)mapCamera;
  if ( v30 < 2049 )
  {
    v36 = v29;
    v37 = v27;
    v34 = v31;
  }
  else
  {
    v33 = v31 >= 0 ? v31 : v31 + 1;
    v34 = v33 >> 1;
    v35 = (int)mapCamera >= 0 ? (int)mapCamera : (_DWORD)mapCamera + 1;
    v32 = v35 >> 1;
    v36 = v29;
    v37 = v27;
  }
  MapCamera__SetMapTexture(v36, v37, v34, v32, 0LL);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_31;
  MapCamera__SetEnable(mapCamera, 1, 0LL);
  v38 = this->fields.mapCamera;
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v72.fields.value.fields.x = &v68;
  *(_QWORD *)&v68.fields.value.fields.x = 0LL;
  *(_QWORD *)&v68.fields.value.fields.z = 0LL;
  *(_QWORD *)&v72.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v72, zero, v39);
  v40 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v40 = BalanceConfig_TypeInfo;
  }
  static_fields = v40->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
  if ( !v38 )
    goto LABEL_31;
  v71 = size;
  MapCamera__StartAutoWork(v38, 0.0, v68, v71, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&classBoardBackground->fields.showBoardCallback,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v50);
  ClassBoardBackground__SetClassIcon(classBoardBackground, iconId, v51);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v52),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_31:
    sub_B2C434(mapCamera, v24);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v69,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapCamera,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v69,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v69.fields.current;
    v54 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v54,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardSquare___ctor__);
    if ( !current )
      sub_B2C434(v55, v56);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v54, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v69,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v59 = this->fields.mapCamera;
  v60 = (ClassBoardEffectController_o *)sub_B2C42C(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v60,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v59,
    classBoardBackground,
    0LL);
  this->fields.effectController = v60;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.effectController,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
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
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v18; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v22; // x20
  System_Action_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x20
  System_Action_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  Il2CppObject *v38; // x0
  System_String_o *v39; // x20
  ClassBoardUIController_o *v40; // x21
  ClassBoardUIController_o *v41; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  System_Int32_array *v43; // x20
  ClassBoardController_o *v44; // x19
  int32_t v45; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4187D59 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&baseId);
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v5);
    sub_B2C35C(&Method_ClassBoardController_OnClickEffectList__, v6);
    sub_B2C35C(&Method_ClassBoardController_OnClickHelp__, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v10);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_19671/*"img_txt_classscore_{0}"*/, v14);
    this = (ClassBoardController_o *)sub_B2C35C(&StringLiteral_3014/*"CLASS_BOARD_HEADER_MESSAGE"*/, v15);
    byte_4187D59 = 1;
  }
  entity = 0LL;
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_30;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(v4->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v3);
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
                    (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
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
  v22 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v4, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v22 )
    goto LABEL_30;
  *(_QWORD *)(v22 + 88) = v23;
  sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 88), (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  v30 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v4, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v30 )
    goto LABEL_30;
  *(_QWORD *)(v30 + 96) = v31;
  sub_B2C2F8((BattleServantConfConponent_o *)(v30 + 96), (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
  v45 = v4->fields.baseId;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v39 = System_String__Format((System_String_o *)StringLiteral_19671/*"img_txt_classscore_{0}"*/, v38, 0LL);
  v40 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                      v4,
                                      v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v40 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderTitle(v40, (AtlasManagerUnit_o *)this, v39, 0LL);
  v41 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                      v4,
                                      v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v41 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderMessage(v41, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_30;
  this = (ClassBoardController_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     &entity,
                                     v4->fields.baseId,
                                     (const MethodInfo_24E412C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    || (v43 = *(System_Int32_array **)&entity->fields.flag,
        v44 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v44) )
  {
LABEL_30:
    sub_B2C434(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList((ClassBoardUIController_o *)v44, v43, (AtlasManagerUnit_o *)this, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x20
  System_Enum_o *HasFlag; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Enum_o **v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x3
  __int64 *v27; // x22
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  IClassBoardSquareModel_c **v30; // x11
  __int64 v31; // x0
  int v32; // w0
  System_Enum_o *v33; // x22
  __int64 v34; // x3
  System_Enum_o *v35; // x8
  __int64 v36; // x11
  __int64 *monitor; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  IClassBoardSquareModel_c **v40; // x11
  __int64 v41; // x0
  ClassBoardSquare_o *v42; // x21
  System_Action_o *v43; // x22
  const MethodInfo *v44; // x3
  int v45; // [xsp+8h] [xbp-38h] BYREF
  int v46; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4187D5A & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, square);
    sub_B2C35C(&System_Action_TypeInfo, v5);
    sub_B2C35C(&ClassBoardLock_TypeInfo, v6);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v7);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__0__, v8);
    sub_B2C35C(&ClassBoardController___c__DisplayClass36_0_TypeInfo, v9);
    byte_4187D5A = 1;
  }
  v10 = sub_B2C42C(ClassBoardController___c__DisplayClass36_0_TypeInfo);
  ClassBoardController___c__DisplayClass36_0___ctor((ClassBoardController___c__DisplayClass36_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_30;
  *(_QWORD *)(v10 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 32) = square;
  v19 = (System_Enum_o **)(v10 + 32);
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)square, v20, v21, v22, v23, v24, v25);
  if ( !*(_QWORD *)(v10 + 32) )
    goto LABEL_30;
  v27 = *(__int64 **)(*(_QWORD *)(v10 + 32) + 168LL);
  if ( !v27 )
    goto LABEL_30;
  v28 = *v27;
  if ( *(_WORD *)(*v27 + 298) )
  {
    v29 = 0LL;
    v30 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *(v30 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v29;
      v30 += 2;
      if ( v29 >= *(unsigned __int16 *)(*v27 + 298) )
        goto LABEL_10;
    }
    v31 = v28 + 16LL * (*(_DWORD *)v30 + 13) + 312;
  }
  else
  {
LABEL_10:
    v31 = sub_AC5258(v27, IClassBoardSquareModel_TypeInfo, 13LL, v26);
  }
  v32 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v31)(v27, 0LL, *(_QWORD *)(v31 + 8));
  *(_DWORD *)(v10 + 16) = v32;
  v46 = v32;
  v33 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v46);
  v45 = 1;
  HasFlag = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v45);
  if ( !v33 )
    goto LABEL_30;
  HasFlag = (System_Enum_o *)System_Enum__HasFlag(v33, HasFlag, 0LL);
  v35 = *v19;
  if ( ((unsigned __int8)HasFlag & 1) != 0 )
  {
    if ( !v35 )
      goto LABEL_30;
    v36 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v35->klass->_2.bitflags2 + 1) >= (unsigned int)v36
      && (ClassBoardLock_c *)v35->klass->_2.typeHierarchy[v36 - 1] == ClassBoardLock_TypeInfo )
    {
      return;
    }
  }
  else if ( !v35 )
  {
    goto LABEL_30;
  }
  monitor = (__int64 *)v35[10].monitor;
  if ( !monitor )
LABEL_30:
    sub_B2C434(HasFlag, v12);
  v38 = *monitor;
  if ( *(_WORD *)(*monitor + 298) )
  {
    v39 = 0LL;
    v40 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *(v40 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v39;
      v40 += 2;
      if ( v39 >= *(unsigned __int16 *)(*monitor + 298) )
        goto LABEL_24;
    }
    v41 = v38 + 16LL * (*(_DWORD *)v40 + 5) + 312;
  }
  else
  {
LABEL_24:
    v41 = sub_AC5258(monitor, IClassBoardSquareModel_TypeInfo, 5LL, v34);
  }
  if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v41)(monitor, *(_QWORD *)(v41 + 8)) & 1) == 0 )
  {
    HasFlag = *v19;
    if ( *v19 )
    {
      ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)HasFlag, 1, 0LL);
      v42 = *(ClassBoardSquare_o **)(v10 + 32);
      v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        v43,
        (Il2CppObject *)v10,
        Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v42, v43, v44);
      return;
    }
    goto LABEL_30;
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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

  if ( (byte_4187D5F & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardController__ShowBoardCoroutine_d__42_TypeInfo, method);
    byte_4187D5F = 1;
  }
  v3 = sub_B2C42C(ClassBoardController__ShowBoardCoroutine_d__42_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__42___ctor((ClassBoardController__ShowBoardCoroutine_d__42_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ClassBoardController__Update(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___CheckOpenMissionClearDialogSave_b__39_2(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_B2C434(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__29_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4187D61 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4187D61 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                    this,
                                    this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_B2C434(Instance, v4);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickHelp_b__28_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_B2C434(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___ShowBoardCoroutine_b__42_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_B2C434(0LL, v3);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._classBoardUIController_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardController__ShowBoardCoroutine_d__42___ctor(
        ClassBoardController__ShowBoardCoroutine_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardController__ShowBoardCoroutine_d__42__MoveNext(
        ClassBoardController__ShowBoardCoroutine_d__42_o *this,
        const MethodInfo *method)
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
  UnityEngine_Component_o *klass; // x0
  Il2CppObject *_4__this; // x19
  __int64 v14; // x1
  Il2CppObject **p__2__current; // x20
  __int64 v16; // x1
  int v17; // w20
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+0h] [xbp-70h] BYREF
  int v21[2]; // [xsp+18h] [xbp-58h]
  int v22; // [xsp+20h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+28h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-30h] BYREF

  if ( (byte_4184EE3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardController__ShowBoardCoroutine_b__42_0__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v11);
    byte_4184EE3 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v23, 0, sizeof(v23));
  v22 = 0;
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
          &v20,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
        for ( i = v20;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields.current->klass->vtable[7].method)(
                i.fields.current,
                i.fields.current->klass->vtable[8].methodPtr) )
        {
          if ( !i.fields.current )
            sub_B2C434(0LL, v14);
        }
        v21[0] = 124;
        v22 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
        v22 = 0;
        klass = (UnityEngine_Component_o *)_4__this[6].monitor;
        if ( klass )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v23,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v23,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
          {
            if ( !v23.fields.current )
              sub_B2C434(0LL, v16);
            ClassBoardLine__PlayTransition((ClassBoardLine_o *)v23.fields.current, 0LL);
          }
          v21[0] = 175;
          v17 = ++v22;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v23,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
          if ( v17 && v21[v17 - 1] == 175 )
            v22 = v17 - 1;
          klass = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))_4__this->klass->vtable[4].method)(
                                               _4__this,
                                               _4__this->klass->vtable[5].methodPtr);
          if ( klass )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)klass, 1, 0LL);
            v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v18, _4__this, Method_ClassBoardController__ShowBoardCoroutine_b__42_0__, 0LL);
            EventTutorialMaster__CheckTutorial(0, 82, v18, 0, 0, 0, 0, 0LL);
            LOBYTE(klass) = 0;
            return (char)klass;
          }
        }
      }
LABEL_27:
      sub_B2C434(klass, method);
    }
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B2C2F8(p__2__current, 0LL);
    LOBYTE(klass) = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return (char)klass;
}


Il2CppObject *__fastcall ClassBoardController__ShowBoardCoroutine_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ShowBoardCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardController__ShowBoardCoroutine_d__42__System_Collections_IEnumerator_Reset(
        ClassBoardController__ShowBoardCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_ClassBoardController__ShowBoardCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall ClassBoardController__ShowBoardCoroutine_d__42__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ShowBoardCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardController__ShowBoardCoroutine_d__42__System_IDisposable_Dispose(
        ClassBoardController__ShowBoardCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ClassBoardController___c_StaticFields *static_fields; // x0

  if ( (byte_4184ED5 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardController___c_TypeInfo, v1);
    byte_4184ED5 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardController___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ClassBoardController___c___ctor(ClassBoardController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__39_0(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  IClassBoardLockModel_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v11; // w1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  IClassBoardLockModel_c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  System_Enum_o *v18; // x20
  __int64 v19; // x3
  IClassBoardLockModel_c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  System_Enum_o *v24; // x20
  __int64 v25; // x3
  char v26; // w8
  IClassBoardLockModel_c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  __int64 v32; // [xsp+0h] [xbp-40h] BYREF
  int v33; // [xsp+8h] [xbp-38h]
  int v34; // [xsp+18h] [xbp-28h] BYREF
  int v35; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v36; // 0:x0.12

  if ( (byte_4184EDA & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, x);
    sub_B2C35C(&IClassBoardLockModel_TypeInfo, v5);
    this = (ClassBoardController___c_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v6);
    byte_4184EDA = 1;
  }
  v33 = 0;
  v32 = 0LL;
  if ( !x )
    goto LABEL_36;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(x, IClassBoardLockModel_TypeInfo, 0LL, v3);
  }
  v32 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v33 = v11;
  *(_QWORD *)&v36.fields.Type = &v32;
  v36.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v36, v12) )
    goto LABEL_27;
  v14 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    v16 = &v14->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v15;
      v16 += 4;
      if ( v15 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v17 = (__int64)&v14->vtable[*v16 + 13].method;
  }
  else
  {
LABEL_15:
    v17 = sub_AC5258(x, IClassBoardSquareModel_TypeInfo, 13LL, v13);
  }
  v35 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v17)(x, 0LL, *(_QWORD *)(v17 + 8));
  v18 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v35);
  v34 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v34);
  if ( !v18 )
    goto LABEL_36;
  if ( System_Enum__HasFlag(v18, (System_Enum_o *)this, 0LL) )
  {
LABEL_27:
    v26 = 0;
    return v26 & 1;
  }
  v20 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v23 = (__int64)&v20->vtable[*v22 + 13].method;
  }
  else
  {
LABEL_23:
    v23 = sub_AC5258(x, IClassBoardSquareModel_TypeInfo, 13LL, v19);
  }
  v35 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v23)(x, 0LL, *(_QWORD *)(v23 + 8));
  v24 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v35);
  v34 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v34);
  if ( !v24 )
LABEL_36:
    sub_B2C434(this, x);
  if ( System_Enum__HasFlag(v24, (System_Enum_o *)this, 0LL) )
    goto LABEL_27;
  v28 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v30 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v31 = (__int64)&v28->vtable[*v30 + 1].method;
  }
  else
  {
LABEL_33:
    v31 = sub_AC5258(x, IClassBoardLockModel_TypeInfo, 1LL, v25);
  }
  v26 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v31)(x, *(_QWORD *)(v31 + 8)) ^ 1;
  return v26 & 1;
}


int32_t __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__39_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  IClassBoardLockModel_c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4184EDB & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, x);
    byte_4184EDB = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
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
    p_method = sub_AC5258(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


bool __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__38_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x3
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v8; // x20
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  int v12; // w1
  const MethodInfo *v13; // x2
  __int64 v14; // x3
  ClassBoardController___c_c *v15; // x8
  ClassBoardController___c_o *v16; // x20
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  System_Enum_o *v20; // x20
  __int64 v21; // x3
  ClassBoardController___c_c *v22; // x8
  ClassBoardController___c_o *v23; // x20
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0
  System_Enum_o *v27; // x20
  char v28; // w8
  __int64 v30; // x3
  ClassBoardController___c_c *v31; // x8
  ClassBoardController___c_o *v32; // x19
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v36; // [xsp+0h] [xbp-40h] BYREF
  int v37; // [xsp+8h] [xbp-38h]
  int v38; // [xsp+18h] [xbp-28h] BYREF
  int v39; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v40; // 0:x0.12

  if ( (byte_4184ED8 & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, x);
    sub_B2C35C(&IClassBoardLockModel_TypeInfo, v4);
    this = (ClassBoardController___c_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v5);
    byte_4184ED8 = 1;
  }
  v37 = 0;
  v36 = 0LL;
  if ( !x )
    goto LABEL_40;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  klass = this->klass;
  v8 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v11 = sub_AC5258(this, IClassBoardLockModel_TypeInfo, 0LL, v6);
  }
  v36 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v11)(v8, *(_QWORD *)(v11 + 8));
  v37 = v12;
  *(_QWORD *)&v40.fields.Type = &v36;
  v40.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v40, v13) )
    goto LABEL_30;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  v15 = this->klass;
  v16 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v17;
      v18 += 4;
      if ( v17 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v19 = (__int64)(&v15[1]._1.methods + 2 * *v18);
  }
  else
  {
LABEL_17:
    v19 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 13LL, v14);
  }
  v39 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v19)(v16, 0LL, *(_QWORD *)(v19 + 8));
  v20 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v39);
  v38 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v38);
  if ( !v20 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v20, (System_Enum_o *)this, 0LL) )
  {
LABEL_30:
    v28 = 0;
    return v28 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  v22 = this->klass;
  v23 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v25 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v26 = (__int64)(&v22[1]._1.methods + 2 * *v25);
  }
  else
  {
LABEL_26:
    v26 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 13LL, v21);
  }
  v39 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v26)(v23, 0LL, *(_QWORD *)(v26 + 8));
  v27 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v39);
  v38 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v38);
  if ( !v27 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v27, (System_Enum_o *)this, 0LL) )
    goto LABEL_30;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_40:
    sub_B2C434(this, x);
  v31 = this->klass;
  v32 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v31->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v34 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v35 = (__int64)(&v31->vtable._1_Finalize.method + 2 * *v34);
  }
  else
  {
LABEL_37:
    v35 = sub_AC5258(this, IClassBoardLockModel_TypeInfo, 1LL, v30);
  }
  v28 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8)) ^ 1;
  return v28 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__38_1(
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

  if ( (byte_4184ED9 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B2C35C(&IClassBoardSquareModel_TypeInfo, x);
    byte_4184ED9 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_B2C434(this, x);
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
    v9 = sub_AC5258(this, IClassBoardSquareModel_TypeInfo, 0LL, v4);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__38_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__37_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__37_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__26_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4184ED6 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_4184ED6 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__26_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4184ED7 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_4184ED7 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___SetupSquareOnClickListener_b__36_4(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c___SetupSquareOnClickListener_b__36_6(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c__DisplayClass36_0___ctor(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__0(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  System_Enum_o *v23; // x20
  __int64 HasFlag; // x0
  __int64 v25; // x1
  __int64 v26; // x3
  BaseMonoBehaviour_o *_4__this; // x20
  __int64 *monitor; // x21
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  System_Enum_o *v33; // x20
  __int64 v34; // x3
  BaseMonoBehaviour_o *v35; // x20
  __int64 *v36; // x21
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  System_Enum_o *v41; // x20
  __int64 v42; // x3
  BaseMonoBehaviour_o *v43; // x20
  __int64 *v44; // x21
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  struct ClassBoardController_o *v49; // x8
  ClassBoardSquareDetailDialog_o *v50; // x20
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  System_Enum_o *v53; // x20
  __int64 v54; // x3
  BaseMonoBehaviour_o *v55; // x20
  __int64 *v56; // x21
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  struct ClassBoardController_o *v61; // x8
  ClassBoardDisableOpenDialog_o *v62; // x20
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v64; // x21
  System_Enum_o *v65; // x20
  __int64 v66; // x3
  BaseMonoBehaviour_o *v67; // x20
  __int64 *v68; // x21
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  struct ClassBoardController_o *v73; // x8
  ClassBoardLockReleaseConditionDialog_o *v74; // x20
  System_Action_o *_9__3; // x22
  ClassBoardSquare_o *v76; // x21
  struct ClassBoardSquare_o *v77; // x8
  __int64 v78; // x11
  struct ClassBoardSquare_o *v79; // x22
  struct ClassBoardController_o *v80; // x8
  ClassBoardLockOpenConfirmDialog_o *v81; // x20
  struct ClassBoardSquare_o *v82; // x21
  ClassBoardController___c_c *v83; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_4; // x22
  Il2CppObject *v86; // x23
  struct ClassBoardController___c_StaticFields *v87; // x0
  System_Action_o *_9__5; // x23
  ClassBoardLockOpenConfirmDialog_o *v89; // x0
  ClassBoardSquare_o *v90; // x1
  bool v91; // w2
  struct ClassBoardController_o *v92; // x8
  ClassBoardSquareOpenConfirmDialog_o *v93; // x20
  struct ClassBoardSquare_o *v94; // x21
  ClassBoardController___c_c *v95; // x0
  struct ClassBoardController___c_StaticFields *v96; // x8
  System_Action_o *_9__36_6; // x22
  Il2CppObject *v98; // x23
  struct ClassBoardController___c_StaticFields *v99; // x0
  System_Action_o *_9__7; // x23
  ClassBoardSquareOpenConfirmDialog_o *v101; // x0
  ClassBoardSquare_o *v102; // x1
  bool v103; // w2
  BaseMonoBehaviour_o *v104; // x20
  __int64 *v105; // x21
  __int64 v106; // x8
  unsigned __int64 v107; // x10
  int *v108; // x11
  __int64 v109; // x0
  struct ClassBoardController_o *v110; // x8
  ClassBoardLockOpenConfirmDialog_o *v111; // x20
  struct ClassBoardSquare_o *v112; // x21
  ClassBoardSquareOpenConfirmDialog_o *v113; // x20
  struct ClassBoardSquare_o *v114; // x21
  int v115; // [xsp+8h] [xbp-38h] BYREF
  int32_t acquireFlag; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4184EDC & 1) == 0 )
  {
    sub_B2C35C(&AcquireFlag_TypeInfo, method);
    sub_B2C35C(&System_Action_TypeInfo, v3);
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v4);
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v5);
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v6);
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v7);
    sub_B2C35C(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v8);
    sub_B2C35C(&ClassBoardLock_TypeInfo, v9);
    sub_B2C35C(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_B2C35C(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_4__, v11);
    sub_B2C35C(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_6__, v12);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__12__, v13);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__13__, v14);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__1__, v15);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__2__, v16);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__3__, v17);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__5__, v18);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__7__, v19);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__8__, v20);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__9__, v21);
    sub_B2C35C(&ClassBoardController___c_TypeInfo, v22);
    byte_4184EDC = 1;
  }
  acquireFlag = this->fields.acquireFlag;
  v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v115 = 1;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v115);
  if ( !v23 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v23, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) != 0 )
  {
    _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      monitor = (__int64 *)_4__this[3].monitor;
      if ( monitor )
      {
        v29 = *monitor;
        if ( *(_WORD *)(*monitor + 298) )
        {
          v30 = 0LL;
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((IClassBoardResourceCatalog_c **)v31 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v30;
            v31 += 4;
            if ( v30 >= *(unsigned __int16 *)(*monitor + 298) )
              goto LABEL_11;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_11:
          v32 = sub_AC5258(_4__this[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v26);
        }
        HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(monitor, *(_QWORD *)(v32 + 8));
        if ( HasFlag )
        {
          v49 = this->fields.__4__this;
          if ( v49 )
          {
            HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                                 _4__this,
                                 *(Il2CppObject **)(HasFlag + 80),
                                 v49->fields.uiRoot,
                                 0LL,
                                 (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
            if ( HasFlag )
            {
              v50 = (ClassBoardSquareDetailDialog_o *)HasFlag;
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
                    _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                    System_Action___ctor(
                      _9__1,
                      (Il2CppObject *)this,
                      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__1__,
                      0LL);
                    this->fields.__9__1 = _9__1;
                    sub_B2C2F8(&this->fields.__9__1, _9__1);
                  }
                  ClassBoardSquareDetailDialog__Open(v50, square, _9__1, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_146:
    sub_B2C434(HasFlag, v25);
  }
  acquireFlag = this->fields.acquireFlag;
  v33 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v115 = 2;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v115);
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
          goto LABEL_20;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_20:
      v40 = sub_AC5258(v35[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v34);
    }
    HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8));
    if ( !HasFlag )
      goto LABEL_146;
    v61 = this->fields.__4__this;
    if ( !v61 )
      goto LABEL_146;
    HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                         v35,
                         *(Il2CppObject **)(HasFlag + 48),
                         v61->fields.uiRoot,
                         0LL,
                         (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !HasFlag )
      goto LABEL_146;
    v62 = (ClassBoardDisableOpenDialog_o *)HasFlag;
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
    v64 = this->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B2C2F8(&this->fields.__9__2, _9__2);
    }
    ClassBoardDisableOpenDialog__Open(v62, v64, _9__2, 0LL);
    return;
  }
  acquireFlag = this->fields.acquireFlag;
  v41 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v115 = 4;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v115);
  if ( !v41 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v41, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) == 0 )
  {
    acquireFlag = this->fields.acquireFlag;
    v53 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v115 = 16;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v115);
    if ( !v53 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v53, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v55 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v55 )
        goto LABEL_146;
      v56 = (__int64 *)v55[3].monitor;
      if ( !v56 )
        goto LABEL_146;
      v57 = *v56;
      if ( *(_WORD *)(*v56 + 298) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v59 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*v56 + 298) )
            goto LABEL_47;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_47:
        v60 = sub_AC5258(v55[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v54);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v80 = this->fields.__4__this;
      if ( !v80 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v55,
                           *(Il2CppObject **)(HasFlag + 64),
                           v80->fields.uiRoot,
                           0LL,
                           (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v81 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
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
      v82 = this->fields.square;
      v83 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v83 = ClassBoardController___c_TypeInfo;
      }
      static_fields = v83->static_fields;
      _9__36_4 = static_fields->__9__36_4;
      if ( !_9__36_4 )
      {
        if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v83);
          static_fields = ClassBoardController___c_TypeInfo->static_fields;
        }
        v86 = (Il2CppObject *)static_fields->__9;
        _9__36_4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__36_4, v86, Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_4__, 0LL);
        v87 = ClassBoardController___c_TypeInfo->static_fields;
        v87->__9__36_4 = _9__36_4;
        sub_B2C2F8(&v87->__9__36_4, _9__36_4);
      }
      _9__5 = this->fields.__9__5;
      if ( !_9__5 )
      {
        _9__5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__5,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__5__,
          0LL);
        this->fields.__9__5 = _9__5;
        sub_B2C2F8(&this->fields.__9__5, _9__5);
      }
      v89 = v81;
      v90 = v82;
      v91 = 0;
LABEL_134:
      ClassBoardLockOpenConfirmDialog__Open(v89, v90, v91, _9__36_4, _9__5, 0LL);
      return;
    }
    acquireFlag = this->fields.acquireFlag;
    v65 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v115 = 8;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v115);
    if ( !v65 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v65, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v67 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v67 )
        goto LABEL_146;
      v68 = (__int64 *)v67[3].monitor;
      if ( !v68 )
        goto LABEL_146;
      v69 = *v68;
      if ( *(_WORD *)(*v68 + 298) )
      {
        v70 = 0LL;
        v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v71 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v70;
          v71 += 4;
          if ( v70 >= *(unsigned __int16 *)(*v68 + 298) )
            goto LABEL_65;
        }
        v72 = v69 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_65:
        v72 = sub_AC5258(v67[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v66);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v92 = this->fields.__4__this;
      if ( !v92 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v67,
                           *(Il2CppObject **)(HasFlag + 56),
                           v92->fields.uiRoot,
                           0LL,
                           (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
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
      v94 = this->fields.square;
      v95 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v95 = ClassBoardController___c_TypeInfo;
      }
      v96 = v95->static_fields;
      _9__36_6 = v96->__9__36_6;
      if ( !_9__36_6 )
      {
        if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v95);
          v96 = ClassBoardController___c_TypeInfo->static_fields;
        }
        v98 = (Il2CppObject *)v96->__9;
        _9__36_6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__36_6, v98, Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_6__, 0LL);
        v99 = ClassBoardController___c_TypeInfo->static_fields;
        v99->__9__36_6 = _9__36_6;
        sub_B2C2F8(&v99->__9__36_6, _9__36_6);
      }
      _9__7 = this->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__7__,
          0LL);
        this->fields.__9__7 = _9__7;
        sub_B2C2F8(&this->fields.__9__7, _9__7);
      }
      v101 = v93;
      v102 = v94;
      v103 = 0;
    }
    else
    {
      v77 = this->fields.square;
      if ( v77
        && (v78 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1), *(&v77->klass->_2.bitflags2 + 1) >= (unsigned int)v78) )
      {
        if ( (ClassBoardLock_c *)v77->klass->_2.typeHierarchy[v78 - 1] == ClassBoardLock_TypeInfo )
          v79 = this->fields.square;
        else
          v79 = 0LL;
      }
      else
      {
        v79 = 0LL;
      }
      v104 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v104 )
        goto LABEL_146;
      v105 = (__int64 *)v104[3].monitor;
      if ( !v105 )
        goto LABEL_146;
      v106 = *v105;
      if ( *(_WORD *)(*v105 + 298) )
      {
        v107 = 0LL;
        v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v108 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v107;
          v108 += 4;
          if ( v107 >= *(unsigned __int16 *)(*v105 + 298) )
            goto LABEL_121;
        }
        v109 = v106 + 16LL * *v108 + 312;
      }
      else
      {
LABEL_121:
        v109 = sub_AC5258(v104[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v66);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v109)(v105, *(_QWORD *)(v109 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v110 = this->fields.__4__this;
      if ( v79 )
      {
        if ( !v110 )
          goto LABEL_146;
        HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                             v104,
                             *(Il2CppObject **)(HasFlag + 64),
                             v110->fields.uiRoot,
                             0LL,
                             (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( !HasFlag )
          goto LABEL_146;
        v111 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
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
        _9__36_4 = this->fields.__9__8;
        v112 = this->fields.square;
        if ( !_9__36_4 )
        {
          _9__36_4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__36_4,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__8__,
            0LL);
          this->fields.__9__8 = _9__36_4;
          sub_B2C2F8(&this->fields.__9__8, _9__36_4);
        }
        _9__5 = this->fields.__9__9;
        if ( !_9__5 )
        {
          _9__5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__5,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__9__,
            0LL);
          this->fields.__9__9 = _9__5;
          sub_B2C2F8(&this->fields.__9__9, _9__5);
        }
        v91 = 1;
        v89 = v111;
        v90 = v112;
        goto LABEL_134;
      }
      if ( !v110 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v104,
                           *(Il2CppObject **)(HasFlag + 56),
                           v110->fields.uiRoot,
                           0LL,
                           (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v113 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
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
      _9__36_6 = this->fields.__9__12;
      v114 = this->fields.square;
      if ( !_9__36_6 )
      {
        _9__36_6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__36_6,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__12__,
          0LL);
        this->fields.__9__12 = _9__36_6;
        sub_B2C2F8(&this->fields.__9__12, _9__36_6);
      }
      _9__7 = this->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__13__,
          0LL);
        this->fields.__9__13 = _9__7;
        sub_B2C2F8(&this->fields.__9__13, _9__7);
      }
      v103 = 1;
      v101 = v113;
      v102 = v114;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v101, v102, v103, _9__36_6, _9__7, 0LL);
    return;
  }
  v43 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v43 )
    goto LABEL_146;
  v44 = (__int64 *)v43[3].monitor;
  if ( !v44 )
    goto LABEL_146;
  v45 = *v44;
  if ( *(_WORD *)(*v44 + 298) )
  {
    v46 = 0LL;
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((IClassBoardResourceCatalog_c **)v47 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)(*v44 + 298) )
        goto LABEL_29;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_29:
    v48 = sub_AC5258(v43[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v42);
  }
  HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
  if ( !HasFlag )
    goto LABEL_146;
  v73 = this->fields.__4__this;
  if ( !v73 )
    goto LABEL_146;
  HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                       v43,
                       *(Il2CppObject **)(HasFlag + 72),
                       v73->fields.uiRoot,
                       0LL,
                       (const MethodInfo_172605C *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
  if ( !HasFlag )
    goto LABEL_146;
  v74 = (ClassBoardLockReleaseConditionDialog_o *)HasFlag;
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
  v76 = this->fields.square;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  ClassBoardLockReleaseConditionDialog__Open(v74, v76, 0, _9__3, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__1(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass36_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  ClassBoardController_o *monitor; // x20
  ClassBoardSquare_o *v7; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4184EDE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass36_0_o *)sub_B2C35C(
                                                             &Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__11__,
                                                             v4);
    byte_4184EDE = 1;
  }
  klass = (System_Action_o *)v3[5].klass;
  monitor = (ClassBoardController_o *)v3[1].monitor;
  v7 = (ClassBoardSquare_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v3[5].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v3[5], klass);
  }
  if ( !monitor )
    sub_B2C434(this, _);
  ClassBoardController__PlayReleaseEffect(monitor, v7, klass, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__11(
        ClassBoardController___c__DisplayClass36_0_o *this,
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
    sub_B2C434(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v10; // x8
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v13; // x0
  __int64 v14; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass36_0_o *v16; // x20
  ClassBoardController___c__DisplayClass36_0_c *v17; // x8
  unsigned __int64 v18; // x10
  IClassBoardSquareUser_c **v19; // x11
  __int64 v20; // x0

  v3 = (Il2CppObject *)this;
  if ( (byte_4184EDF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_IClassBoardSquareUser___ctor__, method);
    sub_B2C35C(&System_Action_IClassBoardSquareUser__TypeInfo, v4);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B2C35C(&IClassBoardSquareUser_TypeInfo, v6);
    this = (ClassBoardController___c__DisplayClass36_0_o *)sub_B2C35C(
                                                             &Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__14__,
                                                             v7);
    byte_4184EDF = 1;
  }
  klass = v3[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v10 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v10->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v13 = (__int64)&(&v10->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v13 = sub_AC5258(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL, v2);
  }
  this = (ClassBoardController___c__DisplayClass36_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v13)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v13 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v3[7].monitor;
  v16 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v3,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__14__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v3[7].monitor = monitor;
    sub_B2C2F8(&v3[7].monitor, monitor);
  }
  if ( !v16 )
LABEL_21:
    sub_B2C434(this, method);
  v17 = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v18;
      v19 += 2;
      if ( v18 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_AC5258(v16, IClassBoardSquareUser_TypeInfo, 2LL, v14);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass36_0_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))v20)(
    v16,
    monitor,
    *(_QWORD *)(v20 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__13(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass36_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  System_Action_o *klass; // x22
  ClassBoardController_o *monitor; // x20
  ClassBoardSquare_o *v7; // x21

  v3 = (Il2CppObject *)this;
  if ( (byte_4184EE0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass36_0_o *)sub_B2C35C(
                                                             &Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__15__,
                                                             v4);
    byte_4184EE0 = 1;
  }
  klass = (System_Action_o *)v3[7].klass;
  monitor = (ClassBoardController_o *)v3[1].monitor;
  v7 = (ClassBoardSquare_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v3,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v3[7].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v3[7], klass);
  }
  if ( !monitor )
    sub_B2C434(this, _);
  ClassBoardController__PlayReleaseEffect(monitor, v7, klass, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__15(
        ClassBoardController___c__DisplayClass36_0_o *this,
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
    sub_B2C434(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__2(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__3(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__5(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__7(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v10; // x8
  unsigned __int64 v11; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v13; // x0
  __int64 v14; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass36_0_o *v16; // x20
  ClassBoardController___c__DisplayClass36_0_c *v17; // x8
  unsigned __int64 v18; // x10
  IClassBoardSquareUser_c **v19; // x11
  __int64 v20; // x0

  v3 = (Il2CppObject *)this;
  if ( (byte_4184EDD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_IClassBoardSquareUser___ctor__, method);
    sub_B2C35C(&System_Action_IClassBoardSquareUser__TypeInfo, v4);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B2C35C(&IClassBoardSquareUser_TypeInfo, v6);
    this = (ClassBoardController___c__DisplayClass36_0_o *)sub_B2C35C(
                                                             &Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__10__,
                                                             v7);
    byte_4184EDD = 1;
  }
  klass = v3[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v10 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v10->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v13 = (__int64)&(&v10->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v13 = sub_AC5258(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL, v2);
  }
  this = (ClassBoardController___c__DisplayClass36_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v13)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v13 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v3[5].monitor;
  v16 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v3,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__10__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v3[5].monitor = monitor;
    sub_B2C2F8(&v3[5].monitor, monitor);
  }
  if ( !v16 )
LABEL_21:
    sub_B2C434(this, method);
  v17 = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v18;
      v19 += 2;
      if ( v18 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_AC5258(v16, IClassBoardSquareUser_TypeInfo, 2LL, v14);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass36_0_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))v20)(
    v16,
    monitor,
    *(_QWORD *)(v20 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__9(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass37_0___ctor(
        ClassBoardController___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass37_0___PlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
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
  void *_4__this; // x0
  __int64 v14; // x1
  struct ClassBoardController_o *v15; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *squareViewList; // x20
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__37_1; // x21
  Il2CppObject *v19; // x22
  struct ClassBoardController___c_StaticFields *v20; // x0
  struct ClassBoardController_o *v21; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *lineViewList; // x20
  struct ClassBoardController___c_StaticFields *v23; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__37_2; // x21
  Il2CppObject *v25; // x22
  struct ClassBoardController___c_StaticFields *v26; // x0

  if ( (byte_4184EE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ClassBoardLine___ctor__, method);
    sub_B2C35C(&Method_System_Action_ClassBoardSquare___ctor__, v3);
    sub_B2C35C(&System_Action_ClassBoardSquare__TypeInfo, v4);
    sub_B2C35C(&System_Action_ClassBoardLine__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v7);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B2C35C(&Method_ClassBoardController___c__PlayReleaseEffect_b__37_1__, v10);
    sub_B2C35C(&Method_ClassBoardController___c__PlayReleaseEffect_b__37_2__, v11);
    sub_B2C35C(&ClassBoardController___c_TypeInfo, v12);
    byte_4184EE1 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_32;
  squareViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v15->fields.squareViewList;
  _4__this = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  static_fields = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__37_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( (*((_BYTE *)_4__this + 307) & 4) != 0 && !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__37_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__37_1,
      v19,
      Method_ClassBoardController___c__PlayReleaseEffect_b__37_1__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardSquare___ctor__);
    v20 = ClassBoardController___c_TypeInfo->static_fields;
    v20->__9__37_1 = (struct System_Action_ClassBoardSquare__o *)_9__37_1;
    sub_B2C2F8(&v20->__9__37_1, _9__37_1);
  }
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    squareViewList,
    (System_Action_T__o *)_9__37_1,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_32;
  _4__this = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v21->fields.lineViewList;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v23 = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__37_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v23->__9__37_2;
  if ( !_9__37_2 )
  {
    if ( (*((_BYTE *)_4__this + 307) & 4) != 0 && !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      v23 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__37_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ClassBoardLine__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__37_2,
      v25,
      Method_ClassBoardController___c__PlayReleaseEffect_b__37_2__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ClassBoardLine___ctor__);
    v26 = ClassBoardController___c_TypeInfo->static_fields;
    v26->__9__37_2 = (struct System_Action_ClassBoardLine__o *)_9__37_2;
    sub_B2C2F8(&v26->__9__37_2, _9__37_2);
  }
  if ( !lineViewList )
LABEL_32:
    sub_B2C434(_4__this, v14);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    lineViewList,
    (System_Action_T__o *)_9__37_2,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass38_0___ctor(
        ClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass38_0___PlayClassBoardStartEffect_b__3(
        ClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ClassBoardUIController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  ClassBoardUIController_o *v8; // x20
  System_Action_o *_9__4; // x21

  if ( (byte_4184EE2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    sub_B2C35C(&Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__4__, v5);
    byte_4184EE2 = 1;
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
  v8 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B2C2F8(&this->fields.__9__4, _9__4);
    }
    if ( v8 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v8, _9__4, 0LL);
      goto LABEL_13;
    }
LABEL_18:
    sub_B2C434(_4__this, method);
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
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_18;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass38_0___PlayClassBoardStartEffect_b__4(
        ClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B2C434(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass40_0___ctor(
        ClassBoardController___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass40_0___PlayMoveCamera_b__0(
        ClassBoardController___c__DisplayClass40_0_o *this,
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
    sub_B2C434(_4__this, method);
  }
  System_Action__Invoke((System_Action_o *)_4__this, 0LL);
}