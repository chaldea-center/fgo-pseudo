void __fastcall ServantPassiveSkillMaster___ctor(ServantPassiveSkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FCBA5 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo, v5);
    byte_49FCBA5 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TypeInfo,
                                                                    method,
                                                                    v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity_____ctor__);
  this->fields.listCache = (struct System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.listCache, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    13,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string___ctor__);
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
  __int64 v9; // x1
  __int64 v10; // x2
  ServantPassiveSkillMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *_9__8_0; // x20
  Il2CppObject *v14; // x21
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FCBA9 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___, *(_QWORD *)&svtId);
    sub_1B640C8(&System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v5);
    sub_1B640C8(&Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__, v6);
    sub_1B640C8(&ServantPassiveSkillMaster___c_TypeInfo, v7);
    byte_49FCBA9 = 1;
  }
  ServantSkillList = ServantPassiveSkillMaster__getServantSkillList(this, svtId, method);
  v11 = ServantPassiveSkillMaster___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)ServantSkillList;
  if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
    v11 = ServantPassiveSkillMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__bool__o *)v11->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__8_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ServantPassiveSkillEntity__bool__TypeInfo, v9, v10);
    System_Func_object__bool____ctor(
      _9__8_0,
      v14,
      Method_ServantPassiveSkillMaster___c__EnumerateSpecialSkillsBySvtId_b__8_0__,
      0LL);
    static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_ServantPassiveSkillEntity__bool__o *)_9__8_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v16, v17);
  }
  return (System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *)System_Linq_Enumerable__Where_object_(
                                                                                  v12,
                                                                                  (System_Func_TSource__bool__o *)_9__8_0,
                                                                                  (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_ServantPassiveSkillEntity___);
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

  if ( (byte_49FCBA3 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_49FCBA3 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&priority);
  return (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_30D41FC *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__GetEntity__);
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

  if ( (byte_49FCBA4 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_49FCBA4 = 1;
  }
  PK = (Il2CppObject *)ServantPassiveSkillEntity__CreatePK(svtId, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_ServantPassiveSkillMaster__ServantPassiveSkillEntity__string__TryGetEntity__);
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_49FCBAA & 1) == 0 )
  {
    this = (ServantPassiveSkillMaster_o *)sub_1B640C8(
                                            &Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__,
                                            *(_QWORD *)&svtId);
    byte_49FCBAA = 1;
  }
  value = 0LL;
  PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(this, svtId, num, method);
  if ( !v6->fields.listCache )
    sub_1B64324(PriorityKey);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.listCache,
         PriorityKey,
         &value,
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____TryGetValue__) )
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
  ServantPassiveSkillEntity_o *Instance; // x0
  ServantEntity_o *v26; // x22
  bool IsServantEquip; // w24
  const MethodInfo *v28; // x4
  BalanceConfig_c *v29; // x0
  __int64 v30; // x22
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x6
  ServantPassiveSkillEntity_array *UseEntityList; // x23
  unsigned __int64 v36; // x27
  unsigned int v37; // w26
  __int64 v38; // x29
  bool v39; // w24
  System_Int32_array *v40; // x8
  System_String_array *v41; // x8
  System_String_array *v42; // x10
  System_Int32_array *v43; // x8
  unsigned __int64 max_length; // x9
  __int64 v45; // x10
  int v46; // w9
  System_String_array *v47; // x8
  unsigned __int64 v48; // x9
  System_String_o *v49; // x1
  Il2CppClass **v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_array *v53; // x8
  unsigned __int64 v54; // x9
  System_String_o *v55; // x1
  Il2CppClass **v56; // x0
  System_String_array *v57; // x8
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_array *v60; // x8
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  const MethodInfo *v65; // [xsp+10h] [xbp-90h]

  if ( (byte_49FCBAC & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, idList);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v21);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1B640C8(&int___TypeInfo, v23);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    byte_49FCBAC = 1;
  }
  Instance = (ServantPassiveSkillEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantPassiveSkillEntity_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)Instance,
                                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Instance = (ServantPassiveSkillEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                    svtId,
                                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_49:
    sub_1B64324(Instance);
  }
  v26 = (ServantEntity_o *)Instance;
  IsServantEquip = SvtType__IsServantEquip(HIDWORD(Instance[1].klass), 0LL);
  ServantEntity__getClassSkillInfo(v26, idList, titleList, explanationList, v28);
  v29 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v29 = BalanceConfig_TypeInfo;
  }
  v30 = sub_1B64170(int___TypeInfo, (unsigned int)v29->static_fields->SvtPassiveSkillListMax);
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
                    v65);
  v36 = 0LL;
  v37 = 0;
  v38 = 32LL;
  v39 = IsServantEquip;
  while ( 1 )
  {
    Instance = (ServantPassiveSkillEntity_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      Instance = (ServantPassiveSkillEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (__int64)v36 >= *(int *)(*(_QWORD *)&Instance[2].fields.priority + 36LL) )
      break;
    if ( !UseEntityList )
      goto LABEL_49;
    if ( v36 >= UseEntityList->max_length )
      goto LABEL_50;
    Instance = UseEntityList->m_Items[v36];
    v40 = *idList;
    if ( Instance )
    {
      if ( !v40 )
        goto LABEL_49;
      if ( v37 >= v40->max_length )
        goto LABEL_50;
      v40->m_Items[v37 + 1] = Instance->fields.skillId;
      if ( !v30 )
        goto LABEL_49;
      v41 = *titleList;
      if ( !*titleList )
        goto LABEL_49;
      v42 = *explanationList;
      if ( !*explanationList )
        goto LABEL_49;
      if ( v37 >= *(_DWORD *)(v30 + 24) || v37 >= v41->max_length || v37 >= v42->max_length )
        goto LABEL_50;
      ServantPassiveSkillEntity__getEffectExplanation(
        Instance,
        (int32_t *)(v30 + 4LL * (int)v37 + 32),
        &v41->m_Items[v37],
        &v42->m_Items[v37],
        0,
        v39,
        v34);
      if ( v36 != v37 )
      {
        v43 = *idList;
        if ( !*idList )
          goto LABEL_49;
        max_length = v43->max_length;
        goto LABEL_39;
      }
      goto LABEL_45;
    }
    if ( !v40 )
      goto LABEL_49;
    v45 = *(_QWORD *)&v40->max_length;
    if ( v36 >= (unsigned int)v45 )
      goto LABEL_50;
    v46 = v40->m_Items[v36 + 1];
    if ( v46 >= 1 )
    {
      if ( v36 != v37 )
      {
        if ( v37 >= (unsigned int)v45 )
          goto LABEL_50;
        v40->m_Items[v37 + 1] = v46;
        v47 = *titleList;
        if ( !*titleList )
          goto LABEL_49;
        v48 = v47->max_length;
        if ( v36 >= v48 || v37 >= (unsigned int)v48 )
          goto LABEL_50;
        v49 = v47->m_Items[v36];
        v50 = &v47->obj.klass + (int)v37;
        v50[4] = (Il2CppClass *)v49;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v49, v32, v33);
        v53 = *explanationList;
        if ( !*explanationList )
          goto LABEL_49;
        v54 = v53->max_length;
        if ( v36 >= v54 || v37 >= (unsigned int)v54 )
LABEL_50:
          sub_1B6432C(Instance, v31);
        v55 = v53->m_Items[v36];
        v56 = &v53->obj.klass + (int)v37;
        v56[4] = (Il2CppClass *)v55;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v55, v51, v52);
        v43 = *idList;
        if ( !*idList )
          goto LABEL_49;
        max_length = v43->max_length;
LABEL_39:
        if ( v36 >= max_length )
          goto LABEL_50;
        v43->m_Items[v36 + 1] = 0;
        v57 = *titleList;
        if ( !*titleList )
          goto LABEL_49;
        if ( v36 >= v57->max_length )
          goto LABEL_50;
        v57->m_Items[v36] = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v57 + v38), 0, v32, v33);
        v60 = *explanationList;
        if ( !*explanationList )
          goto LABEL_49;
        if ( v36 >= v60->max_length )
          goto LABEL_50;
        v60->m_Items[v36] = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v60 + v38), 0, v58, v59);
      }
LABEL_45:
      ++v37;
    }
    ++v36;
    v38 += 8LL;
  }
  if ( !v37 )
  {
    *idList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, 0, v32, v33);
    *titleList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, 0, v61, v62);
    *explanationList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, 0, v63, v64);
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
  if ( (byte_49FCBA6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1546/*":"*/, *(_QWORD *)&svtId);
    byte_49FCBA6 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61386656(v4, (System_String_o *)StringLiteral_1546/*":"*/, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantPassiveSkillEntity_array *__fastcall ServantPassiveSkillMaster__getServantSkillList(
        ServantPassiveSkillMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x22
  int32_t v16; // w23
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FCBA8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v9);
    sub_1B640C8(&ServantPassiveSkillEntity_TypeInfo, v10);
    byte_49FCBA8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo,
                                                       v13,
                                                       v14);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (ServantPassiveSkillEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantPassiveSkillEntity_TypeInfo
          && LODWORD(list->fields.items) == svtId )
        {
          if ( !v15 )
            break;
          items = v15->fields._items;
          v22 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
          ++v15->fields._version;
          if ( !items )
            break;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v19;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
          }
        }
      }
      if ( Count == ++v16 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(list);
  }
LABEL_17:
  if ( !v15 )
    goto LABEL_19;
  return (ServantPassiveSkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                              v15,
                                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
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
        sub_1B6432C(EntityListFromIdNum, v18);
      v21 = &v19->obj.klass + i;
      v22 = (ServantPassiveSkillEntity_o *)v21[4];
      if ( !v22 )
        sub_1B64324(EntityListFromIdNum);
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
  ServantStatusBattleListViewItem_o *i; // x22
  BalanceConfig_c *v19; // x0
  signed __int64 v20; // x29
  ServantPassiveSkillEntity_o *UseEntity; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  ServantStatusBattleListViewItem_c *v25; // x19
  unsigned __int64 v26; // x29
  __int64 v28; // x0
  const MethodInfo *v29; // [xsp+18h] [xbp-88h]

  if ( (byte_49FCBAB & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&svtId);
    sub_1B640C8(&ServantPassiveSkillEntity___TypeInfo, v14);
    byte_49FCBAB = 1;
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  v16 = (ServantPassiveSkillEntity_array *)sub_1B64170(
                                             ServantPassiveSkillEntity___TypeInfo,
                                             (unsigned int)v15->static_fields->SvtPassiveSkillListMax);
  v17 = 0LL;
  for ( i = (ServantStatusBattleListViewItem_o *)v16->m_Items; ; i = (ServantStatusBattleListViewItem_o *)((char *)i + 8) )
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
                  v29);
    if ( !v16 )
      sub_1B64324(UseEntity);
    v25 = (ServantStatusBattleListViewItem_c *)UseEntity;
    if ( UseEntity )
    {
      UseEntity = (ServantPassiveSkillEntity_o *)sub_1B64204(UseEntity, v16->obj.klass->_1.element_class);
      if ( !UseEntity )
      {
        v28 = sub_1B64348(0LL);
        sub_1B641F0(v28, 0LL);
      }
    }
    v26 = v20 - 1;
    if ( v26 >= v16->max_length )
      sub_1B6432C(UseEntity, v22);
    i->klass = v25;
    sub_1B6406C(i, (int32_t)v25, v23, v24);
    v17 = v26 + 1;
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
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_Dictionary_object__object__o *v32; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x22
  __int64 methodPtr_low; // x9
  Il2CppObject *PriorityKey; // x0
  Il2CppObject *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  int32_t v50; // w3
  System_Collections_Generic_List_object__o *v51; // x24
  System_Collections_Generic_List_object__o *v52; // x0
  Il2CppClass *v53; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  void **v56; // x8
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  _BOOL8 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  ServantPassiveSkillMaster___c_c *v64; // x8
  Il2CppObject *v65; // x21
  Il2CppObject *key; // x22
  System_Comparison_T__o *_9__6_0; // x23
  Il2CppObject *v68; // x24
  struct ServantPassiveSkillMaster___c_StaticFields *static_fields; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_Collections_Generic_Dictionary_object__object__o *v72; // x23
  System_Object_array *v73; // x0
  int32_t monitor; // w2
  int v75; // w8
  ServantPassiveSkillMaster_o *v77; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v78; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+30h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_49FCBA7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&System_Comparison_ServantPassiveSkillEntity__TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__, v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__,
      v6);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__,
      v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo, v11);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__,
      v12);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__,
      v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___get_Current__,
      v14);
    sub_1B640C8(&System_IDisposable_TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v16);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Key__, v18);
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ServantPassiveSkillEntity___get_Value__,
      v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Clear__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo, v25);
    sub_1B640C8(&ServantPassiveSkillEntity_TypeInfo, v26);
    sub_1B640C8(&Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, v27);
    sub_1B640C8(&ServantPassiveSkillMaster___c_TypeInfo, v28);
    byte_49FCBA7 = 1;
  }
  value = 0LL;
  memset(&v79, 0, sizeof(v79));
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.listCache;
  if ( !listCache )
    goto LABEL_57;
  System_Collections_Generic_Dictionary_object__object___Clear(
    listCache,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____Clear__);
  v32 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TypeInfo,
                                                                     v30,
                                                                     v31);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v32,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity____ctor__);
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.list;
  if ( !listCache )
    goto LABEL_57;
  v77 = this;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)listCache,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v35 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        p_offset += 4;
        if ( !v35 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_17;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_17:
      v41 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
            Enumerator,
            *(_QWORD *)(v41 + 8));
    v44 = (Il2CppObject *)v42;
    if ( !v42 )
      sub_1B64324(0LL);
    methodPtr_low = LOBYTE(ServantPassiveSkillEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantPassiveSkillEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * methodPtr_low - 8) != ServantPassiveSkillEntity_TypeInfo )
    {
      sub_1B645E4(v42);
LABEL_51:
      sub_1B64324(v52);
    }
    PriorityKey = (Il2CppObject *)ServantPassiveSkillMaster__getPriorityKey(
                                    (ServantPassiveSkillMaster_o *)v42,
                                    *(_DWORD *)(v42 + 16),
                                    *(_DWORD *)(v42 + 20),
                                    v43);
    if ( !v32 )
      sub_1B64324(PriorityKey);
    v47 = PriorityKey;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            v32,
            PriorityKey,
            &value,
            (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___TryGetValue__) )
    {
      v51 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_ServantPassiveSkillEntity__TypeInfo,
                                                           v48,
                                                           v49);
      System_Collections_Generic_List_object____ctor(
        v51,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity___ctor__);
      value = (Il2CppObject *)v51;
      System_Collections_Generic_Dictionary_object__object___set_Item(
        v32,
        v47,
        (Il2CppObject *)v51,
        (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___set_Item__);
    }
    v52 = (System_Collections_Generic_List_object__o *)value;
    if ( !value )
      goto LABEL_51;
    v53 = value[1].klass;
    v54 = Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Add__;
    ++HIDWORD(value[1].monitor);
    if ( !v53 )
      sub_1B64324(v52);
    size = v52->fields._size;
    if ( (unsigned int)size >= LODWORD(v53->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v52,
        v44,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
    }
    else
    {
      v56 = &v53->_1.image + size;
      v52->fields._size = size + 1;
      v56[4] = v44;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v44, v49, v50);
    }
  }
  v57 = Enumerator->klass;
  v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_34;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_34:
    v60 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  listCache = (System_Collections_Generic_Dictionary_object__object__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(
                                                                           Enumerator,
                                                                           *(_QWORD *)(v60 + 8));
  if ( !v32 )
LABEL_57:
    sub_1B64324(listCache);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v78,
    v32,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___GetEnumerator__);
  v79 = v78;
  while ( 1 )
  {
    v61 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v79,
            (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___MoveNext__);
    if ( !v61 )
      break;
    v64 = ServantPassiveSkillMaster___c_TypeInfo;
    key = v79.fields._current.fields.key;
    v65 = v79.fields._current.fields.value;
    if ( !ServantPassiveSkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPassiveSkillMaster___c_TypeInfo);
      v64 = ServantPassiveSkillMaster___c_TypeInfo;
    }
    _9__6_0 = (System_Comparison_T__o *)v64->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v64 = ServantPassiveSkillMaster___c_TypeInfo;
      }
      v68 = (Il2CppObject *)v64->static_fields->__9;
      _9__6_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_ServantPassiveSkillEntity__TypeInfo, v62, v63);
      System_Comparison_object____ctor(_9__6_0, v68, Method_ServantPassiveSkillMaster___c__preProcess_b__6_0__, 0LL);
      static_fields = ServantPassiveSkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Comparison_ServantPassiveSkillEntity__o *)_9__6_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v70, v71);
    }
    if ( !v65 )
      sub_1B64324(v61);
    System_Collections_Generic_List_object___Sort_55243320(
      (System_Collections_Generic_List_object__o *)v65,
      _9__6_0,
      (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__Sort__);
    v72 = (System_Collections_Generic_Dictionary_object__object__o *)v77->fields.listCache;
    v73 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)v65,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_ServantPassiveSkillEntity__ToArray__);
    if ( !v72 )
      sub_1B64324(v73);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      v72,
      key,
      &v73->obj,
      (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__ServantPassiveSkillEntity____set_Item__);
    monitor = (int32_t)v65[1].monitor;
    v75 = HIDWORD(v65[1].monitor) + 1;
    LODWORD(v65[1].monitor) = 0;
    HIDWORD(v65[1].monitor) = v75;
    if ( monitor >= 1 )
      System_Array__Clear((System_Array_o *)v65[1].klass, 0, monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v79,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ServantPassiveSkillEntity___Dispose__);
  System_Collections_Generic_Dictionary_object__object___Clear(
    v32,
    (const MethodInfo_3179580 *)Method_System_Collections_Generic_Dictionary_string__List_ServantPassiveSkillEntity___Clear__);
  return 1;
}


void __fastcall ServantPassiveSkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCBAD & 1) == 0 )
  {
    sub_1B640C8(&ServantPassiveSkillMaster___c_TypeInfo, v1);
    byte_49FCBAD = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantPassiveSkillMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantPassiveSkillMaster___c_TypeInfo->static_fields->__9 = (struct ServantPassiveSkillMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantPassiveSkillMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return x->fields.num > 9;
}


int32_t __fastcall ServantPassiveSkillMaster___c___preProcess_b__6_0(
        ServantPassiveSkillMaster___c_o *this,
        ServantPassiveSkillEntity_o *a,
        ServantPassiveSkillEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B64324(this);
  return a->fields.priority - b->fields.priority;
}