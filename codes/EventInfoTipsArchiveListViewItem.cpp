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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x24
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Collections_Generic_List_int__array *v28; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x25
  System_String_o *v33; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Collections_Generic_List_int__o *v44; // x25
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Collections_Generic_List_int__o *v54; // x25
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  TipsArchiveStateManager_o *v88; // x20
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v96; // x1
  __int64 v97; // x0

  if ( (byte_4B1811C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_List_int____TypeInfo, *(_QWORD *)&eventUiId, atlasList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      v13,
      v14);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v15, v16);
    sub_1BCA7E0(
      &System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
      v17,
      v18);
    sub_1BCA7E0(&TipsArchiveStateManager_TypeInfo, v19, v20);
    byte_4B1811C = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                                       *(_QWORD *)&eventUiId,
                                                       atlasList,
                                                       parameterBasePrefab);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = (struct System_Collections_Generic_List_int__array *)sub_1BCA888(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL);
  v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v28 )
LABEL_17:
    sub_1BCAA3C(v33, v34);
  if ( v32 )
  {
    v33 = (System_String_o *)sub_1BCA91C(v32, v28->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_16;
  }
  if ( !v28->max_length )
    goto LABEL_15;
  v28->m_Items[0] = v32;
  sub_1BCA784((PartyOrganizationUtility_o *)v28->m_Items, (int64_t)v32, v35, v36, v37, v38, v39, v40);
  v44 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v41,
                                                    v42,
                                                    v43);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v44 )
  {
    v33 = (System_String_o *)sub_1BCA91C(v44, v28->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_16;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_15;
  v28->m_Items[1] = v44;
  sub_1BCA784((PartyOrganizationUtility_o *)&v28->m_Items[1], (int64_t)v44, v45, v46, v47, v48, v49, v50);
  v54 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v51,
                                                    v52,
                                                    v53);
  System_Collections_Generic_List_int____ctor(
    v54,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v54 )
  {
    v33 = (System_String_o *)sub_1BCA91C(v54, v28->obj.klass->_1.element_class);
    if ( !v33 )
    {
LABEL_16:
      v97 = sub_1BCAA60(v33);
      sub_1BCA908(v97, 0LL);
    }
  }
  if ( v28->max_length <= 2 )
LABEL_15:
    sub_1BCAA44(v33, v34);
  v28->m_Items[2] = v54;
  sub_1BCA784((PartyOrganizationUtility_o *)&v28->m_Items[2], (int64_t)v54, v55, v56, v57, v58, v59, v60);
  this->fields.idCacheList = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.idCacheList, (int64_t)v28, v61, v62, v63, v64, v65, v66);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)atlasList, v67, v68, v69, v70, v71, v72);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.parameterBasePrefab,
    (int64_t)parameterBasePrefab,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields.objectDataList = objectDataList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.objectDataList,
    (int64_t)objectDataList,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v88 = (TipsArchiveStateManager_o *)sub_1BCAA2C(TipsArchiveStateManager_TypeInfo, v85, v86, v87);
  TipsArchiveStateManager___ctor(v88, 0LL);
  this->fields.tipsArchiveStateManager = v88;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.tipsArchiveStateManager,
    (int64_t)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v33 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v33, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v96);
}


// local variable allocation has failed, the output may be wrong!
EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__CreateStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        int32_t index,
        bool isNew,
        const MethodInfo *method)
{
  __int64 v8; // x22

  if ( (byte_4B1811F & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, *(_QWORD *)&id, *(_QWORD *)&index);
    byte_4B1811F = 1;
  }
  v8 = sub_1BCAA2C(
         EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo,
         *(_QWORD *)&id,
         *(_QWORD *)&index,
         isNew);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  *(_DWORD *)(v8 + 16) = id;
  *(_DWORD *)(v8 + 20) = index;
  *(_DWORD *)(v8 + 24) = isNew;
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)v8;
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

  if ( (byte_4B1811E & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1BCA7E0(&CondType_TypeInfo, indexDataList, method);
    byte_4B1811E = 1;
  }
  if ( !indexDataList )
    goto LABEL_16;
  max_length = indexDataList->max_length;
  while ( (--max_length & 0x80000000) == 0 )
  {
    if ( max_length >= indexDataList->max_length )
      goto LABEL_15;
    v5 = &indexDataList->obj.klass + max_length;
    v8 = v5[4];
    v7 = (char *)(v5 + 4);
    v6 = v8;
    if ( !v8 )
      goto LABEL_16;
    name_high = HIDWORD(v6->_1.name);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, indexDataList);
    this = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(113, name_high, 0LL, 0, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( max_length >= indexDataList->max_length )
LABEL_15:
        sub_1BCAA44(this, indexDataList);
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_16:
      sub_1BCAA3C(this, indexDataList);
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
    sub_1BCAA3C(this, *(_QWORD *)&tab);
  if ( idCacheList->max_length <= tab )
    sub_1BCAA44(this, tab);
  return idCacheList->m_Items[tab];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventInfoTipsArchiveListViewItem__GetNewDispCountByTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_object__bool__o *v26; // x20

  if ( (byte_4B18121 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      *(_QWORD *)&tab,
      method);
    sub_1BCA7E0(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__, v8, v9);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, v10, v11);
    byte_4B18121 = 1;
  }
  v12 = sub_1BCAA2C(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&tab, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v13);
  if ( !v12 )
    sub_1BCAA3C(IdList, v15);
  *(_QWORD *)(v12 + 16) = IdList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)IdList, v16, v17, v18, v19, v20, v21);
  stateDataList = this->fields.stateDataList;
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo,
                                         v23,
                                         v24,
                                         v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__49476864(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v26,
           (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


// local variable allocation has failed, the output may be wrong!
EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *__fastcall EventInfoTipsArchiveListViewItem__GetStateData(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_object__o *v18; // x20

  if ( (byte_4B18120 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__,
      *(_QWORD *)&id,
      method);
    sub_1BCA7E0(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__, v8, v9);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, v10, v11);
    byte_4B18120 = 1;
  }
  v12 = sub_1BCAA2C(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, *(_QWORD *)&id, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = id,
        stateDataList = this->fields.stateDataList,
        v18 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                              v14,
                                              v15,
                                              v16),
        System_Predicate_object____ctor(
          v18,
          (Il2CppObject *)v12,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          0LL),
        !stateDataList) )
  {
    sub_1BCAA3C(v13, v14);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_object___Find(
                                                                      (System_Collections_Generic_List_object__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v18,
                                                                      (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoTipsArchiveListViewItem__IsNewDispTab(
        EventInfoTipsArchiveListViewItem_o *this,
        int32_t tab,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_T__o *stateDataList; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_object__bool__o *v26; // x20

  if ( (byte_4B18122 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      *(_QWORD *)&tab,
      method);
    sub_1BCA7E0(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__, v8, v9);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, v10, v11);
    byte_4B18122 = 1;
  }
  v12 = sub_1BCAA2C(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, *(_QWORD *)&tab, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v13);
  if ( !v12 )
    sub_1BCAA3C(IdList, v15);
  *(_QWORD *)(v12 + 16) = IdList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)IdList, v16, v17, v18, v19, v20, v21);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v26 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo,
                                         v23,
                                         v24,
                                         v25);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           stateDataList,
           (System_Func_T__bool__o *)v26,
           (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void __fastcall EventInfoTipsArchiveListViewItem__LoadData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoTipsArchiveListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  System_Collections_Generic_List_object__o **p_fields; // x20
  int32_t size; // w2
  int v17; // w9
  const MethodInfo *v18; // x2
  __int64 v19; // x3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  int64_t v25; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v28; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v29; // x8
  int32_t Id; // w23
  int CurrentIndex; // w22
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  int32_t eventUiId; // w8
  System_Collections_Generic_List_object__o *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  EventInfoTipsArchiveListViewItem_o *v45; // x1
  Il2CppClass **v46; // x0
  System_Collections_Generic_List_object__o *v47; // x19
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  v3 = this;
  if ( (byte_4B1811D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, method, v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__,
      v8,
      v9);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, v10, v11);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1BCA7E0(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v12, v13);
    byte_4B1811D = 1;
  }
  p_fields = (System_Collections_Generic_List_object__o **)&v3->fields;
  stateDataList = v3->fields.stateDataList;
  if ( !stateDataList )
    goto LABEL_35;
  size = stateDataList->fields._size;
  v17 = stateDataList->fields._version + 1;
  stateDataList->fields._size = 0;
  stateDataList->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)stateDataList->fields._items, 0, size, 0LL);
  this = (EventInfoTipsArchiveListViewItem_o *)v3->fields.tipsArchiveStateManager;
  if ( !this )
    goto LABEL_35;
  this = (EventInfoTipsArchiveListViewItem_o *)TipsArchiveStateManager__ReadData((TipsArchiveStateManager_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    tipsArchiveStateManager = v3->fields.tipsArchiveStateManager;
    if ( !tipsArchiveStateManager )
      goto LABEL_35;
    v25 = (int64_t)tipsArchiveStateManager->fields.stateDataList;
    *p_fields = (System_Collections_Generic_List_object__o *)v25;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields, v25, (int64_t)v18, v19, v20, v21, v22, v23);
  }
  objectDataList = v3->fields.objectDataList;
  if ( !objectDataList )
LABEL_35:
    sub_1BCAA3C(this, method);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v28 = 0;
    do
    {
      if ( v28 >= max_length )
        sub_1BCAA44(this, method);
      v29 = objectDataList->m_Items[v28];
      if ( !v29 )
        goto LABEL_35;
      Id = v29->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(this, v29->fields.IndexDataList, v18);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__GetStateData(v3, Id, v32);
      if ( this )
      {
        eventUiId = this->fields.eventUiId;
        if ( (eventUiId & 1) == 0 )
          this->fields.eventUiId = eventUiId & 0xFFFFFFFE | (HIDWORD(this->fields.stateDataList) != CurrentIndex);
        HIDWORD(this->fields.stateDataList) = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v35 = *p_fields;
        this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__CreateStateData(
                                                       0LL,
                                                       Id,
                                                       CurrentIndex,
                                                       CurrentIndex == 1,
                                                       v33);
        if ( !v35 )
          goto LABEL_35;
        items = v35->fields._items;
        v43 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++v35->fields._version;
        if ( !items )
          goto LABEL_35;
        v44 = v35->fields._size;
        v45 = this;
        if ( (unsigned int)v44 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v35,
            (Il2CppObject *)this,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = &items->obj.klass + v44;
          v35->fields._size = v44 + 1;
          v46[4] = (Il2CppClass *)v45;
          sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v45, v36, v37, v38, v39, v40, v41);
        }
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v28 < max_length );
  }
  v47 = *p_fields;
  this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
  if ( !EventInfoTipsArchiveListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItem___c_TypeInfo, method);
    this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
  }
  monitor = (System_Comparison_T__o *)this[2].fields.atlasList->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[2].fields.atlasList->klass;
    monitor = (System_Comparison_T__o *)sub_1BCAA2C(
                                          System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo,
                                          method,
                                          v18,
                                          v19);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      0LL);
    static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)monitor;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)monitor, v51, v52, v53, v54, v55, v56);
  }
  if ( !v47 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_56244000(
    v47,
    monitor,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
}


void __fastcall EventInfoTipsArchiveListViewItem__SaveData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x0
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x1

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager
    || (stateDataList = this->fields.stateDataList,
        tipsArchiveStateManager->fields.stateDataList = stateDataList,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&tipsArchiveStateManager->fields.stateDataList,
          (int64_t)stateDataList,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (tipsArchiveStateManager = this->fields.tipsArchiveStateManager) == 0LL) )
  {
    sub_1BCAA3C(tipsArchiveStateManager, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct System_Collections_Generic_List_UIAtlas__o *IsNullOrEmpty; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B18124 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite, spriteName);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v13, v14);
    byte_4B18124 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
        ((unsigned __int8)IsNullOrEmpty & 1) == 0) )
  {
    if ( sprite )
    {
      UISprite__set_spriteName(sprite, 0LL, 0LL);
      return 1;
    }
    goto LABEL_19;
  }
  IsNullOrEmpty = this->fields.atlasList;
  if ( !IsNullOrEmpty )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v24 = v23;
  do
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v17 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v24,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1BCAA3C(IsNullOrEmpty, v16);
    }
    current = v24.fields._current;
    if ( !v24.fields._current )
      sub_1BCAA3C(v17, v18);
    v20 = UIAtlas__GetSprite((UIAtlas_o *)v24.fields._current, spriteName, 0LL);
  }
  while ( !v20 );
  if ( !sprite )
    sub_1BCAA3C(v20, v21);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
}


void __fastcall EventInfoTipsArchiveListViewItem__SetupIdCasheList(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventInfoTipsArchiveListViewItem_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x20
  int max_length; // w8
  unsigned int v8; // w21
  EventInfoTipsArchiveDialog_ObjectData_o *v9; // x8
  struct System_Collections_Generic_List_int__array *idCacheList; // x9
  __int64 TabKind; // x10
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  _QWORD *v13; // x9
  __int64 eventUiId; // x10
  struct System_Collections_Generic_List_int__array *v15; // x8
  int v16; // w20
  il2cpp_array_size_t v17; // w21

  v3 = this;
  if ( (byte_4B18123 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1BCA7E0(
                                                   &Method_System_Collections_Generic_List_int__Sort__,
                                                   v4,
                                                   v5);
    byte_4B18123 = 1;
  }
  objectDataList = v3->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_23;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( v8 < max_length )
    {
      v9 = objectDataList->m_Items[v8];
      if ( !v9 )
        goto LABEL_23;
      idCacheList = v3->fields.idCacheList;
      if ( !idCacheList )
        goto LABEL_23;
      TabKind = v9->fields.TabKind;
      if ( (unsigned int)TabKind >= idCacheList->max_length )
        break;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        goto LABEL_23;
      method = (const MethodInfo *)(unsigned int)v9->fields.Id;
      stateDataList = this->fields.stateDataList;
      v13 = Method_System_Collections_Generic_List_int__Add__;
      ++*(&this->fields.eventUiId + 1);
      if ( !stateDataList )
        goto LABEL_23;
      eventUiId = this->fields.eventUiId;
      if ( (unsigned int)eventUiId >= stateDataList->fields._size )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          (int32_t)method,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
      }
      else
      {
        this->fields.eventUiId = eventUiId + 1;
        *((_DWORD *)&stateDataList->fields._syncRoot + eventUiId) = (_DWORD)method;
      }
      max_length = objectDataList->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_16;
    }
LABEL_25:
    sub_1BCAA44(this, method);
  }
LABEL_16:
  v15 = v3->fields.idCacheList;
  if ( !v15 )
LABEL_23:
    sub_1BCAA3C(this, method);
  v16 = v15->max_length;
  if ( v16 >= 1 )
  {
    v17 = 0;
    while ( v17 < v15->max_length )
    {
      this = (EventInfoTipsArchiveListViewItem_o *)v15->m_Items[v17];
      if ( !this )
        goto LABEL_23;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_358657C *)Method_System_Collections_Generic_List_int__Sort__);
      if ( v16 == ++v17 )
        return;
      v15 = v3->fields.idCacheList;
      if ( !v15 )
        goto LABEL_23;
    }
    goto LABEL_25;
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
    sub_1BCAA3C(this, method);
  return tipsArchiveStateManager->fields.isModfiy;
}


UnityEngine_GameObject_o *__fastcall EventInfoTipsArchiveListViewItem__get_ParameterBasePrefab(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.parameterBasePrefab;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoTipsArchiveListViewItem__set_IsModfiy(
        EventInfoTipsArchiveListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8

  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  if ( !tipsArchiveStateManager )
    sub_1BCAA3C(this, value);
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
  this->fields.state = this->fields.state & 0xFFFFFFFE | isActive;
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18125 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v1, v2);
    byte_4B18125 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoTipsArchiveListViewItem___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_int__bool__o *v26; // x20

  if ( (byte_4B18126 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, a, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__, v8, v9);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, v10, v11);
    byte_4B18126 = 1;
  }
  v12 = sub_1BCAA2C(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, a, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v12 + 16) = a;
  v21 = v12 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)a, v15, v16, v17, v18, v19, v20);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v26 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v23, v24, v25);
  System_Func_int__bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    0LL);
  v13 = BasicHelper__Any_int_(
          idList,
          (System_Func_T__bool__o *)v26,
          (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
  if ( v13 )
  {
    if ( *(_QWORD *)v21 )
      return *(_BYTE *)(*(_QWORD *)v21 + 24LL) & 1;
LABEL_8:
    sub_1BCAA3C(v13, v14);
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass21_1___GetNewDispCountByTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_1BCAA3C(this, *(_QWORD *)&b);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Func_int__bool__o *v26; // x20

  if ( (byte_4B18127 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, a, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__, v8, v9);
    sub_1BCA7E0(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, v10, v11);
    byte_4B18127 = 1;
  }
  v12 = sub_1BCAA2C(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, a, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_8;
  *(_QWORD *)(v12 + 16) = a;
  v21 = v12 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)a, v15, v16, v17, v18, v19, v20);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v26 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v23, v24, v25);
  System_Func_int__bool____ctor(
    v26,
    (Il2CppObject *)v12,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    0LL);
  v13 = BasicHelper__Any_int_(
          idList,
          (System_Func_T__bool__o *)v26,
          (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___);
  if ( v13 )
  {
    if ( *(_QWORD *)v21 )
      return *(_BYTE *)(*(_QWORD *)v21 + 24LL) & 1;
LABEL_8:
    sub_1BCAA3C(v13, v14);
  }
  return 0;
}


void __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___ctor(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventInfoTipsArchiveListViewItem___c__DisplayClass22_1___IsNewDispTab_b__1(
        EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_o *this,
        int32_t b,
        const MethodInfo *method)
{
  struct EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *a; // x8

  a = this->fields.a;
  if ( !a )
    sub_1BCAA3C(this, *(_QWORD *)&b);
  return a->fields.id == b;
}