void __fastcall EventInfoTipsArchiveListViewItem___ctor(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        UnityEngine_GameObject_o *parameterBasePrefab,
        EventInfoTipsArchiveDialog_ObjectData_array *objectDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x24
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_int__array *v18; // x24
  System_Collections_Generic_List_int__o *v19; // x25
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_int__o *v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x25
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
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
  TipsArchiveStateManager_o *v66; // x20
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v74; // x1
  __int64 v75; // x0
  __int64 v76; // x0

  if ( (byte_42B10B1 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_List_int____TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_B52984(&TipsArchiveStateManager_TypeInfo);
    byte_42B10B1 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v11;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct System_Collections_Generic_List_int__array *)sub_B5299C(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v18 )
LABEL_17:
    sub_B52A5C(v20, v21);
  if ( v19 )
  {
    v20 = (System_String_o *)sub_B52A44(v19, v18->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_16;
  }
  if ( !v18->max_length )
    goto LABEL_15;
  v18->m_Items[0] = v19;
  sub_B52920((BattleServantConfConponent_o *)v18->m_Items, (System_Int32_array **)v19, v22, v23, v24, v25, v26, v27);
  v28 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v28 )
  {
    v20 = (System_String_o *)sub_B52A44(v28, v18->obj.klass->_1.element_class);
    if ( !v20 )
      goto LABEL_16;
  }
  if ( v18->max_length <= 1 )
    goto LABEL_15;
  v18->m_Items[1] = v28;
  sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[1], (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  v35 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v35,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v35 )
  {
    v20 = (System_String_o *)sub_B52A44(v35, v18->obj.klass->_1.element_class);
    if ( !v20 )
    {
LABEL_16:
      v76 = sub_B52A7C(v20);
      sub_B52A28(v76, 0LL);
    }
  }
  if ( v18->max_length <= 2 )
  {
LABEL_15:
    v75 = sub_B52A88(v20);
    sub_B52A28(v75, 0LL);
  }
  v18->m_Items[2] = v35;
  sub_B52920((BattleServantConfConponent_o *)&v18->m_Items[2], (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
  this->fields.idCacheList = v18;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.idCacheList,
    (System_Int32_array **)v18,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)atlasList,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.parameterBasePrefab,
    (System_Int32_array **)parameterBasePrefab,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.objectDataList = objectDataList;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.objectDataList,
    (System_Int32_array **)objectDataList,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (TipsArchiveStateManager_o *)sub_B52A54(TipsArchiveStateManager_TypeInfo);
  TipsArchiveStateManager___ctor(v66, 0LL);
  this->fields.tipsArchiveStateManager = v66;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.tipsArchiveStateManager,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v20 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v20, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v74);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__CreateStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        int32_t index,
        bool isNew,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_42B10B4 & 1) == 0 )
  {
    sub_B52984(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
    byte_42B10B4 = 1;
  }
  v8 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B52A54(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v8, id, index, 0, 0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
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

  if ( (byte_42B10B3 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_B52984(&CondType_TypeInfo);
    byte_42B10B3 = 1;
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_17:
      sub_B52A5C(this, indexDataList);
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
    sub_B52A5C(this, tab);
  if ( idCacheList->max_length <= tab )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return idCacheList->m_Items[tab];
}


int32_t __fastcall EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  System_Int32_array **IdList; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_42B10B6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
    sub_B52984(&Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
    sub_B52984(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
    sub_B52984(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__);
    sub_B52984(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
    byte_42B10B6 = 1;
  }
  v5 = sub_B52A54(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
  EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___ctor(
    (EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *)v5,
    0LL);
  IdList = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v6);
  if ( !v5 )
    sub_B52A5C(IdList, v8);
  *(_QWORD *)(v5 + 16) = IdList;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), IdList, v9, v10, v11, v12, v13, v14);
  stateDataList = this->fields.stateDataList;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_1B5FB84 *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v9; // x20

  if ( (byte_42B10B5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
    sub_B52984(&Method_System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_B52984(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_B52984(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__);
    sub_B52984(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
    byte_42B10B5 = 1;
  }
  v5 = (EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *)sub_B52A54(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
  EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___ctor(v5, 0LL);
  if ( !v5
    || (v5->fields.id = id,
        stateDataList = this->fields.stateDataList,
        v9 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          (const MethodInfo_28D2DBC *)Method_System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__),
        !stateDataList) )
  {
    sub_B52A5C(v6, v7);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v9,
                                                                      (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


bool __fastcall EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x2
  System_Int32_array **IdList; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_T__o *stateDataList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_42B10B7 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
    sub_B52984(&Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
    sub_B52984(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
    sub_B52984(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__);
    sub_B52984(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
    byte_42B10B7 = 1;
  }
  v5 = sub_B52A54(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
  EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___ctor(
    (EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *)v5,
    0LL);
  IdList = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v6);
  if ( !v5 )
    sub_B52A5C(IdList, v8);
  *(_QWORD *)(v5 + 16) = IdList;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), IdList, v9, v10, v11, v12, v13, v14);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           stateDataList,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void __fastcall EventInfoTipsArchiveListViewItem__LoadData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  void *stateDataList; // x0
  EventInfoTipsArchiveListViewItem_Fields *p_fields; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  System_Int32_array **v12; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v15; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v16; // x8
  int32_t Id; // w23
  int CurrentIndex; // w21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x4
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v21; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v23; // x19
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v26; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0

  if ( (byte_42B10B2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    sub_B52984(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
    sub_B52984(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__);
    sub_B52984(&EventInfoTipsArchiveListViewItem___c_TypeInfo);
    byte_42B10B2 = 1;
  }
  p_fields = &this->fields;
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    goto LABEL_31;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)stateDataList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  stateDataList = this->fields.tipsArchiveStateManager;
  if ( !stateDataList )
    goto LABEL_31;
  stateDataList = (void *)TipsArchiveStateManager__ReadData((TipsArchiveStateManager_o *)stateDataList, 0LL);
  if ( ((unsigned __int8)stateDataList & 1) != 0 )
  {
    tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
    if ( !tipsArchiveStateManager )
      goto LABEL_31;
    v12 = (System_Int32_array **)tipsArchiveStateManager->fields.stateDataList;
    p_fields->stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v12;
    sub_B52920((BattleServantConfConponent_o *)&this->fields, v12, v5, v6, v7, v8, v9, v10);
  }
  objectDataList = this->fields.objectDataList;
  if ( !objectDataList )
LABEL_31:
    sub_B52A5C(stateDataList, method);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= max_length )
      {
        v34 = sub_B52A88(stateDataList);
        sub_B52A28(v34, 0LL);
      }
      v16 = objectDataList->m_Items[v15];
      if ( !v16 )
        goto LABEL_31;
      Id = v16->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(
                       (EventInfoTipsArchiveListViewItem_o *)stateDataList,
                       v16->fields.IndexDataList,
                       (const MethodInfo *)v5);
      stateDataList = EventInfoTipsArchiveListViewItem__GetStateData(this, Id, v19);
      if ( stateDataList )
      {
        v21 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)stateDataList;
        stateDataList = (void *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                  (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)stateDataList,
                                  0LL);
        if ( ((unsigned __int8)stateDataList & 1) == 0 )
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(
            v21,
            v21->fields.index != CurrentIndex,
            0LL);
        v21->fields.index = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->stateDataList;
        stateDataList = EventInfoTipsArchiveListViewItem__CreateStateData(0LL, Id, CurrentIndex, CurrentIndex == 1, v20);
        if ( !v22 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)stateDataList,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v15 < max_length );
  }
  v23 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)p_fields->stateDataList;
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
    v26 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v26,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    v27 = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    v27->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)_9__16_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v27->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !v23 )
    goto LABEL_31;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v23,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
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
        sub_B52920(
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
    sub_B52A5C(tipsArchiveStateManager, method);
  }
  TipsArchiveStateManager__WriteData(tipsArchiveStateManager, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem__SetSprite(
        EventInfoTipsArchiveListViewItem_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v12; // x0
  __int64 v13; // x1
  bool v14; // w20
  int v15; // w21
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B10B9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_UIAtlas___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    byte_42B10B9 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v18 = v17;
    do
    {
      v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v18,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v9 )
      {
        v14 = 0;
        v15 = 8;
        goto LABEL_16;
      }
      current = v18.fields.current;
      if ( !v18.fields.current )
        sub_B52A5C(v9, v10);
      v12 = UIAtlas__GetSprite((UIAtlas_o *)v18.fields.current, spriteName, 0LL);
    }
    while ( !v12 );
    if ( !sprite )
      sub_B52A5C(v12, v13);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v14 = 1;
    v15 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v15 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B52A5C(IsNullOrEmpty, v8);
    }
  }
  return v14;
}


void __fastcall EventInfoTipsArchiveListViewItem__SetupIdCasheList(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x20
  int max_length; // w8
  unsigned int v5; // w21
  EventInfoTipsArchiveDialog_ObjectData_o *v6; // x8
  struct System_Collections_Generic_List_int__array *idCacheList; // x9
  __int64 TabKind; // x10
  struct System_Collections_Generic_List_int__array *v9; // x8
  int v10; // w20
  il2cpp_array_size_t v11; // w21
  __int64 v12; // x0

  v2 = this;
  if ( (byte_42B10B8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_B52984(&Method_System_Collections_Generic_List_int__Sort__);
    byte_42B10B8 = 1;
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_19;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( v5 < max_length )
    {
      v6 = objectDataList->m_Items[v5];
      if ( !v6 )
        goto LABEL_19;
      idCacheList = v2->fields.idCacheList;
      if ( !idCacheList )
        goto LABEL_19;
      TabKind = v6->fields.TabKind;
      if ( (unsigned int)TabKind >= idCacheList->max_length )
        break;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        goto LABEL_19;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        v6->fields.Id,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = objectDataList->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_12;
    }
LABEL_21:
    v12 = sub_B52A88(this);
    sub_B52A28(v12, 0LL);
  }
LABEL_12:
  v9 = v2->fields.idCacheList;
  if ( !v9 )
LABEL_19:
    sub_B52A5C(this, method);
  v10 = v9->max_length;
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( v11 < v9->max_length )
    {
      this = (EventInfoTipsArchiveListViewItem_o *)v9->m_Items[v11];
      if ( !this )
        goto LABEL_19;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3058ED0 *)Method_System_Collections_Generic_List_int__Sort__);
      if ( (int)++v11 >= v10 )
        return;
      v9 = v2->fields.idCacheList;
      if ( !v9 )
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, value);
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
  Il2CppObject *v1; // x19
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42AD911 & 1) == 0 )
  {
    sub_B52984(&EventInfoTipsArchiveListViewItem___c_TypeInfo);
    byte_42AD911 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(EventInfoTipsArchiveListViewItem___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
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
    sub_B52A5C(this, 0LL);
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
  Il2CppObject *v5; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v10; // x20

  if ( (byte_42AD912 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__);
    sub_B52984(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
    byte_42AD912 = 1;
  }
  v5 = (Il2CppObject *)sub_B52A54(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  v5[1].klass = (Il2CppClass *)a;
  v8 = v5 + 1;
  sub_B52920(&v5[1]);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v10 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  v6 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v10,
         (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___);
  if ( v6 )
  {
    if ( v8->klass )
      return (__int64)v8->klass->_1.namespaze & 1;
LABEL_8:
    sub_B52A5C(v6, v7);
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
    sub_B52A5C(this, b);
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
  Il2CppObject *v5; // x22
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v10; // x20

  if ( (byte_42AD913 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__);
    sub_B52984(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
    byte_42AD913 = 1;
  }
  v5 = (Il2CppObject *)sub_B52A54(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  v5[1].klass = (Il2CppClass *)a;
  v8 = v5 + 1;
  sub_B52920(&v5[1]);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v10 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v10,
    v5,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
  v6 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v10,
         (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___);
  if ( v6 )
  {
    if ( v8->klass )
      return (__int64)v8->klass->_1.namespaze & 1;
LABEL_8:
    sub_B52A5C(v6, v7);
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
    sub_B52A5C(this, b);
  return a->fields.id == b;
}