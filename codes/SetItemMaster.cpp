void __fastcall SetItemMaster___ctor(SetItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B2F8F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
    byte_42B2F8F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    116,
    (const MethodInfo_23E268C *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_o *__fastcall SetItemMaster__GetEntity(
        SetItemMaster_o *this,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B2F8D & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
    byte_42B2F8D = 1;
  }
  PK = SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&targetId);
  return (SetItemEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                              PK,
                              (const MethodInfo_23E2728 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
}


SetItemEntity_array *__fastcall SetItemMaster__GetList(SetItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42B2F91 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_SetItemEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SetItemEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_SetItemEntity__TypeInfo);
    sub_B52984(&SetItemEntity_TypeInfo);
    byte_42B2F91 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SetItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SetItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v9,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        v10 = *(&SetItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (SetItemEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == SetItemEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SetItemEntity__Add__);
        }
      }
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(list, v6);
  }
LABEL_14:
  if ( !v5 )
    goto LABEL_16;
  return (SetItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
}


void __fastcall SetItemMaster__GetSum(
        SetItemMaster_o *this,
        int32_t *itemNum,
        int32_t *servantNum,
        int32_t *servantEquipNum,
        int32_t *cmdCodeNum,
        int32_t *recordNum,
        int32_t id,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t Count; // w0
  int32_t v19; // w27
  int32_t i; // w28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x26
  __int64 v23; // x10
  int klass_high; // w8
  bool IsServantEquip; // w0
  int32_t *v26; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // [xsp+8h] [xbp-68h]
  int32_t *v28; // [xsp+10h] [xbp-60h]

  if ( (byte_42B2F90 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&SetItemEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B2F90 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        !list) )
  {
LABEL_25:
    sub_B52A5C(Instance, v16);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *itemNum = 0;
  v28 = servantNum;
  *servantNum = 0;
  *servantEquipNum = 0;
  *cmdCodeNum = 0;
  *recordNum = 0;
  if ( Count >= 1 )
  {
    v19 = Count;
    for ( i = 0; i < v19; ++i )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_25;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               i,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = Item;
        v23 = *(&SetItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (SetItemEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == SetItemEntity_TypeInfo
          && LODWORD(Item[1].klass) == id )
        {
          klass_high = HIDWORD(Item[1].klass);
          if ( klass_high == 19 )
          {
            *cmdCodeNum += HIDWORD(Item[1].monitor);
          }
          else
          {
            if ( klass_high != 4 )
            {
              if ( klass_high == 1 )
                *itemNum += HIDWORD(Item[1].monitor);
              continue;
            }
            Instance = (DataManager_o *)v27;
            if ( !v27 )
              goto LABEL_25;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v27,
                                          (int32_t)v22[1].monitor,
                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_25;
            IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v26 = servantEquipNum;
            if ( !IsServantEquip )
              v26 = v28;
            *v26 += HIDWORD(v22[1].monitor);
          }
          ++*recordNum;
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SetItemMaster__TryGetEntity(
        SetItemMaster_o *this,
        SetItemEntity_o **entity,
        int32_t id,
        int32_t purchaseType,
        int32_t targetId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B2F8E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
    byte_42B2F8E = 1;
  }
  PK = SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&purchaseType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
}