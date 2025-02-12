void __fastcall EventScriptMaster___ctor(EventScriptMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB4801 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__, method);
    byte_4BB4801 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    219,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_array *__fastcall EventScriptMaster__GetAvailable(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x22
  Il2CppObject *v22; // x23
  int32_t Count; // w0
  int32_t v24; // w23
  int32_t v25; // w24
  const MethodInfo *v26; // x3
  int64_t v27; // x25
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Comparison_T__o *v38; // x19
  Il2CppObject *v39; // x20
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UserEventEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB4806 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v5);
    sub_1C13D24(&System_Comparison_EventScriptEntity__TypeInfo, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventScriptReleaseMaster___, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity__ToArray__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v13);
    sub_1C13D24(&NetworkManager_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&Method_EventScriptMaster___c__GetAvailable_b__7_0__, v16);
    sub_1C13D24(&EventScriptMaster___c_TypeInfo, v17);
    byte_4BB4806 = 1;
  }
  entity = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( eventId <= 0 )
  {
    if ( !v18 )
      goto LABEL_39;
    System_Collections_Generic_List_object___ToArray(
      v18,
      (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventScriptReleaseMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  v22 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v20);
    byte_4BAF1E5 = 1;
  }
  Instance = (int64_t)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (int64_t)NetworkManager_TypeInfo;
  }
  if ( !v22
    || (UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)v22,
          &entity,
          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
          eventId,
          0LL),
        (Instance = (int64_t)this->fields.list) == 0) )
  {
LABEL_39:
    sub_1C13F80(Instance, v20);
  }
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)Instance,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v24 = Count;
    v25 = 0;
    do
    {
      Instance = (int64_t)this->fields.list;
      if ( !Instance )
        goto LABEL_39;
      Instance = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v25,
                            (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !Instance )
        goto LABEL_39;
      v27 = Instance;
      if ( *(_DWORD *)(Instance + 16) == eventId )
      {
        Instance = (int64_t)entity;
        if ( !entity
          || (Instance = UserEventEntity__getScriptFlag(entity, *(_DWORD *)(v27 + 20), 0LL), (Instance & 1) == 0) )
        {
          if ( !MasterData_object )
            goto LABEL_39;
          Instance = EventScriptReleaseMaster__isAvailable(
                       (EventScriptReleaseMaster_o *)MasterData_object,
                       eventId,
                       *(_DWORD *)(v27 + 20),
                       v26);
          if ( (Instance & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_39;
            items = v18->fields._items;
            v35 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
            ++v18->fields._version;
            if ( !items )
              goto LABEL_39;
            size = v18->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v18,
                (Il2CppObject *)v27,
                *(const MethodInfo_362D1CC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              v18->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v27;
              sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 4), v27, v28, v29, v30, v31, v32, v33);
            }
          }
        }
      }
    }
    while ( v24 != ++v25 );
  }
  Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    Instance = (int64_t)EventScriptMaster___c_TypeInfo;
  }
  v38 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v38 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (int64_t)EventScriptMaster___c_TypeInfo;
    }
    v39 = **(Il2CppObject ***)(Instance + 184);
    v38 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v38, v39, Method_EventScriptMaster___c__GetAvailable_b__7_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_EventScriptEntity__o *)v38;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v38, v41, v42, v43, v44, v45, v46);
  }
  if ( !v18 )
    goto LABEL_39;
  System_Collections_Generic_List_object___Sort_56814736(
    v18,
    v38,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  return (EventScriptEntity_array *)System_Collections_Generic_List_object___ToArray(
                                      v18,
                                      (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventScriptEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__GetEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB47FF & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__, *(_QWORD *)&eventId);
    byte_4BB47FF = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&flagId);
  return (EventScriptEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  PK,
                                  (const MethodInfo_323D0DC *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptMaster__IsRaceResultFlagged(
        EventScriptMaster_o *this,
        int32_t eventId,
        int32_t termId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t Count; // w0
  int32_t v15; // w22
  int32_t v16; // w23
  int v17; // w21
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB4807 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v7);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMaster___, v8);
    sub_1C13D24(&NetworkManager_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB4807 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, v12);
    byte_4BAF1E5 = 1;
  }
  Instance = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_25;
  if ( UserEventMaster__TryGetEntity(
         (UserEventMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
         eventId,
         0LL) )
  {
    Instance = this->fields.list;
    if ( !Instance )
      goto LABEL_25;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              (System_Collections_ObjectModel_Collection_T__o *)Instance,
              (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
    if ( Count >= 1 )
    {
      v15 = Count;
      v16 = 0;
      v17 = termId + 100 * eventId;
      while ( 1 )
      {
        Instance = this->fields.list;
        if ( !Instance )
          goto LABEL_25;
        Instance = System_Collections_ObjectModel_Collection_object___get_Item(
                     (System_Collections_ObjectModel_Collection_T__o *)Instance,
                     v16,
                     (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
        if ( !Instance )
          goto LABEL_25;
        if ( *((_DWORD *)Instance + 4) == eventId && *((_DWORD *)Instance + 7) == 2 && *((_DWORD *)Instance + 10) == v17 )
          break;
        if ( v15 == ++v16 )
          return 0;
      }
      if ( entity )
        return UserEventEntity__getScriptFlag(entity, *((_DWORD *)Instance + 5), 0LL);
LABEL_25:
      sub_1C13F80(Instance, v12);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventScriptMaster__TryGetEntity(
        EventScriptMaster_o *this,
        EventScriptEntity_o **entity,
        int32_t eventId,
        int32_t flagId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BB4800 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__, entity);
    byte_4BB4800 = 1;
  }
  PK = (Il2CppObject *)EventScriptEntity__CreatePK(eventId, flagId, *(const MethodInfo **)&eventId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_EventScriptMaster__EventScriptEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity(
        EventScriptMaster_o *this,
        int32_t playType,
        int32_t eventId,
        int32_t termId,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v11; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w23
  int v16; // w24

  if ( (byte_4BB4802 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&playType);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v11);
    byte_4BB4802 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    v16 = termId + 100 * eventId;
    while ( 1 )
    {
      result = (EventScriptEntity_o *)this->fields.list;
      if ( !result )
        break;
      result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                        (System_Collections_ObjectModel_Collection_T__o *)result,
                                        v15,
                                        (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !result )
        break;
      if ( result->fields.playType == playType && result->fields.targetId == v16 && result->fields.args == rank )
        return result;
      if ( v14 == ++v15 )
        return 0LL;
    }
LABEL_14:
    sub_1C13F80(result, *(_QWORD *)&playType);
  }
  return 0LL;
}


EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_40403860(
        EventScriptMaster_o *this,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v12; // w10

  if ( (byte_4BB4803 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, scriptId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v5);
    byte_4BB4803 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_16:
    sub_1C13F80(result, scriptId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v8 = Count;
  v9 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_16;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v9,
                                      (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    if ( !result )
      goto LABEL_16;
    scriptIds = result->fields.scriptIds;
    if ( scriptIds )
    {
      max_length = scriptIds->max_length;
      if ( max_length >= 1 )
        break;
    }
LABEL_13:
    if ( ++v9 == v8 )
      return 0LL;
  }
  v12 = 0;
  while ( scriptIds->m_Items[v12] != scriptId )
  {
    if ( max_length == ++v12 )
      goto LABEL_13;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
EventScriptEntity_o *__fastcall EventScriptMaster__getRaceResultEntity_40404084(
        EventScriptMaster_o *this,
        int32_t playType,
        int64_t scriptId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  EventScriptEntity_o *result; // x0
  int32_t Count; // w0
  int32_t v10; // w22
  int32_t v11; // w23
  struct System_Int64_array *scriptIds; // x8
  int max_length; // w9
  int v14; // w10

  if ( (byte_4BB4804 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&playType);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v7);
    byte_4BB4804 = 1;
  }
  result = (EventScriptEntity_o *)this->fields.list;
  if ( !result )
LABEL_17:
    sub_1C13F80(result, *(_QWORD *)&playType);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)result,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  if ( Count < 1 )
    return 0LL;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    result = (EventScriptEntity_o *)this->fields.list;
    if ( !result )
      goto LABEL_17;
    result = (EventScriptEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                      (System_Collections_ObjectModel_Collection_T__o *)result,
                                      v11,
                                      (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
    if ( !result )
      goto LABEL_17;
    if ( result->fields.playType == playType )
    {
      scriptIds = result->fields.scriptIds;
      if ( scriptIds )
      {
        max_length = scriptIds->max_length;
        if ( max_length >= 1 )
          break;
      }
    }
LABEL_14:
    if ( ++v11 == v10 )
      return 0LL;
  }
  v14 = 0;
  while ( scriptIds->m_Items[v14] != scriptId )
  {
    if ( max_length == ++v14 )
      goto LABEL_14;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventScriptMaster__getRaceTermIdEntity(
        EventScriptMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  int32_t v3; // w20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
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
  void *list; // x0
  int32_t Count; // w22
  Il2CppObject *MasterData_object; // x21
  UserEventEntity_o *EntityDefinitely; // x20
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Comparison_T__o *v34; // x19
  Il2CppObject *v35; // x22
  struct EventScriptMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int v43; // w23
  int32_t v44; // w19

  v3 = eventId;
  if ( (byte_4BB4805 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__, v5);
    sub_1C13D24(&System_Comparison_EventScriptEntity__TypeInfo, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventMaster___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity__Sort__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity___ctor__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity__get_Count__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventScriptEntity__get_Item__, v12);
    sub_1C13D24(&System_Collections_Generic_List_EventScriptEntity__TypeInfo, v13);
    sub_1C13D24(&NetworkManager_TypeInfo, v14);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C13D24(&Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, v16);
    sub_1C13D24(&EventScriptMaster___c_TypeInfo, v17);
    byte_4BB4805 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_41;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Count__);
  list = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_41;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)list,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BAF1E5 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, *(_QWORD *)&eventId);
    byte_4BAF1E5 = 1;
  }
  list = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    list = NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_41;
  EntityDefinitely = UserEventMaster__GetEntityDefinitely(
                       (UserEventMaster_o *)MasterData_object,
                       *(_QWORD *)(*((_QWORD *)list + 23) + 64LL),
                       v3,
                       0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventScriptEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventScriptEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v23,
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_EventScriptEntity__get_Item__);
      if ( !list )
        break;
      *(_QWORD *)&eventId = list;
      if ( *((_DWORD *)list + 7) == 2 )
      {
        if ( !v22 )
          break;
        items = v22->fields._items;
        v31 = Method_System_Collections_Generic_List_EventScriptEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          break;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)list,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v33[4] = *(Il2CppClass **)&eventId;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v33 + 4), *(int64_t *)&eventId, v24, v25, v26, v27, v28, v29);
        }
      }
      if ( Count == ++v23 )
        goto LABEL_23;
    }
LABEL_41:
    sub_1C13F80(list, *(_QWORD *)&eventId);
  }
LABEL_23:
  list = EventScriptMaster___c_TypeInfo;
  if ( !EventScriptMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventScriptMaster___c_TypeInfo);
    list = EventScriptMaster___c_TypeInfo;
  }
  v34 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = EventScriptMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)list + 23);
    v34 = (System_Comparison_T__o *)sub_1C13F70(System_Comparison_EventScriptEntity__TypeInfo);
    System_Comparison_object____ctor(v34, v35, Method_EventScriptMaster___c__getRaceTermIdEntity_b__6_0__, 0LL);
    static_fields = EventScriptMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_EventScriptEntity__o *)v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__6_0, (int64_t)v34, v37, v38, v39, v40, v41, v42);
  }
  if ( !v22 )
    goto LABEL_41;
  System_Collections_Generic_List_object___Sort_56814736(
    v22,
    v34,
    (const MethodInfo_362EC90 *)Method_System_Collections_Generic_List_EventScriptEntity__Sort__);
  list = System_Collections_Generic_List_object___get_Item(
           v22,
           v22->fields._size - 1,
           (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
  if ( !list )
    goto LABEL_41;
  v43 = *((_DWORD *)list + 10);
  if ( v22->fields._size >= 1 )
  {
    v44 = 0;
    while ( 1 )
    {
      list = System_Collections_Generic_List_object___get_Item(
               v22,
               v44,
               (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
      if ( !list || !EntityDefinitely )
        goto LABEL_41;
      if ( !UserEventEntity__getScriptFlag(EntityDefinitely, *((_DWORD *)list + 5), 0LL) )
        break;
      if ( ++v44 >= v22->fields._size )
        return v43 % 100;
    }
    list = System_Collections_Generic_List_object___get_Item(
             v22,
             v44,
             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventScriptEntity__get_Item__);
    if ( !list )
      goto LABEL_41;
    v43 = *((_DWORD *)list + 10);
  }
  return v43 % 100;
}


void __fastcall EventScriptMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4808 & 1) == 0 )
  {
    sub_1C13D24(&EventScriptMaster___c_TypeInfo, v1);
    byte_4BB4808 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventScriptMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventScriptMaster___c_TypeInfo->static_fields->__9 = (struct EventScriptMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventScriptMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall EventScriptMaster___c___ctor(EventScriptMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventScriptMaster___c___GetAvailable_b__7_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C13F80(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall EventScriptMaster___c___getRaceTermIdEntity_b__6_0(
        EventScriptMaster___c_o *this,
        EventScriptEntity_o *a,
        EventScriptEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C13F80(this, a);
  return b->fields.priority - a->fields.priority;
}