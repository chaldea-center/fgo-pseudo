void __fastcall BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct BattlePerformance_o *perf; // x1
  struct BattlePerformance_o **p_Perf_k__BackingField; // x20
  System_Int32_array **logic; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_4389C50 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
    sub_B775C4(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    byte_4389C50 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.backgroundList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v12;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bgmList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.addOrder = 1;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.addTaskList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B77694(System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v26,
    (const MethodInfo_2EDDDFC *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v26;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.hashDelType,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Data_k__BackingField = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)data,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !data )
    sub_B7769C(v39, v40);
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  p_Perf_k__BackingField = &this->fields._Perf_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)p_Perf_k__BackingField,
    (System_Int32_array **)perf,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  logic = (System_Int32_array **)data->fields.logic;
  p_Perf_k__BackingField[1] = (struct BattlePerformance_o *)logic;
  sub_B77560((BattleServantConfConponent_o *)(p_Perf_k__BackingField + 1), logic, v50, v51, v52, v53, v54, v55);
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__AddBGM(
        BattleFieldEnvironmentData_o *this,
        Generator_BGM_o *bgmGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
  __int64 addOrder; // x1
  BattleFieldEnvironmentData_o *v8; // x20
  const MethodInfo *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  BattleFieldEnvironmentData___c_c *v11; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__59_0; // x21
  Il2CppObject *v14; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  BattleFieldEnvironmentData___c_c *v23; // x8
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v24; // x21
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v25; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v26; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__59_1; // x22
  Il2CppObject *v28; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v36; // x21

  v6 = this;
  if ( (byte_4389C5C & 1) == 0 )
  {
    sub_B775C4(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_B775C4(&Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_B775C4(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    sub_B775C4(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    sub_B775C4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__AddBGM_b__59_0__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__AddBGM_b__59_1__);
    this = (BattleFieldEnvironmentData_o *)sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C5C = 1;
  }
  addOrder = (unsigned int)v6->fields.addOrder;
  v6->fields.addOrder = addOrder + 1;
  if ( !bgmGenerator )
    goto LABEL_30;
  this = (BattleFieldEnvironmentData_o *)((__int64 (__fastcall *)(Generator_BGM_o *, __int64, _QWORD, void *))bgmGenerator->klass->vtable._4_Make.method)(
                                           bgmGenerator,
                                           addOrder,
                                           (unsigned int)grantType,
                                           bgmGenerator->klass[1]._1.image);
  if ( !v6->fields.bgmList )
    goto LABEL_30;
  v8 = this;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.bgmList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
  if ( !v8 )
    goto LABEL_30;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Il2CppMethodPointer))v8->klass->vtable._5_AddBackground.method)(
          v8,
          v8->klass->vtable._6_AddBGM.methodPtr) & 1) != 0 )
  {
    bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.bgmList;
    v11 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v11 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__59_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__59_0;
    if ( !_9__59_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__59_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__59_0,
        v14,
        Method_BattleFieldEnvironmentData___c__AddBGM_b__59_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
      v15 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v15->__9__59_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__59_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v15->__9__59_0,
        (System_Int32_array **)_9__59_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            bgmList,
            (System_Func_TSource__bool__o *)_9__59_0,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    this = (BattleFieldEnvironmentData_o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                             v22,
                                             (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    v23 = BattleFieldEnvironmentData___c_TypeInfo;
    v24 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v6->fields.bgmList;
    v25 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)this;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v23 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v26 = v23->static_fields;
    _9__59_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v26->__9__59_1;
    if ( !_9__59_1 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v26 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)v26->__9;
      _9__59_1 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__59_1,
        v28,
        Method_BattleFieldEnvironmentData___c__AddBGM_b__59_1__,
        (const MethodInfo_2C3248C *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
      v29 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v29->__9__59_1 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__59_1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v29->__9__59_1,
        (System_Int32_array **)_9__59_1,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    if ( v24 )
    {
      System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
        v24,
        (System_Predicate_T__o *)_9__59_1,
        (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
      v36 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
      System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
        v36,
        (Il2CppObject *)v6,
        Method_BattleFieldEnvironmentData_CompareData__,
        (const MethodInfo_2B42C0C *)Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__);
      if ( v25 )
      {
        System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
          v25,
          (System_Comparison_T__o *)v36,
          (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
        if ( !v25->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        if ( v6->fields.bgmList )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.bgmList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v25->fields._items->m_Items[0],
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
          goto LABEL_29;
        }
      }
    }
LABEL_30:
    sub_B7769C(this, addOrder);
  }
LABEL_29:
  BattleFieldEnvironmentData__SortBGM(v6, v9);
  return v6->fields._CurBGM_k__BackingField;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__AddBackground(
        BattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
  __int64 addOrder; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x20
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *backgroundList; // x21
  void *CurBackGround_k__BackingField; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v11; // x22
  Il2CppObject *v12; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1

  v6 = this;
  if ( (byte_4389C5B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_B775C4(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
    sub_B775C4(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__AddBackground_b__58_0__);
    this = (BattleFieldEnvironmentData_o *)sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C5B = 1;
  }
  addOrder = (unsigned int)v6->fields.addOrder;
  v6->fields.addOrder = addOrder + 1;
  if ( !bgGenerator )
    goto LABEL_18;
  this = (BattleFieldEnvironmentData_o *)((__int64 (__fastcall *)(Generator_Background_o *, __int64, _QWORD, void *))bgGenerator->klass->vtable._4_Make.method)(
                                           bgGenerator,
                                           addOrder,
                                           (unsigned int)grantType,
                                           bgGenerator->klass[1]._1.image);
  if ( !this )
    goto LABEL_18;
  v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
          this,
          this->klass->vtable._6_AddBGM.methodPtr) & 1) == 0 )
    goto LABEL_16;
  backgroundList = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v6->fields.backgroundList;
  this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
  }
  CurBackGround_k__BackingField = this[1].fields._CurBackGround_k__BackingField;
  v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)CurBackGround_k__BackingField + 13);
  if ( !v11 )
  {
    if ( (BYTE3(this[2].fields._CurBGM_k__BackingField) & 4) != 0 && !LODWORD(this[1].fields.questPhaseIndividuality) )
    {
      j_il2cpp_runtime_class_init_0(this);
      CurBackGround_k__BackingField = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v12 = *(Il2CppObject **)CurBackGround_k__BackingField;
    v11 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v11,
      v12,
      Method_BattleFieldEnvironmentData___c__AddBackground_b__58_0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v11;
    sub_B77560(
      (BattleServantConfConponent_o *)&static_fields->__9__58_0,
      (System_Int32_array **)v11,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  if ( !backgroundList )
LABEL_18:
    sub_B7769C(this, addOrder);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    backgroundList,
    (System_Predicate_T__o *)v11,
    (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
LABEL_16:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    v8,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
  BattleFieldEnvironmentData__SortBackGround(v6, v20);
  BattleFieldEnvironmentData__SortBGM(v6, v21);
  return v6->fields._CurBackGround_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *changeBgmBuffArray,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w8
  bool result; // w0
  BattleFieldEnvironmentData___c_c *v7; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__54_0; // x21
  Il2CppObject *v10; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x20
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v25; // x1
  __int64 v26; // x20
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  BattleBuffData_ChangeBgmData_o *v37; // x0
  Generator_BGM_o *v38; // x1
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0

  if ( (byte_4389C58 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    sub_B775C4(&Method_System_Func_BattleBuffData_BuffData__int___ctor__);
    sub_B775C4(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__54_0__);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C58 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)changeBgmBuffArray, 0LL);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v7 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__54_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__54_0;
    if ( !_9__54_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__54_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__54_0,
        v10,
        Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__54_0__,
        (const MethodInfo_29E9E70 *)Method_System_Func_BattleBuffData_BuffData__int___ctor__);
      v11 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v11->__9__54_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__54_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v11->__9__54_0,
        (System_Int32_array **)_9__54_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)changeBgmBuffArray,
            (System_Func_TSource__TKey__o *)_9__54_0,
            (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    if ( !v18 )
      sub_B7769C(0LL, v19);
    klass = v18->klass;
    v21 = v18;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_17:
      p_method = sub_B0F4C0(v18, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
            v21,
            *(_QWORD *)(p_method + 8));
    if ( !v26 )
      sub_B7769C(0LL, v25);
    while ( 1 )
    {
      v27 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v28 = 0LL;
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_24;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_24:
        v30 = sub_B0F4C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
        break;
      v31 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_31;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_31:
        v34 = sub_B0F4C0(v26, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
      if ( !v35 )
        sub_B7769C(0LL, v36);
      v37 = *(BattleBuffData_ChangeBgmData_o **)(v35 + 376);
      if ( !v37 )
        sub_B7769C(0LL, v36);
      v38 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(v37, this->fields._Data_k__BackingField, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v38,
        2LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
    v39 = *(_QWORD *)v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v40 = 0LL;
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_40;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_40:
      v42 = sub_B0F4C0(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v42)(v26, *(_QWORD *)(v42 + 8));
    return 1;
  }
  return result;
}


void __fastcall BattleFieldEnvironmentData__AddFieldBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool unFixBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buff);
  if ( !BuffData )
    sub_B7769C(0LL, v7);
  BattleBuffData__addBuff(BuffData, buff, 1, unFixBuff, 0LL);
}


void __fastcall BattleFieldEnvironmentData__AddLastInterruptTasks(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *addTaskList; // x0

  if ( (byte_4389C64 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389C64 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)logic, 0LL, 0LL) )
  {
    addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.addTaskList;
    if ( !addTaskList )
      goto LABEL_14;
    if ( addTaskList->fields._size >= 1 )
    {
      addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                    addTaskList,
                                                                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0LL);
        addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.addTaskList;
        if ( addTaskList )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)addTaskList,
            (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
          addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___Clear(
              (System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)addTaskList,
              (const MethodInfo_2EDE414 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_14:
      sub_B7769C(addTaskList, v5);
    }
  }
}


void __fastcall BattleFieldEnvironmentData__AddPlayerServantChangeBgmWhenContinue(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *player_datalist; // x20
  BattleFieldEnvironmentData___c_c *v5; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__53_0; // x21
  Il2CppObject *v8; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BattleFieldEnvironmentData___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v19; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__53_1; // x21
  Il2CppObject *v21; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  BattleBuffData_BuffData_array *v30; // x1
  const MethodInfo *v31; // x2

  v2 = this;
  if ( (byte_4389C57 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B775C4(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B775C4(&Method_System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData____ctor__);
    sub_B775C4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B775C4(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__53_0__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__53_1__);
    this = (BattleFieldEnvironmentData_o *)sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C57 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B7769C(this, method);
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField->fields.player_datalist;
  v5 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v5 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__53_0;
  if ( !_9__53_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__53_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__53_0,
      v8,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__53_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleServantData__bool___ctor__);
    v9 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v9->__9__53_0 = (struct System_Func_BattleServantData__bool__o *)_9__53_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__53_0,
      (System_Int32_array **)_9__53_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          player_datalist,
          (System_Func_TSource__bool__o *)_9__53_0,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v17 = BattleFieldEnvironmentData___c_TypeInfo;
  v18 = v16;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v17 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__53_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v19->__9__53_1;
  if ( !_9__53_1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v19 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__53_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__53_1,
      v21,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__53_1__,
      (const MethodInfo_29EAA10 *)Method_System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData____ctor__);
    v22 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v22->__9__53_1 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__53_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v22->__9__53_1,
      (System_Int32_array **)_9__53_1,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                               v18,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__53_1,
                                                               (const MethodInfo_1D3A644 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
  v30 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v29,
                                           (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, v30, v31);
}


void __fastcall BattleFieldEnvironmentData__AddRemoveProcTask(
        BattleFieldEnvironmentData_o *this,
        BattleLogicTask_o *task,
        int32_t addType,
        bool isNotDuplicated,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *hashDelType; // x0

  if ( (byte_4389C65 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4389C65 = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_9;
    if ( System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
           hashDelType,
           addType,
           (const MethodInfo_2EDE480 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
          hashDelType,
          addType,
          (const MethodInfo_2EDEFD8 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.addTaskList) == 0LL) )
  {
LABEL_9:
    sub_B7769C(hashDelType, task);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)hashDelType,
    (EventMissionProgressRequest_Argument_ProgressData_o *)task,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
}


void __fastcall BattleFieldEnvironmentData__AddServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Collections_Generic_IEnumerable_T__o *AllValidBGMChangeBuffArray; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v6; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4389C6A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B775C4(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    this = (BattleFieldEnvironmentData_o *)sub_B775C4(&Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__89_0__);
    byte_4389C6A = 1;
  }
  if ( !svtData || (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(svtData, 0LL)) == 0LL )
    sub_B7769C(this, svtData);
  AllValidBGMChangeBuffArray = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0LL);
  v6 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v6,
    v4,
    Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__89_0__,
    (const MethodInfo_26A0868 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    AllValidBGMChangeBuffArray,
    (System_Action_T__o *)v6,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateBgmTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  PlayCurrentBgmLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4389C6C & 1) == 0 )
  {
    sub_B775C4(&PlayCurrentBgmLogicTask_TypeInfo);
    byte_4389C6C = 1;
  }
  v3 = (PlayCurrentBgmLogicTask_o *)sub_B77694(PlayCurrentBgmLogicTask_TypeInfo);
  PlayCurrentBgmLogicTask___ctor(v3, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 3, 1, v4);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateViewTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  UpdateFieldViewBattleLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4389C6B & 1) == 0 )
  {
    sub_B775C4(&UpdateFieldViewBattleLogicTask_TypeInfo);
    byte_4389C6B = 1;
  }
  v3 = (UpdateFieldViewBattleLogicTask_o *)sub_B77694(UpdateFieldViewBattleLogicTask_TypeInfo);
  UpdateFieldViewBattleLogicTask___ctor(v3, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 2, 1, v4);
}


bool __fastcall BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_21012060; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  __int64 v9; // x1
  System_Int32_array *BuffIndividualities; // x0

  Individualities_21012060 = buffIndiv;
  if ( opSvt )
    Individualities_21012060 = BattleServantData__getIndividualities_21012060(opSvt, buffIndiv, 0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buffIndiv);
  v8 = BattleFieldEnvironmentData__get_BuffData(this, v7);
  if ( !v8
    || (BuffIndividualities = BattleBuffData__getBuffIndividualities(v8, 1, 0, 0, 0, 0LL),
        v8 = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, System_Int32_array *, Il2CppMethodPointer))this->klass->vtable._4_GetFieldIndividuality.method)(
                                   this,
                                   BuffIndividualities,
                                   this->klass->vtable._5_AddBackground.methodPtr),
        !BuffData) )
  {
    sub_B7769C(v8, v9);
  }
  return BattleBuffData__checkActBuff(BuffData, 105, (System_Int32_array *)v8, Individualities_21012060, 0LL);
}


void __fastcall BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  RemovedBuffInfo_o *v5; // x1
  const MethodInfo *v6; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_B7769C(0LL, v4);
  v5 = BattleBuffData__usedProgressing(BuffData, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v5, 1, v6);
}


int32_t __fastcall BattleFieldEnvironmentData__CompareData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BaseData_o *a,
        BattleFieldEnvironmentData_BaseData_o *b,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x22
  struct BattleFieldEnvironmentData_CommonData_o *v7; // x23
  int v8; // w21
  int notOverwrite; // w8
  int32_t v10; // w9
  int32_t result; // w0
  int32_t addOrder; // w8
  int32_t v13; // w9
  int v14; // w20
  int32_t priority; // w8
  int32_t v16; // w9

  if ( !a || !b )
    goto LABEL_14;
  comData = a->fields.comData;
  v7 = b->fields.comData;
  v8 = ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer, BattleFieldEnvironmentData_BaseData_o *, const MethodInfo *))a->klass->vtable._4_get_Active.method)(
         a,
         a->klass->vtable._5_get_IsTargetBase.methodPtr,
         b,
         method);
  this = (BattleFieldEnvironmentData_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer))b->klass->vtable._4_get_Active.method)(
                                           b,
                                           b->klass->vtable._5_get_IsTargetBase.methodPtr);
  if ( v8 != (_DWORD)this )
  {
    v14 = ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer))b->klass->vtable._4_get_Active.method)(
            b,
            b->klass->vtable._5_get_IsTargetBase.methodPtr);
    return v14
         - ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer))a->klass->vtable._4_get_Active.method)(
             a,
             a->klass->vtable._5_get_IsTargetBase.methodPtr);
  }
  if ( !comData || !v7 )
LABEL_14:
    sub_B7769C(this, a);
  notOverwrite = comData->fields.notOverwrite;
  v10 = v7->fields.notOverwrite;
  result = v10 - notOverwrite;
  if ( v10 == notOverwrite )
  {
    if ( notOverwrite < 1 )
    {
      priority = comData->fields.priority;
      v16 = v7->fields.priority;
      result = v16 - priority;
      if ( v16 != priority )
        return result;
      addOrder = v7->fields.addOrder;
      v13 = comData->fields.addOrder;
    }
    else
    {
      addOrder = comData->fields.addOrder;
      v13 = v7->fields.addOrder;
    }
    return addOrder - v13;
  }
  return result;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__52_0; // x20
  Il2CppObject *v6; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4389C56 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_B775C4(&Method_System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData____ctor__);
    sub_B775C4(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__52_0__);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C56 = 1;
  }
  if ( !servantEnumerable )
    return 0LL;
  v3 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v3 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__52_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__52_0;
  if ( !_9__52_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__52_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__52_0,
      v6,
      Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__52_0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData____ctor__);
    v7 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v7->__9__52_0 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__52_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v7->__9__52_0,
      (System_Int32_array **)_9__52_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__SelectMany_WarBoardManager_TaskList__WarBoardTaskBase_(
                                                                                (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__52_0,
                                                                                (const MethodInfo_1D3A644 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
}


RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        RemovedBuffInfo_o *removeBuffInfo,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x21
  BattleBuffData_BuffData_array *v7; // x0
  const MethodInfo *v8; // x3

  v6 = this;
  if ( (byte_4389C66 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    byte_4389C66 = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
    sub_B7769C(this, removeBuffInfo);
  }
  v7 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22983752(v6, v7, isAddAfterTask, v8);
  return removeBuffInfo;
}


void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22983752(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleFieldEnvironmentData___c_c *v16; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__77_0; // x22
  Il2CppObject *v19; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_T__o *v27; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x22
  const MethodInfo *v29; // x1

  if ( (byte_4389C67 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B775C4(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B775C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B775C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__77_0__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__DisplayClass77_0__ExecRemoveBuffAfterProc_b__1__);
    sub_B775C4(&BattleFieldEnvironmentData___c__DisplayClass77_0_TypeInfo);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C67 = 1;
  }
  v7 = sub_B77694(BattleFieldEnvironmentData___c__DisplayClass77_0_TypeInfo);
  BattleFieldEnvironmentData___c__DisplayClass77_0___ctor((BattleFieldEnvironmentData___c__DisplayClass77_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0LL) )
  {
    v16 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v16 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__77_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__77_0;
    if ( !_9__77_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__77_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__77_0,
        v19,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__77_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v20 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v20->__9__77_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__77_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v20->__9__77_0,
        (System_Int32_array **)_9__77_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__77_0,
                                                           (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v28,
      (Il2CppObject *)v7,
      Method_BattleFieldEnvironmentData___c__DisplayClass77_0__ExecRemoveBuffAfterProc_b__1__,
      (const MethodInfo_26A0868 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v27,
      (System_Action_T__o *)v28,
      (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22984412(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_B7769C(this, 0LL);
  v7 = BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
         this,
         removeBuff->fields.delAfterProcType,
         (const MethodInfo *)isAddAfterTask);
  if ( v7 )
  {
    v8 = v7;
    ((void (__fastcall *)(FieldBuffDeleteProcess_o *, BattleFieldEnvironmentData_o *, void *))v7->klass->vtable._5_Init.method)(
      v7,
      this,
      v7->klass[1]._1.image);
    ((void (__fastcall *)(FieldBuffDeleteProcess_o *, BattleBuffData_BuffData_o *, bool, Il2CppMethodPointer))v8->klass->vtable._4_Exec.method)(
      v8,
      removeBuff,
      isAddAfterTask,
      v8->klass->vtable._5_Init.methodPtr);
  }
}


BuffUniqueValue_o *__fastcall BattleFieldEnvironmentData__GetChangeBuffUniqueVal(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_FieldChangeData_o *fieldChangeData; // x0
  BuffUniqueValue_o *result; // x0
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !buff )
    sub_B7769C(this, 0LL);
  fieldChangeData = buff->fields.fieldChangeData;
  if ( !fieldChangeData || (result = BattleBuffData_FieldChangeData__get_UniqueVal(fieldChangeData, 0LL)) == 0LL )
  {
    changeBgmData = buff->fields.changeBgmData;
    if ( changeBgmData )
      return changeBgmData->fields.uniqueVal;
    else
      return 0LL;
  }
  return result;
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetChangeFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  const MethodInfo *v4; // x1
  void *BuffData; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x23
  __int64 v12; // x0

  if ( (byte_4389C5A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4389C5A = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v4);
  if ( !BuffData )
    goto LABEL_15;
  BuffData = BattleBuffData__GetFieldChangeArray((BattleBuffData_o *)BuffData, 0LL);
  if ( !BuffData )
    goto LABEL_15;
  v7 = *((_DWORD *)BuffData + 6);
  v8 = BuffData;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
      {
        v12 = sub_B776C8(BuffData);
        sub_B77668(v12, 0LL);
      }
      v10 = *((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      BuffData = (void *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v10 + 56), 0LL);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v3 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v3,
          *(System_Collections_Generic_IEnumerable_T__o **)(v10 + 56),
          (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B7769C(BuffData, v6);
  }
LABEL_13:
  if ( !v3 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetCommonFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  System_Int32_array *IsNullOrEmpty; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4389C6D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4389C6D = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)individuality,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v9);
    if ( !v7 )
LABEL_11:
      sub_B7769C(IsNullOrEmpty, v9);
  }
  else
  {
    if ( !v7 )
      goto LABEL_11;
    System_Collections_Generic_List_int___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v10);
  }
  System_Collections_Generic_List_int___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
  return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v7, v11);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x21
  BattleFieldEnvironmentData___c_c *v6; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__55_0; // x22
  Il2CppObject *v9; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  void *baseBackground; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Int32_array *QuestPhaseIndividuality; // x1

  if ( (byte_4389C59 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____69504312);
    sub_B775C4(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    sub_B775C4(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__55_0__);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C59 = 1;
  }
  backgroundList = this->fields.backgroundList;
  v6 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__55_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__55_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__55_0,
      v9,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__55_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v10 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v10->__9__55_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__55_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->__9__55_0,
      (System_Int32_array **)_9__55_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  baseBackground = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                     (System_Func_TSource__bool__o *)_9__55_0,
                     (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____69504312);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  if ( !baseBackground )
    sub_B7769C(0LL, v18);
  QuestPhaseIndividuality = (System_Int32_array *)*((_QWORD *)baseBackground + 5);
  if ( !QuestPhaseIndividuality )
    QuestPhaseIndividuality = BattleFieldEnvironmentData__GetQuestPhaseIndividuality(this, 0LL);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, QuestPhaseIndividuality, addIndiv, v19);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_int__o **v15; // x22
  System_Collections_Generic_List_int__o *v16; // x20
  System_Predicate_int__o *v17; // x20

  if ( (byte_4389C69 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Predicate_int___ctor__);
    sub_B775C4(&System_Predicate_int__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__DisplayClass82_0__GetIndividualityExceptDelTarget_b__0__);
    sub_B775C4(&BattleFieldEnvironmentData___c__DisplayClass82_0_TypeInfo);
    byte_4389C69 = 1;
  }
  v5 = sub_B77694(BattleFieldEnvironmentData___c__DisplayClass82_0_TypeInfo);
  BattleFieldEnvironmentData___c__DisplayClass82_0___ctor((BattleFieldEnvironmentData___c__DisplayClass82_0_o *)v5, 0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v6);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0LL, 0LL, 1, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = BuffData;
  v15 = (System_Collections_Generic_List_int__o **)(v5 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)BuffData, v9, v10, v11, v12, v13, v14);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v16 = *v15;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0LL);
  if ( !v16 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v15 )
    goto LABEL_13;
  if ( (*v15)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_B7769C(BuffData, v8);
  }
  v17 = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass82_0__GetIndividualityExceptDelTarget_b__0__,
    (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v17,
    (const MethodInfo_30E790C *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  BattleServantConfConponent_o *p_questPhaseIndividuality; // x19
  BattleData_o *Data_k__BackingField; // x0
  System_Int32_array **PrioredIndividuality; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  p_questPhaseIndividuality = (BattleServantConfConponent_o *)&this->fields.questPhaseIndividuality;
  result = this->fields.questPhaseIndividuality;
  if ( !result )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_B7769C(0LL, method);
    PrioredIndividuality = (System_Int32_array **)BattleData__GetPrioredIndividuality(Data_k__BackingField, 0LL);
    p_questPhaseIndividuality->klass = (BattleServantConfConponent_c *)PrioredIndividuality;
    sub_B77560(p_questPhaseIndividuality, PrioredIndividuality, v7, v8, v9, v10, v11, v12);
    return (System_Int32_array *)p_questPhaseIndividuality->klass;
  }
  return result;
}


FieldBuffDeleteProcess_o *__fastcall BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        int32_t delAfterProcType,
        const MethodInfo *method)
{
  ChangeBgmBuffDeleteProcess_o *v4; // x19

  if ( (byte_4389C68 & 1) == 0 )
  {
    sub_B775C4(&ChangeBgmBuffDeleteProcess_TypeInfo);
    sub_B775C4(&FieldChangeBuffDeleteProcess_TypeInfo);
    byte_4389C68 = 1;
  }
  if ( delAfterProcType == 3 )
  {
    v4 = (ChangeBgmBuffDeleteProcess_o *)sub_B77694(ChangeBgmBuffDeleteProcess_TypeInfo);
    ChangeBgmBuffDeleteProcess___ctor(v4, 0LL);
  }
  else if ( delAfterProcType == 1 )
  {
    v4 = (ChangeBgmBuffDeleteProcess_o *)sub_B77694(FieldChangeBuffDeleteProcess_TypeInfo);
    FieldChangeBuffDeleteProcess___ctor((FieldChangeBuffDeleteProcess_o *)v4, 0LL);
  }
  else
  {
    return 0LL;
  }
  return (FieldBuffDeleteProcess_o *)v4;
}


BattleFieldEnvironmentData_SaveData_o *__fastcall BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  void *backgroundList; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__7_0; // x21
  Il2CppObject *v7; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_4389C4C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__);
    sub_B775C4(&BattleFieldEnvironmentData_SaveData_TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C4C = 1;
  }
  bgmList = this->fields.bgmList;
  backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = (struct BattleFieldEnvironmentData___c_StaticFields *)*((_QWORD *)backgroundList + 23);
  _9__7_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (*((_BYTE *)backgroundList + 307) & 4) != 0 && !*((_DWORD *)backgroundList + 56) )
    {
      j_il2cpp_runtime_class_init_0(backgroundList);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__7_0,
      v7,
      Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
    v8 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v8->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__7_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !bgmList )
    goto LABEL_17;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v15 = sub_B77694(BattleFieldEnvironmentData_SaveData_TypeInfo);
  BattleFieldEnvironmentData_SaveData___ctor((BattleFieldEnvironmentData_SaveData_o *)v15, 0LL);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_17;
  backgroundList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                     (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = backgroundList,
        sub_B77560(
          (BattleServantConfConponent_o *)(v15 + 16),
          (System_Int32_array **)backgroundList,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (backgroundList = this->fields.bgmList) == 0LL)
    || (v22 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                                       (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v15 + 24) = v22,
        sub_B77560((BattleServantConfConponent_o *)(v15 + 24), v22, v23, v24, v25, v26, v27, v28),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v29)) == 0LL) )
  {
LABEL_17:
    sub_B7769C(backgroundList, method);
  }
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0LL);
  *(_QWORD *)(v15 + 32) = SaveData;
  sub_B77560((BattleServantConfConponent_o *)(v15 + 32), SaveData, v31, v32, v33, v34, v35, v36);
  result = (BattleFieldEnvironmentData_SaveData_o *)v15;
  *(_DWORD *)(v15 + 40) = this->fields.addOrder;
  return result;
}


// attributes: thunk
void __fastcall BattleFieldEnvironmentData__InitBG(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData__InitStageField(this, method);
}


void __fastcall BattleFieldEnvironmentData__InitStageField(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  BattleData_o *Data_k__BackingField; // x20
  StageEntity_o *StageEntity; // x21
  Generator_BGFromQuestPhase_o *v5; // x22
  StageEntity_o *v6; // x20
  Generator_BGFromStage_o *v7; // x21
  BattleData_o *v8; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  Generator_BGM_o *v11; // x23
  System_Collections_Generic_IEnumerable_TSource__o *backgroundList; // x20
  BattleFieldEnvironmentData___c_c *v13; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__46_0; // x21
  Il2CppObject *v16; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BattleFieldEnvironmentData___c_c *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v33; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__46_1; // x21
  Il2CppObject *v35; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  v2 = this;
  if ( (byte_4389C51 & 1) == 0 )
  {
    sub_B775C4(&Generator_BGFromQuestPhase_TypeInfo);
    sub_B775C4(&Generator_BGFromStage_TypeInfo);
    sub_B775C4(&Generator_BGM_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____69504304);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____69504312);
    sub_B775C4(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    sub_B775C4(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    sub_B775C4(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_B775C4(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__InitStageField_b__46_0__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__InitStageField_b__46_1__);
    this = (BattleFieldEnvironmentData_o *)sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C51 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v2->fields._Data_k__BackingField, 0LL),
        v5 = (Generator_BGFromQuestPhase_o *)sub_B77694(Generator_BGFromQuestPhase_TypeInfo),
        Generator_BGFromQuestPhase___ctor(v5, Data_k__BackingField, StageEntity, 0LL),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
          v2,
          v5,
          1LL,
          v2->klass->vtable._6_AddBGM.methodPtr),
        (this = (BattleFieldEnvironmentData_o *)v2->fields._Data_k__BackingField) == 0LL)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
    sub_B7769C(this, method);
  }
  v6 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0LL) >= 1 )
  {
    v7 = (Generator_BGFromStage_o *)sub_B77694(Generator_BGFromStage_TypeInfo);
    Generator_BGFromStage___ctor(v7, v6, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
      v2,
      v7,
      1LL,
      v2->klass->vtable._6_AddBGM.methodPtr);
  }
  v8 = v2->fields._Data_k__BackingField;
  bgmId = v6->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v6, 0, 0LL);
  v11 = (Generator_BGM_o *)sub_B77694(Generator_BGM_TypeInfo);
  Generator_BGM___ctor(v11, v8, bgmId, 0, PriorityBgm, 0LL, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._6_AddBGM.method)(
    v2,
    v11,
    1LL,
    v2->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  backgroundList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.backgroundList;
  v13 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v13 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__46_0,
      v16,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__46_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v17 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v17->__9__46_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__46_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v17->__9__46_0,
      (System_Int32_array **)_9__46_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 backgroundList,
                                 (System_Func_TSource__bool__o *)_9__46_0,
                                 (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____69504312);
  v2->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v24;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.baseBackground, v24, v25, v26, v27, v28, v29, v30);
  v31 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v31 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__46_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v33->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v33 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__46_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__46_1,
      v35,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__46_1__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v36 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v36->__9__46_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__46_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v36->__9__46_1,
      (System_Int32_array **)_9__46_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 bgmList,
                                 (System_Func_TSource__bool__o *)_9__46_1,
                                 (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____69504304);
  v2->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v43;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.baseBgm, v43, v44, v45, v46, v47, v48, v49);
}


bool __fastcall BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B7769C(this, method);
  if ( Data_k__BackingField->fields.wavecount >= 1 )
  {
    BattleFieldEnvironmentData__ResetFieldInfo(this, method);
    BattleFieldEnvironmentData__InitStageField(this, v4);
    BattleFieldEnvironmentData__TakeOverChangeField(this, v5);
    BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(this, v6);
  }
  return BattleFieldEnvironmentData__get_IsNeedChangeBG(this, method);
}


bool __fastcall BattleFieldEnvironmentData__IsNeedChangeField(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_4389C63 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4389C63 = 1;
  }
  Instance = (WebViewManager_o *)BattleFieldEnvironmentData__get_IsNeedChangeBG(this, method);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    CurBGM_k__BackingField = this->fields._CurBGM_k__BackingField;
    if ( !CurBGM_k__BackingField )
      goto LABEL_10;
    BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
    if ( !BgmData_k__BackingField )
      return 0;
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_B7769C(Instance, v4);
    BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0LL);
    if ( BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0LL) )
      return 0;
  }
  return 1;
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__RemoveAfterResetBGM(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  void *v4; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__60_0; // x21
  Il2CppObject *v7; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleFieldEnvironmentData___c_c *v15; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v16; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v17; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__60_1; // x21
  Il2CppObject *v19; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_4389C5D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___);
    sub_B775C4(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    sub_B775C4(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_B775C4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__60_0__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__60_1__);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C5D = 1;
  }
  bgmList = this->fields.bgmList;
  v4 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v4 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = (struct BattleFieldEnvironmentData___c_StaticFields *)*((_QWORD *)v4 + 23);
  _9__60_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( (*((_BYTE *)v4 + 307) & 4) != 0 && !*((_DWORD *)v4 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__60_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__60_0,
      v7,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__60_0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    v8 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v8->__9__60_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__60_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__60_0,
      (System_Int32_array **)_9__60_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !bgmList )
    goto LABEL_24;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
    (System_Predicate_T__o *)_9__60_0,
    (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v15 = BattleFieldEnvironmentData___c_TypeInfo;
  v16 = this->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v15 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v17 = v15->static_fields;
  _9__60_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v17->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v17 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)v17->__9;
    _9__60_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__60_1,
      v19,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__60_1__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v20 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v20->__9__60_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__60_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v20->__9__60_1,
      (System_Int32_array **)_9__60_1,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v16,
         (System_Func_TSource__bool__o *)_9__60_1,
         (const MethodInfo_1D2E1F0 *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v4 = this->fields.bgmList;
    if ( v4 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.baseBgm,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
      goto LABEL_23;
    }
LABEL_24:
    sub_B7769C(v4, method);
  }
LABEL_23:
  BattleFieldEnvironmentData__SortBGM(this, method);
  return this->fields._CurBGM_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4389C60 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__66_0__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_B775C4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    byte_4389C60 = 1;
  }
  bgmList = this->fields.bgmList;
  v4 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__66_0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !bgmList )
    sub_B7769C(v5, v6);
  if ( System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
         (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
         (System_Predicate_T__o *)v4,
         (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) >= 1 )
    BattleFieldEnvironmentData__SortBGM(this, v7);
  return BattleFieldEnvironmentData__get_IsChangeBgm(this, v7);
}


void __fastcall BattleFieldEnvironmentData__RemoveBgmRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v4; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__62_0; // x21
  Il2CppObject *v7; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v16; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v20; // x20
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x1
  __int64 v25; // x20
  int i; // w24
  __int64 v27; // x21
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x22
  System_Predicate_T__o *v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  const MethodInfo *v51; // x1

  if ( (byte_4389C5F & 1) == 0 )
  {
    sub_B775C4(&Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_B775C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B775C4(&Method_System_Func_BattleBuffData_BuffData__BuffUniqueValue___ctor__);
    sub_B775C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B775C4(&System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_B775C4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__62_0__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__DisplayClass62_0__RemoveBgmRelateBuff_b__1__);
    sub_B775C4(&BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C5F = 1;
  }
  v4 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v4 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__62_0,
      v7,
      Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__62_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    v8 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v8->__9__62_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__62_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__62_0,
      (System_Int32_array **)_9__62_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__62_0,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__,
    (const MethodInfo_29EAA10 *)Method_System_Func_BattleBuffData_BuffData__BuffUniqueValue___ctor__);
  v17 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          v15,
          (System_Func_TSource__TResult__o *)v16,
          (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
  if ( !v17 )
    sub_B7769C(0LL, v18);
  klass = v17->klass;
  v20 = v17;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffUniqueValue__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_B0F4C0(v17, System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v20,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
    sub_B7769C(0LL, v24);
  for ( i = 0;
        ;
        i += System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
               (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
               v40,
               (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) )
  {
    v43 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_33;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_33:
      v46 = sub_B0F4C0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v25, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v27 = sub_B77694(BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo);
    BattleFieldEnvironmentData___c__DisplayClass62_0___ctor(
      (BattleFieldEnvironmentData___c__DisplayClass62_0_o *)v27,
      0LL);
    v28 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffUniqueValue__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_24;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_24:
      v31 = sub_B0F4C0(v25, System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, 0LL);
    }
    v32 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v25, *(_QWORD *)(v31 + 8));
    if ( !v27 )
      sub_B7769C(v32, v32);
    *(_QWORD *)(v27 + 16) = v32;
    sub_B77560((BattleServantConfConponent_o *)(v27 + 16), v32, v33, v34, v35, v36, v37, v38);
    bgmList = this->fields.bgmList;
    v40 = (System_Predicate_T__o *)sub_B77694(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v40,
      (Il2CppObject *)v27,
      Method_BattleFieldEnvironmentData___c__DisplayClass62_0__RemoveBgmRelateBuff_b__1__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    if ( !bgmList )
      sub_B7769C(v41, v42);
  }
  v47 = *(_QWORD *)v25;
  if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
  {
    v48 = 0LL;
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      ++v48;
      v49 += 4;
      if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
        goto LABEL_40;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_40:
    v50 = sub_B0F4C0(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v25, *(_QWORD *)(v50 + 8));
  if ( i >= 1 )
    BattleFieldEnvironmentData__SortBGM(this, v51);
}


void __fastcall BattleFieldEnvironmentData__RemoveBgmThenAddUpdateTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(this, method) )
    BattleFieldEnvironmentData__AddUpdateBgmTask(this, v3);
}


void __fastcall BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleLogic_o *Logic_k__BackingField; // x0

  if ( BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(this, method) )
  {
    Logic_k__BackingField = this->fields._Logic_k__BackingField;
    if ( !Logic_k__BackingField )
      sub_B7769C(0LL, v3);
    BattleLogic__PlayLoadCurrentBgm(Logic_k__BackingField, 0LL, 0.0, 0LL);
  }
}


void __fastcall BattleFieldEnvironmentData__RemoveDeadServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *deadSvtData,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v3; // x19
  BattleBuffData_BuffData_array *AllBGMChangeBuffArray; // x1
  const MethodInfo *v5; // x3

  if ( !deadSvtData
    || (v3 = this, (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(deadSvtData, 0LL)) == 0LL) )
  {
    sub_B7769C(this, deadSvtData);
  }
  AllBGMChangeBuffArray = BattleBuffData__GetAllBGMChangeBuffArray((BattleBuffData_o *)this, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22983752(v3, AllBGMChangeBuffArray, 1, v5);
}


void __fastcall BattleFieldEnvironmentData__RemoveRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleFieldEnvironmentData_o *v6; // x0
  const MethodInfo *v7; // x2
  System_Int32_array **v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x22
  int32_t v18; // w0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x22
  int32_t v20; // w21
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x23
  const MethodInfo *v22; // x2

  if ( (byte_4389C5E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_B775C4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
    sub_B775C4(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_B775C4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__DisplayClass61_0__RemoveRelateBuff_b__0__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__DisplayClass61_0__RemoveRelateBuff_b__1__);
    sub_B775C4(&BattleFieldEnvironmentData___c__DisplayClass61_0_TypeInfo);
    byte_4389C5E = 1;
  }
  v5 = sub_B77694(BattleFieldEnvironmentData___c__DisplayClass61_0_TypeInfo);
  BattleFieldEnvironmentData___c__DisplayClass61_0___ctor((BattleFieldEnvironmentData___c__DisplayClass61_0_o *)v5, 0LL);
  v8 = (System_Int32_array **)BattleFieldEnvironmentData__GetChangeBuffUniqueVal(v6, buff, v7);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v8;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), v8, v10, v11, v12, v13, v14, v15);
  backgroundList = this->fields.backgroundList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass61_0__RemoveRelateBuff_b__0__,
    (const MethodInfo_2C3248C *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList
    || (v18 = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)backgroundList,
                (System_Predicate_T__o *)v17,
                (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = this->fields.bgmList,
        v20 = v18,
        v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v21,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass61_0__RemoveRelateBuff_b__1__,
          (const MethodInfo_2C3248C *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__),
        !bgmList) )
  {
LABEL_9:
    sub_B7769C(v8, v9);
  }
  if ( System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
         (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
         (System_Predicate_T__o *)v21,
         (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v20 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v22);
}


void __fastcall BattleFieldEnvironmentData__ResetFieldInfo(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *backgroundList; // x0

  if ( (byte_4389C52 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
    byte_4389C52 = 1;
  }
  backgroundList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.backgroundList;
  if ( !backgroundList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          backgroundList,
          (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__),
        (backgroundList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList) == 0LL) )
  {
    sub_B7769C(backgroundList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    backgroundList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
}


void __fastcall BattleFieldEnvironmentData__SetSaveData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *backgroundList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v9; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__8_0; // x22
  Il2CppObject *v12; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x2
  int32_t v21; // w20
  struct BattleData_o **p_Data_k__BackingField; // x24
  int32_t v23; // w21
  bool ExistOverwriteBgIndividuality; // w22
  Generator_Background_o *v25; // x23
  BattleData_o *v26; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v31; // w23
  Generator_BGM_o *v32; // x24

  if ( (byte_4389C4D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Generator_BGM_TypeInfo);
    sub_B775C4(&Generator_Background_TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C4D = 1;
  }
  if ( sv )
  {
    BattleFieldEnvironmentData__ResetFieldInfo(this, (const MethodInfo *)sv);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.backgroundData, 0LL) )
    {
      backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.backgroundList;
      if ( !backgroundList )
        goto LABEL_30;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.backgroundData,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0LL) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v9 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
        v9 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__8_0,
          v12,
          Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__,
          (const MethodInfo_26A0868 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
        v13 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        v13->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v13->__9__8_0,
          (System_Int32_array **)_9__8_0,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_30;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattleFieldEnvironmentData__get_BuffData(
                                                                                         this,
                                                                                         v7);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0LL);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v20);
      return;
    }
LABEL_30:
    sub_B7769C(backgroundList, v5);
  }
  backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattleFieldEnvironmentData__get_IsNeedChangeBG(
                                                                                       this,
                                                                                       (const MethodInfo *)sv);
  if ( ((unsigned __int8)backgroundList & 1) != 0 )
  {
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields._Perf_k__BackingField;
    if ( !backgroundList )
      goto LABEL_30;
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattlePerformance__get_CurrentGroundNo(
                                                                                         (BattlePerformance_o *)backgroundList,
                                                                                         0LL);
    if ( !this->fields._Perf_k__BackingField )
      goto LABEL_30;
    v21 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattlePerformance__get_CurrentGroundType(
                                                                                         this->fields._Perf_k__BackingField,
                                                                                         0LL);
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_30;
    v23 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(
                                      this->fields._Data_k__BackingField,
                                      0LL);
    v25 = (Generator_Background_o *)sub_B77694(Generator_Background_TypeInfo);
    Generator_Background___ctor(v25, v21, v23, 0, ExistOverwriteBgIndividuality, 0LL);
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
                                                                                         this,
                                                                                         v25,
                                                                                         2LL,
                                                                                         this->klass->vtable._6_AddBGM.methodPtr);
  }
  else
  {
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
  }
  v26 = *p_Data_k__BackingField;
  if ( !*p_Data_k__BackingField )
    goto LABEL_30;
  overwriteBgmData_k__BackingField = v26->fields._overwriteBgmData_k__BackingField;
  if ( overwriteBgmData_k__BackingField )
  {
    BgmId_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmId_k__BackingField;
    allowSubBgmPlaying = OverwriteBattleBgmData__get_allowSubBgmPlaying(
                           v26->fields._overwriteBgmData_k__BackingField,
                           0LL);
    BgmName_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmName_k__BackingField;
    v31 = allowSubBgmPlaying;
    v32 = (Generator_BGM_o *)sub_B77694(Generator_BGM_TypeInfo);
    Generator_BGM___ctor(v32, v26, BgmId_k__BackingField, v31, 0, BgmName_k__BackingField, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
      this,
      v32,
      2LL,
      this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
}


void __fastcall BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x21
  BattleData_o *v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v7; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v8; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_4389C62 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_B775C4(&Method_BattleFieldEnvironmentData__SortBGM_b__69_0__);
    sub_B775C4(&Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_B775C4(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_4389C62 = 1;
  }
  bgmList = this->fields.bgmList;
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__SortBGM_b__69_0__,
    (const MethodInfo_26A0868 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)v4,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v7 = this->fields.bgmList;
  v8 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_2B42C0C *)Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !v7 )
    goto LABEL_9;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)v8,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_1D31514 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)p_CurBGM_k__BackingField,
    (System_Int32_array **)baseBgm,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v5 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v5 )
LABEL_9:
    sub_B7769C(v5, v6);
  BattleData__SetOverrideBgmData(v5, *p_CurBGM_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SortBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4389C61 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_B775C4(&Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__);
    sub_B775C4(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
    byte_4389C61 = 1;
  }
  backgroundList = this->fields.backgroundList;
  v4 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_2B42C0C *)Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList )
    sub_B7769C(v5, v6);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)backgroundList,
    (System_Comparison_T__o *)v4,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_1D31514 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._CurBackGround_k__BackingField,
    (System_Int32_array **)baseBackground,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__SortFieldData(
        BattleFieldEnvironmentData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  char v3; // w20
  const MethodInfo *v5; // x1

  v3 = type;
  if ( (type & 1) != 0 )
  {
    BattleFieldEnvironmentData__SortBackGround(this, *(const MethodInfo **)&type);
    BattleFieldEnvironmentData__SortBGM(this, v5);
  }
  if ( (v3 & 2) != 0 )
    BattleFieldEnvironmentData__SortBGM(this, *(const MethodInfo **)&type);
}


RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  BattleBuffData_o *v9; // x21
  int32_t Value; // w22
  int32_t Value2; // w24
  RemovedBuffInfo_o *v12; // x1
  const MethodInfo *v13; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)individuality);
  if ( !baseVals
    || (v9 = BuffData,
        Value = DataVals__GetValue(baseVals, 0LL),
        Value2 = DataVals__GetValue2(baseVals, 0LL),
        BuffData = (BattleBuffData_o *)DataVals__isParam(baseVals, 89, 0LL),
        !v9) )
  {
    sub_B7769C(BuffData, v8);
  }
  v12 = BattleBuffData__subBuffFromIndividualites(
          v9,
          individuality,
          Value,
          Value2,
          1,
          (unsigned __int8)BuffData & 1,
          0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v12, 1, v13);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
        BattleFieldEnvironmentData_o *this,
        int32_t deadActorId,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  RemovedBuffInfo_o *v7; // x1
  const MethodInfo *v8; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&deadActorId);
  if ( !BuffData )
    sub_B7769C(0LL, v6);
  v7 = BattleBuffData__SubBuffFromDeadActorId(BuffData, deadActorId, 0, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v7, 1, v8);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromType(
        BattleFieldEnvironmentData_o *this,
        int32_t buffId,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  RemovedBuffInfo_o *v9; // x0
  const MethodInfo *v10; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&buffId);
  if ( !BuffData )
    sub_B7769C(0LL, v8);
  v9 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v9, isAddAfterTask, v10);
}


void __fastcall BattleFieldEnvironmentData__TakeOverChangeField(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  BattleFieldEnvironmentData___c_c *v6; // x8
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__49_0; // x21
  Il2CppObject *v9; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v18; // x20
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  BattleBuffData_FieldChangeData_o *v34; // x21
  Generator_BGFromFieldChangeBGBuff_o *v35; // x22
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v37; // x22
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0

  if ( (byte_4389C53 & 1) == 0 )
  {
    sub_B775C4(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    sub_B775C4(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
    sub_B775C4(&Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__);
    sub_B775C4(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__49_0__);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C53 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_47;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
  v6 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__49_0,
      v9,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__49_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__);
    v10 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v10->__9__49_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__49_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v5,
                                   (System_Func_TSource__bool__o *)_9__49_0,
                                   (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_47:
    sub_B7769C(BuffData, v4);
  klass = BuffData->klass;
  v18 = BuffData;
  if ( *(_WORD *)&BuffData->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&BuffData->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v21 = sub_B0F4C0(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  if ( !v23 )
    sub_B7769C(0LL, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v25 = 0LL;
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_24;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_24:
      v27 = sub_B0F4C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v29 = 0LL;
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_31;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_31:
      v31 = sub_B0F4C0(v23, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v34 = (BattleBuffData_FieldChangeData_o *)v32;
    if ( !v32 )
      sub_B7769C(0LL, v33);
    if ( *(int *)(v32 + 24) >= 1 )
    {
      v35 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B77694(Generator_BGFromFieldChangeBGBuff_TypeInfo);
      Generator_BGFromFieldChangeBGBuff___ctor(v35, v34, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
        this,
        v35,
        2LL,
        this->klass->vtable._6_AddBGM.methodPtr);
    }
    if ( v34->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v34->fields.bgmName, 0LL) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v37 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B77694(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
      Generator_BGMFromFieldChangeBGBuff___ctor(v37, Data_k__BackingField, v34, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v37,
        2LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
  }
  v38 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v39 = 0LL;
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_43;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_43:
    v41 = sub_B0F4C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v23, *(_QWORD *)(v41 + 8));
}


void __fastcall BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  BattleFieldEnvironmentData_o *v4; // x0
  const MethodInfo *v5; // x2
  struct BattleData_o *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *player_datalist; // x20
  BattleFieldEnvironmentData___c_c *v8; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__50_0; // x21
  Il2CppObject *v11; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_BattleServantData__o *v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  BattleBuffData_BuffData_array *v22; // x1
  const MethodInfo *v23; // x2

  v2 = this;
  if ( (byte_4389C54 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B775C4(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B775C4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__50_0__);
    this = (BattleFieldEnvironmentData_o *)sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C54 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (this = (BattleFieldEnvironmentData_o *)Data_k__BackingField->fields.player_datalist) == 0LL
    || (v4 = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                               (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                               (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__),
        BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(v4, (BattleServantData_array *)v4, v5),
        (v6 = v2->fields._Data_k__BackingField) == 0LL) )
  {
    sub_B7769C(this, method);
  }
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.player_datalist;
  v8 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v8 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__50_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__50_0,
      v11,
      Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__50_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleServantData__bool___ctor__);
    v12 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v12->__9__50_0 = (struct System_Func_BattleServantData__bool__o *)_9__50_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v12->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                         player_datalist,
                                                                         (System_Func_TSource__bool__o *)_9__50_0,
                                                                         (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
                                                               v19,
                                                               v20);
  v22 = (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v21,
                                           (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, v22, v23);
}


void __fastcall BattleFieldEnvironmentData__TurnProgressing(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  BattleBuffData_BuffData_array *v9; // x1
  const MethodInfo *v10; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)logic);
  if ( !BuffData )
    sub_B7769C(0LL, v8);
  v9 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22983752(this, v9, 1, v10);
}


void __fastcall BattleFieldEnvironmentData__UpdateAllView(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf_k__BackingField; // x0
  struct BattlePerformance_o *v4; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (BattlePerformance__UpdateFieldView(Perf_k__BackingField, 0LL), (v4 = this->fields._Perf_k__BackingField) == 0LL)
    || (Perf_k__BackingField = (BattlePerformance_o *)v4->fields.logic) == 0LL
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Perf_k__BackingField, 0LL),
        (Perf_k__BackingField = this->fields._Perf_k__BackingField) == 0LL) )
  {
    sub_B7769C(Perf_k__BackingField, method);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  BattleFieldEnvironmentData___c_c *v6; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__51_0; // x20
  Il2CppObject *v9; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4389C55 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleBuffData_BuffData___ctor__);
    sub_B775C4(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_B775C4(&Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__51_0__);
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4389C55 = 1;
  }
  v4 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
         (System_Collections_Generic_IEnumerable_BattleServantData__o *)servantArray,
         (const MethodInfo *)servantArray);
  if ( v4 )
  {
    v5 = (System_Collections_Generic_IEnumerable_T__o *)v4;
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__51_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__51_0;
    if ( !_9__51_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__51_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__51_0,
        v9,
        Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__51_0__,
        (const MethodInfo_26A0868 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
      v10 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v10->__9__51_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__51_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v10->__9__51_0,
        (System_Int32_array **)_9__51_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v5,
      (System_Action_T__o *)_9__51_0,
      (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
}


void __fastcall BattleFieldEnvironmentData___AddServantChangeBgm_b__89_0(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v3; // x19
  Generator_BGM_o *v4; // x1

  if ( !buff || (v3 = this, (this = (BattleFieldEnvironmentData_o *)buff->fields.changeBgmData) == 0LL) )
    sub_B7769C(this, buff);
  v4 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(
         (BattleBuffData_ChangeBgmData_o *)this,
         v3->fields._Data_k__BackingField,
         0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._6_AddBGM.method)(
    v3,
    v4,
    2LL,
    v3->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___RemoveBgmNotExistsChangeBgmBuff_b__66_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattleFieldEnvironmentData_BGMData__IsRemove(x, this->fields._Data_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__69_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, BattleFieldEnvironmentData_o *, void *))x->klass->vtable._6_UpdateActive.method)(
    x,
    this,
    x->klass[1]._1.image);
}


BattleBuffData_o *__fastcall BattleFieldEnvironmentData__get_BuffData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_fields; // x19
  BattleBuffData_o *v4; // x20
  struct BattleBuffData_o *buffData; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4389C4E & 1) == 0 )
  {
    sub_B775C4(&BattleBuffData_TypeInfo);
    byte_4389C4E = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  v4 = buffData;
  if ( !buffData )
  {
    v4 = (BattleBuffData_o *)sub_B77694(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0LL);
    p_fields->klass = (BattleServantConfConponent_c *)v4;
    sub_B77560(p_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
  }
  return v4;
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__get_CurBGM(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurBGM_k__BackingField;
}


System_String_o *__fastcall BattleFieldEnvironmentData__get_CurBGMName(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  CurBGM_k__BackingField = this->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    sub_B7769C(this, method);
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
    return BgmData_k__BackingField->fields._BgmName_k__BackingField;
  else
    return 0LL;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__get_CurBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurBackGround_k__BackingField;
}


BattleData_o *__fastcall BattleFieldEnvironmentData__get_Data(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__get_IsChangeBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  v2 = this;
  if ( (byte_4389C4F & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_B775C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4389C4F = 1;
  }
  CurBGM_k__BackingField = v2->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    goto LABEL_8;
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
  {
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    this = (BattleFieldEnvironmentData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( this )
    {
      BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
      LOBYTE(BgmData_k__BackingField) = !BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0LL);
      return (unsigned __int8)BgmData_k__BackingField & 1;
    }
LABEL_8:
    sub_B7769C(this, method);
  }
  return (unsigned __int8)BgmData_k__BackingField & 1;
}


bool __fastcall BattleFieldEnvironmentData__get_IsNeedChangeBG(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  BattleFieldEnvironmentData_o *v3; // x19
  int v4; // w20
  struct BattleFieldEnvironmentData_BackgroundData_o *v5; // x8
  int32_t id; // w19

  CurBackGround_k__BackingField = this->fields._CurBackGround_k__BackingField;
  if ( !CurBackGround_k__BackingField )
    goto LABEL_8;
  v3 = this;
  this = (BattleFieldEnvironmentData_o *)this->fields._Perf_k__BackingField;
  if ( !this )
    goto LABEL_8;
  v4 = *((_DWORD *)&CurBackGround_k__BackingField->fields.isActive + 1);
  this = (BattleFieldEnvironmentData_o *)BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)this, 0LL);
  if ( v4 == (_DWORD)this )
  {
    v5 = v3->fields._CurBackGround_k__BackingField;
    if ( v5 )
    {
      this = (BattleFieldEnvironmentData_o *)v3->fields._Perf_k__BackingField;
      if ( this )
      {
        id = v5->fields.id;
        return id != BattlePerformance__get_CurrentGroundType((BattlePerformance_o *)this, 0LL);
      }
    }
LABEL_8:
    sub_B7769C(this, method);
  }
  return 1;
}


BattleLogic_o *__fastcall BattleFieldEnvironmentData__get_Logic(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._Logic_k__BackingField;
}


BattlePerformance_o *__fastcall BattleFieldEnvironmentData__get_Perf(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void __fastcall BattleFieldEnvironmentData__set_CurBGM(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CurBGM_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._CurBGM_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData__set_CurBackGround(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CurBackGround_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._CurBackGround_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData__set_Data(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Data_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData__set_Logic(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Logic_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._Logic_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData__set_Perf(
        BattleFieldEnvironmentData_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._Perf_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData_BGMData___ctor(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData_BGMData___ctor_24574792(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmData_k__BackingField = bgmData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._BgmData_k__BackingField,
    (System_Int32_array **)bgmData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall BattleFieldEnvironmentData_BGMData__IsRemove(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x8
  BattleServantData_o *ServantData; // x0
  BattleBuffData_BuffData_array *AllBGMChangeBuffArray; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21

  if ( (byte_438ABC3 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_BattleBuffData_BuffData____69468592);
    sub_B775C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
    sub_B775C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_B775C4(&Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0__IsRemove_b__0__);
    sub_B775C4(&BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0_TypeInfo);
    byte_438ABC3 = 1;
  }
  v5 = sub_B77694(BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0_TypeInfo);
  BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0___ctor(
    (BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0_o *)v5,
    0LL);
  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_14;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleFieldEnvironmentData_CommonData__get_UniqueVal(comData, v6);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = comData;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)comData, v8, v9, v10, v11, v12, v13);
  v14 = *(_QWORD *)(v5 + 16);
  if ( !v14 )
    goto LABEL_14;
  v6 = (const MethodInfo *)*(unsigned int *)(v14 + 20);
  if ( ((unsigned int)v6 & 0x80000000) != 0 )
    return 0;
  if ( !data )
    goto LABEL_14;
  ServantData = BattleData__getServantData(data, (int32_t)v6, 0LL);
  if ( !ServantData )
    return 1;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleServantData__get_BuffData(ServantData, 0LL);
  if ( !comData )
LABEL_14:
    sub_B7769C(comData, v6);
  AllBGMChangeBuffArray = BattleBuffData__GetAllBGMChangeBuffArray((BattleBuffData_o *)comData, 0LL);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0__IsRemove_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
  return !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
            (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)AllBGMChangeBuffArray,
            (System_Func_T__bool__o *)v17,
            (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_BattleBuffData_BuffData____69468592);
}


void __fastcall BattleFieldEnvironmentData_BGMData__PreGetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  v3 = OverwriteBattleBgmData__ConvertToSaveData(this->fields._BgmData_k__BackingField, 0LL);
  this->fields.bgmSaveData = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.bgmSaveData,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall BattleFieldEnvironmentData_BGMData__PreSetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(this->fields.bgmSaveData, 0LL);
  this->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._BgmData_k__BackingField,
    (System_Int32_array **)InstanceFromSaveData,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall BattleFieldEnvironmentData_BGMData__UpdateActive(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x20
  BattleFieldEnvironmentData_BGMData_o *v4; // x19
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  BuffUniqueValue_o *UniqueVal; // x0
  const MethodInfo *v7; // x2
  char enableBgm; // w8

  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_10;
  v4 = this;
  if ( (comData->fields.linkBuffUid & 0x80000000) != 0 )
    goto LABEL_7;
  if ( !fieldEnv
    || (CurBackGround_k__BackingField = fieldEnv->fields._CurBackGround_k__BackingField) == 0LL
    || (this = (BattleFieldEnvironmentData_BGMData_o *)CurBackGround_k__BackingField->fields.comData) == 0LL )
  {
LABEL_10:
    sub_B7769C(this, fieldEnv);
  }
  UniqueVal = BattleFieldEnvironmentData_CommonData__get_UniqueVal(
                (BattleFieldEnvironmentData_CommonData_o *)this,
                (const MethodInfo *)fieldEnv);
  if ( !BattleFieldEnvironmentData_CommonData__IsMatch(comData, UniqueVal, v7) )
  {
    enableBgm = v4->fields.enableBgm;
    goto LABEL_9;
  }
LABEL_7:
  enableBgm = 1;
LABEL_9:
  v4->fields.isActive = enableBgm;
}


OverwriteBattleBgmData_o *__fastcall BattleFieldEnvironmentData_BGMData__get_BgmData(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  return this->fields._BgmData_k__BackingField;
}


void __fastcall BattleFieldEnvironmentData_BGMData__set_BgmData(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BgmData_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._BgmData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0___ctor(
        BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0___IsRemove_b__0(
        BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !x
    || (changeBgmData = x->fields.changeBgmData) == 0LL
    || (this = (BattleFieldEnvironmentData_BGMData___c__DisplayClass12_0_o *)this->fields.val) == 0LL )
  {
    sub_B7769C(this, x);
  }
  return BuffUniqueValue__IsMatch((BuffUniqueValue_o *)this, changeBgmData->fields.uniqueVal, 0LL);
}


void __fastcall BattleFieldEnvironmentData_BackgroundData___ctor(
        BattleFieldEnvironmentData_BackgroundData_o *this,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData_BaseData___ctor(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData_BaseData__UpdateActive(
        BattleFieldEnvironmentData_BaseData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall BattleFieldEnvironmentData_BaseData__get_Active(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  return this->fields.isActive;
}


int32_t __fastcall BattleFieldEnvironmentData_BaseData__get_GrantType(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_B7769C(this, method);
  return comData->fields.grantType;
}


bool __fastcall BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_B7769C(this, method);
  return comData->fields.linkBuffUid == -1;
}


void __fastcall BattleFieldEnvironmentData_CommonData___ctor(
        BattleFieldEnvironmentData_CommonData_o *this,
        const MethodInfo *method)
{
  this->fields.linkBuffUid = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData_CommonData__IsMatch(
        BattleFieldEnvironmentData_CommonData_o *this,
        BuffUniqueValue_o *val,
        const MethodInfo *method)
{
  BuffUniqueValue_o *UniqueVal; // x0
  __int64 v5; // x1

  if ( !val )
    return 0;
  UniqueVal = BattleFieldEnvironmentData_CommonData__get_UniqueVal(this, (const MethodInfo *)val);
  if ( !UniqueVal )
    sub_B7769C(0LL, v5);
  return BuffUniqueValue__IsMatch(UniqueVal, val, 0LL);
}


void __fastcall BattleFieldEnvironmentData_CommonData__PreAddSetInfo(
        BattleFieldEnvironmentData_CommonData_o *this,
        int32_t addOrder,
        int32_t grantType,
        const MethodInfo *method)
{
  this->fields.addOrder = addOrder;
  this->fields.grantType = grantType;
}


BuffUniqueValue_o *__fastcall BattleFieldEnvironmentData_CommonData__get_UniqueVal(
        BattleFieldEnvironmentData_CommonData_o *this,
        const MethodInfo *method)
{
  BuffUniqueValue_o *cachedUniqueVal; // x21
  int32_t linkBuffUid; // w22
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_438ABC4 & 1) == 0 )
  {
    sub_B775C4(&BuffUniqueValue_TypeInfo);
    byte_438ABC4 = 1;
  }
  cachedUniqueVal = this->fields.cachedUniqueVal;
  if ( !cachedUniqueVal )
  {
    linkBuffUid = this->fields.linkBuffUid;
    cachedUniqueVal = (BuffUniqueValue_o *)sub_B77694(BuffUniqueValue_TypeInfo);
    BuffUniqueValue___ctor_29615244(cachedUniqueVal, linkBuffUid, -1, 0LL);
    this->fields.cachedUniqueVal = cachedUniqueVal;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.cachedUniqueVal,
      (System_Int32_array **)cachedUniqueVal,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return cachedUniqueVal;
}


void __fastcall BattleFieldEnvironmentData_SaveData___ctor(
        BattleFieldEnvironmentData_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438ABC1 & 1) == 0 )
  {
    sub_B775C4(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_438ABC1 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleFieldEnvironmentData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleFieldEnvironmentData___c___ctor(BattleFieldEnvironmentData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c___AddBGM_b__59_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___AddBGM_b__59_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___AddBackground_b__58_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BackgroundData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


int32_t __fastcall BattleFieldEnvironmentData___c___AddBgmFromChangeBgmBuffArray_b__54_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !buff || (changeBgmData = buff->fields.changeBgmData) == 0LL )
    sub_B7769C(this, buff);
  return changeBgmData->fields.addBgmOrder;
}


bool __fastcall BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__53_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_B7769C(this, 0LL);
  return !BattleServantData__isAlive(svt, 0, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__53_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_B7769C(this, svt);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleFieldEnvironmentData___c___EnumerateValidBgmChangeBuff_b__52_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_B7769C(this, svt);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0LL);
}


bool __fastcall BattleFieldEnvironmentData___c___ExecRemoveBuffAfterProc_b__77_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.delAfterProcType != 0;
}


bool __fastcall BattleFieldEnvironmentData___c___GetFieldIndividuality_b__55_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BackgroundData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


void __fastcall BattleFieldEnvironmentData___c___GetSaveData_b__7_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !x )
    sub_B7769C(this, 0LL);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0LL);
  x->fields.bgmSaveData = v4;
  sub_B77560((BattleServantConfConponent_o *)&x->fields.bgmSaveData, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__46_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B7769C(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__46_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B7769C(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__60_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B7769C(this, 0LL);
  return bgm->fields.isAfterReset;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__60_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B7769C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))bgm->klass->vtable._5_get_IsTargetBase.method)(
           bgm,
           bgm->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveBgmRelateBuff_b__62_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.changeBgmData != 0LL;
}


void __fastcall BattleFieldEnvironmentData___c___SetSaveData_b__8_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !x )
    sub_B7769C(this, 0LL);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0LL);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_B77560(
    (BattleServantConfConponent_o *)&x->fields._BgmData_k__BackingField,
    (System_Int32_array **)InstanceFromSaveData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverChangeField_b__49_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_FieldChangeData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.isTakeOverNextWave;
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverPlayerServantChangeBgm_b__50_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___UpdateBgmBuffPriorityOnInitWave_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !x || (changeBgmData = x->fields.changeBgmData) == 0LL )
    sub_B7769C(this, x);
  if ( changeBgmData->fields.isResetBgmPriorityAtWaveStart )
    changeBgmData->fields.priority = changeBgmData->fields.bgmPriorityResetAtWaveStart;
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass61_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass61_0___RemoveRelateBuff_b__0(
        BattleFieldEnvironmentData___c__DisplayClass61_0_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B7769C(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass61_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass61_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B7769C(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass62_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass62_0___RemoveBgmRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass62_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B7769C(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass77_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass77_0___ExecRemoveBuffAfterProc_b__1(
        BattleFieldEnvironmentData___c__DisplayClass77_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, x);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22984412(_4__this, x, this->fields.isAddAfterTask, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass82_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleFieldEnvironmentData___c__DisplayClass82_0___GetIndividualityExceptDelTarget_b__0(
        BattleFieldEnvironmentData___c__DisplayClass82_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *subList; // x0

  if ( (byte_438ABC2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_438ABC2 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_B7769C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
}