void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4CB1 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method);
    byte_4BB4CB1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    180,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_4BB4CAF & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4BB4CAF = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_323D0DC *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
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

  if ( (byte_4BB4CB4 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB4CB4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
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
                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
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
                       (const MethodInfo_3238624 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v13 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v13,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_3238624 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_24:
      sub_1C13F80(Instance, v12);
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

  if ( (byte_4BB4CB0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__, entity);
    byte_4BB4CB0 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
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
  int64_t v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x22
  int32_t Count; // w23
  System_Collections_Generic_List_object__o *v19; // x24
  int32_t v20; // w25
  _DWORD *v21; // x26
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w8
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4BB4CB2 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      *(_QWORD *)&questId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_RestrictionMaster___, v8);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BB4CB2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_22;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
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
                   (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
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
                     (const MethodInfo_3238624 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v28 = v21[5];
          v16 = (int64_t)Instance;
          if ( !v28 || v28 == phase )
          {
            if ( !v19 )
              break;
            items = v19->fields._items;
            v30 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v19->fields._version;
            if ( !items )
              break;
            size = v19->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v19,
                (Il2CppObject *)Instance,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &items->obj.klass + size;
              v19->fields._size = size + 1;
              v32[4] = (Il2CppClass *)v16;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v32 + 4), v16, v22, v23, v24, v25, v26, v27);
            }
          }
        }
      }
      if ( Count == ++v20 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C13F80(Instance, v16);
  }
LABEL_20:
  if ( !v19 )
    goto LABEL_22;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v19,
                                      (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_40703924(
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
  int64_t v22; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  int32_t Count; // w25
  System_Collections_Generic_List_object__o *v25; // x24
  System_Collections_Generic_List_object__o *v26; // x26
  int32_t v27; // w27
  int64_t v28; // x28
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int v35; // w8
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  System_Object_array *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  PartyOrganizationUtility_o *v58; // [xsp+8h] [xbp-68h]

  if ( (byte_4BB4CB3 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__,
      questRestrictionEntityList);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_RestrictionMaster___, v10);
    sub_1C13D24(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v17);
    sub_1C13D24(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v18);
    sub_1C13D24(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    byte_4BB4CB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v58 = (PartyOrganizationUtility_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_28;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Count__);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_RestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
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
                   (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_QuestRestrictionEntity__get_Item__);
      if ( !Instance )
        break;
      v28 = (int64_t)Instance;
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v23 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v23,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_3238624 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v35 = *(_DWORD *)(v28 + 20);
          v22 = (int64_t)Instance;
          if ( !v35 || v35 == phase )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v37 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)Instance,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v39[4] = (Il2CppClass *)v22;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v39 + 4), v22, v29, v30, v31, v32, v33, v34);
            }
            if ( !v26 )
              break;
            v46 = v26->fields._items;
            v47 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v26->fields._version;
            if ( !v46 )
              break;
            v48 = v26->fields._size;
            if ( (unsigned int)v48 >= v46->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v26,
                (Il2CppObject *)v28,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
            }
            else
            {
              v49 = &v46->obj.klass + v48;
              v26->fields._size = v48 + 1;
              v49[4] = (Il2CppClass *)v28;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v49 + 4), v28, v40, v41, v42, v43, v44, v45);
            }
          }
        }
      }
      if ( Count == ++v27 )
        goto LABEL_25;
    }
LABEL_28:
    sub_1C13F80(Instance, v22);
  }
LABEL_25:
  if ( !v26 )
    goto LABEL_28;
  v50 = System_Collections_Generic_List_object___ToArray(
          v26,
          (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  v58->klass = (PartyOrganizationUtility_c *)v50;
  sub_1C13CC8(v58, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  if ( !v25 )
    goto LABEL_28;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v25,
                                      (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}