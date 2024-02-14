void __fastcall EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4214D4E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4214D4E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_4214D4C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_4214D4C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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


bool __fastcall EventPointEntity__IsGroupOnGroup1(EventPointEntity_o *this, int32_t groupId, const MethodInfo *method)
{
  struct System_Int32_array *group1; // x8
  int max_length; // w9
  unsigned int v5; // w10
  __int64 v7; // x0

  group1 = this->fields.group1;
  if ( !group1 )
    sub_B0D97C(this);
  max_length = group1->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B0D9A8(this);
      sub_B0D948(v7, 0LL);
    }
    if ( group1->m_Items[v5 + 1] == groupId )
      break;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
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
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  System_String_o *v11; // x22
  EventPointGroupMaster_o *v12; // x21
  unsigned __int64 v13; // x24
  DataManager_o *v14; // x23
  __int64 v16; // x0

  if ( (byte_4214D4D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, group);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_705/*","*/, v6);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_4214D4D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  v10 = *(_QWORD *)&group->max_length;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v10 >= 1 )
  {
    v12 = (EventPointGroupMaster_o *)Instance;
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v10 )
      {
        v16 = sub_B0D9A8(Instance);
        sub_B0D948(v16, 0LL);
      }
      if ( !v12 )
        break;
      Instance = (DataManager_o *)EventPointGroupMaster__GetEntity(
                                    v12,
                                    this->fields.eventId,
                                    group->m_Items[v13 + 1],
                                    v9);
      if ( !v11 )
        break;
      v14 = Instance;
      if ( v11->fields.m_stringLength >= 2 )
      {
        Instance = (DataManager_o *)System_String__Concat_43849904(v11, (System_String_o *)StringLiteral_705/*","*/, 0LL);
        v11 = (System_String_o *)Instance;
      }
      if ( !v14 )
        break;
      Instance = (DataManager_o *)System_String__Concat_43849904(v11, (System_String_o *)v14->fields.datalist, 0LL);
      LODWORD(v10) = group->max_length;
      ++v13;
      v11 = (System_String_o *)Instance;
      if ( (__int64)v13 >= (int)v10 )
        return v11;
    }
LABEL_15:
    sub_B0D97C(Instance);
  }
  return v11;
}


bool __fastcall EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}