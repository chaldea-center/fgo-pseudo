void __fastcall EventFatigueRecoveryMaster___ctor(EventFatigueRecoveryMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16188 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__,
      method,
      v2);
    byte_4B16188 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    299,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntity(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16186 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&priority);
    byte_4B16186 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventFatigueRecoveryEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_31B3198 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntityDefinitely(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  EventFatigueRecoveryEntity_o *v11; // x22
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v15; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4B16189 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      *(_QWORD *)&idx);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&EventFatigueRecoveryEntity_TypeInfo, v9, v10);
    byte_4B16189 = 1;
  }
  v11 = (EventFatigueRecoveryEntity_o *)sub_1BCAA2C(
                                          EventFatigueRecoveryEntity_TypeInfo,
                                          *(_QWORD *)&eventId,
                                          *(_QWORD *)&idx,
                                          method);
  EventFatigueRecoveryEntity___ctor(v11, v12);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1BCAA3C(list, v13);
  v15 = 0;
  while ( v15 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(EventFatigueRecoveryEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == eventId && LODWORD(list[1].klass) == idx )
            v11 = (EventFatigueRecoveryEntity_o *)list;
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v15;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventFatigueRecoveryMaster__GetOpenRecoveryNum(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
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
  System_Collections_Generic_List_int__o *v18; // x21
  const MethodInfo *klass_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v21; // w22
  System_Collections_ObjectModel_Collection_T__o *v22; // x23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_4B1618A & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&EventFatigueRecoveryEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v16, v17);
    byte_4B1618A = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&eventId,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  v21 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v21,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_22;
    v22 = list;
    methodPtr_low = LOBYTE(EventFatigueRecoveryEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != EventFatigueRecoveryEntity_TypeInfo )
    {
      goto LABEL_22;
    }
    if ( LODWORD(list->fields.items) == eventId )
    {
      if ( LODWORD(list[1].klass) )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)EventFatigueRecoveryEntity__IsOpen(
                                                                   (EventFatigueRecoveryEntity_o *)list,
                                                                   klass_low);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v18 )
            goto LABEL_22;
          klass_low = (const MethodInfo *)LODWORD(v22[1].klass);
          items = v18->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v18->fields._version;
          if ( !items )
            goto LABEL_22;
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v18,
              (int32_t)klass_low,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v18->fields._size = size + 1;
            items->m_Items[size + 1] = (int)klass_low;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_22;
  }
  if ( !v18 )
LABEL_22:
    sub_1BCAA3C(list, klass_low);
  return System_Collections_Generic_List_int___ToArray(
           v18,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventFatigueRecoveryMaster__GetRecoverydBgId(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 lookup_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v16; // x21
  int32_t lookup_high; // w23
  int v18; // w28
  int32_t v19; // w22
  DataManager_o *v20; // x24
  __int64 methodPtr_low; // x10

  if ( (byte_4B1618B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v7, v8);
    sub_1BCA7E0(&EventFatigueRecoveryEntity_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B1618B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_18:
    sub_1BCAA3C(Instance, lookup_low);
  }
  v16 = (CommonReleaseMaster_o *)Instance;
  lookup_high = 0;
  v18 = 0;
  v19 = 0;
  while ( v19 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v19,
                                    (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v20 = Instance;
        methodPtr_low = LOBYTE(EventFatigueRecoveryEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventFatigueRecoveryEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId )
          {
            lookup_low = LODWORD(Instance->fields.lookup);
            if ( (int)lookup_low < 1 )
              goto LABEL_15;
            if ( !v16 )
              goto LABEL_18;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v16, lookup_low, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_15:
              if ( v18 < *((_DWORD *)&v20->fields.UnityEngine_Behaviour_Fields + 1) )
              {
                lookup_high = HIDWORD(v20->fields.lookup);
                v18 = *((_DWORD *)&v20->fields.UnityEngine_Behaviour_Fields + 1);
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v19;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_18;
  }
  return lookup_high;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventFatigueRecoveryMaster__TryGetEntity(
        EventFatigueRecoveryMaster_o *this,
        EventFatigueRecoveryEntity_o **entity,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16187 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&eventId);
    byte_4B16187 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
}