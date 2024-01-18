void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418915F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__, method);
    byte_418915F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    237,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
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
  __int64 v26; // x1
  __int64 v27; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v28; // x25
  il2cpp_array_size_t v29; // w28
  ShopGroupEntity_o *v30; // x8
  ShopEntity_o *v31; // x26
  __int64 v32; // x0
  int size; // w26
  __int64 v34; // x28
  unsigned int v35; // w8
  ShopEntity_o *v36; // x24
  int32_t purchaseType; // w8
  bool *v38; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x25

  if ( (byte_4189162 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_DataManager_GetMasterData_ShopMaster___, v12);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v13);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4189162 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v22);
  if ( TargetEntityList )
  {
    v24 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ShopMaster___);
      v27 = *(_QWORD *)&v24->max_length;
      if ( (int)v27 >= 1 )
      {
        v28 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v29 = 0;
        while ( 1 )
        {
          v30 = v24->m_Items[v29];
          if ( !v30 || !v28 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v28,
                                        v30->fields.shopId,
                                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v31 = (ShopEntity_o *)Instance;
            Instance = (DataManager_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)ShopEntity__IsSoldOut(v31, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v21 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v21,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
              }
            }
          }
          if ( (int)++v29 >= (int)v27 )
            goto LABEL_18;
          if ( v29 >= v24->max_length )
          {
            v32 = sub_B2C460(Instance);
            sub_B2C400(v32, 0LL);
          }
        }
LABEL_38:
        sub_B2C434(Instance, v26);
      }
LABEL_18:
      if ( v21 )
      {
        size = v21->fields._size;
        if ( size >= 1 )
        {
          v34 = 0LL;
          v35 = v21->fields._size;
          while ( 1 )
          {
            if ( v35 <= (unsigned int)v34 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v36 = (ShopEntity_o *)v21->fields._items->m_Items[v34];
            if ( !v36 )
              goto LABEL_38;
            purchaseType = v36->fields.purchaseType;
            v38 = item;
            if ( purchaseType != 1 )
            {
              if ( purchaseType == 6 )
              {
                v38 = quest;
              }
              else
              {
                if ( purchaseType != 4 )
                  goto LABEL_36;
                Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_38;
                MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
                Instance = (DataManager_o *)ShopEntity__get_TargetId(v36, 0LL);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_38;
                Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              (int32_t)Instance,
                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_38;
                Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  v38 = equip;
                else
                  v38 = servant;
              }
            }
            *v38 = 1;
LABEL_36:
            if ( (int)v34 + 1 >= size )
              return;
            v35 = v21->fields._size;
            ++v34;
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
  __int64 v16; // x1
  __int64 v17; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v18; // x21
  il2cpp_array_size_t v19; // w24
  ShopGroupEntity_o *v20; // x8
  ShopEntity_o *v21; // x22
  __int64 v22; // x0

  if ( (byte_4189161 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, *(_QWORD *)&groupId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v9);
    sub_B2C35C(&System_Collections_Generic_List_ShopEntity__TypeInfo, v10);
    byte_4189161 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v12);
  if ( TargetEntityList )
  {
    v14 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_22;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
    v17 = *(_QWORD *)&v14->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = Master_WarQuestSelectionMaster;
      v19 = 0;
      while ( 1 )
      {
        v20 = v14->m_Items[v19];
        if ( !v20 || !v18 )
LABEL_24:
          sub_B2C434(Master_WarQuestSelectionMaster, v16);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          v18,
                                                                                          v20->fields.shopId,
                                                                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v21 = (ShopEntity_o *)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__IsAllCondClear(
                                                                                            (ShopEntity_o *)Master_WarQuestSelectionMaster,
                                                                                            0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__IsSoldOut(
                                                                                              v21,
                                                                                              0LL);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
            {
              if ( !v11 )
                goto LABEL_24;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v11,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
            }
          }
        }
        if ( (int)++v19 >= (int)v17 )
          break;
        if ( v19 >= v14->max_length )
        {
          v22 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v22, 0LL);
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

  if ( (byte_418915D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__, *(_QWORD *)&shopId);
    byte_418915D = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w23
  __int64 v16; // x10

  if ( (byte_4189160 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo, v9);
    sub_B2C35C(&ShopGroupEntity_TypeInfo, v10);
    byte_4189160 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
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
      if ( !list )
        break;
      v12 = list;
      v16 = *(&ShopGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (ShopGroupEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != ShopGroupEntity_TypeInfo )
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
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
  return (ShopGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
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

  if ( (byte_418915E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__, entity);
    byte_418915E = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}