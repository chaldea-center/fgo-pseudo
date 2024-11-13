void __fastcall MissionNotifyResponseCommand___ctor(MissionNotifyResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall MissionNotifyResponseCommand__ExecuteResponse(
        MissionNotifyResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19
  __int64 v21; // x1
  Il2CppObject *Item; // x20
  struct System_String_o *nid; // x8
  MissionNotifyResponseCommand_o *v24; // x20
  unsigned __int64 v25; // x23
  MissionNotifyDispInfo_o *v26; // x21
  __int64 v27; // x1
  Il2CppObject *v28; // x19
  struct System_String_o *v29; // x8
  MissionNotifyResponseCommand_o *v30; // x19
  unsigned __int64 v31; // x21
  ClearRandomMissionInfo_o *v32; // x20

  if ( (byte_4B17B12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&EventRandomMissionClearManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___, v8, v9);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___, v10, v11);
    sub_1BCA7E0(&JsonManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_18188/*"clearRandomMissions"*/, v16, v17);
    this = (MissionNotifyResponseCommand_o *)sub_1BCA7E0(&StringLiteral_19335/*"eventMissionAnnounce"*/, v18, v19);
    byte_4B17B12 = 1;
  }
  if ( !data )
    goto LABEL_29;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_19335/*"eventMissionAnnounce"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)success,
             (Il2CppObject *)StringLiteral_19335/*"eventMissionAnnounce"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v21);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                               Item,
                                               (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !this )
      goto LABEL_29;
    nid = this->fields.nid;
    v24 = this;
    if ( (int)nid >= 1 )
    {
      v25 = 0LL;
      while ( v25 < (unsigned int)nid )
      {
        v26 = (MissionNotifyDispInfo_o *)*((_QWORD *)&v24->fields.success + v25);
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_29;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v26, 0LL);
        LODWORD(nid) = v24->fields.nid;
        if ( (__int64)++v25 >= (int)nid )
          goto LABEL_14;
      }
LABEL_28:
      sub_1BCAA44(this, data);
    }
  }
LABEL_14:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_18188/*"clearRandomMissions"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v28 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_18188/*"clearRandomMissions"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v27);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                             v28,
                                             (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_29:
    sub_1BCAA3C(this, data);
  v29 = this->fields.nid;
  v30 = this;
  if ( (int)v29 >= 1 )
  {
    v31 = 0LL;
    while ( v31 < (unsigned int)v29 )
    {
      v32 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v30->fields.success + v31);
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, data);
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v32, 0LL);
      LODWORD(v29) = v30->fields.nid;
      if ( (__int64)++v31 >= (int)v29 )
        goto LABEL_24;
    }
    goto LABEL_28;
  }
LABEL_24:
  if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo, data);
  EventRandomMissionClearManager__WriteData(0LL);
  return 0;
}


int32_t __fastcall MissionNotifyResponseCommand__GetKind(
        MissionNotifyResponseCommand_o *this,
        const MethodInfo *method)
{
  return 49;
}