void __fastcall UserEventRandomMissionMaster___ctor(UserEventRandomMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BB53DD & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__,
      method);
    byte_4BB53DD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    397,
    (const MethodInfo_323ADB8 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetEntity(
        UserEventRandomMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BB53DE & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__,
      userId);
    byte_4BB53DE = 1;
  }
  PK = (Il2CppObject *)UserEventRandomMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventRandomMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_323D0DC *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetMissionEntity(
        UserEventRandomMissionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  UserEventRandomMissionEntity_o *result; // x0

  if ( (byte_4BB53E2 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Count__,
      *(_QWORD *)&missionId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Item__, v5);
    byte_4BB53E2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_12;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserEventRandomMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                   list,
                                                   v9,
                                                   (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Item__);
      if ( result && result->fields.missionId == missionId )
        return result;
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_12:
    sub_1C13F80(list, *(_QWORD *)&missionId);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  int64_t v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w23
  int32_t v16; // w24
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4BB53E0 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Item__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo, v10);
    byte_4BB53E0 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v15 = Count;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Item__);
      if ( list )
      {
        v12 = (int64_t)list;
        if ( HIDWORD(list[1].klass) == eventId && (!isProgress || LODWORD(list[1].monitor) == 1) )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v24 = Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 4), v12, v17, v18, v19, v20, v21, v22);
          }
        }
      }
      if ( v15 == ++v16 )
        return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v11;
    }
LABEL_18:
    sub_1C13F80(list, v12);
  }
  return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v11;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w22
  int32_t v9; // w21
  int32_t v10; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4BB53E1 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Count__,
      *(_QWORD *)&eventId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Item__, v5);
    byte_4BB53E1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v10,
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_UserEventRandomMissionEntity__get_Item__);
      if ( Item && HIDWORD(Item[1].monitor) == eventId )
        v9 += HIDWORD(Item[2].klass);
      if ( v8 == ++v10 )
        return v9;
    }
LABEL_14:
    sub_1C13F80(list, *(_QWORD *)&eventId);
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

  if ( (byte_4BB53DF & 1) == 0 )
  {
    sub_1C13D24(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__,
      entity);
    byte_4BB53DF = 1;
  }
  PK = (Il2CppObject *)UserEventRandomMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_323D128 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__);
}