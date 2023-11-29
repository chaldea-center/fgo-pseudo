// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewItem___ctor(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        UnityEngine_GameObject_o *parameterBasePrefab,
        EventInfoTipsArchiveDialog_ObjectData_array *objectDataList,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x24
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x2
  struct System_Collections_Generic_List_int__array *v24; // x24
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_int__o *v29; // x25
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Generic_List_int__o *v42; // x25
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_List_int__o *v52; // x25
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  TipsArchiveStateManager_o *v86; // x20
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  System_String_o *v94; // x0
  const MethodInfo *v95; // x1

  if ( (byte_40FA19A & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_List_int____TypeInfo, *(_QWORD *)&eventUiId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v14);
    sub_B16FFC(&TipsArchiveStateManager_TypeInfo, v15);
    byte_40FA19A = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                                                                  *(_QWORD *)&eventUiId,
                                                                                                  atlasList,
                                                                                                  parameterBasePrefab,
                                                                                                  objectDataList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v16;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v24 = (struct System_Collections_Generic_List_int__array *)sub_B17014(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL,
                                                               v23);
  v29 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v25,
                                                    v26,
                                                    v27,
                                                    v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v24 )
LABEL_17:
    sub_B170D4();
  if ( v29 )
  {
    v30 = sub_B170BC(v29, v24->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_16;
  }
  if ( !v24->max_length )
    goto LABEL_15;
  v24->m_Items[0] = v29;
  sub_B16F98((BattleServantConfConponent_o *)v24->m_Items, (System_Int32_array **)v29, v32, v33, v34, v35, v36, v37);
  v42 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v38,
                                                    v39,
                                                    v40,
                                                    v41);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v42 )
  {
    v30 = sub_B170BC(v42, v24->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_16;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_15;
  v24->m_Items[1] = v42;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[1], (System_Int32_array **)v42, v32, v43, v44, v45, v46, v47);
  v52 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v48,
                                                    v49,
                                                    v50,
                                                    v51);
  System_Collections_Generic_List_int____ctor(
    v52,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v52 )
  {
    v30 = sub_B170BC(v52, v24->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_16:
      sub_B170F4(v30);
      sub_B170A0();
    }
  }
  if ( v24->max_length <= 2 )
  {
LABEL_15:
    sub_B17100(v30, v31, v32);
    sub_B170A0();
  }
  v24->m_Items[2] = v52;
  sub_B16F98((BattleServantConfConponent_o *)&v24->m_Items[2], (System_Int32_array **)v52, v32, v53, v54, v55, v56, v57);
  this->fields.idCacheList = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.idCacheList,
    (System_Int32_array **)v24,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)atlasList,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.parameterBasePrefab,
    (System_Int32_array **)parameterBasePrefab,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  this->fields.objectDataList = objectDataList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objectDataList,
    (System_Int32_array **)objectDataList,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v86 = (TipsArchiveStateManager_o *)sub_B170CC(TipsArchiveStateManager_TypeInfo, v82, v83, v84, v85);
  TipsArchiveStateManager___ctor(v86, 0LL);
  this->fields.tipsArchiveStateManager = v86;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tipsArchiveStateManager,
    (System_Int32_array **)v86,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v94 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v94, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v95);
}


// local variable allocation has failed, the output may be wrong!
EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__CreateStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        int32_t index,
        bool isNew,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v8; // x21

  if ( (byte_40FA19D & 1) == 0 )
  {
    sub_B16FFC(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, *(_QWORD *)&id);
    byte_40FA19D = 1;
  }
  v8 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B170CC(
                                                                    EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo,
                                                                    *(_QWORD *)&id,
                                                                    *(_QWORD *)&index,
                                                                    isNew,
                                                                    method);
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v8, id, index, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(v8, isNew, 0LL);
  return v8;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem__GetCurrentIndex(
        EventInfoTipsArchiveListViewItem_o *this,
        EventInfoTipsArchiveDialog_IndexData_array *indexDataList,
        const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // w21
  Il2CppClass **v5; // x23
  Il2CppClass *v6; // x8
  char *v7; // x23
  Il2CppClass *v8; // t1
  int32_t name_high; // w20

  if ( (byte_40FA19C & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_B16FFC(&CondType_TypeInfo, indexDataList);
    byte_40FA19C = 1;
  }
  if ( !indexDataList )
    goto LABEL_17;
  max_length = indexDataList->max_length;
  while ( (--max_length & 0x80000000) == 0 )
  {
    if ( max_length >= indexDataList->max_length )
      goto LABEL_16;
    v5 = &indexDataList->obj.klass + (int)max_length;
    v8 = v5[4];
    v7 = (char *)(v5 + 4);
    v6 = v8;
    if ( !v8 )
      goto LABEL_17;
    name_high = HIDWORD(v6->_1.name);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(113, name_high, 0LL, 0, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( max_length >= indexDataList->max_length )
      {
LABEL_16:
        sub_B17100(this, indexDataList, method);
        sub_B170A0();
      }
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_17:
      sub_B170D4();
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall EventInfoTipsArchiveListViewItem__GetIdList(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *idCacheList; // x8

  idCacheList = this->fields.idCacheList;
  if ( !idCacheList )
    sub_B170D4();
  if ( idCacheList->max_length <= tab )
  {
    sub_B17100(this, *(_QWORD *)&tab, method);
    sub_B170A0();
  }
  return idCacheList->m_Items[tab];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  const MethodInfo *v12; // x2
  System_Int32_array **IdList; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20

  if ( (byte_40FA19F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      *(_QWORD *)&tab);
    sub_B16FFC(&Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__, v9);
    sub_B16FFC(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, v10);
    byte_40FA19F = 1;
  }
  v11 = sub_B170CC(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&tab, method, v3, v4);
  EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___ctor(
    (EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *)v11,
    0LL);
  IdList = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v12);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = IdList;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), IdList, v14, v15, v16, v17, v18, v19);
  stateDataList = this->fields.stateDataList;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo,
                                                                             v21,
                                                                             v22,
                                                                             v23,
                                                                             v24);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v11,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v25,
           (const MethodInfo_18D4A90 *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


// local variable allocation has failed, the output may be wrong!
EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40FA19E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__,
      *(_QWORD *)&id);
    sub_B16FFC(&Method_System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__, v7);
    sub_B16FFC(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__, v9);
    sub_B16FFC(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, v10);
    byte_40FA19E = 1;
  }
  v11 = (EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *)sub_B170CC(
                                                                      EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo,
                                                                      *(_QWORD *)&id,
                                                                      method,
                                                                      v3,
                                                                      v4);
  EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.id = id,
        stateDataList = this->fields.stateDataList,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__),
        !stateDataList) )
  {
    sub_B170D4();
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v17,
                                                                      (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  const MethodInfo *v12; // x2
  System_Int32_array **IdList; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_T__o *stateDataList; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20

  if ( (byte_40FA1A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___, *(_QWORD *)&tab);
    sub_B16FFC(&Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__, v9);
    sub_B16FFC(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, v10);
    byte_40FA1A0 = 1;
  }
  v11 = sub_B170CC(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, *(_QWORD *)&tab, method, v3, v4);
  EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___ctor(
    (EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *)v11,
    0LL);
  IdList = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v12);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = IdList;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), IdList, v14, v15, v16, v17, v18, v19);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo,
                                                                             v21,
                                                                             v22,
                                                                             v23,
                                                                             v24);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v11,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           stateDataList,
           (System_Func_T__bool__o *)v25,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void __fastcall EventInfoTipsArchiveListViewItem__LoadData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x0
  EventInfoTipsArchiveListViewItem_Fields *p_fields; // x20
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x0
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *Data; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct TipsArchiveStateManager_o *v20; // x8
  System_Int32_array **v21; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v24; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v25; // x8
  int32_t Id; // w23
  int CurrentIndex; // w21
  const MethodInfo *v28; // x2
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v29; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x22
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *StateData; // x0
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v32; // x19
  EventInfoTipsArchiveListViewItem___c_c *v33; // x0
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v36; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40FA19B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__, method);
    sub_B16FFC(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__, v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__,
      v6);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, v7);
    sub_B16FFC(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v8);
    byte_40FA19B = 1;
  }
  p_fields = &this->fields;
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    goto LABEL_31;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)stateDataList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    goto LABEL_31;
  Data = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)TipsArchiveStateManager__ReadData(
                                                                      tipsArchiveStateManager,
                                                                      0LL);
  if ( ((unsigned __int8)Data & 1) != 0 )
  {
    v20 = this->fields.tipsArchiveStateManager;
    if ( !v20 )
      goto LABEL_31;
    v21 = (System_Int32_array **)v20->fields.stateDataList;
    p_fields->stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v21;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, v21, v14, v15, v16, v17, v18, v19);
  }
  objectDataList = this->fields.objectDataList;
  if ( !objectDataList )
LABEL_31:
    sub_B170D4();
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    do
    {
      if ( v24 >= max_length )
      {
        sub_B17100(Data, v13, v14);
        sub_B170A0();
      }
      v25 = objectDataList->m_Items[v24];
      if ( !v25 )
        goto LABEL_31;
      Id = v25->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(
                       (EventInfoTipsArchiveListViewItem_o *)Data,
                       v25->fields.IndexDataList,
                       (const MethodInfo *)v14);
      Data = EventInfoTipsArchiveListViewItem__GetStateData(this, Id, v28);
      if ( Data )
      {
        v29 = Data;
        Data = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                                                            Data,
                                                                            0LL);
        if ( ((unsigned __int8)Data & 1) == 0 )
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(
            v29,
            v29->fields.index != CurrentIndex,
            0LL);
        v29->fields.index = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->stateDataList;
        StateData = EventInfoTipsArchiveListViewItem__CreateStateData(
                      0LL,
                      Id,
                      CurrentIndex,
                      CurrentIndex == 1,
                      (const MethodInfo *)v16);
        if ( !v30 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          (EventMissionProgressRequest_Argument_ProgressData_o *)StateData,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v24 < max_length );
  }
  v32 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)p_fields->stateDataList;
  v33 = EventInfoTipsArchiveListViewItem___c_TypeInfo;
  if ( (BYTE3(EventInfoTipsArchiveListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoTipsArchiveListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItem___c_TypeInfo);
    v33 = EventInfoTipsArchiveListViewItem___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                                           v13,
                                                                           v14,
                                                                           v15,
                                                                           v16);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v36,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    v37 = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    v37->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)_9__16_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v37->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !v32 )
    goto LABEL_31;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v32,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
}


void __fastcall EventInfoTipsArchiveListViewItem__SaveData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x0
  System_Int32_array **stateDataList; // x1
  TipsArchiveStateManager_o *v11; // x0

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager
    || (stateDataList = (System_Int32_array **)this->fields.stateDataList,
        tipsArchiveStateManager->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)stateDataList,
        sub_B16F98(
          (BattleServantConfConponent_o *)&tipsArchiveStateManager->fields.stateDataList,
          stateDataList,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (v11 = this->fields.tipsArchiveStateManager) == 0LL) )
  {
    sub_B170D4();
  }
  TipsArchiveStateManager__WriteData(v11, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem__SetSprite(
        EventInfoTipsArchiveListViewItem_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_UIAtlas__o *atlasList; // x0
  Il2CppObject *current; // x21
  bool v13; // w20
  int v14; // w21
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FA1A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_40FA1A2 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( System_String__IsNullOrEmpty(spriteName, 0LL)
    || !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_UIAtlas___) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    atlasList = this->fields.atlasList;
    if ( !atlasList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)atlasList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v17 = v16;
    do
    {
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__) )
      {
        v13 = 0;
        v14 = 8;
        goto LABEL_16;
      }
      current = v17.fields.current;
      if ( !v17.fields.current )
        sub_B170D4();
    }
    while ( !UIAtlas__GetSprite((UIAtlas_o *)v17.fields.current, spriteName, 0LL) );
    if ( !sprite )
      sub_B170D4();
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v13 = 1;
    v14 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v14 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B170D4();
    }
  }
  return v13;
}


void __fastcall EventInfoTipsArchiveListViewItem__SetupIdCasheList(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoTipsArchiveListViewItem_o *v3; // x19
  __int64 v4; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x20
  int max_length; // w8
  unsigned int v7; // w21
  EventInfoTipsArchiveDialog_ObjectData_o *v8; // x8
  struct System_Collections_Generic_List_int__array *idCacheList; // x9
  __int64 TabKind; // x10
  System_Collections_Generic_List_int__o *v11; // x0
  struct System_Collections_Generic_List_int__array *v12; // x8
  int v13; // w20
  il2cpp_array_size_t v14; // w21
  System_Collections_Generic_List_int__o *v15; // x0

  v3 = this;
  if ( (byte_40FA1A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort__, v4);
    byte_40FA1A1 = 1;
  }
  objectDataList = v3->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_19;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( v7 < max_length )
    {
      v8 = objectDataList->m_Items[v7];
      if ( !v8 )
        goto LABEL_19;
      idCacheList = v3->fields.idCacheList;
      if ( !idCacheList )
        goto LABEL_19;
      TabKind = v8->fields.TabKind;
      if ( (unsigned int)TabKind >= idCacheList->max_length )
        break;
      v11 = idCacheList->m_Items[TabKind];
      if ( !v11 )
        goto LABEL_19;
      System_Collections_Generic_List_int___Add(
        v11,
        v8->fields.Id,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = objectDataList->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_12;
    }
LABEL_21:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
LABEL_12:
  v12 = v3->fields.idCacheList;
  if ( !v12 )
LABEL_19:
    sub_B170D4();
  v13 = v12->max_length;
  if ( v13 >= 1 )
  {
    v14 = 0;
    while ( v14 < v12->max_length )
    {
      v15 = v12->m_Items[v14];
      if ( !v15 )
        goto LABEL_19;
      System_Collections_Generic_List_int___Sort(
        v15,
        (const MethodInfo_2F12410 *)Method_System_Collections_Generic_List_int__Sort__);
      if ( (int)++v14 >= v13 )
        return;
      v12 = v3->fields.idCacheList;
      if ( !v12 )
        goto LABEL_19;
    }
    goto LABEL_21;
  }
}


int32_t __fastcall EventInfoTipsArchiveListViewItem__get_EventUiId(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUiId;
}


bool __fastcall EventInfoTipsArchiveListViewItem__get_IsModfiy(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    sub_B170D4();
  return tipsArchiveStateManager->fields.isModfiy;
}


UnityEngine_GameObject_o *__fastcall EventInfoTipsArchiveListViewItem__get_ParameterBasePrefab(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.parameterBasePrefab;
}


void __fastcall EventInfoTipsArchiveListViewItem__set_IsModfiy(
        EventInfoTipsArchiveListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    sub_B170D4();
  tipsArchiveStateManager->fields.isModfiy = value;
}


void __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        int32_t id,
        int32_t index,
        int32_t state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.id = id;
  this->fields.index = index;
  this->fields.state = state;
}


bool __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.state & 1;
}


void __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        bool isActive,
        const MethodInfo *method)
{
  int32_t state; // w8
  unsigned int v4; // w9
  int v5; // w8

  state = this->fields.state;
  v4 = state & 0xFFFFFFFE;
  v5 = state | 1;
  if ( !isActive )
    v5 = v4;
  this->fields.state = v5;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Id(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_Index(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.index;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__get_State(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        const MethodInfo *method)
{
  return this->fields.state;
}


void __fastcall EventInfoTipsArchiveListViewItem_TipsArchiveStateData__set_Index(
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.index = value;
}


void __fastcall EventInfoTipsArchiveListViewItem___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F6FE2 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v1);
    byte_40F6FE2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoTipsArchiveListViewItem___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall EventInfoTipsArchiveListViewItem___c___ctor(
        EventInfoTipsArchiveListViewItem___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventInfoTipsArchiveListViewItem___c___LoadData_b__16_0(
        EventInfoTipsArchiveListViewItem___c_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.id - b->fields.id;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___GetStateData_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B170D4();
  return n->fields.id == this->fields.id;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___GetNewDispCountByTab_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_int__bool__o *v24; // x20

  if ( (byte_40F6FE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, a);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__, v9);
    sub_B16FFC(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, v10);
    byte_40F6FE3 = 1;
  }
  v11 = sub_B170CC(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, a, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = a;
  v18 = v11 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)a, v12, v13, v14, v15, v16, v17);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v24 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v20, v21, v22, v23);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v24,
         (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___) )
  {
    if ( *(_QWORD *)v18 )
      return *(_BYTE *)(*(_QWORD *)v18 + 24LL) & 1;
LABEL_8:
    sub_B170D4();
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___GetNewDispCountByTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_B170D4();
  return a->fields.id == b;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___IsNewDispTab_b__0(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *this,
        EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Func_int__bool__o *v24; // x20

  if ( (byte_40F6FE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, a);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__, v9);
    sub_B16FFC(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, v10);
    byte_40F6FE4 = 1;
  }
  v11 = sub_B170CC(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, a, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = a;
  v18 = v11 + 16;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)a, v12, v13, v14, v15, v16, v17);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v24 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v20, v21, v22, v23);
  System_Func_int__bool____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  if ( BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v24,
         (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___) )
  {
    if ( *(_QWORD *)v18 )
      return *(_BYTE *)(*(_QWORD *)v18 + 24LL) & 1;
LABEL_8:
    sub_B170D4();
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___IsNewDispTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_B170D4();
  return a->fields.id == b;
}