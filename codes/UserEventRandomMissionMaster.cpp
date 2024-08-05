void __fastcall UserEventRandomMissionMaster___ctor(UserEventRandomMissionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF189 & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__,
      method);
    byte_49FF189 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    393,
    (const MethodInfo_30D6498 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetEntity(
        UserEventRandomMissionMaster_o *this,
        int64_t userId,
        int32_t missionId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FF18A & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__,
      userId);
    byte_49FF18A = 1;
  }
  PK = (Il2CppObject *)UserEventRandomMissionEntity__CreatePK(userId, missionId, *(const MethodInfo **)&missionId);
  return (UserEventRandomMissionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_30D64D8 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventRandomMissionEntity_o *__fastcall UserEventRandomMissionMaster__GetMissionEntity(
        UserEventRandomMissionMaster_o *this,
        int32_t missionId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  UserEventRandomMissionEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FF18E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&missionId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&UserEventRandomMissionEntity_TypeInfo, v6);
    byte_49FF18E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      result = (UserEventRandomMissionEntity_o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                   list,
                                                   v10,
                                                   (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_14:
    sub_1B64ACC(list, *(_QWORD *)&missionId);
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
  System_Collections_Generic_List_object__o *v12; // x22
  System_Collections_ObjectModel_Collection_T__o *v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w23
  int32_t v17; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FF18C & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__, v9);
    sub_1B64870(&System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo, v10);
    sub_1B64870(&UserEventRandomMissionEntity_TypeInfo, v11);
    byte_49FF18C = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_UserEventRandomMissionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_UserEventRandomMissionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v17,
                                                                 (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = list;
        methodPtr_low = LOBYTE(UserEventRandomMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventRandomMissionEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventRandomMissionEntity_TypeInfo
          && HIDWORD(list[1].klass) == eventId
          && (!isProgress || LODWORD(list[1].monitor) == 1) )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v22 = Method_System_Collections_Generic_List_UserEventRandomMissionEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              (Il2CppObject *)list,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v13;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v13, v18, v19);
          }
        }
      }
      if ( v16 == ++v17 )
        return (System_Collections_Generic_List_UserEventRandomMissionEntity__o *)v12;
    }
LABEL_20:
    sub_1B64ACC(list, v13);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w22
  int32_t v10; // w21
  int32_t v11; // w23
  Il2CppObject *Item; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FF18D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&eventId);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B64870(&UserEventRandomMissionEntity_TypeInfo, v6);
    byte_49FF18D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3072DE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v11,
               (const MethodInfo_3072E74 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        methodPtr_low = LOBYTE(UserEventRandomMissionEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventRandomMissionEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventRandomMissionEntity_TypeInfo
          && HIDWORD(Item[1].monitor) == eventId )
        {
          v10 += HIDWORD(Item[2].klass);
        }
      }
      if ( v9 == ++v11 )
        return v10;
    }
LABEL_16:
    sub_1B64ACC(list, *(_QWORD *)&eventId);
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

  if ( (byte_49FF18B & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__,
      entity);
    byte_49FF18B = 1;
  }
  PK = (Il2CppObject *)UserEventRandomMissionEntity__CreatePK(userId, missionId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D6528 *)Method_DataMasterBase_UserEventRandomMissionMaster__UserEventRandomMissionEntity__string__TryGetEntity__);
}