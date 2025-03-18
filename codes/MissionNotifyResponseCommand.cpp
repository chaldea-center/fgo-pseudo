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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19
  Il2CppObject *Item; // x20
  struct System_String_o *nid; // x8
  MissionNotifyResponseCommand_o *v15; // x20
  unsigned __int64 v16; // x23
  MissionNotifyDispInfo_o *v17; // x21
  Il2CppObject *v18; // x19
  struct System_String_o *v19; // x8
  MissionNotifyResponseCommand_o *v20; // x19
  unsigned __int64 v21; // x21
  ClearRandomMissionInfo_o *v22; // x20

  if ( (byte_4C23963 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1C3B764(&EventRandomMissionClearManager_TypeInfo, v5);
    sub_1C3B764(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___, v6);
    sub_1C3B764(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___, v7);
    sub_1C3B764(&JsonManager_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_18356/*"ease-in-back"*/, v10);
    this = (MissionNotifyResponseCommand_o *)sub_1C3B764(&StringLiteral_19513/*"greek"*/, v11);
    byte_4C23963 = 1;
  }
  if ( !data )
    goto LABEL_29;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)success,
         (Il2CppObject *)StringLiteral_19513/*"greek"*/,
         (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)success,
             (Il2CppObject *)StringLiteral_19513/*"greek"*/,
             (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                               Item,
                                               (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !this )
      goto LABEL_29;
    nid = this->fields.nid;
    v15 = this;
    if ( (int)nid >= 1 )
    {
      v16 = 0LL;
      while ( v16 < (unsigned int)nid )
      {
        v17 = (MissionNotifyDispInfo_o *)*((_QWORD *)&v15->fields.success + v16);
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_29;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v17, 0LL);
        LODWORD(nid) = v15->fields.nid;
        if ( (__int64)++v16 >= (int)nid )
          goto LABEL_14;
      }
LABEL_28:
      sub_1C3B9C8(this, data);
    }
  }
LABEL_14:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_18356/*"ease-in-back"*/,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v18 = System_Collections_Generic_Dictionary_object__object___get_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)success,
          (Il2CppObject *)StringLiteral_18356/*"ease-in-back"*/,
          (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_object_(
                                             v18,
                                             (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_29:
    sub_1C3B9C0(this, data);
  v19 = this->fields.nid;
  v20 = this;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    while ( v21 < (unsigned int)v19 )
    {
      v22 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v20->fields.success + v21);
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v22, 0LL);
      LODWORD(v19) = v20->fields.nid;
      if ( (__int64)++v21 >= (int)v19 )
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