void __fastcall EventFatigueRecoveryMaster___ctor(EventFatigueRecoveryMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB466A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__, method);
    byte_4BB466A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    303,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntity(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB4668 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__,
      *(_QWORD *)&eventId);
    byte_4BB4668 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&priority);
  return (EventFatigueRecoveryEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                           PK,
                                           (const MethodInfo_323D0DC *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventFatigueRecoveryEntity_o *__fastcall EventFatigueRecoveryMaster__GetEntityDefinitely(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  EventFatigueRecoveryEntity_o *v9; // x22
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w23

  if ( (byte_4BB466B & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__, v7);
    sub_1C13D24(&EventFatigueRecoveryEntity_TypeInfo, v8);
    byte_4BB466B = 1;
  }
  v9 = (EventFatigueRecoveryEntity_o *)sub_1C13F70(EventFatigueRecoveryEntity_TypeInfo);
  EventFatigueRecoveryEntity___ctor(v9, v10);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_12:
    sub_1C13F80(list, v11);
  v13 = 0;
  while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v13,
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
      if ( list )
      {
        if ( LODWORD(list->fields.items) == eventId && LODWORD(list[1].klass) == idx )
          v9 = (EventFatigueRecoveryEntity_o *)list;
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v13;
        if ( list )
          continue;
      }
    }
    goto LABEL_12;
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall EventFatigueRecoveryMaster__GetOpenRecoveryNum(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x21
  const MethodInfo *klass_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  System_Collections_ObjectModel_Collection_T__o *v14; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_4BB466C & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4BB466C = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
    if ( !list )
      goto LABEL_20;
    v14 = list;
    if ( LODWORD(list->fields.items) == eventId )
    {
      if ( LODWORD(list[1].klass) )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)EventFatigueRecoveryEntity__IsOpen(
                                                                   (EventFatigueRecoveryEntity_o *)list,
                                                                   klass_low);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_20;
          klass_low = (const MethodInfo *)LODWORD(v14[1].klass);
          items = v10->fields._items;
          v16 = Method_System_Collections_Generic_List_int__Add__;
          ++v10->fields._version;
          if ( !items )
            goto LABEL_20;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v10,
              (int32_t)klass_low,
              *(const MethodInfo_36101A8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v10->fields._size = size + 1;
            items->m_Items[size + 1] = (int)klass_low;
          }
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v10 )
LABEL_20:
    sub_1C13F80(list, klass_low);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventFatigueRecoveryMaster__GetRecoverydBgId(
        EventFatigueRecoveryMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 lookup_low; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x8
  CommonReleaseMaster_o *v11; // x21
  int32_t lookup_high; // w23
  int v13; // w27
  int32_t v14; // w22
  DataManager_o *v15; // x24

  if ( (byte_4BB466D & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB466D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_CommonReleaseMaster___),
        (list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list) == 0LL) )
  {
LABEL_16:
    sub_1C13F80(Instance, lookup_low);
  }
  v11 = (CommonReleaseMaster_o *)Instance;
  lookup_high = 0;
  v13 = 0;
  v14 = 0;
  while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Count__) )
  {
    Instance = (DataManager_o *)this->fields.list;
    if ( Instance )
    {
      Instance = (DataManager_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                    (System_Collections_ObjectModel_Collection_T__o *)Instance,
                                    v14,
                                    (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventFatigueRecoveryEntity__get_Item__);
      if ( Instance )
      {
        v15 = Instance;
        if ( Instance->fields.m_CachedPtr == eventId )
        {
          lookup_low = LODWORD(Instance->fields.lookup);
          if ( (int)lookup_low < 1 )
            goto LABEL_13;
          if ( !v11 )
            goto LABEL_16;
          Instance = (DataManager_o *)CommonReleaseMaster__IsOpen(v11, lookup_low, 0LL, 0, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
LABEL_13:
            if ( v13 < *((_DWORD *)&v15->fields.UnityEngine_Behaviour_Fields + 1) )
            {
              lookup_high = HIDWORD(v15->fields.lookup);
              v13 = *((_DWORD *)&v15->fields.UnityEngine_Behaviour_Fields + 1);
            }
          }
        }
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v14;
        if ( list )
          continue;
      }
    }
    goto LABEL_16;
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

  if ( (byte_4BB4669 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__,
      entity);
    byte_4BB4669 = 1;
  }
  PK = (Il2CppObject *)EventFatigueRecoveryEntity__CreatePK(eventId, priority, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventFatigueRecoveryMaster__EventFatigueRecoveryEntity__string__TryGetEntity__);
}