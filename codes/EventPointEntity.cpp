void EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6347 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6347 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4CB6345 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CB6345 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_31394F0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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


bool EventPointEntity__IsGroupOnGroup1(EventPointEntity_o *this, int32_t groupId, const MethodInfo *method)
{
  struct System_Int32_array *group1; // x8
  int max_length; // w9
  bool v5; // w10
  int i; // w11

  group1 = this->fields.group1;
  if ( !group1 )
    sub_1C6BC60(this, groupId);
  max_length = group1->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = i < max_length )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C6BC68(this);
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
  const MethodInfo *v7; // x3
  il2cpp_array_size_t max_length; // x8
  System_String_o *v9; // x22
  EventPointGroupMaster_o *v10; // x21
  unsigned __int64 v11; // x24
  DataManager_o *v12; // x23

  if ( (byte_4CB6346 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6346 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  max_length = group->max_length;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v10 = (EventPointGroupMaster_o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C6BC68(Instance);
      if ( !v10 )
        break;
      Instance = (DataManager_o *)EventPointGroupMaster__GetEntity(v10, this->fields.eventId, group->m_Items[v11], v7);
      if ( !v9 )
        break;
      v12 = Instance;
      if ( v9->fields._stringLength >= 2 )
      {
        Instance = (DataManager_o *)System_String__Concat_63966792(v9, (System_String_o *)StringLiteral_808/*","*/, 0);
        v9 = (System_String_o *)Instance;
      }
      if ( !v12 )
        break;
      Instance = (DataManager_o *)System_String__Concat_63966792(
                                    v9,
                                    (System_String_o *)v12->fields.m_CancellationTokenSource,
                                    0);
      LODWORD(max_length) = group->max_length;
      ++v11;
      v9 = (System_String_o *)Instance;
      if ( (__int64)v11 >= (int)max_length )
        return v9;
    }
LABEL_15:
    sub_1C6BC60(Instance, v6);
  }
  return v9;
}


bool EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}