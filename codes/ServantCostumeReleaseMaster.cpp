void __fastcall ServantCostumeReleaseMaster___ctor(ServantCostumeReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2E5E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
    byte_42B2E5E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    206,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string___ctor__);
}


System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *__fastcall ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  ServantCostumeReleaseEntity_array *EntityList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  ServantCostumeReleaseMaster___c_c *v10; // x0
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__5_0; // x22
  Il2CppObject *v13; // x23
  struct ServantCostumeReleaseMaster___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x25
  ServantCostumeReleaseEntity_o *v24; // x8
  int32_t condGroup; // w23
  il2cpp_array_size_t v26; // w26
  ServantCostumeReleaseEntity_o *v27; // x22
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v28; // x23
  __int64 v29; // x0
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v30; // x21

  if ( (byte_42B2E61 & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Sort_ServantCostumeReleaseEntity___);
    sub_B52984(&Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    sub_B52984(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___68519784);
    sub_B52984(&System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    sub_B52984(&Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__);
    sub_B52984(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_42B2E61 = 1;
  }
  EntityList = ServantCostumeReleaseMaster__GetEntityList(this, svtId, costumeId, method);
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_List_ServantCostumeReleaseEntity___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity____ctor__);
  v10 = ServantCostumeReleaseMaster___c_TypeInfo;
  if ( (BYTE3(ServantCostumeReleaseMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantCostumeReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantCostumeReleaseMaster___c_TypeInfo);
    v10 = ServantCostumeReleaseMaster___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__5_0,
      v13,
      Method_ServantCostumeReleaseMaster___c__GetCostumeCondGroupEntityList_b__5_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    v14 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v14->__9__5_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__5_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v14->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)EntityList,
    (System_Comparison_T__o *)_9__5_0,
    (const MethodInfo_1A33468 *)Method_System_Array_Sort_ServantCostumeReleaseEntity___);
  if ( !EntityList )
    goto LABEL_30;
  v23 = *(_QWORD *)&EntityList->max_length;
  if ( !(_DWORD)v23 )
  {
LABEL_27:
    v29 = sub_B52A88(v21);
    sub_B52A28(v29, 0LL);
  }
  v24 = EntityList->m_Items[0];
  if ( !v24 )
LABEL_30:
    sub_B52A5C(v21, v22);
  if ( (int)v23 >= 1 )
  {
    condGroup = v24->fields.condGroup;
    v26 = 0;
    while ( 1 )
    {
      v27 = EntityList->m_Items[v26];
      if ( !v27 )
        goto LABEL_30;
      if ( v27->fields.releaseType == 1 )
      {
        if ( condGroup == v27->fields.condGroup )
        {
          if ( !v8 )
            goto LABEL_30;
        }
        else
        {
          v28 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v28,
            (System_Collections_Generic_IEnumerable_T__o *)v8,
            (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___68519784);
          if ( !v9 )
            goto LABEL_30;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v9,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
          if ( !v8 )
            goto LABEL_30;
          condGroup = v27->fields.condGroup;
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8,
            (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Clear__);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v8,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
      }
      if ( (int)++v26 >= (int)v23 )
        break;
      if ( v26 >= EntityList->max_length )
        goto LABEL_27;
    }
  }
  v30 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor___68519784);
  if ( !v9 )
    goto LABEL_30;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v9,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___Add__);
  return (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v9;
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

  if ( (byte_42B2E5C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
    byte_42B2E5C = 1;
  }
  PK = ServantCostumeReleaseEntity__CreatePK(
         svtId,
         releaseType,
         costumeId,
         condType,
         condTargetId,
         *(const MethodInfo **)&condTargetId);
  return (ServantCostumeReleaseEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23E2728 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__GetEntity__);
}


ServantCostumeReleaseEntity_array *__fastcall ServantCostumeReleaseMaster__GetEntityList(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19
  void *v8; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v16; // x21
  struct ServantCostumeReleaseMaster___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B2E60 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    sub_B52984(&System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
    sub_B52984(&ServantCostumeReleaseEntity_TypeInfo);
    sub_B52984(&Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__);
    sub_B52984(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_42B2E60 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ServantCostumeReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v12,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v8 = list;
      v13 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v13
        || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) != ServantCostumeReleaseEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)list + 4) == svtId && *((_DWORD *)list + 5) == costumeId )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v7,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Add__);
      }
      if ( ++v12 >= v11 )
        goto LABEL_15;
    }
LABEL_25:
    sub_B52A5C(list, v8);
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
    v16 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B52A54(System_Comparison_ServantCostumeReleaseEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v16,
      Method_ServantCostumeReleaseMaster___c__GetEntityList_b__4_0__,
      (const MethodInfo_2483370 *)Method_System_Comparison_ServantCostumeReleaseEntity___ctor__);
    v17 = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
    v17->__9__4_0 = (struct System_Comparison_ServantCostumeReleaseEntity__o *)_9__4_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v17->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v7 )
    goto LABEL_25;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v7,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2FF36E0 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__Sort__);
  return (ServantCostumeReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__ToArray__);
}


bool __fastcall ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(
        ServantCostumeReleaseMaster_o *this,
        ServantCostumeEntity_o *targetEntity,
        int32_t svtId,
        int64_t userSvtId,
        const MethodInfo *method)
{
  bool IsCostumeReleaseCondClear; // w8
  bool result; // w0
  int64_t Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w20
  __int64 v14; // x22
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x19
  int32_t num; // w8
  __int64 v17; // x0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF
  int32_t qp; // [xsp+14h] [xbp-4Ch] BYREF
  System_Int32_array *itemNums; // [xsp+18h] [xbp-48h] BYREF
  System_Int32_array *itemIds; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42B2E63 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CombineCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2E63 = 1;
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CombineCostumeMaster___),
        !targetEntity)
    || !Instance )
  {
LABEL_30:
    sub_B52A5C(Instance, v12);
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
  v14 = 8LL;
  while ( 1 )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_30;
    MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !itemIds )
      goto LABEL_30;
    if ( (unsigned int)(v14 - 8) >= itemIds->max_length )
      goto LABEL_31;
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_30;
    Instance = UserItemMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 Instance,
                 *((_DWORD *)&itemIds->obj.klass + v14),
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
    if ( (unsigned int)(v14 - 8) >= itemNums->max_length )
    {
LABEL_31:
      v17 = sub_B52A88(Instance);
      sub_B52A28(v17, 0LL);
    }
    if ( *((_DWORD *)&itemNums->obj.klass + v14) > num )
      return 0;
    if ( (int)++v14 - 8 >= max_length )
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  EventCombineCostumeEntity_o *ListBySvtIdAndCostumeId; // x0
  EventCombineCostumeEntity_o *v12; // x24
  bool IsShortEventItem; // w23
  EventEntity_o *v14; // x24
  int64_t startedAt; // x25
  const MethodInfo *v16; // x4

  if ( (byte_42B2E65 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2E65 = 1;
  }
  if ( ServantCostumeReleaseMaster__IsCostumeReleaseCondClear(this, targetEntity, svtId, userSvtId, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventCombineCostumeMaster___);
    if ( !targetEntity || !Instance )
      goto LABEL_22;
    ListBySvtIdAndCostumeId = EventCombineCostumeMaster__GetListBySvtIdAndCostumeId(
                                (EventCombineCostumeMaster_o *)Instance,
                                svtId,
                                targetEntity->fields.id,
                                0LL);
    if ( !ListBySvtIdAndCostumeId )
      return (char)ListBySvtIdAndCostumeId;
    v12 = ListBySvtIdAndCostumeId;
    IsShortEventItem = EventCombineCostumeEntity__IsShortEventItem(ListBySvtIdAndCostumeId, 0LL);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL
      || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                        v12->fields.eventId,
                                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__)) == 0LL )
    {
LABEL_22:
      sub_B52A5C(Instance, v10);
    }
    v14 = (EventEntity_o *)Instance;
    if ( !(IsShortEventItem | !EventEntity__IsOpen((EventEntity_o *)Instance, 0, 0LL)) )
      goto LABEL_20;
    startedAt = v14->fields.startedAt;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( startedAt <= NetworkManager__getTime(0LL)
      && !EventEntity__IsOpen(v14, 0, 0LL)
      && (!IsShortEventItem
       || ServantCostumeReleaseMaster__IsClearCostumeReleaseAllCond(this, targetEntity, svtId, userSvtId, v16)) )
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w23
  int32_t v12; // w24
  __int64 v13; // x10
  int32_t v14; // w25
  int32_t v15; // w26

  if ( (byte_42B2E64 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&ServantCostumeReleaseEntity_TypeInfo);
    byte_42B2E64 = 1;
  }
  list = this->fields.list;
  if ( !list )
LABEL_27:
    sub_B52A5C(list, targetEntity);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v11 = Count;
  v12 = 0;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_27;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v12,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_27;
    v13 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v13
      || *(ServantCostumeReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v13 - 8) != ServantCostumeReleaseEntity_TypeInfo )
    {
      goto LABEL_27;
    }
    if ( *((_DWORD *)list + 4) == svtId )
    {
      if ( !targetEntity )
        goto LABEL_27;
      if ( *((_DWORD *)list + 5) == targetEntity->fields.id && *((_DWORD *)list + 6) == 2 )
      {
        v14 = *((_DWORD *)list + 7);
        if ( (v14 & 0xFFFFFFFE) != 6 )
        {
          if ( v14 == 12 )
          {
            if ( !ServantCostumeEntity__CheckEnableReleaseTime(targetEntity, (const MethodInfo *)targetEntity) )
              return 0;
          }
          else if ( !ServantCostumeReleaseEntity__IsAvailable(
                       (ServantCostumeReleaseEntity_o *)list,
                       (const MethodInfo *)targetEntity) )
          {
            return 0;
          }
          goto LABEL_24;
        }
        v15 = *((_DWORD *)list + 9);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpenForUsrSvt(v14, v15, userSvtId, 0LL) )
          return 0;
      }
    }
LABEL_24:
    if ( ++v12 >= v11 )
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

  if ( (byte_42B2E5D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
    byte_42B2E5D = 1;
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
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ServantCostumeReleaseMaster__ServantCostumeReleaseEntity__string__TryGetEntity__);
}


bool __fastcall ServantCostumeReleaseMaster__checkItemHaving(
        ServantCostumeReleaseMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *CostumeCondGroupEntityList; // x0
  const MethodInfo *v8; // x1
  int size; // w20
  System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *v10; // x19
  unsigned int v11; // w21
  unsigned int i; // w8
  __int64 v13; // x23
  System_Collections_Generic_List_ServantCostumeReleaseEntity__o *v14; // x25
  System_Collections_Generic_List_ServantCostumeReleaseEntity__o *v15; // x8
  int v16; // w22

  if ( (byte_42B2E62 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_List_ServantCostumeReleaseEntity___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ServantCostumeReleaseEntity__get_Item__);
    byte_42B2E62 = 1;
  }
  CostumeCondGroupEntityList = ServantCostumeReleaseMaster__GetCostumeCondGroupEntityList(
                                 this,
                                 svtId,
                                 costumeId,
                                 method);
  if ( !CostumeCondGroupEntityList )
    return 1;
  size = CostumeCondGroupEntityList->fields._size;
  v10 = CostumeCondGroupEntityList;
  if ( !size )
    return 1;
  if ( size >= 1 )
  {
    v11 = 0;
    for ( i = CostumeCondGroupEntityList->fields._size; ; i = v10->fields._size )
    {
      if ( i <= v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v15 = v10->fields._items->m_Items[v11];
      if ( !v15 )
LABEL_25:
        sub_B52A5C(CostumeCondGroupEntityList, v8);
      v16 = v15->fields._size;
      if ( v16 < 1 )
        break;
      v13 = 0LL;
      while ( 1 )
      {
        if ( v10->fields._size <= v11 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        v14 = v10->fields._items->m_Items[v11];
        if ( !v14 )
          goto LABEL_25;
        if ( v14->fields._size <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        CostumeCondGroupEntityList = (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)v14->fields._items->m_Items[v13];
        if ( !CostumeCondGroupEntityList )
          goto LABEL_25;
        CostumeCondGroupEntityList = (System_Collections_Generic_List_List_ServantCostumeReleaseEntity___o *)ServantCostumeReleaseEntity__IsAvailable((ServantCostumeReleaseEntity_o *)CostumeCondGroupEntityList, v8);
        if ( ((unsigned __int8)CostumeCondGroupEntityList & 1) == 0 )
          break;
        if ( (int)++v13 >= v16 )
          return 1;
      }
      if ( (int)++v11 >= size )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  __int64 v15; // x10
  int syncRoot_high; // w8

  if ( (byte_42B2E5F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&ServantCostumeReleaseEntity_TypeInfo);
    byte_42B2E5F = 1;
  }
  if ( id < 1 )
    return 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = *(&ServantCostumeReleaseEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (ServantCostumeReleaseEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != ServantCostumeReleaseEntity_TypeInfo )
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
      if ( ++v14 >= v13 )
        return 1;
    }
LABEL_21:
    sub_B52A5C(list, *(_QWORD *)&svtId);
  }
  return 1;
}


void __fastcall ServantCostumeReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantCostumeReleaseMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD337 & 1) == 0 )
  {
    sub_B52984(&ServantCostumeReleaseMaster___c_TypeInfo);
    byte_42AD337 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantCostumeReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantCostumeReleaseMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantCostumeReleaseMaster___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, a);
  return a->fields.condGroup - b->fields.condGroup;
}


int32_t __fastcall ServantCostumeReleaseMaster___c___GetEntityList_b__4_0(
        ServantCostumeReleaseMaster___c_o *this,
        ServantCostumeReleaseEntity_o *a,
        ServantCostumeReleaseEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B52A5C(this, a);
  return a->fields.priority - b->fields.priority;
}