void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB482 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method);
    byte_49BB482 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestRestrictionEntity_o *__fastcall QuestRestrictionMaster__GetEntity(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BB480 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49BB480 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31A2454 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  Il2CppObject *Entity; // x25
  int32_t i; // w24
  int v18; // w8
  System_String_o *result; // x0

  if ( (byte_49BB485 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1B4CF90(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49BB485 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v15 = Count;
  Entity = 0LL;
  for ( i = 0; i != v15; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    if ( !Instance )
      goto LABEL_24;
    if ( *((_DWORD *)Instance + 4) == questId )
    {
      v18 = *((_DWORD *)Instance + 5);
      if ( v18 != phase )
      {
        if ( !Entity )
        {
          if ( v18 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v13 )
              goto LABEL_24;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v13,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_319D99C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v13 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v13,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_319D99C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_24:
      sub_1B4D1EC(Instance, v12);
    }
  }
  if ( Entity )
    return (System_String_o *)Entity[1].monitor;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestRestrictionMaster__TryGetEntity(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t restrictionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BB481 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__, entity);
    byte_49BB481 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  Il2CppClass *v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v19; // x24
  int32_t v20; // w25
  _DWORD *v21; // x26
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int v24; // w8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_49BB483 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v7);
    sub_1B4CF90(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1B4CF90(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v13);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49BB483 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v20,
                   (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v21 = Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v17 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v17,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_319D99C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v24 = v21[5];
          v16 = (Il2CppClass *)Instance;
          if ( !v24 || v24 == phase )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v26 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v28[4] = v16;
              sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v16, v22, v23);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B4D1EC(Instance, v16);
  }
LABEL_20:
  if ( !v19 )
    goto LABEL_22;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_40120264(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  void *Instance; // x0
  Il2CppClass *v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_object__o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x26
  int32_t v27; // w27
  Il2CppObject *v28; // x28
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int klass_high; // w8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  System_Object_array *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  CGThumbnailListItem_o *v46; // [xsp+8h] [xbp-68h]

  if ( (byte_49BB484 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      questRestrictionEntityList);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_RestrictionMaster___, v10);
    sub_1B4CF90(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v17);
    sub_1B4CF90(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v18);
    sub_1B4CF90(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_49BB484 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v46 = (CGThumbnailListItem_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v27,
                   (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v28 = (Il2CppObject *)Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v23 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v23,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_319D99C *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          klass_high = HIDWORD(v28[1].klass);
          v22 = (Il2CppClass *)Instance;
          if ( !klass_high || klass_high == phase )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v33 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
            }
            else
            {
              v35 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v35[4] = v22;
              sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v22, v29, v30);
            }
            if ( !v26 )
              break;
            v38 = v26->fields._items;
            v39 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v26->fields._version;
            if ( !v38 )
              break;
            v40 = v26->fields._size;
            if ( (unsigned int)v40 >= v38->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                v28,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &v38->obj.klass + v40;
              v26->fields._size = v40 + 1;
              v41[4] = (Il2CppClass *)v28;
              sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v28, v36, v37);
            }
          }
        }
      }
      if ( Count == ++v27 )
        goto LABEL_25;
    }
LABEL_28:
    sub_1B4D1EC(Instance, v22);
  }
LABEL_25:
  if ( !v26 )
    goto LABEL_28;
  v42 = System_Collections_Generic_List_object___ToArray(
          v26,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  v46->klass = (CGThumbnailListItem_c *)v42;
  sub_1B4CF34(v46, (int32_t)v42, v43, v44);
  if ( !v25 )
    goto LABEL_28;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v25,
                                      (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}