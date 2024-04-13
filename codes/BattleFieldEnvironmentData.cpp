void __fastcall BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  __int64 v61; // x0
  __int64 v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct BattlePerformance_o *perf; // x1
  struct BattlePerformance_o **p_Perf_k__BackingField; // x20
  System_Int32_array **logic; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7

  if ( (byte_42E78B0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v24, v25, v26);
    byte_42E78B0 = 1;
  }
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.backgroundList,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgmList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.addOrder = 1;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.addTaskList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B5D694(System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v48,
    (const MethodInfo_25017F0 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.hashDelType,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Data_k__BackingField = data;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)data,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60);
  if ( !data )
    sub_B5D69C(v61, v62);
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  p_Perf_k__BackingField = &this->fields._Perf_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_Perf_k__BackingField,
    (System_Int32_array **)perf,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  logic = (System_Int32_array **)data->fields.logic;
  p_Perf_k__BackingField[1] = (struct BattlePerformance_o *)logic;
  sub_B5D560((BattleServantConfConponent_o *)(p_Perf_k__BackingField + 1), logic, v72, v73, v74, v75, v76, v77);
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__AddBGM(
        BattleFieldEnvironmentData_o *this,
        Generator_BGM_o *bgmGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 addOrder; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x20
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *bgmList; // x21
  void *CurBackGround_k__BackingField; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x22
  Il2CppObject *v27; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1

  v6 = this;
  if ( (byte_42E78B7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__,
      (_DWORD)bgmGenerator,
      grantType,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__AddBGM_b__50_0__, v16, v17, v18);
    this = (BattleFieldEnvironmentData_o *)sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v19, v20, v21);
    byte_42E78B7 = 1;
  }
  addOrder = (unsigned int)v6->fields.addOrder;
  v6->fields.addOrder = addOrder + 1;
  if ( !bgmGenerator )
    goto LABEL_18;
  this = (BattleFieldEnvironmentData_o *)((__int64 (__fastcall *)(Generator_BGM_o *, __int64, _QWORD, void *))bgmGenerator->klass->vtable._4_Make.method)(
                                           bgmGenerator,
                                           addOrder,
                                           (unsigned int)grantType,
                                           bgmGenerator->klass[1]._1.image);
  if ( !this )
    goto LABEL_18;
  v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
          this,
          this->klass->vtable._6_AddBGM.methodPtr) & 1) == 0 )
    goto LABEL_16;
  bgmList = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v6->fields.bgmList;
  this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
  }
  CurBackGround_k__BackingField = this[1].fields._CurBackGround_k__BackingField;
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)CurBackGround_k__BackingField + 8);
  if ( !v26 )
  {
    if ( (BYTE3(this[2].fields._CurBGM_k__BackingField) & 4) != 0 && !LODWORD(this[1].fields.questPhaseIndividuality) )
    {
      j_il2cpp_runtime_class_init_0(this);
      CurBackGround_k__BackingField = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v27 = *(Il2CppObject **)CurBackGround_k__BackingField;
    v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v26,
      v27,
      Method_BattleFieldEnvironmentData___c__AddBGM_b__50_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)v26;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->__9__50_0,
      (System_Int32_array **)v26,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !bgmList )
LABEL_18:
    sub_B5D69C(this, addOrder);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)v26,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
LABEL_16:
  this = (BattleFieldEnvironmentData_o *)v6->fields.bgmList;
  if ( !this )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    v23,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
  BattleFieldEnvironmentData__SortBGM(v6, v35);
  return v6->fields._CurBGM_k__BackingField;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__AddBackground(
        BattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 addOrder; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x20
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *backgroundList; // x21
  void *CurBackGround_k__BackingField; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x22
  Il2CppObject *v27; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1

  v6 = this;
  if ( (byte_42E78B6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__,
      (_DWORD)bgGenerator,
      grantType,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__AddBackground_b__49_0__, v16, v17, v18);
    this = (BattleFieldEnvironmentData_o *)sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v19, v20, v21);
    byte_42E78B6 = 1;
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
  v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
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
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)CurBackGround_k__BackingField + 7);
  if ( !v26 )
  {
    if ( (BYTE3(this[2].fields._CurBGM_k__BackingField) & 4) != 0 && !LODWORD(this[1].fields.questPhaseIndividuality) )
    {
      j_il2cpp_runtime_class_init_0(this);
      CurBackGround_k__BackingField = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v27 = *(Il2CppObject **)CurBackGround_k__BackingField;
    v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v26,
      v27,
      Method_BattleFieldEnvironmentData___c__AddBackground_b__49_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v26;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->__9__49_0,
      (System_Int32_array **)v26,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !backgroundList )
LABEL_18:
    sub_B5D69C(this, addOrder);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    backgroundList,
    (System_Predicate_T__o *)v26,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
LABEL_16:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    v23,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
  BattleFieldEnvironmentData__SortBackGround(v6, v35);
  BattleFieldEnvironmentData__SortBGM(v6, v36);
  return v6->fields._CurBackGround_k__BackingField;
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
    sub_B5D69C(0LL, v7);
  BattleBuffData__addBuff(BuffData, buff, 1, unFixBuff, 0LL);
}


void __fastcall BattleFieldEnvironmentData__AddLastInterruptTasks(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
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
  __int64 v18; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *addTaskList; // x0

  if ( (byte_42E78BD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__,
      (_DWORD)logic,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E78BD = 1;
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
                                                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0LL);
        addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.addTaskList;
        if ( addTaskList )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)addTaskList,
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
          addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___Clear(
              (System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)addTaskList,
              (const MethodInfo_2501E08 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_14:
      sub_B5D69C(addTaskList, v18);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__AddRemoveProcTask(
        BattleFieldEnvironmentData_o *this,
        BattleLogicTask_o *task,
        int32_t addType,
        bool isNotDuplicated,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *hashDelType; // x0

  if ( (byte_42E78BE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__,
      (_DWORD)task,
      addType,
      isNotDuplicated);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v12, v13, v14);
    byte_42E78BE = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_9;
    if ( System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
           hashDelType,
           addType,
           (const MethodInfo_2501E74 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
          hashDelType,
          addType,
          (const MethodInfo_25029CC *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.addTaskList) == 0LL) )
  {
LABEL_9:
    sub_B5D69C(hashDelType, task);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)hashDelType,
    (EventMissionProgressRequest_Argument_ProgressData_o *)task,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateViewTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UpdateFieldViewBattleLogicTask_o *v5; // x20
  const MethodInfo *v6; // x4

  if ( (byte_42E78C3 & 1) == 0 )
  {
    sub_B5D5C4(&UpdateFieldViewBattleLogicTask_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E78C3 = 1;
  }
  v5 = (UpdateFieldViewBattleLogicTask_o *)sub_B5D694(UpdateFieldViewBattleLogicTask_TypeInfo);
  UpdateFieldViewBattleLogicTask___ctor(v5, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v5, 2, 1, v6);
}


bool __fastcall BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_21202444; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  __int64 v9; // x1
  System_Int32_array *BuffIndividualities; // x0

  Individualities_21202444 = buffIndiv;
  if ( opSvt )
    Individualities_21202444 = BattleServantData__getIndividualities_21202444(opSvt, buffIndiv, 0LL);
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
    sub_B5D69C(v8, v9);
  }
  return BattleBuffData__checkActBuff(BuffData, 105, (System_Int32_array *)v8, Individualities_21202444, 0LL);
}


void __fastcall BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  RemovedBuffInfo_o *v5; // x1
  const MethodInfo *v6; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(this, a);
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
  if ( (byte_42E78BF & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_B5D5C4(
                                             &Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__,
                                             (_DWORD)removeBuffInfo,
                                             isAddAfterTask,
                                             method);
    byte_42E78BF = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
    sub_B5D69C(this, removeBuffInfo);
  }
  v7 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23360956(v6, v7, isAddAfterTask, v8);
  return removeBuffInfo;
}


void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23360956(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  __int64 v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  BattleFieldEnvironmentData___c_c *v43; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__63_0; // x22
  Il2CppObject *v46; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_T__o *v54; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v55; // x22
  const MethodInfo *v56; // x1

  if ( (byte_42E78C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleBuffData_BuffData___ctor__, (_DWORD)removeBuffArray, isAddAfterTask, method);
    sub_B5D5C4(&System_Action_BattleBuffData_BuffData__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__63_0__, v22, v23, v24);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__DisplayClass63_0__ExecRemoveBuffAfterProc_b__1__, v25, v26, v27);
    sub_B5D5C4(&BattleFieldEnvironmentData___c__DisplayClass63_0_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v31, v32, v33);
    byte_42E78C0 = 1;
  }
  v34 = sub_B5D694(BattleFieldEnvironmentData___c__DisplayClass63_0_TypeInfo);
  BattleFieldEnvironmentData___c__DisplayClass63_0___ctor(
    (BattleFieldEnvironmentData___c__DisplayClass63_0_o *)v34,
    0LL);
  if ( !v34 )
    sub_B5D69C(v35, v36);
  *(_QWORD *)(v34 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 16), (System_Int32_array **)this, v37, v38, v39, v40, v41, v42);
  *(_BYTE *)(v34 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0LL) )
  {
    v43 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v43 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v43->static_fields;
    _9__63_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v46 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__63_0,
        v46,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__63_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v47 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v47->__9__63_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__63_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v47->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
    }
    v54 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__63_0,
                                                           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v55 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v55,
      (Il2CppObject *)v34,
      Method_BattleFieldEnvironmentData___c__DisplayClass63_0__ExecRemoveBuffAfterProc_b__1__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v54,
      (System_Action_T__o *)v55,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v56);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23361616(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_B5D69C(this, 0LL);
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


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetChangeFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
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
  System_Collections_Generic_List_int__o *v14; // x19
  const MethodInfo *v15; // x1
  void *BuffData; // x0
  __int64 v17; // x1
  int v18; // w8
  void *v19; // x20
  unsigned int v20; // w21
  __int64 v21; // x23
  __int64 v23; // x0

  if ( (byte_42E78B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E78B5 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v15);
  if ( !BuffData )
    goto LABEL_15;
  BuffData = BattleBuffData__GetFieldChangeArray((BattleBuffData_o *)BuffData, 0LL);
  if ( !BuffData )
    goto LABEL_15;
  v18 = *((_DWORD *)BuffData + 6);
  v19 = BuffData;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= v18 )
      {
        v23 = sub_B5D6C8(BuffData);
        sub_B5D668(v23, 0LL);
      }
      v21 = *((_QWORD *)v19 + (int)v20 + 4);
      if ( !v21 )
        break;
      BuffData = (void *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v21 + 56), 0LL);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v14 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v14,
          *(System_Collections_Generic_IEnumerable_T__o **)(v21 + 56),
          (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B5D69C(BuffData, v17);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetCommonFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_List_int__o *v13; // x21
  System_Int32_array *IsNullOrEmpty; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_42E78C4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, (_DWORD)individuality, (_DWORD)addIndiv, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v10, v11, v12);
    byte_42E78C4 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)individuality,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v15);
    if ( !v13 )
LABEL_11:
      sub_B5D69C(IsNullOrEmpty, v15);
  }
  else
  {
    if ( !v13 )
      goto LABEL_11;
    System_Collections_Generic_List_int___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v16);
  }
  System_Collections_Generic_List_int___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v13, v17);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x21
  BattleFieldEnvironmentData___c_c *v19; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__46_0; // x22
  Il2CppObject *v22; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  void *baseBackground; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  System_Int32_array *QuestPhaseIndividuality; // x1

  if ( (byte_42E78B4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____68846000,
      (_DWORD)addIndiv,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__46_0__, v12, v13, v14);
    sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v15, v16, v17);
    byte_42E78B4 = 1;
  }
  backgroundList = this->fields.backgroundList;
  v19 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v19 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__46_0,
      v22,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__46_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v23 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v23->__9__46_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__46_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__46_0,
      (System_Int32_array **)_9__46_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  baseBackground = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                     (System_Func_TSource__bool__o *)_9__46_0,
                     (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____68846000);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  if ( !baseBackground )
    sub_B5D69C(0LL, v31);
  QuestPhaseIndividuality = (System_Int32_array *)*((_QWORD *)baseBackground + 5);
  if ( !QuestPhaseIndividuality )
    QuestPhaseIndividuality = BattleFieldEnvironmentData__GetQuestPhaseIndividuality(this, 0LL);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, QuestPhaseIndividuality, addIndiv, v32);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
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
  __int64 v27; // x21
  const MethodInfo *v28; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_int__o **v37; // x22
  System_Collections_Generic_List_int__o *v38; // x20
  System_Predicate_int__o *v39; // x20

  if ( (byte_42E78C2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, (_DWORD)individualityList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__RemoveAll__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(
      &Method_BattleFieldEnvironmentData___c__DisplayClass68_0__GetIndividualityExceptDelTarget_b__0__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&BattleFieldEnvironmentData___c__DisplayClass68_0_TypeInfo, v24, v25, v26);
    byte_42E78C2 = 1;
  }
  v27 = sub_B5D694(BattleFieldEnvironmentData___c__DisplayClass68_0_TypeInfo);
  BattleFieldEnvironmentData___c__DisplayClass68_0___ctor(
    (BattleFieldEnvironmentData___c__DisplayClass68_0_o *)v27,
    0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v28);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0LL, 0LL, 1, 0LL);
  if ( !v27 )
    goto LABEL_13;
  *(_QWORD *)(v27 + 16) = BuffData;
  v37 = (System_Collections_Generic_List_int__o **)(v27 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)BuffData, v31, v32, v33, v34, v35, v36);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v38 = *v37;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0LL);
  if ( !v38 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v38,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v37 )
    goto LABEL_13;
  if ( (*v37)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_B5D69C(BuffData, v30);
  }
  v39 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v39,
    (Il2CppObject *)v27,
    Method_BattleFieldEnvironmentData___c__DisplayClass68_0__GetIndividualityExceptDelTarget_b__0__,
    (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v39,
    (const MethodInfo_3085F30 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_B5D69C(0LL, method);
    PrioredIndividuality = (System_Int32_array **)BattleData__GetPrioredIndividuality(Data_k__BackingField, 0LL);
    p_questPhaseIndividuality->klass = (BattleServantConfConponent_c *)PrioredIndividuality;
    sub_B5D560(p_questPhaseIndividuality, PrioredIndividuality, v7, v8, v9, v10, v11, v12);
    return (System_Int32_array *)p_questPhaseIndividuality->klass;
  }
  return result;
}


FieldBuffDeleteProcess_o *__fastcall BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        int32_t delAfterProcType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  FieldChangeBuffDeleteProcess_o *v5; // x19

  if ( (byte_42E78C1 & 1) == 0 )
  {
    sub_B5D5C4(&FieldChangeBuffDeleteProcess_TypeInfo, delAfterProcType, (_DWORD)method, v3);
    byte_42E78C1 = 1;
  }
  if ( delAfterProcType != 1 )
    return 0LL;
  v5 = (FieldChangeBuffDeleteProcess_o *)sub_B5D694(FieldChangeBuffDeleteProcess_TypeInfo);
  FieldChangeBuffDeleteProcess___ctor(v5, 0LL);
  return (FieldBuffDeleteProcess_o *)v5;
}


BattleFieldEnvironmentData_SaveData_o *__fastcall BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  void *backgroundList; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__7_0; // x21
  Il2CppObject *v30; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_42E78AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__, v14, v15, v16);
    sub_B5D5C4(&BattleFieldEnvironmentData_SaveData_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, v20, v21, v22);
    sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v23, v24, v25);
    byte_42E78AD = 1;
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
    v30 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__7_0,
      v30,
      Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
    v31 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v31->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__7_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v31->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  if ( !bgmList )
    goto LABEL_17;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v38 = sub_B5D694(BattleFieldEnvironmentData_SaveData_TypeInfo);
  BattleFieldEnvironmentData_SaveData___ctor((BattleFieldEnvironmentData_SaveData_o *)v38, 0LL);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_17;
  backgroundList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v38
    || (*(_QWORD *)(v38 + 16) = backgroundList,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v38 + 16),
          (System_Int32_array **)backgroundList,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44),
        (backgroundList = this->fields.bgmList) == 0LL)
    || (v45 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v38 + 24) = v45,
        sub_B5D560((BattleServantConfConponent_o *)(v38 + 24), v45, v46, v47, v48, v49, v50, v51),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v52)) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(backgroundList, method);
  }
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0LL);
  *(_QWORD *)(v38 + 32) = SaveData;
  sub_B5D560((BattleServantConfConponent_o *)(v38 + 32), SaveData, v54, v55, v56, v57, v58, v59);
  result = (BattleFieldEnvironmentData_SaveData_o *)v38;
  *(_DWORD *)(v38 + 40) = this->fields.addOrder;
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
  int v2; // w2
  __int64 v3; // x3
  BattleFieldEnvironmentData_o *v4; // x19
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
  BattleData_o *Data_k__BackingField; // x20
  StageEntity_o *StageEntity; // x21
  Generator_BGFromQuestPhase_o *v40; // x22
  StageEntity_o *v41; // x20
  Generator_BGFromStage_o *v42; // x21
  BattleData_o *v43; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  Generator_BGM_o *v46; // x23
  System_Collections_Generic_IEnumerable_TSource__o *backgroundList; // x20
  BattleFieldEnvironmentData___c_c *v48; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_0; // x21
  Il2CppObject *v51; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  BattleFieldEnvironmentData___c_c *v66; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v68; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_1; // x21
  Il2CppObject *v70; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7

  v4 = this;
  if ( (byte_42E78B1 & 1) == 0 )
  {
    sub_B5D5C4(&Generator_BGFromQuestPhase_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Generator_BGFromStage_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Generator_BGM_TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____68845992,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____68846000,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__InitStageField_b__42_0__, v29, v30, v31);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__InitStageField_b__42_1__, v32, v33, v34);
    this = (BattleFieldEnvironmentData_o *)sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v35, v36, v37);
    byte_42E78B1 = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v4->fields._Data_k__BackingField, 0LL),
        v40 = (Generator_BGFromQuestPhase_o *)sub_B5D694(Generator_BGFromQuestPhase_TypeInfo),
        Generator_BGFromQuestPhase___ctor(v40, Data_k__BackingField, StageEntity, 0LL),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._5_AddBackground.method)(
          v4,
          v40,
          1LL,
          v4->klass->vtable._6_AddBGM.methodPtr),
        (this = (BattleFieldEnvironmentData_o *)v4->fields._Data_k__BackingField) == 0LL)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  v41 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0LL) >= 1 )
  {
    v42 = (Generator_BGFromStage_o *)sub_B5D694(Generator_BGFromStage_TypeInfo);
    Generator_BGFromStage___ctor(v42, v41, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._5_AddBackground.method)(
      v4,
      v42,
      1LL,
      v4->klass->vtable._6_AddBGM.methodPtr);
  }
  v43 = v4->fields._Data_k__BackingField;
  bgmId = v41->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v41, 0, 0LL);
  v46 = (Generator_BGM_o *)sub_B5D694(Generator_BGM_TypeInfo);
  Generator_BGM___ctor(v46, v43, bgmId, 0, PriorityBgm, 0LL, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._6_AddBGM.method)(
    v4,
    v46,
    1LL,
    v4->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  backgroundList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.backgroundList;
  v48 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v48 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_0,
      v51,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__42_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v52 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v52->__9__42_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__42_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v52->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  v59 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 backgroundList,
                                 (System_Func_TSource__bool__o *)_9__42_0,
                                 (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____68846000);
  v4->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v59;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.baseBackground, v59, v60, v61, v62, v63, v64, v65);
  v66 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v66 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v68 = v66->static_fields;
  _9__42_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v68->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( (BYTE3(v66->vtable._0_Equals.methodPtr) & 4) != 0 && !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v68 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v70 = (Il2CppObject *)v68->__9;
    _9__42_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_1,
      v70,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__42_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v71 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v71->__9__42_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__42_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v71->__9__42_1,
      (System_Int32_array **)_9__42_1,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  v78 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 bgmList,
                                 (System_Func_TSource__bool__o *)_9__42_1,
                                 (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____68845992);
  v4->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v78;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.baseBgm, v78, v79, v80, v81, v82, v83, v84);
}


bool __fastcall BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B5D69C(this, method);
  if ( Data_k__BackingField->fields.wavecount >= 1 )
  {
    BattleFieldEnvironmentData__ResetFieldInfo(this, method);
    BattleFieldEnvironmentData__InitStageField(this, v4);
    BattleFieldEnvironmentData__TakeOverChangeField(this, v5);
  }
  return BattleFieldEnvironmentData__get_IsNeedChangeBG(this, method);
}


bool __fastcall BattleFieldEnvironmentData__IsNeedChangeField(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_42E78BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E78BC = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_B5D69C(Instance, v6);
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  void *v33; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v36; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BattleFieldEnvironmentData___c_c *v44; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v45; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v46; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__51_1; // x21
  Il2CppObject *v48; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_42E78B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_0__, v23, v24, v25);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_1__, v26, v27, v28);
    sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v29, v30, v31);
    byte_42E78B8 = 1;
  }
  bgmList = this->fields.bgmList;
  v33 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v33 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = (struct BattleFieldEnvironmentData___c_StaticFields *)*((_QWORD *)v33 + 23);
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (*((_BYTE *)v33 + 307) & 4) != 0 && !*((_DWORD *)v33 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v36,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    v37 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v37->__9__51_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__51_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !bgmList )
    goto LABEL_24;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
    (System_Predicate_T__o *)_9__51_0,
    (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v44 = BattleFieldEnvironmentData___c_TypeInfo;
  v45 = this->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v44 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v46 = v44->static_fields;
  _9__51_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v46->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v46 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)v46->__9;
    _9__51_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__51_1,
      v48,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v49 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v49->__9__51_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__51_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v49->__9__51_1,
      (System_Int32_array **)_9__51_1,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v45,
         (System_Func_TSource__bool__o *)_9__51_1,
         (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v33 = this->fields.bgmList;
    if ( v33 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.baseBgm,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
      goto LABEL_23;
    }
LABEL_24:
    sub_B5D69C(v33, method);
  }
LABEL_23:
  BattleFieldEnvironmentData__SortBGM(this, method);
  return this->fields._CurBGM_k__BackingField;
}


void __fastcall BattleFieldEnvironmentData__RemoveRelateBuff(
        BattleFieldEnvironmentData_o *this,
        int32_t buffUid,
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
  BattleFieldEnvironmentData___c__DisplayClass52_0_o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x22
  int32_t v35; // w0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x22
  int32_t v37; // w20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v38; // x23
  const MethodInfo *v39; // x2

  if ( (byte_42E78B9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__,
      buffUid,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__,
      v6,
      v7,
      v8);
    sub_B5D5C4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__0__, v21, v22, v23);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__1__, v24, v25, v26);
    sub_B5D5C4(&BattleFieldEnvironmentData___c__DisplayClass52_0_TypeInfo, v27, v28, v29);
    byte_42E78B9 = 1;
  }
  v30 = (BattleFieldEnvironmentData___c__DisplayClass52_0_o *)sub_B5D694(BattleFieldEnvironmentData___c__DisplayClass52_0_TypeInfo);
  BattleFieldEnvironmentData___c__DisplayClass52_0___ctor(v30, 0LL);
  if ( !v30 )
    goto LABEL_9;
  v30->fields.buffUid = buffUid;
  backgroundList = this->fields.backgroundList;
  v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v34,
    (Il2CppObject *)v30,
    Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList
    || (v35 = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)backgroundList,
                (System_Predicate_T__o *)v34,
                (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = this->fields.bgmList,
        v37 = v35,
        v38 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v38,
          (Il2CppObject *)v30,
          Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__1__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__),
        !bgmList) )
  {
LABEL_9:
    sub_B5D69C(v31, v32);
  }
  if ( System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
         (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
         (System_Predicate_T__o *)v38,
         (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v37 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v39);
}


void __fastcall BattleFieldEnvironmentData__ResetFieldInfo(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *backgroundList; // x0

  if ( (byte_42E78B2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__, v5, v6, v7);
    byte_42E78B2 = 1;
  }
  backgroundList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.backgroundList;
  if ( !backgroundList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          backgroundList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__),
        (backgroundList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList) == 0LL) )
  {
    sub_B5D69C(backgroundList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    backgroundList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
}


void __fastcall BattleFieldEnvironmentData__SetSaveData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_SaveData_o *sv,
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
  __int64 v30; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *backgroundList; // x0
  const MethodInfo *v32; // x1
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v34; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__8_0; // x22
  Il2CppObject *v37; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x2
  int32_t v46; // w20
  struct BattleData_o **p_Data_k__BackingField; // x24
  int32_t v48; // w21
  bool ExistOverwriteBgIndividuality; // w22
  Generator_Background_o *v50; // x23
  BattleData_o *v51; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v56; // w23
  Generator_BGM_o *v57; // x24

  if ( (byte_42E78AE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, (_DWORD)sv, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Generator_BGM_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Generator_Background_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___, v15, v16, v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__, v21, v22, v23);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, v24, v25, v26);
    sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v27, v28, v29);
    byte_42E78AE = 1;
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
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0LL) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v34 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
        v34 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      static_fields = v34->static_fields;
      _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v34);
          static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        }
        v37 = (Il2CppObject *)static_fields->__9;
        _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__8_0,
          v37,
          Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__,
          (const MethodInfo_258B320 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
        v38 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        v38->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v38->__9__8_0,
          (System_Int32_array **)_9__8_0,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_30;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattleFieldEnvironmentData__get_BuffData(
                                                                                         this,
                                                                                         v32);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0LL);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v45);
      return;
    }
LABEL_30:
    sub_B5D69C(backgroundList, v30);
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
    v46 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattlePerformance__get_CurrentGroundType(
                                                                                         this->fields._Perf_k__BackingField,
                                                                                         0LL);
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_30;
    v48 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(
                                      this->fields._Data_k__BackingField,
                                      0LL);
    v50 = (Generator_Background_o *)sub_B5D694(Generator_Background_TypeInfo);
    Generator_Background___ctor(v50, v46, v48, 0, ExistOverwriteBgIndividuality, 0LL);
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
                                                                                         this,
                                                                                         v50,
                                                                                         2LL,
                                                                                         this->klass->vtable._6_AddBGM.methodPtr);
  }
  else
  {
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
  }
  v51 = *p_Data_k__BackingField;
  if ( !*p_Data_k__BackingField )
    goto LABEL_30;
  overwriteBgmData_k__BackingField = v51->fields._overwriteBgmData_k__BackingField;
  if ( overwriteBgmData_k__BackingField )
  {
    BgmId_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmId_k__BackingField;
    allowSubBgmPlaying = OverwriteBattleBgmData__get_allowSubBgmPlaying(
                           v51->fields._overwriteBgmData_k__BackingField,
                           0LL);
    BgmName_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmName_k__BackingField;
    v56 = allowSubBgmPlaying;
    v57 = (Generator_BGM_o *)sub_B5D694(Generator_BGM_TypeInfo);
    Generator_BGM___ctor(v57, v51, BgmId_k__BackingField, v56, 0, BgmName_k__BackingField, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
      this,
      v57,
      2LL,
      this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
}


void __fastcall BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v30; // x21
  BattleData_o *v31; // x0
  __int64 v32; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v33; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v34; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_42E78BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData_CompareData__, v8, v9, v10);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData__SortBGM_b__55_0__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v26, v27, v28);
    byte_42E78BB = 1;
  }
  bgmList = this->fields.bgmList;
  v30 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v30,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__SortBGM_b__55_0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)v30,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v33 = this->fields.bgmList;
  v34 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v34,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_249B1FC *)Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !v33 )
    goto LABEL_9;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v33,
    (System_Comparison_T__o *)v34,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)p_CurBGM_k__BackingField,
    (System_Int32_array **)baseBgm,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v31 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v31 )
LABEL_9:
    sub_B5D69C(v31, v32);
  BattleData__SetOverrideBgmData(v31, *p_CurBGM_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SortBackGround(
        BattleFieldEnvironmentData_o *this,
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E78BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleFieldEnvironmentData_CompareData__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__, v14, v15, v16);
    byte_42E78BA = 1;
  }
  backgroundList = this->fields.backgroundList;
  v18 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_249B1FC *)Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList )
    sub_B5D69C(v19, v20);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)backgroundList,
    (System_Comparison_T__o *)v18,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_1CABD80 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._CurBackGround_k__BackingField,
    (System_Int32_array **)baseBackground,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
    sub_B5D69C(BuffData, v8);
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
    sub_B5D69C(0LL, v6);
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
    sub_B5D69C(0LL, v8);
  v9 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v9, isAddAfterTask, v10);
}


void __fastcall BattleFieldEnvironmentData__TakeOverChangeField(
        BattleFieldEnvironmentData_o *this,
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
  BattleBuffData_o *BuffData; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  BattleFieldEnvironmentData___c_c *v38; // x8
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x21
  Il2CppObject *v41; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x3
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v51; // x20
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x3
  __int64 v57; // x20
  __int64 v58; // x8
  unsigned __int64 v59; // x10
  int *v60; // x11
  __int64 v61; // x0
  __int64 v62; // x3
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  BattleBuffData_FieldChangeData_o *v69; // x21
  Generator_BGFromFieldChangeBGBuff_o *v70; // x22
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v72; // x22
  __int64 v73; // x8
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0

  if ( (byte_42E78B3 & 1) == 0 )
  {
    sub_B5D5C4(&Generator_BGFromFieldChangeBGBuff_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__45_0__, v29, v30, v31);
    sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v32, v33, v34);
    byte_42E78B3 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_47;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
  v38 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v38 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v38->static_fields;
  _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__45_0,
      v41,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__45_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__);
    v42 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v42->__9__45_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__45_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v42->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v37,
                                   (System_Func_TSource__bool__o *)_9__45_0,
                                   (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_47:
    sub_B5D69C(BuffData, v36);
  klass = BuffData->klass;
  v51 = BuffData;
  if ( *(_WORD *)&BuffData->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      ++v52;
      p_offset += 4;
      if ( v52 >= *(unsigned __int16 *)&BuffData->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v54 = sub_AF54C0(
            BuffData,
            System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo,
            0LL,
            v49);
  }
  v57 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v54)(v51, *(_QWORD *)(v54 + 8));
  if ( !v57 )
    sub_B5D69C(0LL, v55);
  while ( 1 )
  {
    v58 = *(_QWORD *)v57;
    if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
    {
      v59 = 0LL;
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v59;
        v60 += 4;
        if ( v59 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
          goto LABEL_24;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_24:
      v61 = sub_AF54C0(v57, System_Collections_IEnumerator_TypeInfo, 0LL, v56);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v63 = *(_QWORD *)v57;
    if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
    {
      v64 = 0LL;
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v65 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
          goto LABEL_31;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_31:
      v66 = sub_AF54C0(v57, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0LL, v62);
    }
    v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v57, *(_QWORD *)(v66 + 8));
    v69 = (BattleBuffData_FieldChangeData_o *)v67;
    if ( !v67 )
      sub_B5D69C(0LL, v68);
    if ( *(int *)(v67 + 24) >= 1 )
    {
      v70 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B5D694(Generator_BGFromFieldChangeBGBuff_TypeInfo);
      Generator_BGFromFieldChangeBGBuff___ctor(v70, v69, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
        this,
        v70,
        2LL,
        this->klass->vtable._6_AddBGM.methodPtr);
    }
    if ( v69->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v69->fields.bgmName, 0LL) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v72 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B5D694(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
      Generator_BGMFromFieldChangeBGBuff___ctor(v72, Data_k__BackingField, v69, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v72,
        2LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
  }
  v73 = *(_QWORD *)v57;
  if ( *(_WORD *)(*(_QWORD *)v57 + 298LL) )
  {
    v74 = 0LL;
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      ++v74;
      v75 += 4;
      if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v57 + 298LL) )
        goto LABEL_43;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_43:
    v76 = sub_AF54C0(v57, System_IDisposable_TypeInfo, 0LL, v62);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v57, *(_QWORD *)(v76 + 8));
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
    sub_B5D69C(0LL, v8);
  v9 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23360956(this, v9, 1, v10);
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
    sub_B5D69C(Perf_k__BackingField, method);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__55_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, BattleFieldEnvironmentData_o *, void *))x->klass->vtable._6_UpdateActive.method)(
    x,
    this,
    x->klass[1]._1.image);
}


BattleBuffData_o *__fastcall BattleFieldEnvironmentData__get_BuffData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_fields; // x19
  BattleBuffData_o *v6; // x20
  struct BattleBuffData_o *buffData; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E78AF & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E78AF = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  v6 = buffData;
  if ( !buffData )
  {
    v6 = (BattleBuffData_o *)sub_B5D694(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v6, 0LL);
    p_fields->klass = (BattleServantConfConponent_c *)v6;
    sub_B5D560(p_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  }
  return v6;
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__get_CurBGM(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurBGM_k__BackingField;
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
    sub_B5D69C(this, method);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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


void __fastcall BattleFieldEnvironmentData_BGMData___ctor_23707088(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._BgmData_k__BackingField,
    (System_Int32_array **)bgmData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  sub_B5D560(
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
  sub_B5D560(
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
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8
  int32_t linkBuffUid; // w8
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x9
  struct BattleFieldEnvironmentData_CommonData_o *v6; // x9
  char v7; // w8

  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_9;
  linkBuffUid = comData->fields.linkBuffUid;
  if ( (linkBuffUid & 0x80000000) != 0 )
  {
    v7 = 1;
    goto LABEL_8;
  }
  if ( !fieldEnv
    || (CurBackGround_k__BackingField = fieldEnv->fields._CurBackGround_k__BackingField) == 0LL
    || (v6 = CurBackGround_k__BackingField->fields.comData) == 0LL )
  {
LABEL_9:
    sub_B5D69C(this, fieldEnv);
  }
  v7 = linkBuffUid == v6->fields.linkBuffUid;
LABEL_8:
  this->fields.isActive = v7;
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._BgmData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_B5D69C(this, method);
  return comData->fields.grantType;
}


bool __fastcall BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_B5D69C(this, method);
  return comData->fields.linkBuffUid == -1;
}


void __fastcall BattleFieldEnvironmentData_CommonData___ctor(
        BattleFieldEnvironmentData_CommonData_o *this,
        const MethodInfo *method)
{
  this->fields.linkBuffUid = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
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


void __fastcall BattleFieldEnvironmentData_SaveData___ctor(
        BattleFieldEnvironmentData_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C2F & 1) == 0 )
  {
    sub_B5D5C4(&BattleFieldEnvironmentData___c_TypeInfo, v1, v2, v3);
    byte_42E7C2F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleFieldEnvironmentData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleFieldEnvironmentData___c___ctor(BattleFieldEnvironmentData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c___AddBGM_b__50_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___AddBackground_b__49_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BackgroundData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___ExecRemoveBuffAfterProc_b__63_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.delAfterProcType != 0;
}


bool __fastcall BattleFieldEnvironmentData___c___GetFieldIndividuality_b__46_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0LL);
  x->fields.bgmSaveData = v4;
  sub_B5D560((BattleServantConfConponent_o *)&x->fields.bgmSaveData, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__42_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B5D69C(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__42_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B5D69C(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B5D69C(this, 0LL);
  return bgm->fields.isAfterReset;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__51_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B5D69C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))bgm->klass->vtable._5_get_IsTargetBase.method)(
           bgm,
           bgm->klass->vtable._6_UpdateActive.methodPtr);
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
    sub_B5D69C(this, 0LL);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0LL);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&x->fields._BgmData_k__BackingField,
    (System_Int32_array **)InstanceFromSaveData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverChangeField_b__45_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_FieldChangeData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.isTakeOverNextWave;
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass52_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass52_0___RemoveRelateBuff_b__0(
        BattleFieldEnvironmentData___c__DisplayClass52_0_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B5D69C(this, x);
  return comData->fields.linkBuffUid == this->fields.buffUid;
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass52_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass52_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B5D69C(this, x);
  return comData->fields.linkBuffUid == this->fields.buffUid;
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass63_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass63_0___ExecRemoveBuffAfterProc_b__1(
        BattleFieldEnvironmentData___c__DisplayClass63_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, x);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23361616(_4__this, x, this->fields.isAddAfterTask, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass68_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleFieldEnvironmentData___c__DisplayClass68_0___GetIndividualityExceptDelTarget_b__0(
        BattleFieldEnvironmentData___c__DisplayClass68_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *subList; // x0

  if ( (byte_42E7C30 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, x, (_DWORD)method, v3);
    byte_42E7C30 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_B5D69C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
}