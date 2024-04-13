void __fastcall VoiceReleaseMaster___ctor(VoiceReleaseMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E68A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E68A9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    168,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_VoiceReleaseMaster__VoiceReleaseEntity__string___ctor__);
}


VoiceReleaseEntity_array *__fastcall VoiceReleaseMaster__GetEntitiyList(
        VoiceReleaseMaster_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x22
  int32_t v30; // w23
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x24
  __int64 v32; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *items; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v34; // x0

  if ( (byte_42E68AA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)voiceId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&VoiceReleaseEntity_TypeInfo, v24, v25, v26);
    byte_42E68AA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_VoiceReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_VoiceReleaseEntity___ctor__);
  if ( Count >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v30,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)list;
        v32 = *(&VoiceReleaseEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (VoiceReleaseEntity_c *)list->klass->_2.typeHierarchy[v32 - 1] == VoiceReleaseEntity_TypeInfo )
        {
          items = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)list->fields.items;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
          }
          v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(voiceId, 0LL);
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Equality(
                                                                                               items,
                                                                                               v34,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v29 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v29,
              v31,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_VoiceReleaseEntity__Add__);
          }
        }
      }
      if ( ++v30 >= Count )
        goto LABEL_17;
    }
LABEL_19:
    sub_B5D69C(list, voiceId);
  }
LABEL_17:
  if ( !v29 )
    goto LABEL_19;
  return (VoiceReleaseEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v29,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_VoiceReleaseEntity__ToArray__);
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
    sub_B5D69C(EntitiyList, v6);
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
      v12 = sub_B5D6C8(IsCondEnable);
      sub_B5D668(v12, 0LL);
    }
  }
}