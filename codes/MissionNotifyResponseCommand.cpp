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
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19
  Il2CppObject *Item; // x20
  struct System_String_o *nid; // x8
  MissionNotifyResponseCommand_o *v16; // x20
  unsigned __int64 v17; // x23
  MissionNotifyDispInfo_o *v18; // x21
  const MethodInfo *v19; // x2
  Il2CppObject *v20; // x19
  struct System_String_o *v21; // x8
  MissionNotifyResponseCommand_o *v22; // x19
  unsigned __int64 v23; // x21
  ClearRandomMissionInfo_o *v24; // x20
  __int64 v26; // x0

  if ( (byte_42145F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B0D8A4(&EventRandomMissionClearManager_TypeInfo, v5);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___, v6);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_17519/*"clearRandomMissions"*/, v11);
    this = (MissionNotifyResponseCommand_o *)sub_B0D8A4(&StringLiteral_18535/*"eventMissionAnnounce"*/, v12);
    byte_42145F6 = 1;
  }
  if ( !data )
    goto LABEL_36;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18535/*"eventMissionAnnounce"*/,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                             (System_Type_o *)StringLiteral_18535/*"eventMissionAnnounce"*/,
                             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                               Item,
                                               (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !this )
      goto LABEL_36;
    nid = this->fields.nid;
    v16 = this;
    if ( (int)nid >= 1 )
    {
      v17 = 0LL;
      while ( v17 < (unsigned int)nid )
      {
        v18 = (MissionNotifyDispInfo_o *)*((_QWORD *)&v16->fields.success + v17);
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_36;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v18, v19);
        LODWORD(nid) = v16->fields.nid;
        if ( (__int64)++v17 >= (int)nid )
          goto LABEL_18;
      }
LABEL_35:
      v26 = sub_B0D9A8(this);
      sub_B0D948(v26, 0LL);
    }
  }
LABEL_18:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17519/*"clearRandomMissions"*/,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v20 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                          (System_Type_o *)StringLiteral_17519/*"clearRandomMissions"*/,
                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                             v20,
                                             (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_36:
    sub_B0D97C(this);
  v21 = this->fields.nid;
  v22 = this;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    while ( v23 < (unsigned int)v21 )
    {
      v24 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v22->fields.success + v23);
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      }
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v24, 0LL);
      LODWORD(v21) = v22->fields.nid;
      if ( (__int64)++v23 >= (int)v21 )
        goto LABEL_30;
    }
    goto LABEL_35;
  }
LABEL_30:
  if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
  }
  EventRandomMissionClearManager__WriteData(0LL);
  return 0;
}


int32_t __fastcall MissionNotifyResponseCommand__GetKind(
        MissionNotifyResponseCommand_o *this,
        const MethodInfo *method)
{
  return 48;
}