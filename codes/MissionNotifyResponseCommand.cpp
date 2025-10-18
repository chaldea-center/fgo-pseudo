void MissionNotifyResponseCommand___ctor(MissionNotifyResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0);
}


int32_t MissionNotifyResponseCommand__ExecuteResponse(
        MissionNotifyResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19
  Il2CppObject *Item; // x20
  struct System_String_o *nid; // x8
  MissionNotifyResponseCommand_o *v7; // x20
  unsigned __int64 v8; // x23
  MissionNotifyDispInfo_o *v9; // x21
  Il2CppObject *v10; // x19
  struct System_String_o *v11; // x8
  MissionNotifyResponseCommand_o *v12; // x19
  unsigned __int64 v13; // x21
  ClearRandomMissionInfo_o *v14; // x20

  if ( (byte_4C44B2F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&EventRandomMissionClearManager_TypeInfo);
    sub_1C37058(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
    sub_1C37058(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&StringLiteral_18005/*"clearRandomMissions"*/);
    this = (MissionNotifyResponseCommand_o *)sub_1C37058(&StringLiteral_19152/*"eventMissionAnnounce"*/);
    byte_4C44B2F = 1;
  }
  if ( !data )
    goto LABEL_29;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_19152/*"eventMissionAnnounce"*/,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)success,
             (Il2CppObject *)StringLiteral_19152/*"eventMissionAnnounce"*/,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                               Item,
                                               (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !this )
      goto LABEL_29;
    nid = this->fields.nid;
    v7 = this;
    if ( (int)nid >= 1 )
    {
      v8 = 0;
      while ( v8 < (unsigned int)nid )
      {
        v9 = (MissionNotifyDispInfo_o *)*((_QWORD *)&v7->fields.success + v8);
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_29;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v9, 0);
        LODWORD(nid) = v7->fields.nid;
        if ( (__int64)++v8 >= (int)nid )
          goto LABEL_14;
      }
LABEL_28:
      sub_1C372BC(this);
    }
  }
LABEL_14:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_18005/*"clearRandomMissions"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v10 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_18005/*"clearRandomMissions"*/,
          (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                             v10,
                                             (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_29:
    sub_1C372B4(this);
  v11 = this->fields.nid;
  v12 = this;
  if ( (int)v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < (unsigned int)v11 )
    {
      v14 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v12->fields.success + v13);
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v14, 0);
      LODWORD(v11) = v12->fields.nid;
      if ( (__int64)++v13 >= (int)v11 )
        goto LABEL_24;
    }
    goto LABEL_28;
  }
LABEL_24:
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__WriteData(0);
  return 0;
}


int32_t MissionNotifyResponseCommand__GetKind(MissionNotifyResponseCommand_o *this, const MethodInfo *method)
{
  return 49;
}