void __fastcall VoiceReleaseMaster___ctor(VoiceReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF76A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__, method);
    byte_40FF76A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    167,
    (const MethodInfo_266F73C *)Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
}


VoiceReleaseEntity_array *__fastcall VoiceReleaseMaster__GetEntitiyList(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x22
  int32_t v19; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x24
  __int64 v23; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x0

  if ( (byte_40FF76B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, voiceId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10);
    sub_B16FFC(&VoiceReleaseEntity_TypeInfo, v11);
    byte_40FF76B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)Item;
        v23 = *(&VoiceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v23
          && (VoiceReleaseEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] == VoiceReleaseEntity_TypeInfo )
        {
          klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Item[1].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(klass, v25, 0LL) )
          {
            if ( !v18 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v18,
              v22,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__);
          }
        }
      }
      if ( ++v19 >= Count )
        goto LABEL_17;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_17:
  if ( !v18 )
    goto LABEL_19;
  return (VoiceReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                       (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceReleaseMaster__IsCondEnable(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        int32_t svtId,
        const MethodInfo *method)
{
  VoiceReleaseEntity_array *EntitiyList; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x21
  VoiceReleaseEntity_array *v8; // x20
  il2cpp_array_size_t v9; // w22
  VoiceReleaseEntity_o *v10; // x0
  _BOOL8 IsCondEnable; // x0
  __int64 v12; // x1

  EntitiyList = VoiceReleaseMaster__GetEntitiyList(this, voiceId, *(const MethodInfo **)&svtId);
  if ( !EntitiyList )
LABEL_11:
    sub_B170D4();
  v7 = *(_QWORD *)&EntitiyList->max_length;
  v8 = EntitiyList;
  if ( (int)v7 < 1 )
    return 1;
  v9 = 0;
  while ( 1 )
  {
    v10 = v8->m_Items[v9];
    if ( !v10 )
      goto LABEL_11;
    IsCondEnable = VoiceReleaseEntity__IsCondEnable(v10, svtId, v6);
    if ( !IsCondEnable )
      return 0;
    if ( (int)++v9 >= (int)v7 )
      return 1;
    if ( v9 >= v8->max_length )
    {
      sub_B17100(IsCondEnable, v12, v6);
      sub_B170A0();
    }
  }
}