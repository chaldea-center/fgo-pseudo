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
  UserPresentBoxWindow_resData_array *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  UserPresentBoxWindow_resData_array *v19; // x20
  unsigned __int64 v20; // x23
  MissionNotifyDispInfo_o *v21; // x21
  MissionNotifyManager_o *v22; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x19
  __int64 v25; // x8
  UserPresentBoxWindow_resData_array *v26; // x19
  unsigned __int64 v27; // x21
  ClearRandomMissionInfo_o *v28; // x20

  if ( (byte_40F7D4E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B16FFC(&EventRandomMissionClearManager_TypeInfo, v5);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___, v6);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___, v7);
    sub_B16FFC(&JsonManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v10);
    sub_B16FFC(&StringLiteral_17397/*"clearRandomMissions"*/, v11);
    sub_B16FFC(&StringLiteral_18409/*"eventMissionAnnounce"*/, v12);
    byte_40F7D4E = 1;
  }
  if ( !data )
    goto LABEL_36;
  success = data->fields.success;
  if ( !success )
    return 0;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18409/*"eventMissionAnnounce"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                             (System_Type_o *)StringLiteral_18409/*"eventMissionAnnounce"*/,
                             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
            Item,
            (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_MissionNotifyDispInfo___);
    if ( !v15 )
      goto LABEL_36;
    v18 = *(_QWORD *)&v15->max_length;
    v19 = v15;
    if ( (int)v18 >= 1 )
    {
      v20 = 0LL;
      while ( v20 < (unsigned int)v18 )
      {
        v21 = (MissionNotifyDispInfo_o *)v19->m_Items[v20];
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        v22 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !v22 )
          goto LABEL_36;
        MissionNotifyManager__RequestDisp(v22, v21, v23);
        LODWORD(v18) = v19->max_length;
        if ( (__int64)++v20 >= (int)v18 )
          goto LABEL_18;
      }
LABEL_35:
      sub_B17100(v15, v16, v17);
      sub_B170A0();
    }
  }
LABEL_18:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17397/*"clearRandomMissions"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v24 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)success,
                          (System_Type_o *)StringLiteral_17397/*"clearRandomMissions"*/,
                          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v15 = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
          v24,
          (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_ClearRandomMissionInfo___);
  if ( !v15 )
LABEL_36:
    sub_B170D4();
  v25 = *(_QWORD *)&v15->max_length;
  v26 = v15;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)v25 )
    {
      v28 = (ClearRandomMissionInfo_o *)v26->m_Items[v27];
      if ( (BYTE3(EventRandomMissionClearManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      }
      EventRandomMissionClearManager__AddClearRandomMissionInfo(v28, 0LL);
      LODWORD(v25) = v26->max_length;
      if ( (__int64)++v27 >= (int)v25 )
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