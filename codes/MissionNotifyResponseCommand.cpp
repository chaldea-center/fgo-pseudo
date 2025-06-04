int32_t __fastcall MissionNotifyResponseCommand__ExecuteResponse(
        MissionNotifyResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19
  Il2CppObject *Item; // x20
  __int64 v14; // x2
  struct System_String_o *nid; // x8
  MissionNotifyResponseCommand_o *v16; // x20
  unsigned __int64 v17; // x23
  MissionNotifyDispInfo_o *v18; // x21
  Il2CppObject *v19; // x19
  struct System_String_o *v20; // x8
  MissionNotifyResponseCommand_o *v21; // x19
  unsigned __int64 v22; // x21
  ClearRandomMissionInfo_o *v23; // x20

  if ( (byte_4B03B10 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BC3008(&EventRandomMissionClearManager_TypeInfo, v5);
    sub_1BC3008(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___, v6);
    sub_1BC3008(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___, v7);
    sub_1BC3008(&JsonManager_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1BC3008(&StringLiteral_17842/*"clearRandomMissions"*/, v10);
    this = (MissionNotifyResponseCommand_o *)sub_1BC3008(&StringLiteral_18969/*"eventMissionAnnounce"*/, v11);
    byte_4B03B10 = 1;
  }
  if ( !data )
    goto LABEL_29;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_18969/*"eventMissionAnnounce"*/,
         (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)success,
             (Il2CppObject *)StringLiteral_18969/*"eventMissionAnnounce"*/,
             (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                               Item,
                                               (const MethodInfo_306D91C *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !this )
      goto LABEL_29;
    nid = this->fields.nid;
    v16 = this;
    if ( (int)nid >= 1 )
    {
      v17 = 0LL;
      while ( v17 < (unsigned int)nid )
      {
        v18 = (MissionNotifyDispInfo_o *)*((_QWORD *)&v16->fields.success + v17);
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_29;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v18, 0LL);
        LODWORD(nid) = v16->fields.nid;
        if ( (__int64)++v17 >= (int)nid )
          goto LABEL_14;
      }
LABEL_28:
      sub_1BC326C(this, data, v14);
    }
  }
LABEL_14:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_17842/*"clearRandomMissions"*/,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_17842/*"clearRandomMissions"*/,
          (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                             v19,
                                             (const MethodInfo_306D91C *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_29:
    sub_1BC3264(this, data);
  v20 = this->fields.nid;
  v21 = this;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( v22 < (unsigned int)v20 )
    {
      v23 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v21->fields.success + v22);
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v23, 0LL);
      LODWORD(v20) = v21->fields.nid;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_24;
    }
    goto LABEL_28;
  }
LABEL_24:
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  EventRandomMissionClearManager__WriteData(0LL);
  return 0;
}


int32_t __fastcall MissionNotifyResponseCommand__GetKind(
        MissionNotifyResponseCommand_o *this,
        const MethodInfo *method)
{
  return 49;
}