void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCB20 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
    byte_4BDCB20 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_325E55C *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_4BDCB1E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
    byte_4BDCB1E = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3260880 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
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
  int v14; // w8
  System_String_o *result; // x0

  if ( (byte_4BDCB23 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCB23 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v11 = Count;
  Entity = 0LL;
  for ( i = 0; i != v11; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_24;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    if ( !Instance )
      goto LABEL_24;
    if ( *((_DWORD *)Instance + 4) == questId )
    {
      v14 = *((_DWORD *)Instance + 5);
      if ( v14 != phase )
      {
        if ( !Entity )
        {
          if ( v14 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v9 )
              goto LABEL_24;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v9,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_325BDC8 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v9 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v9,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_24:
      sub_1C22094(Instance, v8);
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

  if ( (byte_4BDCB1F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
    byte_4BDCB1F = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  int64_t v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w25
  _DWORD *v13; // x26
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int v20; // w8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BDCB21 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCB21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
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
                   (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v13 = Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v9 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v9,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v20 = v13[5];
          v8 = (int64_t)Instance;
          if ( !v20 || v20 == phase )
          {
            if ( !v11 )
              break;
            items = v11->fields._items;
            v22 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v11->fields._version;
            if ( !items )
              break;
            size = v11->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                (Il2CppObject *)Instance,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              v24 = &items->obj.klass + size;
              v11->fields._size = size + 1;
              v24[4] = (Il2CppClass *)v8;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v24 + 4), v8, v14, v15, v16, v17, v18, v19);
            }
          }
        }
      }
      if ( Count == ++v12 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C22094(Instance, v8);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v11,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_40806780(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  void *Instance; // x0
  int64_t v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_object__o *v13; // x24
  System_Collections_Generic_List_object__o *v14; // x26
  int32_t v15; // w27
  int64_t v16; // x28
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int v23; // w8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  System_Object_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  PartyOrganizationUtility_o *v46; // [xsp+8h] [xbp-68h]

  if ( (byte_4BDCB22 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
    sub_1C21E38(&Method_DataManager_GetMasterData_RestrictionMaster___);
    sub_1C21E38(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_RestrictionEntity__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDCB22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v46 = (PartyOrganizationUtility_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v15,
                   (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v16 = (int64_t)Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v11 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v11,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v23 = *(_DWORD *)(v16 + 20);
          v10 = (int64_t)Instance;
          if ( !v23 || v23 == phase )
          {
            if ( !v13 )
              break;
            items = v13->fields._items;
            v25 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                (Il2CppObject *)Instance,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v10;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), v10, v17, v18, v19, v20, v21, v22);
            }
            if ( !v14 )
              break;
            v34 = v14->fields._items;
            v35 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v14->fields._version;
            if ( !v34 )
              break;
            v36 = v14->fields._size;
            if ( (unsigned int)v36 >= v34->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                (Il2CppObject *)v16,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &v34->obj.klass + v36;
              v14->fields._size = v36 + 1;
              v37[4] = (Il2CppClass *)v16;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 4), v16, v28, v29, v30, v31, v32, v33);
            }
          }
        }
      }
      if ( Count == ++v15 )
        goto LABEL_25;
    }
LABEL_28:
    sub_1C22094(Instance, v10);
  }
LABEL_25:
  if ( !v14 )
    goto LABEL_28;
  v38 = System_Collections_Generic_List_object___ToArray(
          v14,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  v46->klass = (PartyOrganizationUtility_c *)v38;
  sub_1C21DDC(v46, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  if ( !v13 )
    goto LABEL_28;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v13,
                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}