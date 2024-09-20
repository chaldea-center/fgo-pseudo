void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B6F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
    byte_4A5B6F2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    176,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_4A5B6F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
    byte_4A5B6F0 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


System_String_o *__fastcall QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  int32_t Count; // w0
  int32_t v11; // w23
  Il2CppObject *Entity; // x25
  int32_t i; // w24
  __int64 methodPtr_low; // x10
  int v15; // w8
  System_String_o *result; // x0

  if ( (byte_4A5B6F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1B885B0(&QuestRestrictionEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B6F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  Entity = 0LL;
  for ( i = 0; i != v11; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Instance )
      goto LABEL_26;
    methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
      || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
    {
      goto LABEL_26;
    }
    if ( *((_DWORD *)Instance + 4) == questId )
    {
      v15 = *((_DWORD *)Instance + 5);
      if ( v15 != phase )
      {
        if ( !Entity )
        {
          if ( v15 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v9 )
              goto LABEL_26;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v9,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_311D934 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v9 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v9,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_1B8880C(Instance, v8);
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

  if ( (byte_4A5B6F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
    byte_4A5B6F1 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppClass *v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w25
  _DWORD *v13; // x26
  __int64 methodPtr_low; // x10
  int32_t v15; // w2
  int32_t v16; // w3
  int v17; // w8
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A5B6F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1B885B0(&QuestRestrictionEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B6F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v12,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v13 = Instance;
      methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v9 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_311D934 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v17 = v13[5];
          v8 = (Il2CppClass *)Instance;
          if ( !v17 || v17 == phase )
          {
            if ( !v11 )
              break;
            items = v11->fields._items;
            v19 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v21[4] = v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v8, v15, v16);
            }
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B8880C(Instance, v8);
  }
LABEL_22:
  if ( !v11 )
    goto LABEL_24;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v11,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_39538204(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppClass *v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_object__o *v12; // x24
  System_Collections_Generic_List_object__o *v13; // x26
  int32_t v14; // w27
  Il2CppObject *v15; // x28
  __int64 methodPtr_low; // x10
  int32_t v17; // w2
  int32_t v18; // w3
  int klass_high; // w8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  System_Object_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  ServantStatusBattleListViewItem_o *v34; // [xsp+0h] [xbp-70h]

  if ( (byte_4A5B6F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1B885B0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1B885B0(&QuestRestrictionEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B6F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v34 = (ServantStatusBattleListViewItem_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v14,
                   (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v15 = (Il2CppObject *)Instance;
      methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v10 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v10,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_311D934 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          klass_high = HIDWORD(v15[1].klass);
          v9 = (Il2CppClass *)Instance;
          if ( !klass_high || klass_high == phase )
          {
            if ( !v12 )
              break;
            items = v12->fields._items;
            v21 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v12->fields._version;
            if ( !items )
              break;
            size = v12->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v12,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
            }
            else
            {
              v23 = &items->obj.klass + size;
              v12->fields._size = size + 1;
              v23[4] = v9;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v9, v17, v18);
            }
            if ( !v13 )
              break;
            v26 = v13->fields._items;
            v27 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v13->fields._version;
            if ( !v26 )
              break;
            v28 = v13->fields._size;
            if ( (unsigned int)v28 >= v26->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                v15,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &v26->obj.klass + v28;
              v13->fields._size = v28 + 1;
              v29[4] = (Il2CppClass *)v15;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v15, v24, v25);
            }
          }
        }
      }
      if ( Count == ++v14 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1B8880C(Instance, v9);
  }
LABEL_27:
  if ( !v13 )
    goto LABEL_30;
  v30 = System_Collections_Generic_List_object___ToArray(
          v13,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  v34->klass = (ServantStatusBattleListViewItem_c *)v30;
  sub_1B88554(v34, (int32_t)v30, v31, v32);
  if ( !v12 )
    goto LABEL_30;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v12,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}