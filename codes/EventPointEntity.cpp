void __fastcall EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16262 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16262 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4B16260 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId, method);
    byte_4B16260 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_1BCAA3C(this, *(_QWORD *)&groupId);
  max_length = group1->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = i < max_length )
    {
      if ( i >= (unsigned int)max_length )
        sub_1BCAA44(this, groupId);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  System_String_o *v15; // x22
  EventPointGroupMaster_o *v16; // x21
  unsigned __int64 v17; // x24
  DataManager_o *v18; // x23

  if ( (byte_4B16261 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointGroupMaster___, group, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B16261 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  v14 = *(_QWORD *)&group->max_length;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v14 >= 1 )
  {
    v16 = (EventPointGroupMaster_o *)Instance;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v14 )
        sub_1BCAA44(Instance, v12);
      if ( !v16 )
        break;
      Instance = (DataManager_o *)EventPointGroupMaster__GetEntity(
                                    v16,
                                    this->fields.eventId,
                                    group->m_Items[v17 + 1],
                                    v13);
      if ( !v15 )
        break;
      v18 = Instance;
      if ( v15->fields._stringLength >= 2 )
      {
        Instance = (DataManager_o *)System_String__Concat_62401220(v15, (System_String_o *)StringLiteral_863/*","*/, 0LL);
        v15 = (System_String_o *)Instance;
      }
      if ( !v18 )
        break;
      Instance = (DataManager_o *)System_String__Concat_62401220(
                                    v15,
                                    (System_String_o *)v18->fields.m_CancellationTokenSource,
                                    0LL);
      LODWORD(v14) = group->max_length;
      ++v17;
      v15 = (System_String_o *)Instance;
      if ( (__int64)v17 >= (int)v14 )
        return v15;
    }
LABEL_15:
    sub_1BCAA3C(Instance, v12);
  }
  return v15;
}


bool __fastcall EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}