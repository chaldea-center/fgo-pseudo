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

  if ( (byte_4B67490 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v3);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v4);
    byte_4B67490 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_32AF874 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v5;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
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

  if ( (byte_4B67494 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, *(_QWORD *)&svtId);
    sub_1BE4ACC(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v5);
    sub_1BE4ACC(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__, v6);
    sub_1BE4ACC(&ServantPassiveSkillMaster___c_TypeInfo, v7);
    byte_4B67494 = 1;
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
    _9__8_0 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__8_0,
      v12,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0LL);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v14, v15, v16, v17, v18, v19);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v10,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_4B6748E & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_4B6748E = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31FDB1C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_4B6748F & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4B6748F = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  if ( (byte_4B67495 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1BE4ACC(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            *(_QWORD *)&svtId);
    byte_4B67495 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1BE4D28(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  ServantEntity_o *v27; // x22
  bool IsServantEquip; // w24
  BalanceConfig_c *v29; // x0
  __int64 v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  MethodInfo *v35; // x6
  PartyListViewItem_o *v36; // x7
  ServantPassiveSkillEntity_array *UseEntityList; // x23
  unsigned __int64 v38; // x27
  unsigned int v39; // w26
  __int64 v40; // x29
  bool v41; // w24
  System_Int32_array *v42; // x8
  System_String_array *v43; // x8
  System_String_array *v44; // x10
  System_Int32_array *v45; // x8
  unsigned __int64 max_length; // x9
  __int64 v47; // x10
  int v48; // w9
  System_String_array *v49; // x8
  unsigned __int64 v50; // x9
  int64_t v51; // x1
  Il2CppClass **v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_String_array *v59; // x8
  unsigned __int64 v60; // x9
  int64_t v61; // x1
  Il2CppClass **v62; // x0
  System_String_array *v63; // x8
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_String_array *v70; // x8
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  const MethodInfo *v83; // [xsp+10h] [xbp-90h]

  if ( (byte_4B67497 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, idList);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantMaster___, v21);
    sub_1BE4ACC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1BE4ACC(&int___TypeInfo, v23);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_4B67497 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_49:
    sub_1BE4D28(Instance, v26);
  }
  v27 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v27, idList, titleList, explanationList, 0LL);
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  v30 = sub_1BE4B74(int___TypeInfo, (unsigned int)v29->static_fields->SvtPassiveSkillListMax);
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
                    v83);
  v38 = 0LL;
  v39 = 0;
  v40 = 32LL;
  v41 = IsServantEquip;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v38 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_49;
    if ( v38 >= UseEntityList->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)UseEntityList->m_Items[v38];
    v42 = *idList;
    if ( Instance )
    {
      if ( !v42 )
        goto LABEL_49;
      if ( v39 >= v42->max_length )
        goto LABEL_50;
      v42->m_Items[v39 + 1] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v30 )
        goto LABEL_49;
      v43 = *titleList;
      if ( !*titleList )
        goto LABEL_49;
      v44 = *explanationList;
      if ( !*explanationList )
        goto LABEL_49;
      if ( v39 >= *(_DWORD *)(v30 + 24) || v39 >= v43->max_length || v39 >= v44->max_length )
        goto LABEL_50;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v30 + 4LL * (int)v39 + 32),
        &v43->m_Items[v39],
        &v44->m_Items[v39],
        0,
        v41,
        v35);
      if ( v38 != v39 )
      {
        v45 = *idList;
        if ( !*idList )
          goto LABEL_49;
        max_length = v45->max_length;
        goto LABEL_39;
      }
      goto LABEL_45;
    }
    if ( !v42 )
      goto LABEL_49;
    v47 = *(_QWORD *)&v42->max_length;
    if ( v38 >= (unsigned int)v47 )
      goto LABEL_50;
    v48 = v42->m_Items[v38 + 1];
    if ( v48 >= 1 )
    {
      if ( v38 != v39 )
      {
        if ( v39 >= (unsigned int)v47 )
          goto LABEL_50;
        v42->m_Items[v39 + 1] = v48;
        v49 = *titleList;
        if ( !*titleList )
          goto LABEL_49;
        v50 = v49->max_length;
        if ( v38 >= v50 || v39 >= (unsigned int)v50 )
          goto LABEL_50;
        v51 = (int64_t)v49->m_Items[v38];
        v52 = &v49->obj.klass + (int)v39;
        v52[4] = (Il2CppClass *)v51;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v52 + 4), v51, v31, v32, v33, v34, (FollowerInfo_o *)v35, v36);
        v59 = *explanationList;
        if ( !*explanationList )
          goto LABEL_49;
        v60 = v59->max_length;
        if ( v38 >= v60 || v39 >= (unsigned int)v60 )
LABEL_50:
          sub_1BE4D30(Instance, v26);
        v61 = (int64_t)v59->m_Items[v38];
        v62 = &v59->obj.klass + (int)v39;
        v62[4] = (Il2CppClass *)v61;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v62 + 4), v61, v53, v54, v55, v56, v57, v58);
        v45 = *idList;
        if ( !*idList )
          goto LABEL_49;
        max_length = v45->max_length;
LABEL_39:
        if ( v38 >= max_length )
          goto LABEL_50;
        v45->m_Items[v38 + 1] = 0;
        v63 = *titleList;
        if ( !*titleList )
          goto LABEL_49;
        if ( v38 >= v63->max_length )
          goto LABEL_50;
        v63->m_Items[v38] = 0LL;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)((char *)v63 + v40),
          0LL,
          v31,
          v32,
          v33,
          v34,
          (FollowerInfo_o *)v35,
          v36);
        v70 = *explanationList;
        if ( !*explanationList )
          goto LABEL_49;
        if ( v38 >= v70->max_length )
          goto LABEL_50;
        v70->m_Items[v38] = 0LL;
        sub_1BE4A70((PartyOrganizationUtility_o *)((char *)v70 + v40), 0LL, v64, v65, v66, v67, v68, v69);
      }
LABEL_45:
      ++v39;
    }
    ++v38;
    v40 += 8LL;
  }
  if ( !v39 )
  {
    *idList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)idList, 0LL, v31, v32, v33, v34, (FollowerInfo_o *)v35, v36);
    *titleList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)titleList, 0LL, v71, v72, v73, v74, v75, v76);
    *explanationList = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)explanationList, 0LL, v77, v78, v79, v80, v81, v82);
  }
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
  if ( (byte_4B67491 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1542/*":"*/, *(_QWORD *)&svtId);
    byte_4B67491 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62710068(v4, (System_String_o *)StringLiteral_1542/*":"*/, v5, 0LL);
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
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v13; // x22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  v3 = svtId;
  if ( (byte_4B67493 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v9);
    sub_1BE4ACC(&ServantPassiveSkillEntity_TypeInfo, v10);
    byte_4B67493 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v25[4] = *(Il2CppClass **)&svtId;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v25 + 4), *(int64_t *)&svtId, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(list, *(_QWORD *)&svtId);
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v13,
                                              (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
        sub_1BE4D30(EntityListFromIdNum, v18);
      v21 = &v19->obj.klass + i;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_1BE4D28(EntityListFromIdNum, v18);
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

  if ( (byte_4B67496 & 1) == 0 )
  {
    sub_1BE4ACC(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1BE4ACC(&ServantPassiveSkillEntity___TypeInfo, v14);
    byte_4B67496 = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantPassiveSkillEntity_array *)sub_1BE4B74(
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
      sub_1BE4D28(UseEntity, v22);
    v29 = (int64_t)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1BE4C08(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v32 = sub_1BE4D4C(0LL);
        sub_1BE4BF4(v32, 0LL);
      }
    }
    v30 = v20 - 1;
    if ( v30 >= v16->max_length )
      sub_1BE4D30(UseEntity, v22);
    i->klass = (PartyOrganizationUtility_c *)v29;
    sub_1BE4A70(i, v29, v23, v24, v25, v26, v27, v28);
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

  if ( (byte_4B67492 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BE4ACC(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__, v5);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v6);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__,
      v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__, v10);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v11);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v12);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v13);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v14);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v15);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__, v18);
    sub_1BE4ACC(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v19);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v20);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v21);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v22);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v23);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v24);
    sub_1BE4ACC(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v25);
    sub_1BE4ACC(&ServantPassiveSkillEntity_TypeInfo, v26);
    sub_1BE4ACC(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, v27);
    sub_1BE4ACC(&ServantPassiveSkillMaster___c_TypeInfo, v28);
    byte_4B67492 = 1;
  }
  value = 0LL;
  memset(&v88, 0, sizeof(v88));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_32B03AC *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v30 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v30,
    (const MethodInfo_32AF874 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v86 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v31);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v40 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v44 = (Il2CppObject *)v41;
    if ( !v41 )
      sub_1BE4D28(0LL, v42);
    methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1BE4FE8(v41);
LABEL_51:
      sub_1BE4D28(v57, v49);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v41,
                                    *(_DWORD *)(v41 + 16),
                                    *(_DWORD *)(v41 + 20),
                                    v43);
    if ( !v30 )
      sub_1BE4D28(PriorityKey, v47);
    v48 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v30,
            PriorityKey,
            &value,
            (const MethodInfo_32B1A30 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v56 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v56,
        (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v56;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v30,
        v48,
        (Il2CppObject *)v56,
        (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v57 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v58 = value[1].klass;
    v59 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v58 )
      sub_1BE4D28(v57, v49);
    size = v57->fields._size;
    if ( (unsigned int)size >= LODWORD(v58->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v57,
        v44,
        *(const MethodInfo_35EC224 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->_1.image + size;
      v57->fields._size = size + 1;
      v61[4] = v44;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v44, v50, v51, v52, v53, v54, v55);
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
    v65 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v65 + 8));
  if ( !v30 )
LABEL_57:
    sub_1BE4D28(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v87,
    v30,
    (const MethodInfo_32B0654 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v88 = v87;
  while ( 1 )
  {
    v66 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v88,
            (const MethodInfo_33AE940 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
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
      _9__6_0 = (System_Comparison_T__o *)sub_1BE4D18(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__6_0, v72, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0LL);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1BE4A70(
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
      sub_1BE4D28(v66, v67);
    System_Collections_Generic_List_object___Sort_56548584(
      (System_Collections_Generic_List_object__o *)v69,
      _9__6_0,
      (const MethodInfo_35EDCE8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v80 = (System_Collections_Generic_Dictionary_object__object__o *)v86->fields.listCache;
    v81 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v69,
            (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v80 )
      sub_1BE4D28(v81, v82);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v80,
      key,
      &v81->obj,
      (const MethodInfo_32B0210 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v69[1].monitor;
    v84 = HIDWORD(v69[1].monitor) + 1;
    LODWORD(v69[1].monitor) = 0;
    HIDWORD(v69[1].monitor) = v84;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v69[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v88,
    (const MethodInfo_33AEA60 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v30,
    (const MethodInfo_32B03AC *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
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

  if ( (byte_4B67498 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantPassiveSkillMaster___c_TypeInfo, v1);
    byte_4B67498 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v2;
  sub_1BE4A70(
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
    sub_1BE4D28(this, 0LL);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BE4D28(this, a);
  return a->fields.priority - b->fields.priority;
}