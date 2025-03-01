void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BFE065 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v3);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v4);
    byte_4BFE065 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v5;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_327D914 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *__fastcall ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantPassiveSkillEntity_array *ServantSkillList; // x0
  ServantPassiveSkillMaster___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v12; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BFE069 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, *(_QWORD *)&svtId);
    sub_1C2E12C(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v5);
    sub_1C2E12C(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__, v6);
    sub_1C2E12C(&ServantPassiveSkillMaster___c_TypeInfo, v7);
    byte_4BFE069 = 1;
  }
  ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(this, svtId, method);
  v9 = ServantPassiveSkillMaster___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantSkillList;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v9 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__bool__o *)v9->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__8_0 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__8_0,
      v12,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0LL);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v14, v15, v16, v17, v18, v19);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v10,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_o *__fastcall ServantPassiveSkillMaster__GetEntity(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BFE063 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4BFE063 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_327FC38 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantPassiveSkillMaster__GetItemLinkSkillIds(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t dispLimitCount,
        int64_t nowTime,
        const MethodInfo *method)
{
  int32_t befSvtId; // w19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x21
  Il2CppObject *Master_object; // x0
  __int64 v28; // x1
  System_Collections_ICollection_o *v29; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject *v37; // x23
  const MethodInfo *v38; // x3
  ServantTransformEntity_o *v39; // x0
  System_Func_object__bool__o *v40; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x19
  System_Func_object__object__o *v42; // x20
  System_Collections_Generic_IEnumerable_T__o *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *v44; // x19
  ServantPassiveSkillMaster___c_c *v45; // x8
  System_Func_object__int__o *_9__13_2; // x20
  Il2CppObject *v47; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0

  befSvtId = svtId;
  if ( (byte_4BFE06D & 1) == 0 )
  {
    sub_1C2E12C(&Method_BasicHelper_ExcludeNull_ItemEntity___, *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_DataManager_GetMaster_ItemMaster___, v8);
    sub_1C2E12C(&Method_DataManager_GetMaster_ServantTransformMaster___, v9);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___, v10);
    sub_1C2E12C(&DataManager_TypeInfo, v11);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_EventItemUsedInfo__ItemEntity___, v12);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_ItemEntity__int___, v13);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v14);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_EventItemUsedInfo___, v15);
    sub_1C2E12C(&System_Func_EventItemUsedInfo__bool__TypeInfo, v16);
    sub_1C2E12C(&System_Func_EventItemUsedInfo__ItemEntity__TypeInfo, v17);
    sub_1C2E12C(&System_Func_ItemEntity__int__TypeInfo, v18);
    sub_1C2E12C(&ImageLimitCount_TypeInfo, v19);
    sub_1C2E12C(&int___TypeInfo, v20);
    sub_1C2E12C(&Method_ServantPassiveSkillMaster___c__GetItemLinkSkillIds_b__13_2__, v21);
    sub_1C2E12C(&Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__0__, v22);
    sub_1C2E12C(&Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__1__, v23);
    sub_1C2E12C(&ServantPassiveSkillMaster___c__DisplayClass13_0_TypeInfo, v24);
    sub_1C2E12C(&ServantPassiveSkillMaster___c_TypeInfo, v25);
    byte_4BFE06D = 1;
  }
  v26 = sub_1C2E378(ServantPassiveSkillMaster___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserEventItemLinkSvtMaster___);
  if ( !Master_object )
    goto LABEL_23;
  v29 = (System_Collections_ICollection_o *)UserEventItemLinkSvtMaster__EnableEventItemUsedInfo(
                                              (UserEventItemLinkSvtMaster_o *)Master_object,
                                              nowTime,
                                              0LL);
  if ( BasicHelper__IsNullOrEmpty(v29, 0LL) )
    return (System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !v26 )
    goto LABEL_23;
  *(_QWORD *)(v26 + 24) = Master_object;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v26 + 24), (int64_t)Master_object, v31, v32, v33, v34, v35, v36);
  v37 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_ServantTransformMaster___);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  Master_object = (Il2CppObject *)ImageLimitCount__ConvertDispLimitCountForServer(dispLimitCount, 0LL);
  if ( !v37 )
LABEL_23:
    sub_1C2E388(Master_object, v28);
  v39 = ServantTransformMaster__GetBeforeTransformEntity(
          (ServantTransformMaster_o *)v37,
          befSvtId,
          (int32_t)Master_object,
          v38);
  if ( v39 )
    befSvtId = v39->fields.befSvtId;
  *(_DWORD *)(v26 + 16) = befSvtId;
  v40 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_EventItemUsedInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)v26,
    Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__0__,
    0LL);
  v41 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (System_Func_TSource__bool__o *)v40,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_EventItemUsedInfo___);
  v42 = (System_Func_object__object__o *)sub_1C2E378(System_Func_EventItemUsedInfo__ItemEntity__TypeInfo);
  System_Func_object__object____ctor(
    v42,
    (Il2CppObject *)v26,
    Method_ServantPassiveSkillMaster___c__DisplayClass13_0__GetItemLinkSkillIds_b__1__,
    0LL);
  v43 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v41,
                                                         (System_Func_TSource__TResult__o *)v42,
                                                         (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_EventItemUsedInfo__ItemEntity___);
  v44 = BasicHelper__ExcludeNull_object_(v43, (const MethodInfo_2FBCB90 *)Method_BasicHelper_ExcludeNull_ItemEntity___);
  v45 = ServantPassiveSkillMaster___c_TypeInfo;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v45 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__13_2 = (System_Func_object__int__o *)v45->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v45->static_fields->__9;
    _9__13_2 = (System_Func_object__int__o *)sub_1C2E378(System_Func_ItemEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__13_2,
      v47,
      Method_ServantPassiveSkillMaster___c__GetItemLinkSkillIds_b__13_2__,
      0LL);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_2 = (struct System_Func_ItemEntity__int__o *)_9__13_2;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_2,
      (int64_t)_9__13_2,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v44,
                                                               (System_Func_TSource__TResult__o *)_9__13_2,
                                                               (const MethodInfo_30032B4 *)Method_System_Linq_Enumerable_Select_ItemEntity__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v55,
           (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantPassiveSkillMaster__TryGetEntity(
        ServantPassiveSkillMaster_o *this,
        ServantPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BFE064 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4BFE064 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getEntityListFromIdNum(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  ServantPassiveSkillMaster_o *v6; // x20
  Il2CppObject *PriorityKey; // x0
  __int64 v8; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_4BFE06A & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1C2E12C(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            *(_QWORD *)&svtId);
    byte_4BFE06A = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1C2E388(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
  {
    return (ServantPassiveSkillEntity_array *)value;
  }
  else
  {
    return 0LL;
  }
}


void __fastcall ServantPassiveSkillMaster__getPassiveSkillInfo(
        ServantPassiveSkillMaster_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  ServantEntity_o *v31; // x26
  BalanceConfig_c *v32; // x0
  __int64 v33; // x26
  bool v34; // w22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  MethodInfo *v39; // x6
  PartyListViewItem_o *v40; // x7
  ServantPassiveSkillEntity_array *UseEntityList; // x27
  unsigned __int64 v42; // x23
  unsigned int v43; // w25
  __int64 i; // x29
  System_Int32_array *v45; // x8
  System_String_array *v46; // x8
  System_String_array *v47; // x10
  System_Int32_array *v48; // x8
  unsigned __int64 max_length; // x9
  __int64 v50; // x10
  int v51; // w9
  System_String_array *v52; // x8
  unsigned __int64 v53; // x9
  int64_t v54; // x1
  Il2CppClass **v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_String_array *v62; // x8
  unsigned __int64 v63; // x9
  int64_t v64; // x1
  Il2CppClass **v65; // x0
  System_String_array *v66; // x8
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_String_array *v73; // x8
  System_Collections_ICollection_o *ItemLinkSkillIds; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_Collections_ICollection_o *v81; // x23
  void *monitor; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v83; // x24
  unsigned __int64 v84; // x26
  unsigned int v85; // w27
  int32_t v86; // w25
  System_Int32_array *v87; // x9
  System_String_array *v88; // x9
  System_String_array *v89; // x10
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  const MethodInfo *v102; // [xsp+10h] [xbp-90h]
  int32_t svtIda; // [xsp+30h] [xbp-70h]
  bool IsServantEquip; // [xsp+34h] [xbp-6Ch]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BFE06C & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, idList);
    sub_1C2E12C(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1C2E12C(&Method_DataManager_GetMaster_SkillMaster___, v23);
    sub_1C2E12C(&DataManager_TypeInfo, v24);
    sub_1C2E12C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v25);
    sub_1C2E12C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v26);
    sub_1C2E12C(&int___TypeInfo, v27);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    byte_4BFE06C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_70;
  svtIda = svtId;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                svtId,
                                (const MethodInfo_327B180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_70;
  v31 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v31, idList, titleList, explanationList, 0LL);
  v32 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v32 = BalanceConfig_TypeInfo;
  }
  v33 = sub_1C2E1D4(int___TypeInfo, (unsigned int)v32->static_fields->SvtPassiveSkillListMax);
  v34 = IsServantEquip;
  UseEntityList = ServantPassiveSkillMaster__getUseEntityList(
                    this,
                    svtId,
                    userId,
                    svtLv,
                    limitCount,
                    dispLimitCount,
                    friendshipRank,
                    beforeClearQuestId,
                    isMySvt,
                    nowTime,
                    v102);
  v42 = 0LL;
  v43 = 0;
  for ( i = 32LL; ; i += 8LL )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v42 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_70;
    if ( v42 >= UseEntityList->max_length )
      goto LABEL_71;
    Instance = (DataManager_o *)UseEntityList->m_Items[v42];
    v45 = *idList;
    if ( Instance )
    {
      if ( !v45 )
        goto LABEL_70;
      if ( v43 >= v45->max_length )
        goto LABEL_71;
      v45->m_Items[v43 + 1] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v33 )
        goto LABEL_70;
      v46 = *titleList;
      if ( !*titleList )
        goto LABEL_70;
      v47 = *explanationList;
      if ( !*explanationList )
        goto LABEL_70;
      if ( v43 >= *(_DWORD *)(v33 + 24) || v43 >= v46->max_length || v43 >= v47->max_length )
        goto LABEL_71;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v33 + 4LL * (int)v43 + 32),
        &v46->m_Items[v43],
        &v47->m_Items[v43],
        0,
        v34,
        v39);
      if ( v42 != v43 )
      {
        v48 = *idList;
        if ( !*idList )
          goto LABEL_70;
        max_length = v48->max_length;
        goto LABEL_39;
      }
      goto LABEL_45;
    }
    if ( !v45 )
      goto LABEL_70;
    v50 = *(_QWORD *)&v45->max_length;
    if ( v42 >= (unsigned int)v50 )
      goto LABEL_71;
    v51 = v45->m_Items[v42 + 1];
    if ( v51 >= 1 )
    {
      if ( v42 != v43 )
      {
        if ( v43 >= (unsigned int)v50 )
          goto LABEL_71;
        v45->m_Items[v43 + 1] = v51;
        v52 = *titleList;
        if ( !*titleList )
          goto LABEL_70;
        v53 = v52->max_length;
        if ( v42 >= v53 || v43 >= (unsigned int)v53 )
          goto LABEL_71;
        v54 = (int64_t)v52->m_Items[v42];
        v55 = &v52->obj.klass + (int)v43;
        v55[4] = (Il2CppClass *)v54;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v55 + 4), v54, v35, v36, v37, v38, (FollowerInfo_o *)v39, v40);
        v62 = *explanationList;
        if ( !*explanationList )
          goto LABEL_70;
        v63 = v62->max_length;
        if ( v42 >= v63 || v43 >= (unsigned int)v63 )
LABEL_71:
          sub_1C2E390(Instance, v30);
        v64 = (int64_t)v62->m_Items[v42];
        v65 = &v62->obj.klass + (int)v43;
        v65[4] = (Il2CppClass *)v64;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v65 + 4), v64, v56, v57, v58, v59, v60, v61);
        v48 = *idList;
        if ( !*idList )
          goto LABEL_70;
        max_length = v48->max_length;
        v34 = IsServantEquip;
LABEL_39:
        if ( v42 >= max_length )
          goto LABEL_71;
        v48->m_Items[v42 + 1] = 0;
        v66 = *titleList;
        if ( !*titleList )
          goto LABEL_70;
        if ( v42 >= v66->max_length )
          goto LABEL_71;
        v66->m_Items[v42] = 0LL;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)((char *)v66 + i),
          0LL,
          v35,
          v36,
          v37,
          v38,
          (FollowerInfo_o *)v39,
          v40);
        v73 = *explanationList;
        if ( !*explanationList )
          goto LABEL_70;
        if ( v42 >= v73->max_length )
          goto LABEL_71;
        v73->m_Items[v42] = 0LL;
        sub_1C2E0D0((PartyOrganizationUtility_o *)((char *)v73 + i), 0LL, v67, v68, v69, v70, v71, v72);
      }
LABEL_45:
      ++v43;
    }
    ++v42;
  }
  ItemLinkSkillIds = (System_Collections_ICollection_o *)ServantPassiveSkillMaster__GetItemLinkSkillIds(
                                                           (ServantPassiveSkillMaster_o *)Instance,
                                                           svtIda,
                                                           dispLimitCount,
                                                           nowTime,
                                                           (const MethodInfo *)v37);
  if ( !isMySvt )
    goto LABEL_68;
  v81 = ItemLinkSkillIds;
  if ( BasicHelper__IsNullOrEmpty(ItemLinkSkillIds, 0LL) )
    goto LABEL_68;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_SkillMaster___);
  if ( !v81 )
LABEL_70:
    sub_1C2E388(Instance, v30);
  monitor = v81[1].monitor;
  if ( (int)monitor < 1 )
  {
LABEL_68:
    if ( v43 )
      return;
LABEL_69:
    *idList = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)idList, 0LL, v75, v76, v77, v78, v79, v80);
    *titleList = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)titleList, 0LL, v90, v91, v92, v93, v94, v95);
    *explanationList = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)explanationList, 0LL, v96, v97, v98, v99, v100, v101);
    return;
  }
  v83 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v84 = 0LL;
  v85 = v43;
  do
  {
    if ( v84 >= (unsigned int)monitor )
      goto LABEL_71;
    if ( !v83 )
      goto LABEL_70;
    v86 = *((_DWORD *)&v81[2].klass + v84);
    Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  v83,
                                  &entity,
                                  v86,
                                  (const MethodInfo_327B1CC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v87 = *idList;
      if ( !*idList )
        goto LABEL_70;
      if ( v85 >= v87->max_length )
        goto LABEL_71;
      v87->m_Items[v85 + 1] = v86;
      v88 = *titleList;
      if ( !*titleList )
        goto LABEL_70;
      v89 = *explanationList;
      if ( !*explanationList )
        goto LABEL_70;
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_70;
      if ( v85 >= v88->max_length || v85 >= v89->max_length )
        goto LABEL_71;
      SkillEntity__GetEffectExplanation((SkillEntity_o *)entity, &v88->m_Items[v85], &v89->m_Items[v85], 0, v34, 0LL);
      ++v85;
    }
    LODWORD(monitor) = v81[1].monitor;
    ++v84;
  }
  while ( (__int64)v84 < (int)monitor );
  if ( !v85 )
    goto LABEL_69;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillMaster__getPriorityKey(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-18h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v7 = num;
  v8 = svtId;
  if ( (byte_4BFE066 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1525/*":"*/, *(_QWORD *)&svtId);
    byte_4BFE066 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_63246844(v4, (System_String_o *)StringLiteral_1525/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v12; // x22
  int32_t v13; // w23
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  v3 = svtId;
  if ( (byte_4BFE068 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__,
      *(_QWORD *)&svtId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v9);
    byte_4BFE068 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        if ( LODWORD(list->fields.items) == v3 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v21 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v23[4] = *(Il2CppClass **)&svtId;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v23 + 4), *(int64_t *)&svtId, v14, v15, v16, v17, v18, v19);
          }
        }
      }
      if ( Count == ++v13 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2E388(list, *(_QWORD *)&svtId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_17;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v12,
                                              (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
}


ServantPassiveSkillEntity_o *__fastcall ServantPassiveSkillMaster__getUseEntity(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        int64_t nowTime,
        const MethodInfo *method)
{
  ServantPassiveSkillEntity_array *EntityListFromIdNum; // x0
  __int64 v18; // x1
  ServantPassiveSkillEntity_array *v19; // x24
  unsigned int i; // w29
  Il2CppClass **v21; // x8
  ServantPassiveSkillEntity_o *v22; // x27
  const MethodInfo *v24; // [xsp+8h] [xbp-68h]

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v19 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v19->max_length )
        sub_1C2E390(EntityListFromIdNum, v18);
      v21 = &v19->obj.klass + i;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_1C2E388(EntityListFromIdNum, v18);
      EntityListFromIdNum = (ServantPassiveSkillEntity_array *)ServantPassiveSkillEntity__isUse(
                                                                 (ServantPassiveSkillEntity_o *)v21[4],
                                                                 userId,
                                                                 svtLv,
                                                                 limitCount,
                                                                 dispLimitCount,
                                                                 friendshipRank,
                                                                 beforeClearQuestId,
                                                                 isMySvt,
                                                                 nowTime,
                                                                 v24);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v22;
    }
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getUseEntityList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v14; // x1
  BalanceConfig_c *v15; // x0
  ServantPassiveSkillEntity_array *v16; // x27
  signed __int64 v17; // x19
  PartyOrganizationUtility_o *i; // x22
  BalanceConfig_c *v19; // x0
  signed __int64 v20; // x29
  ServantPassiveSkillEntity_o *UseEntity; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x19
  unsigned __int64 v30; // x29
  __int64 v32; // x0
  const MethodInfo *v33; // [xsp+18h] [xbp-88h]

  if ( (byte_4BFE06B & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1C2E12C(&ServantPassiveSkillEntity___TypeInfo, v14);
    byte_4BFE06B = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantPassiveSkillEntity_array *)sub_1C2E1D4(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  v17 = 0LL;
  for ( i = (PartyOrganizationUtility_o *)v16->m_Items; ; i = (PartyOrganizationUtility_o *)((char *)i + 8) )
  {
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    if ( v17 >= v19->static_fields->SvtPassiveSkillListMax )
      break;
    v20 = v17 + 1;
    UseEntity = ServantPassiveSkillMaster__getUseEntity(
                  this,
                  svtId,
                  (int)v17 + 1,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  friendshipRank,
                  beforeClearQuestId,
                  isMySvt,
                  nowTime,
                  v33);
    if ( !v16 )
      sub_1C2E388(UseEntity, v22);
    v29 = (int64_t)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1C2E268(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v32 = sub_1C2E3AC(0LL);
        sub_1C2E254(v32, 0LL);
      }
    }
    v30 = v20 - 1;
    if ( v30 >= v16->max_length )
      sub_1C2E390(UseEntity, v22);
    i->klass = (PartyOrganizationUtility_c *)v29;
    sub_1C2E0D0(i, v29, v23, v24, v25, v26, v27, v28);
    v17 = v30 + 1;
  }
  return v16;
}


bool __fastcall ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v30; // x20
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x23
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_object__o *v56; // x24
  System_Collections_Generic_List_object__o *v57; // x0
  Il2CppClass *v58; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  void **v61; // x8
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  _BOOL8 v66; // x0
  __int64 v67; // x1
  ServantPassiveSkillMaster___c_c *v68; // x8
  Il2CppObject *v69; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v72; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  System_Collections_Generic_Dictionary_object__object__o *v80; // x23
  System_Object_array *v81; // x0
  __int64 v82; // x1
  int32_t monitor; // w2
  int v84; // w8
  ServantPassiveSkillMaster_o *v86; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v87; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v88; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4BFE067 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__, method);
    sub_1C2E12C(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__, v5);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v6);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__,
      v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__, v10);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v11);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v12);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v13);
    sub_1C2E12C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v14);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v15);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, v16);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__, v18);
    sub_1C2E12C(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v20);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v22);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v24);
    sub_1C2E12C(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v25);
    sub_1C2E12C(&ServantPassiveSkillEntity_TypeInfo, v26);
    sub_1C2E12C(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, v27);
    sub_1C2E12C(&ServantPassiveSkillMaster___c_TypeInfo, v28);
    byte_4BFE067 = 1;
  }
  value = 0LL;
  memset(&v88, 0, sizeof(v88));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3335CFC *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v86 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_3216144 *)Method_System_Collections_ObjectModel_Collection_ServantPassiveSkillEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2E388(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_17;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_17:
      v40 = sub_1C8010C(Enumerator, System_Collections_Generic_IEnumerator_ServantPassiveSkillEntity__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1C2E388(0LL, v42);
    methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1C2E648(v41);
LABEL_51:
      sub_1C2E388(v57, v49);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v41,
                                    *(_DWORD *)(v41 + 16),
                                    *(_DWORD *)(v41 + 20),
                                    v43);
    if ( !v30 )
      sub_1C2E388(PriorityKey, v47);
    v48 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            PriorityKey,
            &value,
            (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v56,
        (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v56;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v56,
        (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v57 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v58 = value[1].klass;
    v59 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v58 )
      sub_1C2E388(v57, v49);
    size = v57->fields._size;
    if ( (unsigned int)size >= LODWORD(v58->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        v44,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->_1.image + size;
      v57->fields._size = size + 1;
      v61[4] = v44;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v44, v50, v51, v52, v53, v54, v55);
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_34;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_34:
    v65 = sub_1C8010C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v65 + 8));
  if ( !v30 )
LABEL_57:
    sub_1C2E388(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v87,
    v30,
    (const MethodInfo_3335FA4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v66 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v88,
            (const MethodInfo_34313CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    if ( !v66 )
      break;
    v68 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v88.fields._current.fields.key;
    v69 = v88.fields._current.fields.value;
    if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v68 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v68->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v68->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v68);
        v68 = ServantPassiveSkillMaster___c_TypeInfo;
      }
      v72 = (Il2CppObject *)v68->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__6_0, v72, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0LL);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
        (int64_t)_9__6_0,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79);
    }
    if ( !v69 )
      sub_1C2E388(v66, v67);
    System_Collections_Generic_List_object___Sort_57070448(
      (System_Collections_Generic_List_object__o *)v69,
      _9__6_0,
      (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v80 = (System_Collections_Generic_Dictionary_object__object__o *)v86->fields.listCache;
    v81 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v69,
            (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v80 )
      sub_1C2E388(v81, v82);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v80,
      key,
      &v81->obj,
      (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v69[1].monitor;
    v84 = HIDWORD(v69[1].monitor) + 1;
    LODWORD(v69[1].monitor) = 0;
    HIDWORD(v69[1].monitor) = v84;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v69[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v88,
    (const MethodInfo_34314EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_3335CFC *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFE06E & 1) == 0 )
  {
    sub_1C2E12C(&ServantPassiveSkillMaster___c_TypeInfo, v1);
    byte_4BFE06E = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall ServantPassiveSkillMaster___c___ctor(ServantPassiveSkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantPassiveSkillMaster___c___EnumerateSpecialSkillsBySvtId_b__8_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___GetItemLinkSkillIds_b__13_2(
        ServantPassiveSkillMaster___c_o *this,
        ItemEntity_o *itemEntity,
        const MethodInfo *method)
{
  if ( !itemEntity )
    sub_1C2E388(this, 0LL);
  return itemEntity->fields.value;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C2E388(this, a);
  return a->fields.priority - b->fields.priority;
}


void __fastcall ServantPassiveSkillMaster___c__DisplayClass13_0___ctor(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantPassiveSkillMaster___c__DisplayClass13_0___GetItemLinkSkillIds_b__0(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        EventItemUsedInfo_o *usedInfo,
        const MethodInfo *method)
{
  if ( !usedInfo )
    sub_1C2E388(this, 0LL);
  return usedInfo->fields.svtId == this->fields.baseSvtId;
}


ItemEntity_o *__fastcall ServantPassiveSkillMaster___c__DisplayClass13_0___GetItemLinkSkillIds_b__1(
        ServantPassiveSkillMaster___c__DisplayClass13_0_o *this,
        EventItemUsedInfo_o *usedInfo,
        const MethodInfo *method)
{
  ServantPassiveSkillMaster___c__DisplayClass13_0_o *v4; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4BFE06F & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)sub_1C2E12C(
                                                                  &Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__,
                                                                  usedInfo);
    byte_4BFE06F = 1;
  }
  entity = 0LL;
  if ( !usedInfo )
    goto LABEL_12;
  this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)v4->fields.itemMaster;
  if ( !this )
    goto LABEL_12;
  this = (ServantPassiveSkillMaster___c__DisplayClass13_0_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                &entity,
                                                                usedInfo->fields.itemId,
                                                                (const MethodInfo_327B1CC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0LL;
  if ( !entity )
LABEL_12:
    sub_1C2E388(this, usedInfo);
  if ( LODWORD(entity[3].klass) == 40 )
    return (ItemEntity_o *)entity;
  else
    return 0LL;
}