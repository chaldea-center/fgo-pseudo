void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42174AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__, method);
    byte_42174AA = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    205,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *__fastcall ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
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
  ServantCostumeReleaseEntity_array *EntityList; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  __int64 v26; // x1
  __int64 v27; // x2
  ServantCostumeReleaseMaster___c_c *v28; // x0
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x22
  Il2CppObject *v31; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x25
  ServantCostumeReleaseEntity_o *v43; // x8
  int32_t condGroup; // w23
  il2cpp_array_size_t v45; // w26
  ServantCostumeReleaseEntity_o *v46; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v47; // x23
  __int64 v48; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v49; // x21

  if ( (byte_42174AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Sort_ServantCostumeReleaseEntity___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Comparison_ServantCostumeReleaseEntity___ctor__, v7);
    sub_B0D8A4(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___67891880, v14);
    sub_B0D8A4(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v16);
    sub_B0D8A4(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__, v17);
    sub_B0D8A4(&ServantCostumeReleaseMaster___c_TypeInfo, v18);
    byte_42174AD = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  v28 = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    v28 = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_ServantCostumeReleaseEntity__TypeInfo,
                                                                          v26,
                                                                          v27);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v31,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    v32 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v32->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v32->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)EntityList,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_30;
  v42 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v42 )
  {
LABEL_27:
    v48 = sub_B0D9A8(v39);
    sub_B0D948(v48, 0LL);
  }
  v43 = EntityList->m_Items[0];
  if ( !v43 )
LABEL_30:
    sub_B0D97C(v39);
  if ( (int)v42 >= 1 )
  {
    condGroup = v43->fields.condGroup;
    v45 = 0;
    while ( 1 )
    {
      v46 = EntityList->m_Items[v45];
      if ( !v46 )
        goto LABEL_30;
      if ( v46->fields.releaseType == 1 )
      {
        if ( condGroup == v46->fields.condGroup )
        {
          if ( !v22 )
            goto LABEL_30;
        }
        else
        {
          v47 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                  System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                                                  v40,
                                                                                  v41);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v47,
            (System_Collections_Generic_IEnumerable_T__o *)v22,
            (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___67891880);
          if ( !v25 )
            goto LABEL_30;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
          if ( !v22 )
            goto LABEL_30;
          condGroup = v46->fields.condGroup;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v22,
            (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v22,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
      }
      if ( (int)++v45 >= (int)v42 )
        break;
      if ( v45 >= EntityList->max_length )
        goto LABEL_27;
    }
  }
  v49 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                                          v40,
                                                                          v41);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v49,
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___67891880);
  if ( !v25 )
    goto LABEL_30;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v25,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v25;
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_o *__fastcall ServantCostumeReleaseMaster__GetEntity(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42174A8 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_42174A8 = 1;
  }
  PK = ServantCostumeReleaseEntity__CreatePK(
         svtId,
         releaseType,
         costumeId,
         condType,
         condTargetId,
         *(const MethodInfo **)&condTargetId);
  return (ServantCostumeReleaseEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266A024 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_array *__fastcall ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  void *list; // x0
  int32_t Count; // w0
  void *v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  int32_t v24; // w24
  __int64 v25; // x10
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v28; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42174AC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Comparison_ServantCostumeReleaseEntity___ctor__, v8);
    sub_B0D8A4(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v14);
    sub_B0D8A4(&ServantCostumeReleaseEntity_TypeInfo, v15);
    sub_B0D8A4(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, v16);
    sub_B0D8A4(&ServantCostumeReleaseMaster___c_TypeInfo, v17);
    byte_42174AC = 1;
  }
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&costumeId);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v23 = Count;
    v24 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v24,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v21 = list;
      v25 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v25
        || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v25 - 8) != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v18 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
      }
      if ( ++v24 >= v23 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B0D97C(list);
  }
LABEL_15:
  list = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    list = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  static_fields = (struct ServantCostumeReleaseMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                          System_Comparison_ServantCostumeReleaseEntity__TypeInfo,
                                                                          v21,
                                                                          v22);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v28,
      Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    v29 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v29->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__4_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  if ( !v18 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v18,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FC77C4 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
}


bool __fastcall ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  bool IsCostumeReleaseCondClear; // w8
  bool result; // w0
  int64_t Instance; // x0
  signed int max_length; // w20
  __int64 v16; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t num; // w8
  __int64 v19; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t qp; // [xsp+14h] [xbp-4Ch] BYREF
  System_Int32_array *itemNums; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *itemIds; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42174AF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CombineCostumeMaster___, targetEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_42174AF = 1;
  }
  itemIds = 0LL;
  itemNums = 0LL;
  qp = 0;
  entity = 0LL;
  IsCostumeReleaseCondClear = ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
                                this,
                                targetEntity,
                                svtId,
                                userSvtId,
                                method);
  result = 0;
  if ( !IsCostumeReleaseCondClear )
    return result;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_30:
    sub_B0D97C(Instance);
  }
  CombineCostumeMaster__CheckNeedCombineInfo(
    (CombineCostumeMaster_o *)Instance,
    svtId,
    targetEntity->fields.id,
    &itemIds,
    &itemNums,
    &qp,
    0LL);
  if ( !itemIds )
    return 1;
  max_length = itemIds->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    Instance = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( Instance )
      return qp <= *(_DWORD *)(Instance + 96);
    goto LABEL_30;
  }
  v16 = 8LL;
  while ( 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !itemIds )
      goto LABEL_30;
    if ( (unsigned int)(v16 - 8) >= itemIds->max_length )
      goto LABEL_31;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_30;
    Instance = UserItemMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 Instance,
                 *((_DWORD *)&itemIds->obj.klass + v16),
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      num = entity->fields.num;
    }
    else
    {
      num = 0;
    }
    if ( !itemNums )
      goto LABEL_30;
    if ( (unsigned int)(v16 - 8) >= itemNums->max_length )
    {
LABEL_31:
      v19 = sub_B0D9A8(Instance);
      sub_B0D948(v19, 0LL);
    }
    if ( *((_DWORD *)&itemNums->obj.klass + v16) > num )
      return 0;
    if ( (int)++v16 - 8 >= max_length )
      goto LABEL_25;
  }
}


bool __fastcall ServantCostumeReleaseMaster__IsClearEventItemCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v15; // x24
  bool IsShortEventItem; // w23
  EventEntity_o *v17; // x24
  int64_t startedAt; // x25
  const MethodInfo *v19; // x4

  if ( (byte_42174B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, targetEntity);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_42174B1 = 1;
  }
  if ( ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    if ( !targetEntity || !Instance )
      goto LABEL_22;
    ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                (EventCombineCostumeMaster_o *)Instance,
                                svtId,
                                targetEntity->fields.id,
                                0LL);
    if ( !ListBySvtIdAndCostumeId )
      return (char)ListBySvtIdAndCostumeId;
    v15 = ListBySvtIdAndCostumeId;
    IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
      || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        v15->fields.eventId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
    {
LABEL_22:
      sub_B0D97C(Instance);
    }
    v17 = (EventEntity_o *)Instance;
    if ( !(IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL)) )
      goto LABEL_20;
    startedAt = v17->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL)
      && !EventEntity__IsOpen(v17, 0, 0LL)
      && (!IsShortEventItem
       || ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v19)) )
    {
LABEL_20:
      LOBYTE(ListBySvtIdAndCostumeId) = 1;
      return (char)ListBySvtIdAndCostumeId;
    }
  }
  LOBYTE(ListBySvtIdAndCostumeId) = 0;
  return (char)ListBySvtIdAndCostumeId;
}


bool __fastcall ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  const MethodInfo *v16; // x1
  __int64 v17; // x10
  int32_t v18; // w25
  int32_t v19; // w26

  if ( (byte_42174B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, targetEntity);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&CondType_TypeInfo, v10);
    sub_B0D8A4(&ServantCostumeReleaseEntity_TypeInfo, v11);
    byte_42174B0 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_27:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v15,
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v17 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v17
      || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v17 - 8) != ServantCostumeReleaseEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( *((_DWORD *)list + 4) == svtId )
    {
      if ( !targetEntity )
        goto LABEL_27;
      if ( *((_DWORD *)list + 5) == targetEntity->fields.id && *((_DWORD *)list + 6) == 2 )
      {
        v18 = *((_DWORD *)list + 7);
        if ( (v18 & 0xFFFFFFFE) != 6 )
        {
          if ( v18 == 12 )
          {
            if ( !ServantCostumeEntity__CheckEnableReleaseTime(targetEntity, v16) )
              return 0;
          }
          else if ( !ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)list, v16) )
          {
            return 0;
          }
          goto LABEL_24;
        }
        v19 = *((_DWORD *)list + 9);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpenForUsrSvt(v18, v19, userSvtId, 0LL) )
          return 0;
      }
    }
LABEL_24:
    if ( ++v15 >= v14 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__TryGetEntity(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeReleaseEntity_o **entity,
        int32_t svtId,
        int32_t releaseType,
        int32_t costumeId,
        int32_t condType,
        int32_t condTargetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42174A9 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__,
      entity);
    byte_42174A9 = 1;
  }
  PK = ServantCostumeReleaseEntity__CreatePK(
         svtId,
         releaseType,
         costumeId,
         condType,
         condTargetId,
         *(const MethodInfo **)&condType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__checkItemHaving(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *CostumeCondGroupEntityList; // x0
  const MethodInfo *v11; // x1
  int size; // w20
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *v13; // x19
  unsigned int v14; // w21
  unsigned int i; // w8
  __int64 v16; // x23
  System_Collections_Generic_List_ServantCostumeReleaseEntity__o *v17; // x25
  System_Collections_Generic_List_ServantCostumeReleaseEntity__o *v18; // x8
  int v19; // w22

  if ( (byte_42174AE & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__,
      *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__, v9);
    byte_42174AE = 1;
  }
  CostumeCondGroupEntityList = ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
                                 this,
                                 svtId,
                                 costumeId,
                                 method);
  if ( !CostumeCondGroupEntityList )
    return 1;
  size = CostumeCondGroupEntityList->fields._size;
  v13 = CostumeCondGroupEntityList;
  if ( !size )
    return 1;
  if ( size >= 1 )
  {
    v14 = 0;
    for ( i = CostumeCondGroupEntityList->fields._size; ; i = v13->fields._size )
    {
      if ( i <= v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v18 = v13->fields._items->m_Items[v14];
      if ( !v18 )
LABEL_25:
        sub_B0D97C(CostumeCondGroupEntityList);
      v19 = v18->fields._size;
      if ( v19 < 1 )
        break;
      v16 = 0LL;
      while ( 1 )
      {
        if ( v13->fields._size <= v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v17 = v13->fields._items->m_Items[v14];
        if ( !v17 )
          goto LABEL_25;
        if ( v17->fields._size <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        CostumeCondGroupEntityList = (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v17->fields._items->m_Items[v16];
        if ( !CostumeCondGroupEntityList )
          goto LABEL_25;
        CostumeCondGroupEntityList = (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)CostumeCondGroupEntityList, v11);
        if ( ((unsigned __int8)CostumeCondGroupEntityList & 1) == 0 )
          break;
        if ( (int)++v16 >= v19 )
          return 1;
      }
      if ( (int)++v14 >= size )
        return 0;
    }
    return 1;
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCostumeReleaseMaster__isEnableMountCostume(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t id,
        int32_t lv,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w24
  int32_t v16; // w25
  __int64 v17; // x10
  int syncRoot_high; // w8

  if ( (byte_42174AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B0D8A4(&ServantCostumeReleaseEntity_TypeInfo, v12);
    byte_42174AB = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v16,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v17 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v17
        || (ServantCostumeReleaseEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(list->fields.items) == svtId && HIDWORD(list->fields.items) == id )
      {
        syncRoot_high = HIDWORD(list->fields._syncRoot);
        if ( syncRoot_high == 7 )
        {
          if ( SHIDWORD(list[1].klass) > limitCount )
            return 0;
        }
        else if ( syncRoot_high == 6 && SHIDWORD(list[1].klass) > lv )
        {
          return 0;
        }
      }
      if ( ++v16 >= v15 )
        return 1;
    }
LABEL_21:
    sub_B0D97C(list);
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4212226 & 1) == 0 )
  {
    sub_B0D8A4(&ServantCostumeReleaseMaster___c_TypeInfo, v1);
    byte_4212226 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ServantCostumeReleaseMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ServantCostumeReleaseMaster___c___ctor(
        ServantCostumeReleaseMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetCostumeCondGroupEntityList_b__5_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B0D97C(this);
  return a->fields.priority - b->fields.priority;
}