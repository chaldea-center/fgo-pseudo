void __fastcall CommonRestrictionMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v1; // x19
  struct CommonRestrictionMaster_StaticFields *static_fields; // x0

  if ( (byte_4387597 & 1) == 0 )
  {
    sub_B775C4(&CommonRestrictionMaster_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    byte_4387597 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v1,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = CommonRestrictionMaster_TypeInfo->static_fields;
  static_fields->restrictionCache = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v1;
  sub_B77560(static_fields);
}


void __fastcall CommonRestrictionMaster___ctor(CommonRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438758F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
    byte_438758F = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    259,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
}


void __fastcall CommonRestrictionMaster__ClearRestrictionCacheList(const MethodInfo *method)
{
  __int64 v1; // x1
  CommonRestrictionMaster_c *v2; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *restrictionCache; // x0

  if ( (byte_4387593 & 1) == 0 )
  {
    sub_B775C4(&CommonRestrictionMaster_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
    byte_4387593 = 1;
  }
  v2 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v2 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v2->static_fields->restrictionCache;
  if ( !restrictionCache )
    sub_B7769C(0LL, v1);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    restrictionCache,
    (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommonRestrictionMaster__GetIncludedRestrictionId(
        System_Collections_Generic_List_int__o *restrictionList,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  int size; // w8
  unsigned __int64 v6; // x22
  signed __int64 v7; // x23
  int32_t v8; // w21
  CommonRestrictionEntity_o *RestrictionEntityFromId; // x0
  const MethodInfo *v10; // x2

  v4 = restrictionList;
  if ( (byte_4387595 & 1) == 0 )
  {
    sub_B775C4(&CommonRestrictionMaster_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    restrictionList = (System_Collections_Generic_List_int__o *)sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4387595 = 1;
  }
  if ( !v4 )
    sub_B7769C(restrictionList, *(_QWORD *)&baseSvtId);
  size = v4->fields._size;
  if ( size < 1 )
    return -1;
  v6 = 0LL;
  v7 = size;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v8 = v4->fields._items->m_Items[v6 + 1];
    if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    }
    RestrictionEntityFromId = CommonRestrictionMaster__GetRestrictionEntityFromId(v8, *(const MethodInfo **)&baseSvtId);
    if ( RestrictionEntityFromId )
    {
      if ( CommonRestrictionEntity__IsIncludedSvt(RestrictionEntityFromId, baseSvtId, v10) )
        break;
    }
    if ( (__int64)++v6 >= v7 )
      return -1;
    size = v4->fields._size;
  }
  return v8;
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

  if ( (byte_4387596 & 1) == 0 )
  {
    sub_B775C4(&CommonRestrictionMaster_TypeInfo);
    byte_4387596 = 1;
  }
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  RestrictionIdList = CommonRestrictionMaster__GetRestrictionIdList(cachedBaseSvtId, *(const MethodInfo **)&baseSvtId);
  if ( !RestrictionIdList )
    return -1;
  v7 = RestrictionIdList;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  return CommonRestrictionMaster__GetIncludedRestrictionId(v7, baseSvtId, v6);
}


CommonRestrictionEntity_o *__fastcall CommonRestrictionMaster__GetRestrictionEntityFromId(
        int32_t id,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4387590 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonRestrictionMaster___);
    sub_B775C4(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387590 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return (CommonRestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        id,
                                        (const MethodInfo_21FB894 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall CommonRestrictionMaster__GetRestrictionEntityList(
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v2; // x1
  System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *result; // x0

  if ( (byte_4387592 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_CommonRestrictionMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387592 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v2);
  result = (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___);
  if ( result )
    return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)result->fields.CollectionChanged;
  return result;
}


System_Collections_Generic_List_int__o *__fastcall CommonRestrictionMaster__GetRestrictionIdList(
        int32_t baseSvtId,
        const MethodInfo *method)
{
  CommonRestrictionMaster_c *v3; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *restrictionCache; // x0
  CommonRestrictionMaster_c *v5; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v6; // x20
  System_Collections_Generic_List_int__o *v7; // x21
  const MethodInfo *v8; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *RestrictionEntityList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x20
  int32_t Count; // w0
  int32_t v12; // w21
  int32_t i; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v15; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x23
  __int64 v17; // x10
  CommonRestrictionMaster_c *v18; // x0
  CommonRestrictionMaster_c *v19; // x0

  if ( (byte_4387594 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&CommonRestrictionEntity_TypeInfo);
    sub_B775C4(&CommonRestrictionMaster_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4387594 = 1;
  }
  v3 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v3 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v3->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)restrictionCache,
         baseSvtId,
         (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
  {
    goto LABEL_26;
  }
  v5 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v5 = CommonRestrictionMaster_TypeInfo;
  }
  v6 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v5->static_fields->restrictionCache;
  v7 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( !v6 )
LABEL_31:
    sub_B7769C(restrictionCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    v6,
    baseSvtId,
    (WarBoardAIRoute_RouteData_o *)v7,
    (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
  RestrictionEntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonRestrictionMaster__GetRestrictionEntityList(v8);
  if ( RestrictionEntityList )
  {
    v10 = RestrictionEntityList;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              RestrictionEntityList,
              (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v12 = Count;
      for ( i = 0; i < v12; ++i )
      {
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v10,
                 i,
                 (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v16 = Item;
          v17 = *(&CommonRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
            && (CommonRestrictionEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == CommonRestrictionEntity_TypeInfo
            && CommonRestrictionEntity__IsIncludedSvt((CommonRestrictionEntity_o *)Item, baseSvtId, v15) )
          {
            v18 = CommonRestrictionMaster_TypeInfo;
            if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              v18 = CommonRestrictionMaster_TypeInfo;
            }
            restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v18->static_fields->restrictionCache;
            if ( !restrictionCache )
              goto LABEL_31;
            restrictionCache = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionCache,
                                 baseSvtId,
                                 (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !restrictionCache )
              goto LABEL_31;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)restrictionCache,
              (int32_t)v16[1].klass,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
  }
LABEL_26:
  v19 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v19 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v19->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_31;
  return (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionCache,
                                                     baseSvtId,
                                                     (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
}


System_String_o *__fastcall CommonRestrictionMaster__GetRestrictionMessageFromId(int32_t id, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_4387591 & 1) == 0 )
  {
    sub_B775C4(&CommonRestrictionMaster_TypeInfo);
    byte_4387591 = 1;
  }
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  result = (System_String_o *)CommonRestrictionMaster__GetRestrictionEntityFromId(id, method);
  if ( result )
    return (System_String_o *)result[1].monitor;
  return result;
}