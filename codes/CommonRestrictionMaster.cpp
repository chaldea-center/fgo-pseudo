void __fastcall CommonRestrictionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BAC9B & 1) == 0 )
  {
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, v1);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v2);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v3);
    byte_49BAC9B = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  CommonRestrictionMaster_TypeInfo->static_fields->restrictionCache = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)CommonRestrictionMaster_TypeInfo->static_fields, (int32_t)v4, v5, v6);
}


void __fastcall CommonRestrictionMaster___ctor(CommonRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BAC93 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__, method);
    byte_49BAC93 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    266,
    (const MethodInfo_319B678 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
}


void __fastcall CommonRestrictionMaster__ClearRestrictionCacheList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  CommonRestrictionMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *restrictionCache; // x0

  if ( (byte_49BAC97 & 1) == 0 )
  {
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, v1);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v2);
    byte_49BAC97 = 1;
  }
  v3 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v3 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (System_Collections_Generic_Dictionary_int__object__o *)v3->static_fields->restrictionCache;
  if ( !restrictionCache )
    sub_1B4D1EC(0LL, v1);
  System_Collections_Generic_Dictionary_int__object___Clear(
    restrictionCache,
    (const MethodInfo_31F7008 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
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
  if ( (byte_49BAC99 & 1) == 0 )
  {
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    restrictionList = (System_Collections_Generic_List_int__o *)sub_1B4CF90(
                                                                  &Method_System_Collections_Generic_List_int__get_Item__,
                                                                  v6);
    byte_49BAC99 = 1;
  }
  if ( !v4 )
    sub_1B4D1EC(restrictionList, *(_QWORD *)&baseSvtId);
  size = v4->fields._size;
  if ( size < 1 )
    return -1;
  v8 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             v4,
             v8,
             (const MethodInfo_3562EC8 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_49BAC9A & 1) == 0 )
  {
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
    byte_49BAC9A = 1;
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
  __int64 v6; // x1

  if ( (byte_49BAC94 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49BAC94 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___)) == 0LL )
  {
    sub_1B4D1EC(Instance, v6);
  }
  return (CommonRestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        id,
                                        (const MethodInfo_319D99C *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
}


System_Collections_ObjectModel_ObservableCollection_CommonRestrictionEntity__o *__fastcall CommonRestrictionMaster__GetRestrictionEntityList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_ObservableCollection_CommonRestrictionEntity__o *result; // x0

  if ( (byte_49BAC96 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, v1);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49BAC96 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  result = (System_Collections_ObjectModel_ObservableCollection_CommonRestrictionEntity__o *)DataManager__GetMasterData_object_(
                                                                                               (DataManager_o *)Instance,
                                                                                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___);
  if ( result )
    return (System_Collections_ObjectModel_ObservableCollection_CommonRestrictionEntity__o *)result->fields.CollectionChanged;
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
  CommonRestrictionMaster_c *v11; // x0
  Il2CppObject *restrictionCache; // x0
  CommonRestrictionMaster_c *v13; // x0
  System_Collections_Generic_Dictionary_int__object__o *v14; // x20
  System_Collections_Generic_List_int__o *v15; // x21
  const MethodInfo *v16; // x0
  System_Collections_ObjectModel_Collection_T__o *RestrictionEntityList; // x0
  System_Collections_ObjectModel_Collection_T__o *v18; // x20
  int32_t Count; // w0
  int32_t v20; // w21
  int32_t i; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x23
  CommonRestrictionMaster_c *v25; // x0
  Il2CppClass *klass; // x8
  _QWORD *v27; // x9
  __int64 monitor_low; // x10
  CommonRestrictionMaster_c *v29; // x0

  if ( (byte_49BAC98 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_CommonRestrictionEntity__get_Count__, method);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_CommonRestrictionEntity__get_Item__, v3);
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_49BAC98 = 1;
  }
  v11 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v11 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (Il2CppObject *)v11->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_28;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
         baseSvtId,
         (const MethodInfo_31F7074 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
  {
    goto LABEL_24;
  }
  v13 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v13 = CommonRestrictionMaster_TypeInfo;
  }
  v14 = (System_Collections_Generic_Dictionary_int__object__o *)v13->static_fields->restrictionCache;
  v15 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v14 )
LABEL_28:
    sub_1B4D1EC(restrictionCache, method);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    v14,
    baseSvtId,
    (Il2CppObject *)v15,
    (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
  RestrictionEntityList = (System_Collections_ObjectModel_Collection_T__o *)CommonRestrictionMaster__GetRestrictionEntityList(v16);
  if ( RestrictionEntityList )
  {
    v18 = RestrictionEntityList;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              RestrictionEntityList,
              (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_CommonRestrictionEntity__get_Count__);
    if ( Count >= 1 )
    {
      v20 = Count;
      for ( i = 0; v20 != i; ++i )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 v18,
                 i,
                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_CommonRestrictionEntity__get_Item__);
        if ( Item )
        {
          v24 = Item;
          if ( CommonRestrictionEntity__IsIncludedSvt((CommonRestrictionEntity_o *)Item, baseSvtId, v23) )
          {
            v25 = CommonRestrictionMaster_TypeInfo;
            if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              v25 = CommonRestrictionMaster_TypeInfo;
            }
            restrictionCache = (Il2CppObject *)v25->static_fields->restrictionCache;
            if ( !restrictionCache )
              goto LABEL_28;
            restrictionCache = System_Collections_Generic_Dictionary_int__object___get_Item(
                                 (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
                                 baseSvtId,
                                 (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !restrictionCache )
              goto LABEL_28;
            method = (const MethodInfo *)LODWORD(v24[1].klass);
            klass = restrictionCache[1].klass;
            v27 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(restrictionCache[1].monitor);
            if ( !klass )
              goto LABEL_28;
            monitor_low = SLODWORD(restrictionCache[1].monitor);
            if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)restrictionCache,
                (int32_t)method,
                *(const MethodInfo_35631B8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
  v29 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v29 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (Il2CppObject *)v29->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_28;
  return (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
                                                     baseSvtId,
                                                     (const MethodInfo_31F6DE0 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
}


System_String_o *__fastcall CommonRestrictionMaster__GetRestrictionMessageFromId(int32_t id, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_49BAC95 & 1) == 0 )
  {
    sub_1B4CF90(&CommonRestrictionMaster_TypeInfo, method);
    byte_49BAC95 = 1;
  }
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  result = (System_String_o *)CommonRestrictionMaster__GetRestrictionEntityFromId(id, method);
  if ( result )
    return (System_String_o *)result[1].monitor;
  return result;
}