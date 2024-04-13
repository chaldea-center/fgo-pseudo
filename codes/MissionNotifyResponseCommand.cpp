void __fastcall MissionNotifyResponseCommand___ctor(MissionNotifyResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall MissionNotifyResponseCommand__ExecuteResponse(
        MissionNotifyResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *success; // x19
  Il2CppObject *Item; // x20
  struct System_String_o *nid; // x8
  MissionNotifyResponseCommand_o *v35; // x20
  unsigned __int64 v36; // x23
  MissionNotifyDispInfo_o *v37; // x21
  const MethodInfo *v38; // x2
  Il2CppObject *v39; // x19
  struct System_String_o *v40; // x8
  MissionNotifyResponseCommand_o *v41; // x19
  unsigned __int64 v42; // x21
  ClearRandomMissionInfo_o *v43; // x20
  __int64 v45; // x0

  if ( (byte_42E741A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___, v11, v12, v13);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___, v14, v15, v16);
    sub_B5D5C4(&JsonManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_17682/*"clearRandomMissions"*/, v26, v27, v28);
    this = (MissionNotifyResponseCommand_o *)sub_B5D5C4(&StringLiteral_18707/*"eventMissionAnnounce"*/, v29, v30, v31);
    byte_42E741A = 1;
  }
  if ( !data )
    goto LABEL_36;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18707/*"eventMissionAnnounce"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                             (System_Type_o *)StringLiteral_18707/*"eventMissionAnnounce"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                               Item,
                                               (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !this )
      goto LABEL_36;
    nid = this->fields.nid;
    v35 = this;
    if ( (int)nid >= 1 )
    {
      v36 = 0LL;
      while ( v36 < (unsigned int)nid )
      {
        v37 = (MissionNotifyDispInfo_o *)*((_QWORD *)&v35->fields.success + v36);
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        this = (MissionNotifyResponseCommand_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !this )
          goto LABEL_36;
        MissionNotifyManager__RequestDisp((MissionNotifyManager_o *)this, v37, v38);
        LODWORD(nid) = v35->fields.nid;
        if ( (__int64)++v36 >= (int)nid )
          goto LABEL_18;
      }
LABEL_35:
      v45 = sub_B5D6C8(this);
      sub_B5D668(v45, 0LL);
    }
  }
LABEL_18:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17682/*"clearRandomMissions"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v39 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                          (System_Type_o *)StringLiteral_17682/*"clearRandomMissions"*/,
                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (MissionNotifyResponseCommand_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                             v39,
                                             (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !this )
LABEL_36:
    sub_B5D69C(this, data);
  v40 = this->fields.nid;
  v41 = this;
  if ( (int)v40 >= 1 )
  {
    v42 = 0LL;
    while ( v42 < (unsigned int)v40 )
    {
      v43 = (ClearRandomMissionInfo_o *)*((_QWORD *)&v41->fields.success + v42);
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      }
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v43, 0LL);
      LODWORD(v40) = v41->fields.nid;
      if ( (__int64)++v42 >= (int)v40 )
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