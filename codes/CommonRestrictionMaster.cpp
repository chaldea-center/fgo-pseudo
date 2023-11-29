void __fastcall CommonRestrictionMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F65DF & 1) == 0 )
  {
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v6);
    byte_40F65DF = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__List_int___TypeInfo,
                                                                                                  v1,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  static_fields = (BattleServantConfConponent_o *)CommonRestrictionMaster_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall CommonRestrictionMaster___ctor(CommonRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F65D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__, method);
    byte_40F65D7 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    258,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int___ctor__);
}


void __fastcall CommonRestrictionMaster__ClearRestrictionCacheList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  CommonRestrictionMaster_c *v3; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *restrictionCache; // x0

  if ( (byte_40F65DB & 1) == 0 )
  {
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___Clear__, v2);
    byte_40F65DB = 1;
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
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    restrictionCache,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__List_int___Clear__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CommonRestrictionMaster__GetIncludedRestrictionId(
        System_Collections_Generic_List_int__o *restrictionList,
        int32_t baseSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t size; // w8
  unsigned __int64 v8; // x22
  signed __int64 v9; // x23
  int32_t v10; // w21
  CommonRestrictionEntity_o *RestrictionEntityFromId; // x0
  const MethodInfo *v12; // x2

  if ( (byte_40F65DD & 1) == 0 )
  {
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    byte_40F65DD = 1;
  }
  if ( !restrictionList )
    sub_B170D4();
  size = restrictionList->fields._size;
  if ( size < 1 )
    return -1;
  v8 = 0LL;
  v9 = size;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = restrictionList->fields._items->m_Items[v8 + 1];
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
    size = restrictionList->fields._size;
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

  if ( (byte_40F65DE & 1) == 0 )
  {
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, *(_QWORD *)&baseSvtId);
    byte_40F65DE = 1;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F65D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F65D8 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return (CommonRestrictionEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        id,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_CommonRestrictionMaster__CommonRestrictionEntity__int__GetEntity__);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall CommonRestrictionMaster__GetRestrictionEntityList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *result; // x0

  if ( (byte_40F65DA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommonRestrictionMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40F65DA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  result = (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                      (DataManager_o *)Instance,
                                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommonRestrictionMaster___);
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *restrictionCache; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  CommonRestrictionMaster_c *v18; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v19; // x20
  System_Collections_Generic_List_int__o *v20; // x21
  const MethodInfo *v21; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *RestrictionEntityList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x20
  int32_t Count; // w0
  int32_t v25; // w21
  int32_t i; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v28; // x2
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v29; // x23
  __int64 v30; // x10
  CommonRestrictionMaster_c *v31; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v32; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v33; // x0
  CommonRestrictionMaster_c *v34; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v35; // x0

  if ( (byte_40F65DC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&CommonRestrictionEntity_TypeInfo, v4);
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_40F65DC = 1;
  }
  v12 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v12 = CommonRestrictionMaster_TypeInfo;
  }
  restrictionCache = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v12->static_fields->restrictionCache;
  if ( !restrictionCache )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         restrictionCache,
         baseSvtId,
         (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__List_int___ContainsKey__) )
  {
    goto LABEL_26;
  }
  v18 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v18 = CommonRestrictionMaster_TypeInfo;
  }
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v18->static_fields->restrictionCache;
  v20 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16,
                                                    v17);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v19 )
LABEL_31:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
    v19,
    baseSvtId,
    (WarBoardAIRoute_RouteData_o *)v20,
    (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__List_int___set_Item__);
  RestrictionEntityList = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CommonRestrictionMaster__GetRestrictionEntityList(v21);
  if ( RestrictionEntityList )
  {
    v23 = RestrictionEntityList;
    Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
              RestrictionEntityList,
              (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v25 = Count;
      for ( i = 0; i < v25; ++i )
      {
        Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                 v23,
                 i,
                 (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v29 = Item;
          v30 = *(&CommonRestrictionEntity_TypeInfo->_2.bitflags2 + 1);
          if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v30
            && (CommonRestrictionEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] == CommonRestrictionEntity_TypeInfo
            && CommonRestrictionEntity__IsIncludedSvt((CommonRestrictionEntity_o *)Item, baseSvtId, v28) )
          {
            v31 = CommonRestrictionMaster_TypeInfo;
            if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
              v31 = CommonRestrictionMaster_TypeInfo;
            }
            v32 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v31->static_fields->restrictionCache;
            if ( !v32 )
              goto LABEL_31;
            v33 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                    v32,
                    baseSvtId,
                    (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
            if ( !v33 )
              goto LABEL_31;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)v33,
              (int32_t)v29[1].klass,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
    }
  }
LABEL_26:
  v34 = CommonRestrictionMaster_TypeInfo;
  if ( (BYTE3(CommonRestrictionMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonRestrictionMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonRestrictionMaster_TypeInfo);
    v34 = CommonRestrictionMaster_TypeInfo;
  }
  v35 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v34->static_fields->restrictionCache;
  if ( !v35 )
    goto LABEL_31;
  return (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     v35,
                                                     baseSvtId,
                                                     (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_int___get_Item__);
}


System_String_o *__fastcall CommonRestrictionMaster__GetRestrictionMessageFromId(int32_t id, const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_40F65D9 & 1) == 0 )
  {
    sub_B16FFC(&CommonRestrictionMaster_TypeInfo, method);
    byte_40F65D9 = 1;
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