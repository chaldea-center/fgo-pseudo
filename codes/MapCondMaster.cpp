void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B44E17 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__, method);
    byte_4B44E17 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    202,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
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
  System_Collections_Generic_Dictionary_int__int__o *v15; // x21
  const MethodInfo *v16; // x1
  int64_t list; // x0
  int32_t Count; // w22
  int32_t v19; // w23
  MapCondEntity_o *v20; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v22; // x20
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B44E19 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__, *(_QWORD *)&mapId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v10);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor___77024896, v12);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BDB878(&NetworkManager_TypeInfo, v14);
    byte_4B44E19 = 1;
  }
  v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v15,
    (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_21;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v19,
                        (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( list )
      {
        v20 = (MapCondEntity_o *)list;
        if ( *(_DWORD *)(list + 20) == mapId && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v15 )
            goto LABEL_21;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v15,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_3333F00 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_16;
          if ( v20->fields.priority >= value )
            break;
        }
      }
LABEL_18:
      if ( Count == ++v19 )
        goto LABEL_19;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v15,
      v20->fields.targetId,
      (const MethodInfo_3333C20 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_16:
    list = MapCondEntity__IsOpen(v20, v16);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v15,
        v20->fields.targetId,
        v20->fields.priority,
        (const MethodInfo_3332868 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_18;
  }
LABEL_19:
  if ( !v15 )
LABEL_21:
    sub_1BDBAD4(list, v16);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v15,
           (const MethodInfo_333252C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v22 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57378420(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_36B8674 *)Method_System_Collections_Generic_List_int___ctor___77024896);
  return v22;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B44E15 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B44E15 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_32E68F4 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  Il2CppObject *v17; // x27
  int32_t v18; // w26
  int priority; // w20
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v21; // x28
  int32_t condType; // w8
  int32_t v24; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B44E18 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__, *(_QWORD *)&type);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__, v13);
    sub_1BDB878(&NetworkManager_TypeInfo, v14);
    byte_4B44E18 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_28:
    sub_1BDBAD4(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v24 = qPhase;
    v17 = 0LL;
    v18 = 0;
    priority = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_28;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v18,
                                  (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( !Item )
        goto LABEL_24;
      v21 = Item;
      if ( Item->fields.mapId != mapId || Item->fields.changeType != type || Item->fields.priority < priority )
        goto LABEL_24;
      if ( !beforeQuest )
      {
LABEL_21:
        if ( MapCondEntity__IsOpen(Item, *(const MethodInfo **)&type) )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !list )
            goto LABEL_28;
          priority = v21->fields.priority;
          v17 = System_Collections_ObjectModel_Collection_object___get_Item(
                  list,
                  v18,
                  (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
        }
        goto LABEL_24;
      }
      condType = Item->fields.condType;
      if ( condType == 57 )
        goto LABEL_17;
      if ( condType != 46 )
        break;
      if ( Item->fields.condTargetId != beforeQuest || Item->fields.condNum != v24 )
        goto LABEL_21;
LABEL_24:
      if ( Count == ++v18 )
      {
        if ( v17 )
          return (int32_t)v17[2].klass;
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
  System_Collections_Generic_List_int__o *v14; // x23
  __int64 v15; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w24
  int32_t v19; // w25
  unsigned int *v20; // x26
  int v21; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10

  if ( (byte_4B44E1B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__, *(_QWORD *)&mapId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4B44E1B = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_26:
    sub_1BDBAD4(list, v15);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_26;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( !list )
        goto LABEL_24;
      v20 = (unsigned int *)list;
      if ( *((_DWORD *)list + 5) != mapId || !clearedQuestId || *((_DWORD *)list + 7) != 1 )
        goto LABEL_24;
      v21 = *((_DWORD *)list + 9);
      if ( v21 == 57 )
        goto LABEL_14;
      if ( v21 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_15:
        if ( !v14 )
          goto LABEL_26;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v14,
                         *((_DWORD *)list + 8),
                         (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v15 = v20[8];
          items = v14->fields._items;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++v14->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              v15,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v14->fields._size = size + 1;
            items->m_Items[size + 1] = v15;
          }
        }
      }
LABEL_24:
      if ( v18 == ++v19 )
        return v14;
    }
    if ( v21 != 1 )
      goto LABEL_24;
LABEL_14:
    if ( *((_DWORD *)list + 10) == clearedQuestId )
      goto LABEL_15;
    goto LABEL_24;
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MapCondMaster__TryGetEntity(
        MapCondMaster_o *this,
        MapCondEntity_o **entity,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B44E16 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__, entity);
    byte_4B44E16 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  MapCondEntity_o *v15; // x28
  MapCondEntity_o *v16; // x27
  int32_t v17; // w25
  int priority; // w20
  int v19; // w19
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v21; // x26
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v24; // w8
  bool v25; // w9
  bool v26; // w8
  int32_t v28; // [xsp+4h] [xbp-6Ch]
  UnityEngine_Vector3_o *v29; // [xsp+8h] [xbp-68h]

  if ( (byte_4B44E1A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__, *(_QWORD *)&mapId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__, v11);
    sub_1BDB878(&NetworkManager_TypeInfo, v12);
    byte_4B44E1A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_41:
    sub_1BDBAD4(list, *(_QWORD *)&mapId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v26 = 1;
    v25 = 1;
    return !v26 && !v25;
  }
  v28 = qPhase;
  v29 = pos;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  priority = -1;
  v19 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_41;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v17,
                                (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    if ( Item )
    {
      v21 = Item;
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v28 )
                goto LABEL_35;
              break;
            case 1:
LABEL_18:
              if ( Item->fields.condTargetId == beforeQuest )
                goto LABEL_35;
              break;
          }
LABEL_29:
          if ( MapCondEntity__IsOpen(Item, *(const MethodInfo **)&mapId) )
          {
            priority = v21->fields.priority;
            v15 = v21;
          }
          goto LABEL_35;
        }
        if ( Item->fields.priority < v19 )
          goto LABEL_35;
        if ( !beforeQuest )
          goto LABEL_33;
        v24 = Item->fields.condType;
        switch ( v24 )
        {
          case 57:
            goto LABEL_25;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v28 )
              goto LABEL_35;
            break;
          case 1:
LABEL_25:
            if ( Item->fields.condTargetId == beforeQuest )
              goto LABEL_35;
            break;
        }
LABEL_33:
        if ( MapCondEntity__IsOpen(Item, *(const MethodInfo **)&mapId) )
        {
          v19 = v21->fields.priority;
          v16 = v21;
        }
      }
    }
LABEL_35:
    ++v17;
  }
  while ( Count != v17 );
  v25 = v15 == 0LL;
  v26 = v16 == 0LL;
  if ( v16 && v15 )
  {
    v29->fields.x = (float)v15->fields.targetId;
    v29->fields.y = (float)v16->fields.targetId;
  }
  return !v26 && !v25;
}