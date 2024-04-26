void __fastcall VoiceReleaseMaster___ctor(VoiceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_434F9B0 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
    byte_434F9B0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    168,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
}


VoiceReleaseEntity_array *__fastcall VoiceReleaseMaster__GetEntitiyList(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  int32_t v8; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v9; // x24
  __int64 v10; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *items; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v12; // x0

  if ( (byte_434F9B1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
    sub_B70694(&System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&VoiceReleaseEntity_TypeInfo);
    byte_434F9B1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v10 = *(&VoiceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v10
          && (VoiceReleaseEntity_c *)list->klass->_2.typeHierarchy[v10 - 1] == VoiceReleaseEntity_TypeInfo )
        {
          items = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list->fields.items;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(
                                                                                               items,
                                                                                               v12,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v7 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v7,
              v9,
              (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__);
          }
        }
      }
      if ( ++v8 >= Count )
        goto LABEL_17;
    }
LABEL_19:
    sub_B7076C(list, voiceId);
  }
LABEL_17:
  if ( !v7 )
    goto LABEL_19;
  return (VoiceReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                       (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceReleaseMaster__IsCondEnable(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        int32_t svtId,
        const MethodInfo *method)
{
  VoiceReleaseEntity_array *EntitiyList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x21
  VoiceReleaseEntity_array *v9; // x20
  il2cpp_array_size_t v10; // w22
  _BOOL8 IsCondEnable; // x0
  __int64 v12; // x0

  EntitiyList = VoiceReleaseMaster__GetEntitiyList(this, voiceId, *(const MethodInfo **)&svtId);
  if ( !EntitiyList )
LABEL_11:
    sub_B7076C(EntitiyList, v6);
  v8 = *(_QWORD *)&EntitiyList->max_length;
  v9 = EntitiyList;
  if ( (int)v8 < 1 )
    return 1;
  v10 = 0;
  while ( 1 )
  {
    EntitiyList = (VoiceReleaseEntity_array *)v9->m_Items[v10];
    if ( !EntitiyList )
      goto LABEL_11;
    IsCondEnable = VoiceReleaseEntity__IsCondEnable((VoiceReleaseEntity_o *)EntitiyList, svtId, v7);
    if ( !IsCondEnable )
      return 0;
    if ( (int)++v10 >= (int)v8 )
      return 1;
    if ( v10 >= v9->max_length )
    {
      v12 = sub_B70798(IsCondEnable);
      sub_B70738(v12, 0LL);
    }
  }
}