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
  System_Collections_Generic_List_object__o *v16; // x24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Collections_Generic_List_int__array *v23; // x24
  System_Collections_Generic_List_int__o *v24; // x25
  System_String_o *v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_List_int__o *v33; // x25
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_int__o *v40; // x25
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  TipsArchiveStateManager_o *v71; // x20
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  TipsArchiveStateManager_o *tipsArchiveStateManager; // x20
  const MethodInfo *v79; // x1
  __int64 v80; // x0

  if ( (byte_4C23FA1 & 1) == 0 )
  {
    sub_1C3B764(&System_Collections_Generic_List_int____TypeInfo, *(_QWORD *)&eventUiId);
    sub_1C3B764(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__,
      v12);
    sub_1C3B764(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1C3B764(&System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v14);
    sub_1C3B764(&TipsArchiveStateManager_TypeInfo, v15);
    byte_4C23FA1 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___ctor__);
  this->fields.stateDataList = (struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)v16;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (struct System_Collections_Generic_List_int__array *)sub_1C3B80C(
                                                               System_Collections_Generic_List_int____TypeInfo,
                                                               3LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v23 )
LABEL_17:
    sub_1C3B9C0(v25, v26);
  if ( v24 )
  {
    v25 = (System_String_o *)sub_1C3B8A0(v24, v23->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_16;
  }
  if ( !v23->max_length )
    goto LABEL_15;
  v23->m_Items[0] = v24;
  sub_1C3B708((PartyOrganizationUtility_o *)v23->m_Items, (int64_t)v24, v27, v28, v29, v30, v31, v32);
  v33 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v33 )
  {
    v25 = (System_String_o *)sub_1C3B8A0(v33, v23->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_16;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_15;
  v23->m_Items[1] = v33;
  sub_1C3B708((PartyOrganizationUtility_o *)&v23->m_Items[1], (int64_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Collections_Generic_List_int__o *)sub_1C3B9B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v40,
    (const MethodInfo_366E3F4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( v40 )
  {
    v25 = (System_String_o *)sub_1C3B8A0(v40, v23->obj.klass->_1.element_class);
    if ( !v25 )
    {
LABEL_16:
      v80 = sub_1C3B9E4(v25);
      sub_1C3B88C(v80, 0LL);
    }
  }
  if ( v23->max_length <= 2 )
LABEL_15:
    sub_1C3B9C8(v25, v26);
  v23->m_Items[2] = v40;
  sub_1C3B708((PartyOrganizationUtility_o *)&v23->m_Items[2], (int64_t)v40, v41, v42, v43, v44, v45, v46);
  this->fields.idCacheList = v23;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.idCacheList, (int64_t)v23, v47, v48, v49, v50, v51, v52);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventUiId = eventUiId;
  this->fields.atlasList = atlasList;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.atlasList, (int64_t)atlasList, v53, v54, v55, v56, v57, v58);
  this->fields.parameterBasePrefab = parameterBasePrefab;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.parameterBasePrefab,
    (int64_t)parameterBasePrefab,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.objectDataList = objectDataList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.objectDataList,
    (int64_t)objectDataList,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = (TipsArchiveStateManager_o *)sub_1C3B9B0(TipsArchiveStateManager_TypeInfo);
  TipsArchiveStateManager___ctor(v71, 0LL);
  this->fields.tipsArchiveStateManager = v71;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.tipsArchiveStateManager,
    (int64_t)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  tipsArchiveStateManager = this->fields.tipsArchiveStateManager;
  v25 = System_Int32__ToString((int)this + 24, 0LL);
  if ( !tipsArchiveStateManager )
    goto LABEL_17;
  TipsArchiveStateManager__SetSaveFileName(tipsArchiveStateManager, v25, 0LL);
  EventInfoTipsArchiveListViewItem__SetupIdCasheList(this, v79);
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

  if ( (byte_4C23FA4 & 1) == 0 )
  {
    sub_1C3B764(&EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo, *(_QWORD *)&id);
    byte_4C23FA4 = 1;
  }
  v8 = sub_1C3B9B0(EventInfoTipsArchiveListViewItem_TipsArchiveStateData_TypeInfo);
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

  if ( (byte_4C23FA3 & 1) == 0 )
  {
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1C3B764(&CondType_TypeInfo, indexDataList);
    byte_4C23FA3 = 1;
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
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventInfoTipsArchiveListViewItem_o *)CondType__IsOpen(113, name_high, 0LL, 0, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( max_length >= indexDataList->max_length )
LABEL_15:
        sub_1C3B9C8(this, indexDataList);
      if ( *(_QWORD *)v7 )
        return *(_DWORD *)(*(_QWORD *)v7 + 16LL);
LABEL_16:
      sub_1C3B9C0(this, indexDataList);
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
    sub_1C3B9C0(this, tab);
  if ( idCacheList->max_length <= tab )
    sub_1C3B9C8(this, *(_QWORD *)&tab);
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
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4C23FA6 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___,
      *(_QWORD *)&tab);
    sub_1C3B764(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v5);
    sub_1C3B764(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__, v6);
    sub_1C3B764(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo, v7);
    byte_4C23FA6 = 1;
  }
  v8 = sub_1C3B9B0(EventInfoTipsArchiveListViewItem___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v9);
  if ( !v8 )
    sub_1C3B9C0(IdList, v11);
  *(_QWORD *)(v8 + 16) = IdList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)IdList, v12, v13, v14, v15, v16, v17);
  stateDataList = this->fields.stateDataList;
  v19 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_0__GetNewDispCountByTab_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__50384956(
           (System_Collections_Generic_IEnumerable_TSource__o *)stateDataList,
           (System_Func_TSource__bool__o *)v19,
           (const MethodInfo_300D03C *)Method_System_Linq_Enumerable_Count_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x19
  System_Predicate_object__o *v12; // x20

  if ( (byte_4C23FA5 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__,
      *(_QWORD *)&id);
    sub_1C3B764(&System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, v5);
    sub_1C3B764(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__, v6);
    sub_1C3B764(&EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo, v7);
    byte_4C23FA5 = 1;
  }
  v8 = sub_1C3B9B0(EventInfoTipsArchiveListViewItem___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_DWORD *)(v8 + 16) = id,
        stateDataList = this->fields.stateDataList,
        v12 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo),
        System_Predicate_object____ctor(
          v12,
          (Il2CppObject *)v8,
          Method_EventInfoTipsArchiveListViewItem___c__DisplayClass20_0__GetStateData_b__0__,
          0LL),
        !stateDataList) )
  {
    sub_1C3B9C0(v9, v10);
  }
  return (EventInfoTipsArchiveListViewItem_TipsArchiveStateData_o *)System_Collections_Generic_List_object___Find(
                                                                      (System_Collections_Generic_List_object__o *)stateDataList,
                                                                      (System_Predicate_T__o *)v12,
                                                                      (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Find__);
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
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_int__o *IdList; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Collections_Generic_List_T__o *stateDataList; // x19
  System_Func_object__bool__o *v19; // x20

  if ( (byte_4C23FA7 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___, *(_QWORD *)&tab);
    sub_1C3B764(&System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo, v5);
    sub_1C3B764(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__, v6);
    sub_1C3B764(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo, v7);
    byte_4C23FA7 = 1;
  }
  v8 = sub_1C3B9B0(EventInfoTipsArchiveListViewItem___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  IdList = EventInfoTipsArchiveListViewItem__GetIdList(this, tab, v9);
  if ( !v8 )
    sub_1C3B9C0(IdList, v11);
  *(_QWORD *)(v8 + 16) = IdList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)IdList, v12, v13, v14, v15, v16, v17);
  stateDataList = (System_Collections_Generic_List_T__o *)this->fields.stateDataList;
  v19 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_0__IsNewDispTab_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           stateDataList,
           (System_Func_T__bool__o *)v19,
           (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_EventInfoTipsArchiveListViewItem_TipsArchiveStateData___);
}


void __fastcall EventInfoTipsArchiveListViewItem__LoadData(
        EventInfoTipsArchiveListViewItem_o *this,
        const MethodInfo *method)
{
  EventInfoTipsArchiveListViewItem_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  System_Collections_Generic_List_object__o **p_fields; // x20
  int32_t size; // w2
  int v11; // w9
  const MethodInfo *v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct TipsArchiveStateManager_o *tipsArchiveStateManager; // x8
  int64_t v19; // x1
  struct EventInfoTipsArchiveDialog_ObjectData_array *objectDataList; // x24
  int max_length; // w8
  unsigned int v22; // w25
  EventInfoTipsArchiveDialog_ObjectData_o *v23; // x8
  int32_t Id; // w23
  int CurrentIndex; // w22
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x4
  int32_t eventUiId; // w8
  System_Collections_Generic_List_object__o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  EventInfoTipsArchiveListViewItem_o *v39; // x1
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_object__o *v41; // x19
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct EventInfoTipsArchiveListViewItem___c_StaticFields *static_fields; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  v2 = this;
  if ( (byte_4C23FA2 & 1) == 0 )
  {
    sub_1C3B764(&System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo, method);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__,
      v3);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Clear__,
      v4);
    sub_1C3B764(
      &Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__,
      v5);
    sub_1C3B764(&Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__, v6);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1C3B764(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v7);
    byte_4C23FA2 = 1;
  }
  p_fields = (System_Collections_Generic_List_object__o **)&v2->fields;
  stateDataList = v2->fields.stateDataList;
  if ( !stateDataList )
    goto LABEL_35;
  size = stateDataList->fields._size;
  v11 = stateDataList->fields._version + 1;
  stateDataList->fields._size = 0;
  stateDataList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)stateDataList->fields._items, 0, size, 0LL);
  this = (EventInfoTipsArchiveListViewItem_o *)v2->fields.tipsArchiveStateManager;
  if ( !this )
    goto LABEL_35;
  this = (EventInfoTipsArchiveListViewItem_o *)TipsArchiveStateManager__ReadData((TipsArchiveStateManager_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    tipsArchiveStateManager = v2->fields.tipsArchiveStateManager;
    if ( !tipsArchiveStateManager )
      goto LABEL_35;
    v19 = (int64_t)tipsArchiveStateManager->fields.stateDataList;
    *p_fields = (System_Collections_Generic_List_object__o *)v19;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields, v19, (int64_t)v12, v13, v14, v15, v16, v17);
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
LABEL_35:
    sub_1C3B9C0(this, method);
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v22 = 0;
    do
    {
      if ( v22 >= max_length )
        sub_1C3B9C8(this, method);
      v23 = objectDataList->m_Items[v22];
      if ( !v23 )
        goto LABEL_35;
      Id = v23->fields.Id;
      CurrentIndex = EventInfoTipsArchiveListViewItem__GetCurrentIndex(this, v23->fields.IndexDataList, v12);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__GetStateData(v2, Id, v26);
      if ( this )
      {
        eventUiId = this->fields.eventUiId;
        if ( (eventUiId & 1) == 0 )
          this->fields.eventUiId = eventUiId & 0xFFFFFFFE | (HIDWORD(this->fields.stateDataList) != CurrentIndex);
        HIDWORD(this->fields.stateDataList) = CurrentIndex;
      }
      else if ( CurrentIndex >= 1 )
      {
        v29 = *p_fields;
        this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem__CreateStateData(
                                                       0LL,
                                                       Id,
                                                       CurrentIndex,
                                                       CurrentIndex == 1,
                                                       v27);
        if ( !v29 )
          goto LABEL_35;
        items = v29->fields._items;
        v37 = Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Add__;
        ++v29->fields._version;
        if ( !items )
          goto LABEL_35;
        v38 = v29->fields._size;
        v39 = this;
        if ( (unsigned int)v38 >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)this,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + v38;
          v29->fields._size = v38 + 1;
          v40[4] = (Il2CppClass *)v39;
          sub_1C3B708((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v39, v30, v31, v32, v33, v34, v35);
        }
      }
      max_length = objectDataList->max_length;
    }
    while ( (int)++v22 < max_length );
  }
  v41 = *p_fields;
  this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
  if ( !EventInfoTipsArchiveListViewItem___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoTipsArchiveListViewItem___c_TypeInfo);
    this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
  }
  monitor = (System_Comparison_T__o *)this[2].fields.atlasList->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (EventInfoTipsArchiveListViewItem_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[2].fields.atlasList->klass;
    monitor = (System_Comparison_T__o *)sub_1C3B9B0(System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_EventInfoTipsArchiveListViewItem___c__LoadData_b__16_0__,
      0LL);
    static_fields = EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields;
    static_fields->__9__16_0 = (struct System_Comparison_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *)monitor;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__16_0, (int64_t)monitor, v45, v46, v47, v48, v49, v50);
  }
  if ( !v41 )
    goto LABEL_35;
  System_Collections_Generic_List_object___Sort_57202480(
    v41,
    monitor,
    (const MethodInfo_368D730 *)Method_System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__Sort__);
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
        sub_1C3B708(
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
    sub_1C3B9C0(tipsArchiveStateManager, method);
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
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x21
  UISpriteData_o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C23FA9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_UIAtlas___, sprite);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UIAtlas__get_Current__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__, v10);
    byte_4C23FA9 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_String__IsNullOrEmpty(spriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0
    || (IsNullOrEmpty = (struct System_Collections_Generic_List_UIAtlas__o *)System_Linq_Enumerable__Any_object_(
                                                                               (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.atlasList,
                                                                               (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_UIAtlas___),
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)IsNullOrEmpty,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UIAtlas__GetEnumerator__);
  v20 = v19;
  do
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__MoveNext__);
    if ( !v13 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v20,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
      if ( sprite )
      {
        UISprite__set_spriteName(sprite, 0LL, 0LL);
        return 0;
      }
LABEL_19:
      sub_1C3B9C0(IsNullOrEmpty, v12);
    }
    current = v20.fields._current;
    if ( !v20.fields._current )
      sub_1C3B9C0(v13, v14);
    v16 = UIAtlas__GetSprite((UIAtlas_o *)v20.fields._current, spriteName, 0LL);
  }
  while ( !v16 );
  if ( !sprite )
    sub_1C3B9C0(v16, v17);
  UISprite__set_atlas(sprite, (UIAtlas_o *)current, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UIAtlas__Dispose__);
  return 1;
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
  struct System_Collections_Generic_List_EventInfoTipsArchiveListViewItem_TipsArchiveStateData__o *stateDataList; // x8
  _QWORD *v11; // x9
  __int64 eventUiId; // x10
  struct System_Collections_Generic_List_int__array *v13; // x8
  int v14; // w20
  il2cpp_array_size_t v15; // w21

  v2 = this;
  if ( (byte_4C23FA8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_int__Add__, method);
    this = (EventInfoTipsArchiveListViewItem_o *)sub_1C3B764(&Method_System_Collections_Generic_List_int__Sort__, v3);
    byte_4C23FA8 = 1;
  }
  objectDataList = v2->fields.objectDataList;
  if ( !objectDataList )
    goto LABEL_23;
  max_length = objectDataList->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( v6 < max_length )
    {
      v7 = objectDataList->m_Items[v6];
      if ( !v7 )
        goto LABEL_23;
      idCacheList = v2->fields.idCacheList;
      if ( !idCacheList )
        goto LABEL_23;
      TabKind = v7->fields.TabKind;
      if ( (unsigned int)TabKind >= idCacheList->max_length )
        break;
      this = (EventInfoTipsArchiveListViewItem_o *)idCacheList->m_Items[TabKind];
      if ( !this )
        goto LABEL_23;
      method = (const MethodInfo *)(unsigned int)v7->fields.Id;
      stateDataList = this->fields.stateDataList;
      v11 = Method_System_Collections_Generic_List_int__Add__;
      ++*(&this->fields.eventUiId + 1);
      if ( !stateDataList )
        goto LABEL_23;
      eventUiId = this->fields.eventUiId;
      if ( (unsigned int)eventUiId >= stateDataList->fields._size )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          (int32_t)method,
          *(const MethodInfo_366EC48 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
      }
      else
      {
        this->fields.eventUiId = eventUiId + 1;
        *((_DWORD *)&stateDataList->fields._syncRoot + eventUiId) = (_DWORD)method;
      }
      max_length = objectDataList->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_16;
    }
LABEL_25:
    sub_1C3B9C8(this, method);
  }
LABEL_16:
  v13 = v2->fields.idCacheList;
  if ( !v13 )
LABEL_23:
    sub_1C3B9C0(this, method);
  v14 = v13->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( v15 < v13->max_length )
    {
      this = (EventInfoTipsArchiveListViewItem_o *)v13->m_Items[v15];
      if ( !this )
        goto LABEL_23;
      System_Collections_Generic_List_int___Sort(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_367058C *)Method_System_Collections_Generic_List_int__Sort__);
      if ( v14 == ++v15 )
        return;
      v13 = v2->fields.idCacheList;
      if ( !v13 )
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
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(this, value);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C23FAA & 1) == 0 )
  {
    sub_1C3B764(&EventInfoTipsArchiveListViewItem___c_TypeInfo, v1);
    byte_4C23FAA = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(EventInfoTipsArchiveListViewItem___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields->__9 = (struct EventInfoTipsArchiveListViewItem___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventInfoTipsArchiveListViewItem___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, a);
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
    sub_1C3B9C0(this, 0LL);
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
  __int64 v8; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v19; // x20

  if ( (byte_4C23FAB & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_int___, a);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v5);
    sub_1C3B764(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__, v6);
    sub_1C3B764(&EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo, v7);
    byte_4C23FAB = 1;
  }
  v8 = sub_1C3B9B0(EventInfoTipsArchiveListViewItem___c__DisplayClass21_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = a;
  v17 = v8 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)a, v11, v12, v13, v14, v15, v16);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v19 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass21_1__GetNewDispCountByTab_b__1__,
    0LL);
  v9 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v19,
         (const MethodInfo_2FDA848 *)Method_BasicHelper_Any_int___);
  if ( v9 )
  {
    if ( *(_QWORD *)v17 )
      return *(_BYTE *)(*(_QWORD *)v17 + 24LL) & 1;
LABEL_8:
    sub_1C3B9C0(v9, v10);
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
    sub_1C3B9C0(this, b);
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
  __int64 v8; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x21
  System_Collections_Generic_List_T__o *idList; // x19
  System_Func_int__bool__o *v19; // x20

  if ( (byte_4C23FAC & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_int___, a);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v5);
    sub_1C3B764(&Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__, v6);
    sub_1C3B764(&EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo, v7);
    byte_4C23FAC = 1;
  }
  v8 = sub_1C3B9B0(EventInfoTipsArchiveListViewItem___c__DisplayClass22_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = a;
  v17 = v8 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)a, v11, v12, v13, v14, v15, v16);
  idList = (System_Collections_Generic_List_T__o *)this->fields.idList;
  v19 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_EventInfoTipsArchiveListViewItem___c__DisplayClass22_1__IsNewDispTab_b__1__,
    0LL);
  v9 = BasicHelper__Any_int_(
         idList,
         (System_Func_T__bool__o *)v19,
         (const MethodInfo_2FDA848 *)Method_BasicHelper_Any_int___);
  if ( v9 )
  {
    if ( *(_QWORD *)v17 )
      return *(_BYTE *)(*(_QWORD *)v17 + 24LL) & 1;
LABEL_8:
    sub_1C3B9C0(v9, v10);
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
    sub_1C3B9C0(this, b);
  return a->fields.id == b;
}