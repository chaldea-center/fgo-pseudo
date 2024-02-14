void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ClassBoardModelBuilder_o *v8; // x20
  const MethodInfo *v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_4217ADF & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardModelBuilder_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v7);
    byte_4217ADF = 1;
  }
  v8 = (ClassBoardModelBuilder_o *)sub_B0D974(ClassBoardModelBuilder_TypeInfo, method, v2);
  ClassBoardModelBuilder___ctor(v8, v9);
  this->fields._builder_k__BackingField = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._builder_k__BackingField,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ClassBoardSquare__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v18;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.squareViewList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ClassBoardLine__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x1
  __int64 v28; // x2
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
  __int64 v42; // x1
  __int64 v43; // x2
  ClassBoardController___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  struct ClassBoardController___c_StaticFields *v46; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__39_1; // x21
  Il2CppObject *v48; // x22
  struct ClassBoardController___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x20
  ClassBoardUIController_o *v57; // x21
  __int64 v58; // x1
  __int64 v59; // x2
  System_Action_o *v60; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v61; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217ADC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, squareModel);
    sub_B0D8A4(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__39_2__, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v10);
    sub_B0D8A4(&Method_System_Func_IClassBoardLockModel__int___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_IClassBoardLockModel__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_IClassBoardLockModel__bool__TypeInfo, v13);
    sub_B0D8A4(&System_Func_IClassBoardLockModel__int__TypeInfo, v14);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v17);
    sub_B0D8A4(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_0__, v18);
    sub_B0D8A4(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_1__, v19);
    sub_B0D8A4(&ClassBoardController___c_TypeInfo, v20);
    byte_4217ADC = 1;
  }
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                  squareModel,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v21;
  if ( !squareModel )
    goto LABEL_31;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               source,
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
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
    _9__39_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_IClassBoardLockModel__bool__TypeInfo,
                                                                                    v27,
                                                                                    v28);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__39_0,
      v33,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_IClassBoardLockModel__bool___ctor__);
    v34 = ClassBoardController___c_TypeInfo->static_fields;
    v34->__9__39_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__39_0;
    sub_B0D840(
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
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v44 = ClassBoardController___c_TypeInfo;
  v45 = v41;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v44 = ClassBoardController___c_TypeInfo;
  }
  v46 = v44->static_fields;
  _9__39_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v46->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v46 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v46->__9;
    _9__39_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_IClassBoardLockModel__int__TypeInfo,
                                                                                 v42,
                                                                                 v43);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__39_1,
      v48,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_1__,
      (const MethodInfo_2619564 *)Method_System_Func_IClassBoardLockModel__int___ctor__);
    v49 = ClassBoardController___c_TypeInfo->static_fields;
    v49->__9__39_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__39_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v49->__9__39_1,
      (System_Int32_array **)_9__39_1,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v45,
                                                               (System_Func_TSource__TKey__o *)_9__39_1,
                                                               (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v56,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v22 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v22 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v22, 1, 0LL);
      v57 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v60 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v58, v59);
      System_Action___ctor(
        v60,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__39_2__,
        0LL);
      if ( v57 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v57, v60, 0LL);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_B0D97C(v22);
  }
LABEL_30:
  v61 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                    v56,
                                                                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v61, 0LL);
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
  if ( (byte_4217AD7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab);
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7);
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, v8);
    this = (ClassBoardController_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4217AD7 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = v6->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_B0D97C(this);
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
      p_method = sub_AA67A0(v6->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
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
                      (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
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
  __int64 *v15; // x20
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  int *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x20
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  IClassBoardSquareModel_o *v29; // x21
  __int64 v30; // x0
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v36; // x8
  unsigned __int64 v37; // x10
  IClassBoardSquareModel_c **v38; // x11
  __int64 v39; // x0
  __int64 v40; // x0
  IClassBoardSquareModel_c *v41; // x8
  ClassBoardSquare_o *v42; // x22
  IClassBoardSquareModel_c *v43; // x1
  unsigned __int64 v44; // x10
  IClassBoardSquareModel_c **v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
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
  IClassBoardSquareModel_c *v58; // x8
  unsigned __int64 v59; // x10
  IClassBoardSquareModel_c **v60; // x11
  __int64 v61; // x0
  IClassBoardSquareModel_c *v62; // x8
  unsigned __int64 v63; // x10
  IClassBoardSquareModel_c **v64; // x11
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  ClassBoardSquare_o *v67; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v68; // x22
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x0
  __int64 v70; // x8
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  __int64 *v74; // x20
  __int64 v75; // x8
  unsigned __int64 v76; // x10
  int *v77; // x11
  __int64 v78; // x0
  __int64 v79; // x20
  __int64 v80; // x8
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  __int64 v84; // x8
  unsigned __int64 v85; // x10
  int *v86; // x11
  __int64 v87; // x0
  __int64 v88; // x0
  struct IClassBoardResourceCatalog_o *v89; // x22
  IClassBoardResourceCatalog_c *v90; // x8
  IClassBoardLineModel_o *v91; // x21
  unsigned __int64 v92; // x10
  int32_t *v93; // x11
  __int64 v94; // x0
  __int64 v95; // x0
  Il2CppObject *Object_object; // x0
  const MethodInfo *v97; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *v98; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x0
  int v100; // w23
  __int64 v101; // x8
  unsigned __int64 v102; // x10
  int *v103; // x11
  __int64 v104; // x0
  int v105[2]; // [xsp+0h] [xbp-60h]
  int v106; // [xsp+8h] [xbp-58h]

  if ( (byte_4217AD6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, method);
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, v3);
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v13);
    byte_4217AD6 = 1;
  }
  v106 = 0;
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 )
    goto LABEL_143;
  v15 = *(__int64 **)(v14 + 24);
  if ( !v15 )
    goto LABEL_143;
  v16 = *v15;
  if ( *(_WORD *)(*v15 + 298) )
  {
    v17 = 0LL;
    v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v18 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      ++v17;
      v18 += 4;
      if ( v17 >= *(unsigned __int16 *)(*v15 + 298) )
        goto LABEL_9;
    }
    v19 = v16 + 16LL * *v18 + 312;
  }
  else
  {
LABEL_9:
    v19 = sub_AA67A0(
            *(_QWORD *)(v14 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL);
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
  if ( !v20 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v22 = 0LL;
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_16;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_16:
      v24 = sub_AA67A0(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v27 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
          goto LABEL_23;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_23:
      v28 = sub_AA67A0(v20, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v29 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v30 = sub_B0D964(v29, IClassBoardLockModel_TypeInfo);
    if ( v30 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_B0D97C(v30);
      klass = resourceCatalog->klass;
      if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v33;
          p_offset += 4;
          if ( v33 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_AA67A0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v40 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v40 )
        sub_B0D97C(0LL);
      if ( !v29 )
        sub_B0D97C(v40);
      v41 = v29->klass;
      v42 = *(ClassBoardSquare_o **)(v40 + 32);
      v43 = IClassBoardSquareModel_TypeInfo;
      if ( !*(_WORD *)&v29->klass->_2.bitflags1 )
        goto LABEL_67;
      v44 = 0LL;
      v45 = (IClassBoardSquareModel_c **)&v41->_1.interfaceOffsets->offset;
      while ( *(v45 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v44;
        v45 += 2;
        if ( v44 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v46 = (__int64)&v41->vtable[*(_DWORD *)v45 + 10].method;
    }
    else
    {
      if ( !v29 )
        sub_B0D97C(0LL);
      v36 = v29->klass;
      if ( *(_WORD *)&v29->klass->_2.bitflags1 )
      {
        v37 = 0LL;
        v38 = (IClassBoardSquareModel_c **)&v36->_1.interfaceOffsets->offset;
        while ( *(v38 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v37;
          v38 += 2;
          if ( v37 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_37;
        }
        v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 5].method;
      }
      else
      {
LABEL_37:
        v39 = sub_AA67A0(v29, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v47 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v39)(v29, *(_QWORD *)(v39 + 8));
      v48 = this->fields.resourceCatalog;
      if ( (v47 & 1) != 0 )
      {
        if ( !v48 )
          sub_B0D97C(v47);
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
          v52 = sub_AA67A0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v57 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8));
        if ( !v57 )
          sub_B0D97C(0LL);
        v58 = v29->klass;
        v42 = *(ClassBoardSquare_o **)(v57 + 40);
        v43 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v29->klass->_2.bitflags1 )
          goto LABEL_67;
        v59 = 0LL;
        v60 = (IClassBoardSquareModel_c **)&v58->_1.interfaceOffsets->offset;
        while ( *(v60 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v59;
          v60 += 2;
          if ( v59 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v46 = (__int64)&v58->vtable[*(_DWORD *)v60 + 10].method;
      }
      else
      {
        if ( !v48 )
          sub_B0D97C(v47);
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
          v56 = sub_AA67A0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v61 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
        if ( !v61 )
          sub_B0D97C(0LL);
        v62 = v29->klass;
        v42 = *(ClassBoardSquare_o **)(v61 + 16);
        v43 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v29->klass->_2.bitflags1 )
        {
LABEL_67:
          v46 = sub_AA67A0(v29, v43, 10LL);
          goto LABEL_77;
        }
        v63 = 0LL;
        v64 = (IClassBoardSquareModel_c **)&v62->_1.interfaceOffsets->offset;
        while ( *(v64 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v63;
          v64 += 2;
          if ( v63 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v46 = (__int64)&v62->vtable[*(_DWORD *)v64 + 10].method;
      }
    }
LABEL_77:
    v65 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v46)(v29, *(_QWORD *)(v46 + 8));
    v67 = ClassBoardController__CloneSquareObject(this, v42, v65, v66);
    v68 = (EventMissionProgressRequest_Argument_ProgressData_o *)v67;
    if ( !v67 )
      sub_B0D97C(0LL);
    ClassBoardSquare__Setup(v67, v29, 0LL);
    squareViewList = this->fields.squareViewList;
    if ( !squareViewList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareViewList,
      v68,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
  }
  v105[0] = 180;
  v106 = 1;
  v70 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v71 = 0LL;
    v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
    {
      ++v71;
      v72 += 4;
      if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_84;
    }
    v73 = v70 + 16LL * *v72 + 312;
  }
  else
  {
LABEL_84:
    v73 = sub_AA67A0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v73)(v20, *(_QWORD *)(v73 + 8));
  v106 = 0;
  v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v14 || (v74 = *(__int64 **)(v14 + 16)) == 0LL )
LABEL_143:
    sub_B0D97C(v14);
  v75 = *v74;
  if ( *(_WORD *)(*v74 + 298) )
  {
    v76 = 0LL;
    v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v77 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      ++v76;
      v77 += 4;
      if ( v76 >= *(unsigned __int16 *)(*v74 + 298) )
        goto LABEL_92;
    }
    v78 = v75 + 16LL * *v77 + 312;
  }
  else
  {
LABEL_92:
    v78 = sub_AA67A0(*(_QWORD *)(v14 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v79 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8));
  if ( !v79 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v80 = *(_QWORD *)v79;
    if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
    {
      v81 = 0LL;
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v82 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v81;
        v82 += 4;
        if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
          goto LABEL_99;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_99:
      v83 = sub_AA67A0(v79, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8)) & 1) == 0 )
      break;
    v84 = *(_QWORD *)v79;
    if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
    {
      v85 = 0LL;
      v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v86 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        ++v85;
        v86 += 4;
        if ( v85 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
          goto LABEL_106;
      }
      v87 = v84 + 16LL * *v86 + 312;
    }
    else
    {
LABEL_106:
      v87 = sub_AA67A0(v79, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v88 = (*(__int64 (__fastcall **)(__int64, _QWORD))v87)(v79, *(_QWORD *)(v87 + 8));
    v89 = this->fields.resourceCatalog;
    if ( !v89 )
      sub_B0D97C(v88);
    v90 = v89->klass;
    v91 = (IClassBoardLineModel_o *)v88;
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
      v94 = sub_AA67A0(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v95 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v94)(v89, *(_QWORD *)(v94 + 8));
    if ( !v95 )
      sub_B0D97C(0LL);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v95 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v98 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object;
    if ( !Object_object )
      sub_B0D97C(0LL);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v91, v97);
    lineViewList = this->fields.lineViewList;
    if ( !lineViewList )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineViewList,
      v98,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardLine__Add__);
  }
  v105[0] = 280;
  v100 = ++v106;
  v101 = *(_QWORD *)v79;
  if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
  {
    v102 = 0LL;
    v103 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v103 - 1) != System_IDisposable_TypeInfo )
    {
      ++v102;
      v103 += 4;
      if ( v102 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
        goto LABEL_123;
    }
    v104 = v101 + 16LL * *v103 + 312;
  }
  else
  {
LABEL_123:
    v104 = sub_AA67A0(v79, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v104)(v79, *(_QWORD *)(v104 + 8));
  if ( v100 && v105[v100 - 1] == 280 )
    v106 = v100 - 1;
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  CommonUI_o *Instance; // x0
  WebViewManager_o *v8; // x0
  int32_t baseId; // w20
  CommonUI_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_o *v13; // x22

  if ( (byte_4217AD4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardController__OnClickEffectList_b__29_0__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4217AD4 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v8 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v10 = (CommonUI_o *)v8;
        v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v11, v12);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__29_0__, 0LL);
        if ( v10 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v10, 0, baseId, 1, v13, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(Instance);
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

  if ( (byte_4217AD3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardController__OnClickHelp_b__28_0__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4217AD3 = 1;
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
      sub_B0D97C(0LL);
    ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
    v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__28_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v9, 0LL);
  }
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v7; // x10
  IClassBoardResourceCatalog_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4217AD5 & 1) == 0 )
  {
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v3);
    sub_B0D8A4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v4);
    byte_4217AD5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_object___Delete((const MethodInfo_2A716EC *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v7;
        p_offset += 2;
        if ( v7 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AA67A0(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x20
  ClassBoardUIController_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x21
  ClassBoardController___c_c *v36; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__38_0; // x22
  Il2CppObject *v39; // x23
  struct ClassBoardController___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  ClassBoardController___c_c *v50; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x21
  struct ClassBoardController___c_StaticFields *v52; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__38_1; // x22
  Il2CppObject *v54; // x23
  struct ClassBoardController___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  ClassBoardController___c_c *v69; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x21
  struct ClassBoardController___c_StaticFields *v71; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__38_2; // x22
  Il2CppObject *v73; // x23
  struct ClassBoardController___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v82; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v84; // x21
  const MethodInfo *v85; // x2

  if ( (byte_4217ADB & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v10);
    sub_B0D8A4(&Method_System_Func_ClassBoardLock__bool___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__, v12);
    sub_B0D8A4(&Method_System_Func_ClassBoardLock__int___ctor__, v13);
    sub_B0D8A4(&System_Func_ClassBoardLock__int__TypeInfo, v14);
    sub_B0D8A4(&System_Func_ClassBoardLock__bool__TypeInfo, v15);
    sub_B0D8A4(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v17);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v18);
    sub_B0D8A4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_0__, v19);
    sub_B0D8A4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_1__, v20);
    sub_B0D8A4(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_2__, v21);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__3__, v22);
    sub_B0D8A4(&ClassBoardController___c__DisplayClass38_0_TypeInfo, v23);
    sub_B0D8A4(&ClassBoardController___c_TypeInfo, v24);
    byte_4217ADB = 1;
  }
  v25 = sub_B0D974(ClassBoardController___c__DisplayClass38_0_TypeInfo, method, v2);
  ClassBoardController___c__DisplayClass38_0___ctor((ClassBoardController___c__DisplayClass38_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_38;
  *(_QWORD *)(v25 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
  v26 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v26 )
    goto LABEL_38;
  ClassBoardUIController__TouchDisable(v26, 0LL);
  v26 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v26 )
    goto LABEL_38;
  ClassBoardUIController__SetCameraWorkBlock(v26, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v26 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v26 )
    goto LABEL_38;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)v26, 0LL);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.squareViewList,
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v36 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v36 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_ClassBoardLock__bool__TypeInfo,
                                                                                    v33,
                                                                                    v34);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__38_0,
      v39,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardLock__bool___ctor__);
    v40 = ClassBoardController___c_TypeInfo->static_fields;
    v40->__9__38_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__38_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v40->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v35,
          (System_Func_TSource__bool__o *)_9__38_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v50 = ClassBoardController___c_TypeInfo;
  v51 = v47;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v50 = ClassBoardController___c_TypeInfo;
  }
  v52 = v50->static_fields;
  _9__38_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v52->__9__38_1;
  if ( !_9__38_1 )
  {
    if ( (BYTE3(v50->vtable._0_Equals.methodPtr) & 4) != 0 && !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v52 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v54 = (Il2CppObject *)v52->__9;
    _9__38_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_ClassBoardLock__int__TypeInfo,
                                                                                 v48,
                                                                                 v49);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__38_1,
      v54,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_1__,
      (const MethodInfo_2619564 *)Method_System_Func_ClassBoardLock__int___ctor__);
    v55 = ClassBoardController___c_TypeInfo->static_fields;
    v55->__9__38_1 = (struct System_Func_ClassBoardLock__int__o *)_9__38_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v55->__9__38_1,
      (System_Int32_array **)_9__38_1,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61);
  }
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v51,
                                                               (System_Func_TSource__TKey__o *)_9__38_1,
                                                               (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v25 + 16) = 0;
  v63 = v62;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v62,
         (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v25 + 16) = 1;
    v66 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v63,
            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v69 = ClassBoardController___c_TypeInfo;
    v70 = (System_Collections_Generic_IEnumerable_TSource__o *)v66;
    if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v69 = ClassBoardController___c_TypeInfo;
    }
    v71 = v69->static_fields;
    _9__38_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v71->__9__38_2;
    if ( !_9__38_2 )
    {
      if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v69);
        v71 = ClassBoardController___c_TypeInfo->static_fields;
      }
      v73 = (Il2CppObject *)v71->__9;
      _9__38_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo,
                                                                                                   v67,
                                                                                                   v68);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__38_2,
        v73,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_2__,
        (const MethodInfo_261A104 *)Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__);
      v74 = ClassBoardController___c_TypeInfo->static_fields;
      v74->__9__38_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__38_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v74->__9__38_2,
        (System_Int32_array **)_9__38_2,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v70,
                                                                 (System_Func_TSource__TResult__o *)_9__38_2,
                                                                 (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v82 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                      v81,
                                                                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v82, 0LL);
  }
  effectController = this->fields.effectController;
  v84 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v64, v65);
  System_Action___ctor(
    v84,
    (Il2CppObject *)v25,
    Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_38:
    sub_B0D97C(v26);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v84, v85);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  ClassBoardEffectController_o *effectController; // x22
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s8
  float v28; // s9
  float v29; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x19
  const MethodInfo *v36; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217ADD & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, square);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass40_0__PlayMoveCamera_b__0__, v7);
    sub_B0D8A4(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v8);
    byte_4217ADD = 1;
  }
  v9 = sub_B0D974(ClassBoardController___c__DisplayClass40_0_TypeInfo, square, callback);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
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
  *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  transform = this->fields.boardParent;
  if ( !transform )
    goto LABEL_11;
  v27 = v24;
  v28 = v25;
  v29 = v26;
  localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v35 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v9,
    Method_ClassBoardController___c__DisplayClass40_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_B0D97C(transform);
  v38.fields.x = v27 * x;
  v38.fields.y = v28 * y;
  v38.fields.z = v29 * z;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v38, v35, v36);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ClassBoardEffectController_o *effectController; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3

  if ( (byte_4217ADA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, square);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass37_0__PlayReleaseEffect_b__0__, v9);
    sub_B0D8A4(&ClassBoardController___c__DisplayClass37_0_TypeInfo, v10);
    byte_4217ADA = 1;
  }
  v11 = sub_B0D974(ClassBoardController___c__DisplayClass37_0_TypeInfo, square, endAct);
  ClassBoardController___c__DisplayClass37_0___ctor((ClassBoardController___c__DisplayClass37_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v11 + 24) = endAct;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 24), (System_Int32_array **)endAct, v19, v20, v21, v22, v23, v24);
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
  v12 = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v12
    || (MissionNotifyManager__StartPause((MissionNotifyManager_o *)v12, 0LL),
        (v12 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                             this,
                                             this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList(v12, 0LL),
        effectController = this->fields.effectController,
        v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v26, v27),
        System_Action___ctor(
          v28,
          (Il2CppObject *)v11,
          Method_ClassBoardController___c__DisplayClass37_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_13:
    sub_B0D97C(v12);
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v28, v29);
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
  UnityEngine_Object_o *gameObject; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_IEnumerable_T__o *v21; // x20
  ClassBoardController___c_c *v22; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x21
  Il2CppObject *v25; // x22
  struct ClassBoardController___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  ClassBoardController___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_T__o *v37; // x20
  struct ClassBoardController___c_StaticFields *v38; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_1; // x21
  Il2CppObject *v40; // x22
  struct ClassBoardController___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x1

  if ( (byte_4217AD1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ClassBoardLine___ctor__, method);
    sub_B0D8A4(&Method_System_Action_ClassBoardSquare___ctor__, v3);
    sub_B0D8A4(&System_Action_ClassBoardSquare__TypeInfo, v4);
    sub_B0D8A4(&System_Action_ClassBoardLine__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v6);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_ClassBoardLine___, v8);
    sub_B0D8A4(&Method_BasicHelper_ForEach_ClassBoardSquare___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_ClassBoardController___c__Release_b__26_0__, v13);
    sub_B0D8A4(&Method_ClassBoardController___c__Release_b__26_1__, v14);
    sub_B0D8A4(&ClassBoardController___c_TypeInfo, v15);
    byte_4217AD1 = 1;
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  v21 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v22 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v22 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_ClassBoardSquare__TypeInfo,
                                                                                      v19,
                                                                                      v20);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_0,
      v25,
      Method_ClassBoardController___c__Release_b__26_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardSquare___ctor__);
    v26 = ClassBoardController___c_TypeInfo->static_fields;
    v26->__9__26_0 = (struct System_Action_ClassBoardSquare__o *)_9__26_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v26->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v21,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = (UnityEngine_Component_o *)this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
  v33 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v36 = ClassBoardController___c_TypeInfo;
  v37 = v33;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v36 = ClassBoardController___c_TypeInfo;
  }
  v38 = v36->static_fields;
  _9__26_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v38->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v38 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__26_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_ClassBoardLine__TypeInfo,
                                                                                      v34,
                                                                                      v35);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_1,
      v40,
      Method_ClassBoardController___c__Release_b__26_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardLine___ctor__);
    v41 = ClassBoardController___c_TypeInfo->static_fields;
    v41->__9__26_1 = (struct System_Action_ClassBoardLine__o *)_9__26_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v41->__9__26_1,
      (System_Int32_array **)_9__26_1,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v37,
    (System_Action_T__o *)_9__26_1,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_ClassBoardLine___);
  squareViewList = (UnityEngine_Component_o *)this->fields.lineViewList;
  if ( !squareViewList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ClassBoardLine__Clear__),
        this->fields.effectController = 0LL,
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.effectController, 0LL, v48, v49, v50, v51, v52, v53),
        (squareViewList = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                                       this,
                                                       this->klass->vtable._7_SetupClassBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_32:
    sub_B0D97C(squareViewList);
  }
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)squareViewList, v54);
}


void __fastcall ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4217AD2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, action);
    byte_4217AD2 = 1;
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
      sub_B0D97C(0LL);
    *(_QWORD *)(v6 + 80) = action;
    sub_B0D840((BattleServantConfConponent_o *)(v6 + 80), (System_Int32_array **)action, v7, v8, v9, v10, v11, v12);
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
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v25; // x2
  UnityEngine_Texture_o *v26; // x23
  int v27; // w0
  struct MapCamera_o *v28; // x24
  int v29; // w26
  int v30; // w25
  int v31; // w3
  int v32; // w8
  int v33; // w2
  int v34; // w8
  MapCamera_o *v35; // x0
  UnityEngine_Texture_o *v36; // x1
  MapCamera_o *v37; // x23
  const MethodInfo_299B944 *v38; // x2
  BalanceConfig_c *v39; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  const MethodInfo *v42; // x1
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x2
  ClassBoardModelBuilder_o *v55; // x22
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x1
  __int64 v58; // x1
  __int64 v59; // x2
  Il2CppObject *current; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v61; // x23
  __int64 v62; // x0
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v65; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  ClassBoardEffectController_o *v68; // x24
  const MethodInfo *v69; // x5
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v77; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v80; // 0:x3.8
  System_Nullable_Vector3__o v81; // 0:x0.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217AD0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ClassBoardSquare___ctor__, setResourceCatalog);
    sub_B0D8A4(&System_Action_ClassBoardSquare__TypeInfo, v13);
    sub_B0D8A4(&System_Action_TypeInfo, v14);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v15);
    sub_B0D8A4(&Method_ClassBoardController_ShowBoard__, v16);
    sub_B0D8A4(&ClassBoardEffectController_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v21);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v22);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v23);
    byte_4217AD0 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  this->fields.resourceCatalog = setResourceCatalog;
  this->fields.baseId = baseId;
  sub_B0D840(
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
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v25);
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
  v26 = (UnityEngine_Texture_o *)mapCamera;
  v27 = ((__int64 (__fastcall *)(MapCamera_o *, const char *))mapCamera->klass[1]._1.gc_desc)(
          mapCamera,
          mapCamera->klass[1]._1.name);
  v28 = this->fields.mapCamera;
  v29 = v27;
  v30 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._4_get_width.method)(
          v26,
          v26->klass->vtable._5_set_width.methodPtr);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v26->klass->vtable._6_get_height.method)(
                               v26,
                               v26->klass->vtable._7_set_height.methodPtr);
  if ( !v28 )
    goto LABEL_31;
  v31 = (int)mapCamera;
  if ( v29 < 2049 )
  {
    v35 = v28;
    v36 = v26;
    v33 = v30;
  }
  else
  {
    v32 = v30 >= 0 ? v30 : v30 + 1;
    v33 = v32 >> 1;
    v34 = (int)mapCamera >= 0 ? (int)mapCamera : (_DWORD)mapCamera + 1;
    v31 = v34 >> 1;
    v35 = v28;
    v36 = v26;
  }
  MapCamera__SetMapTexture(v35, v36, v33, v31, 0LL);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_31;
  MapCamera__SetEnable(mapCamera, 1, 0LL);
  v37 = this->fields.mapCamera;
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v81.fields.value.fields.x = &v77;
  *(_QWORD *)&v77.fields.value.fields.x = 0LL;
  *(_QWORD *)&v77.fields.value.fields.z = 0LL;
  *(_QWORD *)&v81.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v81, zero, v38);
  v39 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v39 = BalanceConfig_TypeInfo;
  }
  static_fields = v39->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  if ( !v37 )
    goto LABEL_31;
  v80 = size;
  MapCamera__StartAutoWork(v37, 0.0, v77, v80, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, v42);
  v45 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v45;
  sub_B0D840(
    (BattleServantConfConponent_o *)&classBoardBackground->fields.showBoardCallback,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v52);
  ClassBoardBackground__SetClassIcon(classBoardBackground, iconId, v53);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !mapCamera
    || (v55 = (ClassBoardModelBuilder_o *)mapCamera,
        ClassBoardModelBuilder__MakeSquare((ClassBoardModelBuilder_o *)mapCamera, baseId, v54),
        ClassBoardModelBuilder__MakeLine(v55, baseId, v56),
        ClassBoardController__CreateViews(this, v57),
        (mapCamera = (MapCamera_o *)this->fields.squareViewList) == 0LL) )
  {
LABEL_31:
    sub_B0D97C(mapCamera);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v78,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)mapCamera,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v78,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v78.fields.current;
    v61 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_ClassBoardSquare__TypeInfo,
                                                                                 v58,
                                                                                 v59);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v61,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardSquare___ctor__);
    if ( !current )
      sub_B0D97C(v62);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v61, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v78,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v65 = this->fields.mapCamera;
  v68 = (ClassBoardEffectController_o *)sub_B0D974(ClassBoardEffectController_TypeInfo, v66, v67);
  ClassBoardEffectController___ctor(
    v68,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v65,
    classBoardBackground,
    v69);
  this->fields.effectController = v68;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effectController,
    (System_Int32_array **)v68,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
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
  unsigned __int64 v17; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  System_Action_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  Il2CppObject *v41; // x0
  System_String_o *v42; // x20
  MethodInfo *v43; // x21
  MethodInfo *v44; // x20
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x21
  System_Int32_array *v46; // x20
  ClassBoardController_o *v47; // x19
  int32_t v48; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4217AD8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&baseId);
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v4);
    sub_B0D8A4(&Method_ClassBoardController_OnClickEffectList__, v5);
    sub_B0D8A4(&Method_ClassBoardController_OnClickHelp__, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_19733/*"img_txt_classscore_{0}"*/, v13);
    this = (ClassBoardController_o *)sub_B0D8A4(&StringLiteral_3026/*"CLASS_BOARD_HEADER_MESSAGE"*/, v14);
    byte_4217AD8 = 1;
  }
  entity = 0LL;
  resourceCatalog = v3->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_30;
  klass = resourceCatalog->klass;
  if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v17;
      p_offset += 4;
      if ( v17 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(v3->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
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
                    (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
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
  v21 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)v3, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v21 )
    goto LABEL_30;
  *(_QWORD *)(v21 + 88) = v24;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 88), (System_Int32_array **)v24, v25, v26, v27, v28, v29, v30);
  v31 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
          v3,
          v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  v34 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v32, v33);
  System_Action___ctor(v34, (Il2CppObject *)v3, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v31 )
    goto LABEL_30;
  *(_QWORD *)(v31 + 96) = v34;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 96), (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  v48 = v3->fields.baseId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
  v42 = System_String__Format((System_String_o *)StringLiteral_19733/*"img_txt_classscore_{0}"*/, v41, 0LL);
  v43 = (MethodInfo *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                        v3,
                        v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(v43);
  if ( !v43 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderTitle((ClassBoardUIController_o *)v43, (AtlasManagerUnit_o *)this, v42, 0LL);
  v44 = (MethodInfo *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v3->klass->vtable._4_get_classBoardUIController.method)(
                        v3,
                        v3->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(v44);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3026/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v44 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderMessage(
    (ClassBoardUIController_o *)v44,
    UiAtlasManagerUnit,
    (System_String_o *)this,
    0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_30;
  this = (ClassBoardController_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                     &entity,
                                     v3->fields.baseId,
                                     (const MethodInfo_2669C30 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
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
    || (v46 = *(System_Int32_array **)&entity->fields.flag,
        v47 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)this),
        !v47) )
  {
LABEL_30:
    sub_B0D97C(this);
  }
  ClassBoardUIController__SetItemList((ClassBoardUIController_o *)v47, v46, (AtlasManagerUnit_o *)this, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Enum_o **v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 *v25; // x22
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  IClassBoardSquareModel_c **v28; // x11
  __int64 v29; // x0
  int v30; // w0
  System_Enum_o *v31; // x22
  System_Enum_o *v32; // x8
  __int64 v33; // x11
  __int64 *monitor; // x22
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  IClassBoardSquareModel_c **v37; // x11
  __int64 v38; // x0
  ClassBoardSquare_o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x22
  const MethodInfo *v43; // x3
  int v44; // [xsp+8h] [xbp-38h] BYREF
  int v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4217AD9 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, square);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&ClassBoardLock_TypeInfo, v6);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v7);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__0__, v8);
    sub_B0D8A4(&ClassBoardController___c__DisplayClass36_0_TypeInfo, v9);
    byte_4217AD9 = 1;
  }
  v10 = sub_B0D974(ClassBoardController___c__DisplayClass36_0_TypeInfo, square, method);
  ClassBoardController___c__DisplayClass36_0___ctor((ClassBoardController___c__DisplayClass36_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_30;
  *(_QWORD *)(v10 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 32) = square;
  v18 = (System_Enum_o **)(v10 + 32);
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)square, v19, v20, v21, v22, v23, v24);
  if ( !*(_QWORD *)(v10 + 32) )
    goto LABEL_30;
  v25 = *(__int64 **)(*(_QWORD *)(v10 + 32) + 168LL);
  if ( !v25 )
    goto LABEL_30;
  v26 = *v25;
  if ( *(_WORD *)(*v25 + 298) )
  {
    v27 = 0LL;
    v28 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *(v28 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= *(unsigned __int16 *)(*v25 + 298) )
        goto LABEL_10;
    }
    v29 = v26 + 16LL * (*(_DWORD *)v28 + 13) + 312;
  }
  else
  {
LABEL_10:
    v29 = sub_AA67A0(v25, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v29)(v25, 0LL, *(_QWORD *)(v29 + 8));
  *(_DWORD *)(v10 + 16) = v30;
  v45 = v30;
  v31 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v45);
  v44 = 1;
  HasFlag = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v44);
  if ( !v31 )
    goto LABEL_30;
  HasFlag = (System_Enum_o *)System_Enum__HasFlag(v31, HasFlag, 0LL);
  v32 = *v18;
  if ( ((unsigned __int8)HasFlag & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_30;
    v33 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v32->klass->_2.bitflags2 + 1) >= (unsigned int)v33
      && (ClassBoardLock_c *)v32->klass->_2.typeHierarchy[v33 - 1] == ClassBoardLock_TypeInfo )
    {
      return;
    }
  }
  else if ( !v32 )
  {
    goto LABEL_30;
  }
  monitor = (__int64 *)v32[10].monitor;
  if ( !monitor )
LABEL_30:
    sub_B0D97C(HasFlag);
  v35 = *monitor;
  if ( *(_WORD *)(*monitor + 298) )
  {
    v36 = 0LL;
    v37 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *(v37 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v36;
      v37 += 2;
      if ( v36 >= *(unsigned __int16 *)(*monitor + 298) )
        goto LABEL_24;
    }
    v38 = v35 + 16LL * (*(_DWORD *)v37 + 5) + 312;
  }
  else
  {
LABEL_24:
    v38 = sub_AA67A0(monitor, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v38)(monitor, *(_QWORD *)(v38 + 8)) & 1) == 0 )
  {
    HasFlag = *v18;
    if ( *v18 )
    {
      ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)HasFlag, 1, 0LL);
      v39 = *(ClassBoardSquare_o **)(v10 + 32);
      v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v40, v41);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v10,
        Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v39, v42, v43);
      return;
    }
    goto LABEL_30;
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4217ADE & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardController__ShowBoardCoroutine_d__42_TypeInfo, method);
    byte_4217ADE = 1;
  }
  v4 = sub_B0D974(ClassBoardController__ShowBoardCoroutine_d__42_TypeInfo, method, v2);
  ClassBoardController__ShowBoardCoroutine_d__42___ctor((ClassBoardController__ShowBoardCoroutine_d__42_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_B0D97C(0LL);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__29_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4217AE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4217AE0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                    this,
                                    this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickHelp_b__28_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_B0D97C(0LL);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___ShowBoardCoroutine_b__42_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_B0D97C(0LL);
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
  sub_B0D840(
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
  Il2CppObject **p__2__current; // x20
  int v15; // w20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+0h] [xbp-70h] BYREF
  int v21[2]; // [xsp+18h] [xbp-58h]
  int v22; // [xsp+20h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+28h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-30h] BYREF

  if ( (byte_4211E20 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ClassBoardController__ShowBoardCoroutine_b__42_0__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v11);
    byte_4211E20 = 1;
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
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
        for ( i = v20;
              System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &i,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
              ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields.current->klass->vtable[7].method)(
                i.fields.current,
                i.fields.current->klass->vtable[8].methodPtr) )
        {
          if ( !i.fields.current )
            sub_B0D97C(0LL);
        }
        v21[0] = 124;
        v22 = 1;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &i,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
        v22 = 0;
        klass = (UnityEngine_Component_o *)_4__this[6].monitor;
        if ( klass )
        {
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            &v23,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v23,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
          {
            if ( !v23.fields.current )
              sub_B0D97C(0LL);
            ClassBoardLine__PlayTransition((ClassBoardLine_o *)v23.fields.current, 0LL);
          }
          v21[0] = 175;
          v15 = ++v22;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v23,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
          if ( v15 && v21[v15 - 1] == 175 )
            v22 = v15 - 1;
          klass = (UnityEngine_Component_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))_4__this->klass->vtable[4].method)(
                                               _4__this,
                                               _4__this->klass->vtable[5].methodPtr);
          if ( klass )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)klass, 1, 0LL);
            v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
            System_Action___ctor(v18, _4__this, Method_ClassBoardController__ShowBoardCoroutine_b__42_0__, 0LL);
            EventTutorialMaster__CheckTutorial(0, 82, v18, 0, 0, 0, 0, 0LL);
            LOBYTE(klass) = 0;
            return (char)klass;
          }
        }
      }
LABEL_27:
      sub_B0D97C(klass);
    }
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B0D840(p__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_ClassBoardController__ShowBoardCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ClassBoardController___c_StaticFields *static_fields; // x0

  if ( (byte_4211E12 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardController___c_TypeInfo, v1);
    byte_4211E12 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardController___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardController___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardController___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v4; // x1
  __int64 v5; // x1
  IClassBoardLockModel_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v10; // w1
  const MethodInfo *v11; // x2
  IClassBoardLockModel_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  System_Enum_o *v16; // x20
  IClassBoardLockModel_c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  System_Enum_o *v21; // x20
  char v22; // w8
  IClassBoardLockModel_c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  __int64 v28; // [xsp+0h] [xbp-40h] BYREF
  int v29; // [xsp+8h] [xbp-38h]
  int v30; // [xsp+18h] [xbp-28h] BYREF
  int v31; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v32; // 0:x0.12

  if ( (byte_4211E17 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, x);
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, v4);
    this = (ClassBoardController___c_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v5);
    byte_4211E17 = 1;
  }
  v29 = 0;
  v28 = 0LL;
  if ( !x )
    goto LABEL_36;
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AA67A0(x, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v29 = v10;
  *(_QWORD *)&v32.fields.Type = &v28;
  v32.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v32, v11) )
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
    v15 = sub_AA67A0(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v31 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v15)(x, 0LL, *(_QWORD *)(v15 + 8));
  v16 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v31);
  v30 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  if ( !v16 )
    goto LABEL_36;
  if ( System_Enum__HasFlag(v16, (System_Enum_o *)this, 0LL) )
  {
LABEL_27:
    v22 = 0;
    return v22 & 1;
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
    v20 = sub_AA67A0(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v31 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v20)(x, 0LL, *(_QWORD *)(v20 + 8));
  v21 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v31);
  v30 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v30);
  if ( !v21 )
LABEL_36:
    sub_B0D97C(this);
  if ( System_Enum__HasFlag(v21, (System_Enum_o *)this, 0LL) )
    goto LABEL_27;
  v24 = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v26 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v27 = (__int64)&v24->vtable[*v26 + 1].method;
  }
  else
  {
LABEL_33:
    v27 = sub_AA67A0(x, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v22 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v27)(x, *(_QWORD *)(v27 + 8)) ^ 1;
  return v22 & 1;
}


int32_t __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__39_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4211E18 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, x);
    byte_4211E18 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
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
    p_method = sub_AA67A0(x, IClassBoardSquareModel_TypeInfo, 0LL);
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
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v7; // x20
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0
  int v11; // w1
  const MethodInfo *v12; // x2
  ClassBoardController___c_c *v13; // x8
  ClassBoardController___c_o *v14; // x20
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  System_Enum_o *v18; // x20
  ClassBoardController___c_c *v19; // x8
  ClassBoardController___c_o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  System_Enum_o *v24; // x20
  char v25; // w8
  ClassBoardController___c_c *v27; // x8
  ClassBoardController___c_o *v28; // x19
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  __int64 v32; // [xsp+0h] [xbp-40h] BYREF
  int v33; // [xsp+8h] [xbp-38h]
  int v34; // [xsp+18h] [xbp-28h] BYREF
  int v35; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v36; // 0:x0.12

  if ( (byte_4211E15 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, x);
    sub_B0D8A4(&IClassBoardLockModel_TypeInfo, v4);
    this = (ClassBoardController___c_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v5);
    byte_4211E15 = 1;
  }
  v33 = 0;
  v32 = 0LL;
  if ( !x )
    goto LABEL_40;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_40;
  klass = this->klass;
  v7 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
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
    v10 = sub_AA67A0(this, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v10)(v7, *(_QWORD *)(v10 + 8));
  v33 = v11;
  *(_QWORD *)&v36.fields.Type = &v32;
  v36.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v36, v12) )
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
    v17 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v35 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v17)(v14, 0LL, *(_QWORD *)(v17 + 8));
  v18 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v35);
  v34 = 2;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v34);
  if ( !v18 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v18, (System_Enum_o *)this, 0LL) )
  {
LABEL_30:
    v25 = 0;
    return v25 & 1;
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
    v23 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v35 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v23)(v20, 0LL, *(_QWORD *)(v23 + 8));
  v24 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v35);
  v34 = 4;
  this = (ClassBoardController___c_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v34);
  if ( !v24 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v24, (System_Enum_o *)this, 0LL) )
    goto LABEL_30;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_40:
    sub_B0D97C(this);
  v27 = this->klass;
  v28 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v30 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v31 = (__int64)(&v27->vtable._1_Finalize.method + 2 * *v30);
  }
  else
  {
LABEL_37:
    v31 = sub_AA67A0(this, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v25 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8)) ^ 1;
  return v25 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__38_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 v8; // x0

  if ( (byte_4211E16 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, x);
    byte_4211E16 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_B0D97C(this);
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
    v8 = sub_AA67A0(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__38_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__37_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__37_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__26_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4211E13 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4211E13 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__26_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4211E14 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4211E14 = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
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
  BaseMonoBehaviour_o *_4__this; // x20
  __int64 *monitor; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  System_Enum_o *v31; // x20
  BaseMonoBehaviour_o *v32; // x20
  __int64 *v33; // x21
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  System_Enum_o *v38; // x20
  BaseMonoBehaviour_o *v39; // x20
  __int64 *v40; // x21
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  struct ClassBoardController_o *v45; // x8
  ClassBoardSquareDetailDialog_o *v46; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  System_Enum_o *v51; // x20
  BaseMonoBehaviour_o *v52; // x20
  __int64 *v53; // x21
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  struct ClassBoardController_o *v58; // x8
  ClassBoardDisableOpenDialog_o *v59; // x20
  __int64 v60; // x1
  __int64 v61; // x2
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v63; // x21
  System_Enum_o *v64; // x20
  BaseMonoBehaviour_o *v65; // x20
  __int64 *v66; // x21
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  struct ClassBoardController_o *v71; // x8
  ClassBoardLockReleaseConditionDialog_o *v72; // x20
  __int64 v73; // x1
  __int64 v74; // x2
  System_Action_o *_9__3; // x22
  ClassBoardSquare_o *v76; // x21
  struct ClassBoardSquare_o *v77; // x8
  __int64 v78; // x11
  struct ClassBoardSquare_o *v79; // x22
  struct ClassBoardController_o *v80; // x8
  ClassBoardLockOpenConfirmDialog_o *v81; // x20
  __int64 v82; // x1
  __int64 v83; // x2
  struct ClassBoardSquare_o *v84; // x21
  ClassBoardController___c_c *v85; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_4; // x22
  Il2CppObject *v88; // x23
  struct ClassBoardController___c_StaticFields *v89; // x0
  System_Action_o *_9__5; // x23
  ClassBoardLockOpenConfirmDialog_o *v91; // x0
  ClassBoardSquare_o *v92; // x1
  bool v93; // w2
  struct ClassBoardController_o *v94; // x8
  ClassBoardSquareOpenConfirmDialog_o *v95; // x20
  __int64 v96; // x1
  __int64 v97; // x2
  struct ClassBoardSquare_o *v98; // x21
  ClassBoardController___c_c *v99; // x0
  struct ClassBoardController___c_StaticFields *v100; // x8
  System_Action_o *_9__36_6; // x22
  Il2CppObject *v102; // x23
  struct ClassBoardController___c_StaticFields *v103; // x0
  System_Action_o *_9__7; // x23
  ClassBoardSquareOpenConfirmDialog_o *v105; // x0
  ClassBoardSquare_o *v106; // x1
  bool v107; // w2
  BaseMonoBehaviour_o *v108; // x20
  __int64 *v109; // x21
  __int64 v110; // x8
  unsigned __int64 v111; // x10
  int *v112; // x11
  __int64 v113; // x0
  struct ClassBoardController_o *v114; // x8
  ClassBoardLockOpenConfirmDialog_o *v115; // x20
  __int64 v116; // x1
  __int64 v117; // x2
  struct ClassBoardSquare_o *v118; // x21
  ClassBoardSquareOpenConfirmDialog_o *v119; // x20
  __int64 v120; // x1
  __int64 v121; // x2
  struct ClassBoardSquare_o *v122; // x21
  int v123; // [xsp+8h] [xbp-38h] BYREF
  int32_t acquireFlag; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4211E19 & 1) == 0 )
  {
    sub_B0D8A4(&AcquireFlag_TypeInfo, method);
    sub_B0D8A4(&System_Action_TypeInfo, v3);
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v4);
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v5);
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v6);
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v7);
    sub_B0D8A4(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v8);
    sub_B0D8A4(&ClassBoardLock_TypeInfo, v9);
    sub_B0D8A4(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_B0D8A4(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_4__, v11);
    sub_B0D8A4(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_6__, v12);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__12__, v13);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__13__, v14);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__1__, v15);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__2__, v16);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__3__, v17);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__5__, v18);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__7__, v19);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__8__, v20);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__9__, v21);
    sub_B0D8A4(&ClassBoardController___c_TypeInfo, v22);
    byte_4211E19 = 1;
  }
  acquireFlag = this->fields.acquireFlag;
  v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v123 = 1;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v123);
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
        v27 = *monitor;
        if ( *(_WORD *)(*monitor + 298) )
        {
          v28 = 0LL;
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((IClassBoardResourceCatalog_c **)v29 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v28;
            v29 += 4;
            if ( v28 >= *(unsigned __int16 *)(*monitor + 298) )
              goto LABEL_11;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_11:
          v30 = sub_AA67A0(_4__this[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v30)(monitor, *(_QWORD *)(v30 + 8));
        if ( HasFlag )
        {
          v45 = this->fields.__4__this;
          if ( v45 )
          {
            HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                                 _4__this,
                                 *(Il2CppObject **)(HasFlag + 80),
                                 v45->fields.uiRoot,
                                 0LL,
                                 (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
            if ( HasFlag )
            {
              v46 = (ClassBoardSquareDetailDialog_o *)HasFlag;
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
                    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
                    System_Action___ctor(
                      _9__1,
                      (Il2CppObject *)this,
                      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__1__,
                      0LL);
                    this->fields.__9__1 = _9__1;
                    sub_B0D840(&this->fields.__9__1, _9__1);
                  }
                  ClassBoardSquareDetailDialog__Open(v46, square, _9__1, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_146:
    sub_B0D97C(HasFlag);
  }
  acquireFlag = this->fields.acquireFlag;
  v31 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v123 = 2;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v123);
  if ( !v31 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v31, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) != 0 )
  {
    v32 = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( !v32 )
      goto LABEL_146;
    v33 = (__int64 *)v32[3].monitor;
    if ( !v33 )
      goto LABEL_146;
    v34 = *v33;
    if ( *(_WORD *)(*v33 + 298) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v36 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*v33 + 298) )
          goto LABEL_20;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_20:
      v37 = sub_AA67A0(v32[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
    if ( !HasFlag )
      goto LABEL_146;
    v58 = this->fields.__4__this;
    if ( !v58 )
      goto LABEL_146;
    HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                         v32,
                         *(Il2CppObject **)(HasFlag + 48),
                         v58->fields.uiRoot,
                         0LL,
                         (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !HasFlag )
      goto LABEL_146;
    v59 = (ClassBoardDisableOpenDialog_o *)HasFlag;
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
    v63 = this->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v60, v61);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B0D840(&this->fields.__9__2, _9__2);
    }
    ClassBoardDisableOpenDialog__Open(v59, v63, _9__2, 0LL);
    return;
  }
  acquireFlag = this->fields.acquireFlag;
  v38 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v123 = 4;
  HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v123);
  if ( !v38 )
    goto LABEL_146;
  HasFlag = System_Enum__HasFlag(v38, (System_Enum_o *)HasFlag, 0LL);
  if ( (HasFlag & 1) == 0 )
  {
    acquireFlag = this->fields.acquireFlag;
    v51 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v123 = 16;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v123);
    if ( !v51 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v51, (System_Enum_o *)HasFlag, 0LL);
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
            goto LABEL_47;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_47:
        v57 = sub_AA67A0(v52[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v80 = this->fields.__4__this;
      if ( !v80 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v52,
                           *(Il2CppObject **)(HasFlag + 64),
                           v80->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
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
      v84 = this->fields.square;
      v85 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v85 = ClassBoardController___c_TypeInfo;
      }
      static_fields = v85->static_fields;
      _9__36_4 = static_fields->__9__36_4;
      if ( !_9__36_4 )
      {
        if ( (BYTE3(v85->vtable._0_Equals.methodPtr) & 4) != 0 && !v85->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v85);
          static_fields = ClassBoardController___c_TypeInfo->static_fields;
        }
        v88 = (Il2CppObject *)static_fields->__9;
        _9__36_4 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v82, v83);
        System_Action___ctor(_9__36_4, v88, Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_4__, 0LL);
        v89 = ClassBoardController___c_TypeInfo->static_fields;
        v89->__9__36_4 = _9__36_4;
        sub_B0D840(&v89->__9__36_4, _9__36_4);
      }
      _9__5 = this->fields.__9__5;
      if ( !_9__5 )
      {
        _9__5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v82, v83);
        System_Action___ctor(
          _9__5,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__5__,
          0LL);
        this->fields.__9__5 = _9__5;
        sub_B0D840(&this->fields.__9__5, _9__5);
      }
      v91 = v81;
      v92 = v84;
      v93 = 0;
LABEL_134:
      ClassBoardLockOpenConfirmDialog__Open(v91, v92, v93, _9__36_4, _9__5, 0LL);
      return;
    }
    acquireFlag = this->fields.acquireFlag;
    v64 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v123 = 8;
    HasFlag = j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v123);
    if ( !v64 )
      goto LABEL_146;
    HasFlag = System_Enum__HasFlag(v64, (System_Enum_o *)HasFlag, 0LL);
    if ( (HasFlag & 1) != 0 )
    {
      v65 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v65 )
        goto LABEL_146;
      v66 = (__int64 *)v65[3].monitor;
      if ( !v66 )
        goto LABEL_146;
      v67 = *v66;
      if ( *(_WORD *)(*v66 + 298) )
      {
        v68 = 0LL;
        v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v69 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v68;
          v69 += 4;
          if ( v68 >= *(unsigned __int16 *)(*v66 + 298) )
            goto LABEL_65;
        }
        v70 = v67 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_65:
        v70 = sub_AA67A0(v65[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v70)(v66, *(_QWORD *)(v70 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v94 = this->fields.__4__this;
      if ( !v94 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v65,
                           *(Il2CppObject **)(HasFlag + 56),
                           v94->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v95 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
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
      v98 = this->fields.square;
      v99 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v99 = ClassBoardController___c_TypeInfo;
      }
      v100 = v99->static_fields;
      _9__36_6 = v100->__9__36_6;
      if ( !_9__36_6 )
      {
        if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v99);
          v100 = ClassBoardController___c_TypeInfo->static_fields;
        }
        v102 = (Il2CppObject *)v100->__9;
        _9__36_6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v96, v97);
        System_Action___ctor(_9__36_6, v102, Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_6__, 0LL);
        v103 = ClassBoardController___c_TypeInfo->static_fields;
        v103->__9__36_6 = _9__36_6;
        sub_B0D840(&v103->__9__36_6, _9__36_6);
      }
      _9__7 = this->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v96, v97);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__7__,
          0LL);
        this->fields.__9__7 = _9__7;
        sub_B0D840(&this->fields.__9__7, _9__7);
      }
      v105 = v95;
      v106 = v98;
      v107 = 0;
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
      v108 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v108 )
        goto LABEL_146;
      v109 = (__int64 *)v108[3].monitor;
      if ( !v109 )
        goto LABEL_146;
      v110 = *v109;
      if ( *(_WORD *)(*v109 + 298) )
      {
        v111 = 0LL;
        v112 = (int *)(*(_QWORD *)(v110 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v112 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v111;
          v112 += 4;
          if ( v111 >= *(unsigned __int16 *)(*v109 + 298) )
            goto LABEL_121;
        }
        v113 = v110 + 16LL * *v112 + 312;
      }
      else
      {
LABEL_121:
        v113 = sub_AA67A0(v108[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v113)(v109, *(_QWORD *)(v113 + 8));
      if ( !HasFlag )
        goto LABEL_146;
      v114 = this->fields.__4__this;
      if ( v79 )
      {
        if ( !v114 )
          goto LABEL_146;
        HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                             v108,
                             *(Il2CppObject **)(HasFlag + 64),
                             v114->fields.uiRoot,
                             0LL,
                             (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( !HasFlag )
          goto LABEL_146;
        v115 = (ClassBoardLockOpenConfirmDialog_o *)HasFlag;
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
        v118 = this->fields.square;
        if ( !_9__36_4 )
        {
          _9__36_4 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v116, v117);
          System_Action___ctor(
            _9__36_4,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__8__,
            0LL);
          this->fields.__9__8 = _9__36_4;
          sub_B0D840(&this->fields.__9__8, _9__36_4);
        }
        _9__5 = this->fields.__9__9;
        if ( !_9__5 )
        {
          _9__5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v116, v117);
          System_Action___ctor(
            _9__5,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__9__,
            0LL);
          this->fields.__9__9 = _9__5;
          sub_B0D840(&this->fields.__9__9, _9__5);
        }
        v93 = 1;
        v91 = v115;
        v92 = v118;
        goto LABEL_134;
      }
      if ( !v114 )
        goto LABEL_146;
      HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                           v108,
                           *(Il2CppObject **)(HasFlag + 56),
                           v114->fields.uiRoot,
                           0LL,
                           (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !HasFlag )
        goto LABEL_146;
      v119 = (ClassBoardSquareOpenConfirmDialog_o *)HasFlag;
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
      v122 = this->fields.square;
      if ( !_9__36_6 )
      {
        _9__36_6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v120, v121);
        System_Action___ctor(
          _9__36_6,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__12__,
          0LL);
        this->fields.__9__12 = _9__36_6;
        sub_B0D840(&this->fields.__9__12, _9__36_6);
      }
      _9__7 = this->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v120, v121);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__13__,
          0LL);
        this->fields.__9__13 = _9__7;
        sub_B0D840(&this->fields.__9__13, _9__7);
      }
      v107 = 1;
      v105 = v119;
      v106 = v122;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v105, v106, v107, _9__36_6, _9__7, 0LL);
    return;
  }
  v39 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v39 )
    goto LABEL_146;
  v40 = (__int64 *)v39[3].monitor;
  if ( !v40 )
    goto LABEL_146;
  v41 = *v40;
  if ( *(_WORD *)(*v40 + 298) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((IClassBoardResourceCatalog_c **)v43 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*v40 + 298) )
        goto LABEL_29;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_29:
    v44 = sub_AA67A0(v39[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  HasFlag = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
  if ( !HasFlag )
    goto LABEL_146;
  v71 = this->fields.__4__this;
  if ( !v71 )
    goto LABEL_146;
  HasFlag = (__int64)BaseMonoBehaviour__createObject_object_(
                       v39,
                       *(Il2CppObject **)(HasFlag + 72),
                       v71->fields.uiRoot,
                       0LL,
                       (const MethodInfo_1706AE8 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
  if ( !HasFlag )
    goto LABEL_146;
  v72 = (ClassBoardLockReleaseConditionDialog_o *)HasFlag;
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
    _9__3 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v73, v74);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B0D840(&this->fields.__9__3, _9__3);
  }
  ClassBoardLockReleaseConditionDialog__Open(v72, v76, 0, _9__3, 0LL);
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
    sub_B0D97C(_4__this);
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
  if ( (byte_4211E1B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass36_0_o *)sub_B0D8A4(
                                                             &Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__11__,
                                                             v4);
    byte_4211E1B = 1;
  }
  klass = (System_Action_o *)v3[5].klass;
  monitor = (ClassBoardController_o *)v3[1].monitor;
  v7 = (ClassBoardSquare_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, _, method);
    System_Action___ctor(
      klass,
      v3,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v3[5].klass = (Il2CppClass *)klass;
    sub_B0D840(&v3[5], klass);
  }
  if ( !monitor )
    sub_B0D97C(this);
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
    sub_B0D97C(_4__this);
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v9; // x8
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass36_0_o *v16; // x20
  ClassBoardController___c__DisplayClass36_0_c *v17; // x8
  unsigned __int64 v18; // x10
  IClassBoardSquareUser_c **v19; // x11
  __int64 v20; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4211E1C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_IClassBoardSquareUser___ctor__, method);
    sub_B0D8A4(&System_Action_IClassBoardSquareUser__TypeInfo, v3);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v4);
    sub_B0D8A4(&IClassBoardSquareUser_TypeInfo, v5);
    this = (ClassBoardController___c__DisplayClass36_0_o *)sub_B0D8A4(
                                                             &Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__14__,
                                                             v6);
    byte_4211E1C = 1;
  }
  klass = v2[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v9 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v9->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v12 = (__int64)&(&v9->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v12 = sub_AA67A0(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass36_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v12)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v12 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v2[7].monitor;
  v16 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_IClassBoardSquareUser__TypeInfo,
                                                                                     v13,
                                                                                     v14);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v2,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__14__,
      (const MethodInfo_246EA3C *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v2[7].monitor = monitor;
    sub_B0D840(&v2[7].monitor, monitor);
  }
  if ( !v16 )
LABEL_21:
    sub_B0D97C(this);
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
    v20 = sub_AA67A0(v16, IClassBoardSquareUser_TypeInfo, 2LL);
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
    sub_B0D97C(_4__this);
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
  if ( (byte_4211E1D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass36_0_o *)sub_B0D8A4(
                                                             &Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__15__,
                                                             v4);
    byte_4211E1D = 1;
  }
  klass = (System_Action_o *)v3[7].klass;
  monitor = (ClassBoardController_o *)v3[1].monitor;
  v7 = (ClassBoardSquare_o *)v3[2].klass;
  if ( !klass )
  {
    klass = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, _, method);
    System_Action___ctor(
      klass,
      v3,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v3[7].klass = (Il2CppClass *)klass;
    sub_B0D840(&v3[7], klass);
  }
  if ( !monitor )
    sub_B0D97C(this);
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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v9; // x8
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *monitor; // x21
  ClassBoardController___c__DisplayClass36_0_o *v16; // x20
  ClassBoardController___c__DisplayClass36_0_c *v17; // x8
  unsigned __int64 v18; // x10
  IClassBoardSquareUser_c **v19; // x11
  __int64 v20; // x0

  v2 = (Il2CppObject *)this;
  if ( (byte_4211E1A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_IClassBoardSquareUser___ctor__, method);
    sub_B0D8A4(&System_Action_IClassBoardSquareUser__TypeInfo, v3);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v4);
    sub_B0D8A4(&IClassBoardSquareUser_TypeInfo, v5);
    this = (ClassBoardController___c__DisplayClass36_0_o *)sub_B0D8A4(
                                                             &Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__10__,
                                                             v6);
    byte_4211E1A = 1;
  }
  klass = v2[2].klass;
  if ( !klass )
    goto LABEL_21;
  implementedInterfaces = klass->_1.implementedInterfaces;
  if ( !implementedInterfaces )
    goto LABEL_21;
  v9 = *implementedInterfaces;
  if ( *(_WORD *)&(*implementedInterfaces)->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&v9->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&(*implementedInterfaces)->_2.bitflags1 )
        goto LABEL_9;
    }
    v12 = (__int64)&(&v9->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v12 = sub_AA67A0(implementedInterfaces, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  this = (ClassBoardController___c__DisplayClass36_0_o *)(*(__int64 (__fastcall **)(Il2CppClass **, _QWORD))v12)(
                                                           implementedInterfaces,
                                                           *(_QWORD *)(v12 + 8));
  monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v2[5].monitor;
  v16 = this;
  if ( !monitor )
  {
    monitor = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_IClassBoardSquareUser__TypeInfo,
                                                                                     v13,
                                                                                     v14);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      monitor,
      v2,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__10__,
      (const MethodInfo_246EA3C *)Method_System_Action_IClassBoardSquareUser___ctor__);
    v2[5].monitor = monitor;
    sub_B0D840(&v2[5].monitor, monitor);
  }
  if ( !v16 )
LABEL_21:
    sub_B0D97C(this);
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
    v20 = sub_AA67A0(v16, IClassBoardSquareUser_TypeInfo, 2LL);
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
    sub_B0D97C(_4__this);
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
  __int64 v15; // x2
  struct ClassBoardController_o *v16; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *squareViewList; // x20
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__37_1; // x21
  Il2CppObject *v20; // x22
  struct ClassBoardController___c_StaticFields *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct ClassBoardController_o *v24; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *lineViewList; // x20
  struct ClassBoardController___c_StaticFields *v26; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__37_2; // x21
  Il2CppObject *v28; // x22
  struct ClassBoardController___c_StaticFields *v29; // x0

  if ( (byte_4211E1E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ClassBoardLine___ctor__, method);
    sub_B0D8A4(&Method_System_Action_ClassBoardSquare___ctor__, v3);
    sub_B0D8A4(&System_Action_ClassBoardSquare__TypeInfo, v4);
    sub_B0D8A4(&System_Action_ClassBoardLine__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v7);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B0D8A4(&Method_ClassBoardController___c__PlayReleaseEffect_b__37_1__, v10);
    sub_B0D8A4(&Method_ClassBoardController___c__PlayReleaseEffect_b__37_2__, v11);
    sub_B0D8A4(&ClassBoardController___c_TypeInfo, v12);
    byte_4211E1E = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_32;
  squareViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v16->fields.squareViewList;
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
    v20 = (Il2CppObject *)static_fields->__9;
    _9__37_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_ClassBoardSquare__TypeInfo,
                                                                                      v14,
                                                                                      v15);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__37_1,
      v20,
      Method_ClassBoardController___c__PlayReleaseEffect_b__37_1__,
      (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardSquare___ctor__);
    v21 = ClassBoardController___c_TypeInfo->static_fields;
    v21->__9__37_1 = (struct System_Action_ClassBoardSquare__o *)_9__37_1;
    sub_B0D840(&v21->__9__37_1, _9__37_1);
  }
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    squareViewList,
    (System_Action_T__o *)_9__37_1,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_32;
  _4__this = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v24->fields.lineViewList;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v26 = (struct ClassBoardController___c_StaticFields *)*((_QWORD *)_4__this + 23);
  _9__37_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v26->__9__37_2;
  if ( !_9__37_2 )
  {
    if ( (*((_BYTE *)_4__this + 307) & 4) != 0 && !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      v26 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__37_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                      System_Action_ClassBoardLine__TypeInfo,
                                                                                      v22,
                                                                                      v23);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__37_2,
      v28,
      Method_ClassBoardController___c__PlayReleaseEffect_b__37_2__,
      (const MethodInfo_246EA3C *)Method_System_Action_ClassBoardLine___ctor__);
    v29 = ClassBoardController___c_TypeInfo->static_fields;
    v29->__9__37_2 = (struct System_Action_ClassBoardLine__o *)_9__37_2;
    sub_B0D840(&v29->__9__37_2, _9__37_2);
  }
  if ( !lineViewList )
LABEL_32:
    sub_B0D97C(_4__this);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    lineViewList,
    (System_Action_T__o *)_9__37_2,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  __int64 v8; // x1
  __int64 v9; // x2
  ClassBoardUIController_o *v10; // x20
  System_Action_o *_9__4; // x21

  if ( (byte_4211E1F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    sub_B0D8A4(&Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__4__, v5);
    byte_4211E1F = 1;
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
  v10 = _4__this;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B0D840(&this->fields.__9__4, _9__4);
    }
    if ( v10 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v10, _9__4, 0LL);
      goto LABEL_13;
    }
LABEL_18:
    sub_B0D97C(_4__this);
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
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(_4__this);
  }
  System_Action__Invoke((System_Action_o *)_4__this, 0LL);
}