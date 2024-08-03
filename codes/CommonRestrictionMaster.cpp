void __fastcall CommonRestrictionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x19
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FC24D & 1) == 0 )
  {
    sub_1B640C8(&CommonRestrictionMaster_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v4);
    byte_49FC24D = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                 v1,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  CommonRestrictionMaster_TypeInfo->static_fields->restrictionCache = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)CommonRestrictionMaster_TypeInfo->static_fields, (int32_t)v5, v6, v7);
}


void __fastcall CommonRestrictionMaster___ctor(CommonRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC245 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__, method);
    byte_49FC245 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    260,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
}


void __fastcall CommonRestrictionMaster__ClearRestrictionCacheList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  CommonRestrictionMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *restrictionCache; // x0

  if ( (byte_49FC249 & 1) == 0 )
  {
    sub_1B640C8(&CommonRestrictionMaster_TypeInfo, v1);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v2);
    byte_49FC249 = 1;
  }
  v3 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v3 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->restrictionCache;
  if ( !restrictionCache )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___Clear(
    restrictionCache,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommonRestrictionMaster__GetIncludedRestrictionId(
        System_Collections_Generic_List_int__o *restrictionList,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  int size; // w23
  int32_t v8; // w21
  const MethodInfo *v9; // x1
  int32_t Item; // w22
  CommonRestrictionEntity_o *RestrictionEntityFromId; // x0
  const MethodInfo *v12; // x2

  v4 = restrictionList;
  if ( (byte_49FC24B & 1) == 0 )
  {
    sub_1B640C8(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    restrictionList = (System_Collections_Generic_List_int__o *)sub_1B640C8(
                                                                  &Method_System_Collections_Generic_List_int__get_Item__,
                                                                  v6);
    byte_49FC24B = 1;
  }
  if ( !v4 )
    sub_1B64324(restrictionList);
  size = v4->fields._size;
  if ( size < 1 )
    return -1;
  v8 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             v4,
             v8,
             (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    RestrictionEntityFromId = CommonRestrictionMaster__GetRestrictionEntityFromId(Item, v9);
    if ( RestrictionEntityFromId )
    {
      if ( CommonRestrictionEntity__IsIncludedSvt(RestrictionEntityFromId, baseSvtId, v12) )
        break;
    }
    if ( size == ++v8 )
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

  if ( (byte_49FC24C & 1) == 0 )
  {
    sub_1B640C8(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
    byte_49FC24C = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FC246 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FC246 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonRestrictionMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  return (CommonRestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        id,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall CommonRestrictionMaster__GetRestrictionEntityList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *result; // x0

  if ( (byte_49FC248 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49FC248 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  result = (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonRestrictionMaster___);
  if ( result )
    return *(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **)&result->fields._blockReentrancyCount;
  return result;
}


System_Collections_Generic_List_int__o *__fastcall CommonRestrictionMaster__GetRestrictionIdList(
        int32_t baseSvtId,
        const MethodInfo *method)
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
  CommonRestrictionMaster_c *v12; // x0
  Il2CppObject *restrictionCache; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  CommonRestrictionMaster_c *v16; // x0
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  System_Collections_Generic_List_int__o *v18; // x21
  const MethodInfo *v19; // x0
  System_Collections_ObjectModel_Collection_T__o *RestrictionEntityList; // x0
  System_Collections_ObjectModel_Collection_T__o *v21; // x20
  int32_t Count; // w0
  int32_t v23; // w21
  int32_t i; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v26; // x2
  Il2CppObject *v27; // x23
  __int64 methodPtr_low; // x10
  CommonRestrictionMaster_c *v29; // x0
  int32_t klass; // w1
  Il2CppClass *v31; // x8
  _QWORD *v32; // x9
  __int64 monitor_low; // x10
  CommonRestrictionMaster_c *v34; // x0

  if ( (byte_49FC24A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&CommonRestrictionEntity_TypeInfo, v4);
    sub_1B640C8(&CommonRestrictionMaster_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_49FC24A = 1;
  }
  v12 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v12 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (Il2CppObject *)v12->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
         baseSvtId,
         (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
  {
    goto LABEL_26;
  }
  v16 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v16 = CommonRestrictionMaster_TypeInfo;
  }
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)v16->static_fields->restrictionCache;
  v18 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v17 )
LABEL_30:
    sub_1B64324(restrictionCache);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    v17,
    baseSvtId,
    (Il2CppObject *)v18,
    (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
  RestrictionEntityList = (System_Collections_ObjectModel_Collection_T__o *)CommonRestrictionMaster__GetRestrictionEntityList(v19);
  if ( RestrictionEntityList )
  {
    v21 = RestrictionEntityList;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              RestrictionEntityList,
              (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v23 = Count;
      for ( i = 0; v23 != i; ++i )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 v21,
                 i,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v27 = Item;
          methodPtr_low = LOBYTE(CommonRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (CommonRestrictionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonRestrictionEntity_TypeInfo
            && CommonRestrictionEntity__IsIncludedSvt((CommonRestrictionEntity_o *)Item, baseSvtId, v26) )
          {
            v29 = CommonRestrictionMaster_TypeInfo;
            if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              v29 = CommonRestrictionMaster_TypeInfo;
            }
            restrictionCache = (Il2CppObject *)v29->static_fields->restrictionCache;
            if ( !restrictionCache )
              goto LABEL_30;
            restrictionCache = System_Collections_Generic_Dictionary_int__object___get_Item(
                                 (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
                                 baseSvtId,
                                 (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !restrictionCache )
              goto LABEL_30;
            klass = (int32_t)v27[1].klass;
            v31 = restrictionCache[1].klass;
            v32 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(restrictionCache[1].monitor);
            if ( !v31 )
              goto LABEL_30;
            monitor_low = SLODWORD(restrictionCache[1].monitor);
            if ( (unsigned int)monitor_low >= LODWORD(v31->_1.namespaze) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)restrictionCache,
                klass,
                *(const MethodInfo_348FEDC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(restrictionCache[1].monitor) = monitor_low + 1;
              *((_DWORD *)&v31->_1.byval_arg.data + monitor_low) = klass;
            }
          }
        }
      }
    }
  }
LABEL_26:
  v34 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v34 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (Il2CppObject *)v34->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_30;
  return (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
                                                     baseSvtId,
                                                     (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
}


System_String_o *__fastcall CommonRestrictionMaster__GetRestrictionMessageFromId(int32_t id, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_49FC247 & 1) == 0 )
  {
    sub_1B640C8(&CommonRestrictionMaster_TypeInfo, method);
    byte_49FC247 = 1;
  }
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  result = (System_String_o *)CommonRestrictionMaster__GetRestrictionEntityFromId(id, method);
  if ( result )
    return (System_String_o *)result[1].monitor;
  return result;
}