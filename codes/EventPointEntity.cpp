void __fastcall EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41878AA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41878AA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_41878A8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_41878A8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_B2C434(this, groupId);
  max_length = group1->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B2C460(this);
      sub_B2C400(v7, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  __int64 v11; // x8
  System_String_o *v12; // x22
  EventPointGroupMaster_o *v13; // x21
  unsigned __int64 v14; // x24
  DataManager_o *v15; // x23
  __int64 v17; // x0

  if ( (byte_41878A9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointGroupMaster___, group);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_699/*","*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_41878A9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  v11 = *(_QWORD *)&group->max_length;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v11 >= 1 )
  {
    v13 = (EventPointGroupMaster_o *)Instance;
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v11 )
      {
        v17 = sub_B2C460(Instance);
        sub_B2C400(v17, 0LL);
      }
      if ( !v13 )
        break;
      Instance = (DataManager_o *)EventPointGroupMaster__GetEntity(
                                    v13,
                                    this->fields.eventId,
                                    group->m_Items[v14 + 1],
                                    v10);
      if ( !v12 )
        break;
      v15 = Instance;
      if ( v12->fields.m_stringLength >= 2 )
      {
        Instance = (DataManager_o *)System_String__Concat_44305532(v12, (System_String_o *)StringLiteral_699/*","*/, 0LL);
        v12 = (System_String_o *)Instance;
      }
      if ( !v15 )
        break;
      Instance = (DataManager_o *)System_String__Concat_44305532(v12, (System_String_o *)v15->fields.datalist, 0LL);
      LODWORD(v11) = group->max_length;
      ++v14;
      v12 = (System_String_o *)Instance;
      if ( (__int64)v14 >= (int)v11 )
        return v12;
    }
LABEL_15:
    sub_B2C434(Instance, v9);
  }
  return v12;
}


bool __fastcall EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}