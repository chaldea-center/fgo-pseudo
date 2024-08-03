void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC991 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method);
    byte_49FC991 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    176,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_49FC98F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49FC98F = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
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
  __int64 v11; // x1
  void *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x22
  int32_t Count; // w0
  int32_t v15; // w23
  Il2CppObject *Entity; // x25
  int32_t i; // w24
  __int64 methodPtr_low; // x10
  int v19; // w8
  System_String_o *result; // x0

  if ( (byte_49FC994 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1B640C8(&QuestRestrictionEntity_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FC994 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v15 = Count;
  Entity = 0LL;
  for ( i = 0; i != v15; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      v19 = *((_DWORD *)Instance + 5);
      if ( v19 != phase )
      {
        if ( !Entity )
        {
          if ( v19 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v13 )
              goto LABEL_26;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v13,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_30D3EA4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v13 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v13,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_1B64324(Instance);
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

  if ( (byte_49FC990 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__, entity);
    byte_49FC990 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
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
  __int64 v15; // x1
  void *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  int32_t Count; // w23
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x24
  int32_t v22; // w25
  _DWORD *v23; // x26
  __int64 methodPtr_low; // x10
  int32_t v25; // w2
  int32_t v26; // w3
  int v27; // w8
  Il2CppClass *v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_49FC992 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v13);
    sub_1B640C8(&QuestRestrictionEntity_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FC992 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v22,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v23 = Instance;
      methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v17 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v17,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v27 = v23[5];
          v28 = (Il2CppClass *)Instance;
          if ( !v27 || v27 == phase )
          {
            if ( !v21 )
              break;
            items = v21->fields._items;
            v30 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v21->fields._version;
            if ( !items )
              break;
            size = v21->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v21,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v21->fields._size = size + 1;
              v32[4] = v28;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v28, v25, v26);
            }
          }
        }
      }
      if ( Count == ++v22 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B64324(Instance);
  }
LABEL_22:
  if ( !v21 )
    goto LABEL_24;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v21,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_39213232(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v8; // x1
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
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x23
  int32_t Count; // w25
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_object__o *v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_object__o *v29; // x26
  int32_t v30; // w27
  Il2CppObject *v31; // x28
  __int64 methodPtr_low; // x10
  int32_t v33; // w2
  int32_t v34; // w3
  int klass_high; // w8
  Il2CppClass *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Object_array *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  ServantStatusBattleListViewItem_o *v51; // [xsp+0h] [xbp-70h]

  if ( (byte_49FC993 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questRestrictionEntityList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_RestrictionMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v17);
    sub_1B640C8(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v18);
    sub_1B640C8(&QuestRestrictionEntity_TypeInfo, v19);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_49FC993 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v51 = (ServantStatusBattleListViewItem_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo,
                                                       v27,
                                                       v28);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v30,
                   (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v31 = (Il2CppObject *)Instance;
      methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v22 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v22,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          klass_high = HIDWORD(v31[1].klass);
          v36 = (Il2CppClass *)Instance;
          if ( !klass_high || klass_high == phase )
          {
            if ( !v26 )
              break;
            items = v26->fields._items;
            v38 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v26->fields._version;
            if ( !items )
              break;
            size = v26->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &items->obj.klass + size;
              v26->fields._size = size + 1;
              v40[4] = v36;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v36, v33, v34);
            }
            if ( !v29 )
              break;
            v43 = v29->fields._items;
            v44 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v29->fields._version;
            if ( !v43 )
              break;
            v45 = v29->fields._size;
            if ( (unsigned int)v45 >= v43->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v29,
                v31,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &v43->obj.klass + v45;
              v29->fields._size = v45 + 1;
              v46[4] = (Il2CppClass *)v31;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v31, v41, v42);
            }
          }
        }
      }
      if ( Count == ++v30 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1B64324(Instance);
  }
LABEL_27:
  if ( !v29 )
    goto LABEL_30;
  v47 = System_Collections_Generic_List_object___ToArray(
          v29,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  v51->klass = (ServantStatusBattleListViewItem_c *)v47;
  sub_1B6406C(v51, (int32_t)v47, v48, v49);
  if ( !v26 )
    goto LABEL_30;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v26,
                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}