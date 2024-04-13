void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  ClassBoardModelBuilder_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E9C0C & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardModelBuilder_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v14, v15, v16);
    byte_42E9C0C = 1;
  }
  v17 = (ClassBoardModelBuilder_o *)sub_B5D694(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v17, 0LL);
  this->fields._builder_k__BackingField = v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._builder_k__BackingField,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squareViewList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v54; // x21
  ClassBoardUIController_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v59; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x20
  ClassBoardController___c_c *v63; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_0; // x21
  Il2CppObject *v66; // x22
  struct ClassBoardController___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  ClassBoardController___c_c *v75; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x20
  struct ClassBoardController___c_StaticFields *v77; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__42_1; // x21
  Il2CppObject *v79; // x22
  struct ClassBoardController___c_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x20
  ClassBoardUIController_o *v88; // x21
  System_Action_o *v89; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v90; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9C09 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)squareModel, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_IClassBoardLockModel__int___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_IClassBoardLockModel__bool___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_IClassBoardLockModel__bool__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Func_IClassBoardLockModel__int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__, v45, v46, v47);
    sub_B5D5C4(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__, v48, v49, v50);
    sub_B5D5C4(&ClassBoardController___c_TypeInfo, v51, v52, v53);
    byte_42E9C09 = 1;
  }
  v54 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v54,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v54;
  if ( !squareModel )
    goto LABEL_31;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v59 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v59;
      p_offset += 4;
      if ( v59 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(squareModel, IClassBoardSquareModel_TypeInfo, 15LL, v57);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               source,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v63 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v63 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v63->static_fields;
  _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v66 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_0,
      v66,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_IClassBoardLockModel__bool___ctor__);
    v67 = ClassBoardController___c_TypeInfo->static_fields;
    v67->__9__42_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__42_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v67->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  v74 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v62,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v75 = ClassBoardController___c_TypeInfo;
  v76 = v74;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v75 = ClassBoardController___c_TypeInfo;
  }
  v77 = v75->static_fields;
  _9__42_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v77->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75);
      v77 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v79 = (Il2CppObject *)v77->__9;
    _9__42_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__42_1,
      v79,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__42_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_IClassBoardLockModel__int___ctor__);
    v80 = ClassBoardController___c_TypeInfo->static_fields;
    v80->__9__42_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__42_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v80->__9__42_1,
      (System_Int32_array **)_9__42_1,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v76,
                                                               (System_Func_TSource__TKey__o *)_9__42_1,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v87,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v55 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v55 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v55, 1, 0LL);
      v88 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v89 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v89,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__42_2__,
        0LL);
      if ( v88 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v88, v89, 0LL);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_B5D69C(v55, v56);
  }
LABEL_30:
  v90 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                    v87,
                                                                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v90, 0LL);
}


ClassBoardSquare_o *__fastcall ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        const MethodInfo *method)
{
  ClassBoardController_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v18; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x21
  Il2CppObject *v22; // x0

  v6 = this;
  if ( (byte_42E9C04 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, (_DWORD)defaultPrefab, assetId, method);
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7, v8, v9);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v10, v11, v12);
    this = (ClassBoardController_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E9C04 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_B5D69C(this, defaultPrefab);
    klass = resourceCatalog->klass;
    if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v18;
        p_offset += 2;
        if ( v18 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL, method);
    }
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD, _QWORD))p_method)(
                            resourceCatalog,
                            (unsigned int)assetId,
                            *(_QWORD *)(p_method + 8));
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)v6,
                      v22,
                      v6->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
  return (ClassBoardSquare_o *)Object_object;
}


void __fastcall ClassBoardController__CreateViews(ClassBoardController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x3
  __int64 *v41; // x20
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 v48; // x20
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  IClassBoardSquareModel_o *v58; // x21
  __int64 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v64; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v67; // x8
  unsigned __int64 v68; // x10
  IClassBoardSquareModel_c **v69; // x11
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x3
  IClassBoardSquareModel_c *v74; // x8
  ClassBoardSquare_o *v75; // x22
  IClassBoardSquareModel_c *v76; // x1
  unsigned __int64 v77; // x10
  IClassBoardSquareModel_c **v78; // x11
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x3
  struct IClassBoardResourceCatalog_o *v83; // x22
  IClassBoardResourceCatalog_c *v84; // x8
  unsigned __int64 v85; // x10
  int32_t *v86; // x11
  __int64 v87; // x0
  IClassBoardResourceCatalog_c *v88; // x8
  unsigned __int64 v89; // x10
  int32_t *v90; // x11
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  IClassBoardSquareModel_c *v94; // x8
  unsigned __int64 v95; // x10
  IClassBoardSquareModel_c **v96; // x11
  __int64 v97; // x0
  __int64 v98; // x1
  IClassBoardSquareModel_c *v99; // x8
  unsigned __int64 v100; // x10
  IClassBoardSquareModel_c **v101; // x11
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  ClassBoardSquare_o *v104; // x0
  __int64 v105; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v106; // x22
  __int64 v107; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x0
  __int64 v109; // x8
  unsigned __int64 v110; // x10
  int *v111; // x11
  __int64 v112; // x0
  __int64 v113; // x3
  __int64 *v114; // x20
  __int64 v115; // x8
  unsigned __int64 v116; // x10
  int *v117; // x11
  __int64 v118; // x0
  __int64 v119; // x1
  __int64 v120; // x3
  __int64 v121; // x20
  __int64 v122; // x8
  unsigned __int64 v123; // x10
  int *v124; // x11
  __int64 v125; // x0
  __int64 v126; // x3
  __int64 v127; // x8
  unsigned __int64 v128; // x10
  int *v129; // x11
  __int64 v130; // x0
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x3
  struct IClassBoardResourceCatalog_o *v134; // x22
  IClassBoardResourceCatalog_c *v135; // x8
  IClassBoardLineModel_o *v136; // x21
  unsigned __int64 v137; // x10
  int32_t *v138; // x11
  __int64 v139; // x0
  __int64 v140; // x0
  __int64 v141; // x1
  Il2CppObject *Object_object; // x0
  __int64 v143; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v144; // x22
  __int64 v145; // x1
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x0
  int v147; // w23
  __int64 v148; // x8
  unsigned __int64 v149; // x10
  int *v150; // x11
  __int64 v151; // x0
  int v152[2]; // [xsp+0h] [xbp-60h]
  int v153; // [xsp+8h] [xbp-58h]

  if ( (byte_42E9C03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v35, v36, v37);
    byte_42E9C03 = 1;
  }
  v153 = 0;
  v38 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v38 )
    goto LABEL_143;
  v41 = *(__int64 **)(v38 + 24);
  if ( !v41 )
    goto LABEL_143;
  v42 = *v41;
  if ( *(_WORD *)(*v41 + 298) )
  {
    v43 = 0LL;
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v44 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v43;
      v44 += 4;
      if ( v43 >= *(unsigned __int16 *)(*v41 + 298) )
        goto LABEL_9;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_9:
    v45 = sub_AF54C0(
            *(_QWORD *)(v38 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL,
            v40);
  }
  v48 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8));
  if ( !v48 )
    sub_B5D69C(0LL, v46);
  while ( 1 )
  {
    v49 = *(_QWORD *)v48;
    if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
    {
      v50 = 0LL;
      v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v50;
        v51 += 4;
        if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
          goto LABEL_16;
      }
      v52 = v49 + 16LL * *v51 + 312;
    }
    else
    {
LABEL_16:
      v52 = sub_AF54C0(v48, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
      break;
    v54 = *(_QWORD *)v48;
    if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
    {
      v55 = 0LL;
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v56 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v55;
        v56 += 4;
        if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
          goto LABEL_23;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_23:
      v57 = sub_AF54C0(v48, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL, v53);
    }
    v58 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
    v59 = sub_B5D684(v58, IClassBoardLockModel_TypeInfo);
    if ( v59 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_B5D69C(v59, v60);
      klass = resourceCatalog->klass;
      if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
      {
        v64 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v64;
          p_offset += 4;
          if ( v64 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_AF54C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v61);
      }
      v71 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v71 )
        sub_B5D69C(0LL, v72);
      if ( !v58 )
        sub_B5D69C(v71, v72);
      v74 = v58->klass;
      v75 = *(ClassBoardSquare_o **)(v71 + 32);
      v76 = IClassBoardSquareModel_TypeInfo;
      if ( !*(_WORD *)&v58->klass->_2.bitflags1 )
        goto LABEL_67;
      v77 = 0LL;
      v78 = (IClassBoardSquareModel_c **)&v74->_1.interfaceOffsets->offset;
      while ( *(v78 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v77;
        v78 += 2;
        if ( v77 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v79 = (__int64)&v74->vtable[*(_DWORD *)v78 + 10].method;
    }
    else
    {
      if ( !v58 )
        sub_B5D69C(0LL, v60);
      v67 = v58->klass;
      if ( *(_WORD *)&v58->klass->_2.bitflags1 )
      {
        v68 = 0LL;
        v69 = (IClassBoardSquareModel_c **)&v67->_1.interfaceOffsets->offset;
        while ( *(v69 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v68;
          v69 += 2;
          if ( v68 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
            goto LABEL_37;
        }
        v70 = (__int64)&v67->vtable[*(_DWORD *)v69 + 5].method;
      }
      else
      {
LABEL_37:
        v70 = sub_AF54C0(v58, IClassBoardSquareModel_TypeInfo, 5LL, v61);
      }
      v80 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v70)(v58, *(_QWORD *)(v70 + 8));
      v83 = this->fields.resourceCatalog;
      if ( (v80 & 1) != 0 )
      {
        if ( !v83 )
          sub_B5D69C(v80, v81);
        v84 = v83->klass;
        if ( *(_WORD *)&v83->klass->_2.bitflags1 )
        {
          v85 = 0LL;
          v86 = &v84->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v86 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v85;
            v86 += 4;
            if ( v85 >= *(unsigned __int16 *)&v83->klass->_2.bitflags1 )
              goto LABEL_54;
          }
          v87 = (__int64)&v84->vtable[*v86].method;
        }
        else
        {
LABEL_54:
          v87 = sub_AF54C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v82);
        }
        v92 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v87)(v83, *(_QWORD *)(v87 + 8));
        if ( !v92 )
          sub_B5D69C(0LL, v93);
        v94 = v58->klass;
        v75 = *(ClassBoardSquare_o **)(v92 + 40);
        v76 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v58->klass->_2.bitflags1 )
          goto LABEL_67;
        v95 = 0LL;
        v96 = (IClassBoardSquareModel_c **)&v94->_1.interfaceOffsets->offset;
        while ( *(v96 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v95;
          v96 += 2;
          if ( v95 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v79 = (__int64)&v94->vtable[*(_DWORD *)v96 + 10].method;
      }
      else
      {
        if ( !v83 )
          sub_B5D69C(v80, v81);
        v88 = v83->klass;
        if ( *(_WORD *)&v83->klass->_2.bitflags1 )
        {
          v89 = 0LL;
          v90 = &v88->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v90 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v89;
            v90 += 4;
            if ( v89 >= *(unsigned __int16 *)&v83->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v91 = (__int64)&v88->vtable[*v90].method;
        }
        else
        {
LABEL_60:
          v91 = sub_AF54C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v82);
        }
        v97 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v91)(v83, *(_QWORD *)(v91 + 8));
        if ( !v97 )
          sub_B5D69C(0LL, v98);
        v99 = v58->klass;
        v75 = *(ClassBoardSquare_o **)(v97 + 16);
        v76 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v58->klass->_2.bitflags1 )
        {
LABEL_67:
          v79 = sub_AF54C0(v58, v76, 10LL, v73);
          goto LABEL_77;
        }
        v100 = 0LL;
        v101 = (IClassBoardSquareModel_c **)&v99->_1.interfaceOffsets->offset;
        while ( *(v101 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v100;
          v101 += 2;
          if ( v100 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v79 = (__int64)&v99->vtable[*(_DWORD *)v101 + 10].method;
      }
    }
LABEL_77:
    v102 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v79)(v58, *(_QWORD *)(v79 + 8));
    v104 = ClassBoardController__CloneSquareObject(this, v75, v102, v103);
    v106 = (EventMissionProgressRequest_Argument_ProgressData_o *)v104;
    if ( !v104 )
      sub_B5D69C(0LL, v105);
    ClassBoardSquare__Setup(v104, v58, 0LL);
    squareViewList = this->fields.squareViewList;
    if ( !squareViewList )
      sub_B5D69C(0LL, v107);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareViewList,
      v106,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
  }
  v152[0] = 180;
  v153 = 1;
  v109 = *(_QWORD *)v48;
  if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
  {
    v110 = 0LL;
    v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
    {
      ++v110;
      v111 += 4;
      if ( v110 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
        goto LABEL_84;
    }
    v112 = v109 + 16LL * *v111 + 312;
  }
  else
  {
LABEL_84:
    v112 = sub_AF54C0(v48, System_IDisposable_TypeInfo, 0LL, v53);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v112)(v48, *(_QWORD *)(v112 + 8));
  v153 = 0;
  v38 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v38 || (v114 = *(__int64 **)(v38 + 16)) == 0LL )
LABEL_143:
    sub_B5D69C(v38, v39);
  v115 = *v114;
  if ( *(_WORD *)(*v114 + 298) )
  {
    v116 = 0LL;
    v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v117 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v116;
      v117 += 4;
      if ( v116 >= *(unsigned __int16 *)(*v114 + 298) )
        goto LABEL_92;
    }
    v118 = v115 + 16LL * *v117 + 312;
  }
  else
  {
LABEL_92:
    v118 = sub_AF54C0(
             *(_QWORD *)(v38 + 16),
             System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo,
             0LL,
             v113);
  }
  v121 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v118)(v114, *(_QWORD *)(v118 + 8));
  if ( !v121 )
    sub_B5D69C(0LL, v119);
  while ( 1 )
  {
    v122 = *(_QWORD *)v121;
    if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
    {
      v123 = 0LL;
      v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v124 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v123;
        v124 += 4;
        if ( v123 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
          goto LABEL_99;
      }
      v125 = v122 + 16LL * *v124 + 312;
    }
    else
    {
LABEL_99:
      v125 = sub_AF54C0(v121, System_Collections_IEnumerator_TypeInfo, 0LL, v120);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v125)(v121, *(_QWORD *)(v125 + 8)) & 1) == 0 )
      break;
    v127 = *(_QWORD *)v121;
    if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
    {
      v128 = 0LL;
      v129 = (int *)(*(_QWORD *)(v127 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v129 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v128;
        v129 += 4;
        if ( v128 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
          goto LABEL_106;
      }
      v130 = v127 + 16LL * *v129 + 312;
    }
    else
    {
LABEL_106:
      v130 = sub_AF54C0(v121, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL, v126);
    }
    v131 = (*(__int64 (__fastcall **)(__int64, _QWORD))v130)(v121, *(_QWORD *)(v130 + 8));
    v134 = this->fields.resourceCatalog;
    if ( !v134 )
      sub_B5D69C(v131, v132);
    v135 = v134->klass;
    v136 = (IClassBoardLineModel_o *)v131;
    if ( *(_WORD *)&v134->klass->_2.bitflags1 )
    {
      v137 = 0LL;
      v138 = &v135->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v138 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v137;
        v138 += 4;
        if ( v137 >= *(unsigned __int16 *)&v134->klass->_2.bitflags1 )
          goto LABEL_113;
      }
      v139 = (__int64)&v135->vtable[*v138].method;
    }
    else
    {
LABEL_113:
      v139 = sub_AF54C0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v133);
    }
    v140 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v139)(v134, *(_QWORD *)(v139 + 8));
    if ( !v140 )
      sub_B5D69C(0LL, v141);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v140 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v144 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object;
    if ( !Object_object )
      sub_B5D69C(0LL, v143);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v136, 0LL);
    lineViewList = this->fields.lineViewList;
    if ( !lineViewList )
      sub_B5D69C(0LL, v145);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineViewList,
      v144,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ClassBoardLine__Add__);
  }
  v152[0] = 280;
  v147 = ++v153;
  v148 = *(_QWORD *)v121;
  if ( *(_WORD *)(*(_QWORD *)v121 + 298LL) )
  {
    v149 = 0LL;
    v150 = (int *)(*(_QWORD *)(v148 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v150 - 1) != System_IDisposable_TypeInfo )
    {
      ++v149;
      v150 += 4;
      if ( v149 >= *(unsigned __int16 *)(*(_QWORD *)v121 + 298LL) )
        goto LABEL_123;
    }
    v151 = v148 + 16LL * *v150 + 312;
  }
  else
  {
LABEL_123:
    v151 = sub_AF54C0(v121, System_IDisposable_TypeInfo, 0LL, v126);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v151)(v121, *(_QWORD *)(v151 + 8));
  if ( v147 && v152[v147 - 1] == 280 )
    v153 = v147 - 1;
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *v14; // x20
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  WebViewManager_o *v17; // x0
  int32_t baseId; // w20
  CommonUI_o *v19; // x21
  System_Action_o *v20; // x22

  if ( (byte_42E9C01 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardController__OnClickEffectList_b__32_0__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E9C01 = 1;
  }
  v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                  this,
                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v19 = (CommonUI_o *)v17;
        v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__32_0__, 0LL);
        if ( v19 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v19, 0, baseId, 1, v20, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B5D69C(Instance, v16);
  }
}


void __fastcall ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *v11; // x20
  ClassBoardUIController_o *v12; // x0
  __int64 v13; // x1
  System_Action_o *v14; // x20

  if ( (byte_42E9C00 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardController__OnClickHelp_b__31_0__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9C00 = 1;
  }
  v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                  this,
                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
  {
    v12 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v12 )
      sub_B5D69C(0LL, v13);
    ClassBoardUIController__SetCameraWorkBlock(v12, 1, 0LL);
    v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__31_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v14, 0LL);
  }
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v14; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E9C02 & 1) == 0 )
  {
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v8, v9, v10);
    byte_42E9C02 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_object___Delete((const MethodInfo_2A304E8 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v14;
        p_offset += 2;
        if ( v14 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL, v11);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
      resourceCatalog,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  __int64 v68; // x20
  ClassBoardUIController_o *v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x21
  ClassBoardController___c_c *v78; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__41_0; // x22
  Il2CppObject *v81; // x23
  struct ClassBoardController___c_StaticFields *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  ClassBoardController___c_c *v90; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x21
  struct ClassBoardController___c_StaticFields *v92; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__41_1; // x22
  Il2CppObject *v94; // x23
  struct ClassBoardController___c_StaticFields *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x21
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v104; // x0
  ClassBoardController___c_c *v105; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x21
  struct ClassBoardController___c_StaticFields *v107; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__41_2; // x22
  Il2CppObject *v109; // x23
  struct ClassBoardController___c_StaticFields *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v118; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v120; // x21
  const MethodInfo *v121; // x2

  if ( (byte_42E9C08 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_ClassBoardLock__bool___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Func_ClassBoardLock__int___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Func_ClassBoardLock__int__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Func_ClassBoardLock__bool__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__, v50, v51, v52);
    sub_B5D5C4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__, v53, v54, v55);
    sub_B5D5C4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__, v56, v57, v58);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__, v59, v60, v61);
    sub_B5D5C4(&ClassBoardController___c__DisplayClass41_0_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&ClassBoardController___c_TypeInfo, v65, v66, v67);
    byte_42E9C08 = 1;
  }
  v68 = sub_B5D694(ClassBoardController___c__DisplayClass41_0_TypeInfo);
  ClassBoardController___c__DisplayClass41_0___ctor((ClassBoardController___c__DisplayClass41_0_o *)v68, 0LL);
  if ( !v68 )
    goto LABEL_38;
  *(_QWORD *)(v68 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v68 + 24), (System_Int32_array **)this, v71, v72, v73, v74, v75, v76);
  v69 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v69 )
    goto LABEL_38;
  ClassBoardUIController__TouchDisable(v69, 0LL);
  v69 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v69 )
    goto LABEL_38;
  ClassBoardUIController__SetCameraWorkBlock(v69, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v69 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v69 )
    goto LABEL_38;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)v69, 0LL);
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.squareViewList,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v78 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v78 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v78->static_fields;
  _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v81 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__41_0,
      v81,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardLock__bool___ctor__);
    v82 = ClassBoardController___c_TypeInfo->static_fields;
    v82->__9__41_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__41_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v82->__9__41_0,
      (System_Int32_array **)_9__41_0,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
  }
  v89 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v77,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v90 = ClassBoardController___c_TypeInfo;
  v91 = v89;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v90 = ClassBoardController___c_TypeInfo;
  }
  v92 = v90->static_fields;
  _9__41_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v92->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( (BYTE3(v90->vtable._0_Equals.methodPtr) & 4) != 0 && !v90->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v90);
      v92 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v94 = (Il2CppObject *)v92->__9;
    _9__41_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__41_1,
      v94,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ClassBoardLock__int___ctor__);
    v95 = ClassBoardController___c_TypeInfo->static_fields;
    v95->__9__41_1 = (struct System_Func_ClassBoardLock__int__o *)_9__41_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v95->__9__41_1,
      (System_Int32_array **)_9__41_1,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
  }
  v102 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                v91,
                                                                (System_Func_TSource__TKey__o *)_9__41_1,
                                                                (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v68 + 16) = 0;
  v103 = v102;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v102,
         (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v68 + 16) = 1;
    v104 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
             v103,
             (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v105 = ClassBoardController___c_TypeInfo;
    v106 = (System_Collections_Generic_IEnumerable_TSource__o *)v104;
    if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v105 = ClassBoardController___c_TypeInfo;
    }
    v107 = v105->static_fields;
    _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v107->__9__41_2;
    if ( !_9__41_2 )
    {
      if ( (BYTE3(v105->vtable._0_Equals.methodPtr) & 4) != 0 && !v105->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v105);
        v107 = ClassBoardController___c_TypeInfo->static_fields;
      }
      v109 = (Il2CppObject *)v107->__9;
      _9__41_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__41_2,
        v109,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__41_2__,
        (const MethodInfo_2C3041C *)Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__);
      v110 = ClassBoardController___c_TypeInfo->static_fields;
      v110->__9__41_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__41_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v110->__9__41_2,
        (System_Int32_array **)_9__41_2,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
    }
    v117 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                  v106,
                                                                  (System_Func_TSource__TResult__o *)_9__41_2,
                                                                  (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v118 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                       v117,
                                                                                       (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v118, 0LL);
  }
  effectController = this->fields.effectController;
  v120 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v120,
    (Il2CppObject *)v68,
    Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_38:
    sub_B5D69C(v69, v70);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v120, v121);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  ClassBoardEffectController_o *effectController; // x22
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s8
  float v33; // s9
  float v34; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  System_Action_o *v38; // x19
  const MethodInfo *v39; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9C0A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)square, (_DWORD)callback, method);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__, v7, v8, v9);
    sub_B5D5C4(&ClassBoardController___c__DisplayClass43_0_TypeInfo, v10, v11, v12);
    byte_42E9C0A = 1;
  }
  v13 = sub_B5D694(ClassBoardController___c__DisplayClass43_0_TypeInfo);
  ClassBoardController___c__DisplayClass43_0___ctor((ClassBoardController___c__DisplayClass43_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)callback, v22, v23, v24, v25, v26, v27);
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
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  transform = this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v32 = v29;
  v33 = v30;
  v34 = v31;
  localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v38,
    (Il2CppObject *)v13,
    Method_ClassBoardController___c__DisplayClass43_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_B5D69C(transform, v15);
  v41.fields.x = v32 * x;
  v41.fields.y = v33 * y;
  v41.fields.z = v34 * z;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v41, v38, v39);
}


void __fastcall ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x21
  ClassBoardUIController_o *v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v35; // x22
  const MethodInfo *v36; // x3

  if ( (byte_42E9C07 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)square, (_DWORD)endAct, method);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__, v13, v14, v15);
    sub_B5D5C4(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v16, v17, v18);
    byte_42E9C07 = 1;
  }
  v19 = sub_B5D694(ClassBoardController___c__DisplayClass40_0_TypeInfo);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_13;
  *(_QWORD *)(v19 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 24) = endAct;
  sub_B5D560((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)endAct, v28, v29, v30, v31, v32, v33);
  v20 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v20 )
    goto LABEL_13;
  ClassBoardUIController__TouchDisable(v20, 0LL);
  v20 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v20 )
    goto LABEL_13;
  ClassBoardUIController__SetCameraWorkBlock(v20, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v20 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v20
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)v20, 0LL),
        (v20 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                             this,
                                             this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList(v20, 0LL),
        effectController = this->fields.effectController,
        v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(
          v35,
          (Il2CppObject *)v19,
          Method_ClassBoardController___c__DisplayClass40_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_13:
    sub_B5D69C(v20, v21);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v35, v36);
}


void __fastcall ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  UnityEngine_Object_o *v44; // x20
  UnityEngine_Component_o *squareViewList; // x0
  __int64 v46; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_IEnumerable_T__o *v48; // x20
  ClassBoardController___c_c *v49; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_0; // x21
  Il2CppObject *v52; // x22
  struct ClassBoardController___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_T__o *v60; // x0
  ClassBoardController___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_T__o *v62; // x20
  struct ClassBoardController___c_StaticFields *v63; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__29_1; // x21
  Il2CppObject *v65; // x22
  struct ClassBoardController___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7

  if ( (byte_42E9BFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ClassBoardLine___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_ClassBoardSquare___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Action_ClassBoardSquare__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Action_ClassBoardLine__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v14, v15, v16);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v17, v18, v19);
    sub_B5D5C4(&Method_BasicHelper_ForEach_ClassBoardLine___, v20, v21, v22);
    sub_B5D5C4(&Method_BasicHelper_ForEach_ClassBoardSquare___, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_ClassBoardController___c__Release_b__29_0__, v35, v36, v37);
    sub_B5D5C4(&Method_ClassBoardController___c__Release_b__29_1__, v38, v39, v40);
    sub_B5D5C4(&ClassBoardController___c_TypeInfo, v41, v42, v43);
    byte_42E9BFE = 1;
  }
  v44 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                  this,
                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  v48 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v49 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v49 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v49->static_fields;
  _9__29_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_0,
      v52,
      Method_ClassBoardController___c__Release_b__29_0__,
      (const MethodInfo_258B320 *)Method_System_Action_ClassBoardSquare___ctor__);
    v53 = ClassBoardController___c_TypeInfo->static_fields;
    v53->__9__29_0 = (struct System_Action_ClassBoardSquare__o *)_9__29_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v48,
    (System_Action_T__o *)_9__29_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = (UnityEngine_Component_o *)this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
  v60 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v61 = ClassBoardController___c_TypeInfo;
  v62 = v60;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v61 = ClassBoardController___c_TypeInfo;
  }
  v63 = v61->static_fields;
  _9__29_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v63->__9__29_1;
  if ( !_9__29_1 )
  {
    if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61);
      v63 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)v63->__9;
    _9__29_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ClassBoardLine__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__29_1,
      v65,
      Method_ClassBoardController___c__Release_b__29_1__,
      (const MethodInfo_258B320 *)Method_System_Action_ClassBoardLine___ctor__);
    v66 = ClassBoardController___c_TypeInfo->static_fields;
    v66->__9__29_1 = (struct System_Action_ClassBoardLine__o *)_9__29_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v66->__9__29_1,
      (System_Int32_array **)_9__29_1,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v62,
    (System_Action_T__o *)_9__29_1,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  squareViewList = (UnityEngine_Component_o *)this->fields.lineViewList;
  if ( !squareViewList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_ClassBoardLine__Clear__),
        this->fields.effectController = 0LL,
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.effectController, 0LL, v73, v74, v75, v76, v77, v78),
        this->fields.background = 0LL,
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.background, 0LL, v79, v80, v81, v82, v83, v84),
        (squareViewList = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                                       this,
                                                       this->klass->vtable._7_SetupClassBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_32:
    sub_B5D69C(squareViewList, v46);
  }
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)squareViewList, 0LL);
}


void __fastcall ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9BFF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    byte_42E9BFF = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr,
                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    v7 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
           this,
           this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v7 )
      sub_B5D69C(0LL, v8);
    *(_QWORD *)(v7 + 80) = action;
    sub_B5D560((BattleServantConfConponent_o *)(v7 + 80), (System_Int32_array **)action, v9, v10, v11, v12, v13, v14);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v54; // x2
  UnityEngine_Texture_o *targetTexture; // x23
  MapCamera_o *v56; // x23
  const MethodInfo_234ED3C *v57; // x2
  BalanceConfig_c *v58; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  System_Action_o *v61; // x23
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  const MethodInfo *v68; // x3
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x1
  Il2CppObject *current; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v72; // x23
  __int64 v73; // x0
  __int64 v74; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v77; // x23
  ClassBoardEffectController_o *v78; // x24
  const MethodInfo *v79; // x5
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v87; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v88; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v90; // 0:x3.8
  System_Nullable_Vector3__o v91; // 0:x0.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9BFD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_ClassBoardSquare___ctor__,
      (_DWORD)setResourceCatalog,
      (_DWORD)classBoardBackground,
      *(_QWORD *)&baseId);
    sub_B5D5C4(&System_Action_ClassBoardSquare__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Action_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_ClassBoardController_ShowBoard__, v22, v23, v24);
    sub_B5D5C4(&ClassBoardEffectController_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v43, v44, v45);
    byte_42E9BFD = 1;
  }
  memset(&v88, 0, sizeof(v88));
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resourceCatalog,
    (System_Int32_array **)setResourceCatalog,
    (System_String_array **)classBoardBackground,
    *(System_String_array ***)&baseId,
    *(System_Boolean_array ***)&iconId,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.background = classBoardBackground;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.background,
    (System_Int32_array **)classBoardBackground,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_24;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v54);
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
  v56 = this->fields.mapCamera;
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v91.fields.value.fields.x = &v87;
  *(_QWORD *)&v87.fields.value.fields.x = 0LL;
  *(_QWORD *)&v87.fields.value.fields.z = 0LL;
  *(_QWORD *)&v91.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v91, zero, v57);
  v58 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v58 = BalanceConfig_TypeInfo;
  }
  static_fields = v58->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  if ( !v56 )
    goto LABEL_24;
  v90 = size;
  MapCamera__StartAutoWork(v56, 0.0, v87, v90, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v61, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v61;
  sub_B5D560(
    (BattleServantConfConponent_o *)&classBoardBackground->fields.showBoardCallback,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v68);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v69);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL),
        ClassBoardController__CreateViews(this, v70),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_24:
    sub_B5D69C(mapCamera, v52);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v88,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapCamera,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v88,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v88.fields.current;
    v72 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v72,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      (const MethodInfo_258B320 *)Method_System_Action_ClassBoardSquare___ctor__);
    if ( !current )
      sub_B5D69C(v73, v74);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v72, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v88,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v77 = this->fields.mapCamera;
  v78 = (ClassBoardEffectController_o *)sub_B5D694(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v78,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v77,
    classBoardBackground,
    v79);
  this->fields.effectController = v78;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectController,
    (System_Int32_array **)v78,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v40; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v44; // x20
  System_Action_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x20
  System_Action_o *v53; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  Il2CppObject *v60; // x0
  System_String_o *v61; // x20
  ClassBoardUIController_o *v62; // x21
  ClassBoardUIController_o *v63; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  System_Int32_array *v65; // x20
  ClassBoardController_o *v66; // x19
  int32_t v67; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42E9C05 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardController_OnClickEffectList__, v8, v9, v10);
    sub_B5D5C4(&Method_ClassBoardController_OnClickHelp__, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&int_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_19920/*"img_txt_classscore_{0}"*/, v32, v33, v34);
    this = (ClassBoardController_o *)sub_B5D5C4(&StringLiteral_3073/*"CLASS_BOARD_HEADER_MESSAGE"*/, v35, v36, v37);
    byte_42E9C05 = 1;
  }
  entity = 0LL;
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_30;
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
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(v4->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL, v3);
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
                    (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
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
  v44 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)v4, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v44 )
    goto LABEL_30;
  *(_QWORD *)(v44 + 88) = v45;
  sub_B5D560((BattleServantConfConponent_o *)(v44 + 88), (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
  v52 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v53 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v53, (Il2CppObject *)v4, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v52 )
    goto LABEL_30;
  *(_QWORD *)(v52 + 96) = v53;
  sub_B5D560((BattleServantConfConponent_o *)(v52 + 96), (System_Int32_array **)v53, v54, v55, v56, v57, v58, v59);
  v67 = v4->fields.baseId;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  v61 = System_String__Format((System_String_o *)StringLiteral_19920/*"img_txt_classscore_{0}"*/, v60, 0LL);
  v62 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                      v4,
                                      v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v62 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderTitle(v62, (AtlasManagerUnit_o *)this, v61, 0LL);
  v63 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                      v4,
                                      v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3073/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v63 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderMessage(v63, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_30;
  this = (ClassBoardController_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     &entity,
                                     v4->fields.baseId,
                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    || (v65 = *(System_Int32_array **)&entity->fields.flag,
        v66 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v66) )
  {
LABEL_30:
    sub_B5D69C(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList((ClassBoardUIController_o *)v66, v65, (AtlasManagerUnit_o *)this, 0LL);
}


void __fastcall ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x20
  System_Enum_o *HasFlag; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Enum_o **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x3
  __int64 *v38; // x22
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  IClassBoardSquareModel_c **v41; // x11
  __int64 v42; // x0
  int v43; // w0
  System_Enum_o *v44; // x22
  __int64 v45; // x3
  System_Enum_o *v46; // x8
  __int64 v47; // x11
  __int64 *monitor; // x22
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  IClassBoardSquareModel_c **v51; // x11
  __int64 v52; // x0
  ClassBoardSquare_o *v53; // x21
  System_Action_o *v54; // x22
  const MethodInfo *v55; // x3
  int v56; // [xsp+8h] [xbp-38h] BYREF
  int v57; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E9C06 & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)square, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ClassBoardLock_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__, v15, v16, v17);
    sub_B5D5C4(&ClassBoardController___c__DisplayClass39_0_TypeInfo, v18, v19, v20);
    byte_42E9C06 = 1;
  }
  v21 = sub_B5D694(ClassBoardController___c__DisplayClass39_0_TypeInfo);
  ClassBoardController___c__DisplayClass39_0___ctor((ClassBoardController___c__DisplayClass39_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_30;
  *(_QWORD *)(v21 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 32) = square;
  v30 = (System_Enum_o **)(v21 + 32);
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 32), (System_Int32_array **)square, v31, v32, v33, v34, v35, v36);
  if ( !*(_QWORD *)(v21 + 32) )
    goto LABEL_30;
  v38 = *(__int64 **)(*(_QWORD *)(v21 + 32) + 168LL);
  if ( !v38 )
    goto LABEL_30;
  v39 = *v38;
  if ( *(_WORD *)(*v38 + 298) )
  {
    v40 = 0LL;
    v41 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *(v41 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v40;
      v41 += 2;
      if ( v40 >= *(unsigned __int16 *)(*v38 + 298) )
        goto LABEL_10;
    }
    v42 = v39 + 16LL * (*(_DWORD *)v41 + 13) + 312;
  }
  else
  {
LABEL_10:
    v42 = sub_AF54C0(v38, IClassBoardSquareModel_TypeInfo, 13LL, v37);
  }
  v43 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v42)(v38, 0LL, *(_QWORD *)(v42 + 8));
  *(_DWORD *)(v21 + 16) = v43;
  v57 = v43;
  v44 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v57);
  v56 = 1;
  HasFlag = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v56);
  if ( !v44 )
    goto LABEL_30;
  HasFlag = (System_Enum_o *)System_Enum__HasFlag(v44, HasFlag, 0LL);
  v46 = *v30;
  if ( ((unsigned __int8)HasFlag & 1) != 0 )
  {
    if ( !v46 )
      goto LABEL_30;
    v47 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v46->klass->_2.bitflags2 + 1) >= (unsigned int)v47
      && (ClassBoardLock_c *)v46->klass->_2.typeHierarchy[v47 - 1] == ClassBoardLock_TypeInfo )
    {
      return;
    }
  }
  else if ( !v46 )
  {
    goto LABEL_30;
  }
  monitor = (__int64 *)v46[10].monitor;
  if ( !monitor )
LABEL_30:
    sub_B5D69C(HasFlag, v23);
  v49 = *monitor;
  if ( *(_WORD *)(*monitor + 298) )
  {
    v50 = 0LL;
    v51 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *(v51 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v50;
      v51 += 2;
      if ( v50 >= *(unsigned __int16 *)(*monitor + 298) )
        goto LABEL_24;
    }
    v52 = v49 + 16LL * (*(_DWORD *)v51 + 5) + 312;
  }
  else
  {
LABEL_24:
    v52 = sub_AF54C0(monitor, IClassBoardSquareModel_TypeInfo, 5LL, v45);
  }
  if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v52)(monitor, *(_QWORD *)(v52 + 8)) & 1) == 0 )
  {
    HasFlag = *v30;
    if ( *v30 )
    {
      ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)HasFlag, 1, 0LL);
      v53 = *(ClassBoardSquare_o **)(v21 + 32);
      v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v21,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v53, v54, v55);
      return;
    }
    goto LABEL_30;
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E9C0B & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9C0B = 1;
  }
  v5 = sub_B5D694(ClassBoardController__ShowBoardCoroutine_d__45_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__45___ctor((ClassBoardController__ShowBoardCoroutine_d__45_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
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
    sub_B5D69C(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__32_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E9C0D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E9C0D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                    this,
                                    this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
    sub_B5D69C(0LL, v3);
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
    sub_B5D69C(0LL, v3);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  UnityEngine_Component_o *klass; // x0
  Il2CppObject *_4__this; // x19
  __int64 v34; // x1
  Il2CppObject **p__2__current; // x20
  __int64 v36; // x1
  int v37; // w20
  System_Action_o *v38; // x20
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+0h] [xbp-70h] BYREF
  int v41[2]; // [xsp+18h] [xbp-58h]
  int v42; // [xsp+20h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+28h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-30h] BYREF

  if ( (byte_42E5E79 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v29, v30, v31);
    byte_42E5E79 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v43, 0, sizeof(v43));
  v42 = 0;
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
          &v40,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
        for ( i = v40;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields.current->klass->vtable[7].method)(
                i.fields.current,
                i.fields.current->klass->vtable[8].methodPtr) )
        {
          if ( !i.fields.current )
            sub_B5D69C(0LL, v34);
        }
        v41[0] = 124;
        v42 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
        v42 = 0;
        klass = (UnityEngine_Component_o *)_4__this[6].monitor;
        if ( klass )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v43,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v43,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
          {
            if ( !v43.fields.current )
              sub_B5D69C(0LL, v36);
            ClassBoardLine__PlayTransition((ClassBoardLine_o *)v43.fields.current, 0LL);
          }
          v41[0] = 175;
          v37 = ++v42;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v43,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
          if ( v37 && v41[v37 - 1] == 175 )
            v42 = v37 - 1;
          klass = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))_4__this->klass->vtable[4].method)(
                                               _4__this,
                                               _4__this->klass->vtable[5].methodPtr);
          if ( klass )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)klass, 1, 0LL);
            v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v38, _4__this, Method_ClassBoardController__ShowBoardCoroutine_b__45_0__, 0LL);
            EventTutorialMaster__CheckTutorial(0, 82, v38, 0, 0, 0, 0, 0LL);
            LOBYTE(klass) = 0;
            return (char)klass;
          }
        }
      }
LABEL_27:
      sub_B5D69C(klass, method);
    }
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ClassBoardController__ShowBoardCoroutine_d__45_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ClassBoardController___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E6B & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardController___c_TypeInfo, v1, v2, v3);
    byte_42E5E6B = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ClassBoardController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardController___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  IClassBoardLockModel_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v15; // w1
  const MethodInfo *v16; // x2
  __int64 v17; // x3
  IClassBoardLockModel_c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  System_Enum_o *v22; // x20
  __int64 v23; // x3
  IClassBoardLockModel_c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  System_Enum_o *v28; // x20
  __int64 v29; // x3
  char v30; // w8
  IClassBoardLockModel_c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v36; // [xsp+0h] [xbp-40h] BYREF
  int v37; // [xsp+8h] [xbp-38h]
  int v38; // [xsp+18h] [xbp-28h] BYREF
  int v39; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v40; // 0:x0.12

  if ( (byte_42E5E70 & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, v5, v6, v7);
    this = (ClassBoardController___c_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v8, v9, v10);
    byte_42E5E70 = 1;
  }
  v37 = 0;
  v36 = 0LL;
  if ( !x )
    goto LABEL_36;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(x, IClassBoardLockModel_TypeInfo, 0LL, v3);
  }
  v36 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v37 = v15;
  *(_QWORD *)&v40.fields.Type = &v36;
  v40.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v40, v16) )
    goto LABEL_27;
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
        goto LABEL_15;
    }
    v21 = (__int64)&v18->vtable[*v20 + 13].method;
  }
  else
  {
LABEL_15:
    v21 = sub_AF54C0(x, IClassBoardSquareModel_TypeInfo, 13LL, v17);
  }
  v39 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v21)(x, 0LL, *(_QWORD *)(v21 + 8));
  v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v39);
  v38 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v38);
  if ( !v22 )
    goto LABEL_36;
  if ( System_Enum__HasFlag(v22, (System_Enum_o *)this, 0LL) )
  {
LABEL_27:
    v30 = 0;
    return v30 & 1;
  }
  v24 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v26 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_23;
    }
    v27 = (__int64)&v24->vtable[*v26 + 13].method;
  }
  else
  {
LABEL_23:
    v27 = sub_AF54C0(x, IClassBoardSquareModel_TypeInfo, 13LL, v23);
  }
  v39 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v27)(x, 0LL, *(_QWORD *)(v27 + 8));
  v28 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v39);
  v38 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v38);
  if ( !v28 )
LABEL_36:
    sub_B5D69C(this, x);
  if ( System_Enum__HasFlag(v28, (System_Enum_o *)this, 0LL) )
    goto LABEL_27;
  v32 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v34 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v35 = (__int64)&v32->vtable[*v34 + 1].method;
  }
  else
  {
LABEL_33:
    v35 = sub_AF54C0(x, IClassBoardLockModel_TypeInfo, 1LL, v29);
  }
  v30 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v35)(x, *(_QWORD *)(v35 + 8)) ^ 1;
  return v30 & 1;
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

  if ( (byte_42E5E71 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5E71 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
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
    p_method = sub_AF54C0(x, IClassBoardSquareModel_TypeInfo, 0LL, v3);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


bool __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x3
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v13; // x20
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  int v17; // w1
  const MethodInfo *v18; // x2
  __int64 v19; // x3
  ClassBoardController___c_c *v20; // x8
  ClassBoardController___c_o *v21; // x20
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  System_Enum_o *v25; // x20
  __int64 v26; // x3
  ClassBoardController___c_c *v27; // x8
  ClassBoardController___c_o *v28; // x20
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  System_Enum_o *v32; // x20
  char v33; // w8
  __int64 v35; // x3
  ClassBoardController___c_c *v36; // x8
  ClassBoardController___c_o *v37; // x19
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0
  __int64 v41; // [xsp+0h] [xbp-40h] BYREF
  int v42; // [xsp+8h] [xbp-38h]
  int v43; // [xsp+18h] [xbp-28h] BYREF
  int v44; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v45; // 0:x0.12

  if ( (byte_42E5E6E & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    sub_B5D5C4(&IClassBoardLockModel_TypeInfo, v5, v6, v7);
    this = (ClassBoardController___c_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v8, v9, v10);
    byte_42E5E6E = 1;
  }
  v42 = 0;
  v41 = 0LL;
  if ( !x )
    goto LABEL_40;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  klass = this->klass;
  v13 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v16 = sub_AF54C0(this, IClassBoardLockModel_TypeInfo, 0LL, v11);
  }
  v41 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v16)(v13, *(_QWORD *)(v16 + 8));
  v42 = v17;
  *(_QWORD *)&v45.fields.Type = &v41;
  v45.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v45, v18) )
    goto LABEL_30;
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
        goto LABEL_17;
    }
    v24 = (__int64)(&v20[1]._1.methods + 2 * *v23);
  }
  else
  {
LABEL_17:
    v24 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 13LL, v19);
  }
  v44 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v24)(v21, 0LL, *(_QWORD *)(v24 + 8));
  v25 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v44);
  v43 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v43);
  if ( !v25 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v25, (System_Enum_o *)this, 0LL) )
  {
LABEL_30:
    v33 = 0;
    return v33 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  v27 = this->klass;
  v28 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v30 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v31 = (__int64)(&v27[1]._1.methods + 2 * *v30);
  }
  else
  {
LABEL_26:
    v31 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 13LL, v26);
  }
  v44 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v31)(v28, 0LL, *(_QWORD *)(v31 + 8));
  v32 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v44);
  v43 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v43);
  if ( !v32 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v32, (System_Enum_o *)this, 0LL) )
    goto LABEL_30;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_40:
    sub_B5D69C(this, x);
  v36 = this->klass;
  v37 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v36->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v39 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v40 = (__int64)(&v36->vtable._1_Finalize.method + 2 * *v39);
  }
  else
  {
LABEL_37:
    v40 = sub_AF54C0(this, IClassBoardLockModel_TypeInfo, 1LL, v35);
  }
  v33 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8)) ^ 1;
  return v33 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x3
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v7; // x19
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0

  if ( (byte_42E5E6F & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5E6F = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_B5D69C(this, x);
  klass = this->klass;
  v7 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v10 = sub_AF54C0(this, IClassBoardSquareModel_TypeInfo, 0LL, v5);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__41_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__40_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E5E6C & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5E6C = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__29_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E5E6D & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5E6D = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  System_Enum_o *v65; // x20
  __int64 HasFlag; // x0
  __int64 v67; // x1
  __int64 v68; // x3
  BaseMonoBehaviour_o *_4__this; // x20
  __int64 *monitor; // x21
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  System_Enum_o *v75; // x20
  __int64 v76; // x3
  BaseMonoBehaviour_o *v77; // x20
  __int64 *v78; // x21
  __int64 v79; // x8
  unsigned __int64 v80; // x10
  int *v81; // x11
  __int64 v82; // x0
  System_Enum_o *v83; // x20
  __int64 v84; // x3
  BaseMonoBehaviour_o *v85; // x20
  __int64 *v86; // x21
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  struct ClassBoardController_o *v91; // x8
  ClassBoardSquareDetailDialog_o *v92; // x20
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  System_Enum_o *v95; // x20
  __int64 v96; // x3
  BaseMonoBehaviour_o *v97; // x20
  __int64 *v98; // x21
  __int64 v99; // x8
  unsigned __int64 v100; // x10
  int *v101; // x11
  __int64 v102; // x0
  struct ClassBoardController_o *v103; // x8
  ClassBoardDisableOpenDialog_o *v104; // x20
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v106; // x21
  System_Enum_o *v107; // x20
  __int64 v108; // x3
  BaseMonoBehaviour_o *v109; // x20
  __int64 *v110; // x21
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  int *v113; // x11
  __int64 v114; // x0
  struct ClassBoardController_o *v115; // x8
  ClassBoardLockReleaseConditionDialog_o *v116; // x20
  System_Action_o *_9__3; // x22
  ClassBoardSquare_o *v118; // x21
  struct ClassBoardSquare_o *v119; // x8
  __int64 v120; // x11
  struct ClassBoardSquare_o *v121; // x22
  struct ClassBoardController_o *v122; // x8
  ClassBoardLockOpenConfirmDialog_o *v123; // x20
  struct ClassBoardSquare_o *v124; // x21
  ClassBoardController___c_c *v125; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__39_4; // x22
  Il2CppObject *v128; // x23
  struct ClassBoardController___c_StaticFields *v129; // x0
  System_Action_o *_9__5; // x23
  ClassBoardLockOpenConfirmDialog_o *v131; // x0
  ClassBoardSquare_o *v132; // x1
  bool v133; // w2
  struct ClassBoardController_o *v134; // x8
  ClassBoardSquareOpenConfirmDialog_o *v135; // x20
  struct ClassBoardSquare_o *v136; // x21
  ClassBoardController___c_c *v137; // x0
  struct ClassBoardController___c_StaticFields *v138; // x8
  System_Action_o *_9__39_6; // x22
  Il2CppObject *v140; // x23
  struct ClassBoardController___c_StaticFields *v141; // x0
  System_Action_o *_9__7; // x23
  ClassBoardSquareOpenConfirmDialog_o *v143; // x0
  ClassBoardSquare_o *v144; // x1
  bool v145; // w2
  BaseMonoBehaviour_o *v146; // x20
  __int64 *v147; // x21
  __int64 v148; // x8
  unsigned __int64 v149; // x10
  int *v150; // x11
  __int64 v151; // x0
  struct ClassBoardController_o *v152; // x8
  ClassBoardLockOpenConfirmDialog_o *v153; // x20
  struct ClassBoardSquare_o *v154; // x21
  ClassBoardSquareOpenConfirmDialog_o *v155; // x20
  struct ClassBoardSquare_o *v156; // x21
  int v157; // [xsp+8h] [xbp-38h] BYREF
  int32_t acquireFlag; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E5E72 & 1) == 0 )
  {
    sub_B5D5C4(&AcquireFlag_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v8, v9, v10);
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v11, v12, v13);
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v14, v15, v16);
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v17, v18, v19);
    sub_B5D5C4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v20, v21, v22);
    sub_B5D5C4(&ClassBoardLock_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&IClassBoardResourceCatalog_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, v29, v30, v31);
    sub_B5D5C4(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, v32, v33, v34);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__, v35, v36, v37);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__, v38, v39, v40);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__, v41, v42, v43);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__, v44, v45, v46);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__, v47, v48, v49);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__, v50, v51, v52);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__, v53, v54, v55);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__, v56, v57, v58);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__, v59, v60, v61);
    sub_B5D5C4(&ClassBoardController___c_TypeInfo, v62, v63, v64);
    byte_42E5E72 = 1;
  }
  acquireFlag = this->fields.acquireFlag;
  v65 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v157 = 1;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v157);
  if ( !v65 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v65, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) != 0 )
  {
    _4__this = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( _4__this )
    {
      monitor = (__int64 *)_4__this[3].monitor;
      if ( monitor )
      {
        v71 = *monitor;
        if ( *(_WORD *)(*monitor + 298) )
        {
          v72 = 0LL;
          v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
          while ( *((IClassBoardResourceCatalog_c **)v73 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v72;
            v73 += 4;
            if ( v72 >= *(unsigned __int16 *)(*monitor + 298) )
              goto LABEL_11;
          }
          v74 = v71 + 16LL * *v73 + 312;
        }
        else
        {
LABEL_11:
          v74 = sub_AF54C0(_4__this[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v68);
        }
        HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v74)(monitor, *(_QWORD *)(v74 + 8));
        if ( HasFlag )
        {
          v91 = this->fields.__4__this;
          if ( v91 )
          {
            HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                                 _4__this,
                                 *(Il2CppObject **)(HasFlag + 80),
                                 v91->fields.uiRoot,
                                 0LL,
                                 (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
            if ( HasFlag )
            {
              v92 = (ClassBoardSquareDetailDialog_o *)HasFlag;
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
                    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                    System_Action___ctor(
                      _9__1,
                      (Il2CppObject *)this,
                      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__1__,
                      0LL);
                    this->fields.__9__1 = _9__1;
                    sub_B5D560(&this->fields.__9__1);
                  }
                  ClassBoardSquareDetailDialog__Open(v92, square, _9__1, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_146:
    sub_B5D69C(HasFlag, v67);
  }
  acquireFlag = this->fields.acquireFlag;
  v75 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v157 = 2;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v157);
  if ( !v75 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v75, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) != 0 )
  {
    v77 = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( !v77 )
      goto LABEL_146;
    v78 = (__int64 *)v77[3].monitor;
    if ( !v78 )
      goto LABEL_146;
    v79 = *v78;
    if ( *(_WORD *)(*v78 + 298) )
    {
      v80 = 0LL;
      v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v81 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v80;
        v81 += 4;
        if ( v80 >= *(unsigned __int16 *)(*v78 + 298) )
          goto LABEL_20;
      }
      v82 = v79 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_20:
      v82 = sub_AF54C0(v77[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v76);
    }
    HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v82)(v78, *(_QWORD *)(v82 + 8));
    if ( !HasFlag )
      goto LABEL_146;
    v103 = this->fields.__4__this;
    if ( !v103 )
      goto LABEL_146;
    HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                         v77,
                         *(Il2CppObject **)(HasFlag + 48),
                         v103->fields.uiRoot,
                         0LL,
                         (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !HasFlag )
      goto LABEL_146;
    v104 = (ClassBoardDisableOpenDialog_o *)HasFlag;
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
    v106 = this->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B5D560(&this->fields.__9__2);
    }
    ClassBoardDisableOpenDialog__Open(v104, v106, _9__2, 0LL);
    return;
  }
  acquireFlag = this->fields.acquireFlag;
  v83 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v157 = 4;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v157);
  if ( !v83 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v83, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) == 0 )
  {
    acquireFlag = this->fields.acquireFlag;
    v95 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v157 = 16;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v157);
    if ( !v95 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v95, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v97 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v97 )
        goto LABEL_146;
      v98 = (__int64 *)v97[3].monitor;
      if ( !v98 )
        goto LABEL_146;
      v99 = *v98;
      if ( *(_WORD *)(*v98 + 298) )
      {
        v100 = 0LL;
        v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v101 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v100;
          v101 += 4;
          if ( v100 >= *(unsigned __int16 *)(*v98 + 298) )
            goto LABEL_47;
        }
        v102 = v99 + 16LL * *v101 + 312;
      }
      else
      {
LABEL_47:
        v102 = sub_AF54C0(v97[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v96);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v102)(v98, *(_QWORD *)(v102 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v122 = this->fields.__4__this;
      if ( !v122 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v97,
                           *(Il2CppObject **)(HasFlag + 64),
                           v122->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v123 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
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
      v124 = this->fields.square;
      v125 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v125 = ClassBoardController___c_TypeInfo;
      }
      static_fields = v125->static_fields;
      _9__39_4 = static_fields->__9__39_4;
      if ( !_9__39_4 )
      {
        if ( (BYTE3(v125->vtable._0_Equals.methodPtr) & 4) != 0 && !v125->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v125);
          static_fields = ClassBoardController___c_TypeInfo->static_fields;
        }
        v128 = (Il2CppObject *)static_fields->__9;
        _9__39_4 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__39_4, v128, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_4__, 0LL);
        v129 = ClassBoardController___c_TypeInfo->static_fields;
        v129->__9__39_4 = _9__39_4;
        sub_B5D560(&v129->__9__39_4);
      }
      _9__5 = this->fields.__9__5;
      if ( !_9__5 )
      {
        _9__5 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__5,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__5__,
          0LL);
        this->fields.__9__5 = _9__5;
        sub_B5D560(&this->fields.__9__5);
      }
      v131 = v123;
      v132 = v124;
      v133 = 0;
LABEL_134:
      ClassBoardLockOpenConfirmDialog__Open(v131, v132, v133, _9__39_4, _9__5, 0LL);
      return;
    }
    acquireFlag = this->fields.acquireFlag;
    v107 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v157 = 8;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v157);
    if ( !v107 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v107, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v109 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v109 )
        goto LABEL_146;
      v110 = (__int64 *)v109[3].monitor;
      if ( !v110 )
        goto LABEL_146;
      v111 = *v110;
      if ( *(_WORD *)(*v110 + 298) )
      {
        v112 = 0LL;
        v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v113 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v112;
          v113 += 4;
          if ( v112 >= *(unsigned __int16 *)(*v110 + 298) )
            goto LABEL_65;
        }
        v114 = v111 + 16LL * *v113 + 312;
      }
      else
      {
LABEL_65:
        v114 = sub_AF54C0(v109[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v108);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v114)(v110, *(_QWORD *)(v114 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v134 = this->fields.__4__this;
      if ( !v134 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v109,
                           *(Il2CppObject **)(HasFlag + 56),
                           v134->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v135 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
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
      v136 = this->fields.square;
      v137 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v137 = ClassBoardController___c_TypeInfo;
      }
      v138 = v137->static_fields;
      _9__39_6 = v138->__9__39_6;
      if ( !_9__39_6 )
      {
        if ( (BYTE3(v137->vtable._0_Equals.methodPtr) & 4) != 0 && !v137->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v137);
          v138 = ClassBoardController___c_TypeInfo->static_fields;
        }
        v140 = (Il2CppObject *)v138->__9;
        _9__39_6 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__39_6, v140, Method_ClassBoardController___c__SetupSquareOnClickListener_b__39_6__, 0LL);
        v141 = ClassBoardController___c_TypeInfo->static_fields;
        v141->__9__39_6 = _9__39_6;
        sub_B5D560(&v141->__9__39_6);
      }
      _9__7 = this->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__7__,
          0LL);
        this->fields.__9__7 = _9__7;
        sub_B5D560(&this->fields.__9__7);
      }
      v143 = v135;
      v144 = v136;
      v145 = 0;
    }
    else
    {
      v119 = this->fields.square;
      if ( v119
        && (v120 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1), *(&v119->klass->_2.bitflags2 + 1) >= (unsigned int)v120) )
      {
        if ( (ClassBoardLock_c *)v119->klass->_2.typeHierarchy[v120 - 1] == ClassBoardLock_TypeInfo )
          v121 = this->fields.square;
        else
          v121 = 0LL;
      }
      else
      {
        v121 = 0LL;
      }
      v146 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v146 )
        goto LABEL_146;
      v147 = (__int64 *)v146[3].monitor;
      if ( !v147 )
        goto LABEL_146;
      v148 = *v147;
      if ( *(_WORD *)(*v147 + 298) )
      {
        v149 = 0LL;
        v150 = (int *)(*(_QWORD *)(v148 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v150 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v149;
          v150 += 4;
          if ( v149 >= *(unsigned __int16 *)(*v147 + 298) )
            goto LABEL_121;
        }
        v151 = v148 + 16LL * *v150 + 312;
      }
      else
      {
LABEL_121:
        v151 = sub_AF54C0(v146[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v108);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v151)(v147, *(_QWORD *)(v151 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v152 = this->fields.__4__this;
      if ( v121 )
      {
        if ( !v152 )
          goto LABEL_146;
        HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                             v146,
                             *(Il2CppObject **)(HasFlag + 64),
                             v152->fields.uiRoot,
                             0LL,
                             (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( !HasFlag )
          goto LABEL_146;
        v153 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
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
        v154 = this->fields.square;
        if ( !_9__39_4 )
        {
          _9__39_4 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            _9__39_4,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__8__,
            0LL);
          this->fields.__9__8 = _9__39_4;
          sub_B5D560(&this->fields.__9__8);
        }
        _9__5 = this->fields.__9__9;
        if ( !_9__5 )
        {
          _9__5 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            _9__5,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__9__,
            0LL);
          this->fields.__9__9 = _9__5;
          sub_B5D560(&this->fields.__9__9);
        }
        v133 = 1;
        v131 = v153;
        v132 = v154;
        goto LABEL_134;
      }
      if ( !v152 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v146,
                           *(Il2CppObject **)(HasFlag + 56),
                           v152->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v155 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
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
      v156 = this->fields.square;
      if ( !_9__39_6 )
      {
        _9__39_6 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__39_6,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__12__,
          0LL);
        this->fields.__9__12 = _9__39_6;
        sub_B5D560(&this->fields.__9__12);
      }
      _9__7 = this->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__13__,
          0LL);
        this->fields.__9__13 = _9__7;
        sub_B5D560(&this->fields.__9__13);
      }
      v145 = 1;
      v143 = v155;
      v144 = v156;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v143, v144, v145, _9__39_6, _9__7, 0LL);
    return;
  }
  v85 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v85 )
    goto LABEL_146;
  v86 = (__int64 *)v85[3].monitor;
  if ( !v86 )
    goto LABEL_146;
  v87 = *v86;
  if ( *(_WORD *)(*v86 + 298) )
  {
    v88 = 0LL;
    v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
    while ( *((IClassBoardResourceCatalog_c **)v89 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v88;
      v89 += 4;
      if ( v88 >= *(unsigned __int16 *)(*v86 + 298) )
        goto LABEL_29;
    }
    v90 = v87 + 16LL * *v89 + 312;
  }
  else
  {
LABEL_29:
    v90 = sub_AF54C0(v85[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL, v84);
  }
  HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
  if ( !HasFlag )
    goto LABEL_146;
  v115 = this->fields.__4__this;
  if ( !v115 )
    goto LABEL_146;
  HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                       v85,
                       *(Il2CppObject **)(HasFlag + 72),
                       v115->fields.uiRoot,
                       0LL,
                       (const MethodInfo_1AD66E4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
  if ( !HasFlag )
    goto LABEL_146;
  v116 = (ClassBoardLockReleaseConditionDialog_o *)HasFlag;
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
  v118 = this->fields.square;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B5D560(&this->fields.__9__3);
  }
  ClassBoardLockReleaseConditionDialog__Open(v116, v118, 0, _9__3, 0LL);
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
    sub_B5D69C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *klass; // x22
  ClassBoardController_o *monitor; // x20
  ClassBoardSquare_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5E74 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)_, (_DWORD)method, v3);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B5D5C4(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
                                                             v5,
                                                             v6,
                                                             v7);
    byte_42E5E74 = 1;
  }
  klass = (System_Action_o *)v4[5].klass;
  monitor = (ClassBoardController_o *)v4[1].monitor;
  v10 = (ClassBoardSquare_o *)v4[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v4[5].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[5]);
  }
  if ( !monitor )
    sub_B5D69C(this, _);
  ClassBoardController__PlayReleaseEffect(monitor, v10, klass, 0LL);
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
    sub_B5D69C(_4__this, method);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v19; // x8
  unsigned __int64 v20; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v22; // x0
  __int64 v23; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass39_0_o *v25; // x20
  ClassBoardController___c__DisplayClass39_0_c *v26; // x8
  unsigned __int64 v27; // x10
  IClassBoardSquareUser_c **v28; // x11
  __int64 v29; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5E75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_IClassBoardSquareUser___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_IClassBoardSquareUser__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&IClassBoardSquareUser_TypeInfo, v11, v12, v13);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B5D5C4(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
                                                             v14,
                                                             v15,
                                                             v16);
    byte_42E5E75 = 1;
  }
  klass = v4[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v19 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v19->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v20;
      p_offset += 2;
      if ( v20 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v22 = (__int64)&(&v19->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v22 = sub_AF54C0(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL, v3);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v22)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v22 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v4[7].monitor;
  v25 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__14__,
      (const MethodInfo_258B320 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v4[7].monitor = monitor;
    sub_B5D560(&v4[7].monitor);
  }
  if ( !v25 )
LABEL_21:
    sub_B5D69C(this, method);
  v26 = v25->klass;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = (IClassBoardSquareUser_c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v28 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v29 = (__int64)(&v26->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v28);
  }
  else
  {
LABEL_18:
    v29 = sub_AF54C0(v25, IClassBoardSquareUser_TypeInfo, 2LL, v23);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))v29)(
    v25,
    monitor,
    *(_QWORD *)(v29 + 8));
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
    sub_B5D69C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass39_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *klass; // x22
  ClassBoardController_o *monitor; // x20
  ClassBoardSquare_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5E76 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)_, (_DWORD)method, v3);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B5D5C4(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
                                                             v5,
                                                             v6,
                                                             v7);
    byte_42E5E76 = 1;
  }
  klass = (System_Action_o *)v4[7].klass;
  monitor = (ClassBoardController_o *)v4[1].monitor;
  v10 = (ClassBoardSquare_o *)v4[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      klass,
      v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v4[7].klass = (Il2CppClass *)klass;
    sub_B5D560(&v4[7]);
  }
  if ( !monitor )
    sub_B5D69C(this, _);
  ClassBoardController__PlayReleaseEffect(monitor, v10, klass, 0LL);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass39_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v19; // x8
  unsigned __int64 v20; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v22; // x0
  __int64 v23; // x3
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass39_0_o *v25; // x20
  ClassBoardController___c__DisplayClass39_0_c *v26; // x8
  unsigned __int64 v27; // x10
  IClassBoardSquareUser_c **v28; // x11
  __int64 v29; // x0

  v4 = (Il2CppObject *)this;
  if ( (byte_42E5E73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_IClassBoardSquareUser___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_IClassBoardSquareUser__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&IClassBoardSquareUser_TypeInfo, v11, v12, v13);
    this = (ClassBoardController___c__DisplayClass39_0_o *)sub_B5D5C4(
                                                             &Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
                                                             v14,
                                                             v15,
                                                             v16);
    byte_42E5E73 = 1;
  }
  klass = v4[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v19 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v19->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v20;
      p_offset += 2;
      if ( v20 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v22 = (__int64)&(&v19->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v22 = sub_AF54C0(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL, v3);
  }
  this = (ClassBoardController___c__DisplayClass39_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v22)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v22 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v4[5].monitor;
  v25 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v4,
      Method_ClassBoardController___c__DisplayClass39_0__SetupSquareOnClickListener_b__10__,
      (const MethodInfo_258B320 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v4[5].monitor = monitor;
    sub_B5D560(&v4[5].monitor);
  }
  if ( !v25 )
LABEL_21:
    sub_B5D69C(this, method);
  v26 = v25->klass;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    v28 = (IClassBoardSquareUser_c **)&v26->_1.interfaceOffsets->offset;
    while ( *(v28 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v29 = (__int64)(&v26->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v28);
  }
  else
  {
LABEL_18:
    v29 = sub_AF54C0(v25, IClassBoardSquareUser_TypeInfo, 2LL, v23);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass39_0_o *, System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *, _QWORD))v29)(
    v25,
    monitor,
    *(_QWORD *)(v29 + 8));
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
    sub_B5D69C(_4__this, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  void *_4__this; // x0
  __int64 v36; // x1
  struct ClassBoardController_o *v37; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *squareViewList; // x20
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__40_1; // x21
  Il2CppObject *v41; // x22
  struct ClassBoardController___c_StaticFields *v42; // x0
  struct ClassBoardController_o *v43; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *lineViewList; // x20
  struct ClassBoardController___c_StaticFields *v45; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__40_2; // x21
  Il2CppObject *v47; // x22
  struct ClassBoardController___c_StaticFields *v48; // x0

  if ( (byte_42E5E77 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_ClassBoardLine___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Action_ClassBoardSquare___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Action_ClassBoardSquare__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Action_ClassBoardLine__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__, v26, v27, v28);
    sub_B5D5C4(&Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__, v29, v30, v31);
    sub_B5D5C4(&ClassBoardController___c_TypeInfo, v32, v33, v34);
    byte_42E5E77 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  v37 = this->fields.__4__this;
  if ( !v37 )
    goto LABEL_32;
  squareViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v37->fields.squareViewList;
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
    v41 = (Il2CppObject *)static_fields->__9;
    _9__40_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__40_1,
      v41,
      Method_ClassBoardController___c__PlayReleaseEffect_b__40_1__,
      (const MethodInfo_258B320 *)Method_System_Action_ClassBoardSquare___ctor__);
    v42 = ClassBoardController___c_TypeInfo->static_fields;
    v42->__9__40_1 = (struct System_Action_ClassBoardSquare__o *)_9__40_1;
    sub_B5D560(&v42->__9__40_1);
  }
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    squareViewList,
    (System_Action_T__o *)_9__40_1,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v43 = this->fields.__4__this;
  if ( !v43 )
    goto LABEL_32;
  _4__this = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v43->fields.lineViewList;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v45 = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__40_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v45->__9__40_2;
  if ( !_9__40_2 )
  {
    if ( (*((_BYTE *)_4__this + 307) & 4) != 0 && !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      v45 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__40_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_ClassBoardLine__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__40_2,
      v47,
      Method_ClassBoardController___c__PlayReleaseEffect_b__40_2__,
      (const MethodInfo_258B320 *)Method_System_Action_ClassBoardLine___ctor__);
    v48 = ClassBoardController___c_TypeInfo->static_fields;
    v48->__9__40_2 = (struct System_Action_ClassBoardLine__o *)_9__40_2;
    sub_B5D560(&v48->__9__40_2);
  }
  if ( !lineViewList )
LABEL_32:
    sub_B5D69C(_4__this, v36);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    lineViewList,
    (System_Action_T__o *)_9__40_2,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  ClassBoardUIController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  ClassBoardUIController_o *v16; // x20
  System_Action_o *_9__4; // x21

  if ( (byte_42E5E78 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__, v11, v12, v13);
    byte_42E5E78 = 1;
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
  v16 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass41_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B5D560(&this->fields.__9__4);
    }
    if ( v16 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v16, _9__4, 0LL);
      goto LABEL_13;
    }
LABEL_18:
    sub_B5D69C(_4__this, method);
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
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_B5D69C(_4__this, method);
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
    sub_B5D69C(_4__this, method);
  }
  System_Action__Invoke((System_Action_o *)_4__this, 0LL);
}