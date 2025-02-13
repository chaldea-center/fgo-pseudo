void __fastcall CommonRestrictionMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC36F & 1) == 0 )
  {
    sub_1C21E38(&CommonRestrictionMaster_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    byte_4BDC36F = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  CommonRestrictionMaster_TypeInfo->static_fields->restrictionCache = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)CommonRestrictionMaster_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CommonRestrictionMaster___ctor(CommonRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC367 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
    byte_4BDC367 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    264,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
}


void __fastcall CommonRestrictionMaster__ClearRestrictionCacheList(const MethodInfo *method)
{
  __int64 v1; // x1
  CommonRestrictionMaster_c *v2; // x0
  System_Collections_Generic_Dictionary_int__object__o *restrictionCache; // x0

  if ( (byte_4BDC36B & 1) == 0 )
  {
    sub_1C21E38(&CommonRestrictionMaster_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    byte_4BDC36B = 1;
  }
  v2 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v2 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (System_Collections_Generic_Dictionary_int__object__o *)v2->static_fields->restrictionCache;
  if ( !restrictionCache )
    sub_1C22094(0LL, v1);
  System_Collections_Generic_Dictionary_int__object___Clear(
    restrictionCache,
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommonRestrictionMaster__GetIncludedRestrictionId(
        System_Collections_Generic_List_int__o *restrictionList,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  int size; // w23
  int32_t v6; // w21
  const MethodInfo *v7; // x1
  int32_t Item; // w22
  CommonRestrictionEntity_o *RestrictionEntityFromId; // x0
  const MethodInfo *v10; // x2

  v4 = restrictionList;
  if ( (byte_4BDC36D & 1) == 0 )
  {
    sub_1C21E38(&CommonRestrictionMaster_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    restrictionList = (System_Collections_Generic_List_int__o *)sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4BDC36D = 1;
  }
  if ( !v4 )
    sub_1C22094(restrictionList, *(_QWORD *)&baseSvtId);
  size = v4->fields._size;
  if ( size < 1 )
    return -1;
  v6 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             v4,
             v6,
             (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    RestrictionEntityFromId = CommonRestrictionMaster__GetRestrictionEntityFromId(Item, v7);
    if ( RestrictionEntityFromId )
    {
      if ( CommonRestrictionEntity__IsIncludedSvt(RestrictionEntityFromId, baseSvtId, v10) )
        break;
    }
    if ( size == ++v6 )
      return -1;
  }
  return Item;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommonRestrictionMaster__GetIncludedRestrictionIds(
        int32_t cachedBaseSvtId,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *RestrictionIdList; // x0
  const MethodInfo *v6; // x2
  System_Collections_Generic_List_int__o *v7; // x20

  if ( (byte_4BDC36E & 1) == 0 )
  {
    sub_1C21E38(&CommonRestrictionMaster_TypeInfo);
    byte_4BDC36E = 1;
  }
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  RestrictionIdList = CommonRestrictionMaster__GetRestrictionIdList(cachedBaseSvtId, *(const MethodInfo **)&baseSvtId);
  if ( !RestrictionIdList )
    return -1;
  v7 = RestrictionIdList;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  return CommonRestrictionMaster__GetIncludedRestrictionId(v7, baseSvtId, v6);
}


CommonRestrictionEntity_o *__fastcall CommonRestrictionMaster__GetRestrictionEntityFromId(
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDC368 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonRestrictionMaster___);
    sub_1C21E38(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC368 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v4);
  }
  return (CommonRestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        id,
                                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
}


System_Collections_ObjectModel_ObservableCollection_CommonRestrictionEntity__o *__fastcall CommonRestrictionMaster__GetRestrictionEntityList(
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_ObservableCollection_CommonRestrictionEntity__o *result; // x0

  if ( (byte_4BDC36A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_CommonRestrictionMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC36A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v2);
  result = (System_Collections_ObjectModel_ObservableCollection_CommonRestrictionEntity__o *)DataManager__GetMasterData_object_(
                                                                                               (DataManager_o *)Instance,
                                                                                               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___);
  if ( result )
    return (System_Collections_ObjectModel_ObservableCollection_CommonRestrictionEntity__o *)result->fields.CollectionChanged;
  return result;
}


System_Collections_Generic_List_int__o *__fastcall CommonRestrictionMaster__GetRestrictionIdList(
        int32_t baseSvtId,
        const MethodInfo *method)
{
  CommonRestrictionMaster_c *v3; // x0
  Il2CppObject *restrictionCache; // x0
  CommonRestrictionMaster_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x21
  const MethodInfo *v8; // x0
  System_Collections_ObjectModel_Collection_T__o *RestrictionEntityList; // x0
  System_Collections_ObjectModel_Collection_T__o *v10; // x20
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t i; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x23
  CommonRestrictionMaster_c *v17; // x0
  Il2CppClass *klass; // x8
  _QWORD *v19; // x9
  __int64 monitor_low; // x10
  CommonRestrictionMaster_c *v21; // x0

  if ( (byte_4BDC36C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonRestrictionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonRestrictionEntity__get_Item__);
    sub_1C21E38(&CommonRestrictionMaster_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDC36C = 1;
  }
  v3 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v3 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (Il2CppObject *)v3->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_28;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
         baseSvtId,
         (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
  {
    goto LABEL_24;
  }
  v5 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v5 = CommonRestrictionMaster_TypeInfo;
  }
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->restrictionCache;
  v7 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v6 )
LABEL_28:
    sub_1C22094(restrictionCache, method);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    v6,
    baseSvtId,
    (Il2CppObject *)v7,
    (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
  RestrictionEntityList = (System_Collections_ObjectModel_Collection_T__o *)CommonRestrictionMaster__GetRestrictionEntityList(v8);
  if ( RestrictionEntityList )
  {
    v10 = RestrictionEntityList;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              RestrictionEntityList,
              (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_CommonRestrictionEntity__get_Count__);
    if ( Count >= 1 )
    {
      v12 = Count;
      for ( i = 0; v12 != i; ++i )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 v10,
                 i,
                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_CommonRestrictionEntity__get_Item__);
        if ( Item )
        {
          v16 = Item;
          if ( CommonRestrictionEntity__IsIncludedSvt((CommonRestrictionEntity_o *)Item, baseSvtId, v15) )
          {
            v17 = CommonRestrictionMaster_TypeInfo;
            if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              v17 = CommonRestrictionMaster_TypeInfo;
            }
            restrictionCache = (Il2CppObject *)v17->static_fields->restrictionCache;
            if ( !restrictionCache )
              goto LABEL_28;
            restrictionCache = System_Collections_Generic_Dictionary_int__object___get_Item(
                                 (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
                                 baseSvtId,
                                 (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !restrictionCache )
              goto LABEL_28;
            method = (const MethodInfo *)LODWORD(v16[1].klass);
            klass = restrictionCache[1].klass;
            v19 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(restrictionCache[1].monitor);
            if ( !klass )
              goto LABEL_28;
            monitor_low = SLODWORD(restrictionCache[1].monitor);
            if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)restrictionCache,
                (int32_t)method,
                *(const MethodInfo_3632090 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(restrictionCache[1].monitor) = monitor_low + 1;
              *((_DWORD *)&klass->_1.byval_arg.data + monitor_low) = (_DWORD)method;
            }
          }
        }
      }
    }
  }
LABEL_24:
  v21 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v21 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (Il2CppObject *)v21->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_28;
  return (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
                                                     baseSvtId,
                                                     (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
}


System_String_o *__fastcall CommonRestrictionMaster__GetRestrictionMessageFromId(int32_t id, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_4BDC369 & 1) == 0 )
  {
    sub_1C21E38(&CommonRestrictionMaster_TypeInfo);
    byte_4BDC369 = 1;
  }
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  result = (System_String_o *)CommonRestrictionMaster__GetRestrictionEntityFromId(id, method);
  if ( result )
    return (System_String_o *)result[1].monitor;
  return result;
}