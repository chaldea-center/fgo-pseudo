void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC740 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__, method);
    byte_49FC740 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
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
  __int64 methodPtr_low; // x10
  const MethodInfo *v22; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_int__o *v26; // x20
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_49FC742 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&MapCondEntity_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    byte_49FC742 = 1;
  }
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               *(_QWORD *)&mapId,
                                                               method);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
        goto LABEL_23;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v19,
                        (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v20 = (MapCondEntity_o *)list;
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
                   (const MethodInfo_311C54C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_18;
          if ( v20->fields.priority >= value )
            break;
        }
      }
LABEL_20:
      if ( Count == ++v19 )
        goto LABEL_21;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v16,
      v20->fields.targetId,
      (const MethodInfo_311C26C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_18:
    list = MapCondEntity__IsOpen(v20, v22);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v16,
        v20->fields.targetId,
        v20->fields.priority,
        (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_20;
  }
LABEL_21:
  if ( !v16 )
LABEL_23:
    sub_1B64324(list);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v16,
           (const MethodInfo_311AB78 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v26 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor_55113648(
    v26,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
  return v26;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC73E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_49FC73E = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_30D41FC *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  const MethodInfo *v21; // x1
  MapCondEntity_o *v22; // x27
  __int64 methodPtr_low; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v26; // w9
  Il2CppObject *v27; // x0
  __int64 v28; // x10
  int32_t v30; // [xsp+8h] [xbp-68h]

  if ( (byte_49FC741 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&type);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12);
    sub_1B640C8(&MapCondEntity_TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    byte_49FC741 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v30 = qPhase;
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
                                  (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v22 = Item;
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
        if ( MapCondEntity__IsOpen(Item, v21) )
        {
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          if ( !list )
            goto LABEL_36;
          priority = v22->fields.priority;
          v27 = System_Collections_ObjectModel_Collection_object___get_Item(
                  list,
                  v18,
                  (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v27
            && (v28 = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v27->klass->vtable[0].methodPtr) >= (unsigned int)v28) )
          {
            if ( (MapCondEntity_c *)v27->klass->_2.typeHierarchy[v28 - 1] == MapCondEntity_TypeInfo )
              v17 = v27;
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
      v26 = v30;
LABEL_20:
      if ( condNum != v26 )
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
    v26 = beforeQuest;
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
  void *list; // x0
  int32_t Count; // w0
  int32_t v18; // w24
  int32_t v19; // w25
  _DWORD *v20; // x26
  __int64 methodPtr_low; // x10
  int v22; // w8
  int32_t v23; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_49FC744 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&MapCondEntity_TypeInfo, v14);
    byte_49FC744 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&mapId,
                                                    *(_QWORD *)&clearedQuestId);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_28:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_28;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v19,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_26;
      v20 = list;
      methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != MapCondEntity_TypeInfo
        || *((_DWORD *)list + 5) != mapId
        || !clearedQuestId
        || *((_DWORD *)list + 7) != 1 )
      {
        goto LABEL_26;
      }
      v22 = *((_DWORD *)list + 9);
      if ( v22 == 57 )
        goto LABEL_16;
      if ( v22 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_20:
        if ( !v15 )
          goto LABEL_28;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v15,
                         *((_DWORD *)list + 8),
                         (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v23 = v20[8];
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
              v23,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size + 1] = v23;
          }
        }
      }
LABEL_26:
      if ( v18 == ++v19 )
        return v15;
    }
    if ( v22 != 1 )
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

  if ( (byte_49FC73F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__, entity);
    byte_49FC73F = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  const MethodInfo *v20; // x1
  MapCondEntity_o *v21; // x26
  __int64 methodPtr_low; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v25; // w8
  bool v26; // w9
  bool v27; // w8
  int32_t v29; // [xsp+4h] [xbp-6Ch]
  int v30; // [xsp+8h] [xbp-68h]
  int priority; // [xsp+Ch] [xbp-64h]

  if ( (byte_49FC743 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11);
    sub_1B640C8(&MapCondEntity_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    byte_49FC743 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_43:
    sub_1B64324(list);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v27 = 1;
    v26 = 1;
    return !v27 && !v26;
  }
  v29 = qPhase;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v30 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v18,
                                (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v21 = Item;
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v29 )
                goto LABEL_37;
              break;
            case 1:
LABEL_20:
              if ( Item->fields.condTargetId == beforeQuest )
                goto LABEL_37;
              break;
          }
LABEL_31:
          if ( MapCondEntity__IsOpen(Item, v20) )
          {
            v16 = v21;
            priority = v21->fields.priority;
          }
          goto LABEL_37;
        }
        if ( Item->fields.priority < v30 )
          goto LABEL_37;
        if ( !beforeQuest )
          goto LABEL_35;
        v25 = Item->fields.condType;
        switch ( v25 )
        {
          case 57:
            goto LABEL_27;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v29 )
              goto LABEL_37;
            break;
          case 1:
LABEL_27:
            if ( Item->fields.condTargetId == beforeQuest )
              goto LABEL_37;
            break;
        }
LABEL_35:
        if ( MapCondEntity__IsOpen(Item, v20) )
        {
          v17 = v21;
          v30 = v21->fields.priority;
        }
      }
    }
LABEL_37:
    ++v18;
  }
  while ( Count != v18 );
  v26 = v16 == 0LL;
  v27 = v17 == 0LL;
  if ( v17 && v16 )
  {
    pos->fields.x = (float)v16->fields.targetId;
    pos->fields.y = (float)v17->fields.targetId;
  }
  return !v27 && !v26;
}