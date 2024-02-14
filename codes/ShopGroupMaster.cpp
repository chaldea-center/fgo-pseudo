void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421609A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__, method);
    byte_421609A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    237,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
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
  DataManager_o *Instance; // x0
  __int64 v26; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x25
  il2cpp_array_size_t v28; // w28
  ShopGroupEntity_o *v29; // x8
  ShopEntity_o *v30; // x26
  __int64 v31; // x0
  int size; // w26
  __int64 v33; // x28
  unsigned int v34; // w8
  ShopEntity_o *v35; // x24
  int32_t purchaseType; // w8
  bool *v37; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x25

  if ( (byte_421609D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ShopMaster___, v12);
    sub_B0D8A4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v13);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v18);
    sub_B0D8A4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_421609D = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  item);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v22);
  if ( TargetEntityList )
  {
    v24 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ShopMaster___);
      v26 = *(_QWORD *)&v24->max_length;
      if ( (int)v26 >= 1 )
      {
        v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v28 = 0;
        while ( 1 )
        {
          v29 = v24->m_Items[v28];
          if ( !v29 || !v27 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v27,
                                        v29->fields.shopId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v30 = (ShopEntity_o *)Instance;
            Instance = (DataManager_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)ShopEntity__IsSoldOut(v30, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v21 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
              }
            }
          }
          if ( (int)++v28 >= (int)v26 )
            goto LABEL_18;
          if ( v28 >= v24->max_length )
          {
            v31 = sub_B0D9A8(Instance);
            sub_B0D948(v31, 0LL);
          }
        }
LABEL_38:
        sub_B0D97C(Instance);
      }
LABEL_18:
      if ( v21 )
      {
        size = v21->fields._size;
        if ( size >= 1 )
        {
          v33 = 0LL;
          v34 = v21->fields._size;
          while ( 1 )
          {
            if ( v34 <= (unsigned int)v33 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v35 = (ShopEntity_o *)v21->fields._items->m_Items[v33];
            if ( !v35 )
              goto LABEL_38;
            purchaseType = v35->fields.purchaseType;
            v37 = item;
            if ( purchaseType != 1 )
            {
              if ( purchaseType == 6 )
              {
                v37 = quest;
              }
              else
              {
                if ( purchaseType != 4 )
                  goto LABEL_36;
                Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_38;
                MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
                Instance = (DataManager_o *)ShopEntity__get_TargetId(v35, 0LL);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_38;
                Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              (int32_t)Instance,
                                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_38;
                Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  v37 = equip;
                else
                  v37 = servant;
              }
            }
            *v37 = 1;
LABEL_36:
            if ( (int)v33 + 1 >= size )
              return;
            v34 = v21->fields._size;
            ++v33;
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  const MethodInfo *v12; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v14; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x21
  il2cpp_array_size_t v18; // w24
  ShopGroupEntity_o *v19; // x8
  ShopEntity_o *v20; // x22
  __int64 v21; // x0

  if ( (byte_421609C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, *(_QWORD *)&groupId);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v10);
    byte_421609C = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ShopEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v12);
  if ( TargetEntityList )
  {
    v14 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_22;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
    v16 = *(_QWORD *)&v14->max_length;
    if ( (int)v16 >= 1 )
    {
      v17 = Master_WarQuestSelectionMaster;
      v18 = 0;
      while ( 1 )
      {
        v19 = v14->m_Items[v18];
        if ( !v19 || !v17 )
LABEL_24:
          sub_B0D97C(Master_WarQuestSelectionMaster);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          v17,
                                                                                          v19->fields.shopId,
                                                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v20 = (ShopEntity_o *)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__IsAllCondClear(
                                                                                            (ShopEntity_o *)Master_WarQuestSelectionMaster,
                                                                                            0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__IsSoldOut(
                                                                                              v20,
                                                                                              0LL);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
            {
              if ( !v11 )
                goto LABEL_24;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v11,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
            }
          }
        }
        if ( (int)++v18 >= (int)v16 )
          break;
        if ( v18 >= v14->max_length )
        {
          v21 = sub_B0D9A8(Master_WarQuestSelectionMaster);
          sub_B0D948(v21, 0LL);
        }
      }
    }
    if ( v11 )
      LODWORD(TargetEntityList) = v11->fields._size;
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

  if ( (byte_4216098 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_4216098 = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266A024 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ShopGroupEntity_array *__fastcall ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w23
  __int64 v15; // x10

  if ( (byte_421609B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo, v9);
    sub_B0D8A4(&ShopGroupEntity_TypeInfo, v10);
    byte_421609B = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ShopGroupEntity__TypeInfo,
                                                                                                  *(_QWORD *)&groupId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = *(&ShopGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (ShopGroupEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != ShopGroupEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == groupId )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
      }
      if ( ++v14 >= v13 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(list);
  }
LABEL_14:
  if ( !v11 )
    goto LABEL_16;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
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

  if ( (byte_4216099 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__, entity);
    byte_4216099 = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}