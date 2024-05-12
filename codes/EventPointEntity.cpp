void __fastcall EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B559 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B559 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_438B557 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438B557 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_B7769C(this, groupId);
  max_length = group1->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B776C8(this);
      sub_B77668(v7, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  System_String_o *v9; // x22
  EventPointGroupMaster_o *v10; // x21
  unsigned __int64 v11; // x24
  DataManager_o *v12; // x23
  __int64 v14; // x0

  if ( (byte_438B558 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_714/*","*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B558 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  v8 = *(_QWORD *)&group->max_length;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v8 >= 1 )
  {
    v10 = (EventPointGroupMaster_o *)Instance;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v8 )
      {
        v14 = sub_B776C8(Instance);
        sub_B77668(v14, 0LL);
      }
      if ( !v10 )
        break;
      Instance = (DataManager_o *)EventPointGroupMaster__GetEntity(
                                    v10,
                                    this->fields.eventId,
                                    group->m_Items[v11 + 1],
                                    v7);
      if ( !v9 )
        break;
      v12 = Instance;
      if ( v9->fields.m_stringLength >= 2 )
      {
        Instance = (DataManager_o *)System_String__Concat_44901936(v9, (System_String_o *)StringLiteral_714/*","*/, 0LL);
        v9 = (System_String_o *)Instance;
      }
      if ( !v12 )
        break;
      Instance = (DataManager_o *)System_String__Concat_44901936(v9, (System_String_o *)v12->fields.datalist, 0LL);
      LODWORD(v8) = group->max_length;
      ++v11;
      v9 = (System_String_o *)Instance;
      if ( (__int64)v11 >= (int)v8 )
        return v9;
    }
LABEL_15:
    sub_B7769C(Instance, v6);
  }
  return v9;
}


bool __fastcall EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}