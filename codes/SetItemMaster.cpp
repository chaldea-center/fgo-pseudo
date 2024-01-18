void __fastcall SetItemMaster___ctor(SetItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418B949 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__, method);
    byte_418B949 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    115,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string___ctor__);
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

  if ( (byte_418B947 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_418B947 = 1;
  }
  PK = SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&targetId);
  return (SetItemEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_24E4520 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
SetItemEntity_array *__fastcall SetItemMaster__GetList(SetItemMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_418B94B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SetItemEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SetItemEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SetItemEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SetItemEntity__TypeInfo, v9);
    sub_B2C35C(&SetItemEntity_TypeInfo, v10);
    byte_418B94B = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SetItemEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SetItemEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        v16 = *(&SetItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (SetItemEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == SetItemEntity_TypeInfo
          && LODWORD(list->fields.items) == id )
        {
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SetItemEntity__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(list, v12);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (SetItemEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SetItemEntity__ToArray__);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x8
  int32_t Count; // w0
  int32_t v24; // w27
  int32_t i; // w28
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v27; // x26
  __int64 v28; // x10
  int klass_high; // w8
  bool IsServantEquip; // w0
  int32_t *v31; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // [xsp+8h] [xbp-68h]
  int32_t *v33; // [xsp+10h] [xbp-60h]

  if ( (byte_418B94A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, itemNum);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B2C35C(&SetItemEntity_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418B94A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___),
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
        v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
        !list) )
  {
LABEL_25:
    sub_B2C434(Instance, v21);
  }
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  *itemNum = 0;
  v33 = servantNum;
  *servantNum = 0;
  *servantEquipNum = 0;
  *cmdCodeNum = 0;
  *recordNum = 0;
  if ( Count >= 1 )
  {
    v24 = Count;
    for ( i = 0; i < v24; ++i )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        goto LABEL_25;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               i,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v27 = Item;
        v28 = *(&SetItemEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (SetItemEntity_c *)Item->klass->_2.typeHierarchy[v28 - 1] == SetItemEntity_TypeInfo
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
            Instance = (DataManager_o *)v32;
            if ( !v32 )
              goto LABEL_25;
            Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v32,
                                          (int32_t)v27[1].monitor,
                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_25;
            IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
            v31 = servantEquipNum;
            if ( !IsServantEquip )
              v31 = v33;
            *v31 += HIDWORD(v27[1].monitor);
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

  if ( (byte_418B948 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__, entity);
    byte_418B948 = 1;
  }
  PK = SetItemEntity__CreatePK(id, purchaseType, targetId, *(const MethodInfo **)&purchaseType);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_SetItemMaster__SetItemEntity__string__TryGetEntity__);
}