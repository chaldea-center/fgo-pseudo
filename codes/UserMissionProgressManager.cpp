void __fastcall UserMissionProgressManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  UserMissionProgressManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct UserMissionProgressManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F9763 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo, v8);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6591, v10);
    byte_40F9763 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionProgressManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6591;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6591;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserMissionProgressManager_TypeInfo;
  UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  v19 = UserMissionProgressManager_TypeInfo->static_fields;
  v19->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v19->missionProgList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall UserMissionProgressManager___ctor(UserMissionProgressManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserMissionProgressManager_c *v4; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *missionProgList; // x8

  if ( (byte_40F975D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v2);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v3);
    byte_40F975D = 1;
  }
  v4 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v4 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->missionProgList;
  if ( !missionProgList )
    goto LABEL_16;
  if ( missionProgList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (missionProgList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserMissionProgressManager_TypeInfo->static_fields->missionProgList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        missionProgList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
      v4 = UserMissionProgressManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserMissionProgressManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall UserMissionProgressManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0
  const MethodInfo *v3; // x0
  UserMissionProgressManager_c *v4; // x8
  const MethodInfo *v5; // x0

  if ( (byte_40F975B & 1) == 0 )
  {
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v1);
    byte_40F975B = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__DeleteSaveData((const MethodInfo *)v2);
  UserMissionProgressManager__ClearSaveDataList(v3);
  v4 = UserMissionProgressManager_TypeInfo;
  UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice = 1;
  v4->static_fields->isModfiy = 1;
  UserMissionProgressManager__WriteData(v5);
}


void __fastcall UserMissionProgressManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_40F975A & 1) == 0 )
  {
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v1);
    byte_40F975A = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Collections_Generic_List_UserMissionProgressInfo__o *__fastcall UserMissionProgressManager__GetMissionProgInfoList(
        const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0

  if ( (byte_40F9762 & 1) == 0 )
  {
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v1);
    byte_40F9762 = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  return v2->static_fields->missionProgList;
}


void __fastcall UserMissionProgressManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0

  if ( (byte_40F975C & 1) == 0 )
  {
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v1);
    byte_40F975C = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserMissionProgressManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0
  System_String_o *SaveFileName; // x19
  UserMissionProgressManager_c *v8; // x0
  System_IO_Stream_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_IO_BinaryReader_o *v14; // x28
  System_String_o *v15; // x20
  UserMissionProgressManager_c *v16; // x0
  char v17; // w20
  UserMissionProgressManager_c *v18; // x0
  int v19; // w19
  int v20; // w20
  int v21; // w21
  int v22; // w22
  int v23; // w23
  int v24; // w24
  __int64 v25; // x26
  __int64 v26; // x27
  int v27; // w28
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x25
  UserMissionProgressManager_c *v33; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionProgList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  UserMissionProgressManager_c *v40; // x0
  System_IO_BinaryReader_o *v41; // [xsp+0h] [xbp-70h]
  int v42; // [xsp+8h] [xbp-68h]

  if ( (byte_40F975E & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v3);
    sub_B16FFC(&UserMissionProgressInfo_TypeInfo, v4);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v5);
    byte_40F975E = 1;
  }
  v6 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v6 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  }
  LOBYTE(v6[2].klass->_1.gc_desc) = 0;
  SaveFileName = UserMissionProgressManager__getSaveFileName(v6);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v8 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    }
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v8);
    v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v14 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v10, v11, v12, v13);
    System_IO_BinaryReader___ctor(v14, v9, 0LL);
    if ( !v14 )
      sub_B170D4();
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v16 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      v16 = UserMissionProgressManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0LL) )
    {
      v42 = 273;
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
              v14,
              v14->klass->vtable._10_ReadByte.methodPtr);
      v18 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v18 = UserMissionProgressManager_TypeInfo;
      }
      v18->static_fields->isContinueDevice = v17 & 1;
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
              v14,
              v14->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v19 >= 1 )
      {
        v20 = 0;
        v41 = v14;
        do
        {
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._17_ReadInt64.method)(
                  v14,
                  v14->klass->vtable._18_ReadUInt64.methodPtr);
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._17_ReadInt64.method)(
                  v14,
                  v14->klass->vtable._18_ReadUInt64.methodPtr);
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v32 = sub_B170CC(UserMissionProgressInfo_TypeInfo, v28, v29, v30, v31);
          System_Object___ctor((Il2CppObject *)v32, 0LL);
          if ( !v32 )
            sub_B170D4();
          *(_DWORD *)(v32 + 16) = v21;
          *(_DWORD *)(v32 + 20) = v22;
          *(_DWORD *)(v32 + 24) = v23;
          *(_DWORD *)(v32 + 28) = v24;
          *(_QWORD *)(v32 + 32) = v25;
          *(_QWORD *)(v32 + 40) = v26;
          *(_DWORD *)(v32 + 48) = v27;
          v33 = UserMissionProgressManager_TypeInfo;
          if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
            v14 = v41;
            if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
              v33 = UserMissionProgressManager_TypeInfo;
            }
          }
          else
          {
            v14 = v41;
          }
          missionProgList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33->static_fields->missionProgList;
          if ( !missionProgList )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionProgList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
          ++v20;
        }
        while ( v20 < v19 );
      }
      v42 = 258;
    }
    klass = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v38 = sub_AAFEF8(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v38)(v14, *(_QWORD *)(v38 + 8));
    return v42 == 258;
  }
  else
  {
    v40 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    }
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v40);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__SetAchiveMission(
        int32_t missionId,
        int32_t progStatus,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserMissionProgressManager_c *v9; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *missionProgList; // x0
  UserMissionProgressManager_c *v11; // x0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F9761 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__,
      *(_QWORD *)&progStatus);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__, v7);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v8);
    byte_40F9761 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v9 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9->static_fields->missionProgList;
  if ( !missionProgList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    missionProgList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B170D4();
    if ( HIDWORD(v12.fields.current[1].klass) == missionId && LODWORD(v12.fields.current[1].monitor) == 4 )
    {
      if ( HIDWORD(v12.fields.current[1].monitor) == progStatus )
        break;
      HIDWORD(v12.fields.current[1].monitor) = progStatus;
      v11 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v11 = UserMissionProgressManager_TypeInfo;
      }
      v11->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void __fastcall UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  EventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionEntity_array *EventMissionList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  int max_length; // w8
  EventMissionEntity_array *v15; // x20
  __int64 v16; // x22
  EventMissionEntity_o *v17; // x8
  int32_t id; // w27
  __int64 v19; // x21
  const MethodInfo *v20; // x1
  UserMissionProgressManager_c *v21; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionProgList; // x0

  if ( (byte_40F975F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&UserMissionProgressInfo_TypeInfo, v5);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v6);
    byte_40F975F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (EventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  EventMissionList = EventMissionMaster__getEventMissionList(MasterData_WarQuestSelectionMaster, eventId, 0LL);
  if ( EventMissionList )
  {
    max_length = EventMissionList->max_length;
    v15 = EventMissionList;
    if ( max_length >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
        {
          sub_B17100(EventMissionList, v10, v11);
          sub_B170A0();
        }
        v17 = v15->m_Items[v16];
        if ( !v17 )
          break;
        id = v17->fields.id;
        v19 = sub_B170CC(UserMissionProgressInfo_TypeInfo, v10, v11, v12, v13);
        System_Object___ctor((Il2CppObject *)v19, 0LL);
        *(_DWORD *)(v19 + 16) = eventId;
        *(_DWORD *)(v19 + 20) = id;
        UserMissionProgressInfo__checkMissionCond((UserMissionProgressInfo_o *)v19, v20);
        v21 = UserMissionProgressManager_TypeInfo;
        if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v21 = UserMissionProgressManager_TypeInfo;
        }
        missionProgList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21->static_fields->missionProgList;
        if ( !missionProgList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          missionProgList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
        max_length = v15->max_length;
        if ( (int)++v16 >= max_length )
          return;
      }
LABEL_16:
      sub_B170D4();
    }
  }
}


bool __fastcall UserMissionProgressManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserMissionProgressManager_c *v7; // x0
  struct UserMissionProgressManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  UserMissionProgressManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x19
  UserMissionProgressManager_c *v21; // x0
  struct UserMissionProgressManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x9
  int size; // w20
  __int64 v25; // x22
  UserMissionProgressManager_c *v26; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *v27; // x23
  UserMissionProgressInfo_o *v28; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0

  if ( (byte_40F9760 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v6);
    byte_40F9760 = 1;
  }
  v7 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v7 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &UserMissionProgressManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    return 0;
  v13 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
  System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
  v21 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v21 = UserMissionProgressManager_TypeInfo;
  }
  v22 = v21->static_fields;
  missionProgList = v22->missionProgList;
  if ( !missionProgList )
    sub_B170D4();
  if ( !v20 )
    sub_B170D4();
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
    v20,
    v22->SAVE_DATA_VERSION,
    v20->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
    v20,
    UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice,
    v20->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
    v20,
    (unsigned int)size,
    v20->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v25 = 0LL;
    do
    {
      v26 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v26 = UserMissionProgressManager_TypeInfo;
      }
      v27 = v26->static_fields->missionProgList;
      if ( !v27 )
        sub_B170D4();
      if ( v27->fields._size <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v28 = v27->fields._items->m_Items[v25];
      if ( !v28 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.eventId,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.missionId,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.currentProgressType,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.currentProgStatus,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v20->klass->vtable._19_Write.method)(
        v20,
        v28->fields.progNum,
        v20->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v20->klass->vtable._19_Write.method)(
        v20,
        v28->fields.targetNum,
        v20->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.condMsgType,
        v20->klass->vtable._18_Write.methodPtr);
      ++v25;
    }
    while ( (int)v25 < size );
  }
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v32 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v20, *(_QWORD *)(v32 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  UserMissionProgressManager_c *v4; // x8

  if ( (byte_40F9759 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v2);
    byte_40F9759 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v4 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v4 = UserMissionProgressManager_TypeInfo;
  }
  return System_String__Concat_43743732(DatFileSavePath, v4->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_27471060; // x2

  if ( (byte_40F9757 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, method);
    sub_B16FFC(&DatFileName_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_871, v4);
    byte_40F9757 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27471060 = DatFileName__getFileName_27471060(23, eventId, 0, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName_27471060, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent_24051336(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_27471060; // x2

  if ( (byte_40F9758 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, *(_QWORD *)&slot);
    sub_B16FFC(&DatFileName_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_871, v6);
    byte_40F9758 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27471060 = DatFileName__getFileName_27471060(24, eventId, slot, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName_27471060, 0LL);
}


void __fastcall UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *FileName_27471060; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x19
  UserMissionProgressManager_c *v13; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_40F9755 & 1) == 0 )
  {
    sub_B16FFC(&DatFileName_TypeInfo, method);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_871, v4);
    byte_40F9755 = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27471060 = DatFileName__getFileName_27471060(23, eventId, 0, 0LL);
  v12 = (System_Int32_array **)System_String__Concat_43743732(
                                 (System_String_o *)StringLiteral_871,
                                 FileName_27471060,
                                 0LL);
  v13 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v13 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->saveName = (struct System_String_o *)v12;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->saveName, v12, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__setSaveFileName_24050896(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *FileName_27471060; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x19
  UserMissionProgressManager_c *v15; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_40F9756 & 1) == 0 )
  {
    sub_B16FFC(&DatFileName_TypeInfo, *(_QWORD *)&slot);
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_871, v6);
    byte_40F9756 = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27471060 = DatFileName__getFileName_27471060(24, eventId, slot, 0LL);
  v14 = (System_Int32_array **)System_String__Concat_43743732(
                                 (System_String_o *)StringLiteral_871,
                                 FileName_27471060,
                                 0LL);
  v15 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v15 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  static_fields->saveName = (struct System_String_o *)v14;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->saveName, v14, v8, v9, v10, v11, v12, v13);
}