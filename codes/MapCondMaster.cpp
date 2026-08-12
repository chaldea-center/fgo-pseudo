void MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970D36 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
    byte_5970D36 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    204,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *MapCondMaster__GetAvailableButtons(
        MapCondMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  const MethodInfo *v6; // x1
  int64_t list; // x0
  __int64 v8; // x1
  int32_t Count; // w22
  int32_t v10; // w23
  MapCondEntity_o *v11; // x24
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v13; // x20
  int32_t value; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5970D38 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor___91653480);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970D38 = 1;
  }
  value = 0;
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  list = NetworkManager__getTime(0);
  value = -1;
  if ( Count >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_21;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v10,
                        (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( list )
      {
        v11 = (MapCondEntity_o *)list;
        if ( *(_DWORD *)(list + 20) == mapId && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v5 )
            goto LABEL_21;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v5,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_3F9458C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_16;
          if ( v11->fields.priority >= value )
            break;
        }
      }
LABEL_18:
      if ( Count == ++v10 )
        goto LABEL_19;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v5,
      v11->fields.targetId,
      (const MethodInfo_3F93FF4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_16:
    list = MapCondEntity__IsOpen(v11, v6);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v5,
        v11->fields.targetId,
        v11->fields.priority,
        (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_18;
  }
LABEL_19:
  if ( !v5 )
LABEL_21:
    sub_2213CDC(list, v6);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v5,
           (const MethodInfo_3F928CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v13 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71723804(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_4466B1C *)Method_System_Collections_Generic_List_int___ctor___91653480);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *MapCondMaster__GetEntity(MapCondMaster_o *this, int32_t id, int32_t mapId, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5970D34 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
    byte_5970D34 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_3F157EC *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x1
  int32_t Count; // w25
  Il2CppObject *v16; // x27
  int32_t v17; // w26
  int priority; // w20
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v20; // x28
  int32_t condType; // w8
  int32_t v23; // [xsp+Ch] [xbp-64h]

  if ( (byte_5970D37 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970D37 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_28:
    sub_2213CDC(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  NetworkManager__getTime(0);
  if ( Count >= 1 )
  {
    v23 = qPhase;
    v16 = 0;
    v17 = 0;
    priority = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_28;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v17,
                                  (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( !Item )
        goto LABEL_24;
      v20 = Item;
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
          priority = v20->fields.priority;
          v16 = System_Collections_ObjectModel_Collection_object___get_Item(
                  list,
                  v17,
                  (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
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
      if ( Count == ++v17 )
      {
        if ( v16 )
          return (int32_t)v16[2].klass;
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
  __int64 v10; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v13; // w24
  int32_t v14; // w25
  unsigned int *v15; // x26
  int v16; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_5970D3A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5970D3A = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_26:
    sub_2213CDC(list, v10);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_26;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v14,
               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
      if ( !list )
        goto LABEL_24;
      v15 = (unsigned int *)list;
      if ( *((_DWORD *)list + 5) != mapId || !clearedQuestId || *((_DWORD *)list + 7) != 1 )
        goto LABEL_24;
      v16 = *((_DWORD *)list + 9);
      if ( v16 == 57 )
        goto LABEL_14;
      if ( v16 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_15:
        if ( !v9 )
          goto LABEL_26;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v9,
                         *((_DWORD *)list + 8),
                         (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          items = v9->fields._items;
          v10 = v15[8];
          v18 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_26;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              v10,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size] = v10;
          }
        }
      }
LABEL_24:
      if ( v13 == ++v14 )
        return v9;
    }
    if ( v16 != 1 )
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

  if ( (byte_5970D35 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
    byte_5970D35 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool MapCondMaster__TryGetOnMapCameraOffset(
        MapCondMaster_o *this,
        int32_t mapId,
        UnityEngine_Vector3_o *pos,
        int32_t beforeQuest,
        int32_t qPhase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  int32_t Count; // w24
  MapCondEntity_o *v14; // x28
  MapCondEntity_o *v15; // x27
  int32_t v16; // w25
  int priority; // w20
  int v18; // w19
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v20; // x26
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v23; // w8
  bool result; // w0
  int32_t v25; // [xsp+4h] [xbp-6Ch]
  UnityEngine_Vector3_o *v26; // [xsp+8h] [xbp-68h]

  if ( (byte_5970D39 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5970D39 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_41:
    sub_2213CDC(list, *(_QWORD *)&mapId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Count__);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
  NetworkManager__getTime(0);
  if ( Count < 1 )
    return 0;
  v25 = qPhase;
  v14 = 0;
  v26 = pos;
  v15 = 0;
  v16 = 0;
  priority = -1;
  v18 = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_41;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v16,
                                (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_MapCondEntity__get_Item__);
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v25 )
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
            priority = v20->fields.priority;
            v14 = v20;
          }
          goto LABEL_35;
        }
        if ( Item->fields.priority < v18 )
          goto LABEL_35;
        if ( !beforeQuest )
          goto LABEL_33;
        v23 = Item->fields.condType;
        switch ( v23 )
        {
          case 57:
            goto LABEL_25;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v25 )
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
          v18 = v20->fields.priority;
          v15 = v20;
        }
      }
    }
LABEL_35:
    ++v16;
  }
  while ( Count != v16 );
  result = 0;
  if ( v14 )
  {
    if ( v15 )
    {
      v26->fields.x = (float)v14->fields.targetId;
      v26->fields.y = (float)v15->fields.targetId;
      return 1;
    }
  }
  return result;
}