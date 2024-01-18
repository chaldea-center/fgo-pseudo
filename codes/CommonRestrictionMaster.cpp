void __fastcall CommonRestrictionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x19
  struct CommonRestrictionMaster_StaticFields *static_fields; // x0

  if ( (byte_4183EA8 & 1) == 0 )
  {
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v3);
    byte_4183EA8 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = CommonRestrictionMaster_TypeInfo->static_fields;
  static_fields->restrictionCache = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v4;
  sub_B2C2F8(static_fields, v4);
}


void __fastcall CommonRestrictionMaster___ctor(CommonRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4183EA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__, method);
    byte_4183EA0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    258,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
}


void __fastcall CommonRestrictionMaster__ClearRestrictionCacheList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  CommonRestrictionMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *restrictionCache; // x0

  if ( (byte_4183EA4 & 1) == 0 )
  {
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v2);
    byte_4183EA4 = 1;
  }
  v3 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v3 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v3->static_fields->restrictionCache;
  if ( !restrictionCache )
    sub_B2C434(0LL, v1);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    restrictionCache,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
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
  int size; // w8
  unsigned __int64 v8; // x22
  signed __int64 v9; // x23
  int32_t v10; // w21
  CommonRestrictionEntity_o *RestrictionEntityFromId; // x0
  const MethodInfo *v12; // x2

  v4 = restrictionList;
  if ( (byte_4183EA6 & 1) == 0 )
  {
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    restrictionList = (System_Collections_Generic_List_int__o *)sub_B2C35C(
                                                                  &Method_System_Collections_Generic_List_int__get_Item__,
                                                                  v6);
    byte_4183EA6 = 1;
  }
  if ( !v4 )
    sub_B2C434(restrictionList, *(_QWORD *)&baseSvtId);
  size = v4->fields._size;
  if ( size < 1 )
    return -1;
  v8 = 0LL;
  v9 = size;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v10 = v4->fields._items->m_Items[v8 + 1];
    if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    }
    RestrictionEntityFromId = CommonRestrictionMaster__GetRestrictionEntityFromId(v10, *(const MethodInfo **)&baseSvtId);
    if ( RestrictionEntityFromId )
    {
      if ( CommonRestrictionEntity__IsIncludedSvt(RestrictionEntityFromId, baseSvtId, v12) )
        break;
    }
    if ( (__int64)++v8 >= v9 )
      return -1;
    size = v4->fields._size;
  }
  return v10;
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

  if ( (byte_4183EA7 & 1) == 0 )
  {
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
    byte_4183EA7 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4183EA1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4183EA1 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonRestrictionMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return (CommonRestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        id,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall CommonRestrictionMaster__GetRestrictionEntityList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *result; // x0

  if ( (byte_4183EA3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4183EA3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  result = (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommonRestrictionMaster___);
  if ( result )
    return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)result->fields.CollectionChanged;
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
  WarBoardEvalValueSquare_EvalValueSquare_o *restrictionCache; // x0
  CommonRestrictionMaster_c *v14; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v15; // x20
  System_Collections_Generic_List_int__o *v16; // x21
  const MethodInfo *v17; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *RestrictionEntityList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x20
  int32_t Count; // w0
  int32_t v21; // w21
  int32_t i; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v24; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x23
  __int64 v26; // x10
  CommonRestrictionMaster_c *v27; // x0
  CommonRestrictionMaster_c *v28; // x0

  if ( (byte_4183EA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&CommonRestrictionEntity_TypeInfo, v4);
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4183EA5 = 1;
  }
  v12 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v12 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v12->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)restrictionCache,
         baseSvtId,
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
  {
    goto LABEL_26;
  }
  v14 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v14 = CommonRestrictionMaster_TypeInfo;
  }
  v15 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v14->static_fields->restrictionCache;
  v16 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v15 )
LABEL_31:
    sub_B2C434(restrictionCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    v15,
    baseSvtId,
    (WarBoardAIRoute_RouteData_o *)v16,
    (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
  RestrictionEntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonRestrictionMaster__GetRestrictionEntityList(v17);
  if ( RestrictionEntityList )
  {
    v19 = RestrictionEntityList;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              RestrictionEntityList,
              (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v21 = Count;
      for ( i = 0; i < v21; ++i )
      {
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v19,
                 i,
                 (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v25 = Item;
          v26 = *(&CommonRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v26
            && (CommonRestrictionEntity_c *)Item->klass->_2.typeHierarchy[v26 - 1] == CommonRestrictionEntity_TypeInfo
            && CommonRestrictionEntity__IsIncludedSvt((CommonRestrictionEntity_o *)Item, baseSvtId, v24) )
          {
            v27 = CommonRestrictionMaster_TypeInfo;
            if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              v27 = CommonRestrictionMaster_TypeInfo;
            }
            restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v27->static_fields->restrictionCache;
            if ( !restrictionCache )
              goto LABEL_31;
            restrictionCache = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionCache,
                                 baseSvtId,
                                 (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !restrictionCache )
              goto LABEL_31;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)restrictionCache,
              (int32_t)v25[1].klass,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
  }
LABEL_26:
  v28 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v28 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v28->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_31;
  return (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionCache,
                                                     baseSvtId,
                                                     (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
}


System_String_o *__fastcall CommonRestrictionMaster__GetRestrictionMessageFromId(int32_t id, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_4183EA2 & 1) == 0 )
  {
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, method);
    byte_4183EA2 = 1;
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