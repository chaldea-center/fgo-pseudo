void __fastcall UserEventRandomMissionMaster___ctor(UserEventRandomMissionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16EBE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__,
      method,
      v2);
    byte_4B16EBE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    393,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetEntity(
        UserEventRandomMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16EBF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&missionId);
    byte_4B16EBF = 1;
  }
  PK = (Il2CppObject *)UserEventRandomMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventRandomMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetMissionEntity(
        UserEventRandomMissionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  UserEventRandomMissionEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16EC3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&missionId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&UserEventRandomMissionEntity_TypeInfo, v7, v8);
    byte_4B16EC3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserEventRandomMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                   list,
                                                   v12,
                                                   (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        methodPtr_low = LOBYTE(UserEventRandomMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventRandomMissionEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventRandomMissionEntity_TypeInfo
          && result->fields.missionId == missionId )
        {
          return result;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_14:
    sub_1BCAA3C(list, *(_QWORD *)&missionId);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_UserEventRandomMissionEntity__o *__fastcall UserEventRandomMissionMaster__GetUserEventRandomMissionList(
        UserEventRandomMissionMaster_o *this,
        int32_t eventId,
        bool isProgress,
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
  System_Collections_Generic_List_object__o *v17; // x22
  int64_t v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w23
  int32_t v22; // w24
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_4B16EC1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      isProgress);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&UserEventRandomMissionEntity_TypeInfo, v15, v16);
    byte_4B16EC1 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       isProgress,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v18 = (int64_t)list;
        methodPtr_low = LOBYTE(UserEventRandomMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventRandomMissionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventRandomMissionEntity_TypeInfo
          && HIDWORD(list[1].klass) == eventId
          && (!isProgress || LODWORD(list[1].monitor) == 1) )
        {
          if ( !v17 )
            break;
          items = v17->fields._items;
          v31 = Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            break;
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
          }
          else
          {
            v33 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v33[4] = (Il2CppClass *)v18;
            sub_1BCA784((PartyOrganizationUtility_o *)(v33 + 4), v18, v23, v24, v25, v26, v27, v28);
          }
        }
      }
      if ( v21 == ++v22 )
        return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v17;
    }
LABEL_20:
    sub_1BCAA3C(list, v18);
  }
  return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v17;
}


System_Collections_Generic_List_UserEventRandomMissionEntity__o *__fastcall UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
        UserEventRandomMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return UserEventRandomMissionMaster__GetUserEventRandomMissionList(this, eventId, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
        UserEventRandomMissionMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v11; // w22
  int32_t v12; // w21
  int32_t v13; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16EC2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&UserEventRandomMissionEntity_TypeInfo, v7, v8);
    byte_4B16EC2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v13,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserEventRandomMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventRandomMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventRandomMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId )
        {
          v12 += HIDWORD(Item[2].klass);
        }
      }
      if ( v11 == ++v13 )
        return v12;
    }
LABEL_16:
    sub_1BCAA3C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


bool __fastcall UserEventRandomMissionMaster__TryGetEntity(
        UserEventRandomMissionMaster_o *this,
        UserEventRandomMissionEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16EC0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16EC0 = 1;
  }
  PK = (Il2CppObject *)UserEventRandomMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__);
}