void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B498 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
    byte_4A5B498 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
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
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  System_Collections_Generic_List_int__o *v13; // x20
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4A5B49A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor___76036512);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&MapCondEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B49A = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  list = NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_23;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v9,
                        (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v10 = (MapCondEntity_o *)list;
        methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MapCondEntity_TypeInfo
          && *(_DWORD *)(list + 20) == mapId
          && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v5 )
            goto LABEL_23;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v5,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_3166520 *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_18;
          if ( v10->fields.priority >= value )
            break;
        }
      }
LABEL_20:
      if ( Count == ++v9 )
        goto LABEL_21;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v5,
      v10->fields.targetId,
      (const MethodInfo_3166240 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_18:
    list = MapCondEntity__IsOpen(v10, v6);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v5,
        v10->fields.targetId,
        v10->fields.priority,
        (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_20;
  }
LABEL_21:
  if ( !v5 )
LABEL_23:
    sub_1B8880C(list, v6);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v5,
           (const MethodInfo_3164B4C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v13 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_55443684(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_34E00E4 *)Method_System_Collections_Generic_List_int___ctor___76036512);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B496 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
    byte_4A5B496 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_311DC8C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w25
  Il2CppObject *v14; // x21
  int32_t v15; // w26
  int priority; // w20
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v18; // x27
  __int64 methodPtr_low; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v22; // w9
  Il2CppObject *v23; // x0
  __int64 v24; // x10
  int32_t v26; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5B499 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&MapCondEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B499 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_1B8880C(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v26 = qPhase;
    v14 = 0LL;
    v15 = 0;
    priority = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_36;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v15,
                                  (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v18 = Item;
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
          priority = v18->fields.priority;
          v23 = System_Collections_ObjectModel_Collection_object___get_Item(
                  list,
                  v15,
                  (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v23
            && (v24 = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v23->klass->vtable[0].methodPtr) >= (unsigned int)v24) )
          {
            if ( (MapCondEntity_c *)v23->klass->_2.typeHierarchy[v24 - 1] == MapCondEntity_TypeInfo )
              v14 = v23;
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
        goto LABEL_19;
      if ( condType != 46 )
        break;
      if ( Item->fields.condTargetId != beforeQuest )
        goto LABEL_24;
      condNum = Item->fields.condNum;
      v22 = v26;
LABEL_20:
      if ( condNum != v22 )
        goto LABEL_24;
LABEL_32:
      if ( Count == ++v15 )
      {
        if ( v14 )
          return (int32_t)v14[2].klass;
        return defVal;
      }
    }
    if ( condType != 1 )
      goto LABEL_24;
LABEL_19:
    condNum = Item->fields.condTargetId;
    v22 = beforeQuest;
    goto LABEL_20;
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
  unsigned int *v15; // x26
  __int64 methodPtr_low; // x10
  int v17; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10

  if ( (byte_4A5B49C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&MapCondEntity_TypeInfo);
    byte_4A5B49C = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_28:
    sub_1B8880C(list, v10);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_28;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v14,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_26;
      v15 = (unsigned int *)list;
      methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != MapCondEntity_TypeInfo
        || *((_DWORD *)list + 5) != mapId
        || !clearedQuestId
        || *((_DWORD *)list + 7) != 1 )
      {
        goto LABEL_26;
      }
      v17 = *((_DWORD *)list + 9);
      if ( v17 == 57 )
        goto LABEL_16;
      if ( v17 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_20:
        if ( !v9 )
          goto LABEL_28;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v9,
                         *((_DWORD *)list + 8),
                         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v10 = v15[8];
          items = v9->fields._items;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++v9->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v9->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v9,
              v10,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v9->fields._size = size + 1;
            items->m_Items[size + 1] = v10;
          }
        }
      }
LABEL_26:
      if ( v13 == ++v14 )
        return v9;
    }
    if ( v17 != 1 )
      goto LABEL_26;
LABEL_16:
    if ( *((_DWORD *)list + 10) == clearedQuestId )
      goto LABEL_20;
    goto LABEL_26;
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
  Il2CppObject *PK; // x2

  if ( (byte_4A5B497 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
    byte_4A5B497 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  MapCondEntity_o *v13; // x28
  MapCondEntity_o *v14; // x27
  int32_t v15; // w25
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v17; // x26
  __int64 methodPtr_low; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v21; // w8
  bool v22; // w9
  bool v23; // w8
  int32_t v25; // [xsp+4h] [xbp-6Ch]
  int v26; // [xsp+8h] [xbp-68h]
  int priority; // [xsp+Ch] [xbp-64h]

  if ( (byte_4A5B49B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&MapCondEntity_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B49B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_43:
    sub_1B8880C(list, *(_QWORD *)&mapId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v23 = 1;
    v22 = 1;
    return !v23 && !v22;
  }
  v25 = qPhase;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v26 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v15,
                                (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v17 = Item;
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v25 )
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
            v13 = v17;
            priority = v17->fields.priority;
          }
          goto LABEL_37;
        }
        if ( Item->fields.priority < v26 )
          goto LABEL_37;
        if ( !beforeQuest )
          goto LABEL_35;
        v21 = Item->fields.condType;
        switch ( v21 )
        {
          case 57:
            goto LABEL_27;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v25 )
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
          v14 = v17;
          v26 = v17->fields.priority;
        }
      }
    }
LABEL_37:
    ++v15;
  }
  while ( Count != v15 );
  v22 = v13 == 0LL;
  v23 = v14 == 0LL;
  if ( v14 && v13 )
  {
    pos->fields.x = (float)v13->fields.targetId;
    pos->fields.y = (float)v14->fields.targetId;
  }
  return !v23 && !v22;
}