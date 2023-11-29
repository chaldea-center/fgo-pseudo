void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ClassBoardModelBuilder_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40FAFCF & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardModelBuilder_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v9);
    byte_40FAFCF = 1;
  }
  v10 = (ClassBoardModelBuilder_o *)sub_B170CC(ClassBoardModelBuilder_TypeInfo, method, v2, v3, v4);
  ClassBoardModelBuilder___ctor(v10, 0LL);
  this->fields._builder_k__BackingField = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._builder_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ClassBoardSquare__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.squareViewList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ClassBoardLine__TypeInfo,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.lineViewList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  ClassBoardController___c_c *v33; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__39_0; // x21
  Il2CppObject *v36; // x22
  struct ClassBoardController___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  ClassBoardController___c_c *v49; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x20
  struct ClassBoardController___c_StaticFields *v51; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__39_1; // x21
  Il2CppObject *v53; // x22
  struct ClassBoardController___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x20
  ClassBoardUIController_o *v62; // x0
  ClassBoardUIController_o *v63; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Action_o *v68; // x22
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v69; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FAFCC & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, squareModel);
    sub_B16FFC(&Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__39_2__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v12);
    sub_B16FFC(&Method_System_Func_IClassBoardLockModel__int___ctor__, v13);
    sub_B16FFC(&Method_System_Func_IClassBoardLockModel__bool___ctor__, v14);
    sub_B16FFC(&System_Func_IClassBoardLockModel__bool__TypeInfo, v15);
    sub_B16FFC(&System_Func_IClassBoardLockModel__int__TypeInfo, v16);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v18);
    sub_B16FFC(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v19);
    sub_B16FFC(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_0__, v20);
    sub_B16FFC(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_1__, v21);
    sub_B16FFC(&ClassBoardController___c_TypeInfo, v22);
    byte_40FAFCC = 1;
  }
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                                                                  squareModel,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v23;
  if ( !squareModel )
    goto LABEL_31;
  klass = squareModel->klass;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 15].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(squareModel, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               source,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v33 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v33 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__39_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_IClassBoardLockModel__bool__TypeInfo,
                                                                                    v28,
                                                                                    v29,
                                                                                    v30,
                                                                                    v31);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__39_0,
      v36,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_IClassBoardLockModel__bool___ctor__);
    v37 = ClassBoardController___c_TypeInfo->static_fields;
    v37->__9__39_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__39_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v37->__9__39_0,
      (System_Int32_array **)_9__39_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v32,
          (System_Func_TSource__bool__o *)_9__39_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v49 = ClassBoardController___c_TypeInfo;
  v50 = v44;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v49 = ClassBoardController___c_TypeInfo;
  }
  v51 = v49->static_fields;
  _9__39_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v51->__9__39_1;
  if ( !_9__39_1 )
  {
    if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v51 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)v51->__9;
    _9__39_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_IClassBoardLockModel__int__TypeInfo,
                                                                                 v45,
                                                                                 v46,
                                                                                 v47,
                                                                                 v48);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__39_1,
      v53,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__39_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_IClassBoardLockModel__int___ctor__);
    v54 = ClassBoardController___c_TypeInfo->static_fields;
    v54->__9__39_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__39_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v54->__9__39_1,
      (System_Int32_array **)_9__39_1,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v50,
                                                               (System_Func_TSource__TKey__o *)_9__39_1,
                                                               (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v61,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    v62 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                        this,
                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( v62 )
    {
      ClassBoardUIController__SetCameraWorkBlock(v62, 1, 0LL);
      v63 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
      v68 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v64, v65, v66, v67);
      System_Action___ctor(
        v68,
        (Il2CppObject *)this,
        Method_ClassBoardController__CheckOpenMissionClearDialogSave_b__39_2__,
        0LL);
      if ( v63 )
      {
        ClassBoardUIController__OpenMissionClearDialog(v63, v68, 0LL);
        goto LABEL_30;
      }
    }
LABEL_31:
    sub_B170D4();
  }
LABEL_30:
  v69 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                    v61,
                                                                                    (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v69, 0LL);
}


ClassBoardSquare_o *__fastcall ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        const MethodInfo *method)
{
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

  if ( (byte_40FAFC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab);
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v7);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FAFC7 = 1;
  }
  if ( assetId )
  {
    resourceCatalog = this->fields.resourceCatalog;
    if ( !resourceCatalog )
      sub_B170D4();
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
      p_method = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 4LL);
    }
    v16 = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD, _QWORD))p_method)(
                            resourceCatalog,
                            (unsigned int)assetId,
                            *(_QWORD *)(p_method + 8));
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      v16,
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (BaseMonoBehaviour_o *)this,
                                   (Il2CppObject *)defaultPrefab,
                                   this->fields.boardObjectsParent,
                                   0LL,
                                   (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
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
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v35; // x8
  unsigned __int64 v36; // x10
  IClassBoardSquareModel_c **v37; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  IClassBoardSquareModel_c *v40; // x8
  ClassBoardSquare_o *v41; // x22
  IClassBoardSquareModel_c *v42; // x1
  unsigned __int64 v43; // x10
  IClassBoardSquareModel_c **v44; // x11
  __int64 v45; // x0
  char v46; // w0
  struct IClassBoardResourceCatalog_o *v47; // x22
  IClassBoardResourceCatalog_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  IClassBoardResourceCatalog_c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  IClassBoardSquareModel_c *v57; // x8
  unsigned __int64 v58; // x10
  IClassBoardSquareModel_c **v59; // x11
  __int64 v60; // x0
  IClassBoardSquareModel_c *v61; // x8
  unsigned __int64 v62; // x10
  IClassBoardSquareModel_c **v63; // x11
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  ClassBoardSquare_o *v66; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v67; // x22
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x0
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
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
  EventMissionProgressRequest_Argument_ProgressData_o *v97; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x0
  int v99; // w23
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  int v104[2]; // [xsp+0h] [xbp-60h]
  int v105; // [xsp+8h] [xbp-58h]

  if ( (byte_40FAFC6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, method);
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, v3);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v5);
    sub_B16FFC(&System_IDisposable_TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v13);
    byte_40FAFC6 = 1;
  }
  v105 = 0;
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
    v19 = sub_AAFEF8(
            *(_QWORD *)(v14 + 24),
            System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo,
            0LL);
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8));
  if ( !v20 )
    sub_B170D4();
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
      v24 = sub_AAFEF8(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v28 = sub_AAFEF8(v20, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v29 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    if ( sub_B170BC(v29, IClassBoardLockModel_TypeInfo) )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !resourceCatalog )
        sub_B170D4();
      klass = resourceCatalog->klass;
      if ( *(_WORD *)&resourceCatalog->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v32;
          p_offset += 4;
          if ( v32 >= *(unsigned __int16 *)&resourceCatalog->klass->_2.bitflags1 )
            goto LABEL_31;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_31:
        p_method = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v39 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
              resourceCatalog,
              *(_QWORD *)(p_method + 8));
      if ( !v39 )
        sub_B170D4();
      if ( !v29 )
        sub_B170D4();
      v40 = v29->klass;
      v41 = *(ClassBoardSquare_o **)(v39 + 32);
      v42 = IClassBoardSquareModel_TypeInfo;
      if ( !*(_WORD *)&v29->klass->_2.bitflags1 )
        goto LABEL_67;
      v43 = 0LL;
      v44 = (IClassBoardSquareModel_c **)&v40->_1.interfaceOffsets->offset;
      while ( *(v44 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v43;
        v44 += 2;
        if ( v43 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
          goto LABEL_67;
      }
      v45 = (__int64)&v40->vtable[*(_DWORD *)v44 + 10].method;
    }
    else
    {
      if ( !v29 )
        sub_B170D4();
      v35 = v29->klass;
      if ( *(_WORD *)&v29->klass->_2.bitflags1 )
      {
        v36 = 0LL;
        v37 = (IClassBoardSquareModel_c **)&v35->_1.interfaceOffsets->offset;
        while ( *(v37 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v36;
          v37 += 2;
          if ( v36 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_37;
        }
        v38 = (__int64)&v35->vtable[*(_DWORD *)v37 + 5].method;
      }
      else
      {
LABEL_37:
        v38 = sub_AAFEF8(v29, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v46 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
      v47 = this->fields.resourceCatalog;
      if ( (v46 & 1) != 0 )
      {
        if ( !v47 )
          sub_B170D4();
        v48 = v47->klass;
        if ( *(_WORD *)&v47->klass->_2.bitflags1 )
        {
          v49 = 0LL;
          v50 = &v48->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v49;
            v50 += 4;
            if ( v49 >= *(unsigned __int16 *)&v47->klass->_2.bitflags1 )
              goto LABEL_54;
          }
          v51 = (__int64)&v48->vtable[*v50].method;
        }
        else
        {
LABEL_54:
          v51 = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v56 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8));
        if ( !v56 )
          sub_B170D4();
        v57 = v29->klass;
        v41 = *(ClassBoardSquare_o **)(v56 + 40);
        v42 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v29->klass->_2.bitflags1 )
          goto LABEL_67;
        v58 = 0LL;
        v59 = (IClassBoardSquareModel_c **)&v57->_1.interfaceOffsets->offset;
        while ( *(v59 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v58;
          v59 += 2;
          if ( v58 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v45 = (__int64)&v57->vtable[*(_DWORD *)v59 + 10].method;
      }
      else
      {
        if ( !v47 )
          sub_B170D4();
        v52 = v47->klass;
        if ( *(_WORD *)&v47->klass->_2.bitflags1 )
        {
          v53 = 0LL;
          v54 = &v52->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v54 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            ++v53;
            v54 += 4;
            if ( v53 >= *(unsigned __int16 *)&v47->klass->_2.bitflags1 )
              goto LABEL_60;
          }
          v55 = (__int64)&v52->vtable[*v54].method;
        }
        else
        {
LABEL_60:
          v55 = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v60 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
        if ( !v60 )
          sub_B170D4();
        v61 = v29->klass;
        v41 = *(ClassBoardSquare_o **)(v60 + 16);
        v42 = IClassBoardSquareModel_TypeInfo;
        if ( !*(_WORD *)&v29->klass->_2.bitflags1 )
        {
LABEL_67:
          v45 = sub_AAFEF8(v29, v42, 10LL);
          goto LABEL_77;
        }
        v62 = 0LL;
        v63 = (IClassBoardSquareModel_c **)&v61->_1.interfaceOffsets->offset;
        while ( *(v63 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          ++v62;
          v63 += 2;
          if ( v62 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_67;
        }
        v45 = (__int64)&v61->vtable[*(_DWORD *)v63 + 10].method;
      }
    }
LABEL_77:
    v64 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v45)(v29, *(_QWORD *)(v45 + 8));
    v66 = ClassBoardController__CloneSquareObject(this, v41, v64, v65);
    v67 = (EventMissionProgressRequest_Argument_ProgressData_o *)v66;
    if ( !v66 )
      sub_B170D4();
    ClassBoardSquare__Setup(v66, v29, 0LL);
    squareViewList = this->fields.squareViewList;
    if ( !squareViewList )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)squareViewList,
      v67,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
  }
  v104[0] = 180;
  v105 = 1;
  v69 = *(_QWORD *)v20;
  if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
  {
    v70 = 0LL;
    v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
    {
      ++v70;
      v71 += 4;
      if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
        goto LABEL_84;
    }
    v72 = v69 + 16LL * *v71 + 312;
  }
  else
  {
LABEL_84:
    v72 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v72)(v20, *(_QWORD *)(v72 + 8));
  v105 = 0;
  v73 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
          this,
          this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v73 || (v74 = *(__int64 **)(v73 + 16)) == 0LL )
LABEL_143:
    sub_B170D4();
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
    v78 = sub_AAFEF8(*(_QWORD *)(v73 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0LL);
  }
  v79 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8));
  if ( !v79 )
    sub_B170D4();
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
      v83 = sub_AAFEF8(v79, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v87 = sub_AAFEF8(v79, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v88 = (*(__int64 (__fastcall **)(__int64, _QWORD))v87)(v79, *(_QWORD *)(v87 + 8));
    v89 = this->fields.resourceCatalog;
    if ( !v89 )
      sub_B170D4();
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
      v94 = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v95 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v94)(v89, *(_QWORD *)(v94 + 8));
    if ( !v95 )
      sub_B170D4();
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      *(Il2CppObject **)(v95 + 24),
                      this->fields.boardObjectsParent,
                      0LL,
                      (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v97 = (EventMissionProgressRequest_Argument_ProgressData_o *)Object_object;
    if ( !Object_object )
      sub_B170D4();
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v91, 0LL);
    lineViewList = this->fields.lineViewList;
    if ( !lineViewList )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)lineViewList,
      v97,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardLine__Add__);
  }
  v104[0] = 280;
  v99 = ++v105;
  v100 = *(_QWORD *)v79;
  if ( *(_WORD *)(*(_QWORD *)v79 + 298LL) )
  {
    v101 = 0LL;
    v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
    {
      ++v101;
      v102 += 4;
      if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v79 + 298LL) )
        goto LABEL_123;
    }
    v103 = v100 + 16LL * *v102 + 312;
  }
  else
  {
LABEL_123:
    v103 = sub_AAFEF8(v79, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v103)(v79, *(_QWORD *)(v103 + 8));
  if ( v99 && v104[v99 - 1] == 280 )
    v105 = v99 - 1;
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  CommonUI_o *Instance; // x0
  ClassBoardUIController_o *v8; // x0
  WebViewManager_o *v9; // x0
  int32_t baseId; // w20
  CommonUI_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x22

  if ( (byte_40FAFC4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardController__OnClickEffectList_b__29_0__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FAFC4 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      if ( CommonUI__IsOpenClassBoardEffectListDialog(Instance, 0LL) )
        return;
      v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                         this,
                                         this->klass->vtable._5_set_classBoardUIController.methodPtr);
      if ( v8 )
      {
        ClassBoardUIController__SetCameraWorkBlock(v8, 1, 0LL);
        v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseId = this->fields.baseId;
        v11 = (CommonUI_o *)v9;
        v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
        System_Action___ctor(v16, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__29_0__, 0LL);
        if ( v11 )
        {
          CommonUI__OpenClassBoardEffectListDialog(v11, 0, baseId, 1, v16, 0, 0LL, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40FAFC3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardController__OnClickHelp_b__28_0__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FAFC3 = 1;
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
      sub_B170D4();
    ClassBoardUIController__SetCameraWorkBlock(v6, 1, 0LL);
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__28_0__, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, 82, v11, 0LL);
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

  if ( (byte_40FAFC5 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_B16FFC(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v3);
    sub_B16FFC(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v4);
    byte_40FAFC5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_object___Delete((const MethodInfo_2A555C0 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
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
      p_method = sub_AAFEF8(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
      resourceCatalog,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  ClassBoardUIController_o *v34; // x0
  ClassBoardUIController_o *v35; // x0
  MissionNotifyManager_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  ClassBoardController___c_c *v42; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__38_0; // x22
  Il2CppObject *v45; // x23
  struct ClassBoardController___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  ClassBoardController___c_c *v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x21
  struct ClassBoardController___c_StaticFields *v60; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__38_1; // x22
  Il2CppObject *v62; // x23
  struct ClassBoardController___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x21
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  ClassBoardController___c_c *v81; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x21
  struct ClassBoardController___c_StaticFields *v83; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__38_2; // x22
  Il2CppObject *v85; // x23
  struct ClassBoardController___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v94; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v96; // x21

  if ( (byte_40FAFCB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v12);
    sub_B16FFC(&Method_System_Func_ClassBoardLock__bool___ctor__, v13);
    sub_B16FFC(&Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__, v14);
    sub_B16FFC(&Method_System_Func_ClassBoardLock__int___ctor__, v15);
    sub_B16FFC(&System_Func_ClassBoardLock__int__TypeInfo, v16);
    sub_B16FFC(&System_Func_ClassBoardLock__bool__TypeInfo, v17);
    sub_B16FFC(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v18);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v19);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v20);
    sub_B16FFC(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_0__, v21);
    sub_B16FFC(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_1__, v22);
    sub_B16FFC(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_2__, v23);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__3__, v24);
    sub_B16FFC(&ClassBoardController___c__DisplayClass38_0_TypeInfo, v25);
    sub_B16FFC(&ClassBoardController___c_TypeInfo, v26);
    byte_40FAFCB = 1;
  }
  v27 = sub_B170CC(ClassBoardController___c__DisplayClass38_0_TypeInfo, method, v2, v3, v4);
  ClassBoardController___c__DisplayClass38_0___ctor((ClassBoardController___c__DisplayClass38_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_38;
  *(_QWORD *)(v27 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  v34 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v34 )
    goto LABEL_38;
  ClassBoardUIController__TouchDisable(v34, 0LL);
  v35 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v35 )
    goto LABEL_38;
  ClassBoardUIController__SetCameraWorkBlock(v35, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v36 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v36 )
    goto LABEL_38;
  MissionNotifyManager__StartPause(v36, 0LL);
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               (System_Collections_IEnumerable_o *)this->fields.squareViewList,
                                                               (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v42 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v42 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_ClassBoardLock__bool__TypeInfo,
                                                                                    v37,
                                                                                    v38,
                                                                                    v39,
                                                                                    v40);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__38_0,
      v45,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardLock__bool___ctor__);
    v46 = ClassBoardController___c_TypeInfo->static_fields;
    v46->__9__38_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__38_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v46->__9__38_0,
      (System_Int32_array **)_9__38_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v41,
          (System_Func_TSource__bool__o *)_9__38_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v58 = ClassBoardController___c_TypeInfo;
  v59 = v53;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v58 = ClassBoardController___c_TypeInfo;
  }
  v60 = v58->static_fields;
  _9__38_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v60->__9__38_1;
  if ( !_9__38_1 )
  {
    if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v60 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v62 = (Il2CppObject *)v60->__9;
    _9__38_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_ClassBoardLock__int__TypeInfo,
                                                                                 v54,
                                                                                 v55,
                                                                                 v56,
                                                                                 v57);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__38_1,
      v62,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ClassBoardLock__int___ctor__);
    v63 = ClassBoardController___c_TypeInfo->static_fields;
    v63->__9__38_1 = (struct System_Func_ClassBoardLock__int__o *)_9__38_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v63->__9__38_1,
      (System_Int32_array **)_9__38_1,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69);
  }
  v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v59,
                                                               (System_Func_TSource__TKey__o *)_9__38_1,
                                                               (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v27 + 16) = 0;
  v71 = v70;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         v70,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v27 + 16) = 1;
    v76 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            v71,
            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v81 = ClassBoardController___c_TypeInfo;
    v82 = (System_Collections_Generic_IEnumerable_TSource__o *)v76;
    if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v81 = ClassBoardController___c_TypeInfo;
    }
    v83 = v81->static_fields;
    _9__38_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v83->__9__38_2;
    if ( !_9__38_2 )
    {
      if ( (BYTE3(v81->vtable._0_Equals.methodPtr) & 4) != 0 && !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v83 = ClassBoardController___c_TypeInfo->static_fields;
      }
      v85 = (Il2CppObject *)v83->__9;
      _9__38_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo,
                                                                                                   v77,
                                                                                                   v78,
                                                                                                   v79,
                                                                                                   v80);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__38_2,
        v85,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__38_2__,
        (const MethodInfo_2B6C28C *)Method_System_Func_ClassBoardLock__IClassBoardLockModel___ctor__);
      v86 = ClassBoardController___c_TypeInfo->static_fields;
      v86->__9__38_2 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__38_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v86->__9__38_2,
        (System_Int32_array **)_9__38_2,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
    }
    v93 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v82,
                                                                 (System_Func_TSource__TResult__o *)_9__38_2,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v94 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                      v93,
                                                                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v94, 0LL);
  }
  effectController = this->fields.effectController;
  v96 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v72, v73, v74, v75);
  System_Action___ctor(
    v96,
    (Il2CppObject *)v27,
    Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__3__,
    0LL);
  if ( !effectController )
LABEL_38:
    sub_B170D4();
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v96, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
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
  ClassBoardUIController_o *v23; // x0
  ClassBoardUIController_o *v24; // x0
  ClassBoardEffectController_o *effectController; // x22
  UnityEngine_Transform_o *transform; // x0
  float v27; // s0
  float v28; // s1
  float v29; // s2
  UnityEngine_Transform_o *boardParent; // x0
  float v31; // s8
  float v32; // s9
  float v33; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FAFCD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, square);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass40_0__PlayMoveCamera_b__0__, v8);
    sub_B16FFC(&ClassBoardController___c__DisplayClass40_0_TypeInfo, v9);
    byte_40FAFCD = 1;
  }
  v10 = sub_B170CC(ClassBoardController___c__DisplayClass40_0_TypeInfo, square, callback, method, v4);
  ClassBoardController___c__DisplayClass40_0___ctor((ClassBoardController___c__DisplayClass40_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_11;
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 24) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)callback, v17, v18, v19, v20, v21, v22);
  v23 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v23 )
    goto LABEL_11;
  ClassBoardUIController__TouchDisable(v23, 0LL);
  v24 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v24 )
    goto LABEL_11;
  ClassBoardUIController__SetCameraWorkBlock(v24, 1, 0LL);
  if ( !square )
    goto LABEL_11;
  effectController = this->fields.effectController;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)square, 0LL);
  if ( !transform )
    goto LABEL_11;
  *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(transform, 0LL);
  boardParent = this->fields.boardParent;
  if ( !boardParent )
    goto LABEL_11;
  v31 = v27;
  v32 = v28;
  v33 = v29;
  localScale = UnityEngine_Transform__get_localScale(boardParent, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)v10,
    Method_ClassBoardController___c__DisplayClass40_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !effectController )
LABEL_11:
    sub_B170D4();
  v43.fields.x = v31 * x;
  v43.fields.y = v32 * y;
  v43.fields.z = v33 * z;
  ClassBoardEffectController__PlaySelectMoveCamera(effectController, v43, v41, 0LL);
}


void __fastcall ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
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
  ClassBoardUIController_o *v25; // x0
  ClassBoardUIController_o *v26; // x0
  MissionNotifyManager_o *v27; // x0
  ClassBoardUIController_o *v28; // x0
  ClassBoardEffectController_o *effectController; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Action_o *v34; // x22

  if ( (byte_40FAFCA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, square);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass37_0__PlayReleaseEffect_b__0__, v10);
    sub_B16FFC(&ClassBoardController___c__DisplayClass37_0_TypeInfo, v11);
    byte_40FAFCA = 1;
  }
  v12 = sub_B170CC(ClassBoardController___c__DisplayClass37_0_TypeInfo, square, endAct, method, v4);
  ClassBoardController___c__DisplayClass37_0___ctor((ClassBoardController___c__DisplayClass37_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 24) = endAct;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)endAct, v19, v20, v21, v22, v23, v24);
  v25 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v25 )
    goto LABEL_13;
  ClassBoardUIController__TouchDisable(v25, 0LL);
  v26 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v26 )
    goto LABEL_13;
  ClassBoardUIController__SetCameraWorkBlock(v26, 1, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v27 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v27
    || (MissionNotifyManager__StartPause(v27, 0LL),
        (v28 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                             this,
                                             this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__UpdateItemList(v28, 0LL),
        effectController = this->fields.effectController,
        v34 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v30, v31, v32, v33),
        System_Action___ctor(
          v34,
          (Il2CppObject *)v12,
          Method_ClassBoardController___c__DisplayClass37_0__PlayReleaseEffect_b__0__,
          0LL),
        !effectController) )
  {
LABEL_13:
    sub_B170D4();
  }
  ClassBoardEffectController__PlayRelease(effectController, square, v34, 0LL);
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
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Object_o *gameObject; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_IEnumerable_T__o *v23; // x20
  ClassBoardController___c_c *v24; // x8
  struct ClassBoardController___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x21
  Il2CppObject *v27; // x22
  struct ClassBoardController___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x0
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  ClassBoardController___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_T__o *v42; // x20
  struct ClassBoardController___c_StaticFields *v43; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_1; // x21
  Il2CppObject *v45; // x22
  struct ClassBoardController___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  ClassBoardModelBuilder_o *v60; // x0

  if ( (byte_40FAFC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ClassBoardLine___ctor__, method);
    sub_B16FFC(&Method_System_Action_ClassBoardSquare___ctor__, v3);
    sub_B16FFC(&System_Action_ClassBoardSquare__TypeInfo, v4);
    sub_B16FFC(&System_Action_ClassBoardLine__TypeInfo, v5);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v6);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_ClassBoardLine___, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_ClassBoardSquare___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_ClassBoardController___c__Release_b__26_0__, v13);
    sub_B16FFC(&Method_ClassBoardController___c__Release_b__26_1__, v14);
    sub_B16FFC(&ClassBoardController___c_TypeInfo, v15);
    byte_40FAFC1 = 1;
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
    v17 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v17 )
      goto LABEL_32;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  v23 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v24 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v24 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_ClassBoardSquare__TypeInfo,
                                                                                      v19,
                                                                                      v20,
                                                                                      v21,
                                                                                      v22);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_0,
      v27,
      Method_ClassBoardController___c__Release_b__26_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardSquare___ctor__);
    v28 = ClassBoardController___c_TypeInfo->static_fields;
    v28->__9__26_0 = (struct System_Action_ClassBoardSquare__o *)_9__26_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v23,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)squareViewList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
  v36 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v41 = ClassBoardController___c_TypeInfo;
  v42 = v36;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v41 = ClassBoardController___c_TypeInfo;
  }
  v43 = v41->static_fields;
  _9__26_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v43->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v43 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__26_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_ClassBoardLine__TypeInfo,
                                                                                      v37,
                                                                                      v38,
                                                                                      v39,
                                                                                      v40);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__26_1,
      v45,
      Method_ClassBoardController___c__Release_b__26_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardLine___ctor__);
    v46 = ClassBoardController___c_TypeInfo->static_fields;
    v46->__9__26_1 = (struct System_Action_ClassBoardLine__o *)_9__26_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v46->__9__26_1,
      (System_Int32_array **)_9__26_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v42,
    (System_Action_T__o *)_9__26_1,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)lineViewList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ClassBoardLine__Clear__),
        this->fields.effectController = 0LL,
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.effectController, 0LL, v54, v55, v56, v57, v58, v59),
        (v60 = (ClassBoardModelBuilder_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                             this,
                                             this->klass->vtable._7_SetupClassBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_32:
    sub_B170D4();
  }
  ClassBoardModelBuilder__Clear(v60, 0LL);
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

  if ( (byte_40FAFC2 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, action);
    byte_40FAFC2 = 1;
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
      sub_B170D4();
    *(_QWORD *)(v6 + 80) = action;
    sub_B16F98((BattleServantConfConponent_o *)(v6 + 80), (System_Int32_array **)action, v7, v8, v9, v10, v11, v12);
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
  UnityEngine_GameObject_o *earthAccessoriesObject; // x0
  UnityEngine_Camera_o *currentCamera; // x0
  UnityEngine_RenderTexture_o *targetTexture; // x0
  UnityEngine_Texture_o *v29; // x23
  int v30; // w0
  struct MapCamera_o *v31; // x24
  int v32; // w26
  int v33; // w25
  int v34; // w0
  int v35; // w3
  int v36; // w8
  int v37; // w2
  int v38; // w8
  MapCamera_o *v39; // x0
  UnityEngine_Texture_o *v40; // x1
  MapCamera_o *v41; // x0
  MapCamera_o *v42; // x23
  const MethodInfo_29CF778 *v43; // x2
  BalanceConfig_c *v44; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  System_Action_o *v51; // x23
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x2
  ClassBoardModelBuilder_o *v60; // x0
  const MethodInfo *v61; // x1
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  Il2CppObject *current; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v68; // x23
  struct System_Collections_Generic_List_ClassBoardSquare__o *v69; // x21
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x22
  MapCamera_o *v71; // x23
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  ClassBoardEffectController_o *v76; // x24
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Nullable_float__o size; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v84; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v85; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v87; // 0:x3.8
  System_Nullable_Vector3__o v88; // 0:x0.16
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FAFC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ClassBoardSquare___ctor__, setResourceCatalog);
    sub_B16FFC(&System_Action_ClassBoardSquare__TypeInfo, v13);
    sub_B16FFC(&System_Action_TypeInfo, v14);
    sub_B16FFC(&BalanceConfig_TypeInfo, v15);
    sub_B16FFC(&Method_ClassBoardController_ShowBoard__, v16);
    sub_B16FFC(&ClassBoardEffectController_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v21);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v22);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v23);
    byte_40FAFC0 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  this->fields.resourceCatalog = setResourceCatalog;
  this->fields.baseId = baseId;
  sub_B16F98(
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
  earthAccessoriesObject = classBoardBackground->fields.earthAccessoriesObject;
  if ( !earthAccessoriesObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(earthAccessoriesObject, 1, 0LL);
  currentCamera = classBoardBackground->fields.currentCamera;
  if ( !currentCamera )
    goto LABEL_31;
  targetTexture = UnityEngine_Camera__get_targetTexture(currentCamera, 0LL);
  if ( !targetTexture )
    goto LABEL_31;
  v29 = (UnityEngine_Texture_o *)targetTexture;
  v30 = ((__int64 (__fastcall *)(UnityEngine_RenderTexture_o *, Il2CppMethodPointer))targetTexture->klass->vtable._4_get_width.method)(
          targetTexture,
          targetTexture->klass->vtable._5_set_width.methodPtr);
  v31 = this->fields.mapCamera;
  v32 = v30;
  v33 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v29->klass->vtable._4_get_width.method)(
          v29,
          v29->klass->vtable._5_set_width.methodPtr);
  v34 = ((__int64 (__fastcall *)(UnityEngine_Texture_o *, Il2CppMethodPointer))v29->klass->vtable._6_get_height.method)(
          v29,
          v29->klass->vtable._7_set_height.methodPtr);
  if ( !v31 )
    goto LABEL_31;
  v35 = v34;
  if ( v32 < 2049 )
  {
    v39 = v31;
    v40 = v29;
    v37 = v33;
  }
  else
  {
    v36 = v33 >= 0 ? v33 : v33 + 1;
    v37 = v36 >> 1;
    v38 = v34 >= 0 ? v34 : v34 + 1;
    v35 = v38 >> 1;
    v39 = v31;
    v40 = v29;
  }
  MapCamera__SetMapTexture(v39, v40, v37, v35, 0LL);
  v41 = this->fields.mapCamera;
  if ( !v41 )
    goto LABEL_31;
  MapCamera__SetEnable(v41, 1, 0LL);
  v42 = this->fields.mapCamera;
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v88.fields.value.fields.x = &v84;
  *(_QWORD *)&v84.fields.value.fields.x = 0LL;
  *(_QWORD *)&v84.fields.value.fields.z = 0LL;
  *(_QWORD *)&v88.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v88, zero, v43);
  v44 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v44 = BalanceConfig_TypeInfo;
  }
  static_fields = v44->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  if ( !v42 )
    goto LABEL_31;
  v87 = size;
  MapCamera__StartAutoWork(v42, 0.0, v84, v87, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v51 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v47, v48, v49, v50);
  System_Action___ctor(v51, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v51;
  sub_B16F98(
    (BattleServantConfConponent_o *)&classBoardBackground->fields.showBoardCallback,
    (System_Int32_array **)v51,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  ClassBoardBackground__SetBoardParentAnimation(classBoardBackground, this->fields.boardParentAnimation, v58);
  ClassBoardBackground__SetClassIcon(classBoardBackground, iconId, v59);
  v60 = (ClassBoardModelBuilder_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                      this,
                                      this->klass->vtable._7_SetupClassBoardUIController.methodPtr);
  if ( !v60
    || (ClassBoardModelBuilder__Make(v60, baseId, 0LL),
        ClassBoardController__CreateViews(this, v61),
        (squareViewList = this->fields.squareViewList) == 0LL) )
  {
LABEL_31:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v85,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)squareViewList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v85,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v85.fields.current;
    v68 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_ClassBoardSquare__TypeInfo,
                                                                                 v63,
                                                                                 v64,
                                                                                 v65,
                                                                                 v66);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v68,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._9_PlayClassBoardStartEffect.methodPtr,
      (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardSquare___ctor__);
    if ( !current )
      sub_B170D4();
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, (System_Action_ClassBoardSquare__o *)v68, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v85,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._7_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._8_SetupSquareOnClickListener.methodPtr);
  v69 = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v71 = this->fields.mapCamera;
  v76 = (ClassBoardEffectController_o *)sub_B170CC(ClassBoardEffectController_TypeInfo, v72, v73, v74, v75);
  ClassBoardEffectController___ctor(
    v76,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)v69,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v71,
    classBoardBackground,
    0LL);
  this->fields.effectController = v76;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.effectController,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
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
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x0
  Il2CppObject *Object_object; // x0
  ClassBoardUIController_o *v22; // x0
  __int64 v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  Il2CppObject *v47; // x0
  System_String_o *v48; // x20
  ClassBoardUIController_o *v49; // x21
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x0
  ClassBoardUIController_o *v51; // x20
  AtlasManagerUnit_o *v52; // x21
  System_String_o *v53; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v55; // x0
  System_Int32_array *v56; // x20
  ClassBoardUIController_o *v57; // x19
  AtlasManagerUnit_o *v58; // x0
  int32_t v59; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FAFC8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&baseId);
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v4);
    sub_B16FFC(&Method_ClassBoardController_OnClickEffectList__, v5);
    sub_B16FFC(&Method_ClassBoardController_OnClickHelp__, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_19597, v13);
    sub_B16FFC(&StringLiteral_3005, v14);
    byte_40FAFC8 = 1;
  }
  entity = 0LL;
  resourceCatalog = this->fields.resourceCatalog;
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
    p_method = sub_AAFEF8(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
          resourceCatalog,
          *(_QWORD *)(p_method + 8));
  if ( !v20 )
    goto LABEL_30;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)this,
                    *(Il2CppObject **)(v20 + 88),
                    this->fields.uiRoot,
                    0LL,
                    (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._5_set_classBoardUIController.method)(
    this,
    Object_object,
    this->klass->vtable._6_get_builder.methodPtr);
  v22 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v22 )
    goto LABEL_30;
  ClassBoardUIController__Init(v22, 0LL);
  v23 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
          this,
          this->klass->vtable._5_set_classBoardUIController.methodPtr);
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v23 )
    goto LABEL_30;
  *(_QWORD *)(v23 + 88) = v28;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 88), (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  v35 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
          this,
          this->klass->vtable._5_set_classBoardUIController.methodPtr);
  v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v35 )
    goto LABEL_30;
  *(_QWORD *)(v35 + 96) = v40;
  sub_B16F98((BattleServantConfConponent_o *)(v35 + 96), (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
  v59 = this->fields.baseId;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v48 = System_String__Format((System_String_o *)StringLiteral_19597, v47, 0LL);
  v49 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v49 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderTitle(v49, UiAtlasManagerUnit, v48, 0LL);
  v51 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  v52 = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3005, 0LL);
  if ( !v51 )
    goto LABEL_30;
  ClassBoardUIController__SetHeaderMessage(v51, v52, v53, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_30;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields.baseId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return;
  if ( !entity )
    goto LABEL_30;
  if ( BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)&entity->fields.flag, 0LL) )
    return;
  v55 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
          this,
          this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !entity
    || (v56 = *(System_Int32_array **)&entity->fields.flag,
        v57 = (ClassBoardUIController_o *)v55,
        v58 = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v57) )
  {
LABEL_30:
    sub_B170D4();
  }
  ClassBoardUIController__SetItemList(v57, v56, v58, 0LL);
}


void __fastcall ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ClassBoardSquare_o **v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 *v26; // x22
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  IClassBoardSquareModel_c **v29; // x11
  __int64 v30; // x0
  int v31; // w0
  System_Enum_o *v32; // x22
  System_Enum_o *v33; // x0
  bool HasFlag; // w0
  ClassBoardSquare_o *v35; // x8
  __int64 v36; // x11
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v39; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  ClassBoardSquare_o *v42; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Action_o *v47; // x22
  const MethodInfo *v48; // x3
  int v49; // [xsp+8h] [xbp-38h] BYREF
  int v50; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FAFC9 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, square);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&ClassBoardLock_TypeInfo, v8);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v9);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__0__, v10);
    sub_B16FFC(&ClassBoardController___c__DisplayClass36_0_TypeInfo, v11);
    byte_40FAFC9 = 1;
  }
  v12 = sub_B170CC(ClassBoardController___c__DisplayClass36_0_TypeInfo, square, method, v3, v4);
  ClassBoardController___c__DisplayClass36_0___ctor((ClassBoardController___c__DisplayClass36_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_30;
  *(_QWORD *)(v12 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v12 + 32) = square;
  v19 = (ClassBoardSquare_o **)(v12 + 32);
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 32), (System_Int32_array **)square, v20, v21, v22, v23, v24, v25);
  if ( !*(_QWORD *)(v12 + 32) )
    goto LABEL_30;
  v26 = *(__int64 **)(*(_QWORD *)(v12 + 32) + 168LL);
  if ( !v26 )
    goto LABEL_30;
  v27 = *v26;
  if ( *(_WORD *)(*v26 + 298) )
  {
    v28 = 0LL;
    v29 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v27 + 176) + 8LL);
    while ( *(v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v28;
      v29 += 2;
      if ( v28 >= *(unsigned __int16 *)(*v26 + 298) )
        goto LABEL_10;
    }
    v30 = v27 + 16LL * (*(_DWORD *)v29 + 13) + 312;
  }
  else
  {
LABEL_10:
    v30 = sub_AAFEF8(v26, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v30)(v26, 0LL, *(_QWORD *)(v30 + 8));
  *(_DWORD *)(v12 + 16) = v31;
  v50 = v31;
  v32 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v50);
  v49 = 1;
  v33 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v49);
  if ( !v32 )
    goto LABEL_30;
  HasFlag = System_Enum__HasFlag(v32, v33, 0LL);
  v35 = *v19;
  if ( HasFlag )
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
  SquareModel_k__BackingField = v35->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
LABEL_30:
    sub_B170D4();
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v39;
      p_offset += 2;
      if ( v39 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 5].method;
  }
  else
  {
LABEL_24:
    p_method = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          SquareModel_k__BackingField,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    if ( *v19 )
    {
      ClassBoardSquare__SetSelectedEffectActive(*v19, 1, 0LL);
      v42 = *(ClassBoardSquare_o **)(v12 + 32);
      v47 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v43, v44, v45, v46);
      System_Action___ctor(
        v47,
        (Il2CppObject *)v12,
        Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__0__,
        0LL);
      ClassBoardController__PlayMoveCamera(this, v42, v47, v48);
      return;
    }
    goto LABEL_30;
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FAFCE & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardController__ShowBoardCoroutine_d__42_TypeInfo, method);
    byte_40FAFCE = 1;
  }
  v6 = sub_B170CC(ClassBoardController__ShowBoardCoroutine_d__42_TypeInfo, method, v2, v3, v4);
  ClassBoardController__ShowBoardCoroutine_d__42___ctor((ClassBoardController__ShowBoardCoroutine_d__42_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
    sub_B170D4();
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__29_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  ClassBoardUIController_o *v4; // x0

  if ( (byte_40FAFD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FAFD0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog(Instance, 0LL, 0LL),
        (v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v4, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickHelp_b__28_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_B170D4();
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
    sub_B170D4();
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
  sub_B16F98(
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
  bool result; // w0
  Il2CppObject *_4__this; // x19
  UnityEngine_Component_o *klass; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v22; // x0
  Il2CppObject **p__2__current; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *monitor; // x0
  int v25; // w20
  ClassBoardUIController_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Action_o *v31; // x20
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+0h] [xbp-70h] BYREF
  int v33[2]; // [xsp+18h] [xbp-58h]
  int v34; // [xsp+20h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+28h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+40h] [xbp-30h] BYREF

  if ( (byte_40F70DB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardController__ShowBoardCoroutine_b__42_0__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v11);
    byte_40F70DB = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
  result = 0;
  if ( this->fields.__1__state < 2u )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_27;
    klass = (UnityEngine_Component_o *)_4__this[2].klass;
    if ( !klass )
      goto LABEL_27;
    gameObject = UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !gameObject )
      goto LABEL_27;
    if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v16, v17, v18, v19, v20, v21);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    v22 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this[6].klass;
    if ( !v22 )
      goto LABEL_27;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      v22,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v32;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &i,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))i.fields.current->klass->vtable[7].method)(
            i.fields.current,
            i.fields.current->klass->vtable[8].methodPtr) )
    {
      if ( !i.fields.current )
        sub_B170D4();
    }
    v33[0] = 124;
    v34 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &i,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    v34 = 0;
    monitor = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)_4__this[6].monitor;
    if ( !monitor )
      goto LABEL_27;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      monitor,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v35.fields.current )
        sub_B170D4();
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v35.fields.current, 0LL);
    }
    v33[0] = 175;
    v25 = ++v34;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    if ( v25 && v33[v25 - 1] == 175 )
      v34 = v25 - 1;
    v26 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))_4__this->klass->vtable[4].method)(
                                        _4__this,
                                        _4__this->klass->vtable[5].methodPtr);
    if ( !v26 )
LABEL_27:
      sub_B170D4();
    ClassBoardUIController__SetCameraWorkBlock(v26, 1, 0LL);
    v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
    System_Action___ctor(v31, _4__this, Method_ClassBoardController__ShowBoardCoroutine_b__42_0__, 0LL);
    EventTutorialMaster__CheckTutorial(0, 82, v31, 0, 0, 0, 0, 0LL);
    return 0;
  }
  return result;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ClassBoardController__ShowBoardCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70CD & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardController___c_TypeInfo, v1);
    byte_40F70CD = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardController___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardController___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  System_Enum_o *v17; // x0
  IClassBoardLockModel_c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  System_Enum_o *v22; // x20
  System_Enum_o *v23; // x0
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

  if ( (byte_40F70D2 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, x);
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, v4);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v5);
    byte_40F70D2 = 1;
  }
  v31 = 0;
  v30 = 0LL;
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
    p_method = sub_AAFEF8(x, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v30 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v31 = v10;
  *(_QWORD *)&v34.fields.Type = &v30;
  v34.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v34, v11) )
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
    v15 = sub_AAFEF8(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v33 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v15)(x, 0LL, *(_QWORD *)(v15 + 8));
  v16 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33);
  v32 = 2;
  v17 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32);
  if ( !v16 )
    goto LABEL_36;
  if ( System_Enum__HasFlag(v16, v17, 0LL) )
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
    v21 = sub_AAFEF8(x, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v33 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v21)(x, 0LL, *(_QWORD *)(v21 + 8));
  v22 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v33);
  v32 = 4;
  v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v32);
  if ( !v22 )
LABEL_36:
    sub_B170D4();
  if ( System_Enum__HasFlag(v22, v23, 0LL) )
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
    v29 = sub_AAFEF8(x, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v24 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v29)(x, *(_QWORD *)(v29 + 8)) ^ 1;
  return v24 & 1;
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

  if ( (byte_40F70D3 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, x);
    byte_40F70D3 = 1;
  }
  if ( !x )
    sub_B170D4();
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
    p_method = sub_AAFEF8(x, IClassBoardSquareModel_TypeInfo, 0LL);
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
  IClassBoardLockModel_o *LockModel; // x0
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v8; // x20
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int v12; // w1
  const MethodInfo *v13; // x2
  IClassBoardLockModel_o *v14; // x0
  IClassBoardLockModel_c *v15; // x8
  IClassBoardLockModel_o *v16; // x20
  unsigned __int64 v17; // x10
  IClassBoardSquareModel_c **v18; // x11
  __int64 v19; // x0
  System_Enum_o *v20; // x20
  System_Enum_o *v21; // x0
  IClassBoardLockModel_o *v22; // x0
  IClassBoardLockModel_c *v23; // x8
  IClassBoardLockModel_o *v24; // x20
  unsigned __int64 v25; // x10
  IClassBoardSquareModel_c **v26; // x11
  __int64 v27; // x0
  System_Enum_o *v28; // x20
  System_Enum_o *v29; // x0
  char v30; // w8
  IClassBoardLockModel_o *v32; // x0
  IClassBoardLockModel_c *v33; // x8
  IClassBoardLockModel_o *v34; // x19
  unsigned __int64 v35; // x10
  IClassBoardLockModel_c **v36; // x11
  __int64 v37; // x0
  __int64 v38; // [xsp+0h] [xbp-40h] BYREF
  int v39; // [xsp+8h] [xbp-38h]
  int v40; // [xsp+18h] [xbp-28h] BYREF
  int v41; // [xsp+1Ch] [xbp-24h] BYREF
  ClassBoardCondData_o v42; // 0:x0.12

  if ( (byte_40F70D0 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, x);
    sub_B16FFC(&IClassBoardLockModel_TypeInfo, v4);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v5);
    byte_40F70D0 = 1;
  }
  v39 = 0;
  v38 = 0LL;
  if ( !x )
    goto LABEL_40;
  LockModel = ClassBoardLock__get_LockModel(x, 0LL);
  if ( !LockModel )
    goto LABEL_40;
  klass = LockModel->klass;
  v8 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(LockModel, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v8, *(_QWORD *)(p_method + 8));
  v39 = v12;
  *(_QWORD *)&v42.fields.Type = &v38;
  v42.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v42, v13) )
    goto LABEL_30;
  v14 = ClassBoardLock__get_LockModel(x, 0LL);
  if ( !v14 )
    goto LABEL_40;
  v15 = v14->klass;
  v16 = v14;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v17 = 0LL;
    v18 = (IClassBoardSquareModel_c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v17;
      v18 += 2;
      if ( v17 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 13].method;
  }
  else
  {
LABEL_17:
    v19 = sub_AAFEF8(v14, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v41 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v19)(v16, 0LL, *(_QWORD *)(v19 + 8));
  v20 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v41);
  v40 = 2;
  v21 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v40);
  if ( !v20 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v20, v21, 0LL) )
  {
LABEL_30:
    v30 = 0;
    return v30 & 1;
  }
  v22 = ClassBoardLock__get_LockModel(x, 0LL);
  if ( !v22 )
    goto LABEL_40;
  v23 = v22->klass;
  v24 = v22;
  if ( *(_WORD *)&v22->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = (IClassBoardSquareModel_c **)&v23->_1.interfaceOffsets->offset;
    while ( *(v26 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v25;
      v26 += 2;
      if ( v25 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v27 = (__int64)&v23->vtable[*(_DWORD *)v26 + 13].method;
  }
  else
  {
LABEL_26:
    v27 = sub_AAFEF8(v22, IClassBoardSquareModel_TypeInfo, 13LL);
  }
  v41 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v27)(v24, 0LL, *(_QWORD *)(v27 + 8));
  v28 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v41);
  v40 = 4;
  v29 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v40);
  if ( !v28 )
    goto LABEL_40;
  if ( System_Enum__HasFlag(v28, v29, 0LL) )
    goto LABEL_30;
  v32 = ClassBoardLock__get_LockModel(x, 0LL);
  if ( !v32 )
LABEL_40:
    sub_B170D4();
  v33 = v32->klass;
  v34 = v32;
  if ( *(_WORD *)&v32->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = (IClassBoardLockModel_c **)&v33->_1.interfaceOffsets->offset;
    while ( *(v36 - 1) != IClassBoardLockModel_TypeInfo )
    {
      ++v35;
      v36 += 2;
      if ( v35 >= *(unsigned __int16 *)&v32->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v37 = (__int64)&v33->vtable[*(_DWORD *)v36 + 1].method;
  }
  else
  {
LABEL_37:
    v37 = sub_AAFEF8(v32, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v30 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8)) ^ 1;
  return v30 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__38_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_o *LockModel; // x0
  IClassBoardLockModel_c *klass; // x8
  IClassBoardLockModel_o *v6; // x19
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F70D1 & 1) == 0 )
  {
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, x);
    byte_40F70D1 = 1;
  }
  if ( !x || (LockModel = ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_B170D4();
  klass = LockModel->klass;
  v6 = LockModel;
  if ( *(_WORD *)&LockModel->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&LockModel->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(LockModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(v6, *(_QWORD *)(p_method + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__38_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__37_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__37_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__26_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F70CE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40F70CE = 1;
  }
  if ( !x )
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__26_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F70CF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40F70CF = 1;
  }
  if ( !x )
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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
  System_Enum_o *v24; // x0
  BaseMonoBehaviour_o *_4__this; // x20
  __int64 *monitor; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  System_Enum_o *v31; // x20
  System_Enum_o *v32; // x0
  BaseMonoBehaviour_o *v33; // x20
  __int64 *v34; // x21
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  System_Enum_o *v39; // x20
  System_Enum_o *v40; // x0
  BaseMonoBehaviour_o *v41; // x20
  __int64 *v42; // x21
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  struct ClassBoardController_o *v48; // x8
  Il2CppObject *Object_object; // x0
  ClassBoardSquareDetailDialog_o *v50; // x20
  struct ClassBoardController_o *v51; // x0
  ClassBoardUIController_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  System_Action_o *_9__1; // x23
  ClassBoardSquare_o *square; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Enum_o *v65; // x20
  System_Enum_o *v66; // x0
  BaseMonoBehaviour_o *v67; // x20
  __int64 *v68; // x21
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v73; // x0
  struct ClassBoardController_o *v74; // x8
  Il2CppObject *v75; // x0
  ClassBoardDisableOpenDialog_o *v76; // x20
  struct ClassBoardController_o *v77; // x0
  ClassBoardUIController_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Enum_o *v91; // x20
  System_Enum_o *v92; // x0
  BaseMonoBehaviour_o *v93; // x20
  __int64 *v94; // x21
  __int64 v95; // x8
  unsigned __int64 v96; // x10
  int *v97; // x11
  __int64 v98; // x0
  __int64 v99; // x0
  struct ClassBoardController_o *v100; // x8
  Il2CppObject *v101; // x0
  ClassBoardLockReleaseConditionDialog_o *v102; // x20
  struct ClassBoardController_o *v103; // x0
  ClassBoardUIController_o *v104; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  System_Action_o *_9__3; // x22
  ClassBoardSquare_o *v110; // x21
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  struct ClassBoardSquare_o *v117; // x8
  __int64 v118; // x11
  struct ClassBoardSquare_o *v119; // x22
  __int64 v120; // x0
  struct ClassBoardController_o *v121; // x8
  Il2CppObject *v122; // x0
  Il2CppObject *v123; // x20
  struct ClassBoardController_o *v124; // x0
  ClassBoardUIController_o *v125; // x0
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  struct ClassBoardSquare_o *v130; // x21
  ClassBoardController___c_c *v131; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_4; // x22
  Il2CppObject *v134; // x23
  struct ClassBoardController___c_StaticFields *v135; // x0
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Action_o *_9__5; // x23
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  ClassBoardLockOpenConfirmDialog_o *v149; // x0
  ClassBoardSquare_o *v150; // x1
  bool v151; // w2
  __int64 v152; // x0
  struct ClassBoardController_o *v153; // x8
  Il2CppObject *v154; // x0
  Il2CppObject *v155; // x20
  struct ClassBoardController_o *v156; // x0
  ClassBoardUIController_o *v157; // x0
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x3
  __int64 v161; // x4
  struct ClassBoardSquare_o *v162; // x21
  ClassBoardController___c_c *v163; // x0
  struct ClassBoardController___c_StaticFields *v164; // x8
  System_Action_o *_9__36_6; // x22
  Il2CppObject *v166; // x23
  struct ClassBoardController___c_StaticFields *v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Action_o *_9__7; // x23
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  ClassBoardSquareOpenConfirmDialog_o *v181; // x0
  ClassBoardSquare_o *v182; // x1
  bool v183; // w2
  BaseMonoBehaviour_o *v184; // x20
  __int64 *v185; // x21
  __int64 v186; // x8
  unsigned __int64 v187; // x10
  int *v188; // x11
  __int64 v189; // x0
  __int64 v190; // x0
  struct ClassBoardController_o *v191; // x8
  Il2CppObject *v192; // x0
  Il2CppObject *v193; // x20
  struct ClassBoardController_o *v194; // x0
  ClassBoardUIController_o *v195; // x0
  __int64 v196; // x1
  __int64 v197; // x2
  __int64 v198; // x3
  __int64 v199; // x4
  struct ClassBoardSquare_o *v200; // x21
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  Il2CppObject *v213; // x0
  Il2CppObject *v214; // x20
  struct ClassBoardController_o *v215; // x0
  ClassBoardUIController_o *v216; // x0
  __int64 v217; // x1
  __int64 v218; // x2
  __int64 v219; // x3
  __int64 v220; // x4
  struct ClassBoardSquare_o *v221; // x21
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  System_String_array **v228; // x2
  System_String_array **v229; // x3
  System_Boolean_array **v230; // x4
  System_Int32_array **v231; // x5
  System_Int32_array *v232; // x6
  System_Int32_array *v233; // x7
  int v234; // [xsp+8h] [xbp-38h] BYREF
  int32_t acquireFlag; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F70D4 & 1) == 0 )
  {
    sub_B16FFC(&AcquireFlag_TypeInfo, method);
    sub_B16FFC(&System_Action_TypeInfo, v3);
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v4);
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v5);
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v6);
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v7);
    sub_B16FFC(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v8);
    sub_B16FFC(&ClassBoardLock_TypeInfo, v9);
    sub_B16FFC(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_B16FFC(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_4__, v11);
    sub_B16FFC(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_6__, v12);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__12__, v13);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__13__, v14);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__1__, v15);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__2__, v16);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__3__, v17);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__5__, v18);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__7__, v19);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__8__, v20);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__9__, v21);
    sub_B16FFC(&ClassBoardController___c_TypeInfo, v22);
    byte_40F70D4 = 1;
  }
  acquireFlag = this->fields.acquireFlag;
  v23 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v234 = 1;
  v24 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v234);
  if ( !v23 )
    goto LABEL_146;
  if ( System_Enum__HasFlag(v23, v24, 0LL) )
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
          v30 = sub_AAFEF8(_4__this[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v47 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v30)(monitor, *(_QWORD *)(v30 + 8));
        if ( v47 )
        {
          v48 = this->fields.__4__this;
          if ( v48 )
          {
            Object_object = BaseMonoBehaviour__createObject_object_(
                              _4__this,
                              *(Il2CppObject **)(v47 + 80),
                              v48->fields.uiRoot,
                              0LL,
                              (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
            if ( Object_object )
            {
              v50 = (ClassBoardSquareDetailDialog_o *)Object_object;
              ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)Object_object, 0LL);
              v51 = this->fields.__4__this;
              if ( v51 )
              {
                v52 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v51->klass->vtable._4_get_classBoardUIController.method)(
                                                    v51,
                                                    v51->klass->vtable._5_set_classBoardUIController.methodPtr);
                if ( v52 )
                {
                  ClassBoardUIController__SetCameraWorkBlock(v52, 1, 0LL);
                  _9__1 = this->fields.__9__1;
                  square = this->fields.square;
                  if ( !_9__1 )
                  {
                    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v53, v54, v55, v56);
                    System_Action___ctor(
                      _9__1,
                      (Il2CppObject *)this,
                      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__1__,
                      0LL);
                    this->fields.__9__1 = _9__1;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&this->fields.__9__1,
                      (System_Int32_array **)_9__1,
                      v59,
                      v60,
                      v61,
                      v62,
                      v63,
                      v64);
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
    sub_B170D4();
  }
  acquireFlag = this->fields.acquireFlag;
  v31 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v234 = 2;
  v32 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v234);
  if ( !v31 )
    goto LABEL_146;
  if ( System_Enum__HasFlag(v31, v32, 0LL) )
  {
    v33 = (BaseMonoBehaviour_o *)this->fields.__4__this;
    if ( !v33 )
      goto LABEL_146;
    v34 = (__int64 *)v33[3].monitor;
    if ( !v34 )
      goto LABEL_146;
    v35 = *v34;
    if ( *(_WORD *)(*v34 + 298) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v37 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*v34 + 298) )
          goto LABEL_20;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_20:
      v38 = sub_AAFEF8(v33[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    v73 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8));
    if ( !v73 )
      goto LABEL_146;
    v74 = this->fields.__4__this;
    if ( !v74 )
      goto LABEL_146;
    v75 = BaseMonoBehaviour__createObject_object_(
            v33,
            *(Il2CppObject **)(v73 + 48),
            v74->fields.uiRoot,
            0LL,
            (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !v75 )
      goto LABEL_146;
    v76 = (ClassBoardDisableOpenDialog_o *)v75;
    ClassBoardDisableOpenDialog__Init((ClassBoardDisableOpenDialog_o *)v75, 0LL);
    v77 = this->fields.__4__this;
    if ( !v77 )
      goto LABEL_146;
    v78 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v77->klass->vtable._4_get_classBoardUIController.method)(
                                        v77,
                                        v77->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v78 )
      goto LABEL_146;
    ClassBoardUIController__SetCameraWorkBlock(v78, 1, 0LL);
    _9__2 = this->fields.__9__2;
    v84 = this->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v79, v80, v81, v82);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__2,
        (System_Int32_array **)_9__2,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
    }
    ClassBoardDisableOpenDialog__Open(v76, v84, _9__2, 0LL);
    return;
  }
  acquireFlag = this->fields.acquireFlag;
  v39 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
  v234 = 4;
  v40 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v234);
  if ( !v39 )
    goto LABEL_146;
  if ( !System_Enum__HasFlag(v39, v40, 0LL) )
  {
    acquireFlag = this->fields.acquireFlag;
    v65 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v234 = 16;
    v66 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v234);
    if ( !v65 )
      goto LABEL_146;
    if ( System_Enum__HasFlag(v65, v66, 0LL) )
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
            goto LABEL_47;
        }
        v72 = v69 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_47:
        v72 = sub_AAFEF8(v67[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v120 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
      if ( !v120 )
        goto LABEL_146;
      v121 = this->fields.__4__this;
      if ( !v121 )
        goto LABEL_146;
      v122 = BaseMonoBehaviour__createObject_object_(
               v67,
               *(Il2CppObject **)(v120 + 64),
               v121->fields.uiRoot,
               0LL,
               (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
      if ( !v122 )
        goto LABEL_146;
      v123 = v122;
      ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)v122, 0LL);
      v124 = this->fields.__4__this;
      if ( !v124 )
        goto LABEL_146;
      v125 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v124->klass->vtable._4_get_classBoardUIController.method)(
                                           v124,
                                           v124->klass->vtable._5_set_classBoardUIController.methodPtr);
      if ( !v125 )
        goto LABEL_146;
      ClassBoardUIController__SetCameraWorkBlock(v125, 1, 0LL);
      v130 = this->fields.square;
      v131 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v131 = ClassBoardController___c_TypeInfo;
      }
      static_fields = v131->static_fields;
      _9__36_4 = static_fields->__9__36_4;
      if ( !_9__36_4 )
      {
        if ( (BYTE3(v131->vtable._0_Equals.methodPtr) & 4) != 0 && !v131->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v131);
          static_fields = ClassBoardController___c_TypeInfo->static_fields;
        }
        v134 = (Il2CppObject *)static_fields->__9;
        _9__36_4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v126, v127, v128, v129);
        System_Action___ctor(_9__36_4, v134, Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_4__, 0LL);
        v135 = ClassBoardController___c_TypeInfo->static_fields;
        v135->__9__36_4 = _9__36_4;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v135->__9__36_4,
          (System_Int32_array **)_9__36_4,
          v136,
          v137,
          v138,
          v139,
          v140,
          v141);
      }
      _9__5 = this->fields.__9__5;
      if ( !_9__5 )
      {
        _9__5 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v126, v127, v128, v129);
        System_Action___ctor(
          _9__5,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__5__,
          0LL);
        this->fields.__9__5 = _9__5;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__9__5,
          (System_Int32_array **)_9__5,
          v143,
          v144,
          v145,
          v146,
          v147,
          v148);
      }
      v149 = (ClassBoardLockOpenConfirmDialog_o *)v123;
      v150 = v130;
      v151 = 0;
LABEL_134:
      ClassBoardLockOpenConfirmDialog__Open(v149, v150, v151, _9__36_4, _9__5, 0LL);
      return;
    }
    acquireFlag = this->fields.acquireFlag;
    v91 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &acquireFlag);
    v234 = 8;
    v92 = (System_Enum_o *)j_il2cpp_value_box_0(AcquireFlag_TypeInfo, &v234);
    if ( !v91 )
      goto LABEL_146;
    if ( System_Enum__HasFlag(v91, v92, 0LL) )
    {
      v93 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v93 )
        goto LABEL_146;
      v94 = (__int64 *)v93[3].monitor;
      if ( !v94 )
        goto LABEL_146;
      v95 = *v94;
      if ( *(_WORD *)(*v94 + 298) )
      {
        v96 = 0LL;
        v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v97 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v96;
          v97 += 4;
          if ( v96 >= *(unsigned __int16 *)(*v94 + 298) )
            goto LABEL_65;
        }
        v98 = v95 + 16LL * *v97 + 312;
      }
      else
      {
LABEL_65:
        v98 = sub_AAFEF8(v93[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v152 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v98)(v94, *(_QWORD *)(v98 + 8));
      if ( !v152 )
        goto LABEL_146;
      v153 = this->fields.__4__this;
      if ( !v153 )
        goto LABEL_146;
      v154 = BaseMonoBehaviour__createObject_object_(
               v93,
               *(Il2CppObject **)(v152 + 56),
               v153->fields.uiRoot,
               0LL,
               (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !v154 )
        goto LABEL_146;
      v155 = v154;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)v154, 0LL);
      v156 = this->fields.__4__this;
      if ( !v156 )
        goto LABEL_146;
      v157 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v156->klass->vtable._4_get_classBoardUIController.method)(
                                           v156,
                                           v156->klass->vtable._5_set_classBoardUIController.methodPtr);
      if ( !v157 )
        goto LABEL_146;
      ClassBoardUIController__SetCameraWorkBlock(v157, 1, 0LL);
      v162 = this->fields.square;
      v163 = ClassBoardController___c_TypeInfo;
      if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v163 = ClassBoardController___c_TypeInfo;
      }
      v164 = v163->static_fields;
      _9__36_6 = v164->__9__36_6;
      if ( !_9__36_6 )
      {
        if ( (BYTE3(v163->vtable._0_Equals.methodPtr) & 4) != 0 && !v163->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v163);
          v164 = ClassBoardController___c_TypeInfo->static_fields;
        }
        v166 = (Il2CppObject *)v164->__9;
        _9__36_6 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v158, v159, v160, v161);
        System_Action___ctor(_9__36_6, v166, Method_ClassBoardController___c__SetupSquareOnClickListener_b__36_6__, 0LL);
        v167 = ClassBoardController___c_TypeInfo->static_fields;
        v167->__9__36_6 = _9__36_6;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v167->__9__36_6,
          (System_Int32_array **)_9__36_6,
          v168,
          v169,
          v170,
          v171,
          v172,
          v173);
      }
      _9__7 = this->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v158, v159, v160, v161);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__7__,
          0LL);
        this->fields.__9__7 = _9__7;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__9__7,
          (System_Int32_array **)_9__7,
          v175,
          v176,
          v177,
          v178,
          v179,
          v180);
      }
      v181 = (ClassBoardSquareOpenConfirmDialog_o *)v155;
      v182 = v162;
      v183 = 0;
    }
    else
    {
      v117 = this->fields.square;
      if ( v117
        && (v118 = *(&ClassBoardLock_TypeInfo->_2.bitflags2 + 1), *(&v117->klass->_2.bitflags2 + 1) >= (unsigned int)v118) )
      {
        if ( (ClassBoardLock_c *)v117->klass->_2.typeHierarchy[v118 - 1] == ClassBoardLock_TypeInfo )
          v119 = this->fields.square;
        else
          v119 = 0LL;
      }
      else
      {
        v119 = 0LL;
      }
      v184 = (BaseMonoBehaviour_o *)this->fields.__4__this;
      if ( !v184 )
        goto LABEL_146;
      v185 = (__int64 *)v184[3].monitor;
      if ( !v185 )
        goto LABEL_146;
      v186 = *v185;
      if ( *(_WORD *)(*v185 + 298) )
      {
        v187 = 0LL;
        v188 = (int *)(*(_QWORD *)(v186 + 176) + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v188 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          ++v187;
          v188 += 4;
          if ( v187 >= *(unsigned __int16 *)(*v185 + 298) )
            goto LABEL_121;
        }
        v189 = v186 + 16LL * *v188 + 312;
      }
      else
      {
LABEL_121:
        v189 = sub_AAFEF8(v184[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v190 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v189)(v185, *(_QWORD *)(v189 + 8));
      if ( !v190 )
        goto LABEL_146;
      v191 = this->fields.__4__this;
      if ( v119 )
      {
        if ( !v191 )
          goto LABEL_146;
        v192 = BaseMonoBehaviour__createObject_object_(
                 v184,
                 *(Il2CppObject **)(v190 + 64),
                 v191->fields.uiRoot,
                 0LL,
                 (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
        if ( !v192 )
          goto LABEL_146;
        v193 = v192;
        ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)v192, 0LL);
        v194 = this->fields.__4__this;
        if ( !v194 )
          goto LABEL_146;
        v195 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v194->klass->vtable._4_get_classBoardUIController.method)(
                                             v194,
                                             v194->klass->vtable._5_set_classBoardUIController.methodPtr);
        if ( !v195 )
          goto LABEL_146;
        ClassBoardUIController__SetCameraWorkBlock(v195, 1, 0LL);
        _9__36_4 = this->fields.__9__8;
        v200 = this->fields.square;
        if ( !_9__36_4 )
        {
          _9__36_4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v196, v197, v198, v199);
          System_Action___ctor(
            _9__36_4,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__8__,
            0LL);
          this->fields.__9__8 = _9__36_4;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__9__8,
            (System_Int32_array **)_9__36_4,
            v201,
            v202,
            v203,
            v204,
            v205,
            v206);
        }
        _9__5 = this->fields.__9__9;
        if ( !_9__5 )
        {
          _9__5 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v196, v197, v198, v199);
          System_Action___ctor(
            _9__5,
            (Il2CppObject *)this,
            Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__9__,
            0LL);
          this->fields.__9__9 = _9__5;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__9__9,
            (System_Int32_array **)_9__5,
            v207,
            v208,
            v209,
            v210,
            v211,
            v212);
        }
        v151 = 1;
        v149 = (ClassBoardLockOpenConfirmDialog_o *)v193;
        v150 = v200;
        goto LABEL_134;
      }
      if ( !v191 )
        goto LABEL_146;
      v213 = BaseMonoBehaviour__createObject_object_(
               v184,
               *(Il2CppObject **)(v190 + 56),
               v191->fields.uiRoot,
               0LL,
               (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !v213 )
        goto LABEL_146;
      v214 = v213;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)v213, 0LL);
      v215 = this->fields.__4__this;
      if ( !v215 )
        goto LABEL_146;
      v216 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v215->klass->vtable._4_get_classBoardUIController.method)(
                                           v215,
                                           v215->klass->vtable._5_set_classBoardUIController.methodPtr);
      if ( !v216 )
        goto LABEL_146;
      ClassBoardUIController__SetCameraWorkBlock(v216, 1, 0LL);
      _9__36_6 = this->fields.__9__12;
      v221 = this->fields.square;
      if ( !_9__36_6 )
      {
        _9__36_6 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v217, v218, v219, v220);
        System_Action___ctor(
          _9__36_6,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__12__,
          0LL);
        this->fields.__9__12 = _9__36_6;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__9__12,
          (System_Int32_array **)_9__36_6,
          v222,
          v223,
          v224,
          v225,
          v226,
          v227);
      }
      _9__7 = this->fields.__9__13;
      if ( !_9__7 )
      {
        _9__7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v217, v218, v219, v220);
        System_Action___ctor(
          _9__7,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__13__,
          0LL);
        this->fields.__9__13 = _9__7;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__9__13,
          (System_Int32_array **)_9__7,
          v228,
          v229,
          v230,
          v231,
          v232,
          v233);
      }
      v183 = 1;
      v181 = (ClassBoardSquareOpenConfirmDialog_o *)v214;
      v182 = v221;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v181, v182, v183, _9__36_6, _9__7, 0LL);
    return;
  }
  v41 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v41 )
    goto LABEL_146;
  v42 = (__int64 *)v41[3].monitor;
  if ( !v42 )
    goto LABEL_146;
  v43 = *v42;
  if ( *(_WORD *)(*v42 + 298) )
  {
    v44 = 0LL;
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((IClassBoardResourceCatalog_c **)v45 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)(*v42 + 298) )
        goto LABEL_29;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_29:
    v46 = sub_AAFEF8(v41[3].monitor, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v99 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
  if ( !v99 )
    goto LABEL_146;
  v100 = this->fields.__4__this;
  if ( !v100 )
    goto LABEL_146;
  v101 = BaseMonoBehaviour__createObject_object_(
           v41,
           *(Il2CppObject **)(v99 + 72),
           v100->fields.uiRoot,
           0LL,
           (const MethodInfo_18B5978 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
  if ( !v101 )
    goto LABEL_146;
  v102 = (ClassBoardLockReleaseConditionDialog_o *)v101;
  ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)v101, 0LL);
  v103 = this->fields.__4__this;
  if ( !v103 )
    goto LABEL_146;
  v104 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v103->klass->vtable._4_get_classBoardUIController.method)(
                                       v103,
                                       v103->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v104 )
    goto LABEL_146;
  ClassBoardUIController__SetCameraWorkBlock(v104, 1, 0LL);
  _9__3 = this->fields.__9__3;
  v110 = this->fields.square;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v105, v106, v107, v108);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  ClassBoardLockReleaseConditionDialog__Open(v102, v110, 0, _9__3, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__1(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v3; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v3, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass36_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__11; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F70D6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, _);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__11__, v6);
    byte_40F70D6 = 1;
  }
  _9__11 = this->fields.__9__11;
  _4__this = this->fields.__4__this;
  square = this->fields.square;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, _, method, v3, v4);
    System_Action___ctor(
      _9__11,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__11__,
      0LL);
    this->fields.__9__11 = _9__11;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__11,
      (System_Int32_array **)_9__11,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !_4__this )
    sub_B170D4();
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__11, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__11(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v4; // x0
  struct ClassBoardSquare_o *square; // x8
  ClassBoardController_o *v6; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock(v4, 0, 0LL), (square = this->fields.square) == 0LL)
    || (v6 = this->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(v6, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Action_IClassBoardSquareUser__o *_9__14; // x21
  __int64 v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  IClassBoardSquareUser_c **v28; // x11
  __int64 v29; // x0

  if ( (byte_40F70D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_IClassBoardSquareUser___ctor__, method);
    sub_B16FFC(&System_Action_IClassBoardSquareUser__TypeInfo, v3);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v4);
    sub_B16FFC(&IClassBoardSquareUser_TypeInfo, v5);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__14__, v6);
    byte_40F70D7 = 1;
  }
  square = this->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v12 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v12 = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  v13 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v12)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v12 + 8));
  _9__14 = this->fields.__9__14;
  v19 = v13;
  if ( !_9__14 )
  {
    _9__14 = (struct System_Action_IClassBoardSquareUser__o *)sub_B170CC(
                                                                System_Action_IClassBoardSquareUser__TypeInfo,
                                                                v14,
                                                                v15,
                                                                v16,
                                                                v17);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__14,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__14__,
      (const MethodInfo_24B7310 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    this->fields.__9__14 = _9__14;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__14,
      (System_Int32_array **)_9__14,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v19 )
LABEL_21:
    sub_B170D4();
  v26 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v27 = 0LL;
    v28 = (IClassBoardSquareUser_c **)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *(v28 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_18;
    }
    v29 = v26 + 16LL * (*(_DWORD *)v28 + 2) + 312;
  }
  else
  {
LABEL_18:
    v29 = sub_AAFEF8(v19, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(__int64, struct System_Action_IClassBoardSquareUser__o *, _QWORD))v29)(
    v19,
    _9__14,
    *(_QWORD *)(v29 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__13(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v3; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v3, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass36_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *_9__15; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F70D8 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, _);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__15__, v6);
    byte_40F70D8 = 1;
  }
  _9__15 = this->fields.__9__15;
  _4__this = this->fields.__4__this;
  square = this->fields.square;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, _, method, v3, v4);
    System_Action___ctor(
      _9__15,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__15__,
      0LL);
    this->fields.__9__15 = _9__15;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__15,
      (System_Int32_array **)_9__15,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !_4__this )
    sub_B170D4();
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__15, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__15(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v4; // x0
  struct ClassBoardSquare_o *square; // x8
  ClassBoardController_o *v6; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock(v4, 0, 0LL), (square = this->fields.square) == 0LL)
    || (v6 = this->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardController__CheckOpenMissionClearDialogSave(v6, square->fields._SquareModel_k__BackingField, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__2(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v3; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v3, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__3(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v3; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v3, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__5(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v3; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v3, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__7(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v3; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v3, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v10; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Action_IClassBoardSquareUser__o *_9__10; // x21
  __int64 v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  IClassBoardSquareUser_c **v28; // x11
  __int64 v29; // x0

  if ( (byte_40F70D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_IClassBoardSquareUser___ctor__, method);
    sub_B16FFC(&System_Action_IClassBoardSquareUser__TypeInfo, v3);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v4);
    sub_B16FFC(&IClassBoardSquareUser_TypeInfo, v5);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__10__, v6);
    byte_40F70D5 = 1;
  }
  square = this->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v12 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v12 = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  v13 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v12)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v12 + 8));
  _9__10 = this->fields.__9__10;
  v19 = v13;
  if ( !_9__10 )
  {
    _9__10 = (struct System_Action_IClassBoardSquareUser__o *)sub_B170CC(
                                                                System_Action_IClassBoardSquareUser__TypeInfo,
                                                                v14,
                                                                v15,
                                                                v16,
                                                                v17);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__10,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass36_0__SetupSquareOnClickListener_b__10__,
      (const MethodInfo_24B7310 *)Method_System_Action_IClassBoardSquareUser___ctor__);
    this->fields.__9__10 = _9__10;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__10,
      (System_Int32_array **)_9__10,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  if ( !v19 )
LABEL_21:
    sub_B170D4();
  v26 = *(_QWORD *)v19;
  if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
  {
    v27 = 0LL;
    v28 = (IClassBoardSquareUser_c **)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *(v28 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
        goto LABEL_18;
    }
    v29 = v26 + 16LL * (*(_DWORD *)v28 + 2) + 312;
  }
  else
  {
LABEL_18:
    v29 = sub_AAFEF8(v19, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(__int64, struct System_Action_IClassBoardSquareUser__o *, _QWORD))v29)(
    v19,
    _9__10,
    *(_QWORD *)(v29 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass36_0___SetupSquareOnClickListener_b__9(
        ClassBoardController___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v3; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v3, 0, 0LL);
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
  MissionNotifyManager_o *v13; // x0
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v15; // x0
  struct ClassBoardController_o *v16; // x0
  ClassBoardUIController_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct ClassBoardController_o *v22; // x8
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *squareViewList; // x20
  ClassBoardController___c_c *v24; // x0
  struct ClassBoardController___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__37_1; // x21
  Il2CppObject *v27; // x22
  struct ClassBoardController___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct ClassBoardController_o *v39; // x8
  ClassBoardController___c_c *v40; // x0
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *lineViewList; // x20
  struct ClassBoardController___c_StaticFields *v42; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__37_2; // x21
  Il2CppObject *v44; // x22
  struct ClassBoardController___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_40F70D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ClassBoardLine___ctor__, method);
    sub_B16FFC(&Method_System_Action_ClassBoardSquare___ctor__, v3);
    sub_B16FFC(&System_Action_ClassBoardSquare__TypeInfo, v4);
    sub_B16FFC(&System_Action_ClassBoardLine__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v7);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B16FFC(&Method_ClassBoardController___c__PlayReleaseEffect_b__37_1__, v10);
    sub_B16FFC(&Method_ClassBoardController___c__PlayReleaseEffect_b__37_2__, v11);
    sub_B16FFC(&ClassBoardController___c_TypeInfo, v12);
    byte_40F70D9 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v13 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v13 )
    goto LABEL_32;
  MissionNotifyManager__EndPause(v13, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_32;
  v15 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                      _4__this,
                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v15 )
    goto LABEL_32;
  ClassBoardUIController__TouchEnable(v15, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_32;
  v17 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v16->klass->vtable._4_get_classBoardUIController.method)(
                                      v16,
                                      v16->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v17 )
    goto LABEL_32;
  ClassBoardUIController__SetCameraWorkBlock(v17, 0, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_32;
  squareViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v22->fields.squareViewList;
  v24 = ClassBoardController___c_TypeInfo;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v24 = ClassBoardController___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__37_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__37_1 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_ClassBoardSquare__TypeInfo,
                                                                                      v18,
                                                                                      v19,
                                                                                      v20,
                                                                                      v21);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__37_1,
      v27,
      Method_ClassBoardController___c__PlayReleaseEffect_b__37_1__,
      (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardSquare___ctor__);
    v28 = ClassBoardController___c_TypeInfo->static_fields;
    v28->__9__37_1 = (struct System_Action_ClassBoardSquare__o *)_9__37_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__37_1,
      (System_Int32_array **)_9__37_1,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !squareViewList )
    goto LABEL_32;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    squareViewList,
    (System_Action_T__o *)_9__37_1,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v39 = this->fields.__4__this;
  if ( !v39 )
    goto LABEL_32;
  v40 = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v39->fields.lineViewList;
  if ( (BYTE3(ClassBoardController___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v40 = ClassBoardController___c_TypeInfo;
  }
  v42 = v40->static_fields;
  _9__37_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v42->__9__37_2;
  if ( !_9__37_2 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v42 = ClassBoardController___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)v42->__9;
    _9__37_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_ClassBoardLine__TypeInfo,
                                                                                      v35,
                                                                                      v36,
                                                                                      v37,
                                                                                      v38);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__37_2,
      v44,
      Method_ClassBoardController___c__PlayReleaseEffect_b__37_2__,
      (const MethodInfo_24B7310 *)Method_System_Action_ClassBoardLine___ctor__);
    v45 = ClassBoardController___c_TypeInfo->static_fields;
    v45->__9__37_2 = (struct System_Action_ClassBoardLine__o *)_9__37_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v45->__9__37_2,
      (System_Int32_array **)_9__37_2,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  if ( !lineViewList )
LABEL_32:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    lineViewList,
    (System_Action_T__o *)_9__37_2,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
  struct ClassBoardController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  ClassBoardUIController_o *v8; // x0
  struct ClassBoardController_o *v9; // x0
  ClassBoardUIController_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  ClassBoardUIController_o *v15; // x20
  System_Action_o *_9__4; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  MissionNotifyManager_o *v23; // x0

  if ( (byte_40F70DA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v4);
    sub_B16FFC(&Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__4__, v5);
    byte_40F70DA = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  isLockCondReleased = this->fields.isLockCondReleased;
  v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                     _4__this,
                                     _4__this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v8 )
    goto LABEL_18;
  ClassBoardUIController__TouchEnable(v8, 0LL);
  v9 = this->fields.__4__this;
  if ( !v9 )
    goto LABEL_18;
  v10 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v9->klass->vtable._4_get_classBoardUIController.method)(
                                      v9,
                                      v9->klass->vtable._5_set_classBoardUIController.methodPtr);
  v15 = v10;
  if ( isLockCondReleased )
  {
    _9__4 = this->fields.__9__4;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass38_0__PlayClassBoardStartEffect_b__4__,
        0LL);
      this->fields.__9__4 = _9__4;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__9__4,
        (System_Int32_array **)_9__4,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    if ( v15 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v15, _9__4, 0LL);
      goto LABEL_13;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !v10 )
    goto LABEL_18;
  ClassBoardUIController__SetCameraWorkBlock(v10, 0, 0LL);
LABEL_13:
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v23 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v23 )
    goto LABEL_18;
  MissionNotifyManager__EndPause(v23, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass38_0___PlayClassBoardStartEffect_b__4(
        ClassBoardController___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v3; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_B170D4();
  }
  ClassBoardUIController__SetCameraWorkBlock(v3, 0, 0LL);
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
  struct ClassBoardController_o *_4__this; // x0
  ClassBoardUIController_o *v4; // x0
  struct ClassBoardController_o *v5; // x0
  ClassBoardUIController_o *v6; // x0
  System_Action_o *callback; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                           _4__this,
                                           _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__TouchEnable(v4, 0LL), (v5 = this->fields.__4__this) == 0LL)
    || (v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))v5->klass->vtable._4_get_classBoardUIController.method)(
                                           v5,
                                           v5->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock(v6, 0, 0LL), (callback = this->fields.callback) == 0LL) )
  {
    sub_B170D4();
  }
  System_Action__Invoke(callback, 0LL);
}