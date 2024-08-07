void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF0AA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method);
    byte_49FF0AA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    176,
    (const MethodInfo_30D6AB0 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_49FF0A8 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49FF0A8 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_30D6AF0 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
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
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  int32_t Count; // w0
  int32_t v16; // w23
  Il2CppObject *Entity; // x25
  int32_t i; // w24
  __int64 methodPtr_low; // x10
  int v20; // w8
  System_String_o *result; // x0

  if ( (byte_49FF0AD & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64A00(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1B64A00(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1B64A00(&QuestRestrictionEntity_TypeInfo, v10);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FF0AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v16 = Count;
  Entity = 0LL;
  for ( i = 0; i != v16; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      v20 = *((_DWORD *)Instance + 5);
      if ( v20 != phase )
      {
        if ( !Entity )
        {
          if ( v20 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v14 )
              goto LABEL_26;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v14,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_30D6798 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v14 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v14,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_30D6798 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_1B64C5C(Instance, v13);
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

  if ( (byte_49FF0A9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__, entity);
    byte_49FF0A9 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6B40 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
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
  Il2CppClass *v17; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x24
  int32_t v21; // w25
  _DWORD *v22; // x26
  __int64 methodPtr_low; // x10
  int32_t v24; // w2
  int32_t v25; // w3
  int v26; // w8
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_49FF0AB & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64A00(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1B64A00(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v12);
    sub_1B64A00(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v13);
    sub_1B64A00(&QuestRestrictionEntity_TypeInfo, v14);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_49FF0AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v21,
                   (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v22 = Instance;
      methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v18 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v18,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_30D6798 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v26 = v22[5];
          v17 = (Il2CppClass *)Instance;
          if ( !v26 || v26 == phase )
          {
            if ( !v20 )
              break;
            items = v20->fields._items;
            v28 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              break;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v30 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v30[4] = v17;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)v17, v24, v25);
            }
          }
        }
      }
      if ( Count == ++v21 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1B64C5C(Instance, v17);
  }
LABEL_22:
  if ( !v20 )
    goto LABEL_24;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_39218092(
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
  Il2CppClass *v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_object__o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x26
  int32_t v27; // w27
  Il2CppObject *v28; // x28
  __int64 methodPtr_low; // x10
  int32_t v30; // w2
  int32_t v31; // w3
  int klass_high; // w8
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  System_Object_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  ServantStatusBattleListViewItem_o *v47; // [xsp+0h] [xbp-70h]

  if ( (byte_49FF0AC & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questRestrictionEntityList);
    sub_1B64A00(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1B64A00(&Method_DataManager_GetMasterData_RestrictionMaster___, v9);
    sub_1B64A00(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v16);
    sub_1B64A00(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v17);
    sub_1B64A00(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v18);
    sub_1B64A00(&QuestRestrictionEntity_TypeInfo, v19);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_49FF0AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v47 = (ServantStatusBattleListViewItem_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_30733FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
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
                   (const MethodInfo_307348C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v28 = (Il2CppObject *)Instance;
      methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v23 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v23,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_30D6798 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          klass_high = HIDWORD(v28[1].klass);
          v22 = (Il2CppClass *)Instance;
          if ( !klass_high || klass_high == phase )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v34 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)Instance,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v36[4] = v22;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v22, v30, v31);
            }
            if ( !v26 )
              break;
            v39 = v26->fields._items;
            v40 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v26->fields._version;
            if ( !v39 )
              break;
            v41 = v26->fields._size;
            if ( (unsigned int)v41 >= v39->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                v28,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
            }
            else
            {
              v42 = &v39->obj.klass + v41;
              v26->fields._size = v41 + 1;
              v42[4] = (Il2CppClass *)v28;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v28, v37, v38);
            }
          }
        }
      }
      if ( Count == ++v27 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1B64C5C(Instance, v22);
  }
LABEL_27:
  if ( !v26 )
    goto LABEL_30;
  v43 = System_Collections_Generic_List_object___ToArray(
          v26,
          (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  v47->klass = (ServantStatusBattleListViewItem_c *)v43;
  sub_1B649A4(v47, (int32_t)v43, v44, v45);
  if ( !v25 )
    goto LABEL_30;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v25,
                                      (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}