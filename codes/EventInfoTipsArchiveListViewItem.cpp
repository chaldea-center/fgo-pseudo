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
  struct System_Collections_Generic_List_int__array *v23; // x24
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_int__o *v26; // x25
  System_String_o *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_int__o *v36; // x25
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Collections_Generic_List_int__o *v45; // x25
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
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
  __int64 v76; // x1
  __int64 v77; // x2
  TipsArchiveStateManager_o *v78; // x20
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v86; // x1
  __int64 v87; // x0
  __int64 v88; // x0

  if ( (byte_421596E & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, *(_QWORD *)&eventUiId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v14);
    sub_B0D8A4(&TipsArchiveStateManager_TypeInfo, v15);
    byte_421596E = 1;
  }
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                                                                  *(_QWORD *)&eventUiId,
                                                                                                  atlasList);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v16;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v16, v17, v18, v19, v20, v21, v22);
  v23 = (struct System_Collections_Generic_List_int__array *)sub_B0D8BC(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL);
  v26 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v23 )
LABEL_17:
    sub_B0D97C(v27);
  if ( v26 )
  {
    v27 = (System_String_o *)sub_B0D964(v26, v23->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_16;
  }
  if ( !v23->max_length )
    goto LABEL_15;
  v23->m_Items[0] = v26;
  sub_B0D840((BattleServantConfConponent_o *)v23->m_Items, (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
  v36 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v34, v35);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v36 )
  {
    v27 = (System_String_o *)sub_B0D964(v36, v23->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_16;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_15;
  v23->m_Items[1] = v36;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[1], (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
  v45 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v43, v44);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v45 )
  {
    v27 = (System_String_o *)sub_B0D964(v45, v23->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_16:
      v88 = sub_B0D99C(v27);
      sub_B0D948(v88, 0LL);
    }
  }
  if ( v23->max_length <= 2 )
  {
LABEL_15:
    v87 = sub_B0D9A8(v27);
    sub_B0D948(v87, 0LL);
  }
  v23->m_Items[2] = v45;
  sub_B0D840((BattleServantConfConponent_o *)&v23->m_Items[2], (System_Int32_array **)v45, v46, v47, v48, v49, v50, v51);
  this->fields.idCacheList = v23;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.idCacheList,
    (System_Int32_array **)v23,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)atlasList,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.parameterBasePrefab,
    (System_Int32_array **)parameterBasePrefab,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.objectDataList = objectDataList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.objectDataList,
    (System_Int32_array **)objectDataList,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v78 = (TipsArchiveStateManager_o *)sub_B0D974(TipsArchiveStateManager_TypeInfo, v76, v77);
  TipsArchiveStateManager___ctor(v78, 0LL);
  this->fields.tipsArchiveStateManager = v78;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tipsArchiveStateManager,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v27 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v27, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v86);
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
  __int64 v9; // x0

  if ( (byte_4215971 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, *(_QWORD *)&id);
    byte_4215971 = 1;
  }
  v8 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B0D974(
                                                                    EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo,
                                                                    *(_QWORD *)&id,
                                                                    *(_QWORD *)&index);
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v8, id, index, 0, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
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
  __int64 v11; // x0

  if ( (byte_4215970 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_B0D8A4(&CondType_TypeInfo, indexDataList);
    byte_4215970 = 1;
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
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
      }
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_17:
      sub_B0D97C(this);
    }
  }
  return 0;
}


System_Collections_Generic_List_int__o *__fastcall EventInfoTipsArchiveListViewItem__GetIdList(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__array *idCacheList; // x8
  __int64 v5; // x0

  idCacheList = this->fields.idCacheList;
  if ( !idCacheList )
    sub_B0D97C(this);
  if ( idCacheList->max_length <= tab )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
  return idCacheList->m_Items[tab];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  const MethodInfo *v10; // x2
  System_Int32_array **IdList; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20

  if ( (byte_4215973 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      *(_QWORD *)&tab);
    sub_B0D8A4(&Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__, v7);
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, v8);
    byte_4215973 = 1;
  }
  v9 = sub_B0D974(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&tab, method);
  EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___ctor(
    (EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *)v9,
    0LL);
  IdList = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v10);
  if ( !v9 )
    sub_B0D97C(IdList);
  *(_QWORD *)(v9 + 16) = IdList;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), IdList, v12, v13, v14, v15, v16, v17);
  stateDataList = this->fields.stateDataList;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v21,
           (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


// local variable allocation has failed, the output may be wrong!
EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4215972 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__,
      *(_QWORD *)&id);
    sub_B0D8A4(&Method_System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__, v7);
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, v8);
    byte_4215972 = 1;
  }
  v9 = (EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *)sub_B0D974(
                                                                     EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo,
                                                                     *(_QWORD *)&id,
                                                                     method);
  EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.id = id,
        stateDataList = this->fields.stateDataList,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__),
        !stateDataList) )
  {
    sub_B0D97C(v10);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v14,
                                                                      (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  const MethodInfo *v10; // x2
  System_Int32_array **IdList; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_T__o *stateDataList; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20

  if ( (byte_4215974 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___, *(_QWORD *)&tab);
    sub_B0D8A4(&Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__, v7);
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, v8);
    byte_4215974 = 1;
  }
  v9 = sub_B0D974(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, *(_QWORD *)&tab, method);
  EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___ctor(
    (EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *)v9,
    0LL);
  IdList = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v10);
  if ( !v9 )
    sub_B0D97C(IdList);
  *(_QWORD *)(v9 + 16) = IdList;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), IdList, v12, v13, v14, v15, v16, v17);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           stateDataList,
           (System_Func_T__bool__o *)v21,
           (const MethodInfo_1707138 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
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
  void *stateDataList; // x0
  EventInfoTipsArchiveListViewItem_Fields *p_fields; // x20
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  System_Int32_array **v19; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v22; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v23; // x8
  int32_t Id; // w23
  int CurrentIndex; // w21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x4
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v28; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v30; // x19
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v33; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0

  if ( (byte_421596F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__, method);
    sub_B0D8A4(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__, v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__,
      v6);
    sub_B0D8A4(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, v7);
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v8);
    byte_421596F = 1;
  }
  p_fields = &this->fields;
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    goto LABEL_31;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)stateDataList,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  stateDataList = this->fields.tipsArchiveStateManager;
  if ( !stateDataList )
    goto LABEL_31;
  stateDataList = (void *)TipsArchiveStateManager__ReadData((TipsArchiveStateManager_o *)stateDataList, 0LL);
  if ( ((unsigned __int8)stateDataList & 1) != 0 )
  {
    tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
    if ( !tipsArchiveStateManager )
      goto LABEL_31;
    v19 = (System_Int32_array **)tipsArchiveStateManager->fields.stateDataList;
    p_fields->stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v19;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields, v19, v12, v13, v14, v15, v16, v17);
  }
  objectDataList = this->fields.objectDataList;
  if ( !objectDataList )
LABEL_31:
    sub_B0D97C(stateDataList);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= max_length )
      {
        v41 = sub_B0D9A8(stateDataList);
        sub_B0D948(v41, 0LL);
      }
      v23 = objectDataList->m_Items[v22];
      if ( !v23 )
        goto LABEL_31;
      Id = v23->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(
                       (EventInfoTipsArchiveListViewItem_o *)stateDataList,
                       v23->fields.IndexDataList,
                       (const MethodInfo *)v12);
      stateDataList = EventInfoTipsArchiveListViewItem__GetStateData(this, Id, v26);
      if ( stateDataList )
      {
        v28 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)stateDataList;
        stateDataList = (void *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                  (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)stateDataList,
                                  0LL);
        if ( ((unsigned __int8)stateDataList & 1) == 0 )
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(
            v28,
            v28->fields.index != CurrentIndex,
            0LL);
        v28->fields.index = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->stateDataList;
        stateDataList = EventInfoTipsArchiveListViewItem__CreateStateData(0LL, Id, CurrentIndex, CurrentIndex == 1, v27);
        if ( !v29 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          (EventMissionProgressRequest_Argument_ProgressData_o *)stateDataList,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v22 < max_length );
  }
  v30 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)p_fields->stateDataList;
  stateDataList = EventInfoTipsArchiveListViewItem___c_TypeInfo;
  if ( (BYTE3(EventInfoTipsArchiveListViewItem___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventInfoTipsArchiveListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItem___c_TypeInfo);
    stateDataList = EventInfoTipsArchiveListViewItem___c_TypeInfo;
  }
  static_fields = (struct EventInfoTipsArchiveListViewItem___c_StaticFields *)*((_QWORD *)stateDataList + 23);
  _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__16_0;
  if ( !_9__16_0 )
  {
    if ( (*((_BYTE *)stateDataList + 307) & 4) != 0 && !*((_DWORD *)stateDataList + 56) )
    {
      j_il2cpp_runtime_class_init_0(stateDataList);
      static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                                           v11,
                                                                           v12);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v33,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    v34 = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    v34->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)_9__16_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v34->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  if ( !v30 )
    goto LABEL_31;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v30,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
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

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager
    || (stateDataList = (System_Int32_array **)this->fields.stateDataList,
        tipsArchiveStateManager->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)stateDataList,
        sub_B0D840(
          (BattleServantConfConponent_o *)&tipsArchiveStateManager->fields.stateDataList,
          stateDataList,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (tipsArchiveStateManager = this->fields.tipsArchiveStateManager) == 0LL) )
  {
    sub_B0D97C(tipsArchiveStateManager);
  }
  TipsArchiveStateManager__WriteData(tipsArchiveStateManager, 0LL);
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
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  _BOOL8 v12; // x0
  Il2CppObject *current; // x21
  UISpriteData_o *v14; // x0
  bool v15; // w20
  int v16; // w21
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4215976 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4215976 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( !sprite )
      goto LABEL_20;
    UISprite__set_spriteName(sprite, 0LL, 0LL);
    return 1;
  }
  else
  {
    IsNullOrEmpty = this->fields.atlasList;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v19 = v18;
    do
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v12 )
      {
        v15 = 0;
        v16 = 8;
        goto LABEL_16;
      }
      current = v19.fields.current;
      if ( !v19.fields.current )
        sub_B0D97C(v12);
      v14 = UIAtlas__GetSprite((UIAtlas_o *)v19.fields.current, spriteName, 0LL);
    }
    while ( !v14 );
    if ( !sprite )
      sub_B0D97C(v14);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v15 = 1;
    v16 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v16 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B0D97C(IsNullOrEmpty);
    }
  }
  return v15;
}


void __fastcall EventInfoTipsArchiveListViewItem__SetupIdCasheList(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  __int64 v3; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x20
  int max_length; // w8
  unsigned int v6; // w21
  EventInfoTipsArchiveDialog_ObjectData_o *v7; // x8
  struct System_Collections_Generic_List_int__array *idCacheList; // x9
  __int64 TabKind; // x10
  struct System_Collections_Generic_List_int__array *v10; // x8
  int v11; // w20
  il2cpp_array_size_t v12; // w21
  __int64 v13; // x0

  v2 = this;
  if ( (byte_4215975 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_int__Sort__, v3);
    byte_4215975 = 1;
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_19;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( v6 < max_length )
    {
      v7 = objectDataList->m_Items[v6];
      if ( !v7 )
        goto LABEL_19;
      idCacheList = v2->fields.idCacheList;
      if ( !idCacheList )
        goto LABEL_19;
      TabKind = v7->fields.TabKind;
      if ( (unsigned int)TabKind >= idCacheList->max_length )
        break;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        goto LABEL_19;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        v7->fields.Id,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = objectDataList->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_12;
    }
LABEL_21:
    v13 = sub_B0D9A8(this);
    sub_B0D948(v13, 0LL);
  }
LABEL_12:
  v10 = v2->fields.idCacheList;
  if ( !v10 )
LABEL_19:
    sub_B0D97C(this);
  v11 = v10->max_length;
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( v12 < v10->max_length )
    {
      this = (EventInfoTipsArchiveListViewItem_o *)v10->m_Items[v12];
      if ( !this )
        goto LABEL_19;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_2FB1E20 *)Method_System_Collections_Generic_List_int__Sort__);
      if ( (int)++v12 >= v11 )
        return;
      v10 = v2->fields.idCacheList;
      if ( !v10 )
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  Il2CppObject *v3; // x19
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_4211B7A & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v1);
    byte_4211B7A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventInfoTipsArchiveListViewItem___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  _BOOL8 v10; // x0
  Il2CppObject *v11; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_int__bool__o *v15; // x20

  if ( (byte_4211B7B & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, a);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__, v7);
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, v8);
    byte_4211B7B = 1;
  }
  v9 = (Il2CppObject *)sub_B0D974(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, a, method);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  v9[1].klass = (Il2CppClass *)a;
  v11 = v9 + 1;
  sub_B0D840(&v9[1], a);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v15 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v13, v14);
  System_Func_int__bool____ctor(
    v15,
    v9,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v10 = BasicHelper__Any_int_(
          idList,
          (System_Func_T__bool__o *)v15,
          (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___);
  if ( v10 )
  {
    if ( v11->klass )
      return (__int64)v11->klass->_1.namespaze & 1;
LABEL_8:
    sub_B0D97C(v10);
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  _BOOL8 v10; // x0
  Il2CppObject *v11; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_int__bool__o *v15; // x20

  if ( (byte_4211B7C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, a);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__, v7);
    sub_B0D8A4(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, v8);
    byte_4211B7C = 1;
  }
  v9 = (Il2CppObject *)sub_B0D974(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, a, method);
  System_Object___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  v9[1].klass = (Il2CppClass *)a;
  v11 = v9 + 1;
  sub_B0D840(&v9[1], a);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v15 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v13, v14);
  System_Func_int__bool____ctor(
    v15,
    v9,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v10 = BasicHelper__Any_int_(
          idList,
          (System_Func_T__bool__o *)v15,
          (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___);
  if ( v10 )
  {
    if ( v11->klass )
      return (__int64)v11->klass->_1.namespaze & 1;
LABEL_8:
    sub_B0D97C(v10);
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
    sub_B0D97C(this);
  return a->fields.id == b;
}