void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B16AA2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v7, v8);
    byte_4B16AA2 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.listCache, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *__fastcall ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantPassiveSkillEntity_array *ServantSkillList; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ServantPassiveSkillMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v18; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B16AA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__, v7, v8);
    sub_1BCA7E0(&ServantPassiveSkillMaster___c_TypeInfo, v9, v10);
    byte_4B16AA6 = 1;
  }
  ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(this, svtId, method);
  v15 = ServantPassiveSkillMaster___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantSkillList;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo, v12);
    v15 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__bool__o *)v15->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15, v12);
      v15 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__8_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_ServantPassiveSkillEntity__bool__TypeInfo,
                                               v12,
                                               v13,
                                               v14);
    System_Func_object__bool____ctor(
      _9__8_0,
      v18,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0LL);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v20, v21, v22, v23, v24, v25);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v16,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_4B16AA0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&num);
    byte_4B16AA0 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_4B16AA1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&svtId);
    byte_4B16AA1 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  if ( (byte_4B16AA7 & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1BCA7E0(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            *(_QWORD *)&svtId,
                                            *(_QWORD *)&num);
    byte_4B16AA7 = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1BCAA3C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  ServantEntity_o *v31; // x22
  bool IsServantEquip; // w24
  __int64 v33; // x1
  BalanceConfig_c *v34; // x0
  __int64 v35; // x22
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  MethodInfo *v40; // x6
  PartyListViewItem_o *v41; // x7
  ServantPassiveSkillEntity_array *UseEntityList; // x23
  unsigned __int64 v43; // x27
  unsigned int v44; // w26
  __int64 v45; // x29
  bool v46; // w24
  System_Int32_array *v47; // x8
  System_String_array *v48; // x8
  System_String_array *v49; // x10
  System_Int32_array *v50; // x8
  unsigned __int64 max_length; // x9
  __int64 v52; // x10
  int v53; // w9
  System_String_array *v54; // x8
  unsigned __int64 v55; // x9
  int64_t v56; // x1
  Il2CppClass **v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_String_array *v64; // x8
  unsigned __int64 v65; // x9
  int64_t v66; // x1
  Il2CppClass **v67; // x0
  System_String_array *v68; // x8
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_String_array *v75; // x8
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  const MethodInfo *v88; // [xsp+10h] [xbp-90h]

  if ( (byte_4B16AA9 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, idList, titleList);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&int___TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28);
    byte_4B16AA9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_49:
    sub_1BCAA3C(Instance, v30);
  }
  v31 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v31, idList, titleList, explanationList, 0LL);
  v34 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v33);
    v34 = BalanceConfig_TypeInfo;
  }
  v35 = sub_1BCA888(int___TypeInfo, (unsigned int)v34->static_fields->SvtPassiveSkillListMax);
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
                    v88);
  v43 = 0LL;
  v44 = 0;
  v45 = 32LL;
  v46 = IsServantEquip;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v30);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v43 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_49;
    if ( v43 >= UseEntityList->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)UseEntityList->m_Items[v43];
    v47 = *idList;
    if ( Instance )
    {
      if ( !v47 )
        goto LABEL_49;
      if ( v44 >= v47->max_length )
        goto LABEL_50;
      v47->m_Items[v44 + 1] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v35 )
        goto LABEL_49;
      v48 = *titleList;
      if ( !*titleList )
        goto LABEL_49;
      v49 = *explanationList;
      if ( !*explanationList )
        goto LABEL_49;
      if ( v44 >= *(_DWORD *)(v35 + 24) || v44 >= v48->max_length || v44 >= v49->max_length )
        goto LABEL_50;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v35 + 4LL * (int)v44 + 32),
        &v48->m_Items[v44],
        &v49->m_Items[v44],
        0,
        v46,
        v40);
      if ( v43 != v44 )
      {
        v50 = *idList;
        if ( !*idList )
          goto LABEL_49;
        max_length = v50->max_length;
        goto LABEL_39;
      }
      goto LABEL_45;
    }
    if ( !v47 )
      goto LABEL_49;
    v52 = *(_QWORD *)&v47->max_length;
    if ( v43 >= (unsigned int)v52 )
      goto LABEL_50;
    v53 = v47->m_Items[v43 + 1];
    if ( v53 >= 1 )
    {
      if ( v43 != v44 )
      {
        if ( v44 >= (unsigned int)v52 )
          goto LABEL_50;
        v47->m_Items[v44 + 1] = v53;
        v54 = *titleList;
        if ( !*titleList )
          goto LABEL_49;
        v55 = v54->max_length;
        if ( v43 >= v55 || v44 >= (unsigned int)v55 )
          goto LABEL_50;
        v56 = (int64_t)v54->m_Items[v43];
        v57 = &v54->obj.klass + (int)v44;
        v57[4] = (Il2CppClass *)v56;
        sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), v56, v36, v37, v38, v39, (FollowerInfo_o *)v40, v41);
        v64 = *explanationList;
        if ( !*explanationList )
          goto LABEL_49;
        v65 = v64->max_length;
        if ( v43 >= v65 || v44 >= (unsigned int)v65 )
LABEL_50:
          sub_1BCAA44(Instance, v30);
        v66 = (int64_t)v64->m_Items[v43];
        v67 = &v64->obj.klass + (int)v44;
        v67[4] = (Il2CppClass *)v66;
        sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), v66, v58, v59, v60, v61, v62, v63);
        v50 = *idList;
        if ( !*idList )
          goto LABEL_49;
        max_length = v50->max_length;
LABEL_39:
        if ( v43 >= max_length )
          goto LABEL_50;
        v50->m_Items[v43 + 1] = 0;
        v68 = *titleList;
        if ( !*titleList )
          goto LABEL_49;
        if ( v43 >= v68->max_length )
          goto LABEL_50;
        v68->m_Items[v43] = 0LL;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)((char *)v68 + v45),
          0LL,
          v36,
          v37,
          v38,
          v39,
          (FollowerInfo_o *)v40,
          v41);
        v75 = *explanationList;
        if ( !*explanationList )
          goto LABEL_49;
        if ( v43 >= v75->max_length )
          goto LABEL_50;
        v75->m_Items[v43] = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)((char *)v75 + v45), 0LL, v69, v70, v71, v72, v73, v74);
      }
LABEL_45:
      ++v44;
    }
    ++v43;
    v45 += 8LL;
  }
  if ( !v44 )
  {
    *idList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)idList, 0LL, v36, v37, v38, v39, (FollowerInfo_o *)v40, v41);
    *titleList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)titleList, 0LL, v76, v77, v78, v79, v80, v81);
    *explanationList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)explanationList, 0LL, v82, v83, v84, v85, v86, v87);
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
  if ( (byte_4B16AA3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1541/*":"*/, *(_QWORD *)&svtId, *(_QWORD *)&num);
    byte_4B16AA3 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62412480(v4, (System_String_o *)StringLiteral_1541/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  v3 = svtId;
  if ( (byte_4B16AA5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&svtId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantPassiveSkillEntity_TypeInfo, v15, v16);
    byte_4B16AA5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v32 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v34[4] = *(Il2CppClass **)&svtId;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), *(int64_t *)&svtId, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, *(_QWORD *)&svtId);
  }
LABEL_17:
  if ( !v22 )
    goto LABEL_19;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v22,
                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
        sub_1BCAA44(EntityListFromIdNum, v18);
      v21 = &v19->obj.klass + i;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_1BCAA3C(EntityListFromIdNum, v18);
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
  __int64 v15; // x2
  BalanceConfig_c *v16; // x0
  __int64 v17; // x1
  ServantPassiveSkillEntity_array *v18; // x27
  signed __int64 v19; // x19
  PartyOrganizationUtility_o *i; // x22
  BalanceConfig_c *v21; // x0
  signed __int64 v22; // x29
  ServantPassiveSkillEntity_o *UseEntity; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x19
  unsigned __int64 v32; // x29
  __int64 v34; // x0
  const MethodInfo *v35; // [xsp+18h] [xbp-88h]

  if ( (byte_4B16AA8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId, userId);
    sub_1BCA7E0(&ServantPassiveSkillEntity___TypeInfo, v14, v15);
    byte_4B16AA8 = 1;
  }
  v16 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    v16 = BalanceConfig_TypeInfo;
  }
  v18 = (ServantPassiveSkillEntity_array *)sub_1BCA888(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v16->static_fields->SvtPassiveSkillListMax);
  v19 = 0LL;
  for ( i = (PartyOrganizationUtility_o *)v18->m_Items; ; i = (PartyOrganizationUtility_o *)((char *)i + 8) )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( v19 >= v21->static_fields->SvtPassiveSkillListMax )
      break;
    v22 = v19 + 1;
    UseEntity = ServantPassiveSkillMaster__getUseEntity(
                  this,
                  svtId,
                  (int)v19 + 1,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  friendshipRank,
                  beforeClearQuestId,
                  isMySvt,
                  nowTime,
                  v35);
    if ( !v18 )
      sub_1BCAA3C(UseEntity, v24);
    v31 = (int64_t)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1BCA91C(UseEntity, v18->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v34 = sub_1BCAA60(0LL);
        sub_1BCA908(v34, 0LL);
      }
    }
    v32 = v22 - 1;
    if ( v32 >= v18->max_length )
      sub_1BCAA44(UseEntity, v24);
    i->klass = (PartyOrganizationUtility_c *)v31;
    sub_1BCA784(i, v31, v25, v26, v27, v28, v29, v30);
    v19 = v32 + 1;
  }
  return v18;
}


bool __fastcall ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_Dictionary_object__object__o *v60; // x20
  __int64 v61; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int32_t *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  const MethodInfo *v73; // x3
  Il2CppObject *v74; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v77; // x1
  Il2CppObject *v78; // x23
  __int64 v79; // x1
  int64_t v80; // x2
  __int64 v81; // x3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  System_Collections_Generic_List_object__o *v86; // x24
  System_Collections_Generic_List_object__o *v87; // x0
  Il2CppClass *v88; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  void **v91; // x8
  System_Collections_Generic_IEnumerator_T__c *v92; // x8
  __int64 v93; // x9
  int32_t *v94; // x10
  __int64 v95; // x0
  _BOOL8 v96; // x0
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x3
  ServantPassiveSkillMaster___c_c *v100; // x8
  Il2CppObject *v101; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v104; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  System_Collections_Generic_Dictionary_object__object__o *v112; // x23
  System_Object_array *v113; // x0
  __int64 v114; // x1
  int32_t monitor; // w2
  int v116; // w8
  ServantPassiveSkillMaster_o *v118; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v119; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v120; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B16AA4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__, v8, v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v10,
      v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__,
      v12,
      v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__,
      v14,
      v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__, v16, v17);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__,
      v18,
      v19);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v20, v21);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v22,
      v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v24,
      v25);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v26,
      v27);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v32, v33);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__,
      v34,
      v35);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v36,
      v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v40, v41);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v42, v43);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v44, v45);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v46, v47);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v48, v49);
    sub_1BCA7E0(&ServantPassiveSkillEntity_TypeInfo, v50, v51);
    sub_1BCA7E0(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, v52, v53);
    sub_1BCA7E0(&ServantPassiveSkillMaster___c_TypeInfo, v54, v55);
    byte_4B16AA4 = 1;
  }
  value = 0LL;
  memset(&v120, 0, sizeof(v120));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v60 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo,
                                                                     v57,
                                                                     v58,
                                                                     v59);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v60,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v118 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v61);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v64 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v64;
        p_offset += 4;
        if ( !v64 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v67 = Enumerator->klass;
    v68 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v69 = &v67->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v69 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_17;
      }
      v70 = (__int64)&v67->vtable[*v69].method;
    }
    else
    {
LABEL_17:
      v70 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v70)(
            Enumerator,
            *(_QWORD *)(v70 + 8));
    v74 = (Il2CppObject *)v71;
    if ( !v71 )
      sub_1BCAA3C(0LL, v72);
    methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v71 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v71 + 200LL) + 8 * methodPtr_low - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1BCACFC(v71);
LABEL_51:
      sub_1BCAA3C(v87, v79);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v71,
                                    *(_DWORD *)(v71 + 16),
                                    *(_DWORD *)(v71 + 20),
                                    v73);
    if ( !v60 )
      sub_1BCAA3C(PriorityKey, v77);
    v78 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v60,
            PriorityKey,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v86 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo,
                                                           v79,
                                                           v80,
                                                           v81);
      System_Collections_Generic_List_object____ctor(
        v86,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v86;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v60,
        v78,
        (Il2CppObject *)v86,
        (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v87 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v88 = value[1].klass;
    v89 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v88 )
      sub_1BCAA3C(v87, v79);
    size = v87->fields._size;
    if ( (unsigned int)size >= LODWORD(v88->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v87,
        v74,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
    }
    else
    {
      v91 = &v88->_1.image + size;
      v87->fields._size = size + 1;
      v91[4] = v74;
      sub_1BCA784((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v74, v80, v81, v82, v83, v84, v85);
    }
  }
  v92 = Enumerator->klass;
  v93 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v94 = &v92->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
    {
      --v93;
      v94 += 4;
      if ( !v93 )
        goto LABEL_34;
    }
    v95 = (__int64)&v92->vtable[*v94].method;
  }
  else
  {
LABEL_34:
    v95 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v95)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v95 + 8));
  if ( !v60 )
LABEL_57:
    sub_1BCAA3C(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v119,
    v60,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v120 = v119;
  while ( 1 )
  {
    v96 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v120,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    if ( !v96 )
      break;
    v100 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v120.fields._current.fields.key;
    v101 = v120.fields._current.fields.value;
    if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo, v97);
      v100 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v100->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v100->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v100, v97);
        v100 = ServantPassiveSkillMaster___c_TypeInfo;
      }
      v104 = (Il2CppObject *)v100->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1BCAA2C(
                                            System_Comparison_ServantPassiveSkillEntity__TypeInfo,
                                            v97,
                                            v98,
                                            v99);
      System_Comparison_object____ctor(_9__6_0, v104, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0LL);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
        (int64_t)_9__6_0,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
    }
    if ( !v101 )
      sub_1BCAA3C(v96, v97);
    System_Collections_Generic_List_object___Sort_56244000(
      (System_Collections_Generic_List_object__o *)v101,
      _9__6_0,
      (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v112 = (System_Collections_Generic_Dictionary_object__object__o *)v118->fields.listCache;
    v113 = System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)v101,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v112 )
      sub_1BCAA3C(v113, v114);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v112,
      key,
      &v113->obj,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v101[1].monitor;
    v116 = HIDWORD(v101[1].monitor) + 1;
    LODWORD(v101[1].monitor) = 0;
    HIDWORD(v101[1].monitor) = v116;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v101[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v120,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v60,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16AAA & 1) == 0 )
  {
    sub_1BCA7E0(&ServantPassiveSkillMaster___c_TypeInfo, v1, v2);
    byte_4B16AAA = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantPassiveSkillMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.priority - b->fields.priority;
}