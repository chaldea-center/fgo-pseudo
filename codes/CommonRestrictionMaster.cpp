void __fastcall CommonRestrictionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_int__object__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B1602D & 1) == 0 )
  {
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v6, v7);
    byte_4B1602D = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                 v1,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v8,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  CommonRestrictionMaster_TypeInfo->static_fields->restrictionCache = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CommonRestrictionMaster_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall CommonRestrictionMaster___ctor(CommonRestrictionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16025 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__, method, v2);
    byte_4B16025 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    260,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
}


void __fastcall CommonRestrictionMaster__ClearRestrictionCacheList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  CommonRestrictionMaster_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *restrictionCache; // x0

  if ( (byte_4B16029 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v3, v4);
    byte_4B16029 = 1;
  }
  v5 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v1);
    v5 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (System_Collections_Generic_Dictionary_int__object__o *)v5->static_fields->restrictionCache;
  if ( !restrictionCache )
    sub_1BCAA3C(0LL, v1);
  System_Collections_Generic_Dictionary_int__object___Clear(
    restrictionCache,
    (const MethodInfo_320606C *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommonRestrictionMaster__GetIncludedRestrictionId(
        System_Collections_Generic_List_int__o *restrictionList,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int size; // w23
  int32_t v10; // w21
  const MethodInfo *v11; // x1
  int32_t Item; // w22
  CommonRestrictionEntity_o *RestrictionEntityFromId; // x0
  const MethodInfo *v14; // x2

  v4 = restrictionList;
  if ( (byte_4B1602B & 1) == 0 )
  {
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v5, v6);
    restrictionList = (System_Collections_Generic_List_int__o *)sub_1BCA7E0(
                                                                  &Method_System_Collections_Generic_List_int__get_Item__,
                                                                  v7,
                                                                  v8);
    byte_4B1602B = 1;
  }
  if ( !v4 )
    sub_1BCAA3C(restrictionList, *(_QWORD *)&baseSvtId);
  size = v4->fields._size;
  if ( size < 1 )
    return -1;
  v10 = 0;
  while ( 1 )
  {
    Item = System_Collections_Generic_List_int___get_Item(
             v4,
             v10,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v11);
    RestrictionEntityFromId = CommonRestrictionMaster__GetRestrictionEntityFromId(Item, v11);
    if ( RestrictionEntityFromId )
    {
      if ( CommonRestrictionEntity__IsIncludedSvt(RestrictionEntityFromId, baseSvtId, v14) )
        break;
    }
    if ( size == ++v10 )
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
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_int__o *v8; // x20

  if ( (byte_4B1602C & 1) == 0 )
  {
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId, method);
    byte_4B1602C = 1;
  }
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
  RestrictionIdList = CommonRestrictionMaster__GetRestrictionIdList(cachedBaseSvtId, *(const MethodInfo **)&baseSvtId);
  if ( !RestrictionIdList )
    return -1;
  v8 = RestrictionIdList;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, v6);
  return CommonRestrictionMaster__GetIncludedRestrictionId(v8, baseSvtId, v7);
}


CommonRestrictionEntity_o *__fastcall CommonRestrictionMaster__GetRestrictionEntityFromId(
        int32_t id,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B16026 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16026 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return (CommonRestrictionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                        id,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall CommonRestrictionMaster__GetRestrictionEntityList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *result; // x0

  if ( (byte_4B16028 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B16028 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  result = (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataManager__GetMasterData_object_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___);
  if ( result )
    return *(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **)&result->fields._blockReentrancyCount;
  return result;
}


System_Collections_Generic_List_int__o *__fastcall CommonRestrictionMaster__GetRestrictionIdList(
        int32_t baseSvtId,
        const MethodInfo *method)
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
  CommonRestrictionMaster_c *v22; // x0
  Il2CppObject *restrictionCache; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  CommonRestrictionMaster_c *v26; // x0
  System_Collections_Generic_Dictionary_int__object__o *v27; // x20
  System_Collections_Generic_List_int__o *v28; // x21
  const MethodInfo *v29; // x0
  System_Collections_ObjectModel_Collection_T__o *RestrictionEntityList; // x0
  System_Collections_ObjectModel_Collection_T__o *v31; // x20
  int32_t Count; // w0
  int32_t v33; // w21
  int32_t i; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v36; // x2
  Il2CppObject *v37; // x23
  __int64 methodPtr_low; // x10
  CommonRestrictionMaster_c *v39; // x0
  Il2CppClass *klass; // x8
  _QWORD *v41; // x9
  __int64 monitor_low; // x10
  CommonRestrictionMaster_c *v43; // x0

  if ( (byte_4B1602A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&CommonRestrictionEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v20, v21);
    byte_4B1602A = 1;
  }
  v22 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, method);
    v22 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (Il2CppObject *)v22->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_30;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
         baseSvtId,
         (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
  {
    goto LABEL_26;
  }
  v26 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, method);
    v26 = CommonRestrictionMaster_TypeInfo;
  }
  v27 = (System_Collections_Generic_Dictionary_int__object__o *)v26->static_fields->restrictionCache;
  v28 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v24,
                                                    v25);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v27 )
LABEL_30:
    sub_1BCAA3C(restrictionCache, method);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    v27,
    baseSvtId,
    (Il2CppObject *)v28,
    (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
  RestrictionEntityList = (System_Collections_ObjectModel_Collection_T__o *)CommonRestrictionMaster__GetRestrictionEntityList(v29);
  if ( RestrictionEntityList )
  {
    v31 = RestrictionEntityList;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              RestrictionEntityList,
              (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v33 = Count;
      for ( i = 0; v33 != i; ++i )
      {
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 v31,
                 i,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v37 = Item;
          methodPtr_low = LOBYTE(CommonRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (CommonRestrictionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonRestrictionEntity_TypeInfo
            && CommonRestrictionEntity__IsIncludedSvt((CommonRestrictionEntity_o *)Item, baseSvtId, v36) )
          {
            v39 = CommonRestrictionMaster_TypeInfo;
            if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, method);
              v39 = CommonRestrictionMaster_TypeInfo;
            }
            restrictionCache = (Il2CppObject *)v39->static_fields->restrictionCache;
            if ( !restrictionCache )
              goto LABEL_30;
            restrictionCache = System_Collections_Generic_Dictionary_int__object___get_Item(
                                 (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
                                 baseSvtId,
                                 (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !restrictionCache )
              goto LABEL_30;
            method = (const MethodInfo *)LODWORD(v37[1].klass);
            klass = restrictionCache[1].klass;
            v41 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(restrictionCache[1].monitor);
            if ( !klass )
              goto LABEL_30;
            monitor_low = SLODWORD(restrictionCache[1].monitor);
            if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)restrictionCache,
                (int32_t)method,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
LABEL_26:
  v43 = CommonRestrictionMaster_TypeInfo;
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, method);
    v43 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (Il2CppObject *)v43->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_30;
  return (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__object__o *)restrictionCache,
                                                     baseSvtId,
                                                     (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
}


System_String_o *__fastcall CommonRestrictionMaster__GetRestrictionMessageFromId(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *result; // x0

  if ( (byte_4B16027 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonRestrictionMaster_TypeInfo, method, v2);
    byte_4B16027 = 1;
  }
  if ( !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo, method);
  result = (System_String_o *)CommonRestrictionMaster__GetRestrictionEntityFromId(id, method);
  if ( result )
    return (System_String_o *)result[1].monitor;
  return result;
}