void __fastcall BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct BattlePerformance_o *perf; // x1
  struct BattlePerformance_o **p_Perf_k__BackingField; // x20
  System_Int32_array **logic; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7

  if ( (byte_40F8D5A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__, data);
    sub_B16FFC(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v13);
    byte_40F8D5A = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v14;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.backgroundList,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgmList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.addOrder = 1;
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v32,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v36;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.addTaskList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v47 = (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)sub_B170CC(
                                                                                                System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo,
                                                                                                v43,
                                                                                                v44,
                                                                                                v45,
                                                                                                v46);
  System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType____ctor(
    v47,
    (const MethodInfo_21DA2F8 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v47;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.hashDelType,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Data_k__BackingField = data;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)data,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  if ( !data )
    sub_B170D4();
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  p_Perf_k__BackingField = &this->fields._Perf_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_Perf_k__BackingField,
    (System_Int32_array **)perf,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  logic = (System_Int32_array **)data->fields.logic;
  p_Perf_k__BackingField[1] = (struct BattlePerformance_o *)logic;
  sub_B16F98((BattleServantConfConponent_o *)(p_Perf_k__BackingField + 1), logic, v69, v70, v71, v72, v73, v74);
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__AddBGM(
        BattleFieldEnvironmentData_o *this,
        Generator_BGM_o *bgmGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 addOrder; // x1
  __int64 v13; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x21
  BattleFieldEnvironmentData___c_c *v20; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__50_0; // x22
  Il2CppObject *v23; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v31; // x0
  const MethodInfo *v32; // x1

  if ( (byte_40F8D61 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, bgmGenerator);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v7);
    sub_B16FFC(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v8);
    sub_B16FFC(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v9);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__AddBGM_b__50_0__, v10);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_40F8D61 = 1;
  }
  addOrder = (unsigned int)this->fields.addOrder;
  this->fields.addOrder = addOrder + 1;
  if ( !bgmGenerator )
    goto LABEL_18;
  v13 = ((__int64 (__fastcall *)(Generator_BGM_o *, __int64, _QWORD, void *))bgmGenerator->klass->vtable._4_Make.method)(
          bgmGenerator,
          addOrder,
          (unsigned int)grantType,
          bgmGenerator->klass[1]._1.image);
  if ( !v13 )
    goto LABEL_18;
  v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 392LL))(v13, *(_QWORD *)(*(_QWORD *)v13 + 400LL)) & 1) == 0 )
    goto LABEL_16;
  bgmList = this->fields.bgmList;
  v20 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v20 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                          v15,
                                                                          v16,
                                                                          v17,
                                                                          v18);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__50_0,
      v23,
      Method_BattleFieldEnvironmentData___c__AddBGM_b__50_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    v24 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v24->__9__50_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__50_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !bgmList )
LABEL_18:
    sub_B170D4();
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
    (System_Predicate_T__o *)_9__50_0,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
LABEL_16:
  v31 = this->fields.bgmList;
  if ( !v31 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31,
    v14,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
  BattleFieldEnvironmentData__SortBGM(this, v32);
  return this->fields._CurBGM_k__BackingField;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__AddBackground(
        BattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 addOrder; // x1
  __int64 v13; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x21
  BattleFieldEnvironmentData___c_c *v20; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__49_0; // x22
  Il2CppObject *v23; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *v31; // x0
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1

  if ( (byte_40F8D60 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__, bgGenerator);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, v7);
    sub_B16FFC(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__, v8);
    sub_B16FFC(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v9);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__AddBackground_b__49_0__, v10);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_40F8D60 = 1;
  }
  addOrder = (unsigned int)this->fields.addOrder;
  this->fields.addOrder = addOrder + 1;
  if ( !bgGenerator )
    goto LABEL_18;
  v13 = ((__int64 (__fastcall *)(Generator_Background_o *, __int64, _QWORD, void *))bgGenerator->klass->vtable._4_Make.method)(
          bgGenerator,
          addOrder,
          (unsigned int)grantType,
          bgGenerator->klass[1]._1.image);
  if ( !v13 )
    goto LABEL_18;
  v14 = (EventMissionProgressRequest_Argument_ProgressData_o *)v13;
  if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 392LL))(v13, *(_QWORD *)(*(_QWORD *)v13 + 400LL)) & 1) == 0 )
    goto LABEL_16;
  backgroundList = this->fields.backgroundList;
  v20 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v20 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                                          v15,
                                                                          v16,
                                                                          v17,
                                                                          v18);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__49_0,
      v23,
      Method_BattleFieldEnvironmentData___c__AddBackground_b__49_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
    v24 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v24->__9__49_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)_9__49_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !backgroundList )
LABEL_18:
    sub_B170D4();
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)backgroundList,
    (System_Predicate_T__o *)_9__49_0,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
LABEL_16:
  v31 = this->fields.backgroundList;
  if ( !v31 )
    goto LABEL_18;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31,
    v14,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
  BattleFieldEnvironmentData__SortBackGround(this, v32);
  BattleFieldEnvironmentData__SortBGM(this, v33);
  return this->fields._CurBackGround_k__BackingField;
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
    sub_B170D4();
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
  BattleLogicTask_array *v10; // x0
  struct System_Collections_Generic_List_BattleLogicTask__o *v11; // x0
  System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *hashDelType; // x0

  if ( (byte_40F8D67 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__, logic);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F8D67 = 1;
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
      v10 = (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       addTaskList,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, v10, 0LL);
        v11 = this->fields.addTaskList;
        if ( v11 )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v11,
            (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
          hashDelType = this->fields.hashDelType;
          if ( hashDelType )
          {
            System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___Clear(
              hashDelType,
              (const MethodInfo_21DA910 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_14:
      sub_B170D4();
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
  struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *hashDelType; // x0
  struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *v12; // x0
  struct System_Collections_Generic_List_BattleLogicTask__o *addTaskList; // x0

  if ( (byte_40F8D68 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__, task);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    byte_40F8D68 = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_9;
    if ( System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Contains(
           (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)hashDelType,
           addType,
           (const MethodInfo_21DA97C *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  v12 = this->fields.hashDelType;
  if ( !v12
    || (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType___Add(
          (System_Collections_Generic_HashSet_EventMissionCondDetailEntity_MissionCondType__o *)v12,
          addType,
          (const MethodInfo_21DB4D4 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (addTaskList = this->fields.addTaskList) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)addTaskList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)task,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateViewTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  UpdateFieldViewBattleLogicTask_o *v6; // x20
  const MethodInfo *v7; // x4

  if ( (byte_40F8D6D & 1) == 0 )
  {
    sub_B16FFC(&UpdateFieldViewBattleLogicTask_TypeInfo, method);
    byte_40F8D6D = 1;
  }
  v6 = (UpdateFieldViewBattleLogicTask_o *)sub_B170CC(UpdateFieldViewBattleLogicTask_TypeInfo, method, v2, v3, v4);
  UpdateFieldViewBattleLogicTask___ctor(v6, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v6, 2, 1, v7);
}


bool __fastcall BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_22775404; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  System_Int32_array *BuffIndividualities; // x0
  System_Int32_array *v10; // x0

  Individualities_22775404 = buffIndiv;
  if ( opSvt )
    Individualities_22775404 = BattleServantData__getIndividualities_22775404(opSvt, buffIndiv, 0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buffIndiv);
  v8 = BattleFieldEnvironmentData__get_BuffData(this, v7);
  if ( !v8
    || (BuffIndividualities = BattleBuffData__getBuffIndividualities(v8, 1, 0, 0, 0, 0LL),
        v10 = (System_Int32_array *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, System_Int32_array *, Il2CppMethodPointer))this->klass->vtable._4_GetFieldIndividuality.method)(
                                      this,
                                      BuffIndividualities,
                                      this->klass->vtable._5_AddBackground.methodPtr),
        !BuffData) )
  {
    sub_B170D4();
  }
  return BattleBuffData__checkActBuff(BuffData, 105, v10, Individualities_22775404, 0LL);
}


void __fastcall BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v4; // x1
  const MethodInfo *v5; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_B170D4();
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
  if ( v8 != ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer))b->klass->vtable._4_get_Active.method)(
               b,
               b->klass->vtable._5_get_IsTargetBase.methodPtr) )
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
    sub_B170D4();
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
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x0
  BattleBuffData_BuffData_array *v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_40F8D69 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, removeBuffInfo);
    byte_40F8D69 = 1;
  }
  if ( !removeBuffInfo
    || (RemovedAllBuffList_k__BackingField = removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
    sub_B170D4();
  }
  v8 = (BattleBuffData_BuffData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)RemovedAllBuffList_k__BackingField,
                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23094736(this, v8, isAddAfterTask, v9);
  return removeBuffInfo;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23094736(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  BattleFieldEnvironmentData___c_c *v28; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__63_0; // x22
  Il2CppObject *v31; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_T__o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v44; // x22
  const MethodInfo *v45; // x1

  if ( (byte_40F8D6A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData_BuffData___ctor__, removeBuffArray);
    sub_B16FFC(&System_Action_BattleBuffData_BuffData__TypeInfo, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v10);
    sub_B16FFC(&Method_System_Func_BattleBuffData_BuffData__bool___ctor__, v11);
    sub_B16FFC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__63_0__, v13);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__DisplayClass63_0__ExecRemoveBuffAfterProc_b__1__, v14);
    sub_B16FFC(&BattleFieldEnvironmentData___c__DisplayClass63_0_TypeInfo, v15);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v16);
    byte_40F8D6A = 1;
  }
  v17 = sub_B170CC(
          BattleFieldEnvironmentData___c__DisplayClass63_0_TypeInfo,
          removeBuffArray,
          isAddAfterTask,
          method,
          v4);
  BattleFieldEnvironmentData___c__DisplayClass63_0___ctor(
    (BattleFieldEnvironmentData___c__DisplayClass63_0_o *)v17,
    0LL);
  if ( !v17 )
    sub_B170D4();
  *(_QWORD *)(v17 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v17 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0LL) )
  {
    v28 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v28 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__63_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__63_0;
    if ( !_9__63_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__63_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                                                      v24,
                                                                                      v25,
                                                                                      v26,
                                                                                      v27);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__63_0,
        v31,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__63_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_BuffData__bool___ctor__);
      v32 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v32->__9__63_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__63_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v32->__9__63_0,
        (System_Int32_array **)_9__63_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__63_0,
                                                           (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v44 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_BattleBuffData_BuffData__TypeInfo,
                                                                                 v40,
                                                                                 v41,
                                                                                 v42,
                                                                                 v43);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v44,
      (Il2CppObject *)v17,
      Method_BattleFieldEnvironmentData___c__DisplayClass63_0__ExecRemoveBuffAfterProc_b__1__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData_BuffData___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v39,
      (System_Action_T__o *)v44,
      (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v45);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23095396(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  const MethodInfo *v10; // x1
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_FieldChangeData_array *IsNullOrEmpty; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  BattleBuffData_FieldChangeData_array *v16; // x20
  unsigned int v17; // w21
  BattleBuffData_FieldChangeData_o *v18; // x23

  if ( (byte_40F8D5F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40F8D5F = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v10);
  if ( !BuffData )
    goto LABEL_15;
  IsNullOrEmpty = BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
  if ( !IsNullOrEmpty )
    goto LABEL_15;
  max_length = IsNullOrEmpty->max_length;
  v16 = IsNullOrEmpty;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
      {
        sub_B17100(IsNullOrEmpty, v13, v14);
        sub_B170A0();
      }
      v18 = v16->m_Items[v17];
      if ( !v18 )
        break;
      IsNullOrEmpty = (BattleBuffData_FieldChangeData_array *)BasicHelper__IsNullOrEmpty(
                                                                (System_Collections_ICollection_o *)v18->fields.individuality,
                                                                0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)v18->fields.individuality,
          (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      max_length = v16->max_length;
      if ( (int)++v17 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetCommonFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x21
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_40F8D6E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, individuality);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_40F8D6E = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    individuality,
                                                    addIndiv,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)individuality, 0LL) )
  {
    v12 = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__GetChangeFieldIndividuality(
                                                           this,
                                                           v11);
    if ( !v10 )
LABEL_11:
      sub_B170D4();
  }
  else
  {
    if ( !v10 )
      goto LABEL_11;
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
    v12 = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__GetChangeFieldIndividuality(
                                                           this,
                                                           v13);
  }
  System_Collections_Generic_List_int___AddRange(
    v10,
    v12,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v10, v14);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x21
  BattleFieldEnvironmentData___c_c *v12; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__46_0; // x22
  Il2CppObject *v15; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  void *baseBackground; // x0
  const MethodInfo *v24; // x3
  System_Int32_array *QuestPhaseIndividuality; // x1

  if ( (byte_40F8D5E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____66839560,
      addIndiv);
    sub_B16FFC(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__46_0__, v9);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v10);
    byte_40F8D5E = 1;
  }
  backgroundList = this->fields.backgroundList;
  v12 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v12 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo,
                                                                                    addIndiv,
                                                                                    method,
                                                                                    v3,
                                                                                    v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__46_0,
      v15,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__46_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v16 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v16->__9__46_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__46_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__46_0,
      (System_Int32_array **)_9__46_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  baseBackground = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                     (System_Func_TSource__bool__o *)_9__46_0,
                     (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____66839560);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  if ( !baseBackground )
    sub_B170D4();
  QuestPhaseIndividuality = (System_Int32_array *)*((_QWORD *)baseBackground + 5);
  if ( !QuestPhaseIndividuality )
    QuestPhaseIndividuality = BattleFieldEnvironmentData__GetQuestPhaseIndividuality(this, 0LL);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, QuestPhaseIndividuality, addIndiv, v24);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
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
  __int64 v14; // x21
  const MethodInfo *v15; // x1
  BattleBuffData_o *BuffData; // x0
  System_Int32_array **BuffGeneralParamList; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_int__o **v24; // x22
  BattleData_o *Data_k__BackingField; // x0
  System_Collections_Generic_List_int__o *v26; // x20
  System_Collections_Generic_IEnumerable_T__o *SubFieldIndividualityServant; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Predicate_int__o *v32; // x20

  if ( (byte_40F8D6C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, individualityList);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__RemoveAll__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v9);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v10);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v11);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__DisplayClass68_0__GetIndividualityExceptDelTarget_b__0__, v12);
    sub_B16FFC(&BattleFieldEnvironmentData___c__DisplayClass68_0_TypeInfo, v13);
    byte_40F8D6C = 1;
  }
  v14 = sub_B170CC(BattleFieldEnvironmentData___c__DisplayClass68_0_TypeInfo, individualityList, method, v3, v4);
  BattleFieldEnvironmentData___c__DisplayClass68_0___ctor(
    (BattleFieldEnvironmentData___c__DisplayClass68_0_o *)v14,
    0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v15);
  if ( !BuffData )
    goto LABEL_13;
  BuffGeneralParamList = (System_Int32_array **)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0LL, 0LL, 1, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_QWORD *)(v14 + 16) = BuffGeneralParamList;
  v24 = (System_Collections_Generic_List_int__o **)(v14 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), BuffGeneralParamList, v18, v19, v20, v21, v22, v23);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_13;
  v26 = *v24;
  SubFieldIndividualityServant = (System_Collections_Generic_IEnumerable_T__o *)BattleData__GetSubFieldIndividualityServant(
                                                                                  Data_k__BackingField,
                                                                                  0LL);
  if ( !v26 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v26,
    SubFieldIndividualityServant,
    (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v24 )
    goto LABEL_13;
  if ( (*v24)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_B170D4();
  }
  v32 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v28, v29, v30, v31);
  System_Predicate_int____ctor(
    v32,
    (Il2CppObject *)v14,
    Method_BattleFieldEnvironmentData___c__DisplayClass68_0__GetIndividualityExceptDelTarget_b__0__,
    (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v32,
    (const MethodInfo_2F12014 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_B170D4();
    PrioredIndividuality = (System_Int32_array **)BattleData__GetPrioredIndividuality(Data_k__BackingField, 0LL);
    p_questPhaseIndividuality->klass = (BattleServantConfConponent_c *)PrioredIndividuality;
    sub_B16F98(p_questPhaseIndividuality, PrioredIndividuality, v7, v8, v9, v10, v11, v12);
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
  __int64 v3; // x3
  __int64 v4; // x4
  FieldChangeBuffDeleteProcess_o *v6; // x19

  if ( (byte_40F8D6B & 1) == 0 )
  {
    sub_B16FFC(&FieldChangeBuffDeleteProcess_TypeInfo, *(_QWORD *)&delAfterProcType);
    byte_40F8D6B = 1;
  }
  if ( delAfterProcType != 1 )
    return 0LL;
  v6 = (FieldChangeBuffDeleteProcess_o *)sub_B170CC(
                                           FieldChangeBuffDeleteProcess_TypeInfo,
                                           *(_QWORD *)&delAfterProcType,
                                           method,
                                           v3,
                                           v4);
  FieldChangeBuffDeleteProcess___ctor(v6, 0LL);
  return (FieldBuffDeleteProcess_o *)v6;
}


BattleFieldEnvironmentData_SaveData_o *__fastcall BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  BattleFieldEnvironmentData___c_c *v14; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__7_0; // x21
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
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x20
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x0
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v38; // x0
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  const MethodInfo *v46; // x1
  BattleBuffData_o *BuffData; // x0
  System_Int32_array **SaveData; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_40F8D57 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, method);
    sub_B16FFC(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__, v9);
    sub_B16FFC(&BattleFieldEnvironmentData_SaveData_TypeInfo, v10);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, v11);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v12);
    byte_40F8D57 = 1;
  }
  bgmList = this->fields.bgmList;
  v14 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v14 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__7_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__7_0,
      v17,
      Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
    v18 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v18->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__7_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__7_0,
      (System_Int32_array **)_9__7_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !bgmList )
    goto LABEL_17;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v29 = sub_B170CC(BattleFieldEnvironmentData_SaveData_TypeInfo, v25, v26, v27, v28);
  BattleFieldEnvironmentData_SaveData___ctor((BattleFieldEnvironmentData_SaveData_o *)v29, 0LL);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_17;
  v31 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)backgroundList,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v29
    || (*(_QWORD *)(v29 + 16) = v31,
        sub_B16F98((BattleServantConfConponent_o *)(v29 + 16), v31, v32, v33, v34, v35, v36, v37),
        (v38 = this->fields.bgmList) == 0LL)
    || (v39 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v29 + 24) = v39,
        sub_B16F98((BattleServantConfConponent_o *)(v29 + 24), v39, v40, v41, v42, v43, v44, v45),
        (BuffData = BattleFieldEnvironmentData__get_BuffData(this, v46)) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  SaveData = (System_Int32_array **)BattleBuffData__getSaveData(BuffData, 0LL);
  *(_QWORD *)(v29 + 32) = SaveData;
  sub_B16F98((BattleServantConfConponent_o *)(v29 + 32), SaveData, v49, v50, v51, v52, v53, v54);
  result = (BattleFieldEnvironmentData_SaveData_o *)v29;
  *(_DWORD *)(v29 + 40) = this->fields.addOrder;
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
  __int64 v18; // x3
  __int64 v19; // x4
  Generator_BGFromQuestPhase_o *v20; // x22
  BattleData_o *v21; // x0
  StageEntity_o *v22; // x0
  StageEntity_o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Generator_BGFromStage_o *v28; // x21
  BattleData_o *v29; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Generator_BGM_o *v36; // x23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  BattleFieldEnvironmentData___c_c *v42; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_0; // x21
  Il2CppObject *v45; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct BattleFieldEnvironmentData_BackgroundData_o *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  BattleFieldEnvironmentData___c_c *v64; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v66; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__42_1; // x21
  Il2CppObject *v68; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  struct BattleFieldEnvironmentData_BGMData_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7

  if ( (byte_40F8D5B & 1) == 0 )
  {
    sub_B16FFC(&Generator_BGFromQuestPhase_TypeInfo, method);
    sub_B16FFC(&Generator_BGFromStage_TypeInfo, v3);
    sub_B16FFC(&Generator_BGM_TypeInfo, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____66839552, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____66839560, v6);
    sub_B16FFC(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__, v7);
    sub_B16FFC(&Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v9);
    sub_B16FFC(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v10);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__InitStageField_b__42_0__, v11);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__InitStageField_b__42_1__, v12);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v13);
    byte_40F8D5B = 1;
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(this->fields._Data_k__BackingField, 0LL),
        v20 = (Generator_BGFromQuestPhase_o *)sub_B170CC(Generator_BGFromQuestPhase_TypeInfo, v16, v17, v18, v19),
        Generator_BGFromQuestPhase___ctor(v20, Data_k__BackingField, StageEntity, 0LL),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
          this,
          v20,
          1LL,
          this->klass->vtable._6_AddBGM.methodPtr),
        (v21 = this->fields._Data_k__BackingField) == 0LL)
    || (v22 = BattleData__getStageEntity(v21, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v23 = v22;
  if ( StageEntity__getChangeBgId(v22, 0LL) >= 1 )
  {
    v28 = (Generator_BGFromStage_o *)sub_B170CC(Generator_BGFromStage_TypeInfo, v24, v25, v26, v27);
    Generator_BGFromStage___ctor(v28, v23, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
      this,
      v28,
      1LL,
      this->klass->vtable._6_AddBGM.methodPtr);
  }
  v29 = this->fields._Data_k__BackingField;
  bgmId = v23->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v23, 0, 0LL);
  v36 = (Generator_BGM_o *)sub_B170CC(Generator_BGM_TypeInfo, v32, v33, v34, v35);
  Generator_BGM___ctor(v36, v29, bgmId, 0, PriorityBgm, 0LL, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
    this,
    v36,
    1LL,
    this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  backgroundList = this->fields.backgroundList;
  v42 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v42 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v42->static_fields;
  _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo,
                                                                                    v37,
                                                                                    v38,
                                                                                    v39,
                                                                                    v40);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_0,
      v45,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__42_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleFieldEnvironmentData_BackgroundData__bool___ctor__);
    v46 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v46->__9__42_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__42_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v46->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                                                                (System_Func_TSource__bool__o *)_9__42_0,
                                                                (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____66839560);
  this->fields.baseBackground = v53;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseBackground,
    (System_Int32_array **)v53,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v64 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = this->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v64 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v66 = v64->static_fields;
  _9__42_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v66->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v64);
      v66 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v68 = (Il2CppObject *)v66->__9;
    _9__42_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                                                    v60,
                                                                                    v61,
                                                                                    v62,
                                                                                    v63);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__42_1,
      v68,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__42_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v69 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v69->__9__42_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__42_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v69->__9__42_1,
      (System_Int32_array **)_9__42_1,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  v76 = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
                                                         (System_Func_TSource__bool__o *)_9__42_1,
                                                         (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____66839552);
  this->fields.baseBgm = v76;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.baseBgm,
    (System_Int32_array **)v76,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
}


bool __fastcall BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_B170D4();
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
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  BgmManager_o *Instance; // x0
  System_String_o *BgmName; // x0

  if ( (byte_40F8D66 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, method);
    byte_40F8D66 = 1;
  }
  if ( !BattleFieldEnvironmentData__get_IsNeedChangeBG(this, method) )
  {
    CurBGM_k__BackingField = this->fields._CurBGM_k__BackingField;
    if ( !CurBGM_k__BackingField )
      goto LABEL_10;
    BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
    if ( !BgmData_k__BackingField )
      return 0;
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_B170D4();
    BgmName = BgmManager__get_BgmName(Instance, 0LL);
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  BattleFieldEnvironmentData___c_c *v16; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__51_0; // x21
  Il2CppObject *v19; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  BattleFieldEnvironmentData___c_c *v31; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v32; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v33; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__51_1; // x21
  Il2CppObject *v35; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v44; // x0

  if ( (byte_40F8D62 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___, method);
    sub_B16FFC(&Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__, v6);
    sub_B16FFC(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v9);
    sub_B16FFC(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v10);
    sub_B16FFC(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v11);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_0__, v12);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_1__, v13);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v14);
    byte_40F8D62 = 1;
  }
  bgmList = this->fields.bgmList;
  v16 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v16 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__51_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__51_0,
      v19,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__);
    v20 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v20->__9__51_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__51_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->__9__51_0,
      (System_Int32_array **)_9__51_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !bgmList )
    goto LABEL_24;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
    (System_Predicate_T__o *)_9__51_0,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v31 = BattleFieldEnvironmentData___c_TypeInfo;
  v32 = this->fields.bgmList;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v31 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__51_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v33->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v33 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__51_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                                                    v27,
                                                                                    v28,
                                                                                    v29,
                                                                                    v30);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__51_1,
      v35,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__51_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleFieldEnvironmentData_BGMData__bool___ctor__);
    v36 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v36->__9__51_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__51_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__51_1,
      (System_Int32_array **)_9__51_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  if ( System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v32,
         (System_Func_TSource__bool__o *)_9__51_1,
         (const MethodInfo_18D4A90 *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v44 = this->fields.bgmList;
    if ( v44 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v44,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.baseBgm,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
      goto LABEL_23;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_23:
  BattleFieldEnvironmentData__SortBGM(this, v43);
  return this->fields._CurBGM_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__RemoveRelateBuff(
        BattleFieldEnvironmentData_o *this,
        int32_t buffUid,
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
  BattleFieldEnvironmentData___c__DisplayClass52_0_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x22
  int32_t v22; // w0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x22
  int32_t v24; // w20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v29; // x23
  const MethodInfo *v30; // x2

  if ( (byte_40F8D63 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__,
      *(_QWORD *)&buffUid);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, v7);
    sub_B16FFC(&Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__, v8);
    sub_B16FFC(&Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__, v9);
    sub_B16FFC(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v10);
    sub_B16FFC(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v11);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__0__, v12);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__1__, v13);
    sub_B16FFC(&BattleFieldEnvironmentData___c__DisplayClass52_0_TypeInfo, v14);
    byte_40F8D63 = 1;
  }
  v15 = (BattleFieldEnvironmentData___c__DisplayClass52_0_o *)sub_B170CC(
                                                                BattleFieldEnvironmentData___c__DisplayClass52_0_TypeInfo,
                                                                *(_QWORD *)&buffUid,
                                                                method,
                                                                v3,
                                                                v4);
  BattleFieldEnvironmentData___c__DisplayClass52_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_9;
  v15->fields.buffUid = buffUid;
  backgroundList = this->fields.backgroundList;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                                   v16,
                                                                   v17,
                                                                   v18,
                                                                   v19);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList
    || (v22 = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)backgroundList,
                (System_Predicate_T__o *)v21,
                (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = this->fields.bgmList,
        v24 = v22,
        v29 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                         v25,
                                                                         v26,
                                                                         v27,
                                                                         v28),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v29,
          (Il2CppObject *)v15,
          Method_BattleFieldEnvironmentData___c__DisplayClass52_0__RemoveRelateBuff_b__1__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleFieldEnvironmentData_BGMData___ctor__),
        !bgmList) )
  {
LABEL_9:
    sub_B170D4();
  }
  if ( System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
         (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)bgmList,
         (System_Predicate_T__o *)v29,
         (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v24 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v30);
}


void __fastcall BattleFieldEnvironmentData__ResetFieldInfo(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x0

  if ( (byte_40F8D5C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__, v3);
    byte_40F8D5C = 1;
  }
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)backgroundList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__),
        (bgmList = this->fields.bgmList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)bgmList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v19; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__8_0; // x22
  Il2CppObject *v22; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *bgmList; // x0
  BattleBuffData_o *BuffData; // x0
  const MethodInfo *v32; // x2
  BattlePerformance_o *Perf_k__BackingField; // x0
  int32_t CurrentGroundNo; // w0
  int32_t v35; // w20
  int32_t CurrentGroundType; // w0
  struct BattleData_o **p_Data_k__BackingField; // x24
  int32_t v38; // w21
  bool ExistOverwriteBgIndividuality; // w22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  Generator_Background_o *v44; // x23
  BattleData_o *v45; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v50; // w23
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Generator_BGM_o *v55; // x24

  if ( (byte_40F8D58 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, sv);
    sub_B16FFC(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v5);
    sub_B16FFC(&Generator_BGM_TypeInfo, v6);
    sub_B16FFC(&Generator_Background_TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__, v10);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, v11);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v12);
    byte_40F8D58 = 1;
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
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0LL) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v19 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
        v19 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      static_fields = v19->static_fields;
      _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        }
        v22 = (Il2CppObject *)static_fields->__9;
        _9__8_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                         System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                                         v14,
                                                                                         v15,
                                                                                         v16,
                                                                                         v17);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          _9__8_0,
          v22,
          Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__,
          (const MethodInfo_24B7310 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
        v23 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        v23->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v23->__9__8_0,
          (System_Int32_array **)_9__8_0,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
      }
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      bgmList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.bgmList;
      if ( !bgmList )
        goto LABEL_30;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        bgmList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    BuffData = BattleFieldEnvironmentData__get_BuffData(this, v14);
    if ( BuffData )
    {
      BattleBuffData__setSaveData(BuffData, sv->fields.buffData, 0LL);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v32);
      return;
    }
LABEL_30:
    sub_B170D4();
  }
  if ( BattleFieldEnvironmentData__get_IsNeedChangeBG(this, (const MethodInfo *)sv) )
  {
    Perf_k__BackingField = this->fields._Perf_k__BackingField;
    if ( !Perf_k__BackingField )
      goto LABEL_30;
    CurrentGroundNo = BattlePerformance__get_CurrentGroundNo(Perf_k__BackingField, 0LL);
    if ( !this->fields._Perf_k__BackingField )
      goto LABEL_30;
    v35 = CurrentGroundNo;
    CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields._Perf_k__BackingField, 0LL);
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_30;
    v38 = CurrentGroundType;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(
                                      this->fields._Data_k__BackingField,
                                      0LL);
    v44 = (Generator_Background_o *)sub_B170CC(Generator_Background_TypeInfo, v40, v41, v42, v43);
    Generator_Background___ctor(v44, v35, v38, 0, ExistOverwriteBgIndividuality, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
      this,
      v44,
      2LL,
      this->klass->vtable._6_AddBGM.methodPtr);
  }
  else
  {
    p_Data_k__BackingField = &this->fields._Data_k__BackingField;
  }
  v45 = *p_Data_k__BackingField;
  if ( !*p_Data_k__BackingField )
    goto LABEL_30;
  overwriteBgmData_k__BackingField = v45->fields._overwriteBgmData_k__BackingField;
  if ( overwriteBgmData_k__BackingField )
  {
    BgmId_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmId_k__BackingField;
    allowSubBgmPlaying = OverwriteBattleBgmData__get_allowSubBgmPlaying(
                           v45->fields._overwriteBgmData_k__BackingField,
                           0LL);
    BgmName_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmName_k__BackingField;
    v50 = allowSubBgmPlaying;
    v55 = (Generator_BGM_o *)sub_B170CC(Generator_BGM_TypeInfo, v51, v52, v53, v54);
    Generator_BGM___ctor(v55, v45, BgmId_k__BackingField, v50, 0, BgmName_k__BackingField, 0LL);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
      this,
      v55,
      2LL,
      this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
}


void __fastcall BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v21; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19
  BattleData_o *v30; // x0

  if ( (byte_40F8D65 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__, method);
    sub_B16FFC(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, v6);
    sub_B16FFC(&Method_BattleFieldEnvironmentData_CompareData__, v7);
    sub_B16FFC(&Method_BattleFieldEnvironmentData__SortBGM_b__55_0__, v8);
    sub_B16FFC(&Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__, v9);
    sub_B16FFC(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v13);
    byte_40F8D65 = 1;
  }
  bgmList = this->fields.bgmList;
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__SortBGM_b__55_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)bgmList,
    (System_Action_T__o *)v15,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v16 = this->fields.bgmList;
  v21 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                    System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                                    v17,
                                                                    v18,
                                                                    v19,
                                                                    v20);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v21,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleFieldEnvironmentData_BGMData___ctor__);
  if ( !v16 )
    goto LABEL_9;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)v21,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_CurBGM_k__BackingField,
    (System_Int32_array **)baseBgm,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v30 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v30 )
LABEL_9:
    sub_B170D4();
  BattleData__SetOverrideBgmData(v30, *p_CurBGM_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SortBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v11; // x21
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8D64 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleFieldEnvironmentData_CompareData__, method);
    sub_B16FFC(&Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__, v6);
    sub_B16FFC(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__, v9);
    byte_40F8D64 = 1;
  }
  backgroundList = this->fields.backgroundList;
  v11 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                    System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3,
                                                                    v4);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_CompareData__,
    (const MethodInfo_25BFD48 *)Method_System_Comparison_BattleFieldEnvironmentData_BackgroundData___ctor__);
  if ( !backgroundList )
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)backgroundList,
    (System_Comparison_T__o *)v11,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_PurchaseByBank_UnityIap_Request_PurchaseResult_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_18D7980 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._CurBackGround_k__BackingField,
    (System_Int32_array **)baseBackground,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  bool isParam; // w0
  RemovedBuffInfo_o *v12; // x1
  const MethodInfo *v13; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)individuality);
  if ( !baseVals
    || (v8 = BuffData,
        Value = DataVals__GetValue(baseVals, 0LL),
        Value2 = DataVals__GetValue2(baseVals, 0LL),
        isParam = DataVals__isParam(baseVals, 89, 0LL),
        !v8) )
  {
    sub_B170D4();
  }
  v12 = BattleBuffData__subBuffFromIndividualites(v8, individuality, Value, Value2, 1, isParam, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v12, 1, v13);
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  BattleFieldEnvironmentData___c_c *v19; // x8
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__45_0; // x21
  Il2CppObject *v22; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x20
  __int64 v37; // x8
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  BattleBuffData_FieldChangeData_o *v50; // x21
  Generator_BGFromFieldChangeBGBuff_o *v51; // x22
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v53; // x22
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0

  if ( (byte_40F8D5D & 1) == 0 )
  {
    sub_B16FFC(&Generator_BGFromFieldChangeBGBuff_TypeInfo, method);
    sub_B16FFC(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___, v4);
    sub_B16FFC(&Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__45_0__, v11);
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v12);
    byte_40F8D5D = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_47;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
  v19 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( (BYTE3(BattleFieldEnvironmentData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v19 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo,
                                                                                    v14,
                                                                                    v15,
                                                                                    v16,
                                                                                    v17);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__45_0,
      v22,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__45_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData_FieldChangeData__bool___ctor__);
    v23 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v23->__9__45_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__45_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__45_0,
      (System_Int32_array **)_9__45_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v18,
          (System_Func_TSource__bool__o *)_9__45_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !v30 )
LABEL_47:
    sub_B170D4();
  klass = v30->klass;
  v32 = v30;
  if ( *(_WORD *)&v30->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_AAFEF8(v30, System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v32,
          *(_QWORD *)(p_method + 8));
  if ( !v36 )
    sub_B170D4();
  while ( 1 )
  {
    v37 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_24;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_24:
      v40 = sub_AAFEF8(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v36;
    if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v43 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
          goto LABEL_31;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_31:
      v44 = sub_AAFEF8(v36, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
    v50 = (BattleBuffData_FieldChangeData_o *)v45;
    if ( !v45 )
      sub_B170D4();
    if ( *(int *)(v45 + 24) >= 1 )
    {
      v51 = (Generator_BGFromFieldChangeBGBuff_o *)sub_B170CC(
                                                     Generator_BGFromFieldChangeBGBuff_TypeInfo,
                                                     v46,
                                                     v47,
                                                     v48,
                                                     v49);
      Generator_BGFromFieldChangeBGBuff___ctor(v51, v50, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
        this,
        v51,
        2LL,
        this->klass->vtable._6_AddBGM.methodPtr);
    }
    if ( v50->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v50->fields.bgmName, 0LL) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v53 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_B170CC(
                                                      Generator_BGMFromFieldChangeBGBuff_TypeInfo,
                                                      v46,
                                                      v47,
                                                      v48,
                                                      v49);
      Generator_BGMFromFieldChangeBGBuff___ctor(v53, Data_k__BackingField, v50, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v53,
        2LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
  }
  v54 = *(_QWORD *)v36;
  if ( *(_WORD *)(*(_QWORD *)v36 + 298LL) )
  {
    v55 = 0LL;
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v36 + 298LL) )
        goto LABEL_43;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_43:
    v57 = sub_AAFEF8(v36, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v36, *(_QWORD *)(v57 + 8));
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
    sub_B170D4();
  v8 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23094736(this, v8, 1, v9);
}


void __fastcall BattleFieldEnvironmentData__UpdateAllView(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf_k__BackingField; // x0
  struct BattlePerformance_o *v4; // x8
  BattleLogic_o *logic; // x0
  BattlePerformance_o *v6; // x0

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (BattlePerformance__UpdateFieldView(Perf_k__BackingField, 0LL), (v4 = this->fields._Perf_k__BackingField) == 0LL)
    || (logic = v4->fields.logic) == 0LL
    || (BattleLogic__updateConditionsBuffAll(logic, 0LL), (v6 = this->fields._Perf_k__BackingField) == 0LL) )
  {
    sub_B170D4();
  }
  BattlePerformance__updateStatus(v6, 0LL);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__55_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  BattleServantConfConponent_o *p_fields; // x19
  BattleBuffData_o *v7; // x20
  struct BattleBuffData_o *buffData; // t1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F8D59 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffData_TypeInfo, method);
    byte_40F8D59 = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  v7 = buffData;
  if ( !buffData )
  {
    v7 = (BattleBuffData_o *)sub_B170CC(BattleBuffData_TypeInfo, method, v2, v3, v4);
    BattleBuffData___ctor(v7, 0LL);
    p_fields->klass = (BattleServantConfConponent_c *)v7;
    sub_B16F98(p_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  }
  return v7;
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
  BattlePerformance_o *Perf_k__BackingField; // x0
  int v5; // w20
  struct BattleFieldEnvironmentData_BackgroundData_o *v6; // x8
  BattlePerformance_o *v7; // x0
  int32_t id; // w19

  CurBackGround_k__BackingField = this->fields._CurBackGround_k__BackingField;
  if ( !CurBackGround_k__BackingField )
    goto LABEL_8;
  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField )
    goto LABEL_8;
  v5 = *((_DWORD *)&CurBackGround_k__BackingField->fields.isActive + 1);
  if ( v5 == BattlePerformance__get_CurrentGroundNo(Perf_k__BackingField, 0LL) )
  {
    v6 = this->fields._CurBackGround_k__BackingField;
    if ( v6 )
    {
      v7 = this->fields._Perf_k__BackingField;
      if ( v7 )
      {
        id = v6->fields.id;
        return id != BattlePerformance__get_CurrentGroundType(v7, 0LL);
      }
    }
LABEL_8:
    sub_B170D4();
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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


void __fastcall BattleFieldEnvironmentData_BGMData___ctor_22076556(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmData_k__BackingField = bgmData;
  sub_B16F98(&this->fields._BgmData_k__BackingField, bgmData);
}


void __fastcall BattleFieldEnvironmentData_BGMData__PreGetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v3; // x1

  v3 = OverwriteBattleBgmData__ConvertToSaveData(this->fields._BgmData_k__BackingField, 0LL);
  this->fields.bgmSaveData = v3;
  sub_B16F98(&this->fields.bgmSaveData, v3);
}


void __fastcall BattleFieldEnvironmentData_BGMData__PreSetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x1

  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(this->fields.bgmSaveData, 0LL);
  this->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_B16F98(&this->fields._BgmData_k__BackingField, InstanceFromSaveData);
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
    sub_B170D4();
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
  this->fields._BgmData_k__BackingField = value;
  sub_B16F98(&this->fields._BgmData_k__BackingField, value);
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
    sub_B170D4();
  return comData->fields.grantType;
}


bool __fastcall BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0

  if ( (byte_40F8515 & 1) == 0 )
  {
    sub_B16FFC(&BattleFieldEnvironmentData___c_TypeInfo, v1);
    byte_40F8515 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleFieldEnvironmentData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleFieldEnvironmentData___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.delAfterProcType != 0;
}


bool __fastcall BattleFieldEnvironmentData___c___GetFieldIndividuality_b__46_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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

  if ( !x )
    sub_B170D4();
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0LL);
  x->fields.bgmSaveData = v4;
  sub_B16F98(&x->fields.bgmSaveData, v4);
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__42_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B170D4();
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__42_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B170D4();
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B170D4();
  return bgm->fields.isAfterReset;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__51_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_B170D4();
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

  if ( !x )
    sub_B170D4();
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0LL);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_B16F98(&x->fields._BgmData_k__BackingField, InstanceFromSaveData);
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverChangeField_b__45_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_FieldChangeData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  return comData->fields.linkBuffUid == this->fields.buffUid;
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass52_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass52_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_B170D4();
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
    sub_B170D4();
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_23095396(_4__this, x, this->fields.isAddAfterTask, 0LL);
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

  if ( (byte_40F8516 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&x);
    byte_40F8516 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_B170D4();
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}