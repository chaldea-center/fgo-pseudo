void UserEventMissionMaster___ctor(UserEventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939525 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
    byte_5939525 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    148,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionEntity_o *UserEventMissionMaster__GetEntity(
        UserEventMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939523 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
    byte_5939523 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
}


bool UserEventMissionMaster__TryGetEntity(
        UserEventMissionMaster_o *this,
        UserEventMissionEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5939524 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
    byte_5939524 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
}


int32_t UserEventMissionMaster__getAchiveMissionNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return UserEventMissionMaster__getMissionProgressNum(this, eventId, 5, v3);
}


int32_t UserEventMissionMaster__getAchiveMissionNum_50002396(
        UserEventMissionMaster_o *this,
        EventMissionEntity_array *missionList,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  UserEventMissionMaster_o *v5; // x20
  int max_length; // w8
  __int64 v7; // x23
  int32_t v8; // w21
  EventMissionEntity_o *v9; // x27
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_5939527 & 1) == 0 )
  {
    this = (UserEventMissionMaster_o *)sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5939527 = 1;
  }
  entity = 0;
  if ( !missionList )
    return 0;
  max_length = missionList->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( (unsigned int)v7 >= max_length )
      sub_21FFED4(this);
    v9 = missionList->m_Items[v7];
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionList);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    this = (UserEventMissionMaster_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionList);
      this = (UserEventMissionMaster_o *)NetworkManager_TypeInfo;
    }
    if ( !v9 )
LABEL_25:
      sub_21FFECC(this, missionList);
    this = (UserEventMissionMaster_o *)UserEventMissionMaster__TryGetEntity(
                                         v5,
                                         &entity,
                                         (int64_t)this[2].fields.list[1].monitor,
                                         v9->fields.id,
                                         v3);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v9->fields.type != 3 )
        goto LABEL_18;
      this = (UserEventMissionMaster_o *)entity;
      if ( !entity )
        goto LABEL_25;
      this = (UserEventMissionMaster_o *)UserEventMissionEntity__IsTodayMissionData(
                                           entity,
                                           (const MethodInfo *)missionList);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_18:
        if ( !entity )
          goto LABEL_25;
        if ( entity->fields.missionProgressType == 5 )
          ++v8;
      }
    }
    max_length = missionList->max_length;
    ++v7;
  }
  while ( (int)v7 < max_length );
  return v8;
}


int32_t UserEventMissionMaster__getDailyMissionAchiveNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UserEventMissionEntity_array *UserEventMissionList; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  il2cpp_array_size_t max_length; // x24
  DataManager_o *v11; // x22
  __int64 v12; // x25
  int32_t v13; // w23
  UserEventMissionEntity_o *v14; // x27

  if ( (byte_5939529 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5939529 = 1;
  }
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(this, eventId, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8);
  Instance = (DataManager_o *)NetworkManager__getTime(0);
  if ( !UserEventMissionList )
    goto LABEL_22;
  max_length = UserEventMissionList->max_length;
  if ( max_length && (int)max_length >= 1 )
  {
    v11 = Instance;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= LODWORD(UserEventMissionList->max_length) )
        sub_21FFED4(Instance);
      v14 = UserEventMissionList->m_Items[v12];
      if ( !v14 || !MasterData_object )
        break;
      Instance = (DataManager_o *)EventMissionMaster__getTargetEventMissionEntity(
                                    (EventMissionMaster_o *)MasterData_object,
                                    eventId,
                                    v14->fields.missionId,
                                    0);
      if ( v14->fields.missionProgressType == 5 )
      {
        if ( !Instance )
          break;
        if ( (__int64)v11 >= (__int64)Instance->fields.masterDataBytes
          && (__int64)v11 < (__int64)Instance->fields.saveNameList )
        {
          ++v13;
        }
      }
      if ( (_DWORD)max_length == (_DWORD)++v12 )
        return v13;
    }
LABEL_22:
    sub_21FFECC(Instance, v7);
  }
  return 0;
}


System_Collections_Generic_List_UserEventMissionEntity__o *UserEventMissionMaster__getListFromMissionTargetId(
        UserEventMissionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v38; // [xsp+18h] [xbp-38h]

  if ( (byte_593952A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UserEventMissionEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
    byte_593952A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__GetEnumerator__);
  v38 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v38 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v38 )
      sub_21FFECC(v15, v16);
    v17 = v38->klass;
    v18 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserEventMissionEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_UserEventMissionEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v38, System_Collections_Generic_IEnumerator_UserEventMissionEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            v38,
            *(_QWORD *)(v20 + 8));
    v28 = v21;
    if ( !v21 )
      sub_21FFECC(0, 0);
    if ( *(_DWORD *)(v21 + 28) == missionTargetId )
    {
      if ( !v5
        || (items = v5->fields._items,
            v30 = Method_System_Collections_Generic_List_UserEventMissionEntity__Add__,
            ++v5->fields._version,
            !items) )
      {
        sub_21FFECC(v21, v21);
      }
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v21,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  if ( v38 )
  {
    v33 = v38->klass;
    v34 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_34;
      }
      v36 = (__int64)&v33->vtable[*v35];
    }
    else
    {
LABEL_34:
      v36 = sub_2237E2C(v38, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(v38, *(_QWORD *)(v36 + 8));
  }
  return (System_Collections_Generic_List_UserEventMissionEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t UserEventMissionMaster__getMissionProgressNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        int32_t progress_type,
        const MethodInfo *method)
{
  UserEventMissionEntity_array *UserEventMissionList; // x0
  const MethodInfo *v8; // x1
  UserEventMissionEntity_array *v9; // x20
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int64 v12; // x24
  int32_t v13; // w21
  UserEventMissionEntity_o *v14; // x23
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5939528 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    byte_5939528 = 1;
  }
  entity = 0;
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(
                           this,
                           eventId,
                           *(const MethodInfo **)&progress_type);
  if ( !UserEventMissionList )
    goto LABEL_22;
  v9 = UserEventMissionList;
  if ( UserEventMissionList->max_length )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
    UserEventMissionList = (UserEventMissionEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMissionMaster___);
    max_length = v9->max_length;
    if ( max_length >= 1 )
    {
      v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)UserEventMissionList;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_21FFED4(UserEventMissionList);
        v14 = v9->m_Items[v12];
        if ( !v14 || !v11 )
          break;
        UserEventMissionList = (UserEventMissionEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 v11,
                                                                 &entity,
                                                                 v14->fields.missionId,
                                                                 (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)UserEventMissionList & 1) != 0 )
        {
          if ( !entity )
            break;
          if ( LODWORD(entity[1].monitor) != 3
            || (UserEventMissionList = (UserEventMissionEntity_array *)UserEventMissionEntity__IsTodayMissionData(
                                                                         v14,
                                                                         v8),
                ((unsigned __int8)UserEventMissionList & 1) != 0) )
          {
            if ( v14->fields.missionProgressType == progress_type )
              ++v13;
          }
        }
        max_length = v9->max_length;
        if ( (int)++v12 >= max_length )
          return v13;
      }
LABEL_22:
      sub_21FFECC(UserEventMissionList, v8);
    }
  }
  return 0;
}


UserEventMissionEntity_array *UserEventMissionMaster__getUserEventMissionList(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5939526 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
    byte_5939526 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v8 = (int)list;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v9,
                                                                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserEventMissionEntity__get_Item__);
      if ( list )
      {
        v6 = list;
        if ( HIDWORD(list[1].klass) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v17 = Method_System_Collections_Generic_List_UserEventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v19 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v19[4] = (Il2CppClass *)v6;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_17:
    sub_21FFECC(list, v6);
  }
LABEL_15:
  if ( !v5 )
    goto LABEL_17;
  return (UserEventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
}