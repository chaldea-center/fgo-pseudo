void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421302A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__, method);
    byte_421302A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    196,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall MapCondMaster__GetAvailableButtons(
        MapCondMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  int64_t list; // x0
  int32_t Count; // w22
  int32_t v19; // w23
  MapCondEntity_o *v20; // x24
  __int64 v21; // x10
  const MethodInfo *v22; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_int__o *v26; // x20
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_421302C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v10);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&MapCondEntity_TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    byte_421302C = 1;
  }
  value = 0;
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               *(_QWORD *)&mapId,
                                                               method);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v19,
                        (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (MapCondEntity_o *)list;
        v21 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v21
          && *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) == MapCondEntity_TypeInfo
          && *(_DWORD *)(list + 20) == mapId
          && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v16 )
            goto LABEL_24;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v16,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_2E6B464 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_19;
          if ( v20->fields.priority >= value )
            break;
        }
      }
LABEL_21:
      if ( ++v19 >= Count )
        goto LABEL_22;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v16,
      v20->fields.targetId,
      (const MethodInfo_2E6B14C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_19:
    list = MapCondEntity__IsOpen(v20, v22);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v16,
        v20->fields.targetId,
        v20->fields.priority,
        (const MethodInfo_2E69854 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_21;
  }
LABEL_22:
  if ( !v16 )
LABEL_24:
    sub_B0D97C(list);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v16,
           (const MethodInfo_2E69464 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v26 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor_50000796(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  return v26;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4213028 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4213028 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_266A024 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall MapCondMaster__GetPrioredID(
        MapCondMaster_o *this,
        int32_t type,
        int32_t mapId,
        int32_t defVal,
        int32_t beforeQuest,
        int32_t qPhase,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v17; // x21
  int32_t v18; // w26
  MapCondEntity_o *Item; // x0
  const MethodInfo *v20; // x1
  MapCondEntity_o *v21; // x27
  __int64 v22; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v25; // w9
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v26; // x0
  __int64 v27; // x10
  int32_t v29; // [xsp+4h] [xbp-5Ch]
  int priority; // [xsp+8h] [xbp-58h]

  if ( (byte_421302B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12);
    sub_B0D8A4(&MapCondEntity_TypeInfo, v13);
    sub_B0D8A4(&NetworkManager_TypeInfo, v14);
    byte_421302B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v29 = qPhase;
    priority = -1;
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_36;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  list,
                                  v18,
                                  (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v21 = Item;
      v22 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] != MapCondEntity_TypeInfo
        || Item->fields.mapId != mapId
        || Item->fields.changeType != type
        || Item->fields.priority < priority )
      {
        goto LABEL_32;
      }
      if ( !beforeQuest )
      {
LABEL_24:
        if ( MapCondEntity__IsOpen(Item, v20) )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !list )
            goto LABEL_36;
          priority = v21->fields.priority;
          v26 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                  list,
                  v18,
                  (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v26
            && (v27 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1), *(&v26->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
          {
            if ( (MapCondEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] == MapCondEntity_TypeInfo )
              v17 = v26;
            else
              v17 = 0LL;
          }
          else
          {
            v17 = 0LL;
          }
        }
        goto LABEL_32;
      }
      condType = Item->fields.condType;
      if ( condType == 57 )
        goto LABEL_20;
      if ( condType != 46 )
        break;
      if ( Item->fields.condTargetId != beforeQuest )
        goto LABEL_24;
      condNum = Item->fields.condNum;
      v25 = v29;
LABEL_23:
      if ( condNum != v25 )
        goto LABEL_24;
LABEL_32:
      if ( ++v18 >= Count )
      {
        if ( v17 )
          return (int32_t)v17[2].klass;
        return defVal;
      }
    }
    if ( condType != 1 )
      goto LABEL_24;
LABEL_20:
    condNum = Item->fields.condTargetId;
    v25 = beforeQuest;
    goto LABEL_23;
  }
  return defVal;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall MapCondMaster__GetReleasedMapButtonIdList(
        MapCondMaster_o *this,
        int32_t mapId,
        int32_t clearedQuestId,
        int32_t clearedPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *v15; // x23
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w24
  int32_t v19; // w25
  _DWORD *v20; // x26
  __int64 v21; // x10
  int v22; // w8

  if ( (byte_421302E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&MapCondEntity_TypeInfo, v14);
    byte_421302E = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&mapId,
                                                    *(_QWORD *)&clearedQuestId);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_24:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v19,
               (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_22;
      v20 = list;
      v21 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v21
        || *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v21 - 8) != MapCondEntity_TypeInfo
        || *((_DWORD *)list + 5) != mapId
        || !clearedQuestId
        || *((_DWORD *)list + 7) != 1 )
      {
        goto LABEL_22;
      }
      v22 = *((_DWORD *)list + 9);
      if ( v22 == 57 )
        goto LABEL_16;
      if ( v22 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_17:
        if ( !v15 )
          goto LABEL_24;
        if ( !System_Collections_Generic_List_int___Contains(
                v15,
                *((_DWORD *)list + 8),
                (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
          System_Collections_Generic_List_int___Add(
            v15,
            v20[8],
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_22:
      if ( ++v19 >= v18 )
        return v15;
    }
    if ( v22 != 1 )
      goto LABEL_22;
LABEL_16:
    if ( *((_DWORD *)list + 10) == clearedQuestId )
      goto LABEL_17;
    goto LABEL_22;
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapCondMaster__TryGetEntity(
        MapCondMaster_o *this,
        MapCondEntity_o **entity,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4213029 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__, entity);
    byte_4213029 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapCondMaster__TryGetOnMapCameraOffset(
        MapCondMaster_o *this,
        int32_t mapId,
        UnityEngine_Vector3_o *pos,
        int32_t beforeQuest,
        int32_t qPhase,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  MapCondEntity_o *v16; // x28
  MapCondEntity_o *v17; // x27
  int32_t v18; // w25
  MapCondEntity_o *Item; // x0
  const MethodInfo *v20; // x1
  MapCondEntity_o *v21; // x26
  __int64 v22; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v25; // w8
  bool result; // w0
  int32_t v27; // [xsp+Ch] [xbp-64h]
  int v28; // [xsp+18h] [xbp-58h]
  int priority; // [xsp+1Ch] [xbp-54h]

  if ( (byte_421302D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B0D8A4(&MapCondEntity_TypeInfo, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    byte_421302D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_44:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
    return 0;
  v27 = qPhase;
  priority = -1;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v28 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_44;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                list,
                                v18,
                                (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v21 = Item;
      v22 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == MapCondEntity_TypeInfo
        && Item->fields.mapId == mapId )
      {
        changeType = Item->fields.changeType;
        if ( changeType != 6 )
        {
          if ( changeType != 5 || Item->fields.priority < priority )
            goto LABEL_38;
          if ( !beforeQuest )
            goto LABEL_32;
          condType = Item->fields.condType;
          switch ( condType )
          {
            case 57:
              goto LABEL_21;
            case 46:
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v27 )
                goto LABEL_38;
              break;
            case 1:
LABEL_21:
              if ( Item->fields.condTargetId == beforeQuest )
                goto LABEL_38;
              break;
          }
LABEL_32:
          if ( MapCondEntity__IsOpen(Item, v20) )
          {
            v16 = v21;
            priority = v21->fields.priority;
          }
          goto LABEL_38;
        }
        if ( Item->fields.priority < v28 )
          goto LABEL_38;
        if ( !beforeQuest )
          goto LABEL_36;
        v25 = Item->fields.condType;
        switch ( v25 )
        {
          case 57:
            goto LABEL_28;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v27 )
              goto LABEL_38;
            break;
          case 1:
LABEL_28:
            if ( Item->fields.condTargetId == beforeQuest )
              goto LABEL_38;
            break;
        }
LABEL_36:
        if ( MapCondEntity__IsOpen(Item, v20) )
        {
          v17 = v21;
          v28 = v21->fields.priority;
        }
      }
    }
LABEL_38:
    ++v18;
  }
  while ( v18 < Count );
  result = 0;
  if ( v17 )
  {
    if ( v16 )
    {
      result = 1;
      pos->fields.x = (float)v16->fields.targetId;
      pos->fields.y = (float)v17->fields.targetId;
    }
  }
  return result;
}