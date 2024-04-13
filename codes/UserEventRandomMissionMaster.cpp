void __fastcall UserEventRandomMissionMaster___ctor(UserEventRandomMissionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E70C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E70C7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    392,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetEntity(
        UserEventRandomMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E70C8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__,
      userId,
      missionId,
      method);
    byte_42E70C8 = 1;
  }
  PK = UserEventRandomMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventRandomMissionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_23FB260 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetMissionEntity(
        UserEventRandomMissionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  UserEventRandomMissionEntity_o *result; // x0
  __int64 v17; // x10

  if ( (byte_42E70CC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      missionId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserEventRandomMissionEntity_TypeInfo, v9, v10, v11);
    byte_42E70CC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserEventRandomMissionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                   list,
                                                   v15,
                                                   (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v17 = *(&UserEventRandomMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserEventRandomMissionEntity_c *)result->klass->_2.typeHierarchy[v17 - 1] == UserEventRandomMissionEntity_TypeInfo
          && result->fields.missionId == missionId )
        {
          return result;
        }
      }
      if ( ++v15 >= v14 )
        return 0LL;
    }
LABEL_14:
    sub_B5D69C(list, *(_QWORD *)&missionId);
  }
  return 0LL;
}


System_Collections_Generic_List_UserEventRandomMissionEntity__o *__fastcall UserEventRandomMissionMaster__GetUserEventRandomMissionList(
        UserEventRandomMissionMaster_o *this,
        int32_t eventId,
        bool isProgress,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v23; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x10

  if ( (byte_42E70CA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      isProgress,
      method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&UserEventRandomMissionEntity_TypeInfo, v19, v20, v21);
    byte_42E70CA = 1;
  }
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v26 = Count;
    v27 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v27,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        v28 = *(&UserEventRandomMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v28
          && (UserEventRandomMissionEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] == UserEventRandomMissionEntity_TypeInfo
          && HIDWORD(list->fields._syncRoot) == eventId
          && (!isProgress || LODWORD(list[1].klass) == 1) )
        {
          if ( !v22 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v22,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__);
        }
      }
      if ( ++v27 >= v26 )
        return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v22;
    }
LABEL_17:
    sub_B5D69C(list, v23);
  }
  return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v22;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w22
  int32_t v15; // w21
  int32_t v16; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v18; // x10

  if ( (byte_42E70CB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserEventRandomMissionEntity_TypeInfo, v9, v10, v11);
    byte_42E70CB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v16,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v18 = *(&UserEventRandomMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (UserEventRandomMissionEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == UserEventRandomMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId )
        {
          v15 += HIDWORD(Item[2].klass);
        }
      }
      if ( ++v16 >= v14 )
        return v15;
    }
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&eventId);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEventRandomMissionMaster__TryGetEntity(
        UserEventRandomMissionMaster_o *this,
        UserEventRandomMissionEntity_o **entity,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E70C9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&missionId);
    byte_42E70C9 = 1;
  }
  PK = UserEventRandomMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__);
}