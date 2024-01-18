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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x0
  __int64 v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct BattlePerformance_o *perf; // x1
  struct BattlePerformance_o **p_Perf_k__BackingField; // x20
  System_Int32_array **logic; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_418692C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__, data);
    sub_B2C35C(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v11);
    byte_418692C = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.backgroundList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgmList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.addOrder = 1;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.addTaskList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B2C42C(System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v33,
    (const MethodInfo_2D873F8 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v33;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.hashDelType,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Data_k__BackingField = data;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)data,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !data )
    sub_B2C434(v46, v47);
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  p_Perf_k__BackingField = &this->fields._Perf_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_Perf_k__BackingField,
    (System_Int32_array **)perf,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  logic = (System_Int32_array **)data->fields.logic;
  p_Perf_k__BackingField[1] = (struct BattlePerformance_o *)logic;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_Perf_k__BackingField + 1), logic, v57, v58, v59, v60, v61, v62);
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
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *bgmList; // x21
  void *CurBackGround_k__BackingField; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x22
  Il2CppObject *v17; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1

  v6 = this;
  if ( (byte_4186933 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, bgmGenerator);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v7);
    sub_B2C35C(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v8);
    sub_B2C35C(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v9);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__AddBGM_b__50_0__, v10);
    this = (BattleFieldEnvironmentData_o *)sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_4186933 = 1;
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
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)CurBackGround_k__BackingField + 8);
  if ( !v16 )
  {
    if ( (BYTE3(this[2].fields._CurBGM_k__BackingField) & 4) != 0 && !LODWORD(this[1].fields.questPhaseIndividuality) )
    {
      j_il2cpp_runtime_class_init_0(this);
      CurBackGround_k__BackingField = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v17 = *(Il2CppObject **)CurBackGround_k__BackingField;
    v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v16,
      v17,
      Method_BattleFieldEnvironmentData___c__AddBGM_b__50_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)v16;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->__9__50_0,
      (System_Int32_array **)v16,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !bgmList )
LABEL_18:
    sub_B2C434(this, addOrder);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)v16,
    (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
LABEL_16:
  this = (BattleFieldEnvironmentData_o *)v6->fields.bgmList;
  if ( !this )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    v13,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
  BattleFieldEnvironmentData__SortBGM(v6, v25);
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
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *backgroundList; // x21
  void *CurBackGround_k__BackingField; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x22
  Il2CppObject *v17; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  v6 = this;
  if ( (byte_4186932 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__, bgGenerator);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, v7);
    sub_B2C35C(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__, v8);
    sub_B2C35C(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v9);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__AddBackground_b__49_0__, v10);
    this = (BattleFieldEnvironmentData_o *)sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_4186932 = 1;
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
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)CurBackGround_k__BackingField + 7);
  if ( !v16 )
  {
    if ( (BYTE3(this[2].fields._CurBGM_k__BackingField) & 4) != 0 && !LODWORD(this[1].fields.questPhaseIndividuality) )
    {
      j_il2cpp_runtime_class_init_0(this);
      CurBackGround_k__BackingField = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v17 = *(Il2CppObject **)CurBackGround_k__BackingField;
    v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v16,
      v17,
      Method_BattleFieldEnvironmentData___c__AddBackground_b__49_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v16;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->__9__49_0,
      (System_Int32_array **)v16,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !backgroundList )
LABEL_18:
    sub_B2C434(this, addOrder);
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    backgroundList,
    (System_Predicate_T__o *)v16,
    (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
LABEL_16:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    v13,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
  BattleFieldEnvironmentData__SortBackGround(v6, v25);
  BattleFieldEnvironmentData__SortBGM(v6, v26);
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
    sub_B2C434(0LL, v7);
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
  __int64 v9; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *addTaskList; // x0

  if ( (byte_4186939 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__, logic);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4186939 = 1;
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
                                                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0LL);
        addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.addTaskList;
        if ( addTaskList )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)addTaskList,
            (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
          addTaskList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___Clear(
              (System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)addTaskList,
              (const MethodInfo_2D87A10 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_14:
      sub_B2C434(addTaskList, v9);
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

  if ( (byte_418693A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__, task);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    byte_418693A = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_9;
    if ( System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
           hashDelType,
           addType,
           (const MethodInfo_2D87A7C *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
          hashDelType,
          addType,
          (const MethodInfo_2D885D4 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)this->fields.addTaskList) == 0LL) )
  {
LABEL_9:
    sub_B2C434(hashDelType, task);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)hashDelType,
    (EventMissionProgressRequest_Argument_ProgressData_o *)task,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateViewTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  UpdateFieldViewBattleLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_418693F & 1) == 0 )
  {
    sub_B2C35C(&UpdateFieldViewBattleLogicTask_TypeInfo, method);
    byte_418693F = 1;
  }
  v3 = (UpdateFieldViewBattleLogicTask_o *)sub_B2C42C(UpdateFieldViewBattleLogicTask_TypeInfo);
  UpdateFieldViewBattleLogicTask___ctor(v3, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 2, 1, v4);
}


bool __fastcall BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_21310616; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  __int64 v9; // x1
  System_Int32_array *BuffIndividualities; // x0

  Individualities_21310616 = buffIndiv;
  if ( opSvt )
    Individualities_21310616 = BattleServantData__getIndividualities_21310616(opSvt, buffIndiv, 0LL);
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
    sub_B2C434(v8, v9);
  }
  return BattleBuffData__checkActBuff(BuffData, 105, (System_Int32_array *)v8, Individualities_21310616, 0LL);
}


void __fastcall BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  RemovedBuffInfo_o *v5; // x1
  const MethodInfo *v6; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_B2C434(0LL, v4);
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
    sub_B2C434(this, a);
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
  if ( (byte_418693B & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_B2C35C(
                                             &Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__,
                                             removeBuffInfo);
    byte_418693B = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
    sub_B2C434(this, removeBuffInfo);
  }
  v7 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23086596(v6, v7, isAddAfterTask, v8);
  return removeBuffInfo;
}


void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23086596(
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
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleFieldEnvironmentData___c_c *v25; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__63_0; // x22
  Il2CppObject *v28; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_T__o *v36; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v37; // x22
  const MethodInfo *v38; // x1

  if ( (byte_418693C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleBuffData_BuffData___ctor__, removeBuffArray);
    sub_B2C35C(&System_Action_BattleBuffData_BuffData__TypeInfo, v7);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9);
    sub_B2C35C(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v10);
    sub_B2C35C(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__63_0__, v12);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__DisplayClass63_0__ExecRemoveBuffAfterProc_b__1__, v13);
    sub_B2C35C(&BattleFieldEnvironmentData___c__DisplayClass63_0_TypeInfo, v14);
    sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v15);
    byte_418693C = 1;
  }
  v16 = sub_B2C42C(BattleFieldEnvironmentData___c__DisplayClass63_0_TypeInfo);
  BattleFieldEnvironmentData___c__DisplayClass63_0___ctor(
    (BattleFieldEnvironmentData___c__DisplayClass63_0_o *)v16,
    0LL);
  if ( !v16 )
    sub_B2C434(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_BYTE *)(v16 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0LL) )
  {
    v25 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v25 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v25->static_fields;
    _9__63_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v28 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__63_0,
        v28,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__63_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v29 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v29->__9__63_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__63_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v29->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__63_0,
                                                           (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v37 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v37,
      (Il2CppObject *)v16,
      Method_BattleFieldEnvironmentData___c__DisplayClass63_0__ExecRemoveBuffAfterProc_b__1__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v36,
      (System_Action_T__o *)v37,
      (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v38);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23087256(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_B2C434(this, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  const MethodInfo *v7; // x1
  void *BuffData; // x0
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w21
  __int64 v13; // x23
  __int64 v15; // x0

  if ( (byte_4186931 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4186931 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v7);
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
        v15 = sub_B2C460(BuffData);
        sub_B2C400(v15, 0LL);
      }
      v13 = *((_QWORD *)v11 + (int)v12 + 4);
      if ( !v13 )
        break;
      BuffData = (void *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v13 + 56), 0LL);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v6 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v6,
          *(System_Collections_Generic_IEnumerable_T__o **)(v13 + 56),
          (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B2C434(BuffData, v9);
  }
LABEL_13:
  if ( !v6 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4186940 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, individuality);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4186940 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)individuality,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v11);
    if ( !v9 )
LABEL_11:
      sub_B2C434(IsNullOrEmpty, v11);
  }
  else
  {
    if ( !v9 )
      goto LABEL_11;
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v12);
  }
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
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
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  System_Int32_array *QuestPhaseIndividuality; // x1

  if ( (byte_4186930 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____67414744,
      addIndiv);
    sub_B2C35C(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__46_0__, v7);
    sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v8);
    byte_4186930 = 1;
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
    _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__46_0,
      v13,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__46_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v14 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v14->__9__46_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__46_0;
    sub_B2C2F8(
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
                     (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____67414744);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  if ( !baseBackground )
    sub_B2C434(0LL, v22);
  QuestPhaseIndividuality = (System_Int32_array *)*((_QWORD *)baseBackground + 5);
  if ( !QuestPhaseIndividuality )
    QuestPhaseIndividuality = BattleFieldEnvironmentData__GetQuestPhaseIndividuality(this, 0LL);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, QuestPhaseIndividuality, addIndiv, v23);
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_int__o **v22; // x22
  System_Collections_Generic_List_int__o *v23; // x20
  System_Predicate_int__o *v24; // x20

  if ( (byte_418693E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, individualityList);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__RemoveAll__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v8);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v9);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__DisplayClass68_0__GetIndividualityExceptDelTarget_b__0__, v10);
    sub_B2C35C(&BattleFieldEnvironmentData___c__DisplayClass68_0_TypeInfo, v11);
    byte_418693E = 1;
  }
  v12 = sub_B2C42C(BattleFieldEnvironmentData___c__DisplayClass68_0_TypeInfo);
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
  v22 = (System_Collections_Generic_List_int__o **)(v12 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)BuffData, v16, v17, v18, v19, v20, v21);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v23 = *v22;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0LL);
  if ( !v23 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v22 )
    goto LABEL_13;
  if ( (*v22)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_B2C434(BuffData, v15);
  }
  v24 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v24,
    (Il2CppObject *)v12,
    Method_BattleFieldEnvironmentData___c__DisplayClass68_0__GetIndividualityExceptDelTarget_b__0__,
    (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v24,
    (const MethodInfo_2F68B1C *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_B2C434(0LL, method);
    PrioredIndividuality = (System_Int32_array **)BattleData__GetPrioredIndividuality(Data_k__BackingField, 0LL);
    p_questPhaseIndividuality->klass = (BattleServantConfConponent_c *)PrioredIndividuality;
    sub_B2C2F8(p_questPhaseIndividuality, PrioredIndividuality, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_418693D & 1) == 0 )
  {
    sub_B2C35C(&FieldChangeBuffDeleteProcess_TypeInfo, *(_QWORD *)&delAfterProcType);
    byte_418693D = 1;
  }
  if ( delAfterProcType != 1 )
    return 0LL;
  v4 = (FieldChangeBuffDeleteProcess_o *)sub_B2C42C(FieldChangeBuffDeleteProcess_TypeInfo);
  FieldChangeBuffDeleteProcess___ctor(v4, 0LL);
  return (FieldBuffDeleteProcess_o *)v4;
}


BattleFieldEnvironmentData_SaveData_o *__fastcall BattleFieldEnvironmentData__GetSaveData(
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  void *backgroundList; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__7_0; // x21
  Il2CppObject *v14; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  System_Int32_array **SaveData; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_4186929 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, method);
    sub_B2C35C(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__, v6);
    sub_B2C35C(&BattleFieldEnvironmentData_SaveData_TypeInfo, v7);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, v8);
    sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v9);
    byte_4186929 = 1;
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
    v14 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__7_0,
      v14,
      Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
    v15 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v15->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__7_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v15->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !bgmList )
    goto LABEL_17;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v22 = sub_B2C42C(BattleFieldEnvironmentData_SaveData_TypeInfo);
  BattleFieldEnvironmentData_SaveData___ctor((BattleFieldEnvironmentData_SaveData_o *)v22, 0LL);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_17;
  backgroundList = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v22
    || (*(_QWORD *)(v22 + 16) = backgroundList,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v22 + 16),
          (System_Int32_array **)backgroundList,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (backgroundList = this->fields.bgmList) == 0LL)
    || (v29 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v22 + 24) = v29,
        sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 24), v29, v30, v31, v32, v33, v34, v35),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v36)) == 0LL) )
  {
LABEL_17:
    sub_B2C434(backgroundList, method);
  }
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0LL);
  *(_QWORD *)(v22 + 32) = SaveData;
  sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 32), SaveData, v38, v39, v40, v41, v42, v43);
  result = (BattleFieldEnvironmentData_SaveData_o *)v22;
  *(_DWORD *)(v22 + 40) = this->fields.addOrder;
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
  Generator_BGFromQuestPhase_o *v16; // x22
  StageEntity_o *v17; // x20
  Generator_BGFromStage_o *v18; // x21
  BattleData_o *v19; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  Generator_BGM_o *v22; // x23
  System_Collections_Generic_IEnumerable_TSource__o *backgroundList; // x20
  BattleFieldEnvironmentData___c_c *v24; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_0; // x21
  Il2CppObject *v27; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleFieldEnvironmentData___c_c *v42; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v44; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_1; // x21
  Il2CppObject *v46; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7

  v2 = this;
  if ( (byte_418692D & 1) == 0 )
  {
    sub_B2C35C(&Generator_BGFromQuestPhase_TypeInfo, method);
    sub_B2C35C(&Generator_BGFromStage_TypeInfo, v3);
    sub_B2C35C(&Generator_BGM_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____67414736, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____67414744, v6);
    sub_B2C35C(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__, v7);
    sub_B2C35C(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__, v8);
    sub_B2C35C(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v9);
    sub_B2C35C(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v10);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__InitStageField_b__42_0__, v11);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__InitStageField_b__42_1__, v12);
    this = (BattleFieldEnvironmentData_o *)sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v13);
    byte_418692D = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v2->fields._Data_k__BackingField, 0LL),
        v16 = (Generator_BGFromQuestPhase_o *)sub_B2C42C(Generator_BGFromQuestPhase_TypeInfo),
        Generator_BGFromQuestPhase___ctor(v16, Data_k__BackingField, StageEntity, 0LL),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
          v2,
          v16,
          1LL,
          v2->klass->vtable._6_AddBGM.methodPtr),
        (this = (BattleFieldEnvironmentData_o *)v2->fields._Data_k__BackingField) == 0LL)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
    sub_B2C434(this, method);
  }
  v17 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0LL) >= 1 )
  {
    v18 = (Generator_BGFromStage_o *)sub_B2C42C(Generator_BGFromStage_TypeInfo);
    Generator_BGFromStage___ctor(v18, v17, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
      v2,
      v18,
      1LL,
      v2->klass->vtable._6_AddBGM.methodPtr);
  }
  v19 = v2->fields._Data_k__BackingField;
  bgmId = v17->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v17, 0, 0LL);
  v22 = (Generator_BGM_o *)sub_B2C42C(Generator_BGM_TypeInfo);
  Generator_BGM___ctor(v22, v19, bgmId, 0, PriorityBgm, 0LL, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._6_AddBGM.method)(
    v2,
    v22,
    1LL,
    v2->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  backgroundList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.backgroundList;
  v24 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v24 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_0,
      v27,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__42_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v28 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v28->__9__42_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__42_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 backgroundList,
                                 (System_Func_TSource__bool__o *)_9__42_0,
                                 (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____67414744);
  v2->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v35;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.baseBackground, v35, v36, v37, v38, v39, v40, v41);
  v42 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v42 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v44 = v42->static_fields;
  _9__42_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v44->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v44 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__42_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_1,
      v46,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__42_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v47 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v47->__9__42_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__42_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v47->__9__42_1,
      (System_Int32_array **)_9__42_1,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 bgmList,
                                 (System_Func_TSource__bool__o *)_9__42_1,
                                 (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____67414736);
  v2->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v54;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.baseBgm, v54, v55, v56, v57, v58, v59, v60);
}


bool __fastcall BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B2C434(this, method);
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
  __int64 v4; // x1
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_4186938 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, method);
    byte_4186938 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_B2C434(Instance, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  void *v13; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v16; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  BattleFieldEnvironmentData___c_c *v24; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v25; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v26; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__51_1; // x21
  Il2CppObject *v28; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4186934 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___, method);
    sub_B2C35C(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__, v3);
    sub_B2C35C(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v6);
    sub_B2C35C(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v7);
    sub_B2C35C(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v8);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_0__, v9);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_1__, v10);
    sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_4186934 = 1;
  }
  bgmList = this->fields.bgmList;
  v13 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v13 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = (struct BattleFieldEnvironmentData___c_StaticFields *)*((_QWORD *)v13 + 23);
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (*((_BYTE *)v13 + 307) & 4) != 0 && !*((_DWORD *)v13 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v16,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    v17 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v17->__9__51_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__51_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v17->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !bgmList )
    goto LABEL_24;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
    (System_Predicate_T__o *)_9__51_0,
    (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v24 = BattleFieldEnvironmentData___c_TypeInfo;
  v25 = this->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v24 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v26 = v24->static_fields;
  _9__51_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v26->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v26 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)v26->__9;
    _9__51_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__51_1,
      v28,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v29 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v29->__9__51_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__51_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v29->__9__51_1,
      (System_Int32_array **)_9__51_1,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v25,
         (System_Func_TSource__bool__o *)_9__51_1,
         (const MethodInfo_1A8D348 *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v13 = this->fields.bgmList;
    if ( v13 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v13,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.baseBgm,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
      goto LABEL_23;
    }
LABEL_24:
    sub_B2C434(v13, method);
  }
LABEL_23:
  BattleFieldEnvironmentData__SortBGM(this, method);
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x22
  int32_t v18; // w0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x22
  int32_t v20; // w20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x23
  const MethodInfo *v22; // x2

  if ( (byte_4186935 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__,
      *(_QWORD *)&buffUid);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, v5);
    sub_B2C35C(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v6);
    sub_B2C35C(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__, v7);
    sub_B2C35C(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v8);
    sub_B2C35C(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v9);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__0__, v10);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__1__, v11);
    sub_B2C35C(&BattleFieldEnvironmentData___c__DisplayClass52_0_TypeInfo, v12);
    byte_4186935 = 1;
  }
  v13 = (BattleFieldEnvironmentData___c__DisplayClass52_0_o *)sub_B2C42C(BattleFieldEnvironmentData___c__DisplayClass52_0_TypeInfo);
  BattleFieldEnvironmentData___c__DisplayClass52_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.buffUid = buffUid;
  backgroundList = this->fields.backgroundList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList
    || (v18 = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)backgroundList,
                (System_Predicate_T__o *)v17,
                (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = this->fields.bgmList,
        v20 = v18,
        v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v21,
          (Il2CppObject *)v13,
          Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__1__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__),
        !bgmList) )
  {
LABEL_9:
    sub_B2C434(v14, v15);
  }
  if ( System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
         (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
         (System_Predicate_T__o *)v21,
         (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v20 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v22);
}


void __fastcall BattleFieldEnvironmentData__ResetFieldInfo(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *backgroundList; // x0

  if ( (byte_418692E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__, v3);
    byte_418692E = 1;
  }
  backgroundList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.backgroundList;
  if ( !backgroundList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          backgroundList,
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__),
        (backgroundList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList) == 0LL) )
  {
    sub_B2C434(backgroundList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    backgroundList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
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
  __int64 v13; // x1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *backgroundList; // x0
  const MethodInfo *v15; // x1
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
  Generator_Background_o *v33; // x23
  BattleData_o *v34; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v39; // w23
  Generator_BGM_o *v40; // x24

  if ( (byte_418692A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, sv);
    sub_B2C35C(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v5);
    sub_B2C35C(&Generator_BGM_TypeInfo, v6);
    sub_B2C35C(&Generator_Background_TypeInfo, v7);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__, v10);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, v11);
    sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v12);
    byte_418692A = 1;
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
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
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
        _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__8_0,
          v20,
          Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
        v21 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        v21->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_B2C2F8(
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
        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_30;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)BattleFieldEnvironmentData__get_BuffData(
                                                                                         this,
                                                                                         v15);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0LL);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v28);
      return;
    }
LABEL_30:
    sub_B2C434(backgroundList, v13);
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
    v33 = (Generator_Background_o *)sub_B2C42C(Generator_Background_TypeInfo);
    Generator_Background___ctor(v33, v29, v31, 0, ExistOverwriteBgIndividuality, 0LL);
    backgroundList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
                                                                                         this,
                                                                                         v33,
                                                                                         2LL,
                                                                                         this->klass->vtable._6_AddBGM.methodPtr);
  }
  else
  {
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
  }
  v34 = *p_Data_k__BackingField;
  if ( !*p_Data_k__BackingField )
    goto LABEL_30;
  overwriteBgmData_k__BackingField = v34->fields._overwriteBgmData_k__BackingField;
  if ( overwriteBgmData_k__BackingField )
  {
    BgmId_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmId_k__BackingField;
    allowSubBgmPlaying = OverwriteBattleBgmData__get_allowSubBgmPlaying(
                           v34->fields._overwriteBgmData_k__BackingField,
                           0LL);
    BgmName_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmName_k__BackingField;
    v39 = allowSubBgmPlaying;
    v40 = (Generator_BGM_o *)sub_B2C42C(Generator_BGM_TypeInfo);
    Generator_BGM___ctor(v40, v34, BgmId_k__BackingField, v39, 0, BgmName_k__BackingField, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
      this,
      v40,
      2LL,
      this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
}


void __fastcall BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x21
  BattleData_o *v13; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v15; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v16; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_4186937 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, method);
    sub_B2C35C(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v3);
    sub_B2C35C(&Method_BattleFieldEnvironmentData_CompareData__, v4);
    sub_B2C35C(&Method_BattleFieldEnvironmentData__SortBGM_b__55_0__, v5);
    sub_B2C35C(&Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__, v6);
    sub_B2C35C(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v10);
    byte_4186937 = 1;
  }
  bgmList = this->fields.bgmList;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__SortBGM_b__55_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)v12,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v15 = this->fields.bgmList;
  v16 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_25D8DF8 *)Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !v15 )
    goto LABEL_9;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)v16,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_CurBGM_k__BackingField,
    (System_Int32_array **)baseBgm,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v13 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v13 )
LABEL_9:
    sub_B2C434(v13, v14);
  BattleData__SetOverrideBgmData(v13, *p_CurBGM_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SortBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4186936 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleFieldEnvironmentData_CompareData__, method);
    sub_B2C35C(&Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__, v3);
    sub_B2C35C(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__, v6);
    byte_4186936 = 1;
  }
  backgroundList = this->fields.backgroundList;
  v8 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_25D8DF8 *)Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList )
    sub_B2C434(v9, v10);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)backgroundList,
    (System_Comparison_T__o *)v8,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_1A9066C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_B2C2F8(
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
    sub_B2C434(BuffData, v8);
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
    sub_B2C434(0LL, v6);
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
    sub_B2C434(0LL, v8);
  v9 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v9, isAddAfterTask, v10);
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
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  BattleFieldEnvironmentData___c_c *v16; // x8
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x21
  Il2CppObject *v19; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x3
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v29; // x20
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  __int64 v35; // x20
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  __int64 v40; // x3
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  BattleBuffData_FieldChangeData_o *v47; // x21
  Generator_BGFromFieldChangeBGBuff_o *v48; // x22
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v50; // x22
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0

  if ( (byte_418692F & 1) == 0 )
  {
    sub_B2C35C(&Generator_BGFromFieldChangeBGBuff_TypeInfo, method);
    sub_B2C35C(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___, v4);
    sub_B2C35C(&Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__45_0__, v11);
    sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v12);
    byte_418692F = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_47;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
  v16 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v16 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__45_0,
      v19,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__45_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__);
    v20 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v20->__9__45_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__45_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v15,
                                   (System_Func_TSource__bool__o *)_9__45_0,
                                   (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_47:
    sub_B2C434(BuffData, v14);
  klass = BuffData->klass;
  v29 = BuffData;
  if ( *(_WORD *)&BuffData->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&BuffData->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_17:
    v32 = sub_AC5258(
            BuffData,
            System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo,
            0LL,
            v27);
  }
  v35 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  if ( !v35 )
    sub_B2C434(0LL, v33);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_24;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_24:
      v39 = sub_AC5258(v35, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v43 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_31;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_31:
      v44 = sub_AC5258(v35, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0LL, v40);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v35, *(_QWORD *)(v44 + 8));
    v47 = (BattleBuffData_FieldChangeData_o *)v45;
    if ( !v45 )
      sub_B2C434(0LL, v46);
    if ( *(int *)(v45 + 24) >= 1 )
    {
      v48 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B2C42C(Generator_BGFromFieldChangeBGBuff_TypeInfo);
      Generator_BGFromFieldChangeBGBuff___ctor(v48, v47, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
        this,
        v48,
        2LL,
        this->klass->vtable._6_AddBGM.methodPtr);
    }
    if ( v47->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v47->fields.bgmName, 0LL) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v50 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B2C42C(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
      Generator_BGMFromFieldChangeBGBuff___ctor(v50, Data_k__BackingField, v47, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v50,
        2LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
  }
  v51 = *(_QWORD *)v35;
  if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
  {
    v52 = 0LL;
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
        goto LABEL_43;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_43:
    v54 = sub_AC5258(v35, System_IDisposable_TypeInfo, 0LL, v40);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v35, *(_QWORD *)(v54 + 8));
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
    sub_B2C434(0LL, v8);
  v9 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23086596(this, v9, 1, v10);
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
    sub_B2C434(Perf_k__BackingField, method);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__55_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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

  if ( (byte_418692B & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffData_TypeInfo, method);
    byte_418692B = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  v4 = buffData;
  if ( !buffData )
  {
    v4 = (BattleBuffData_o *)sub_B2C42C(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0LL);
    p_fields->klass = (BattleServantConfConponent_c *)v4;
    sub_B2C2F8(p_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
  }
  return v4;
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
    sub_B2C434(this, method);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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


void __fastcall BattleFieldEnvironmentData_BGMData___ctor_23223580(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
    sub_B2C434(this, fieldEnv);
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
  sub_B2C2F8(
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
    sub_B2C434(this, method);
  return comData->fields.grantType;
}


bool __fastcall BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_B2C434(this, method);
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A77 & 1) == 0 )
  {
    sub_B2C35C(&BattleFieldEnvironmentData___c_TypeInfo, v1);
    byte_4186A77 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleFieldEnvironmentData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.delAfterProcType != 0;
}


bool __fastcall BattleFieldEnvironmentData___c___GetFieldIndividuality_b__46_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0LL);
  x->fields.bgmSaveData = v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&x->fields.bgmSaveData, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__42_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B2C434(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__42_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B2C434(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B2C434(this, 0LL);
  return bgm->fields.isAfterReset;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__51_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0LL);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_B2C2F8(
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, x);
  return comData->fields.linkBuffUid == this->fields.buffUid;
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass52_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass52_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B2C434(this, x);
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
    sub_B2C434(0LL, x);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23087256(_4__this, x, this->fields.isAddAfterTask, 0LL);
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

  if ( (byte_4186A78 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&x);
    byte_4186A78 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_B2C434(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
}