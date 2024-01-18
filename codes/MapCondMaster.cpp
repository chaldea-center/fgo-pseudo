void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186348 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__, method);
    byte_4186348 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    196,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
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
  const MethodInfo *v17; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int32_t v20; // w23
  MapCondEntity_o *v21; // x24
  __int64 v22; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v24; // x20
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_418634A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&MapCondEntity_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    byte_418634A = 1;
  }
  value = 0;
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v20,
                        (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = (MapCondEntity_o *)list;
        v22 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v22
          && *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) == MapCondEntity_TypeInfo
          && *(_DWORD *)(list + 20) == mapId
          && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v16 )
            goto LABEL_24;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v16,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_2E26150 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_19;
          if ( v21->fields.priority >= value )
            break;
        }
      }
LABEL_21:
      if ( ++v20 >= Count )
        goto LABEL_22;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v16,
      v21->fields.targetId,
      (const MethodInfo_2E25E38 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_19:
    list = MapCondEntity__IsOpen(v21, v17);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v16,
        v21->fields.targetId,
        v21->fields.priority,
        (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_21;
  }
LABEL_22:
  if ( !v16 )
LABEL_24:
    sub_B2C434(list, v17);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v16,
           (const MethodInfo_2E24150 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v24 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  return v24;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186346 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4186346 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_24E4520 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  MapCondEntity_o *v20; // x27
  __int64 v21; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v24; // w9
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v25; // x0
  __int64 v26; // x10
  int32_t v28; // [xsp+4h] [xbp-5Ch]
  int priority; // [xsp+8h] [xbp-58h]

  if ( (byte_4186349 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12);
    sub_B2C35C(&MapCondEntity_TypeInfo, v13);
    sub_B2C35C(&NetworkManager_TypeInfo, v14);
    byte_4186349 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_B2C434(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v28 = qPhase;
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
                                  (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v20 = Item;
      v21 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] != MapCondEntity_TypeInfo
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
          priority = v20->fields.priority;
          v25 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                  list,
                  v18,
                  (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v25
            && (v26 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1), *(&v25->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
          {
            if ( (MapCondEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] == MapCondEntity_TypeInfo )
              v17 = v25;
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
      v24 = v28;
LABEL_23:
      if ( condNum != v24 )
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
    v24 = beforeQuest;
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
  __int64 v16; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v19; // w24
  int32_t v20; // w25
  _DWORD *v21; // x26
  __int64 v22; // x10
  int v23; // w8

  if ( (byte_418634C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&MapCondEntity_TypeInfo, v14);
    byte_418634C = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_24:
    sub_B2C434(list, v16);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v20,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_22;
      v21 = list;
      v22 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v22
        || *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) != MapCondEntity_TypeInfo
        || *((_DWORD *)list + 5) != mapId
        || !clearedQuestId
        || *((_DWORD *)list + 7) != 1 )
      {
        goto LABEL_22;
      }
      v23 = *((_DWORD *)list + 9);
      if ( v23 == 57 )
        goto LABEL_16;
      if ( v23 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_17:
        if ( !v15 )
          goto LABEL_24;
        if ( !System_Collections_Generic_List_int___Contains(
                v15,
                *((_DWORD *)list + 8),
                (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
          System_Collections_Generic_List_int___Add(
            v15,
            v21[8],
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_22:
      if ( ++v20 >= v19 )
        return v15;
    }
    if ( v23 != 1 )
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

  if ( (byte_4186347 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__, entity);
    byte_4186347 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  MapCondEntity_o *v20; // x26
  __int64 v21; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v24; // w8
  bool result; // w0
  int32_t v26; // [xsp+Ch] [xbp-64h]
  int v27; // [xsp+18h] [xbp-58h]
  int priority; // [xsp+1Ch] [xbp-54h]

  if ( (byte_418634B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B2C35C(&MapCondEntity_TypeInfo, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    byte_418634B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_44:
    sub_B2C434(list, *(_QWORD *)&mapId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
    return 0;
  v26 = qPhase;
  priority = -1;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v27 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_44;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                list,
                                v18,
                                (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = Item;
      v21 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == MapCondEntity_TypeInfo
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v26 )
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
            v16 = v20;
            priority = v20->fields.priority;
          }
          goto LABEL_38;
        }
        if ( Item->fields.priority < v27 )
          goto LABEL_38;
        if ( !beforeQuest )
          goto LABEL_36;
        v24 = Item->fields.condType;
        switch ( v24 )
        {
          case 57:
            goto LABEL_28;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v26 )
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
          v17 = v20;
          v27 = v20->fields.priority;
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