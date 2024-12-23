void __fastcall UserEventMissionMaster___ctor(UserEventMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67885 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__, method);
    byte_4B67885 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    146,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventMissionEntity_o *__fastcall UserEventMissionMaster__GetEntity(
        UserEventMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B67883 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__, userId);
    byte_4B67883 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31FDB1C *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__GetEntity__);
}


bool __fastcall UserEventMissionMaster__TryGetEntity(
        UserEventMissionMaster_o *this,
        UserEventMissionEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B67884 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__, entity);
    byte_4B67884 = 1;
  }
  PK = (Il2CppObject *)UserEventMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_UserEventMissionMaster__UserEventMissionEntity__string__TryGetEntity__);
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

  if ( (byte_4B67888 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B67888 = 1;
  }
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(this, eventId, method);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMissionMaster___);
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
        sub_1BE4D30(Instance, v9);
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
      sub_1BE4D28(Instance, v9);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x8
  __int64 methodPtr_low; // x11
  struct System_Object_array *items; // x9
  _QWORD *v36; // x10
  __int64 size; // x11
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0

  if ( (byte_4B67889 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&missionTargetId);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo, v10);
    sub_1BE4ACC(&UserEventMissionEntity_TypeInfo, v11);
    byte_4B67889 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v33 = v25;
    if ( !v25
      || (methodPtr_low = LOBYTE(UserEventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low)
      || *(UserEventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != UserEventMissionEntity_TypeInfo )
    {
      sub_1BE4D28(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 28) == missionTargetId )
    {
      if ( !v12 )
        sub_1BE4D28(v25, v26);
      items = v12->fields._items;
      v36 = Method_System_Collections_Generic_List_UserEventMissionEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BE4D28(v25, v26);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_35EC224 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v38 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v38[4] = (Il2CppClass *)v33;
        sub_1BE4A70((PartyOrganizationUtility_o *)(v38 + 4), v33, v27, v28, v29, v30, v31, v32);
      }
    }
  }
  v39 = Enumerator->klass;
  v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_31;
    }
    v42 = (__int64)&v39->vtable[*v41].method;
  }
  else
  {
LABEL_31:
    v42 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(Enumerator, *(_QWORD *)(v42 + 8));
  return (System_Collections_Generic_List_UserEventMissionEntity__o *)v12;
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

  if ( (byte_4B67887 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMissionMaster___, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B67887 = 1;
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
        sub_1BE4D30(UserEventMissionList, v10);
      v15 = v12->m_Items[v14];
      UserEventMissionList = (UserEventMissionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (UserEventMissionEntity_array *)DataManager__GetMasterData_object_(
                                                               (DataManager_o *)UserEventMissionList,
                                                               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !v15 )
        break;
      if ( !UserEventMissionList )
        break;
      UserEventMissionList = (UserEventMissionEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                                               (DataMasterBase_TMaster__TEntity__PKType__o *)UserEventMissionList,
                                                               v15->fields.missionId,
                                                               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
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
    sub_1BE4D28(UserEventMissionList, v10);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int v14; // w22
  int32_t v15; // w23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4B67886 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserEventMissionEntity__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_UserEventMissionEntity__TypeInfo, v9);
    sub_1BE4ACC(&UserEventMissionEntity_TypeInfo, v10);
    byte_4B67886 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_UserEventMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_UserEventMissionEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = list;
    v15 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v15,
                        (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(UserEventMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(UserEventMissionEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == UserEventMissionEntity_TypeInfo
          && *(_DWORD *)(list + 28) == eventId )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_UserEventMissionEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v26 + 4), v12, v16, v17, v18, v19, v20, v21);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BE4D28(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (UserEventMissionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                           v11,
                                           (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_UserEventMissionEntity__ToArray__);
}