void MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43465 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
    byte_4C43465 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    202,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *MapCondMaster__GetAvailableButtons(
        MapCondMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  int64_t list; // x0
  int32_t Count; // w22
  int32_t v8; // w23
  MapCondEntity_o *v9; // x24
  const MethodInfo *v10; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C43467 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43467 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0);
  value = -1;
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_21;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( list )
      {
        v9 = (MapCondEntity_o *)list;
        if ( *(_DWORD *)(list + 20) == mapId && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v5 )
            goto LABEL_21;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v5,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_33F3164 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_16;
          if ( v9->fields.priority >= value )
            break;
        }
      }
LABEL_18:
      if ( Count == ++v8 )
        goto LABEL_19;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v5,
      v9->fields.targetId,
      (const MethodInfo_33F2E84 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_16:
    list = MapCondEntity__IsOpen(v9, v10);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v5,
        v9->fields.targetId,
        v9->fields.priority,
        (const MethodInfo_33F1ACC *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_18;
  }
LABEL_19:
  if ( !v5 )
LABEL_21:
    sub_1C372B4(list);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v5,
           (const MethodInfo_33F1790 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
  return v12;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *MapCondMaster__GetEntity(MapCondMaster_o *this, int32_t id, int32_t mapId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C43463 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
    byte_4C43463 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_33A5B58 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
}


int32_t MapCondMaster__GetPrioredID(
        MapCondMaster_o *this,
        int32_t type,
        int32_t mapId,
        int32_t defVal,
        int32_t beforeQuest,
        int32_t qPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  Il2CppObject *v15; // x27
  int32_t v16; // w26
  int priority; // w20
  MapCondEntity_o *Item; // x0
  const MethodInfo *v19; // x1
  MapCondEntity_o *v20; // x28
  int32_t condType; // w8
  int32_t v23; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C43466 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43466 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_28:
    sub_1C372B4(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v23 = qPhase;
    v15 = 0;
    v16 = 0;
    priority = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_28;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v16,
                                  (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( !Item )
        goto LABEL_24;
      v20 = Item;
      if ( Item->fields.mapId != mapId || Item->fields.changeType != type || Item->fields.priority < priority )
        goto LABEL_24;
      if ( !beforeQuest )
      {
LABEL_21:
        if ( MapCondEntity__IsOpen(Item, v19) )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !list )
            goto LABEL_28;
          priority = v20->fields.priority;
          v15 = System_Collections_ObjectModel_Collection_object___get_Item(
                  list,
                  v16,
                  (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
        }
        goto LABEL_24;
      }
      condType = Item->fields.condType;
      if ( condType == 57 )
        goto LABEL_17;
      if ( condType != 46 )
        break;
      if ( Item->fields.condTargetId != beforeQuest || Item->fields.condNum != v23 )
        goto LABEL_21;
LABEL_24:
      if ( Count == ++v16 )
      {
        if ( v15 )
          return (int32_t)v15[2].klass;
        return defVal;
      }
    }
    if ( condType != 1 )
      goto LABEL_21;
LABEL_17:
    if ( Item->fields.condTargetId != beforeQuest )
      goto LABEL_21;
    goto LABEL_24;
  }
  return defVal;
}


System_Collections_Generic_List_int__o *MapCondMaster__GetReleasedMapButtonIdList(
        MapCondMaster_o *this,
        int32_t mapId,
        int32_t clearedQuestId,
        int32_t clearedPhase,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x23
  void *list; // x0
  int32_t Count; // w0
  int32_t v12; // w24
  int32_t v13; // w25
  _DWORD *v14; // x26
  int v15; // w8
  int32_t v16; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4C43469 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C43469 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_26:
    sub_1C372B4(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v12 = Count;
    v13 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_26;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v13,
               (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( !list )
        goto LABEL_24;
      v14 = list;
      if ( *((_DWORD *)list + 5) != mapId || !clearedQuestId || *((_DWORD *)list + 7) != 1 )
        goto LABEL_24;
      v15 = *((_DWORD *)list + 9);
      if ( v15 == 57 )
        goto LABEL_14;
      if ( v15 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_15:
        if ( !v9 )
          goto LABEL_26;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v9,
                         *((_DWORD *)list + 8),
                         (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v16 = v14[8];
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              v16,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = v16;
          }
        }
      }
LABEL_24:
      if ( v12 == ++v13 )
        return v9;
    }
    if ( v15 != 1 )
      goto LABEL_24;
LABEL_14:
    if ( *((_DWORD *)list + 10) == clearedQuestId )
      goto LABEL_15;
    goto LABEL_24;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool MapCondMaster__TryGetEntity(
        MapCondMaster_o *this,
        MapCondEntity_o **entity,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C43464 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
    byte_4C43464 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
}


bool MapCondMaster__TryGetOnMapCameraOffset(
        MapCondMaster_o *this,
        int32_t mapId,
        UnityEngine_Vector3_o *pos,
        int32_t beforeQuest,
        int32_t qPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  MapCondEntity_o *v13; // x28
  MapCondEntity_o *v14; // x27
  int32_t v15; // w25
  int priority; // w20
  int v17; // w19
  MapCondEntity_o *Item; // x0
  const MethodInfo *v19; // x1
  MapCondEntity_o *v20; // x26
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v23; // w8
  bool v24; // w9
  bool v25; // w8
  int32_t v27; // [xsp+4h] [xbp-6Ch]
  UnityEngine_Vector3_o *v28; // [xsp+8h] [xbp-68h]

  if ( (byte_4C43468 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C43468 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_41:
    sub_1C372B4(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0);
  if ( Count < 1 )
  {
    v25 = 1;
    v24 = 1;
    return !v25 && !v24;
  }
  v27 = qPhase;
  v28 = pos;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  priority = -1;
  v17 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_41;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v15,
                                (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    if ( Item )
    {
      v20 = Item;
      if ( Item->fields.mapId == mapId )
      {
        changeType = Item->fields.changeType;
        if ( changeType != 6 )
        {
          if ( changeType != 5 || Item->fields.priority < priority )
            goto LABEL_35;
          if ( !beforeQuest )
            goto LABEL_29;
          condType = Item->fields.condType;
          switch ( condType )
          {
            case 57:
              goto LABEL_18;
            case 46:
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v27 )
                goto LABEL_35;
              break;
            case 1:
LABEL_18:
              if ( Item->fields.condTargetId == beforeQuest )
                goto LABEL_35;
              break;
          }
LABEL_29:
          if ( MapCondEntity__IsOpen(Item, v19) )
          {
            priority = v20->fields.priority;
            v13 = v20;
          }
          goto LABEL_35;
        }
        if ( Item->fields.priority < v17 )
          goto LABEL_35;
        if ( !beforeQuest )
          goto LABEL_33;
        v23 = Item->fields.condType;
        switch ( v23 )
        {
          case 57:
            goto LABEL_25;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v27 )
              goto LABEL_35;
            break;
          case 1:
LABEL_25:
            if ( Item->fields.condTargetId == beforeQuest )
              goto LABEL_35;
            break;
        }
LABEL_33:
        if ( MapCondEntity__IsOpen(Item, v19) )
        {
          v17 = v20->fields.priority;
          v14 = v20;
        }
      }
    }
LABEL_35:
    ++v15;
  }
  while ( Count != v15 );
  v24 = v13 == 0;
  v25 = v14 == 0;
  if ( v14 && v13 )
  {
    v28->fields.x = (float)v13->fields.targetId;
    v28->fields.y = (float)v14->fields.targetId;
  }
  return !v25 && !v24;
}