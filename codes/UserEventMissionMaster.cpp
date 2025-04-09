void __fastcall UserEventMissionMaster___ctor(UserEventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBBB9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__, method);
    byte_49BBBB9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    146,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionEntity_o *__fastcall UserEventMissionMaster__GetEntity(
        UserEventMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49BBBB7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__, userId);
    byte_49BBBB7 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31A2454 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionMaster__TryGetEntity(
        UserEventMissionMaster_o *this,
        UserEventMissionEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_49BBBB8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__, entity);
    byte_49BBBB8 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31A24A0 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
}


int32_t __fastcall UserEventMissionMaster__getAchiveMissionNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return UserEventMissionMaster__getMissionProgressNum(this, eventId, 5, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventMissionMaster__getDailyMissionAchiveNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UserEventMissionEntity_array *UserEventMissionList; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v11; // x8
  int v12; // w24
  DataManager_o *v13; // x22
  int v14; // w25
  int32_t v15; // w23
  UserEventMissionEntity_o *v16; // x26

  if ( (byte_49BBBBC & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49BBBBC = 1;
  }
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(this, eventId, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !UserEventMissionList )
    goto LABEL_23;
  v11 = *(_QWORD *)&UserEventMissionList->max_length;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( (int)v11 >= 1 )
    {
      if ( !(_DWORD)v11 )
LABEL_20:
        sub_1B4D1F4(Instance, v9);
      v13 = Instance;
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = UserEventMissionList->m_Items[v14];
        if ( !v16 || !MasterData_object )
          break;
        Instance = (DataManager_o *)EventMissionMaster__getTargetEventMissionEntity(
                                      (EventMissionMaster_o *)MasterData_object,
                                      eventId,
                                      v16->fields.missionId,
                                      0LL);
        if ( v16->fields.missionProgressType == 5 )
        {
          if ( !Instance )
            break;
          if ( (__int64)v13 >= (__int64)Instance->fields.masterDataBytes
            && (__int64)v13 < (__int64)Instance->fields.saveNameList )
          {
            ++v15;
          }
        }
        if ( v12 == v14 )
          return v15;
        if ( ++v14 >= UserEventMissionList->max_length )
          goto LABEL_20;
      }
LABEL_23:
      sub_1B4D1EC(Instance, v9);
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventMissionEntity__o *__fastcall UserEventMissionMaster__getListFromMissionTargetId(
        UserEventMissionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_49BBBBD & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_UserEventMissionEntity__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo, v10);
    byte_49BBBBD = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B4D1EC(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventMissionEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_UserEventMissionEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_UserEventMissionEntity__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    v28 = v24;
    if ( !v24 )
      sub_1B4D1EC(0LL, v25);
    if ( *(_DWORD *)(v24 + 28) == missionTargetId )
    {
      if ( !v11 )
        sub_1B4D1EC(v24, v25);
      items = v11->fields._items;
      v30 = Method_System_Collections_Generic_List_UserEventMissionEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B4D1EC(v24, v25);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v24,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), v28, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_29;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_29:
    v36 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_UserEventMissionEntity__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventMissionMaster__getMissionProgressNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        int32_t progress_type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  UserEventMissionEntity_array *UserEventMissionList; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x8
  UserEventMissionEntity_array *v12; // x20
  int32_t v13; // w21
  __int64 v14; // x23
  UserEventMissionEntity_o *v15; // x22

  if ( (byte_49BBBBB & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49BBBBB = 1;
  }
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(
                           this,
                           eventId,
                           *(const MethodInfo **)&progress_type);
  if ( !UserEventMissionList )
    goto LABEL_18;
  v11 = *(_QWORD *)&UserEventMissionList->max_length;
  v12 = UserEventMissionList;
  v13 = 0;
  if ( v11 && (int)v11 >= 1 )
  {
    v14 = 0LL;
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= (unsigned int)v11 )
        sub_1B4D1F4(UserEventMissionList, v10);
      v15 = v12->m_Items[v14];
      UserEventMissionList = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)UserEventMissionList,
                                                               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !v15 )
        break;
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (UserEventMissionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)UserEventMissionList,
                                                               v15->fields.missionId,
                                                               (const MethodInfo_319D99C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !UserEventMissionList )
        break;
      if ( UserEventMissionList->max_length != 3
        || (UserEventMissionList = (UserEventMissionEntity_array *)UserEventMissionEntity__IsTodayMissionData(v15, v10),
            ((unsigned __int8)UserEventMissionList & 1) != 0) )
      {
        if ( v15->fields.missionProgressType == progress_type )
          ++v13;
      }
      LODWORD(v11) = v12->max_length;
      if ( (int)++v14 >= (int)v11 )
        return v13;
    }
LABEL_18:
    sub_1B4D1EC(UserEventMissionList, v10);
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionEntity_array *__fastcall UserEventMissionMaster__getUserEventMissionList(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v13; // w22
  int32_t v14; // w23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_49BBBBA & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__get_Item__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo, v9);
    byte_49BBBBA = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_313AEE4 *)Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_313AF74 *)Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( HIDWORD(list[1].klass) == eventId )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v18 = Method_System_Collections_Generic_List_UserEventMissionEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v11;
            sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v11, v15, v16);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1B4D1EC(list, v11);
  }
LABEL_15:
  if ( !v10 )
    goto LABEL_17;
  return (UserEventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v10,
                                           (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
}