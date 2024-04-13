void __fastcall CommonRestrictionMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x19
  struct CommonRestrictionMaster_StaticFields *static_fields; // x0

  if ( (byte_42E4D74 & 1) == 0 )
  {
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v7, v8, v9);
    byte_42E4D74 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = CommonRestrictionMaster_TypeInfo->static_fields;
  static_fields->restrictionCache = (struct System_Collections_Generic_Dictionary_int__List_int___o *)v10;
  sub_B5D560(static_fields);
}


void __fastcall CommonRestrictionMaster___ctor(CommonRestrictionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E4D6C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E4D6C = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    259,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
}


void __fastcall CommonRestrictionMaster__ClearRestrictionCacheList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  CommonRestrictionMaster_c *v7; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *restrictionCache; // x0

  if ( (byte_42E4D70 & 1) == 0 )
  {
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v4, v5, v6);
    byte_42E4D70 = 1;
  }
  v7 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v7 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v7->static_fields->restrictionCache;
  if ( !restrictionCache )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    restrictionCache,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommonRestrictionMaster__GetIncludedRestrictionId(
        System_Collections_Generic_List_int__o *restrictionList,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int size; // w8
  unsigned __int64 v13; // x22
  signed __int64 v14; // x23
  int32_t v15; // w21
  CommonRestrictionEntity_o *RestrictionEntityFromId; // x0
  const MethodInfo *v17; // x2

  v5 = restrictionList;
  if ( (byte_42E4D72 & 1) == 0 )
  {
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, baseSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v6, v7, v8);
    restrictionList = (System_Collections_Generic_List_int__o *)sub_B5D5C4(
                                                                  &Method_System_Collections_Generic_List_int__get_Item__,
                                                                  v9,
                                                                  v10,
                                                                  v11);
    byte_42E4D72 = 1;
  }
  if ( !v5 )
    sub_B5D69C(restrictionList, *(_QWORD *)&baseSvtId);
  size = v5->fields._size;
  if ( size < 1 )
    return -1;
  v13 = 0LL;
  v14 = size;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v15 = v5->fields._items->m_Items[v13 + 1];
    if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    }
    RestrictionEntityFromId = CommonRestrictionMaster__GetRestrictionEntityFromId(v15, *(const MethodInfo **)&baseSvtId);
    if ( RestrictionEntityFromId )
    {
      if ( CommonRestrictionEntity__IsIncludedSvt(RestrictionEntityFromId, baseSvtId, v17) )
        break;
    }
    if ( (__int64)++v13 >= v14 )
      return -1;
    size = v5->fields._size;
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommonRestrictionMaster__GetIncludedRestrictionIds(
        int32_t cachedBaseSvtId,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *RestrictionIdList; // x0
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_int__o *v8; // x20

  if ( (byte_42E4D73 & 1) == 0 )
  {
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, baseSvtId, (_DWORD)method, v3);
    byte_42E4D73 = 1;
  }
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  RestrictionIdList = CommonRestrictionMaster__GetRestrictionIdList(cachedBaseSvtId, *(const MethodInfo **)&baseSvtId);
  if ( !RestrictionIdList )
    return -1;
  v8 = RestrictionIdList;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
  }
  return CommonRestrictionMaster__GetIncludedRestrictionId(v8, baseSvtId, v7);
}


CommonRestrictionEntity_o *__fastcall CommonRestrictionMaster__GetRestrictionEntityFromId(
        int32_t id,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E4D6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E4D6D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonRestrictionMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return (CommonRestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        id,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall CommonRestrictionMaster__GetRestrictionEntityList(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *result; // x0

  if ( (byte_42E4D6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E4D6F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  result = (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommonRestrictionMaster___);
  if ( result )
    return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)result->fields.CollectionChanged;
  return result;
}


System_Collections_Generic_List_int__o *__fastcall CommonRestrictionMaster__GetRestrictionIdList(
        int32_t baseSvtId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  CommonRestrictionMaster_c *v32; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *restrictionCache; // x0
  CommonRestrictionMaster_c *v34; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v35; // x20
  System_Collections_Generic_List_int__o *v36; // x21
  const MethodInfo *v37; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *RestrictionEntityList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v39; // x20
  int32_t Count; // w0
  int32_t v41; // w21
  int32_t i; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v44; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v45; // x23
  __int64 v46; // x10
  CommonRestrictionMaster_c *v47; // x0
  CommonRestrictionMaster_c *v48; // x0

  if ( (byte_42E4D71 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&CommonRestrictionEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    byte_42E4D71 = 1;
  }
  v32 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v32 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v32->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)restrictionCache,
         baseSvtId,
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
  {
    goto LABEL_26;
  }
  v34 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v34 = CommonRestrictionMaster_TypeInfo;
  }
  v35 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v34->static_fields->restrictionCache;
  v36 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v35 )
LABEL_31:
    sub_B5D69C(restrictionCache, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    v35,
    baseSvtId,
    (WarBoardAIRoute_RouteData_o *)v36,
    (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
  RestrictionEntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonRestrictionMaster__GetRestrictionEntityList(v37);
  if ( RestrictionEntityList )
  {
    v39 = RestrictionEntityList;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              RestrictionEntityList,
              (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v41 = Count;
      for ( i = 0; i < v41; ++i )
      {
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v39,
                 i,
                 (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v45 = Item;
          v46 = *(&CommonRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v46
            && (CommonRestrictionEntity_c *)Item->klass->_2.typeHierarchy[v46 - 1] == CommonRestrictionEntity_TypeInfo
            && CommonRestrictionEntity__IsIncludedSvt((CommonRestrictionEntity_o *)Item, baseSvtId, v44) )
          {
            v47 = CommonRestrictionMaster_TypeInfo;
            if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              v47 = CommonRestrictionMaster_TypeInfo;
            }
            restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v47->static_fields->restrictionCache;
            if ( !restrictionCache )
              goto LABEL_31;
            restrictionCache = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionCache,
                                 baseSvtId,
                                 (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !restrictionCache )
              goto LABEL_31;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)restrictionCache,
              (int32_t)v45[1].klass,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
  }
LABEL_26:
  v48 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v48 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (WarBoardEvalValueSquare_EvalValueSquare_o *)v48->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_31;
  return (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)restrictionCache,
                                                     baseSvtId,
                                                     (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
}


System_String_o *__fastcall CommonRestrictionMaster__GetRestrictionMessageFromId(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *result; // x0

  if ( (byte_42E4D6E & 1) == 0 )
  {
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4D6E = 1;
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