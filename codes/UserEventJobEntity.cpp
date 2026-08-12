void UserEventJobEntity___ctor(UserEventJobEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59716C2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59716C2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserEventJobEntity__CreatePK(int32_t eventId, const MethodInfo *method)
{
  if ( (byte_59716C1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int___);
    byte_59716C1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int_(
           eventId,
           (const MethodInfo_38542C0 *)Method_DataEntityBase_CreateMultiplePK_int___);
}


System_String_o *UserEventJobEntity__CreatePrimaryKey(UserEventJobEntity_o *this, const MethodInfo *method)
{
  return UserEventJobEntity__CreatePK(this->fields.eventId, method);
}


UserEventJobEntity_JobInfo_o *UserEventJobEntity__GetJobInfo(
        UserEventJobEntity_o *this,
        int32_t jobId,
        const MethodInfo *method)
{
  struct UserEventJobEntity_JobInfo_array *jobList; // x9
  __int64 max_length; // x8
  UserEventJobEntity_JobInfo_o **i; // x9
  UserEventJobEntity_JobInfo_o *result; // x0

  jobList = this->fields.jobList;
  if ( !jobList || (int)jobList->max_length < 1 )
    return 0;
  max_length = (unsigned int)jobList->max_length;
  for ( i = jobList->m_Items; ; ++i )
  {
    result = *i;
    if ( *i )
    {
      if ( result->fields.jobId == jobId )
        break;
    }
    if ( !--max_length )
      return 0;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t UserEventJobEntity__GetMaxLevelJobCount(UserEventJobEntity_o *this, int32_t eventId, const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct UserEventJobEntity_JobInfo_array *jobList; // x8
  il2cpp_array_size_t max_length; // x8
  EventJobMaster_o *v10; // x21
  unsigned __int64 v11; // x23
  int32_t v12; // w22
  __int64 v13; // x24
  struct UserEventJobEntity_JobInfo_array *v14; // x8
  UserEventJobEntity_JobInfo_o *v15; // x25
  EventJobEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59716C0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventJobMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59716C0 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventJobMaster___);
  if ( Master_object )
  {
    jobList = this->fields.jobList;
    if ( !jobList )
      goto LABEL_20;
    max_length = jobList->max_length;
    if ( (int)max_length >= 1 )
    {
      v10 = (EventJobMaster_o *)Master_object;
      v11 = 0;
      v12 = 0;
      v13 = (unsigned int)max_length;
      while ( 1 )
      {
        v14 = this->fields.jobList;
        if ( !v14 )
          break;
        if ( v11 >= LODWORD(v14->max_length) )
          sub_2213CE4(Master_object);
        v15 = v14->m_Items[v11];
        if ( v15 )
        {
          Master_object = (Il2CppObject *)EventJobMaster__TryGetEntity(v10, &entity, eventId, v15->fields.jobId, 0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
          {
            if ( !entity )
              break;
            if ( entity->fields.maxLv == v15->fields.lv )
              ++v12;
          }
        }
        if ( v13 == ++v11 )
          return v12;
      }
LABEL_20:
      sub_2213CDC(Master_object, v7);
    }
  }
  return 0;
}


void UserEventJobEntity_JobInfo___ctor(UserEventJobEntity_JobInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}