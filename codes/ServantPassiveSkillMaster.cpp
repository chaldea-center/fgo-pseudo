void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5B915 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
    byte_4A5B915 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listCache, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
}


System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *__fastcall ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  ServantPassiveSkillEntity_array *ServantSkillList; // x0
  ServantPassiveSkillMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v9; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5B919 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
    sub_1B885B0(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    sub_1B885B0(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__);
    sub_1B885B0(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4A5B919 = 1;
  }
  ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(this, svtId, method);
  v6 = ServantPassiveSkillMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantSkillList;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v6 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__bool__o *)v6->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__8_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ServantPassiveSkillEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__8_0,
      v9,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0LL);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v7,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
}


ServantPassiveSkillEntity_o *__fastcall ServantPassiveSkillMaster__GetEntity(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B913 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
    byte_4A5B913 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, 0LL);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
}


bool __fastcall ServantPassiveSkillMaster__TryGetEntity(
        ServantPassiveSkillMaster_o *this,
        ServantPassiveSkillEntity_o **entity,
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B914 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
    byte_4A5B914 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
}


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
  if ( (byte_4A5B91A & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__);
    byte_4A5B91A = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1B8880C(PriorityKey, v8);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  ServantEntity_o *v23; // x22
  bool IsServantEquip; // w24
  BalanceConfig_c *v25; // x0
  __int64 v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  ServantPassiveSkillEntity_array *UseEntityList; // x23
  unsigned __int64 v30; // x27
  unsigned int v31; // w26
  __int64 v32; // x29
  bool v33; // w24
  System_Int32_array *v34; // x8
  System_String_array *v35; // x8
  System_String_array *v36; // x10
  System_Int32_array *v37; // x8
  unsigned __int64 max_length; // x9
  __int64 v39; // x10
  int v40; // w9
  System_String_array *v41; // x8
  unsigned __int64 v42; // x9
  System_String_o *v43; // x1
  Il2CppClass **v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_array *v47; // x8
  unsigned __int64 v48; // x9
  System_String_o *v49; // x1
  Il2CppClass **v50; // x0
  System_String_array *v51; // x8
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_array *v54; // x8
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w2
  int32_t v58; // w3
  const MethodInfo *v59; // [xsp+10h] [xbp-90h]

  if ( (byte_4A5B91C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B91C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      svtId,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_49:
    sub_1B8880C(Instance, v22);
  }
  v23 = (ServantEntity_o *)Instance;
  IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
  ServantEntity__getClassSkillInfo(v23, idList, titleList, explanationList, 0LL);
  v25 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v25 = BalanceConfig_TypeInfo;
  }
  v26 = sub_1B88658(int___TypeInfo, (unsigned int)v25->static_fields->SvtPassiveSkillListMax);
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
                    v59);
  v30 = 0LL;
  v31 = 0;
  v32 = 32LL;
  v33 = IsServantEquip;
  while ( 1 )
  {
    Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (DataManager_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v30 >= *(int *)(*(_QWORD *)&Instance[1].fields._DispLog + 36LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_49;
    if ( v30 >= UseEntityList->max_length )
      goto LABEL_50;
    Instance = (DataManager_o *)UseEntityList->m_Items[v30];
    v34 = *idList;
    if ( Instance )
    {
      if ( !v34 )
        goto LABEL_49;
      if ( v31 >= v34->max_length )
        goto LABEL_50;
      v34->m_Items[v31 + 1] = HIDWORD(Instance->fields.m_CancellationTokenSource);
      if ( !v26 )
        goto LABEL_49;
      v35 = *titleList;
      if ( !*titleList )
        goto LABEL_49;
      v36 = *explanationList;
      if ( !*explanationList )
        goto LABEL_49;
      if ( v31 >= *(_DWORD *)(v26 + 24) || v31 >= v35->max_length || v31 >= v36->max_length )
        goto LABEL_50;
      ServantPassiveSkillEntity__getEffectExplanation(
        (ServantPassiveSkillEntity_o *)Instance,
        (int32_t *)(v26 + 4LL * (int)v31 + 32),
        &v35->m_Items[v31],
        &v36->m_Items[v31],
        0,
        v33,
        0LL);
      if ( v30 != v31 )
      {
        v37 = *idList;
        if ( !*idList )
          goto LABEL_49;
        max_length = v37->max_length;
        goto LABEL_39;
      }
      goto LABEL_45;
    }
    if ( !v34 )
      goto LABEL_49;
    v39 = *(_QWORD *)&v34->max_length;
    if ( v30 >= (unsigned int)v39 )
      goto LABEL_50;
    v40 = v34->m_Items[v30 + 1];
    if ( v40 >= 1 )
    {
      if ( v30 != v31 )
      {
        if ( v31 >= (unsigned int)v39 )
          goto LABEL_50;
        v34->m_Items[v31 + 1] = v40;
        v41 = *titleList;
        if ( !*titleList )
          goto LABEL_49;
        v42 = v41->max_length;
        if ( v30 >= v42 || v31 >= (unsigned int)v42 )
          goto LABEL_50;
        v43 = v41->m_Items[v30];
        v44 = &v41->obj.klass + (int)v31;
        v44[4] = (Il2CppClass *)v43;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v43, v27, v28);
        v47 = *explanationList;
        if ( !*explanationList )
          goto LABEL_49;
        v48 = v47->max_length;
        if ( v30 >= v48 || v31 >= (unsigned int)v48 )
LABEL_50:
          sub_1B88814(Instance, v22);
        v49 = v47->m_Items[v30];
        v50 = &v47->obj.klass + (int)v31;
        v50[4] = (Il2CppClass *)v49;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v49, v45, v46);
        v37 = *idList;
        if ( !*idList )
          goto LABEL_49;
        max_length = v37->max_length;
LABEL_39:
        if ( v30 >= max_length )
          goto LABEL_50;
        v37->m_Items[v30 + 1] = 0;
        v51 = *titleList;
        if ( !*titleList )
          goto LABEL_49;
        if ( v30 >= v51->max_length )
          goto LABEL_50;
        v51->m_Items[v30] = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v51 + v32), 0, v27, v28);
        v54 = *explanationList;
        if ( !*explanationList )
          goto LABEL_49;
        if ( v30 >= v54->max_length )
          goto LABEL_50;
        v54->m_Items[v30] = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v54 + v32), 0, v52, v53);
      }
LABEL_45:
      ++v31;
    }
    ++v30;
    v32 += 8LL;
  }
  if ( !v31 )
  {
    *idList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)idList, 0, v27, v28);
    *titleList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)titleList, 0, v55, v56);
    *explanationList = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)explanationList, 0, v57, v58);
  }
}


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
  if ( (byte_4A5B916 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1544/*":"*/);
    byte_4A5B916 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61718292(v4, (System_String_o *)StringLiteral_1544/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  v3 = svtId;
  if ( (byte_4A5B918 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_1B885B0(&ServantPassiveSkillEntity_TypeInfo);
    byte_4A5B918 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        *(_QWORD *)&svtId = list;
        methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = *(Il2CppClass **)&svtId;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), svtId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, *(_QWORD *)&svtId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v7,
                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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

  EntityListFromIdNum = ServantPassiveSkillMaster__getEntityListFromIdNum(this, svtId, num, (const MethodInfo *)userId);
  if ( EntityListFromIdNum )
  {
    v19 = EntityListFromIdNum;
    for ( i = EntityListFromIdNum->max_length - 1; (i & 0x80000000) == 0; --i )
    {
      if ( i >= v19->max_length )
        sub_1B88814(EntityListFromIdNum, v18);
      v21 = &v19->obj.klass + i;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_1B8880C(EntityListFromIdNum, v18);
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
                                                                 0LL);
      if ( ((unsigned __int8)EntityListFromIdNum & 1) != 0 )
        return v22;
    }
  }
  return 0LL;
}


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
  BalanceConfig_c *v14; // x0
  ServantPassiveSkillEntity_array *v15; // x27
  signed __int64 v16; // x19
  ServantStatusBattleListViewItem_o *i; // x22
  BalanceConfig_c *v18; // x0
  signed __int64 v19; // x29
  ServantPassiveSkillEntity_o *UseEntity; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  ServantStatusBattleListViewItem_c *v24; // x19
  unsigned __int64 v25; // x29
  __int64 v27; // x0
  const MethodInfo *v28; // [xsp+18h] [xbp-88h]

  if ( (byte_4A5B91B & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ServantPassiveSkillEntity___TypeInfo);
    byte_4A5B91B = 1;
  }
  v14 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v14 = BalanceConfig_TypeInfo;
  }
  v15 = (ServantPassiveSkillEntity_array *)sub_1B88658(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v14->static_fields->SvtPassiveSkillListMax);
  v16 = 0LL;
  for ( i = (ServantStatusBattleListViewItem_o *)v15->m_Items; ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
  {
    v18 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    if ( v16 >= v18->static_fields->SvtPassiveSkillListMax )
      break;
    v19 = v16 + 1;
    UseEntity = ServantPassiveSkillMaster__getUseEntity(
                  this,
                  svtId,
                  (int)v16 + 1,
                  userId,
                  svtLv,
                  limitCount,
                  dispLimitCount,
                  friendshipRank,
                  beforeClearQuestId,
                  isMySvt,
                  nowTime,
                  v28);
    if ( !v15 )
      sub_1B8880C(UseEntity, v21);
    v24 = (ServantStatusBattleListViewItem_c *)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1B886EC(UseEntity, v15->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v27 = sub_1B88830(0LL);
        sub_1B886D8(v27, 0LL);
      }
    }
    v25 = v19 - 1;
    if ( v25 >= v15->max_length )
      sub_1B88814(UseEntity, v21);
    i->klass = v24;
    sub_1B88554(i, (int32_t)v24, v22, v23);
    v16 = v25 + 1;
  }
  return v15;
}


bool __fastcall ServantPassiveSkillMaster__preProcess(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *listCache; // x0
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o *v26; // x24
  System_Collections_Generic_List_object__o *v27; // x0
  Il2CppClass *v28; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  void **v31; // x8
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  ServantPassiveSkillMaster___c_c *v38; // x8
  Il2CppObject *v39; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v42; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Collections_Generic_Dictionary_object__object__o *v46; // x23
  System_Object_array *v47; // x0
  __int64 v48; // x1
  int32_t monitor; // w2
  int v50; // w8
  ServantPassiveSkillMaster_o *v52; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4A5B917 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_ServantPassiveSkillEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
    sub_1B885B0(&ServantPassiveSkillEntity_TypeInfo);
    sub_1B885B0(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__);
    sub_1B885B0(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4A5B917 = 1;
  }
  value = 0LL;
  memset(&v54, 0, sizeof(v54));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v52 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v13 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_17:
      v14 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    v18 = (Il2CppObject *)v15;
    if ( !v15 )
      sub_1B8880C(0LL, v16);
    methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v15 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v15 + 200LL) + 8 * methodPtr_low - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1B88ACC(v15);
LABEL_51:
      sub_1B8880C(v27, v23);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v15,
                                    *(_DWORD *)(v15 + 16),
                                    *(_DWORD *)(v15 + 20),
                                    v17);
    if ( !v4 )
      sub_1B8880C(PriorityKey, v21);
    v22 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v4,
            PriorityKey,
            &value,
            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v26 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v26,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v26;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v4,
        v22,
        (Il2CppObject *)v26,
        (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v27 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v28 = value[1].klass;
    v29 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v28 )
      sub_1B8880C(v27, v23);
    size = v27->fields._size;
    if ( (unsigned int)size >= LODWORD(v28->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v27,
        v18,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &v28->_1.image + size;
      v27->fields._size = size + 1;
      v31[4] = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v18, v24, v25);
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_34;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_34:
    v35 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v35 + 8));
  if ( !v4 )
LABEL_57:
    sub_1B8880C(listCache, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v53,
    v4,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v36 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v54,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    if ( !v36 )
      break;
    v38 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v54.fields._current.fields.key;
    v39 = v54.fields._current.fields.value;
    if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v38 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v38->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = ServantPassiveSkillMaster___c_TypeInfo;
      }
      v42 = (Il2CppObject *)v38->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantPassiveSkillEntity__TypeInfo);
      System_Comparison_object____ctor(_9__6_0, v42, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0LL);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v44, v45);
    }
    if ( !v39 )
      sub_1B8880C(v36, v37);
    System_Collections_Generic_List_object___Sort_55571192(
      (System_Collections_Generic_List_object__o *)v39,
      _9__6_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v46 = (System_Collections_Generic_Dictionary_object__object__o *)v52->fields.listCache;
    v47 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v39,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v46 )
      sub_1B8880C(v47, v48);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v46,
      key,
      &v47->obj,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v39[1].monitor;
    v50 = HIDWORD(v39[1].monitor) + 1;
    LODWORD(v39[1].monitor) = 0;
    HIDWORD(v39[1].monitor) = v50;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v39[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v54,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v4,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B91D & 1) == 0 )
  {
    sub_1B885B0(&ServantPassiveSkillMaster___c_TypeInfo);
    byte_4A5B91D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantPassiveSkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B8880C(this, a);
  return a->fields.priority - b->fields.priority;
}