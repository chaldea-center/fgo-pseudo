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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct UserMissionProgressManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4187059 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo, v8);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6615/*"Fgo_20160211_1"*/, v10);
    byte_4187059 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionProgressManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6615/*"Fgo_20160211_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6615/*"Fgo_20160211_1"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserMissionProgressManager_TypeInfo;
  UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  v15 = UserMissionProgressManager_TypeInfo->static_fields;
  v15->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->missionProgList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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

  if ( (byte_4187053 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v2);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v3);
    byte_4187053 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
      v4 = UserMissionProgressManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
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

  if ( (byte_4187051 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v1);
    byte_4187051 = 1;
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

  if ( (byte_4187050 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v1);
    byte_4187050 = 1;
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

  if ( (byte_4187058 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v1);
    byte_4187058 = 1;
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

  if ( (byte_4187052 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v1);
    byte_4187052 = 1;
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
  System_IO_BinaryReader_o *v10; // x28
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x20
  UserMissionProgressManager_c *v14; // x0
  __int64 v15; // x3
  char v16; // w20
  UserMissionProgressManager_c *v17; // x0
  int v18; // w19
  int v19; // w20
  int v20; // w21
  int v21; // w22
  int v22; // w23
  int v23; // w24
  __int64 v24; // x26
  __int64 v25; // x27
  int v26; // w28
  __int64 v27; // x25
  __int64 v28; // x0
  __int64 v29; // x1
  UserMissionProgressManager_c *v30; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionProgList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  UserMissionProgressManager_c *v37; // x0
  System_IO_BinaryReader_o *v38; // [xsp+0h] [xbp-70h]
  int v39; // [xsp+8h] [xbp-68h]

  if ( (byte_4187054 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v3);
    sub_B2C35C(&UserMissionProgressInfo_TypeInfo, v4);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v5);
    byte_4187054 = 1;
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
    v10 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v10, v9, 0LL);
    if ( !v10 )
      sub_B2C434(v11, v12);
    v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                               v10,
                               v10->klass->vtable._23_ReadChars.methodPtr);
    v14 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      v14 = UserMissionProgressManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0LL) )
    {
      v39 = 273;
    }
    else
    {
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._9_ReadBoolean.method)(
              v10,
              v10->klass->vtable._10_ReadByte.methodPtr);
      v17 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v17 = UserMissionProgressManager_TypeInfo;
      }
      v17->static_fields->isContinueDevice = v16 & 1;
      v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
              v10,
              v10->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v18 >= 1 )
      {
        v19 = 0;
        v38 = v10;
        do
        {
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._17_ReadInt64.method)(
                  v10,
                  v10->klass->vtable._18_ReadUInt64.methodPtr);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._17_ReadInt64.method)(
                  v10,
                  v10->klass->vtable._18_ReadUInt64.methodPtr);
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v27 = sub_B2C42C(UserMissionProgressInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v27, 0LL);
          if ( !v27 )
            sub_B2C434(v28, v29);
          *(_DWORD *)(v27 + 16) = v20;
          *(_DWORD *)(v27 + 20) = v21;
          *(_DWORD *)(v27 + 24) = v22;
          *(_DWORD *)(v27 + 28) = v23;
          *(_QWORD *)(v27 + 32) = v24;
          *(_QWORD *)(v27 + 40) = v25;
          *(_DWORD *)(v27 + 48) = v26;
          v30 = UserMissionProgressManager_TypeInfo;
          if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
            v10 = v38;
            if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
              v30 = UserMissionProgressManager_TypeInfo;
            }
          }
          else
          {
            v10 = v38;
          }
          missionProgList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->static_fields->missionProgList;
          if ( !missionProgList )
            sub_B2C434(0LL, v29);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionProgList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
          ++v19;
        }
        while ( v19 < v18 );
      }
      v39 = 258;
    }
    klass = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v35 = sub_AC5258(v10, System_IDisposable_TypeInfo, 0LL, v15);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v10, *(_QWORD *)(v35 + 8));
    return v39 == 258;
  }
  else
  {
    v37 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    }
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v37);
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
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4187057 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__,
      *(_QWORD *)&progStatus);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__, v7);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v8);
    byte_4187057 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  v9 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v9 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v9->static_fields->missionProgList;
  if ( !missionProgList )
    sub_B2C434(0LL, *(_QWORD *)&progStatus);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    missionProgList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v12 )
      break;
    if ( !v14.fields.current )
      sub_B2C434(v12, v13);
    if ( HIDWORD(v14.fields.current[1].klass) == missionId && LODWORD(v14.fields.current[1].monitor) == 4 )
    {
      if ( HIDWORD(v14.fields.current[1].monitor) == progStatus )
        break;
      HIDWORD(v14.fields.current[1].monitor) = progStatus;
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
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void __fastcall UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  int v9; // w8
  void *v10; // x20
  __int64 v11; // x22
  __int64 v12; // x8
  int v13; // w27
  __int64 v14; // x21
  const MethodInfo *v15; // x1
  UserMissionProgressManager_c *v16; // x0
  __int64 v17; // x0

  if ( (byte_4187055 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&UserMissionProgressInfo_TypeInfo, v5);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v6);
    byte_4187055 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, eventId, 0LL);
  if ( Instance )
  {
    v9 = *((_DWORD *)Instance + 6);
    v10 = Instance;
    if ( v9 >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= v9 )
        {
          v17 = sub_B2C460(Instance);
          sub_B2C400(v17, 0LL);
        }
        v12 = *((_QWORD *)v10 + v11 + 4);
        if ( !v12 )
          break;
        v13 = *(_DWORD *)(v12 + 16);
        v14 = sub_B2C42C(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v14, 0LL);
        *(_DWORD *)(v14 + 16) = eventId;
        *(_DWORD *)(v14 + 20) = v13;
        UserMissionProgressInfo__checkMissionCond((UserMissionProgressInfo_o *)v14, v15);
        v16 = UserMissionProgressManager_TypeInfo;
        if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v16 = UserMissionProgressManager_TypeInfo;
        }
        Instance = v16->static_fields->missionProgList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
        v9 = *((_DWORD *)v10 + 6);
        if ( (int)++v11 >= v9 )
          return;
      }
LABEL_16:
      sub_B2C434(Instance, v8);
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
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  UserMissionProgressManager_c *v18; // x0
  struct UserMissionProgressManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x9
  int size; // w20
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x22
  UserMissionProgressManager_c *v25; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *v26; // x23
  UserMissionProgressInfo_o *v27; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0

  if ( (byte_4187056 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v6);
    byte_4187056 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
  v18 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v18 = UserMissionProgressManager_TypeInfo;
  }
  v19 = v18->static_fields;
  missionProgList = v19->missionProgList;
  if ( !missionProgList )
    sub_B2C434(v18, v17);
  if ( !v16 )
    sub_B2C434(v18, v17);
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v19->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v24 = 0LL;
    do
    {
      v25 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v25 = UserMissionProgressManager_TypeInfo;
      }
      v26 = v25->static_fields->missionProgList;
      if ( !v26 )
        sub_B2C434(v25, v22);
      if ( v26->fields._size <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = v26->fields._items->m_Items[v24];
      if ( !v27 )
        sub_B2C434(v25, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.eventId,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.missionId,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.currentProgressType,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.currentProgStatus,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v16->klass->vtable._19_Write.method)(
        v16,
        v27->fields.progNum,
        v16->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v16->klass->vtable._19_Write.method)(
        v16,
        v27->fields.targetNum,
        v16->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.condMsgType,
        v16->klass->vtable._18_Write.methodPtr);
      ++v24;
    }
    while ( (int)v24 < size );
  }
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v31 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  UserMissionProgressManager_c *v4; // x8

  if ( (byte_418704F & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v2);
    byte_418704F = 1;
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
  return System_String__Concat_44305532(DatFileSavePath, v4->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent(
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_27462416; // x2

  if ( (byte_418704D & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&DatFileName_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v4);
    byte_418704D = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27462416 = DatFileName__getFileName_27462416(23, eventId, 0, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName_27462416, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent_24008932(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_27462416; // x2

  if ( (byte_418704E & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, *(_QWORD *)&slot);
    sub_B2C35C(&DatFileName_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v6);
    byte_418704E = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27462416 = DatFileName__getFileName_27462416(24, eventId, slot, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName_27462416, 0LL);
}


void __fastcall UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *FileName_27462416; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x19
  UserMissionProgressManager_c *v13; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_418704B & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, method);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v4);
    byte_418704B = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27462416 = DatFileName__getFileName_27462416(23, eventId, 0, 0LL);
  v12 = (System_Int32_array **)System_String__Concat_44305532(
                                 (System_String_o *)StringLiteral_872/*"/"*/,
                                 FileName_27462416,
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
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->saveName, v12, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__setSaveFileName_24008492(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *FileName_27462416; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x19
  UserMissionProgressManager_c *v15; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_418704C & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, *(_QWORD *)&slot);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v6);
    byte_418704C = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27462416 = DatFileName__getFileName_27462416(24, eventId, slot, 0LL);
  v14 = (System_Int32_array **)System_String__Concat_44305532(
                                 (System_String_o *)StringLiteral_872/*"/"*/,
                                 FileName_27462416,
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
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->saveName, v14, v8, v9, v10, v11, v12, v13);
}