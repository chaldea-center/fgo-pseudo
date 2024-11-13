void __fastcall QuestRestrictionMaster___ctor(QuestRestrictionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B167A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__, method, v2);
    byte_4B167A3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    176,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string___ctor__);
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

  if ( (byte_4B167A1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    byte_4B167A1 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(
                         questId,
                         phase,
                         restrictionId,
                         *(const MethodInfo **)&restrictionId);
  return (QuestRestrictionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionMaster__GetRestrictionName(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  void *Instance; // x0
  __int64 v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  int32_t Count; // w0
  int32_t v21; // w23
  Il2CppObject *Entity; // x25
  int32_t i; // w24
  __int64 methodPtr_low; // x10
  int v25; // w8
  System_String_o *result; // x0

  if ( (byte_4B167A6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RestrictionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&QuestRestrictionEntity_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B167A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_26;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v21 = Count;
  Entity = 0LL;
  for ( i = 0; i != v21; ++i )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_26;
    Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 i,
                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      v25 = *((_DWORD *)Instance + 5);
      if ( v25 != phase )
      {
        if ( !Entity )
        {
          if ( v25 )
          {
            Entity = 0LL;
          }
          else
          {
            if ( !v19 )
              goto LABEL_26;
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v19,
                       *((_DWORD *)Instance + 6),
                       (const MethodInfo_31B2E40 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
          }
        }
        continue;
      }
      if ( v19 )
      {
        result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                      v19,
                                      *((_DWORD *)Instance + 6),
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( result )
          return (System_String_o *)result[1].klass;
        return result;
      }
LABEL_26:
      sub_1BCAA3C(Instance, v18);
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

  if ( (byte_4B167A2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B167A2 = 1;
  }
  PK = (Il2CppObject *)QuestRestrictionEntity__CreatePK(questId, phase, restrictionId, *(const MethodInfo **)&phase);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestRestrictionMaster__QuestRestrictionEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList(
        QuestRestrictionMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
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
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  void *Instance; // x0
  int64_t v26; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x22
  int32_t Count; // w23
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_object__o *v32; // x24
  int32_t v33; // w25
  _DWORD *v34; // x26
  __int64 methodPtr_low; // x10
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int v42; // w8
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0

  if ( (byte_4B167A4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RestrictionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&QuestRestrictionEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B167A4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_24;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v32 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                       v29,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v33,
                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v34 = Instance;
      methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v27 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v27,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v42 = v34[5];
          v26 = (int64_t)Instance;
          if ( !v42 || v42 == phase )
          {
            if ( !v32 )
              break;
            items = v32->fields._items;
            v44 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v32->fields._version;
            if ( !items )
              break;
            size = v32->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v32,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v46 = &items->obj.klass + size;
              v32->fields._size = size + 1;
              v46[4] = (Il2CppClass *)v26;
              sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 4), v26, v36, v37, v38, v39, v40, v41);
            }
          }
        }
      }
      if ( Count == ++v33 )
        goto LABEL_22;
    }
LABEL_24:
    sub_1BCAA3C(Instance, v26);
  }
LABEL_22:
  if ( !v32 )
    goto LABEL_24;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v32,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
RestrictionEntity_array *__fastcall QuestRestrictionMaster__getRestrictionList_40265240(
        QuestRestrictionMaster_o *this,
        QuestRestrictionEntity_array **questRestrictionEntityList,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  void *Instance; // x0
  int64_t v35; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v36; // x23
  int32_t Count; // w25
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Collections_Generic_List_object__o *v41; // x24
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_List_object__o *v45; // x26
  int32_t v46; // w27
  int64_t v47; // x28
  __int64 methodPtr_low; // x10
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int v55; // w8
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  System_Object_array *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  PartyOrganizationUtility_o *v78; // [xsp+0h] [xbp-70h]

  if ( (byte_4B167A5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questRestrictionEntityList,
      *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_RestrictionMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_RestrictionEntity___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_RestrictionEntity__TypeInfo, v28, v29);
    sub_1BCA7E0(&QuestRestrictionEntity_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    byte_4B167A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v78 = (PartyOrganizationUtility_o *)questRestrictionEntityList;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_RestrictionMaster___);
  if ( !this->fields.list )
    goto LABEL_30;
  v36 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_RestrictionEntity__TypeInfo,
                                                       v38,
                                                       v39,
                                                       v40);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_RestrictionEntity___ctor__);
  v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestRestrictionEntity__TypeInfo,
                                                       v42,
                                                       v43,
                                                       v44);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestRestrictionEntity___ctor__);
  if ( Count >= 1 )
  {
    v46 = 0;
    while ( 1 )
    {
      Instance = this->fields.list;
      if ( !Instance )
        break;
      Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                   (System_Collections_ObjectModel_Collection_T__o *)Instance,
                   v46,
                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        break;
      v47 = (int64_t)Instance;
      methodPtr_low = LOBYTE(QuestRestrictionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(QuestRestrictionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != QuestRestrictionEntity_TypeInfo )
      {
        break;
      }
      if ( *((_DWORD *)Instance + 4) == questId )
      {
        if ( !v36 )
          break;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     v36,
                     *((_DWORD *)Instance + 6),
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_RestrictionMaster__RestrictionEntity__int__GetEntity__);
        if ( Instance )
        {
          v55 = *(_DWORD *)(v47 + 20);
          v35 = (int64_t)Instance;
          if ( !v55 || v55 == phase )
          {
            if ( !v41 )
              break;
            items = v41->fields._items;
            v57 = Method_System_Collections_Generic_List_RestrictionEntity__Add__;
            ++v41->fields._version;
            if ( !items )
              break;
            size = v41->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v41,
                (Il2CppObject *)Instance,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
            }
            else
            {
              v59 = &items->obj.klass + size;
              v41->fields._size = size + 1;
              v59[4] = (Il2CppClass *)v35;
              sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 4), v35, v49, v50, v51, v52, v53, v54);
            }
            if ( !v45 )
              break;
            v66 = v45->fields._items;
            v67 = Method_System_Collections_Generic_List_QuestRestrictionEntity__Add__;
            ++v45->fields._version;
            if ( !v66 )
              break;
            v68 = v45->fields._size;
            if ( (unsigned int)v68 >= v66->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v45,
                (Il2CppObject *)v47,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
            }
            else
            {
              v69 = &v66->obj.klass + v68;
              v45->fields._size = v68 + 1;
              v69[4] = (Il2CppClass *)v47;
              sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 4), v47, v60, v61, v62, v63, v64, v65);
            }
          }
        }
      }
      if ( Count == ++v46 )
        goto LABEL_27;
    }
LABEL_30:
    sub_1BCAA3C(Instance, v35);
  }
LABEL_27:
  if ( !v45 )
    goto LABEL_30;
  v70 = System_Collections_Generic_List_object___ToArray(
          v45,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_QuestRestrictionEntity__ToArray__);
  v78->klass = (PartyOrganizationUtility_c *)v70;
  sub_1BCA784(v78, (int64_t)v70, v71, v72, v73, v74, v75, v76);
  if ( !v41 )
    goto LABEL_30;
  return (RestrictionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v41,
                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_RestrictionEntity__ToArray__);
}