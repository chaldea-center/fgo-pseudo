void __fastcall MapCondMaster___ctor(MapCondMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16539 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__, method, v2);
    byte_4B16539 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall MapCondMaster__GetAvailableButtons(
        MapCondMaster_o *this,
        int32_t mapId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_int__int__o *v28; // x21
  const MethodInfo *v29; // x1
  int64_t list; // x0
  __int64 v31; // x1
  int32_t Count; // w22
  int32_t v33; // w23
  MapCondEntity_o *v34; // x24
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x19
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_int__o *v40; // x20
  int32_t value; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1653B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&mapId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v22, v23);
    sub_1BCA7E0(&MapCondEntity_TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    byte_4B1653B = 1;
  }
  v28 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               *(_QWORD *)&mapId,
                                                               method,
                                                               v3);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v28,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  list = NetworkManager__getTime(0LL);
  value = -1;
  if ( Count >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        goto LABEL_23;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v33,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v34 = (MapCondEntity_o *)list;
        methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == MapCondEntity_TypeInfo
          && *(_DWORD *)(list + 20) == mapId
          && *(_DWORD *)(list + 28) == 1 )
        {
          if ( !v28 )
            goto LABEL_23;
          list = System_Collections_Generic_Dictionary_int__int___TryGetValue(
                   v28,
                   *(_DWORD *)(list + 32),
                   &value,
                   (const MethodInfo_31FE90C *)Method_System_Collections_Generic_Dictionary_int__int__TryGetValue__);
          if ( (list & 1) == 0 )
            goto LABEL_18;
          if ( v34->fields.priority >= value )
            break;
        }
      }
LABEL_20:
      if ( Count == ++v33 )
        goto LABEL_21;
    }
    System_Collections_Generic_Dictionary_int__int___Remove(
      v28,
      v34->fields.targetId,
      (const MethodInfo_31FE62C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
LABEL_18:
    list = MapCondEntity__IsOpen(v34, v29);
    if ( (list & 1) != 0 )
      System_Collections_Generic_Dictionary_int__int___Add(
        v28,
        v34->fields.targetId,
        v34->fields.priority,
        (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    goto LABEL_20;
  }
LABEL_21:
  if ( !v28 )
LABEL_23:
    sub_1BCAA3C(list, v29);
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           v28,
           (const MethodInfo_31FCF38 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v40 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v37,
                                                    v38,
                                                    v39);
  System_Collections_Generic_List_int____ctor_56116492(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)Keys,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  return v40;
}


// local variable allocation has failed, the output may be wrong!
MapCondEntity_o *__fastcall MapCondMaster__GetEntity(
        MapCondMaster_o *this,
        int32_t id,
        int32_t mapId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16537 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&mapId);
    byte_4B16537 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&mapId);
  return (MapCondEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_31B3198 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__GetEntity__);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  int32_t Count; // w25
  Il2CppObject *v21; // x21
  int32_t v22; // w26
  int priority; // w20
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v25; // x27
  __int64 methodPtr_low; // x10
  int32_t condType; // w8
  int32_t condNum; // w8
  int32_t v29; // w9
  Il2CppObject *v30; // x0
  __int64 v31; // x10
  int32_t v33; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1653A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&type,
      *(_QWORD *)&mapId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v12, v13);
    sub_1BCA7E0(&MapCondEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    byte_4B1653A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_36:
    sub_1BCAA3C(list, *(_QWORD *)&type);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  NetworkManager__getTime(0LL);
  if ( Count >= 1 )
  {
    v33 = qPhase;
    v21 = 0LL;
    v22 = 0;
    priority = -1;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        goto LABEL_36;
      Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                  list,
                                  v22,
                                  (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_32;
      v25 = Item;
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
          priority = v25->fields.priority;
          v30 = System_Collections_ObjectModel_Collection_object___get_Item(
                  list,
                  v22,
                  (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
          if ( v30
            && (v31 = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v30->klass->vtable[0].methodPtr) >= (unsigned int)v31) )
          {
            if ( (MapCondEntity_c *)v30->klass->_2.typeHierarchy[v31 - 1] == MapCondEntity_TypeInfo )
              v21 = v30;
            else
              v21 = 0LL;
          }
          else
          {
            v21 = 0LL;
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
      v29 = v33;
LABEL_20:
      if ( condNum != v29 )
        goto LABEL_24;
LABEL_32:
      if ( Count == ++v22 )
      {
        if ( v21 )
          return (int32_t)v21[2].klass;
        return defVal;
      }
    }
    if ( condType != 1 )
      goto LABEL_24;
LABEL_19:
    condNum = Item->fields.condTargetId;
    v29 = beforeQuest;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_int__o *v21; // x23
  __int64 v22; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v25; // w24
  int32_t v26; // w25
  unsigned int *v27; // x26
  __int64 methodPtr_low; // x10
  int v29; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10

  if ( (byte_4B1653D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&mapId,
      *(_QWORD *)&clearedQuestId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&MapCondEntity_TypeInfo, v19, v20);
    byte_4B1653D = 1;
  }
  v21 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&mapId,
                                                    *(_QWORD *)&clearedQuestId,
                                                    *(_QWORD *)&clearedPhase);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_28:
    sub_1BCAA3C(list, v22);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v25 = Count;
    v26 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        goto LABEL_28;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v26,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        goto LABEL_26;
      v27 = (unsigned int *)list;
      methodPtr_low = LOBYTE(MapCondEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(MapCondEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != MapCondEntity_TypeInfo
        || *((_DWORD *)list + 5) != mapId
        || !clearedQuestId
        || *((_DWORD *)list + 7) != 1 )
      {
        goto LABEL_26;
      }
      v29 = *((_DWORD *)list + 9);
      if ( v29 == 57 )
        goto LABEL_16;
      if ( v29 != 46 )
        break;
      if ( *((_DWORD *)list + 10) == clearedQuestId && *((_DWORD *)list + 11) == clearedPhase )
      {
LABEL_20:
        if ( !v21 )
          goto LABEL_28;
        list = (void *)System_Collections_Generic_List_int___Contains(
                         v21,
                         *((_DWORD *)list + 8),
                         (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)list & 1) == 0 )
        {
          v22 = v27[8];
          items = v21->fields._items;
          v31 = Method_System_Collections_Generic_List_int__Add__;
          ++v21->fields._version;
          if ( !items )
            goto LABEL_28;
          size = v21->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v21,
              v22,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v21->fields._size = size + 1;
            items->m_Items[size + 1] = v22;
          }
        }
      }
LABEL_26:
      if ( v25 == ++v26 )
        return v21;
    }
    if ( v29 != 1 )
      goto LABEL_26;
LABEL_16:
    if ( *((_DWORD *)list + 10) == clearedQuestId )
      goto LABEL_20;
    goto LABEL_26;
  }
  return v21;
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

  if ( (byte_4B16538 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__, entity, *(_QWORD *)&id);
    byte_4B16538 = 1;
  }
  PK = (Il2CppObject *)MapCondEntity__CreatePK(id, mapId, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_MapCondMaster__MapCondEntity__string__TryGetEntity__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  int32_t Count; // w24
  MapCondEntity_o *v20; // x28
  MapCondEntity_o *v21; // x27
  int32_t v22; // w25
  MapCondEntity_o *Item; // x0
  MapCondEntity_o *v24; // x26
  __int64 methodPtr_low; // x10
  int32_t changeType; // w8
  int32_t condType; // w8
  int32_t v28; // w8
  bool v29; // w9
  bool v30; // w8
  int32_t v32; // [xsp+4h] [xbp-6Ch]
  int v33; // [xsp+8h] [xbp-68h]
  int priority; // [xsp+Ch] [xbp-64h]

  if ( (byte_4B1653C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&mapId, pos);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v11, v12);
    sub_1BCA7E0(&MapCondEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16);
    byte_4B1653C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_43:
    sub_1BCAA3C(list, *(_QWORD *)&mapId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  NetworkManager__getTime(0LL);
  if ( Count < 1 )
  {
    v30 = 1;
    v29 = 1;
    return !v30 && !v29;
  }
  v32 = qPhase;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v33 = -1;
  priority = -1;
  do
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_43;
    Item = (MapCondEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                list,
                                v22,
                                (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v24 = Item;
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
              if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v32 )
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
            v20 = v24;
            priority = v24->fields.priority;
          }
          goto LABEL_37;
        }
        if ( Item->fields.priority < v33 )
          goto LABEL_37;
        if ( !beforeQuest )
          goto LABEL_35;
        v28 = Item->fields.condType;
        switch ( v28 )
        {
          case 57:
            goto LABEL_27;
          case 46:
            if ( Item->fields.condTargetId == beforeQuest && Item->fields.condNum == v32 )
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
          v21 = v24;
          v33 = v24->fields.priority;
        }
      }
    }
LABEL_37:
    ++v22;
  }
  while ( Count != v22 );
  v29 = v20 == 0LL;
  v30 = v21 == 0LL;
  if ( v21 && v20 )
  {
    pos->fields.x = (float)v20->fields.targetId;
    pos->fields.y = (float)v21->fields.targetId;
  }
  return !v30 && !v29;
}