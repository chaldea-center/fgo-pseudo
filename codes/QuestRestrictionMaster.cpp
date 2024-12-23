void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67186 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method);
    byte_4B67186 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_4B67184 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4B67184 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31FDB1C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
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

  if ( (byte_4B67189 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1BE4ACC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&QuestRestrictionEntity_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B67189 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                 (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                       (const MethodInfo_31FD7C4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v14 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v14,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_31FD7C4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_1BE4D28(Instance, v13);
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

  if ( (byte_4B67185 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__, entity);
    byte_4B67185 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
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
  int64_t v17; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v20; // x24
  int32_t v21; // w25
  _DWORD *v22; // x26
  __int64 methodPtr_low; // x10
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int v30; // w8
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  if ( (byte_4B67187 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1BE4ACC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v12);
    sub_1BE4ACC(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v13);
    sub_1BE4ACC(&QuestRestrictionEntity_TypeInfo, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B67187 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
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
                   (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v30 = v22[5];
          v17 = (int64_t)Instance;
          if ( !v30 || v30 == phase )
          {
            if ( !v20 )
              break;
            items = v20->fields._items;
            v32 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v20->fields._version;
            if ( !items )
              break;
            size = v20->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v20,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = &items->obj.klass + size;
              v20->fields._size = size + 1;
              v34[4] = (Il2CppClass *)v17;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v34 + 4), v17, v24, v25, v26, v27, v28, v29);
            }
          }
        }
      }
      if ( Count == ++v21 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BE4D28(Instance, v17);
  }
LABEL_22:
  if ( !v20 )
    goto LABEL_24;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v20,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_40484064(
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
  int64_t v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_object__o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x26
  int32_t v27; // w27
  int64_t v28; // x28
  __int64 methodPtr_low; // x10
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int v36; // w8
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  System_Object_array *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  PartyOrganizationUtility_o *v59; // [xsp+0h] [xbp-70h]

  if ( (byte_4B67188 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questRestrictionEntityList);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_RestrictionMaster___, v9);
    sub_1BE4ACC(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v11);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v12);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v17);
    sub_1BE4ACC(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v18);
    sub_1BE4ACC(&QuestRestrictionEntity_TypeInfo, v19);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4B67188 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v59 = (PartyOrganizationUtility_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
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
                   (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v28 = (int64_t)Instance;
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
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v36 = *(_DWORD *)(v28 + 20);
          v22 = (int64_t)Instance;
          if ( !v36 || v36 == phase )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v38 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v40[4] = (Il2CppClass *)v22;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v40 + 4), v22, v30, v31, v32, v33, v34, v35);
            }
            if ( !v26 )
              break;
            v47 = v26->fields._items;
            v48 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v26->fields._version;
            if ( !v47 )
              break;
            v49 = v26->fields._size;
            if ( (unsigned int)v49 >= v47->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)v28,
                *(const MethodInfo_35EC224 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
            }
            else
            {
              v50 = &v47->obj.klass + v49;
              v26->fields._size = v49 + 1;
              v50[4] = (Il2CppClass *)v28;
              sub_1BE4A70((PartyOrganizationUtility_o *)(v50 + 4), v28, v41, v42, v43, v44, v45, v46);
            }
          }
        }
      }
      if ( Count == ++v27 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1BE4D28(Instance, v22);
  }
LABEL_27:
  if ( !v26 )
    goto LABEL_30;
  v51 = System_Collections_Generic_List_object___ToArray(
          v26,
          (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  v59->klass = (PartyOrganizationUtility_c *)v51;
  sub_1BE4A70(v59, (int64_t)v51, v52, v53, v54, v55, v56, v57);
  if ( !v25 )
    goto LABEL_30;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v25,
                                      (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}