void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E72F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E72F8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    197,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *__fastcall MapCondMaster__GetAvailableButtons(
        MapCondMaster_o *this,
        int32_t mapId,
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
  System_Collections_Generic_Dictionary_int__int__o *v39; // x21
  const MethodInfo *v40; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int32_t v43; // w23
  MapCondEntity_o *v44; // x24
  __int64 v45; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v47; // x20
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E72FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, mapId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&MapCondEntity_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&NetworkManager_TypeInfo, v36, v37, v38);
    byte_42E72FA = 1;
  }
  value = 0;
  v39 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v39,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  list = NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = (int64_t)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                        (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                        v43,
                        (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v44 = (MapCondEntity_o *)list;
        v45 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) >= (unsigned int)v45
          && *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) == MapCondEntity_TypeInfo
          && *(_DWORD *)(list + 20) == mapId
          && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v39 )
            goto LABEL_24;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v39,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_2F0CA68 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_19;
          if ( v44->fields.priority >= value )
            break;
        }
      }
LABEL_21:
      if ( ++v43 >= Count )
        goto LABEL_22;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v39,
      v44->fields.targetId,
      (const MethodInfo_2F0C750 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_19:
    list = MapCondEntity__IsOpen(v44, v40);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v39,
        v44->fields.targetId,
        v44->fields.priority,
        (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_21;
  }
LABEL_22:
  if ( !v39 )
LABEL_24:
    sub_B5D69C(list, v40);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v39,
           (const MethodInfo_2F0AA68 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v47 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v47,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  return v47;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E72F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__, id, mapId, method);
    byte_42E72F6 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                              (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                              PK,
                              (const MethodInfo_23FB260 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  int32_t v8; // w19
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w25
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v23; // x21
  int32_t v24; // w26
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v26; // x27
  __int64 v27; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v30; // w9
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x0
  __int64 v32; // x10
  int32_t v34; // [xsp+4h] [xbp-5Ch]
  int priority; // [xsp+8h] [xbp-58h]

  v8 = defVal;
  if ( (byte_42E72F9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      type,
      mapId,
      *(_QWORD *)&defVal);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12, v13, v14);
    sub_B5D5C4(&MapCondEntity_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_TypeInfo, v18, v19, v20);
    byte_42E72F9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_B5D69C(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v34 = qPhase;
    priority = -1;
    v23 = 0LL;
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_36;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                  list,
                                  v24,
                                  (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v26 = Item;
      v27 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v27
        || (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] != MapCondEntity_TypeInfo
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
          priority = v26->fields.priority;
          v31 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                  list,
                  v24,
                  (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v31
            && (v32 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1), *(&v31->klass->_2.bitflags2 + 1) >= (unsigned int)v32) )
          {
            if ( (MapCondEntity_c *)v31->klass->_2.typeHierarchy[v32 - 1] == MapCondEntity_TypeInfo )
              v23 = v31;
            else
              v23 = 0LL;
          }
          else
          {
            v23 = 0LL;
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
      v30 = v34;
LABEL_23:
      if ( condNum != v30 )
        goto LABEL_24;
LABEL_32:
      if ( ++v24 >= Count )
      {
        if ( v23 )
          return (int32_t)v23[2].klass;
        return v8;
      }
    }
    if ( condType != 1 )
      goto LABEL_24;
LABEL_20:
    condNum = Item->fields.condTargetId;
    v30 = beforeQuest;
    goto LABEL_23;
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall MapCondMaster__GetReleasedMapButtonIdList(
        MapCondMaster_o *this,
        int32_t mapId,
        int32_t clearedQuestId,
        int32_t clearedPhase,
        const MethodInfo *method)
{
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_int__o *v27; // x23
  __int64 v28; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v31; // w24
  int32_t v32; // w25
  _DWORD *v33; // x26
  __int64 v34; // x10
  int v35; // w8

  if ( (byte_42E72FC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      mapId,
      clearedQuestId,
      *(_QWORD *)&clearedPhase);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&MapCondEntity_TypeInfo, v24, v25, v26);
    byte_42E72FC = 1;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = this->fields.list;
  if ( !list )
LABEL_24:
    sub_B5D69C(list, v28);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_24;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v32,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_22;
      v33 = list;
      v34 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v34
        || *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v34 - 8) != MapCondEntity_TypeInfo
        || *((_DWORD *)list + 5) != mapId
        || !clearedQuestId
        || *((_DWORD *)list + 7) != 1 )
      {
        goto LABEL_22;
      }
      v35 = *((_DWORD *)list + 9);
      if ( v35 == 57 )
        goto LABEL_16;
      if ( v35 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_17:
        if ( !v27 )
          goto LABEL_24;
        if ( !System_Collections_Generic_List_int___Contains(
                v27,
                *((_DWORD *)list + 8),
                (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
          System_Collections_Generic_List_int___Add(
            v27,
            v33[8],
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
LABEL_22:
      if ( ++v32 >= v31 )
        return v27;
    }
    if ( v35 != 1 )
      goto LABEL_22;
LABEL_16:
    if ( *((_DWORD *)list + 10) == clearedQuestId )
      goto LABEL_17;
    goto LABEL_22;
  }
  return v27;
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

  if ( (byte_42E72F7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&mapId);
    byte_42E72F7 = 1;
  }
  PK = MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w24
  MapCondEntity_o *v22; // x28
  MapCondEntity_o *v23; // x27
  int32_t v24; // w25
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v26; // x26
  __int64 v27; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v30; // w8
  bool result; // w0
  int32_t v32; // [xsp+Ch] [xbp-64h]
  int v33; // [xsp+18h] [xbp-58h]
  int priority; // [xsp+1Ch] [xbp-54h]

  if ( (byte_42E72FB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      mapId,
      (_DWORD)pos,
      *(_QWORD *)&beforeQuest);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12, v13);
    sub_B5D5C4(&MapCondEntity_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    byte_42E72FB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_44:
    sub_B5D69C(list, *(_QWORD *)&mapId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
    return 0;
  v32 = qPhase;
  priority = -1;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  v33 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_44;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                list,
                                v24,
                                (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v26 = Item;
      v27 = *(&MapCondEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v27
        && (MapCondEntity_c *)Item->klass->_2.typeHierarchy[v27 - 1] == MapCondEntity_TypeInfo
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v32 )
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
            v22 = v26;
            priority = v26->fields.priority;
          }
          goto LABEL_38;
        }
        if ( Item->fields.priority < v33 )
          goto LABEL_38;
        if ( !beforeQuest )
          goto LABEL_36;
        v30 = Item->fields.condType;
        switch ( v30 )
        {
          case 57:
            goto LABEL_28;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v32 )
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
          v23 = v26;
          v33 = v26->fields.priority;
        }
      }
    }
LABEL_38:
    ++v24;
  }
  while ( v24 < Count );
  result = 0;
  if ( v23 )
  {
    if ( v22 )
    {
      result = 1;
      pos->fields.x = (float)v22->fields.targetId;
      pos->fields.y = (float)v23->fields.targetId;
    }
  }
  return result;
}