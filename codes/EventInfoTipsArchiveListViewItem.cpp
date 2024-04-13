void __fastcall EventInfoTipsArchiveListViewItem___ctor(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t eventUiId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        UnityEngine_GameObject_o *parameterBasePrefab,
        EventInfoTipsArchiveDialog_ObjectData_array *objectDataList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x24
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Collections_Generic_List_int__array *v33; // x24
  System_Collections_Generic_List_int__o *v34; // x25
  System_String_o *v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_int__o *v43; // x25
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_List_int__o *v50; // x25
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  TipsArchiveStateManager_o *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v89; // x1
  __int64 v90; // x0
  __int64 v91; // x0

  if ( (byte_42E9A7B & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, eventUiId, (_DWORD)atlasList, parameterBasePrefab);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
      v20,
      v21,
      v22);
    sub_B5D5C4(&TipsArchiveStateManager_TypeInfo, v23, v24, v25);
    byte_42E9A7B = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v26;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  v33 = (struct System_Collections_Generic_List_int__array *)sub_B5D5DC(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL);
  v34 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v33 )
LABEL_17:
    sub_B5D69C(v35, v36);
  if ( v34 )
  {
    v35 = (System_String_o *)sub_B5D684(v34, v33->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_16;
  }
  if ( !v33->max_length )
    goto LABEL_15;
  v33->m_Items[0] = v34;
  sub_B5D560((BattleServantConfConponent_o *)v33->m_Items, (System_Int32_array **)v34, v37, v38, v39, v40, v41, v42);
  v43 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( v43 )
  {
    v35 = (System_String_o *)sub_B5D684(v43, v33->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_16;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_15;
  v33->m_Items[1] = v43;
  sub_B5D560((BattleServantConfConponent_o *)&v33->m_Items[1], (System_Int32_array **)v43, v44, v45, v46, v47, v48, v49);
  v50 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v50,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( v50 )
  {
    v35 = (System_String_o *)sub_B5D684(v50, v33->obj.klass->_1.element_class);
    if ( !v35 )
    {
LABEL_16:
      v91 = sub_B5D6BC(v35);
      sub_B5D668(v91, 0LL);
    }
  }
  if ( v33->max_length <= 2 )
  {
LABEL_15:
    v90 = sub_B5D6C8(v35);
    sub_B5D668(v90, 0LL);
  }
  v33->m_Items[2] = v50;
  sub_B5D560((BattleServantConfConponent_o *)&v33->m_Items[2], (System_Int32_array **)v50, v51, v52, v53, v54, v55, v56);
  this->fields.idCacheList = v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.idCacheList,
    (System_Int32_array **)v33,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.atlasList,
    (System_Int32_array **)atlasList,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.parameterBasePrefab,
    (System_Int32_array **)parameterBasePrefab,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  this->fields.objectDataList = objectDataList;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objectDataList,
    (System_Int32_array **)objectDataList,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = (TipsArchiveStateManager_o *)sub_B5D694(TipsArchiveStateManager_TypeInfo);
  TipsArchiveStateManager___ctor(v81, 0LL);
  this->fields.tipsArchiveStateManager = v81;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tipsArchiveStateManager,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v35 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v35, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v89);
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
  __int64 v10; // x1

  if ( (byte_42E9A7E & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, id, index, isNew);
    byte_42E9A7E = 1;
  }
  v8 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)sub_B5D694(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor(v8, id, index, 0, 0LL);
  if ( !v8 )
    sub_B5D69C(v9, v10);
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(v8, isNew, 0LL);
  return v8;
}


int32_t __fastcall EventInfoTipsArchiveListViewItem__GetCurrentIndex(
        EventInfoTipsArchiveListViewItem_o *this,
        EventInfoTipsArchiveDialog_IndexData_array *indexDataList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  il2cpp_array_size_t max_length; // w21
  Il2CppClass **v6; // x23
  Il2CppClass *v7; // x8
  char *v8; // x23
  Il2CppClass *v9; // t1
  int32_t name_high; // w20
  __int64 v12; // x0

  if ( (byte_42E9A7D & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_B5D5C4(
                                                   &CondType_TypeInfo,
                                                   (_DWORD)indexDataList,
                                                   (_DWORD)method,
                                                   v3);
    byte_42E9A7D = 1;
  }
  if ( !indexDataList )
    goto LABEL_17;
  max_length = indexDataList->max_length;
  while ( (--max_length & 0x80000000) == 0 )
  {
    if ( max_length >= indexDataList->max_length )
      goto LABEL_16;
    v6 = &indexDataList->obj.klass + (int)max_length;
    v9 = v6[4];
    v8 = (char *)(v6 + 4);
    v7 = v9;
    if ( !v9 )
      goto LABEL_17;
    name_high = HIDWORD(v7->_1.name);
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(113, name_high, 0LL, 0, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( max_length >= indexDataList->max_length )
      {
LABEL_16:
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      if ( *(_QWORD *)v8 )
        return *(_DWORD *)(*(_QWORD *)v8 + 16LL);
LABEL_17:
      sub_B5D69C(this, indexDataList);
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
    sub_B5D69C(this, tab);
  if ( idCacheList->max_length <= tab )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return idCacheList->m_Items[tab];
}


int32_t __fastcall EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
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
  __int64 v18; // x21
  const MethodInfo *v19; // x2
  System_Int32_array **IdList; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_42E9A80 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      tab,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, v15, v16, v17);
    byte_42E9A80 = 1;
  }
  v18 = sub_B5D694(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
  EventInfoTipsArchiveListViewItem___c__DisplayClass21_0___ctor(
    (EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_o *)v18,
    0LL);
  IdList = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v19);
  if ( !v18 )
    sub_B5D69C(IdList, v21);
  *(_QWORD *)(v18 + 16) = IdList;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), IdList, v22, v23, v24, v25, v26, v27);
  stateDataList = this->fields.stateDataList;
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v29,
           (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
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
  EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x20

  if ( (byte_42E9A7F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__,
      id,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, v15, v16, v17);
    byte_42E9A7F = 1;
  }
  v18 = (EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_o *)sub_B5D694(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
  EventInfoTipsArchiveListViewItem___c__DisplayClass20_0___ctor(v18, 0LL);
  if ( !v18
    || (v18->fields.id = id,
        stateDataList = this->fields.stateDataList,
        v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v22,
          (Il2CppObject *)v18,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          (const MethodInfo_2B9320C *)Method_System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__),
        !stateDataList) )
  {
    sub_B5D69C(v19, v20);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v22,
                                                                      (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


bool __fastcall EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
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
  __int64 v18; // x21
  const MethodInfo *v19; // x2
  System_Int32_array **IdList; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_T__o *stateDataList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_42E9A81 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      tab,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__, v12, v13, v14);
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, v15, v16, v17);
    byte_42E9A81 = 1;
  }
  v18 = sub_B5D694(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
  EventInfoTipsArchiveListViewItem___c__DisplayClass22_0___ctor(
    (EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_o *)v18,
    0LL);
  IdList = (System_Int32_array **)EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v19);
  if ( !v18 )
    sub_B5D69C(IdList, v21);
  *(_QWORD *)(v18 + 16) = IdList;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), IdList, v22, v23, v24, v25, v26, v27);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)v18,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           stateDataList,
           (System_Func_T__bool__o *)v29,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void __fastcall EventInfoTipsArchiveListViewItem__LoadData(
        EventInfoTipsArchiveListViewItem_o *this,
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
  void *stateDataList; // x0
  EventInfoTipsArchiveListViewItem_Fields *p_fields; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  System_Int32_array **v32; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v35; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v36; // x8
  int32_t Id; // w23
  int CurrentIndex; // w21
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x4
  EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *v41; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x22
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v43; // x19
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__16_0; // x20
  Il2CppObject *v46; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0

  if ( (byte_42E9A7C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, v17, v18, v19);
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v20, v21, v22);
    byte_42E9A7C = 1;
  }
  p_fields = &this->fields;
  stateDataList = this->fields.stateDataList;
  if ( !stateDataList )
    goto LABEL_31;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)stateDataList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__);
  stateDataList = this->fields.tipsArchiveStateManager;
  if ( !stateDataList )
    goto LABEL_31;
  stateDataList = (void *)TipsArchiveStateManager__ReadData((TipsArchiveStateManager_o *)stateDataList, 0LL);
  if ( ((unsigned __int8)stateDataList & 1) != 0 )
  {
    tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
    if ( !tipsArchiveStateManager )
      goto LABEL_31;
    v32 = (System_Int32_array **)tipsArchiveStateManager->fields.stateDataList;
    p_fields->stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v32;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, v32, v25, v26, v27, v28, v29, v30);
  }
  objectDataList = this->fields.objectDataList;
  if ( !objectDataList )
LABEL_31:
    sub_B5D69C(stateDataList, method);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v35 = 0;
    do
    {
      if ( v35 >= max_length )
      {
        v54 = sub_B5D6C8(stateDataList);
        sub_B5D668(v54, 0LL);
      }
      v36 = objectDataList->m_Items[v35];
      if ( !v36 )
        goto LABEL_31;
      Id = v36->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(
                       (EventInfoTipsArchiveListViewItem_o *)stateDataList,
                       v36->fields.IndexDataList,
                       (const MethodInfo *)v25);
      stateDataList = EventInfoTipsArchiveListViewItem__GetStateData(this, Id, v39);
      if ( stateDataList )
      {
        v41 = (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)stateDataList;
        stateDataList = (void *)EventInfoTipsArchiveListViewItem_TipsArchiveStateData__IsNew(
                                  (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)stateDataList,
                                  0LL);
        if ( ((unsigned __int8)stateDataList & 1) == 0 )
          EventInfoTipsArchiveListViewItem_TipsArchiveStateData__SetNewState(
            v41,
            v41->fields.index != CurrentIndex,
            0LL);
        v41->fields.index = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_fields->stateDataList;
        stateDataList = EventInfoTipsArchiveListViewItem__CreateStateData(0LL, Id, CurrentIndex, CurrentIndex == 1, v40);
        if ( !v42 )
          goto LABEL_31;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v42,
          (EventMissionProgressRequest_Argument_ProgressData_o *)stateDataList,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__);
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v35 < max_length );
  }
  v43 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)p_fields->stateDataList;
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
    v46 = (Il2CppObject *)static_fields->__9;
    _9__16_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B5D694(System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__16_0,
      v46,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      (const MethodInfo_249B1FC *)Method_System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
    v47 = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    v47->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)_9__16_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__16_0,
      (System_Int32_array **)_9__16_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v43 )
    goto LABEL_31;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v43,
    (System_Comparison_T__o *)_9__16_0,
    (const MethodInfo_305909C *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
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
        sub_B5D560(
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
    sub_B5D69C(tipsArchiveStateManager, method);
  }
  TipsArchiveStateManager__WriteData(tipsArchiveStateManager, 0LL);
}


bool __fastcall EventInfoTipsArchiveListViewItem__SetSprite(
        EventInfoTipsArchiveListViewItem_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
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
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v24; // x0
  __int64 v25; // x1
  bool v26; // w20
  int v27; // w21
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E9A83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_UIAtlas___, (_DWORD)sprite, (_DWORD)spriteName, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v16, v17, v18);
    byte_42E9A83 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)IsNullOrEmpty,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
    v30 = v29;
    do
    {
      v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v30,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
      if ( !v21 )
      {
        v26 = 0;
        v27 = 8;
        goto LABEL_16;
      }
      current = v30.fields.current;
      if ( !v30.fields.current )
        sub_B5D69C(v21, v22);
      v24 = UIAtlas__GetSprite((UIAtlas_o *)v30.fields.current, spriteName, 0LL);
    }
    while ( !v24 );
    if ( !sprite )
      sub_B5D69C(v24, v25);
    UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
    UISprite__set_spriteName(sprite, spriteName, 0LL);
    v26 = 1;
    v27 = 17;
LABEL_16:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v30,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
    if ( v27 != 17 )
    {
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_20:
      sub_B5D69C(IsNullOrEmpty, v20);
    }
  }
  return v26;
}


void __fastcall EventInfoTipsArchiveListViewItem__SetupIdCasheList(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventInfoTipsArchiveListViewItem_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x20
  int max_length; // w8
  unsigned int v10; // w21
  EventInfoTipsArchiveDialog_ObjectData_o *v11; // x8
  struct System_Collections_Generic_List_int__array *idCacheList; // x9
  __int64 TabKind; // x10
  struct System_Collections_Generic_List_int__array *v14; // x8
  int v15; // w20
  il2cpp_array_size_t v16; // w21
  __int64 v17; // x0

  v4 = this;
  if ( (byte_42E9A82 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)method, v2, v3);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_B5D5C4(
                                                   &Method_System_Collections_Generic_List_int__Sort__,
                                                   v5,
                                                   v6,
                                                   v7);
    byte_42E9A82 = 1;
  }
  objectDataList = v4->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_19;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( v10 < max_length )
    {
      v11 = objectDataList->m_Items[v10];
      if ( !v11 )
        goto LABEL_19;
      idCacheList = v4->fields.idCacheList;
      if ( !idCacheList )
        goto LABEL_19;
      TabKind = v11->fields.TabKind;
      if ( (unsigned int)TabKind >= idCacheList->max_length )
        break;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        goto LABEL_19;
      System_Collections_Generic_List_int___Add(
        (System_Collections_Generic_List_int__o *)this,
        v11->fields.Id,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      max_length = objectDataList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_12;
    }
LABEL_21:
    v17 = sub_B5D6C8(this);
    sub_B5D668(v17, 0LL);
  }
LABEL_12:
  v14 = v4->fields.idCacheList;
  if ( !v14 )
LABEL_19:
    sub_B5D69C(this, method);
  v15 = v14->max_length;
  if ( v15 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14->max_length )
    {
      this = (EventInfoTipsArchiveListViewItem_o *)v14->m_Items[v16];
      if ( !this )
        goto LABEL_19;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_308632C *)Method_System_Collections_Generic_List_int__Sort__);
      if ( (int)++v16 >= v15 )
        return;
      v14 = v4->fields.idCacheList;
      if ( !v14 )
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, value);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0

  if ( (byte_42E654F & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v1, v2, v3);
    byte_42E654F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoTipsArchiveListViewItem___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, a);
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
    sub_B5D69C(this, 0LL);
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
  Il2CppObject *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v23; // x20

  if ( (byte_42E6550 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, (_DWORD)a, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(
      &Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, v15, v16, v17);
    byte_42E6550 = 1;
  }
  v18 = (Il2CppObject *)sub_B5D694(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_8;
  v18[1].klass = (Il2CppClass *)a;
  v21 = v18 + 1;
  sub_B5D560(&v18[1]);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v23 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v23,
    v18,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v19 = BasicHelper__Any_int_(
          idList,
          (System_Func_T__bool__o *)v23,
          (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___);
  if ( v19 )
  {
    if ( v21->klass )
      return (__int64)v21->klass->_1.namespaze & 1;
LABEL_8:
    sub_B5D69C(v19, v20);
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
    sub_B5D69C(this, b);
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
  Il2CppObject *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v23; // x20

  if ( (byte_42E6551 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, (_DWORD)a, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__, v12, v13, v14);
    sub_B5D5C4(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, v15, v16, v17);
    byte_42E6551 = 1;
  }
  v18 = (Il2CppObject *)sub_B5D694(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_8;
  v18[1].klass = (Il2CppClass *)a;
  v21 = v18 + 1;
  sub_B5D560(&v18[1]);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v23 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v23,
    v18,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  v19 = BasicHelper__Any_int_(
          idList,
          (System_Func_T__bool__o *)v23,
          (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___);
  if ( v19 )
  {
    if ( v21->klass )
      return (__int64)v21->klass->_1.namespaze & 1;
LABEL_8:
    sub_B5D69C(v19, v20);
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
    sub_B5D69C(this, b);
  return a->fields.id == b;
}