void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1A4C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
    byte_42B1A4C = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    238,
    (const MethodInfo_23E268C *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
}


void __fastcall ShopGroupMaster__CheckIncludeGroupItemType(
        ShopGroupMaster_o *this,
        int32_t groupId,
        bool *item,
        bool *servant,
        bool *equip,
        bool *quest,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x23
  const MethodInfo *v13; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v15; // x24
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x25
  il2cpp_array_size_t v20; // w28
  ShopGroupEntity_o *v21; // x8
  ShopEntity_o *v22; // x26
  __int64 v23; // x0
  int size; // w26
  __int64 v25; // x28
  unsigned int v26; // w8
  ShopEntity_o *v27; // x24
  int32_t purchaseType; // w8
  bool *v29; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x25

  if ( (byte_42B1A4F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B1A4F = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v13);
  if ( TargetEntityList )
  {
    v15 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ShopMaster___);
      v18 = *(_QWORD *)&v15->max_length;
      if ( (int)v18 >= 1 )
      {
        v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v20 = 0;
        while ( 1 )
        {
          v21 = v15->m_Items[v20];
          if ( !v21 || !v19 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v19,
                                        v21->fields.shopId,
                                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v22 = (ShopEntity_o *)Instance;
            Instance = (DataManager_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)ShopEntity__IsSoldOut(v22, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v12 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v12,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                  (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
              }
            }
          }
          if ( (int)++v20 >= (int)v18 )
            goto LABEL_18;
          if ( v20 >= v15->max_length )
          {
            v23 = sub_B52A88(Instance);
            sub_B52A28(v23, 0LL);
          }
        }
LABEL_38:
        sub_B52A5C(Instance, v17);
      }
LABEL_18:
      if ( v12 )
      {
        size = v12->fields._size;
        if ( size >= 1 )
        {
          v25 = 0LL;
          v26 = v12->fields._size;
          while ( 1 )
          {
            if ( v26 <= (unsigned int)v25 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            v27 = (ShopEntity_o *)v12->fields._items->m_Items[v25];
            if ( !v27 )
              goto LABEL_38;
            purchaseType = v27->fields.purchaseType;
            v29 = item;
            if ( purchaseType != 1 )
            {
              if ( purchaseType == 6 )
              {
                v29 = quest;
              }
              else
              {
                if ( purchaseType != 4 )
                  goto LABEL_36;
                Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_38;
                MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
                Instance = (DataManager_o *)ShopEntity__get_TargetId(v27, 0LL);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_38;
                Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              (int32_t)Instance,
                                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_38;
                Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  v29 = equip;
                else
                  v29 = servant;
              }
            }
            *v29 = 1;
LABEL_36:
            if ( (int)v25 + 1 >= size )
              return;
            v26 = v12->fields._size;
            ++v25;
          }
        }
      }
    }
  }
}


int32_t __fastcall ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  const MethodInfo *v6; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v8; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x21
  il2cpp_array_size_t v13; // w24
  ShopGroupEntity_o *v14; // x8
  ShopEntity_o *v15; // x22
  __int64 v16; // x0

  if ( (byte_42B1A4E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_B52984(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_42B1A4E = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v6);
  if ( TargetEntityList )
  {
    v8 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_22;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ShopMaster___);
    v11 = *(_QWORD *)&v8->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = Master_WarQuestSelectionMaster;
      v13 = 0;
      while ( 1 )
      {
        v14 = v8->m_Items[v13];
        if ( !v14 || !v12 )
LABEL_24:
          sub_B52A5C(Master_WarQuestSelectionMaster, v10);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          v12,
                                                                                          v14->fields.shopId,
                                                                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v15 = (ShopEntity_o *)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__IsAllCondClear(
                                                                                            (ShopEntity_o *)Master_WarQuestSelectionMaster,
                                                                                            0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__IsSoldOut(
                                                                                              v15,
                                                                                              0LL);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
            {
              if ( !v5 )
                goto LABEL_24;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v5,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
            }
          }
        }
        if ( (int)++v13 >= (int)v11 )
          break;
        if ( v13 >= v8->max_length )
        {
          v16 = sub_B52A88(Master_WarQuestSelectionMaster);
          sub_B52A28(v16, 0LL);
        }
      }
    }
    if ( v5 )
      LODWORD(TargetEntityList) = v5->fields._size;
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

  if ( (byte_42B1A4A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
    byte_42B1A4A = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23E2728 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


ShopGroupEntity_array *__fastcall ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w23
  __int64 v10; // x10

  if ( (byte_42B1A4D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
    sub_B52984(&ShopGroupEntity_TypeInfo);
    byte_42B1A4D = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
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
      if ( !list )
        break;
      v6 = list;
      v10 = *(&ShopGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v10
        || (ShopGroupEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] != ShopGroupEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == groupId )
      {
        if ( !v5 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
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
  return (ShopGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
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

  if ( (byte_42B1A4B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
    byte_42B1A4B = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}