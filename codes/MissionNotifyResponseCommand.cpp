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
  __int64 v6; // x2
  struct System_String_o *nid; // x8
  MissionNotifyResponseCommand_o *v8; // x20
  unsigned __int64 v9; // x23
  MissionNotifyDispInfo_o *v10; // x21
  Il2CppObject *v11; // x19
  struct System_String_o *v12; // x8
  MissionNotifyResponseCommand_o *v13; // x19
  unsigned __int64 v14; // x21
  ClearRandomMissionInfo_o *v15; // x20

  if ( (byte_4C28E2C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&EventRandomMissionClearManager_TypeInfo);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&StringLiteral_17999/*"clearRandomMissions"*/);
    this = (MissionNotifyResponseCommand_o *)sub_1C2D490(&StringLiteral_19139/*"eventMissionAnnounce"*/);
    byte_4C28E2C = 1;
  }
  if ( !data )
    goto LABEL_29;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_19139/*"eventMissionAnnounce"*/,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)success,
             (Il2CppObject *)StringLiteral_19139/*"eventMissionAnnounce"*/,
             (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                               Item,
                                               (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
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
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_29;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v10, 0);
        LODWORD(nid) = v8->fields.nid;
        if ( (__int64)++v9 >= (int)nid )
          goto LABEL_14;
      }
LABEL_28:
      sub_1C2D6F4(this, data, v6);
    }
  }
LABEL_14:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_17999/*"clearRandomMissions"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v11 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_17999/*"clearRandomMissions"*/,
          (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                             v11,
                                             (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_29:
    sub_1C2D6EC(this, data);
  v12 = this->fields.nid;
  v13 = this;
  if ( (int)v12 >= 1 )
  {
    v14 = 0;
    while ( v14 < (unsigned int)v12 )
    {
      v15 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v13->fields.success + v14);
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v15, 0);
      LODWORD(v12) = v13->fields.nid;
      if ( (__int64)++v14 >= (int)v12 )
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