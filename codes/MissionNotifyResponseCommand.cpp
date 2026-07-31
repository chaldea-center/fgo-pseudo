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
  __int64 v5; // x1
  Il2CppObject *Item; // x20
  struct System_String_o *nid; // x8
  MissionNotifyResponseCommand_o *v8; // x20
  unsigned __int64 v9; // x23
  MissionNotifyDispInfo_o *v10; // x21
  __int64 v11; // x1
  Il2CppObject *v12; // x19
  struct System_String_o *v13; // x8
  MissionNotifyResponseCommand_o *v14; // x19
  unsigned __int64 v15; // x21
  ClearRandomMissionInfo_o *v16; // x20

  if ( (byte_593A283 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&EventRandomMissionClearManager_TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&StringLiteral_18760/*"clearRandomMissions"*/);
    this = (MissionNotifyResponseCommand_o *)sub_21FFC50(&StringLiteral_20001/*"eventMissionAnnounce"*/);
    byte_593A283 = 1;
  }
  if ( !data )
    goto LABEL_29;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_20001/*"eventMissionAnnounce"*/,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)success,
             (Il2CppObject *)StringLiteral_20001/*"eventMissionAnnounce"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v5);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                               Item,
                                               (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !this )
      goto LABEL_29;
    nid = this->fields.nid;
    v8 = this;
    if ( (int)nid >= 1 )
    {
      v9 = 0;
      while ( v9 < (unsigned int)nid )
      {
        v10 = (MissionNotifyDispInfo_o *)*((_QWORD *)&v8->fields.success + v9);
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_29;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v10, 0);
        LODWORD(nid) = v8->fields.nid;
        if ( (__int64)++v9 >= (int)nid )
          goto LABEL_14;
      }
LABEL_28:
      sub_21FFED4(this);
    }
  }
LABEL_14:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_18760/*"clearRandomMissions"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v12 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_18760/*"clearRandomMissions"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                             v12,
                                             (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_29:
    sub_21FFECC(this, data);
  v13 = this->fields.nid;
  v14 = this;
  if ( (int)v13 >= 1 )
  {
    v15 = 0;
    while ( v15 < (unsigned int)v13 )
    {
      v16 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v14->fields.success + v15);
      if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, data);
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v16, 0);
      LODWORD(v13) = v14->fields.nid;
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_24;
    }
    goto LABEL_28;
  }
LABEL_24:
  if ( !*(&EventRandomMissionClearManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, data);
  EventRandomMissionClearManager__WriteData(0);
  return 0;
}


int32_t MissionNotifyResponseCommand__GetKind(MissionNotifyResponseCommand_o *this, const MethodInfo *method)
{
  return 49;
}