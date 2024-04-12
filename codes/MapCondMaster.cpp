void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AE6D5 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
    byte_42AE6D5 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    197,
    (const MethodInfo_23E268C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall MapCondMaster__GetAvailableButtons(
        MapCondMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  const MethodInfo *v6; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int32_t v9; // w23
  MapCondEntity_o *v10; // x24
  __int64 v11; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v13; // x20
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42AE6D7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&MapCondEntity_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AE6D7 = 1;
  }
  value = 0;
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v9,
                        (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (MapCondEntity_o *)list;
        v11 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v11
          && *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v11 - 8) == MapCondEntity_TypeInfo
          && *(_DWORD *)(list + 20) == mapId
          && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v5 )
            goto LABEL_24;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v5,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_2F016AC *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_19;
          if ( v10->fields.priority >= value )
            break;
        }
      }
LABEL_21:
      if ( ++v9 >= Count )
        goto LABEL_22;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v5,
      v10->fields.targetId,
      (const MethodInfo_2F01394 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_19:
    list = MapCondEntity__IsOpen(v10, v6);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v5,
        v10->fields.targetId,
        v10->fields.priority,
        (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_21;
  }
LABEL_22:
  if ( !v5 )
LABEL_24:
    sub_B52A5C(list, v6);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v5,
           (const MethodInfo_2EFF6AC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v13 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AE6D3 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
    byte_42AE6D3 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                              PK,
                              (const MethodInfo_23E2728 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v14; // x21
  int32_t v15; // w26
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v17; // x27
  __int64 v18; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v21; // w9
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x0
  __int64 v23; // x10
  int32_t v25; // [xsp+4h] [xbp-5Ch]
  int priority; // [xsp+8h] [xbp-58h]

  if ( (byte_42AE6D6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&MapCondEntity_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AE6D6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_B52A5C(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v25 = qPhase;
    priority = -1;
    v14 = 0LL;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_36;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  list,
                                  v15,
                                  (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v17 = Item;
      v18 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] != MapCondEntity_TypeInfo
        || Item->fields.mapId != mapId
        || Item->fields.changeType != type
        || Item->fields.priority < priority )
      {
        goto LABEL_32;
      }
      if ( !beforeQuest )
      {
LABEL_24:
        if ( MapCondEntity__IsOpen(Item, *(const MethodInfo **)&type) )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !list )
            goto LABEL_36;
          priority = v17->fields.priority;
          v22 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                  list,
                  v15,
                  (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v22
            && (v23 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1), *(&v22->klass->_2.bitflags2 + 1) >= (unsigned int)v23) )
          {
            if ( (MapCondEntity_c *)v22->klass->_2.typeHierarchy[v23 - 1] == MapCondEntity_TypeInfo )
              v14 = v22;
            else
              v14 = 0LL;
          }
          else
          {
            v14 = 0LL;
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
      v21 = v25;
LABEL_23:
      if ( condNum != v21 )
        goto LABEL_24;
LABEL_32:
      if ( ++v15 >= Count )
      {
        if ( v14 )
          return (int32_t)v14[2].klass;
        return defVal;
      }
    }
    if ( condType != 1 )
      goto LABEL_24;
LABEL_20:
    condNum = Item->fields.condTargetId;
    v21 = beforeQuest;
    goto LABEL_23;
  }
  return defVal;
}


System_Collections_Generic_List_int__o *__fastcall MapCondMaster__GetReleasedMapButtonIdList(
        MapCondMaster_o *this,
        int32_t mapId,
        int32_t clearedQuestId,
        int32_t clearedPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x23
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  _DWORD *v15; // x26
  __int64 v16; // x10
  int v17; // w8

  if ( (byte_42AE6D9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&MapCondEntity_TypeInfo);
    byte_42AE6D9 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_24:
    sub_B52A5C(list, v10);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v14,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_22;
      v15 = list;
      v16 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v16
        || *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v16 - 8) != MapCondEntity_TypeInfo
        || *((_DWORD *)list + 5) != mapId
        || !clearedQuestId
        || *((_DWORD *)list + 7) != 1 )
      {
        goto LABEL_22;
      }
      v17 = *((_DWORD *)list + 9);
      if ( v17 == 57 )
        goto LABEL_16;
      if ( v17 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_17:
        if ( !v9 )
          goto LABEL_24;
        if ( !System_Collections_Generic_List_int___Contains(
                v9,
                *((_DWORD *)list + 8),
                (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
          System_Collections_Generic_List_int___Add(
            v9,
            v15[8],
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_22:
      if ( ++v14 >= v13 )
        return v9;
    }
    if ( v17 != 1 )
      goto LABEL_22;
LABEL_16:
    if ( *((_DWORD *)list + 10) == clearedQuestId )
      goto LABEL_17;
    goto LABEL_22;
  }
  return v9;
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

  if ( (byte_42AE6D4 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
    byte_42AE6D4 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  MapCondEntity_o *v13; // x28
  MapCondEntity_o *v14; // x27
  int32_t v15; // w25
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v17; // x26
  __int64 v18; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v21; // w8
  bool result; // w0
  int32_t v23; // [xsp+Ch] [xbp-64h]
  int v24; // [xsp+18h] [xbp-58h]
  int priority; // [xsp+1Ch] [xbp-54h]

  if ( (byte_42AE6D8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&MapCondEntity_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AE6D8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_44:
    sub_B52A5C(list, *(_QWORD *)&mapId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
    return 0;
  v23 = qPhase;
  priority = -1;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v24 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_44;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                list,
                                v15,
                                (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = Item;
      v18 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == MapCondEntity_TypeInfo
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v23 )
                goto LABEL_38;
              break;
            case 1:
LABEL_21:
              if ( Item->fields.condTargetId == beforeQuest )
                goto LABEL_38;
              break;
          }
LABEL_32:
          if ( MapCondEntity__IsOpen(Item, *(const MethodInfo **)&mapId) )
          {
            v13 = v17;
            priority = v17->fields.priority;
          }
          goto LABEL_38;
        }
        if ( Item->fields.priority < v24 )
          goto LABEL_38;
        if ( !beforeQuest )
          goto LABEL_36;
        v21 = Item->fields.condType;
        switch ( v21 )
        {
          case 57:
            goto LABEL_28;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v23 )
              goto LABEL_38;
            break;
          case 1:
LABEL_28:
            if ( Item->fields.condTargetId == beforeQuest )
              goto LABEL_38;
            break;
        }
LABEL_36:
        if ( MapCondEntity__IsOpen(Item, *(const MethodInfo **)&mapId) )
        {
          v14 = v17;
          v24 = v17->fields.priority;
        }
      }
    }
LABEL_38:
    ++v15;
  }
  while ( v15 < Count );
  result = 0;
  if ( v14 )
  {
    if ( v13 )
    {
      result = 1;
      pos->fields.x = (float)v13->fields.targetId;
      pos->fields.y = (float)v14->fields.targetId;
    }
  }
  return result;
}