void __fastcall ShopGroupMaster___ctor(ShopGroupMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA645 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA645 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    238,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string___ctor__);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x23
  const MethodInfo *v40; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v42; // x24
  DataManager_o *Instance; // x0
  __int64 v44; // x1
  __int64 v45; // x27
  DataMasterBase_WarMaster__WarEntity__int__o *v46; // x25
  il2cpp_array_size_t v47; // w28
  ShopGroupEntity_o *v48; // x8
  ShopEntity_o *v49; // x26
  __int64 v50; // x0
  int size; // w26
  __int64 v52; // x28
  unsigned int v53; // w8
  ShopEntity_o *v54; // x24
  int32_t purchaseType; // w8
  bool *v56; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x25

  if ( (byte_42EA648 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, groupId, (_DWORD)item, servant);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__get_Item__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    byte_42EA648 = 1;
  }
  *item = 0;
  *servant = 0;
  *equip = 0;
  *quest = 0;
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v40);
  if ( TargetEntityList )
  {
    v42 = TargetEntityList;
    if ( *(_QWORD *)&TargetEntityList->max_length )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_38;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
      v45 = *(_QWORD *)&v42->max_length;
      if ( (int)v45 >= 1 )
      {
        v46 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
        v47 = 0;
        while ( 1 )
        {
          v48 = v42->m_Items[v47];
          if ( !v48 || !v46 )
            break;
          Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        v46,
                                        v48->fields.shopId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
          if ( Instance )
          {
            v49 = (ShopEntity_o *)Instance;
            Instance = (DataManager_o *)ShopEntity__IsAllCondClear((ShopEntity_o *)Instance, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)ShopEntity__IsSoldOut(v49, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
              {
                if ( !v39 )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v39,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
              }
            }
          }
          if ( (int)++v47 >= (int)v45 )
            goto LABEL_18;
          if ( v47 >= v42->max_length )
          {
            v50 = sub_B5D6C8(Instance);
            sub_B5D668(v50, 0LL);
          }
        }
LABEL_38:
        sub_B5D69C(Instance, v44);
      }
LABEL_18:
      if ( v39 )
      {
        size = v39->fields._size;
        if ( size >= 1 )
        {
          v52 = 0LL;
          v53 = v39->fields._size;
          while ( 1 )
          {
            if ( v53 <= (unsigned int)v52 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v54 = (ShopEntity_o *)v39->fields._items->m_Items[v52];
            if ( !v54 )
              goto LABEL_38;
            purchaseType = v54->fields.purchaseType;
            v56 = item;
            if ( purchaseType != 1 )
            {
              if ( purchaseType == 6 )
              {
                v56 = quest;
              }
              else
              {
                if ( purchaseType != 4 )
                  goto LABEL_36;
                Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_38;
                MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
                Instance = (DataManager_o *)ShopEntity__get_TargetId(v54, 0LL);
                if ( !MasterData_WarQuestSelectionMaster )
                  goto LABEL_38;
                Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                              MasterData_WarQuestSelectionMaster,
                                              (int32_t)Instance,
                                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !Instance )
                  goto LABEL_38;
                Instance = (DataManager_o *)ServantEntity__get_IsServantEquip((ServantEntity_o *)Instance, 0LL);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  v56 = equip;
                else
                  v56 = servant;
              }
            }
            *v56 = 1;
LABEL_36:
            if ( (int)v52 + 1 >= size )
              return;
            v53 = v39->fields._size;
            ++v52;
          }
        }
      }
    }
  }
}


int32_t __fastcall ShopGroupMaster__GetBuyableCount(ShopGroupMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x19
  const MethodInfo *v25; // x2
  ShopGroupEntity_array *TargetEntityList; // x0
  ShopGroupEntity_array *v27; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v29; // x1
  __int64 v30; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v31; // x21
  il2cpp_array_size_t v32; // w24
  ShopGroupEntity_o *v33; // x8
  ShopEntity_o *v34; // x22
  __int64 v35; // x0

  if ( (byte_42EA647 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, groupId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopEntity__get_Count__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_ShopEntity__TypeInfo, v21, v22, v23);
    byte_42EA647 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  TargetEntityList = ShopGroupMaster__GetTargetEntityList(this, groupId, v25);
  if ( TargetEntityList )
  {
    v27 = TargetEntityList;
    if ( !*(_QWORD *)&TargetEntityList->max_length )
      goto LABEL_22;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
    v30 = *(_QWORD *)&v27->max_length;
    if ( (int)v30 >= 1 )
    {
      v31 = Master_WarQuestSelectionMaster;
      v32 = 0;
      while ( 1 )
      {
        v33 = v27->m_Items[v32];
        if ( !v33 || !v31 )
LABEL_24:
          sub_B5D69C(Master_WarQuestSelectionMaster, v29);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                          v31,
                                                                                          v33->fields.shopId,
                                                                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
        {
          v34 = (ShopEntity_o *)Master_WarQuestSelectionMaster;
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__IsAllCondClear(
                                                                                            (ShopEntity_o *)Master_WarQuestSelectionMaster,
                                                                                            0LL);
          if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          {
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ShopEntity__IsSoldOut(
                                                                                              v34,
                                                                                              0LL);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
            {
              if ( !v24 )
                goto LABEL_24;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v24,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopEntity__Add__);
            }
          }
        }
        if ( (int)++v32 >= (int)v30 )
          break;
        if ( v32 >= v27->max_length )
        {
          v35 = sub_B5D6C8(Master_WarQuestSelectionMaster);
          sub_B5D668(v35, 0LL);
        }
      }
    }
    if ( v24 )
      LODWORD(TargetEntityList) = v24->fields._size;
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

  if ( (byte_42EA643 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__, shopId, groupId, method);
    byte_42EA643 = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&groupId);
  return (ShopGroupEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__GetEntity__);
}


ShopGroupEntity_array *__fastcall ShopGroupMaster__GetTargetEntityList(
        ShopGroupMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v25; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v27; // w22
  int32_t v28; // w23
  __int64 v29; // x10

  if ( (byte_42EA646 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      groupId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopGroupEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopGroupEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_ShopGroupEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ShopGroupEntity_TypeInfo, v21, v22, v23);
    byte_42EA646 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ShopGroupEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ShopGroupEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v27 = (int)list;
    v28 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v28,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v25 = list;
      v29 = *(&ShopGroupEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v29
        || (ShopGroupEntity_c *)list->klass->_2.typeHierarchy[v29 - 1] != ShopGroupEntity_TypeInfo )
      {
        break;
      }
      if ( HIDWORD(list->fields.items) == groupId )
      {
        if ( !v24 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v24,
          (EventMissionProgressRequest_Argument_ProgressData_o *)list,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ShopGroupEntity__Add__);
      }
      if ( ++v28 >= v27 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(list, v25);
  }
LABEL_14:
  if ( !v24 )
    goto LABEL_16;
  return (ShopGroupEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ShopGroupEntity__ToArray__);
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

  if ( (byte_42EA644 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__,
      (_DWORD)entity,
      shopId,
      *(_QWORD *)&groupId);
    byte_42EA644 = 1;
  }
  PK = ShopGroupEntity__CreatePK(shopId, groupId, *(const MethodInfo **)&shopId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ShopGroupMaster__ShopGroupEntity__string__TryGetEntity__);
}