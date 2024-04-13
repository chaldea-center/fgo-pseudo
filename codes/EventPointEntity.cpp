void __fastcall EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E90B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E90B5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E90B3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, eventId, (_DWORD)method, v3);
    byte_42E90B3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
    sub_B5D69C(this, groupId);
  max_length = group1->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      v7 = sub_B5D6C8(this);
      sub_B5D668(v7, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  System_String_o *v19; // x22
  EventPointGroupMaster_o *v20; // x21
  unsigned __int64 v21; // x24
  DataManager_o *v22; // x23
  __int64 v24; // x0

  if ( (byte_42E90B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointGroupMaster___, (_DWORD)group, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_707/*","*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42E90B4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  v18 = *(_QWORD *)&group->max_length;
  v19 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v18 >= 1 )
  {
    v20 = (EventPointGroupMaster_o *)Instance;
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v18 )
      {
        v24 = sub_B5D6C8(Instance);
        sub_B5D668(v24, 0LL);
      }
      if ( !v20 )
        break;
      Instance = (DataManager_o *)EventPointGroupMaster__GetEntity(
                                    v20,
                                    this->fields.eventId,
                                    group->m_Items[v21 + 1],
                                    v17);
      if ( !v19 )
        break;
      v22 = Instance;
      if ( v19->fields.m_stringLength >= 2 )
      {
        Instance = (DataManager_o *)System_String__Concat_44577788(v19, (System_String_o *)StringLiteral_707/*","*/, 0LL);
        v19 = (System_String_o *)Instance;
      }
      if ( !v22 )
        break;
      Instance = (DataManager_o *)System_String__Concat_44577788(v19, (System_String_o *)v22->fields.datalist, 0LL);
      LODWORD(v18) = group->max_length;
      ++v21;
      v19 = (System_String_o *)Instance;
      if ( (__int64)v21 >= (int)v18 )
        return v19;
    }
LABEL_15:
    sub_B5D69C(Instance, v16);
  }
  return v19;
}


bool __fastcall EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}