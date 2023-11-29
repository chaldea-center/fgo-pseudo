void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB5A2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__, method);
    byte_40FB5A2 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    196,
    (const MethodInfo_266F73C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall MapCondMaster__GetAvailableButtons(
        MapCondMaster_o *this,
        int32_t mapId,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_int__int__o *v18; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  int32_t v21; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x0
  int32_t *Item; // x0
  MapCondEntity_o *v24; // x24
  __int64 v25; // x10
  const MethodInfo *v26; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_List_int__o *v32; // x20
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FB5A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&MapCondEntity_TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    byte_40FB5A4 = 1;
  }
  value = 0;
  v18 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               *(_QWORD *)&mapId,
                                                               method,
                                                               v3,
                                                               v4);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v18,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v22 )
        goto LABEL_24;
      Item = (int32_t *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                          v22,
                          v21,
                          (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = (MapCondEntity_o *)Item;
        v25 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) >= (unsigned int)v25
          && *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v25 - 8) == MapCondEntity_TypeInfo
          && Item[5] == mapId
          && Item[7] == 1 )
        {
          if ( !v18 )
            goto LABEL_24;
          if ( !System_Collections_Generic_Dictionary_int__int___TryGetValue(
                  v18,
                  Item[8],
                  &value,
                  (const MethodInfo_2DDEBC4 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__) )
            goto LABEL_19;
          if ( v24->fields.priority >= value )
            break;
        }
      }
LABEL_21:
      if ( ++v21 >= Count )
        goto LABEL_22;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v18,
      v24->fields.targetId,
      (const MethodInfo_2DDE8AC *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_19:
    if ( MapCondEntity__IsOpen(v24, v26) )
      System_Collections_Generic_Dictionary_int__int___Add(
        v18,
        v24->fields.targetId,
        v24->fields.priority,
        (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_21;
  }
LABEL_22:
  if ( !v18 )
LABEL_24:
    sub_B170D4();
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v18,
           (const MethodInfo_2DDCBC4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v32 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v28,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor_49346956(
    v32,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  return v32;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB5A0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_40FB5A0 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                              (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                              PK,
                              (const MethodInfo_266F7D8 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  MapCondEntity_o *Item; // x0
  const MethodInfo *v21; // x1
  MapCondEntity_o *v22; // x27
  __int64 v23; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v26; // w9
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v28; // x0
  __int64 v29; // x10
  int32_t v31; // [xsp+4h] [xbp-5Ch]
  int priority; // [xsp+8h] [xbp-58h]

  if ( (byte_40FB5A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12);
    sub_B16FFC(&MapCondEntity_TypeInfo, v13);
    sub_B16FFC(&NetworkManager_TypeInfo, v14);
    byte_40FB5A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v31 = qPhase;
    priority = -1;
    v17 = 0LL;
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        goto LABEL_36;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  v19,
                                  v18,
                                  (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v22 = Item;
      v23 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] != MapCondEntity_TypeInfo
        || Item->fields.mapId != mapId
        || Item->fields.changeType != type
        || Item->fields.priority < priority )
      {
        goto LABEL_32;
      }
      if ( !beforeQuest )
      {
LABEL_24:
        if ( MapCondEntity__IsOpen(Item, v21) )
        {
          v27 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
          if ( !v27 )
            goto LABEL_36;
          priority = v22->fields.priority;
          v28 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                  v27,
                  v18,
                  (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v28
            && (v29 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1), *(&v28->klass->_2.bitflags2 + 1) >= (unsigned int)v29) )
          {
            if ( (MapCondEntity_c *)v28->klass->_2.typeHierarchy[v29 - 1] == MapCondEntity_TypeInfo )
              v17 = v28;
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
      v26 = v31;
LABEL_23:
      if ( condNum != v26 )
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
    v26 = beforeQuest;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w24
  int32_t v19; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x26
  __int64 v23; // x10
  int klass_high; // w8

  if ( (byte_40FB5A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B16FFC(&MapCondEntity_TypeInfo, v14);
    byte_40FB5A6 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&mapId,
                                                    *(_QWORD *)&clearedQuestId,
                                                    *(_QWORD *)&clearedPhase,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_24:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        goto LABEL_24;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_22;
      v22 = Item;
      v23 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
        || (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] != MapCondEntity_TypeInfo
        || HIDWORD(Item[1].klass) != mapId
        || !clearedQuestId
        || HIDWORD(Item[1].monitor) != 1 )
      {
        goto LABEL_22;
      }
      klass_high = HIDWORD(Item[2].klass);
      if ( klass_high == 57 )
        goto LABEL_16;
      if ( klass_high != 46 )
        break;
      if ( LODWORD(Item[2].monitor) == clearedQuestId && HIDWORD(Item[2].monitor) == clearedPhase )
      {
LABEL_17:
        if ( !v15 )
          goto LABEL_24;
        if ( !System_Collections_Generic_List_int___Contains(
                v15,
                (int32_t)Item[2].klass,
                (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
          System_Collections_Generic_List_int___Add(
            v15,
            (int32_t)v22[2].klass,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_22:
      if ( ++v19 >= v18 )
        return v15;
    }
    if ( klass_high != 1 )
      goto LABEL_22;
LABEL_16:
    if ( LODWORD(Item[2].monitor) == clearedQuestId )
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

  if ( (byte_40FB5A1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__, entity);
    byte_40FB5A1 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  MapCondEntity_o *Item; // x0
  const MethodInfo *v21; // x1
  MapCondEntity_o *v22; // x26
  __int64 v23; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v26; // w8
  bool result; // w0
  int32_t v28; // [xsp+Ch] [xbp-64h]
  int v29; // [xsp+18h] [xbp-58h]
  int priority; // [xsp+1Ch] [xbp-54h]

  if ( (byte_40FB5A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_B16FFC(&MapCondEntity_TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    byte_40FB5A5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_44:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
    return 0;
  v28 = qPhase;
  priority = -1;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v29 = -1;
  do
  {
    v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v19 )
      goto LABEL_44;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                v19,
                                v18,
                                (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v22 = Item;
      v23 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == MapCondEntity_TypeInfo
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v28 )
                goto LABEL_38;
              break;
            case 1:
LABEL_21:
              if ( Item->fields.condTargetId == beforeQuest )
                goto LABEL_38;
              break;
          }
LABEL_32:
          if ( MapCondEntity__IsOpen(Item, v21) )
          {
            v16 = v22;
            priority = v22->fields.priority;
          }
          goto LABEL_38;
        }
        if ( Item->fields.priority < v29 )
          goto LABEL_38;
        if ( !beforeQuest )
          goto LABEL_36;
        v26 = Item->fields.condType;
        switch ( v26 )
        {
          case 57:
            goto LABEL_28;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v28 )
              goto LABEL_38;
            break;
          case 1:
LABEL_28:
            if ( Item->fields.condTargetId == beforeQuest )
              goto LABEL_38;
            break;
        }
LABEL_36:
        if ( MapCondEntity__IsOpen(Item, v21) )
        {
          v17 = v22;
          v29 = v22->fields.priority;
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