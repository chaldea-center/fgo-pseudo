void EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27341 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27341 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4C2733F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C2733F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventPointEntity__CreatePrimaryKey(EventPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventPointEntity__CreatePK(this->fields.id, this->fields.eventId, v2);
}


System_String_o *EventPointEntity__GetWinGroupName(EventPointEntity_o *this, bool g1Win, const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  System_Int32_array *group1; // x1

  if ( g1Win )
  {
    if ( System_String__IsNullOrEmpty(this->fields.addGroup1Name, 0) )
    {
      group1 = this->fields.group1;
      return EventPointEntity__getNameStr(this, group1, v4);
    }
    return this->fields.addGroup1Name;
  }
  else
  {
    if ( System_String__IsNullOrEmpty(this->fields.addGroup2Name, 0) )
    {
      group1 = this->fields.group2;
      return EventPointEntity__getNameStr(this, group1, v4);
    }
    return this->fields.addGroup2Name;
  }
}


bool EventPointEntity__HasFlag(EventPointEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool EventPointEntity__IsGroupOnGroup1(EventPointEntity_o *this, int32_t groupId, const MethodInfo *method)
{
  struct System_Int32_array *group1; // x8
  int max_length; // w9
  bool v5; // w10
  int i; // w11

  group1 = this->fields.group1;
  if ( !group1 )
    sub_1C2D6EC(this, groupId);
  max_length = group1->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = i < max_length )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C2D6F4(this, *(_QWORD *)&groupId, method);
      if ( group1->m_Items[i] == groupId )
        break;
      ++i;
    }
  }
  return v5;
}


System_String_o *EventPointEntity__getNameStr(
        EventPointEntity_o *this,
        System_Int32_array *group,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  il2cpp_array_size_t max_length; // x8
  System_String_o *v10; // x22
  EventPointGroupMaster_o *v11; // x21
  unsigned __int64 v12; // x24
  DataManager_o *v13; // x23

  if ( (byte_4C27340 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27340 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  max_length = group->max_length;
  v10 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v11 = (EventPointGroupMaster_o *)Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C2D6F4(Instance, v6, v7);
      if ( !v11 )
        break;
      Instance = (DataManager_o *)EventPointGroupMaster__GetEntity(v11, this->fields.eventId, group->m_Items[v12], v8);
      if ( !v10 )
        break;
      v13 = Instance;
      if ( v10->fields._stringLength >= 2 )
      {
        Instance = (DataManager_o *)System_String__Concat_63457864(v10, (System_String_o *)StringLiteral_811/*","*/, 0);
        v10 = (System_String_o *)Instance;
      }
      if ( !v13 )
        break;
      Instance = (DataManager_o *)System_String__Concat_63457864(
                                    v10,
                                    (System_String_o *)v13->fields.m_CancellationTokenSource,
                                    0);
      LODWORD(max_length) = group->max_length;
      ++v12;
      v10 = (System_String_o *)Instance;
      if ( (__int64)v12 >= (int)max_length )
        return v10;
    }
LABEL_15:
    sub_1C2D6EC(Instance, v6);
  }
  return v10;
}


bool EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}