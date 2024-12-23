void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66F10 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__, method);
    byte_4B66F10 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    202,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
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
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v24; // x20
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B66F12 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v10);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor___77109024, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BE4ACC(&MapCondEntity_TypeInfo, v14);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v15);
    byte_4B66F12 = 1;
  }
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_3247234 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_23;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v20,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v21 = (MapCondEntity_o *)list;
        methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MapCondEntity_TypeInfo
          && *(_DWORD *)(list + 20) == mapId
          && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v16 )
            goto LABEL_23;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v16,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_3249290 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_18;
          if ( v21->fields.priority >= value )
            break;
        }
      }
LABEL_20:
      if ( Count == ++v20 )
        goto LABEL_21;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v16,
      v21->fields.targetId,
      (const MethodInfo_3248FB0 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_18:
    list = MapCondEntity__IsOpen(v21, v17);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v16,
        v21->fields.targetId,
        v21->fields.priority,
        (const MethodInfo_3247BF8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_20;
  }
LABEL_21:
  if ( !v16 )
LABEL_23:
    sub_1BE4D28(list, v17);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v16,
           (const MethodInfo_32478BC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v24 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56421076(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_35CEAD4 *)Method_System_Collections_Generic_List_int___ctor___77109024);
  return v24;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66F0E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B66F0E = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_31FDB1C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  Il2CppObject *v17; // x21
  int32_t v18; // w26
  int priority; // w20
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v21; // x27
  __int64 methodPtr_low; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v25; // w9
  Il2CppObject *v26; // x0
  __int64 v27; // x10
  int32_t v29; // [xsp+8h] [xbp-68h]

  if ( (byte_4B66F11 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12);
    sub_1BE4ACC(&MapCondEntity_TypeInfo, v13);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v14);
    byte_4B66F11 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_1BE4D28(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v29 = qPhase;
    v17 = 0LL;
    v18 = 0;
    priority = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_36;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v18,
                                  (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v21 = Item;
      methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (MapCondEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != MapCondEntity_TypeInfo
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
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !list )
            goto LABEL_36;
          priority = v21->fields.priority;
          v26 = System_Collections_ObjectModel_Collection_object___get_Item(
                  list,
                  v18,
                  (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v26
            && (v27 = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v26->klass->vtable[0].methodPtr) >= (unsigned int)v27) )
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
        goto LABEL_19;
      if ( condType != 46 )
        break;
      if ( Item->fields.condTargetId != beforeQuest )
        goto LABEL_24;
      condNum = Item->fields.condNum;
      v25 = v29;
LABEL_20:
      if ( condNum != v25 )
        goto LABEL_24;
LABEL_32:
      if ( Count == ++v18 )
      {
        if ( v17 )
          return (int32_t)v17[2].klass;
        return defVal;
      }
    }
    if ( condType != 1 )
      goto LABEL_24;
LABEL_19:
    condNum = Item->fields.condTargetId;
    v25 = beforeQuest;
    goto LABEL_20;
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
  unsigned int *v21; // x26
  __int64 methodPtr_low; // x10
  int v23; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_4B66F14 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1BE4ACC(&MapCondEntity_TypeInfo, v14);
    byte_4B66F14 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1BE4D18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35CE9AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_28:
    sub_1BE4D28(list, v16);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_28;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_26;
      v21 = (unsigned int *)list;
      methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != MapCondEntity_TypeInfo
        || *((_DWORD *)list + 5) != mapId
        || !clearedQuestId
        || *((_DWORD *)list + 7) != 1 )
      {
        goto LABEL_26;
      }
      v23 = *((_DWORD *)list + 9);
      if ( v23 == 57 )
        goto LABEL_16;
      if ( v23 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_20:
        if ( !v15 )
          goto LABEL_28;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v15,
                         *((_DWORD *)list + 8),
                         (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v16 = v21[8];
          items = v15->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              v16,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = v16;
          }
        }
      }
LABEL_26:
      if ( v19 == ++v20 )
        return v15;
    }
    if ( v23 != 1 )
      goto LABEL_26;
LABEL_16:
    if ( *((_DWORD *)list + 10) == clearedQuestId )
      goto LABEL_20;
    goto LABEL_26;
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
  Il2CppObject *PK; // x2

  if ( (byte_4B66F0F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__, entity);
    byte_4B66F0F = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  MapCondEntity_o *v16; // x28
  MapCondEntity_o *v17; // x27
  int32_t v18; // w25
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v20; // x26
  __int64 methodPtr_low; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v24; // w8
  bool v25; // w9
  bool v26; // w8
  int32_t v28; // [xsp+4h] [xbp-6Ch]
  int v29; // [xsp+8h] [xbp-68h]
  int priority; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B66F13 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1BE4ACC(&MapCondEntity_TypeInfo, v12);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v13);
    byte_4B66F13 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_43:
    sub_1BE4D28(list, *(_QWORD *)&mapId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v29 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v18,
                                (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = Item;
      methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (MapCondEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == MapCondEntity_TypeInfo
        && Item->fields.mapId == mapId )
      {
        changeType = Item->fields.changeType;
        if ( changeType != 6 )
        {
          if ( changeType != 5 || Item->fields.priority < priority )
            goto LABEL_37;
          if ( !beforeQuest )
            goto LABEL_31;
          condType = Item->fields.condType;
          switch ( condType )
          {
            case 57:
              goto LABEL_20;
            case 46:
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v28 )
                goto LABEL_37;
              break;
            case 1:
LABEL_20:
              if ( Item->fields.condTargetId == beforeQuest )
                goto LABEL_37;
              break;
          }
LABEL_31:
          if ( MapCondEntity__IsOpen(Item, *(const MethodInfo **)&mapId) )
          {
            v16 = v20;
            priority = v20->fields.priority;
          }
          goto LABEL_37;
        }
        if ( Item->fields.priority < v29 )
          goto LABEL_37;
        if ( !beforeQuest )
          goto LABEL_35;
        v24 = Item->fields.condType;
        switch ( v24 )
        {
          case 57:
            goto LABEL_27;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v28 )
              goto LABEL_37;
            break;
          case 1:
LABEL_27:
            if ( Item->fields.condTargetId == beforeQuest )
              goto LABEL_37;
            break;
        }
LABEL_35:
        if ( MapCondEntity__IsOpen(Item, *(const MethodInfo **)&mapId) )
        {
          v17 = v20;
          v29 = v20->fields.priority;
        }
      }
    }
LABEL_37:
    ++v18;
  }
  while ( Count != v18 );
  v25 = v16 == 0LL;
  v26 = v17 == 0LL;
  if ( v17 && v16 )
  {
    pos->fields.x = (float)v16->fields.targetId;
    pos->fields.y = (float)v17->fields.targetId;
  }
  return !v26 && !v25;
}