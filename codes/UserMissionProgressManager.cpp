void __fastcall UserMissionProgressManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  UserMissionProgressManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct UserMissionProgressManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4389DAB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    sub_B775C4(&StringLiteral_6763/*"Fgo_20160211_1"*/);
    byte_4389DAB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionProgressManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6763/*"Fgo_20160211_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6763/*"Fgo_20160211_1"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserMissionProgressManager_TypeInfo;
  UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  v11 = UserMissionProgressManager_TypeInfo->static_fields;
  v11->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&v11->missionProgList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall UserMissionProgressManager___ctor(UserMissionProgressManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *missionProgList; // x8

  if ( (byte_4389DA5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA5 = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->missionProgList;
  if ( !missionProgList )
    goto LABEL_16;
  if ( missionProgList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (missionProgList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserMissionProgressManager_TypeInfo->static_fields->missionProgList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        missionProgList,
        (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
      v2 = UserMissionProgressManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7769C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall UserMissionProgressManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  const MethodInfo *v2; // x0
  UserMissionProgressManager_c *v3; // x8
  const MethodInfo *v4; // x0

  if ( (byte_4389DA3 & 1) == 0 )
  {
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA3 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__DeleteSaveData((const MethodInfo *)v1);
  UserMissionProgressManager__ClearSaveDataList(v2);
  v3 = UserMissionProgressManager_TypeInfo;
  UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice = 1;
  v3->static_fields->isModfiy = 1;
  UserMissionProgressManager__WriteData(v4);
}


void __fastcall UserMissionProgressManager__DeleteSaveData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4389DA2 & 1) == 0 )
  {
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA2 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Collections_Generic_List_UserMissionProgressInfo__o *__fastcall UserMissionProgressManager__GetMissionProgInfoList(
        const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0

  if ( (byte_4389DAA & 1) == 0 )
  {
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DAA = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = UserMissionProgressManager_TypeInfo;
  }
  return v1->static_fields->missionProgList;
}


void __fastcall UserMissionProgressManager__Initialize(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0

  if ( (byte_4389DA4 & 1) == 0 )
  {
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA4 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserMissionProgressManager__ReadData(const MethodInfo *method)
{
  const MethodInfo *v1; // x0
  System_String_o *SaveFileName; // x19
  UserMissionProgressManager_c *v3; // x0
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryReader_o *v5; // x28
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  UserMissionProgressManager_c *v9; // x0
  char v10; // w20
  UserMissionProgressManager_c *v11; // x0
  int v12; // w19
  int v13; // w20
  int v14; // w21
  int v15; // w22
  int v16; // w23
  int v17; // w24
  __int64 v18; // x26
  __int64 v19; // x27
  int v20; // w28
  __int64 v21; // x25
  __int64 v22; // x0
  __int64 v23; // x1
  UserMissionProgressManager_c *v24; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionProgList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  UserMissionProgressManager_c *v31; // x0
  System_IO_BinaryReader_o *v32; // [xsp+0h] [xbp-70h]
  int v33; // [xsp+8h] [xbp-68h]

  if ( (byte_4389DA6 & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryReader_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_B775C4(&UserMissionProgressInfo_TypeInfo);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA6 = 1;
  }
  v1 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  }
  LOBYTE(v1[2].klass->_1.gc_desc) = 0;
  SaveFileName = UserMissionProgressManager__getSaveFileName(v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v3 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    }
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v3);
    v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v5 = (System_IO_BinaryReader_o *)sub_B77694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v5, v4, 0LL);
    if ( !v5 )
      sub_B7769C(v6, v7);
    v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._22_ReadString.method)(
                              v5,
                              v5->klass->vtable._23_ReadChars.methodPtr);
    v9 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      v9 = UserMissionProgressManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v9->static_fields->SAVE_DATA_VERSION, v8, 0LL) )
    {
      v33 = 273;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._9_ReadBoolean.method)(
              v5,
              v5->klass->vtable._10_ReadByte.methodPtr);
      v11 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v11 = UserMissionProgressManager_TypeInfo;
      }
      v11->static_fields->isContinueDevice = v10 & 1;
      v12 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
              v5,
              v5->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v12 >= 1 )
      {
        v13 = 0;
        v32 = v5;
        do
        {
          v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._17_ReadInt64.method)(
                  v5,
                  v5->klass->vtable._18_ReadUInt64.methodPtr);
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._17_ReadInt64.method)(
                  v5,
                  v5->klass->vtable._18_ReadUInt64.methodPtr);
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v21 = sub_B77694(UserMissionProgressInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v21, 0LL);
          if ( !v21 )
            sub_B7769C(v22, v23);
          *(_DWORD *)(v21 + 16) = v14;
          *(_DWORD *)(v21 + 20) = v15;
          *(_DWORD *)(v21 + 24) = v16;
          *(_DWORD *)(v21 + 28) = v17;
          *(_QWORD *)(v21 + 32) = v18;
          *(_QWORD *)(v21 + 40) = v19;
          *(_DWORD *)(v21 + 48) = v20;
          v24 = UserMissionProgressManager_TypeInfo;
          if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
            v5 = v32;
            if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
              v24 = UserMissionProgressManager_TypeInfo;
            }
          }
          else
          {
            v5 = v32;
          }
          missionProgList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v24->static_fields->missionProgList;
          if ( !missionProgList )
            sub_B7769C(0LL, v23);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionProgList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
          ++v13;
        }
        while ( v13 < v12 );
      }
      v33 = 258;
    }
    klass = v5->klass;
    if ( *(_WORD *)&v5->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&v5->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v29 = sub_B0F4C0(v5, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v5, *(_QWORD *)(v29 + 8));
    return v33 == 258;
  }
  else
  {
    v31 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    }
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v31);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__SetAchiveMission(
        int32_t missionId,
        int32_t progStatus,
        const MethodInfo *method)
{
  UserMissionProgressManager_c *v5; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *missionProgList; // x0
  UserMissionProgressManager_c *v7; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4389DA9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA9 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  v5 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v5 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5->static_fields->missionProgList;
  if ( !missionProgList )
    sub_B7769C(0LL, *(_QWORD *)&progStatus);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    missionProgList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields.current )
      sub_B7769C(v8, v9);
    if ( HIDWORD(v10.fields.current[1].klass) == missionId && LODWORD(v10.fields.current[1].monitor) == 4 )
    {
      if ( HIDWORD(v10.fields.current[1].monitor) == progStatus )
        break;
      HIDWORD(v10.fields.current[1].monitor) = progStatus;
      v7 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v7 = UserMissionProgressManager_TypeInfo;
      }
      v7->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void __fastcall UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x20
  __int64 v7; // x22
  __int64 v8; // x8
  int v9; // w27
  __int64 v10; // x21
  const MethodInfo *v11; // x1
  UserMissionProgressManager_c *v12; // x0
  __int64 v13; // x0

  if ( (byte_4389DA7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserMissionProgressInfo_TypeInfo);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, eventId, 0LL);
  if ( Instance )
  {
    v5 = *((_DWORD *)Instance + 6);
    v6 = Instance;
    if ( v5 >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= v5 )
        {
          v13 = sub_B776C8(Instance);
          sub_B77668(v13, 0LL);
        }
        v8 = *((_QWORD *)v6 + v7 + 4);
        if ( !v8 )
          break;
        v9 = *(_DWORD *)(v8 + 16);
        v10 = sub_B77694(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0LL);
        *(_DWORD *)(v10 + 16) = eventId;
        *(_DWORD *)(v10 + 20) = v9;
        UserMissionProgressInfo__checkMissionCond((UserMissionProgressInfo_o *)v10, v11);
        v12 = UserMissionProgressManager_TypeInfo;
        if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v12 = UserMissionProgressManager_TypeInfo;
        }
        Instance = v12->static_fields->missionProgList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
        v5 = *((_DWORD *)v6 + 6);
        if ( (int)++v7 >= v5 )
          return;
      }
LABEL_16:
      sub_B7769C(Instance, v4);
    }
  }
}


bool __fastcall UserMissionProgressManager__WriteData(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0
  struct UserMissionProgressManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  UserMissionProgressManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  UserMissionProgressManager_c *v12; // x0
  struct UserMissionProgressManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x9
  int size; // w20
  __int64 v16; // x1
  __int64 v17; // x22
  UserMissionProgressManager_c *v18; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *v19; // x23
  UserMissionProgressInfo_o *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0

  if ( (byte_4389DA8 & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryWriter_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA8 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v1 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &UserMissionProgressManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( v5->static_fields->UseMock )
    return 0;
  v7 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v10 = (System_IO_BinaryWriter_o *)sub_B77694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40221404(v10, v9, 0LL);
  v12 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v12 = UserMissionProgressManager_TypeInfo;
  }
  v13 = v12->static_fields;
  missionProgList = v13->missionProgList;
  if ( !missionProgList )
    sub_B7769C(v12, v11);
  if ( !v10 )
    sub_B7769C(v12, v11);
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
    v10,
    v13->SAVE_DATA_VERSION,
    v10->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
    v10,
    UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice,
    v10->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
    v10,
    (unsigned int)size,
    v10->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v17 = 0LL;
    do
    {
      v18 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v18 = UserMissionProgressManager_TypeInfo;
      }
      v19 = v18->static_fields->missionProgList;
      if ( !v19 )
        sub_B7769C(v18, v16);
      if ( v19->fields._size <= (unsigned int)v17 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v20 = v19->fields._items->m_Items[v17];
      if ( !v20 )
        sub_B7769C(v18, v16);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.eventId,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.missionId,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.currentProgressType,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.currentProgStatus,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v10->klass->vtable._19_Write.method)(
        v10,
        v20->fields.progNum,
        v10->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v10->klass->vtable._19_Write.method)(
        v10,
        v20->fields.targetNum,
        v10->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v20->fields.condMsgType,
        v10->klass->vtable._18_Write.methodPtr);
      ++v17;
    }
    while ( (int)v17 < size );
  }
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v24 = sub_B0F4C0(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v10, *(_QWORD *)(v24 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  UserMissionProgressManager_c *v2; // x8

  if ( (byte_4389DA1 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389DA1 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v2 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v2 = UserMissionProgressManager_TypeInfo;
  }
  return System_String__Concat_44901936(DatFileSavePath, v2->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_28016868; // x2

  if ( (byte_4389D9F & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_4389D9F = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28016868 = DatFileName__getFileName_28016868(23, eventId, 0, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName_28016868, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent_23070324(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_28016868; // x2

  if ( (byte_4389DA0 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_4389DA0 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28016868 = DatFileName__getFileName_28016868(24, eventId, slot, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName_28016868, 0LL);
}


void __fastcall UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  System_String_o *FileName_28016868; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x19
  UserMissionProgressManager_c *v11; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4389D9D & 1) == 0 )
  {
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_4389D9D = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28016868 = DatFileName__getFileName_28016868(23, eventId, 0, 0LL);
  v10 = (System_Int32_array **)System_String__Concat_44901936(
                                 (System_String_o *)StringLiteral_892/*"/"*/,
                                 FileName_28016868,
                                 0LL);
  v11 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v11 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->saveName = (struct System_String_o *)v10;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->saveName, v10, v4, v5, v6, v7, v8, v9);
}


void __fastcall UserMissionProgressManager__setSaveFileName_23069884(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *FileName_28016868; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x19
  UserMissionProgressManager_c *v13; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_4389D9E & 1) == 0 )
  {
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_4389D9E = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28016868 = DatFileName__getFileName_28016868(24, eventId, slot, 0LL);
  v12 = (System_Int32_array **)System_String__Concat_44901936(
                                 (System_String_o *)StringLiteral_892/*"/"*/,
                                 FileName_28016868,
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
  sub_B77560((BattleServantConfConponent_o *)&static_fields->saveName, v12, v6, v7, v8, v9, v10, v11);
}