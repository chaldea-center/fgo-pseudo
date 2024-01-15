void __fastcall EventPointEntity___ctor(EventPointEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAC19 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FAC19 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventPointEntity__CreatePK(int32_t id, int32_t eventId, const MethodInfo *method)
{
  if ( (byte_40FAC17 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&eventId);
    byte_40FAC17 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           eventId,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  unsigned int v5; // w10

  group1 = this->fields.group1;
  if ( !group1 )
    sub_B170D4();
  max_length = group1->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&groupId, method);
      sub_B170A0();
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
  WebViewManager_o *Instance; // x0
  EventPointGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  __int64 v13; // x8
  System_String_o *v14; // x22
  EventPointGroupMaster_o *v15; // x21
  unsigned __int64 v16; // x24
  EventPointGroupEntity_o *Entity; // x0
  EventPointGroupEntity_o *v18; // x23

  if ( (byte_40FAC18 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointGroupMaster___, group);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_698/*","*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40FAC18 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (EventPointGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointGroupMaster___);
  if ( !group )
    goto LABEL_15;
  v13 = *(_QWORD *)&group->max_length;
  v14 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)v13 >= 1 )
  {
    v15 = MasterData_WarQuestSelectionMaster;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v13 )
      {
        sub_B17100(MasterData_WarQuestSelectionMaster, v10, v11);
        sub_B170A0();
      }
      if ( !v15 )
        break;
      Entity = EventPointGroupMaster__GetEntity(v15, this->fields.eventId, group->m_Items[v16 + 1], v12);
      if ( !v14 )
        break;
      v18 = Entity;
      if ( v14->fields.m_stringLength >= 2 )
        v14 = System_String__Concat_43743732(v14, (System_String_o *)StringLiteral_698/*","*/, 0LL);
      if ( !v18 )
        break;
      MasterData_WarQuestSelectionMaster = (EventPointGroupMaster_o *)System_String__Concat_43743732(
                                                                        v14,
                                                                        v18->fields.name,
                                                                        0LL);
      LODWORD(v13) = group->max_length;
      ++v16;
      v14 = (System_String_o *)MasterData_WarQuestSelectionMaster;
      if ( (__int64)v16 >= (int)v13 )
        return v14;
    }
LABEL_15:
    sub_B170D4();
  }
  return v14;
}


bool __fastcall EventPointEntity__isBossBattle(EventPointEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}