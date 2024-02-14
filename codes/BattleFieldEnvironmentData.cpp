void __fastcall BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct BattlePerformance_o *perf; // x1
  struct BattlePerformance_o **p_Perf_k__BackingField; // x20
  System_Int32_array **logic; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  if ( (byte_4213555 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__, data);
    sub_B0D8A4(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v11);
    byte_4213555 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                                                                  data,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.backgroundList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.bgmList,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.addOrder = 1;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v30;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.addTaskList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v39 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B0D974(
                                                                                                System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo,
                                                                                                v37,
                                                                                                v38);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v39,
    (const MethodInfo_2C77374 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v39;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.hashDelType,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Data_k__BackingField = data;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)data,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( !data )
    sub_B0D97C(v52);
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  p_Perf_k__BackingField = &this->fields._Perf_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_Perf_k__BackingField,
    (System_Int32_array **)perf,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  logic = (System_Int32_array **)data->fields.logic;
  p_Perf_k__BackingField[1] = (struct BattlePerformance_o *)logic;
  sub_B0D840((BattleServantConfConponent_o *)(p_Perf_k__BackingField + 1), logic, v62, v63, v64, v65, v66, v67);
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__AddBGM(
        BattleFieldEnvironmentData_o *this,
        Generator_BGM_o *bgmGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 addOrder; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *bgmList; // x21
  void *CurBackGround_k__BackingField; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x22
  Il2CppObject *v19; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1

  v6 = this;
  if ( (byte_421355C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, bgmGenerator);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__AddBGM_b__50_0__, v10);
    this = (BattleFieldEnvironmentData_o *)sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_421355C = 1;
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
  v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
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
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)CurBackGround_k__BackingField + 8);
  if ( !v18 )
  {
    if ( (BYTE3(this[2].fields._CurBGM_k__BackingField) & 4) != 0 && !LODWORD(this[1].fields.questPhaseIndividuality) )
    {
      j_il2cpp_runtime_class_init_0(this);
      CurBackGround_k__BackingField = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v19 = *(Il2CppObject **)CurBackGround_k__BackingField;
    v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                     v14,
                                                                     v15);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v18,
      v19,
      Method_BattleFieldEnvironmentData___c__AddBGM_b__50_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)v18;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->__9__50_0,
      (System_Int32_array **)v18,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !bgmList )
LABEL_18:
    sub_B0D97C(this);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)v18,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
LABEL_16:
  this = (BattleFieldEnvironmentData_o *)v6->fields.bgmList;
  if ( !this )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    v13,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
  BattleFieldEnvironmentData__SortBGM(v6, v27);
  return v6->fields._CurBGM_k__BackingField;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__AddBackground(
        BattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 addOrder; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *backgroundList; // x21
  void *CurBackGround_k__BackingField; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x22
  Il2CppObject *v19; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1

  v6 = this;
  if ( (byte_421355B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__, bgGenerator);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__AddBackground_b__49_0__, v10);
    this = (BattleFieldEnvironmentData_o *)sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_421355B = 1;
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
  v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)this;
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
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)CurBackGround_k__BackingField + 7);
  if ( !v18 )
  {
    if ( (BYTE3(this[2].fields._CurBGM_k__BackingField) & 4) != 0 && !LODWORD(this[1].fields.questPhaseIndividuality) )
    {
      j_il2cpp_runtime_class_init_0(this);
      CurBackGround_k__BackingField = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v19 = *(Il2CppObject **)CurBackGround_k__BackingField;
    v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                                     v14,
                                                                     v15);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v18,
      v19,
      Method_BattleFieldEnvironmentData___c__AddBackground_b__49_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v18;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->__9__49_0,
      (System_Int32_array **)v18,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !backgroundList )
LABEL_18:
    sub_B0D97C(this);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    backgroundList,
    (System_Predicate_T__o *)v18,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
LABEL_16:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    v13,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
  BattleFieldEnvironmentData__SortBackGround(v6, v27);
  BattleFieldEnvironmentData__SortBGM(v6, v28);
  return v6->fields._CurBackGround_k__BackingField;
}


void __fastcall BattleFieldEnvironmentData__AddFieldBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool unFixBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buff);
  if ( !BuffData )
    sub_B0D97C(0LL);
  BattleBuffData__addBuff(BuffData, buff, 1, unFixBuff, 0LL);
}


void __fastcall BattleFieldEnvironmentData__AddLastInterruptTasks(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *addTaskList; // x0

  if ( (byte_4213562 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__, logic);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    byte_4213562 = 1;
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
                                                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0LL);
        addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.addTaskList;
        if ( addTaskList )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)addTaskList,
            (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
          addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___Clear(
              (System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)addTaskList,
              (const MethodInfo_2C7798C *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_14:
      sub_B0D97C(addTaskList);
    }
  }
}


void __fastcall BattleFieldEnvironmentData__AddRemoveProcTask(
        BattleFieldEnvironmentData_o *this,
        BattleLogicTask_o *task,
        int32_t addType,
        bool isNotDuplicated,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *hashDelType; // x0

  if ( (byte_4213563 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__, task);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    byte_4213563 = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_9;
    if ( System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
           hashDelType,
           addType,
           (const MethodInfo_2C779F8 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
          hashDelType,
          addType,
          (const MethodInfo_2C78550 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.addTaskList) == 0LL) )
  {
LABEL_9:
    sub_B0D97C(hashDelType);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)hashDelType,
    (EventMissionProgressRequest_Argument_ProgressData_o *)task,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateViewTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UpdateFieldViewBattleLogicTask_o *v4; // x20
  const MethodInfo *v5; // x4

  if ( (byte_4213568 & 1) == 0 )
  {
    sub_B0D8A4(&UpdateFieldViewBattleLogicTask_TypeInfo, method);
    byte_4213568 = 1;
  }
  v4 = (UpdateFieldViewBattleLogicTask_o *)sub_B0D974(UpdateFieldViewBattleLogicTask_TypeInfo, method, v2);
  UpdateFieldViewBattleLogicTask___ctor(v4, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v4, 2, 1, v5);
}


bool __fastcall BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_20798680; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  System_Int32_array *BuffIndividualities; // x0

  Individualities_20798680 = buffIndiv;
  if ( opSvt )
    Individualities_20798680 = BattleServantData__getIndividualities_20798680(opSvt, buffIndiv, 0LL);
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
    sub_B0D97C(v8);
  }
  return BattleBuffData__checkActBuff(BuffData, 105, (System_Int32_array *)v8, Individualities_20798680, 0LL);
}


void __fastcall BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v4; // x1
  const MethodInfo *v5; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_B0D97C(0LL);
  v4 = BattleBuffData__usedProgressing(BuffData, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v4, 1, v5);
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
    sub_B0D97C(this);
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
  if ( (byte_4213564 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_B0D8A4(
                                             &Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__,
                                             removeBuffInfo);
    byte_4213564 = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
    sub_B0D97C(this);
  }
  v7 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22250916(v6, v7, isAddAfterTask, v8);
  return removeBuffInfo;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22250916(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  BattleFieldEnvironmentData___c_c *v26; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__63_0; // x22
  Il2CppObject *v29; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_T__o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x22
  const MethodInfo *v41; // x1

  if ( (byte_4213565 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData_BuffData___ctor__, removeBuffArray);
    sub_B0D8A4(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__63_0__, v12);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__DisplayClass63_0__ExecRemoveBuffAfterProc_b__1__, v13);
    sub_B0D8A4(&BattleFieldEnvironmentData___c__DisplayClass63_0_TypeInfo, v14);
    sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v15);
    byte_4213565 = 1;
  }
  v16 = sub_B0D974(BattleFieldEnvironmentData___c__DisplayClass63_0_TypeInfo, removeBuffArray, isAddAfterTask);
  BattleFieldEnvironmentData___c__DisplayClass63_0___ctor(
    (BattleFieldEnvironmentData___c__DisplayClass63_0_o *)v16,
    0LL);
  if ( !v16 )
    sub_B0D97C(v17);
  *(_QWORD *)(v16 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v16 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0LL) )
  {
    v26 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v26 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__63_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                      v24,
                                                                                      v25);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__63_0,
        v29,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__63_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v30 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v30->__9__63_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__63_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v30->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__63_0,
                                                           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                 v38,
                                                                                 v39);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v40,
      (Il2CppObject *)v16,
      Method_BattleFieldEnvironmentData___c__DisplayClass63_0__ExecRemoveBuffAfterProc_b__1__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v37,
      (System_Action_T__o *)v40,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v41);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22251576(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_B0D97C(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  const MethodInfo *v8; // x1
  void *BuffData; // x0
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w21
  __int64 v13; // x23
  __int64 v15; // x0

  if ( (byte_421355A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_421355A = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v8);
  if ( !BuffData )
    goto LABEL_15;
  BuffData = BattleBuffData__GetFieldChangeArray((BattleBuffData_o *)BuffData, 0LL);
  if ( !BuffData )
    goto LABEL_15;
  v10 = *((_DWORD *)BuffData + 6);
  v11 = BuffData;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v15 = sub_B0D9A8(BuffData);
        sub_B0D948(v15, 0LL);
      }
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      if ( !v13 )
        break;
      BuffData = (void *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 56), 0LL);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v7,
          *(System_Collections_Generic_IEnumerable_T__o **)(v13 + 56),
          (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B0D97C(BuffData);
  }
LABEL_13:
  if ( !v7 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetCommonFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x21
  System_Int32_array *IsNullOrEmpty; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4213569 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, individuality);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4213569 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   individuality,
                                                   addIndiv);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)individuality,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v11);
    if ( !v9 )
LABEL_11:
      sub_B0D97C(IsNullOrEmpty);
  }
  else
  {
    if ( !v9 )
      goto LABEL_11;
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v12);
  }
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v9, v13);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x21
  BattleFieldEnvironmentData___c_c *v10; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__46_0; // x22
  Il2CppObject *v13; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  void *baseBackground; // x0
  const MethodInfo *v22; // x3
  System_Int32_array *QuestPhaseIndividuality; // x1

  if ( (byte_4213559 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____67989240,
      addIndiv);
    sub_B0D8A4(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__46_0__, v7);
    sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v8);
    byte_4213559 = 1;
  }
  backgroundList = this->fields.backgroundList;
  v10 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v10 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo,
                                                                                    addIndiv,
                                                                                    method);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__46_0,
      v13,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__46_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v14 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v14->__9__46_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__46_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__46_0,
      (System_Int32_array **)_9__46_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  baseBackground = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                     (System_Func_TSource__bool__o *)_9__46_0,
                     (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____67989240);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  if ( !baseBackground )
    sub_B0D97C(0LL);
  QuestPhaseIndividuality = (System_Int32_array *)*((_QWORD *)baseBackground + 5);
  if ( !QuestPhaseIndividuality )
    QuestPhaseIndividuality = BattleFieldEnvironmentData__GetQuestPhaseIndividuality(this, 0LL);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, QuestPhaseIndividuality, addIndiv, v22);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  const MethodInfo *v13; // x1
  BattleBuffData_o *BuffData; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_int__o **v21; // x22
  System_Collections_Generic_List_int__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Predicate_int__o *v25; // x20

  if ( (byte_4213567 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, individualityList);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__RemoveAll__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v8);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__DisplayClass68_0__GetIndividualityExceptDelTarget_b__0__, v10);
    sub_B0D8A4(&BattleFieldEnvironmentData___c__DisplayClass68_0_TypeInfo, v11);
    byte_4213567 = 1;
  }
  v12 = sub_B0D974(BattleFieldEnvironmentData___c__DisplayClass68_0_TypeInfo, individualityList, method);
  BattleFieldEnvironmentData___c__DisplayClass68_0___ctor(
    (BattleFieldEnvironmentData___c__DisplayClass68_0_o *)v12,
    0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v13);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0LL, 0LL, 1, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = BuffData;
  v21 = (System_Collections_Generic_List_int__o **)(v12 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)BuffData, v15, v16, v17, v18, v19, v20);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v22 = *v21;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0LL);
  if ( !v22 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v21 )
    goto LABEL_13;
  if ( (*v21)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_B0D97C(BuffData);
  }
  v25 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v23, v24);
  System_Predicate_int____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_BattleFieldEnvironmentData___c__DisplayClass68_0__GetIndividualityExceptDelTarget_b__0__,
    (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v25,
    (const MethodInfo_2FB1A24 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_B0D97C(0LL);
    PrioredIndividuality = (System_Int32_array **)BattleData__GetPrioredIndividuality(Data_k__BackingField, 0LL);
    p_questPhaseIndividuality->klass = (BattleServantConfConponent_c *)PrioredIndividuality;
    sub_B0D840(p_questPhaseIndividuality, PrioredIndividuality, v7, v8, v9, v10, v11, v12);
    return (System_Int32_array *)p_questPhaseIndividuality->klass;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
FieldBuffDeleteProcess_o *__fastcall BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        int32_t delAfterProcType,
        const MethodInfo *method)
{
  FieldChangeBuffDeleteProcess_o *v4; // x19

  if ( (byte_4213566 & 1) == 0 )
  {
    sub_B0D8A4(&FieldChangeBuffDeleteProcess_TypeInfo, *(_QWORD *)&delAfterProcType);
    byte_4213566 = 1;
  }
  if ( delAfterProcType != 1 )
    return 0LL;
  v4 = (FieldChangeBuffDeleteProcess_o *)sub_B0D974(
                                           FieldChangeBuffDeleteProcess_TypeInfo,
                                           *(_QWORD *)&delAfterProcType,
                                           method);
  FieldChangeBuffDeleteProcess___ctor(v4, 0LL);
  return (FieldBuffDeleteProcess_o *)v4;
}


BattleFieldEnvironmentData_SaveData_o *__fastcall BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  void *backgroundList; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__7_0; // x21
  Il2CppObject *v15; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_4213552 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__, v7);
    sub_B0D8A4(&BattleFieldEnvironmentData_SaveData_TypeInfo, v8);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, v9);
    sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v10);
    byte_4213552 = 1;
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__7_0,
      v15,
      Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
    v16 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v16->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__7_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v16->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !bgmList )
    goto LABEL_17;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v25 = sub_B0D974(BattleFieldEnvironmentData_SaveData_TypeInfo, v23, v24);
  BattleFieldEnvironmentData_SaveData___ctor((BattleFieldEnvironmentData_SaveData_o *)v25, 0LL);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_17;
  backgroundList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                     (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v25
    || (*(_QWORD *)(v25 + 16) = backgroundList,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v25 + 16),
          (System_Int32_array **)backgroundList,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        (backgroundList = this->fields.bgmList) == 0LL)
    || (v32 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v25 + 24) = v32,
        sub_B0D840((BattleServantConfConponent_o *)(v25 + 24), v32, v33, v34, v35, v36, v37, v38),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v39)) == 0LL) )
  {
LABEL_17:
    sub_B0D97C(backgroundList);
  }
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0LL);
  *(_QWORD *)(v25 + 32) = SaveData;
  sub_B0D840((BattleServantConfConponent_o *)(v25 + 32), SaveData, v41, v42, v43, v44, v45, v46);
  result = (BattleFieldEnvironmentData_SaveData_o *)v25;
  *(_DWORD *)(v25 + 40) = this->fields.addOrder;
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
  BattleData_o *Data_k__BackingField; // x20
  StageEntity_o *StageEntity; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  Generator_BGFromQuestPhase_o *v18; // x22
  StageEntity_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  Generator_BGFromStage_o *v22; // x21
  BattleData_o *v23; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  __int64 v26; // x1
  __int64 v27; // x2
  Generator_BGM_o *v28; // x23
  __int64 v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_IEnumerable_TSource__o *backgroundList; // x20
  BattleFieldEnvironmentData___c_c *v32; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_0; // x21
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
  __int64 v50; // x1
  __int64 v51; // x2
  BattleFieldEnvironmentData___c_c *v52; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v54; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_1; // x21
  Il2CppObject *v56; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7

  v2 = this;
  if ( (byte_4213556 & 1) == 0 )
  {
    sub_B0D8A4(&Generator_BGFromQuestPhase_TypeInfo, method);
    sub_B0D8A4(&Generator_BGFromStage_TypeInfo, v3);
    sub_B0D8A4(&Generator_BGM_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____67989232, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____67989240, v6);
    sub_B0D8A4(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v9);
    sub_B0D8A4(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__InitStageField_b__42_0__, v11);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__InitStageField_b__42_1__, v12);
    this = (BattleFieldEnvironmentData_o *)sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v13);
    byte_4213556 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v2->fields._Data_k__BackingField, 0LL),
        v18 = (Generator_BGFromQuestPhase_o *)sub_B0D974(Generator_BGFromQuestPhase_TypeInfo, v16, v17),
        Generator_BGFromQuestPhase___ctor(v18, Data_k__BackingField, StageEntity, 0LL),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
          v2,
          v18,
          1LL,
          v2->klass->vtable._6_AddBGM.methodPtr),
        (this = (BattleFieldEnvironmentData_o *)v2->fields._Data_k__BackingField) == 0LL)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
    sub_B0D97C(this);
  }
  v19 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0LL) >= 1 )
  {
    v22 = (Generator_BGFromStage_o *)sub_B0D974(Generator_BGFromStage_TypeInfo, v20, v21);
    Generator_BGFromStage___ctor(v22, v19, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
      v2,
      v22,
      1LL,
      v2->klass->vtable._6_AddBGM.methodPtr);
  }
  v23 = v2->fields._Data_k__BackingField;
  bgmId = v19->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v19, 0, 0LL);
  v28 = (Generator_BGM_o *)sub_B0D974(Generator_BGM_TypeInfo, v26, v27);
  Generator_BGM___ctor(v28, v23, bgmId, 0, PriorityBgm, 0LL, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._6_AddBGM.method)(
    v2,
    v28,
    1LL,
    v2->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  backgroundList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.backgroundList;
  v32 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v32 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo,
                                                                                    v29,
                                                                                    v30);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_0,
      v35,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__42_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v36 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v36->__9__42_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__42_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v36->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 backgroundList,
                                 (System_Func_TSource__bool__o *)_9__42_0,
                                 (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____67989240);
  v2->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v43;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.baseBackground, v43, v44, v45, v46, v47, v48, v49);
  v52 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v52 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v54 = v52->static_fields;
  _9__42_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v54->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v54 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__42_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                                                    v50,
                                                                                    v51);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_1,
      v56,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__42_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v57 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v57->__9__42_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__42_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v57->__9__42_1,
      (System_Int32_array **)_9__42_1,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  v64 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 bgmList,
                                 (System_Func_TSource__bool__o *)_9__42_1,
                                 (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____67989232);
  v2->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v64;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.baseBgm, v64, v65, v66, v67, v68, v69, v70);
}


bool __fastcall BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B0D97C(this);
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
  WebViewManager_o *Instance; // x0
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_4213561 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, method);
    byte_4213561 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_B0D97C(Instance);
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  void *v14; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v17; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  BattleFieldEnvironmentData___c_c *v27; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v28; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v29; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__51_1; // x21
  Il2CppObject *v31; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  const MethodInfo *v39; // x1

  if ( (byte_421355D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___, method);
    sub_B0D8A4(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v7);
    sub_B0D8A4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v8);
    sub_B0D8A4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_0__, v10);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_1__, v11);
    sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v12);
    byte_421355D = 1;
  }
  bgmList = this->fields.bgmList;
  v14 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v14 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = (struct BattleFieldEnvironmentData___c_StaticFields *)*((_QWORD *)v14 + 23);
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (*((_BYTE *)v14 + 307) & 4) != 0 && !*((_DWORD *)v14 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                          method,
                                                                          v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v17,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    v18 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v18->__9__51_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__51_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !bgmList )
    goto LABEL_24;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
    (System_Predicate_T__o *)_9__51_0,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v27 = BattleFieldEnvironmentData___c_TypeInfo;
  v28 = this->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v27 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v29 = v27->static_fields;
  _9__51_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v29->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v29 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__51_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                                                    v25,
                                                                                    v26);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__51_1,
      v31,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v32 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v32->__9__51_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__51_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v32->__9__51_1,
      (System_Int32_array **)_9__51_1,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  if ( System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v28,
         (System_Func_TSource__bool__o *)_9__51_1,
         (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v14 = this->fields.bgmList;
    if ( v14 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.baseBgm,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
      goto LABEL_23;
    }
LABEL_24:
    sub_B0D97C(v14);
  }
LABEL_23:
  BattleFieldEnvironmentData__SortBGM(this, v39);
  return this->fields._CurBGM_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__RemoveRelateBuff(
        BattleFieldEnvironmentData_o *this,
        int32_t buffUid,
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
  BattleFieldEnvironmentData___c__DisplayClass52_0_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x22
  int32_t v19; // w0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x22
  int32_t v21; // w20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x23
  const MethodInfo *v25; // x2

  if ( (byte_421355E & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__,
      *(_QWORD *)&buffUid);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, v5);
    sub_B0D8A4(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v6);
    sub_B0D8A4(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__, v7);
    sub_B0D8A4(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v8);
    sub_B0D8A4(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__0__, v10);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__1__, v11);
    sub_B0D8A4(&BattleFieldEnvironmentData___c__DisplayClass52_0_TypeInfo, v12);
    byte_421355E = 1;
  }
  v13 = (BattleFieldEnvironmentData___c__DisplayClass52_0_o *)sub_B0D974(
                                                                BattleFieldEnvironmentData___c__DisplayClass52_0_TypeInfo,
                                                                *(_QWORD *)&buffUid,
                                                                method);
  BattleFieldEnvironmentData___c__DisplayClass52_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.buffUid = buffUid;
  backgroundList = this->fields.backgroundList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                                   v15,
                                                                   v16);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList
    || (v19 = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)backgroundList,
                (System_Predicate_T__o *)v18,
                (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = this->fields.bgmList,
        v21 = v19,
        v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                         v22,
                                                                         v23),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v24,
          (Il2CppObject *)v13,
          Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__1__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__),
        !bgmList) )
  {
LABEL_9:
    sub_B0D97C(v14);
  }
  if ( System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
         (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
         (System_Predicate_T__o *)v24,
         (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v21 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v25);
}


void __fastcall BattleFieldEnvironmentData__ResetFieldInfo(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *backgroundList; // x0

  if ( (byte_4213557 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__, v3);
    byte_4213557 = 1;
  }
  backgroundList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.backgroundList;
  if ( !backgroundList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          backgroundList,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__),
        (backgroundList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList) == 0LL) )
  {
    sub_B0D97C(backgroundList);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    backgroundList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
}


void __fastcall BattleFieldEnvironmentData__SetSaveData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_SaveData_o *sv,
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
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *backgroundList; // x0
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v17; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__8_0; // x22
  Il2CppObject *v20; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  int32_t v29; // w20
  struct BattleData_o **p_Data_k__BackingField; // x24
  int32_t v31; // w21
  bool ExistOverwriteBgIndividuality; // w22
  __int64 v33; // x1
  __int64 v34; // x2
  Generator_Background_o *v35; // x23
  BattleData_o *v36; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v41; // w23
  __int64 v42; // x1
  __int64 v43; // x2
  Generator_BGM_o *v44; // x24

  if ( (byte_4213553 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, sv);
    sub_B0D8A4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v5);
    sub_B0D8A4(&Generator_BGM_TypeInfo, v6);
    sub_B0D8A4(&Generator_Background_TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__, v10);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, v11);
    sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v12);
    byte_4213553 = 1;
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
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0LL) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v17 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
        v17 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      static_fields = v17->static_fields;
      _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        }
        v20 = (Il2CppObject *)static_fields->__9;
        _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                         System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                                         v14,
                                                                                         v15);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__8_0,
          v20,
          Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__,
          (const MethodInfo_246EA3C *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
        v21 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        v21->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v21->__9__8_0,
          (System_Int32_array **)_9__8_0,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_30;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattleFieldEnvironmentData__get_BuffData(
                                                                                         this,
                                                                                         v14);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0LL);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v28);
      return;
    }
LABEL_30:
    sub_B0D97C(backgroundList);
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
    v29 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattlePerformance__get_CurrentGroundType(
                                                                                         this->fields._Perf_k__BackingField,
                                                                                         0LL);
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_30;
    v31 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(
                                      this->fields._Data_k__BackingField,
                                      0LL);
    v35 = (Generator_Background_o *)sub_B0D974(Generator_Background_TypeInfo, v33, v34);
    Generator_Background___ctor(v35, v29, v31, 0, ExistOverwriteBgIndividuality, 0LL);
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
                                                                                         this,
                                                                                         v35,
                                                                                         2LL,
                                                                                         this->klass->vtable._6_AddBGM.methodPtr);
  }
  else
  {
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
  }
  v36 = *p_Data_k__BackingField;
  if ( !*p_Data_k__BackingField )
    goto LABEL_30;
  overwriteBgmData_k__BackingField = v36->fields._overwriteBgmData_k__BackingField;
  if ( overwriteBgmData_k__BackingField )
  {
    BgmId_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmId_k__BackingField;
    allowSubBgmPlaying = OverwriteBattleBgmData__get_allowSubBgmPlaying(
                           v36->fields._overwriteBgmData_k__BackingField,
                           0LL);
    BgmName_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmName_k__BackingField;
    v41 = allowSubBgmPlaying;
    v44 = (Generator_BGM_o *)sub_B0D974(Generator_BGM_TypeInfo, v42, v43);
    Generator_BGM___ctor(v44, v36, BgmId_k__BackingField, v41, 0, BgmName_k__BackingField, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
      this,
      v44,
      2LL,
      this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
}


void __fastcall BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x21
  BattleData_o *v14; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v18; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_4213560 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v4);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData_CompareData__, v5);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData__SortBGM_b__55_0__, v6);
    sub_B0D8A4(&Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__, v7);
    sub_B0D8A4(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v11);
    byte_4213560 = 1;
  }
  bgmList = this->fields.bgmList;
  v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                               method,
                                                                               v2);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__SortBGM_b__55_0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)v13,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v15 = this->fields.bgmList;
  v18 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                    System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                    v16,
                                                                    v17);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_2412E90 *)Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !v15 )
    goto LABEL_9;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)v18,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_CurBGM_k__BackingField,
    (System_Int32_array **)baseBgm,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v14 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v14 )
LABEL_9:
    sub_B0D97C(v14);
  BattleData__SetOverrideBgmData(v14, *p_CurBGM_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SortBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v9; // x21
  __int64 v10; // x0
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_421355F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleFieldEnvironmentData_CompareData__, method);
    sub_B0D8A4(&Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__, v4);
    sub_B0D8A4(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__, v7);
    byte_421355F = 1;
  }
  backgroundList = this->fields.backgroundList;
  v9 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                   System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                                   method,
                                                                   v2);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_2412E90 *)Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList )
    sub_B0D97C(v10);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)backgroundList,
    (System_Comparison_T__o *)v9,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_1B4B938 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._CurBackGround_k__BackingField,
    (System_Int32_array **)baseBackground,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  BattleBuffData_o *v8; // x21
  int32_t Value; // w22
  int32_t Value2; // w24
  RemovedBuffInfo_o *v11; // x1
  const MethodInfo *v12; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)individuality);
  if ( !baseVals
    || (v8 = BuffData,
        Value = DataVals__GetValue(baseVals, 0LL),
        Value2 = DataVals__GetValue2(baseVals, 0LL),
        BuffData = (BattleBuffData_o *)DataVals__isParam(baseVals, 89, 0LL),
        !v8) )
  {
    sub_B0D97C(BuffData);
  }
  v11 = BattleBuffData__subBuffFromIndividualites(
          v8,
          individuality,
          Value,
          Value2,
          1,
          (unsigned __int8)BuffData & 1,
          0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v11, 1, v12);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
        BattleFieldEnvironmentData_o *this,
        int32_t deadActorId,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v6; // x1
  const MethodInfo *v7; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&deadActorId);
  if ( !BuffData )
    sub_B0D97C(0LL);
  v6 = BattleBuffData__SubBuffFromDeadActorId(BuffData, deadActorId, 0, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v6, 1, v7);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromType(
        BattleFieldEnvironmentData_o *this,
        int32_t buffId,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v8; // x0
  const MethodInfo *v9; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&buffId);
  if ( !BuffData )
    sub_B0D97C(0LL);
  v8 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v8, isAddAfterTask, v9);
}


void __fastcall BattleFieldEnvironmentData__TakeOverChangeField(
        BattleFieldEnvironmentData_o *this,
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
  BattleBuffData_o *BuffData; // x0

  if ( (byte_4213558 & 1) == 0 )
  {
    sub_B0D8A4(&Generator_BGFromFieldChangeBGBuff_TypeInfo, method);
    sub_B0D8A4(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___, v4);
    sub_B0D8A4(&Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__45_0__, v11);
    sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v12);
    byte_4213558 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( BuffData )
  {
    BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
    JUMPOUT(0x1538DF0LL);
  }
  sub_B0D97C(0LL);
}


void __fastcall BattleFieldEnvironmentData__TurnProgressing(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_BuffData_array *v8; // x1
  const MethodInfo *v9; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)logic);
  if ( !BuffData )
    sub_B0D97C(0LL);
  v8 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22250916(this, v8, 1, v9);
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
    sub_B0D97C(Perf_k__BackingField);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__55_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  ((void (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, BattleFieldEnvironmentData_o *, void *))x->klass->vtable._6_UpdateActive.method)(
    x,
    this,
    x->klass[1]._1.image);
}


BattleBuffData_o *__fastcall BattleFieldEnvironmentData__get_BuffData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantConfConponent_o *p_fields; // x19
  BattleBuffData_o *v5; // x20
  struct BattleBuffData_o *buffData; // t1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4213554 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffData_TypeInfo, method);
    byte_4213554 = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  v5 = buffData;
  if ( !buffData )
  {
    v5 = (BattleBuffData_o *)sub_B0D974(BattleBuffData_TypeInfo, method, v2);
    BattleBuffData___ctor(v5, 0LL);
    p_fields->klass = (BattleServantConfConponent_c *)v5;
    sub_B0D840(p_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  }
  return v5;
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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


void __fastcall BattleFieldEnvironmentData_BGMData___ctor_22791472(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
    sub_B0D97C(this);
  return comData->fields.grantType;
}


bool __fastcall BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_B0D97C(this);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213904 & 1) == 0 )
  {
    sub_B0D8A4(&BattleFieldEnvironmentData___c_TypeInfo, v1);
    byte_4213904 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleFieldEnvironmentData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.delAfterProcType != 0;
}


bool __fastcall BattleFieldEnvironmentData___c___GetFieldIndividuality_b__46_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0LL);
  x->fields.bgmSaveData = v4;
  sub_B0D840((BattleServantConfConponent_o *)&x->fields.bgmSaveData, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__42_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B0D97C(this);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__42_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B0D97C(this);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B0D97C(this);
  return bgm->fields.isAfterReset;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__51_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0LL);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_B0D840(
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return comData->fields.linkBuffUid == this->fields.buffUid;
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass52_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass52_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_22251576(_4__this, x, this->fields.isAddAfterTask, 0LL);
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
  System_Collections_Generic_List_int__o *subList; // x0

  if ( (byte_4213905 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&x);
    byte_4213905 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
}