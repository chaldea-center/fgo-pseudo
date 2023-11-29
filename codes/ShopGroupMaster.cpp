void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB723 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__, method);
    byte_40FB723 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    237,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ShopGroupMaster__CheckIncludeGroupItemType(
        ShopGroupMaster_o *this,
        int32_t groupId,
        bool *item,
        bool *servant,
        bool *equip,
        bool *quest,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x23
  const MethodInfo *v22; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v24; // x24
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v27; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x25
  il2cpp_array_size_t v29; // w28
  ShopGroupEntity_o *v30; // x8
  WarEntity_o *Entity; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  ShopEntity_o *v34; // x26
  int size; // w26
  __int64 v36; // x28
  unsigned int v37; // w8
  ShopEntity_o *v38; // x24
  int32_t purchaseType; // w8
  bool *v40; // x9
  WebViewManager_o *v41; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v42; // x25
  int32_t TargetId; // w0
  ServantEntity_o *v44; // x0

  if ( (byte_40FB726 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v12);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v13);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v18);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_40FB726 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  item,
                                                                                                  servant,
                                                                                                  equip);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v22);
  if ( TargetEntityList )
  {
    v24 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
      v27 = *(_QWORD *)&v24->max_length;
      if ( (int)v27 >= 1 )
      {
        v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
        v29 = 0;
        while ( 1 )
        {
          v30 = v24->m_Items[v29];
          if ( !v30 || !v28 )
            break;
          Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v28,
                     v30->fields.shopId,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Entity )
          {
            v34 = (ShopEntity_o *)Entity;
            Entity = (WarEntity_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Entity, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
            {
              Entity = (WarEntity_o *)ShopEntity__IsSoldOut(v34, 0LL);
              if ( ((unsigned __int8)Entity & 1) == 0 )
              {
                if ( !v21 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
              }
            }
          }
          if ( (int)++v29 >= (int)v27 )
            goto LABEL_18;
          if ( v29 >= v24->max_length )
          {
            sub_B17100(Entity, v32, v33);
            sub_B170A0();
          }
        }
LABEL_38:
        sub_B170D4();
      }
LABEL_18:
      if ( v21 )
      {
        size = v21->fields._size;
        if ( size >= 1 )
        {
          v36 = 0LL;
          v37 = v21->fields._size;
          while ( 1 )
          {
            if ( v37 <= (unsigned int)v36 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v38 = (ShopEntity_o *)v21->fields._items->m_Items[v36];
            if ( !v38 )
              goto LABEL_38;
            purchaseType = v38->fields.purchaseType;
            v40 = item;
            if ( purchaseType != 1 )
            {
              if ( purchaseType == 6 )
              {
                v40 = quest;
              }
              else
              {
                if ( purchaseType != 4 )
                  goto LABEL_36;
                v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !v41 )
                  goto LABEL_38;
                v42 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)v41,
                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
                TargetId = ShopEntity__get_TargetId(v38, 0LL);
                if ( !v42 )
                  goto LABEL_38;
                v44 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           v42,
                                           TargetId,
                                           (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !v44 )
                  goto LABEL_38;
                if ( ServantEntity__get_IsServantEquip(v44, 0LL) )
                  v40 = equip;
                else
                  v40 = servant;
              }
            }
            *v40 = 1;
LABEL_36:
            if ( (int)v36 + 1 >= size )
              return;
            v37 = v21->fields._size;
            ++v36;
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  const MethodInfo *v14; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v16; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x21
  il2cpp_array_size_t v20; // w24
  ShopGroupEntity_o *v21; // x8
  WarEntity_o *Entity; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  ShopEntity_o *v25; // x22

  if ( (byte_40FB725 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, *(_QWORD *)&groupId);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v11);
    sub_B16FFC(&System_Collections_Generic_List_ShopEntity__TypeInfo, v12);
    byte_40FB725 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v14);
  if ( TargetEntityList )
  {
    v16 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_22;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
    v18 = *(_QWORD *)&v16->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
      v20 = 0;
      while ( 1 )
      {
        v21 = v16->m_Items[v20];
        if ( !v21 || !v19 )
LABEL_24:
          sub_B170D4();
        Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   v19,
                   v21->fields.shopId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Entity )
        {
          v25 = (ShopEntity_o *)Entity;
          Entity = (WarEntity_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Entity, 0LL);
          if ( ((unsigned __int8)Entity & 1) != 0 )
          {
            Entity = (WarEntity_o *)ShopEntity__IsSoldOut(v25, 0LL);
            if ( ((unsigned __int8)Entity & 1) == 0 )
            {
              if ( !v13 )
                goto LABEL_24;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v13,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
            }
          }
        }
        if ( (int)++v20 >= (int)v18 )
          break;
        if ( v20 >= v16->max_length )
        {
          sub_B17100(Entity, v23, v24);
          sub_B170A0();
        }
      }
    }
    if ( v13 )
      LODWORD(TargetEntityList) = v13->fields._size;
    else
LABEL_22:
      LODWORD(TargetEntityList) = 0;
  }
  return (int)TargetEntityList;
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_o *__fastcall ShopGroupMaster__GetEntity(
        ShopGroupMaster_o *this,
        int32_t shopId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB721 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_40FB721 = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_array *__fastcall ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w22
  int32_t v17; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Item; // x0
  __int64 v20; // x10

  if ( (byte_40FB724 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo, v11);
    sub_B16FFC(&ShopGroupEntity_TypeInfo, v12);
    byte_40FB724 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ShopGroupEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                      v18,
                                                                      v17,
                                                                      (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v20 = *(&ShopGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (ShopGroupEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] != ShopGroupEntity_TypeInfo )
      {
        break;
      }
      if ( Item->fields.missionConditionDetailId == groupId )
      {
        if ( !v13 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          Item,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
      }
      if ( ++v17 >= v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v13 )
    goto LABEL_16;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ShopGroupMaster__TryGetEntity(
        ShopGroupMaster_o *this,
        ShopGroupEntity_o **entity,
        int32_t shopId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FB722 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__, entity);
    byte_40FB722 = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}