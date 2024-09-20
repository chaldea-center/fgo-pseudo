void __fastcall UserEventMissionMaster___ctor(UserEventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BDD9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
    byte_4A5BDD9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    142,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionEntity_o *__fastcall UserEventMissionMaster__GetEntity(
        UserEventMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5BDD7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
    byte_4A5BDD7 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_311DC8C *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionMaster__TryGetEntity(
        UserEventMissionMaster_o *this,
        UserEventMissionEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5BDD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
    byte_4A5BDD8 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
}


int32_t __fastcall UserEventMissionMaster__getAchiveMissionNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return UserEventMissionMaster__getMissionProgressNum(this, eventId, 5, v3);
}


int32_t __fastcall UserEventMissionMaster__getDailyMissionAchiveNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UserEventMissionEntity_array *UserEventMissionList; // x20
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v9; // x8
  int v10; // w24
  DataManager_o *v11; // x22
  int v12; // w25
  int32_t v13; // w23
  UserEventMissionEntity_o *v14; // x26

  if ( (byte_4A5BDDC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BDDC = 1;
  }
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(this, eventId, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__getTime(0LL);
  if ( !UserEventMissionList )
    goto LABEL_23;
  v9 = *(_QWORD *)&UserEventMissionList->max_length;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( (int)v9 >= 1 )
    {
      if ( !(_DWORD)v9 )
LABEL_20:
        sub_1B88814(Instance, v7);
      v11 = Instance;
      v12 = 0;
      v13 = 0;
      while ( 1 )
      {
        v14 = UserEventMissionList->m_Items[v12];
        if ( !v14 || !MasterData_object )
          break;
        Instance = (DataManager_o *)EventMissionMaster__getTargetEventMissionEntity(
                                      (EventMissionMaster_o *)MasterData_object,
                                      eventId,
                                      v14->fields.missionId,
                                      0LL);
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
        if ( v10 == v12 )
          return v13;
        if ( ++v12 >= UserEventMissionList->max_length )
          goto LABEL_20;
      }
LABEL_23:
      sub_1B8880C(Instance, v7);
    }
  }
  return 0;
}


System_Collections_Generic_List_UserEventMissionEntity__o *__fastcall UserEventMissionMaster__getListFromMissionTargetId(
        UserEventMissionMaster_o *this,
        int32_t missionTargetId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A5BDDD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
    sub_1B885B0(&UserEventMissionEntity_TypeInfo);
    byte_4A5BDDD = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v22 = v18;
    if ( !v18
      || (methodPtr_low = LOBYTE(UserEventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low)
      || *(UserEventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != UserEventMissionEntity_TypeInfo )
    {
      sub_1B8880C(v18, v19);
    }
    if ( *(_DWORD *)(v18 + 28) == missionTargetId )
    {
      if ( !v5 )
        sub_1B8880C(v18, v19);
      items = v5->fields._items;
      v25 = Method_System_Collections_Generic_List_UserEventMissionEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), v22, v20, v21);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return (System_Collections_Generic_List_UserEventMissionEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventMissionMaster__getMissionProgressNum(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        int32_t progress_type,
        const MethodInfo *method)
{
  UserEventMissionEntity_array *UserEventMissionList; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x8
  UserEventMissionEntity_array *v10; // x20
  int32_t v11; // w21
  __int64 v12; // x23
  UserEventMissionEntity_o *v13; // x22

  if ( (byte_4A5BDDB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BDDB = 1;
  }
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(
                           this,
                           eventId,
                           *(const MethodInfo **)&progress_type);
  if ( !UserEventMissionList )
    goto LABEL_18;
  v9 = *(_QWORD *)&UserEventMissionList->max_length;
  v10 = UserEventMissionList;
  v11 = 0;
  if ( v9 && (int)v9 >= 1 )
  {
    v12 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v12 >= (unsigned int)v9 )
        sub_1B88814(UserEventMissionList, v8);
      v13 = v10->m_Items[v12];
      UserEventMissionList = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)UserEventMissionList,
                                                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !v13 )
        break;
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (UserEventMissionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)UserEventMissionList,
                                                               v13->fields.missionId,
                                                               (const MethodInfo_311D934 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !UserEventMissionList )
        break;
      if ( UserEventMissionList->max_length != 3
        || (UserEventMissionList = (UserEventMissionEntity_array *)UserEventMissionEntity__IsTodayMissionData(v13, v8),
            ((unsigned __int8)UserEventMissionList & 1) != 0) )
      {
        if ( v13->fields.missionProgressType == progress_type )
          ++v11;
      }
      LODWORD(v9) = v10->max_length;
      if ( (int)++v12 >= (int)v9 )
        return v11;
    }
LABEL_18:
    sub_1B8880C(UserEventMissionList, v8);
  }
  return v11;
}


UserEventMissionEntity_array *__fastcall UserEventMissionMaster__getUserEventMissionList(
        UserEventMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v8; // w22
  int32_t v9; // w23
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0

  if ( (byte_4A5BDDA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
    sub_1B885B0(&UserEventMissionEntity_TypeInfo);
    byte_4A5BDDA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v6 = list;
        methodPtr_low = LOBYTE(UserEventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventMissionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventMissionEntity_TypeInfo
          && HIDWORD(list[1].klass) == eventId )
        {
          if ( !v5 )
            break;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_UserEventMissionEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v6, v10, v11);
          }
        }
      }
      if ( v8 == ++v9 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(list, v6);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return (UserEventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v5,
                                           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
}