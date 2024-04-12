void __fastcall MissionNotifyResponseCommand___ctor(MissionNotifyResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall MissionNotifyResponseCommand__ExecuteResponse(
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
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x19
  struct System_String_o *v12; // x8
  MissionNotifyResponseCommand_o *v13; // x19
  unsigned __int64 v14; // x21
  ClearRandomMissionInfo_o *v15; // x20
  __int64 v17; // x0

  if ( (byte_42AE811 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&EventRandomMissionClearManager_TypeInfo);
    sub_B52984(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
    sub_B52984(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&StringLiteral_17588/*"clearRandomMissions"*/);
    this = (MissionNotifyResponseCommand_o *)sub_B52984(&StringLiteral_18612/*"eventMissionAnnounce"*/);
    byte_42AE811 = 1;
  }
  if ( !data )
    goto LABEL_36;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18612/*"eventMissionAnnounce"*/,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                             (System_Type_o *)StringLiteral_18612/*"eventMissionAnnounce"*/,
                             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                               Item,
                                               (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !this )
      goto LABEL_36;
    nid = this->fields.nid;
    v7 = this;
    if ( (int)nid >= 1 )
    {
      v8 = 0LL;
      while ( v8 < (unsigned int)nid )
      {
        v9 = (MissionNotifyDispInfo_o *)*((_QWORD *)&v7->fields.success + v8);
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_36;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v9, v10);
        LODWORD(nid) = v7->fields.nid;
        if ( (__int64)++v8 >= (int)nid )
          goto LABEL_18;
      }
LABEL_35:
      v17 = sub_B52A88(this);
      sub_B52A28(v17, 0LL);
    }
  }
LABEL_18:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17588/*"clearRandomMissions"*/,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v11 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                          (System_Type_o *)StringLiteral_17588/*"clearRandomMissions"*/,
                          (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                             v11,
                                             (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_36:
    sub_B52A5C(this, data);
  v12 = this->fields.nid;
  v13 = this;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      v15 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v13->fields.success + v14);
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      }
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v15, 0LL);
      LODWORD(v12) = v13->fields.nid;
      if ( (__int64)++v14 >= (int)v12 )
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
  return 49;
}