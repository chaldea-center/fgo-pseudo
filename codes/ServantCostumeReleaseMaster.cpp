void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FD01C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__, method);
    byte_40FD01C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    205,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ServantCostumeReleaseMaster___c_c *v34; // x0
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x22
  Il2CppObject *v37; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x25
  ServantCostumeReleaseEntity_o *v51; // x8
  int32_t condGroup; // w23
  il2cpp_array_size_t v53; // w26
  ServantCostumeReleaseEntity_o *v54; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v55; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v56; // x21

  if ( (byte_40FD01F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Sort_ServantCostumeReleaseEntity___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Comparison_ServantCostumeReleaseEntity___ctor__, v7);
    sub_B16FFC(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___66744072, v14);
    sub_B16FFC(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v16);
    sub_B16FFC(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__, v17);
    sub_B16FFC(&ServantCostumeReleaseMaster___c_TypeInfo, v18);
    byte_40FD01F = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  v34 = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    v34 = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ServantCostumeReleaseEntity__TypeInfo,
                                                                          v30,
                                                                          v31,
                                                                          v32,
                                                                          v33);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v37,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    v38 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v38->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v38->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)EntityList,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_30;
  v50 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v50 )
  {
LABEL_27:
    sub_B17100(v45, v46, v47);
    sub_B170A0();
  }
  v51 = EntityList->m_Items[0];
  if ( !v51 )
LABEL_30:
    sub_B170D4();
  if ( (int)v50 >= 1 )
  {
    condGroup = v51->fields.condGroup;
    v53 = 0;
    while ( 1 )
    {
      v54 = EntityList->m_Items[v53];
      if ( !v54 )
        goto LABEL_30;
      if ( v54->fields.releaseType == 1 )
      {
        if ( condGroup == v54->fields.condGroup )
        {
          if ( !v24 )
            goto LABEL_30;
        }
        else
        {
          v55 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                                  System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                                                  v46,
                                                                                  v47,
                                                                                  v48,
                                                                                  v49);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v55,
            (System_Collections_Generic_IEnumerable_T__o *)v24,
            (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___66744072);
          if ( !v29 )
            goto LABEL_30;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
          if ( !v24 )
            goto LABEL_30;
          condGroup = v54->fields.condGroup;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v24,
            (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v54,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
      }
      if ( (int)++v53 >= (int)v50 )
        break;
      if ( v53 >= EntityList->max_length )
        goto LABEL_27;
    }
  }
  v56 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                                          v46,
                                                                          v47,
                                                                          v48,
                                                                          v49);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v56,
    (System_Collections_Generic_IEnumerable_T__o *)v24,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___66744072);
  if ( !v29 )
    goto LABEL_30;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v29;
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

  if ( (byte_40FD01A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__,
      *(_QWORD *)&svtId);
    byte_40FD01A = 1;
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
                                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ServantCostumeReleaseEntity_array *__fastcall ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t v26; // w23
  int32_t v27; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v30; // x10
  ServantCostumeReleaseMaster___c_c *v31; // x0
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v34; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_40FD01E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Comparison_ServantCostumeReleaseEntity___ctor__, v9);
    sub_B16FFC(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo, v15);
    sub_B16FFC(&ServantCostumeReleaseEntity_TypeInfo, v16);
    sub_B16FFC(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__, v17);
    sub_B16FFC(&ServantCostumeReleaseMaster___c_TypeInfo, v18);
    byte_40FD01E = 1;
  }
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo,
                                                                                                  *(_QWORD *)&svtId,
                                                                                                  *(_QWORD *)&costumeId,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      v28 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v28 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v28,
                                                                      v27,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v22 = Item;
      v30 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v30
        || (ServantCostumeReleaseEntity_c *)Item->klass->_2.typeHierarchy[v30 - 1] != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionTargetId == svtId && Item->fields.missionConditionDetailId == costumeId )
      {
        if ( !v19 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
      }
      if ( ++v27 >= v26 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_15:
  v31 = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    v31 = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_ServantCostumeReleaseEntity__TypeInfo,
                                                                          v22,
                                                                          v23,
                                                                          v24,
                                                                          v25);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v34,
      Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    v35 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v35->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v35->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !v19 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v19,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  CombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  signed int max_length; // w20
  __int64 v17; // x22
  WebViewManager_o *v18; // x0
  UserItemMaster_o *v19; // x19
  int64_t UserId; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t num; // w8
  UserGameEntity_o *SelfUserGame; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t qp; // [xsp+14h] [xbp-4Ch] BYREF
  System_Int32_array *itemNums; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *itemIds; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_40FD021 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CombineCostumeMaster___, targetEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FD021 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (CombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !MasterData_WarQuestSelectionMaster )
  {
LABEL_30:
    sub_B170D4();
  }
  CombineCostumeMaster__CheckNeedCombineInfo(
    MasterData_WarQuestSelectionMaster,
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
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( SelfUserGame )
      return qp <= SelfUserGame->fields.qp;
    goto LABEL_30;
  }
  v17 = 8LL;
  while ( 1 )
  {
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v18 )
      goto LABEL_30;
    v19 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v18,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !itemIds )
      goto LABEL_30;
    if ( (unsigned int)(v17 - 8) >= itemIds->max_length )
      goto LABEL_31;
    if ( !v19 )
      goto LABEL_30;
    UserId = UserItemMaster__TryGetEntity(v19, &entity, UserId, *((_DWORD *)&itemIds->obj.klass + v17), 0LL);
    if ( (UserId & 1) != 0 )
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
    if ( (unsigned int)(v17 - 8) >= itemNums->max_length )
    {
LABEL_31:
      sub_B17100(UserId, v21, v22);
      sub_B170A0();
    }
    if ( *((_DWORD *)&itemNums->obj.klass + v17) > num )
      return 0;
    if ( (int)++v17 - 8 >= max_length )
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
  WebViewManager_o *Instance; // x0
  EventCombineCostumeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v16; // x24
  bool IsShortEventItem; // w23
  WebViewManager_o *v18; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x0
  EventEntity_o *Entity; // x0
  EventEntity_o *v21; // x24
  int64_t startedAt; // x25
  const MethodInfo *v23; // x4

  if ( (byte_40FD023 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___, targetEntity);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FD023 = 1;
  }
  if ( ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    MasterData_WarQuestSelectionMaster = (EventCombineCostumeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    if ( !targetEntity || !MasterData_WarQuestSelectionMaster )
      goto LABEL_22;
    ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                targetEntity->fields.id,
                                0LL);
    if ( !ListBySvtIdAndCostumeId )
      return (char)ListBySvtIdAndCostumeId;
    v16 = ListBySvtIdAndCostumeId;
    IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL);
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v18
      || (v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)v18,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
      || (Entity = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v19,
                                      v16->fields.eventId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
    {
LABEL_22:
      sub_B170D4();
    }
    v21 = Entity;
    if ( !(IsShortEventItem | !EventEntity__IsOpen(Entity, 0, 0LL)) )
      goto LABEL_20;
    startedAt = v21->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL)
      && !EventEntity__IsOpen(v21, 0, 0LL)
      && (!IsShortEventItem
       || ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v23)) )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w23
  int32_t v15; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  ServantCostumeReleaseEntity_o *Item; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x10
  int32_t condType; // w25
  int32_t condNum; // w26

  if ( (byte_40FD022 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, targetEntity);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&CondType_TypeInfo, v10);
    sub_B16FFC(&ServantCostumeReleaseEntity_TypeInfo, v11);
    byte_40FD022 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_27:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v14 = Count;
  v15 = 0;
  while ( 1 )
  {
    v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v16 )
      goto LABEL_27;
    Item = (ServantCostumeReleaseEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                              v16,
                                              v15,
                                              (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_27;
    v19 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (ServantCostumeReleaseEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] != ServantCostumeReleaseEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( Item->fields.svtId == svtId )
    {
      if ( !targetEntity )
        goto LABEL_27;
      if ( Item->fields.costumeId == targetEntity->fields.id && Item->fields.releaseType == 2 )
      {
        condType = Item->fields.condType;
        if ( (condType & 0xFFFFFFFE) != 6 )
        {
          if ( condType == 12 )
          {
            if ( !ServantCostumeEntity__CheckEnableReleaseTime(targetEntity, 0LL) )
              return 0;
          }
          else if ( !ServantCostumeReleaseEntity__IsAvailable(Item, v18) )
          {
            return 0;
          }
          goto LABEL_24;
        }
        condNum = Item->fields.condNum;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpenForUsrSvt(condType, condNum, userSvtId, 0LL) )
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

  if ( (byte_40FD01B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__,
      entity);
    byte_40FD01B = 1;
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
           (const MethodInfo_266F830 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
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
  ServantCostumeReleaseEntity_o *v18; // x0
  System_Collections_Generic_List_ServantCostumeReleaseEntity__o *v19; // x8
  int v20; // w22

  if ( (byte_40FD020 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__,
      *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__, v9);
    byte_40FD020 = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v19 = v13->fields._items->m_Items[v14];
      if ( !v19 )
LABEL_25:
        sub_B170D4();
      v20 = v19->fields._size;
      if ( v20 < 1 )
        break;
      v16 = 0LL;
      while ( 1 )
      {
        if ( v13->fields._size <= v14 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v17 = v13->fields._items->m_Items[v14];
        if ( !v17 )
          goto LABEL_25;
        if ( v17->fields._size <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v18 = v17->fields._items->m_Items[v16];
        if ( !v18 )
          goto LABEL_25;
        if ( !ServantCostumeReleaseEntity__IsAvailable(v18, v11) )
          break;
        if ( (int)++v16 >= v20 )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v19; // x10
  int monitor_high; // w8

  if ( (byte_40FD01D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&ServantCostumeReleaseEntity_TypeInfo, v12);
    byte_40FD01D = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v17,
               v16,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v19 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v19
        || (ServantCostumeReleaseEntity_c *)Item->klass->_2.typeHierarchy[v19 - 1] != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Item[1].klass) == svtId && HIDWORD(Item[1].klass) == id )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == 7 )
        {
          if ( SHIDWORD(Item[2].klass) > limitCount )
            return 0;
        }
        else if ( monitor_high == 6 && SHIDWORD(Item[2].klass) > lv )
        {
          return 0;
        }
      }
      if ( ++v16 >= v15 )
        return 1;
    }
LABEL_21:
    sub_B170D4();
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7623 & 1) == 0 )
  {
    sub_B16FFC(&ServantCostumeReleaseMaster___c_TypeInfo, v1);
    byte_40F7623 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantCostumeReleaseMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B170D4();
  return a->fields.priority - b->fields.priority;
}