void __fastcall EventFatigueRecoveryMaster___ctor(EventFatigueRecoveryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B0F9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
    byte_4A5B0F9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    299,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntity(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B0F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
    byte_4A5B0F7 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventFatigueRecoveryEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_311DC8C *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
}


EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntityDefinitely(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  EventFatigueRecoveryEntity_o *v7; // x22
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v11; // w23
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B0FA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventFatigueRecoveryEntity_TypeInfo);
    byte_4A5B0FA = 1;
  }
  v7 = (EventFatigueRecoveryEntity_o *)sub_1B887FC(EventFatigueRecoveryEntity_TypeInfo);
  EventFatigueRecoveryEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1B8880C(list, v9);
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        methodPtr_low = LOBYTE(EventFatigueRecoveryEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventFatigueRecoveryEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( LODWORD(list->fields.items) == eventId && LODWORD(list[1].klass) == idx )
            v7 = (EventFatigueRecoveryEntity_o *)list;
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v11;
          if ( list )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
  return v7;
}


System_Int32_array *__fastcall EventFatigueRecoveryMaster__GetOpenRecoveryNum(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  const MethodInfo *klass_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  System_Collections_ObjectModel_Collection_T__o *v9; // x23
  __int64 methodPtr_low; // x10
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4A5B0FB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&EventFatigueRecoveryEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5B0FB = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_22;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_22;
    v9 = list;
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
          if ( !v5 )
            goto LABEL_22;
          klass_low = (const MethodInfo *)LODWORD(v9[1].klass);
          items = v5->fields._items;
          v12 = Method_System_Collections_Generic_List_int__Add__;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_22;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v5,
              (int32_t)klass_low,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v5->fields._size = size + 1;
            items->m_Items[size + 1] = (int)klass_low;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_22;
  }
  if ( !v5 )
LABEL_22:
    sub_1B8880C(list, klass_low);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall EventFatigueRecoveryMaster__GetRecoverydBgId(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 lookup_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v8; // x21
  int32_t lookup_high; // w23
  int v10; // w28
  int32_t v11; // w22
  DataManager_o *v12; // x24
  __int64 methodPtr_low; // x10

  if ( (byte_4A5B0FC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1B885B0(&EventFatigueRecoveryEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0FC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(Instance, lookup_low);
  }
  v8 = (CommonReleaseMaster_o *)Instance;
  lookup_high = 0;
  v10 = 0;
  v11 = 0;
  while ( v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v11,
                                    (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Instance )
      {
        v12 = Instance;
        methodPtr_low = LOBYTE(EventFatigueRecoveryEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Instance->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (EventFatigueRecoveryEntity_c *)Instance->klass->_2.typeHierarchy[methodPtr_low - 1] == EventFatigueRecoveryEntity_TypeInfo )
        {
          if ( Instance->fields.m_CachedPtr == eventId )
          {
            lookup_low = LODWORD(Instance->fields.lookup);
            if ( (int)lookup_low < 1 )
              goto LABEL_15;
            if ( !v8 )
              goto LABEL_18;
            Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v8, lookup_low, 0LL, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
LABEL_15:
              if ( v10 < *((_DWORD *)&v12->fields.UnityEngine_Behaviour_Fields + 1) )
              {
                lookup_high = HIDWORD(v12->fields.lookup);
                v10 = *((_DWORD *)&v12->fields.UnityEngine_Behaviour_Fields + 1);
              }
            }
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
          ++v11;
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

  if ( (byte_4A5B0F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
    byte_4A5B0F8 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
}