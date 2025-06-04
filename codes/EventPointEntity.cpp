void __fastcall EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02094 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B02094 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4B02092 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_4B02092 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_2FFFFEC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventPointEntity__CreatePrimaryKey(EventPointEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventPointEntity__CreatePK(this->fields.id, this->fields.eventId, v2);
}


System_String_o *__fastcall EventPointEntity__GetWinGroupName(
        EventPointEntity_o *this,
        bool g1Win,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  System_Int32_array *group1; // x1

  if ( g1Win )
  {
    if ( System_String__IsNullOrEmpty(this->fields.addGroup1Name, 0LL) )
    {
      group1 = this->fields.group1;
      return EventPointEntity__getNameStr(this, group1, v4);
    }
    return this->fields.addGroup1Name;
  }
  else
  {
    if ( System_String__IsNullOrEmpty(this->fields.addGroup2Name, 0LL) )
    {
      group1 = this->fields.group2;
      return EventPointEntity__getNameStr(this, group1, v4);
    }
    return this->fields.addGroup2Name;
  }
}


bool __fastcall EventPointEntity__HasFlag(EventPointEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventPointEntity__IsGroupOnGroup1(EventPointEntity_o *this, int32_t groupId, const MethodInfo *method)
{
  struct System_Int32_array *group1; // x8
  int max_length; // w9
  bool v5; // w10
  int i; // w11

  group1 = this->fields.group1;
  if ( !group1 )
    sub_1BC3264(this, groupId);
  max_length = group1->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = i < max_length )
    {
      if ( i >= (unsigned int)max_length )
        sub_1BC326C(this, *(_QWORD *)&groupId, method);
      if ( group1->m_Items[i + 1] == groupId )
        break;
      ++i;
    }
  }
  return v5;
}


System_String_o *__fastcall EventPointEntity__getNameStr(
        EventPointEntity_o *this,
        System_Int32_array *group,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x8
  System_String_o *v13; // x22
  EventPointGroupMaster_o *v14; // x21
  unsigned __int64 v15; // x24
  DataManager_o *v16; // x23

  if ( (byte_4B02093 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPointGroupMaster___, group);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BC3008(&StringLiteral_806/*","*/, v6);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4B02093 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  v12 = *(_QWORD *)&group->max_length;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v12 >= 1 )
  {
    v14 = (EventPointGroupMaster_o *)Instance;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v12 )
        sub_1BC326C(Instance, v9, v10);
      if ( !v14 )
        break;
      Instance = (DataManager_o *)EventPointGroupMaster__GetEntity(
                                    v14,
                                    this->fields.eventId,
                                    group->m_Items[v15 + 1],
                                    v11);
      if ( !v13 )
        break;
      v16 = Instance;
      if ( v13->fields._stringLength >= 2 )
      {
        Instance = (DataManager_o *)System_String__Concat_62348648(v13, (System_String_o *)StringLiteral_806/*","*/, 0LL);
        v13 = (System_String_o *)Instance;
      }
      if ( !v16 )
        break;
      Instance = (DataManager_o *)System_String__Concat_62348648(
                                    v13,
                                    (System_String_o *)v16->fields.m_CancellationTokenSource,
                                    0LL);
      LODWORD(v12) = group->max_length;
      ++v15;
      v13 = (System_String_o *)Instance;
      if ( (__int64)v15 >= (int)v12 )
        return v13;
    }
LABEL_15:
    sub_1BC3264(Instance, v9);
  }
  return v13;
}


bool __fastcall EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}