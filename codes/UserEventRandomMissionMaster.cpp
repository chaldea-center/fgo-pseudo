void __fastcall UserEventRandomMissionMaster___ctor(UserEventRandomMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186F72 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__,
      method);
    byte_4186F72 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    391,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetEntity(
        UserEventRandomMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4186F73 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__,
      userId);
    byte_4186F73 = 1;
  }
  PK = UserEventRandomMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventRandomMissionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_24E4520 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetMissionEntity(
        UserEventRandomMissionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  UserEventRandomMissionEntity_o *result; // x0
  __int64 v12; // x10

  if ( (byte_4186F77 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserEventRandomMissionEntity_TypeInfo, v6);
    byte_4186F77 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserEventRandomMissionEntity_o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                   list,
                                                   v10,
                                                   (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( result )
      {
        v12 = *(&UserEventRandomMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v12
          && (UserEventRandomMissionEntity_c *)result->klass->_2.typeHierarchy[v12 - 1] == UserEventRandomMissionEntity_TypeInfo
          && result->fields.missionId == missionId )
        {
          return result;
        }
      }
      if ( ++v10 >= v9 )
        return 0LL;
    }
LABEL_14:
    sub_B2C434(list, *(_QWORD *)&missionId);
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
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  __int64 v18; // x10

  if ( (byte_4186F75 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo, v10);
    sub_B2C35C(&UserEventRandomMissionEntity_TypeInfo, v11);
    byte_4186F75 = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v17,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        v18 = *(&UserEventRandomMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (UserEventRandomMissionEntity_c *)list->klass->_2.typeHierarchy[v18 - 1] == UserEventRandomMissionEntity_TypeInfo
          && HIDWORD(list->fields._syncRoot) == eventId
          && (!isProgress || LODWORD(list[1].klass) == 1) )
        {
          if ( !v12 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)list,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__);
        }
      }
      if ( ++v17 >= v16 )
        return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v12;
    }
LABEL_17:
    sub_B2C434(list, v13);
  }
  return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v12;
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
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w21
  int32_t v11; // w23
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v13; // x10

  if ( (byte_4186F76 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&UserEventRandomMissionEntity_TypeInfo, v6);
    byte_4186F76 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v11,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v13 = *(&UserEventRandomMissionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v13
          && (UserEventRandomMissionEntity_c *)Item->klass->_2.typeHierarchy[v13 - 1] == UserEventRandomMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId )
        {
          v10 += HIDWORD(Item[2].klass);
        }
      }
      if ( ++v11 >= v9 )
        return v10;
    }
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&eventId);
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
  System_String_o *PK; // x2

  if ( (byte_4186F74 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__,
      entity);
    byte_4186F74 = 1;
  }
  PK = UserEventRandomMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__);
}