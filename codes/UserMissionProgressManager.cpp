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

  if ( (byte_42AEFBB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    sub_B52984(&StringLiteral_6658/*"Fgo_20160211_1"*/);
    byte_42AEFBB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionProgressManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6658/*"Fgo_20160211_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6658/*"Fgo_20160211_1"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserMissionProgressManager_TypeInfo;
  UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  v11 = UserMissionProgressManager_TypeInfo->static_fields;
  v11->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v10;
  sub_B52920(
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

  if ( (byte_42AEFB5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB5 = 1;
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
        (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
      v2 = UserMissionProgressManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B52A5C(v2, v1);
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

  if ( (byte_42AEFB3 & 1) == 0 )
  {
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB3 = 1;
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

  if ( (byte_42AEFB2 & 1) == 0 )
  {
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB2 = 1;
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

  if ( (byte_42AEFBA & 1) == 0 )
  {
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFBA = 1;
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

  if ( (byte_42AEFB4 & 1) == 0 )
  {
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB4 = 1;
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
  __int64 v10; // x3
  char v11; // w20
  UserMissionProgressManager_c *v12; // x0
  int v13; // w19
  int v14; // w20
  int v15; // w21
  int v16; // w22
  int v17; // w23
  int v18; // w24
  __int64 v19; // x26
  __int64 v20; // x27
  int v21; // w28
  __int64 v22; // x25
  __int64 v23; // x0
  __int64 v24; // x1
  UserMissionProgressManager_c *v25; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionProgList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  UserMissionProgressManager_c *v32; // x0
  System_IO_BinaryReader_o *v33; // [xsp+0h] [xbp-70h]
  int v34; // [xsp+8h] [xbp-68h]

  if ( (byte_42AEFB6 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_B52984(&UserMissionProgressInfo_TypeInfo);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB6 = 1;
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
    v5 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v5, v4, 0LL);
    if ( !v5 )
      sub_B52A5C(v6, v7);
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
      v34 = 273;
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._9_ReadBoolean.method)(
              v5,
              v5->klass->vtable._10_ReadByte.methodPtr);
      v12 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v12 = UserMissionProgressManager_TypeInfo;
      }
      v12->static_fields->isContinueDevice = v11 & 1;
      v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
              v5,
              v5->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v13 >= 1 )
      {
        v14 = 0;
        v33 = v5;
        do
        {
          v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._17_ReadInt64.method)(
                  v5,
                  v5->klass->vtable._18_ReadUInt64.methodPtr);
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._17_ReadInt64.method)(
                  v5,
                  v5->klass->vtable._18_ReadUInt64.methodPtr);
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v22 = sub_B52A54(UserMissionProgressInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v22, 0LL);
          if ( !v22 )
            sub_B52A5C(v23, v24);
          *(_DWORD *)(v22 + 16) = v15;
          *(_DWORD *)(v22 + 20) = v16;
          *(_DWORD *)(v22 + 24) = v17;
          *(_DWORD *)(v22 + 28) = v18;
          *(_QWORD *)(v22 + 32) = v19;
          *(_QWORD *)(v22 + 40) = v20;
          *(_DWORD *)(v22 + 48) = v21;
          v25 = UserMissionProgressManager_TypeInfo;
          if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
            v5 = v33;
            if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
              v25 = UserMissionProgressManager_TypeInfo;
            }
          }
          else
          {
            v5 = v33;
          }
          missionProgList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v25->static_fields->missionProgList;
          if ( !missionProgList )
            sub_B52A5C(0LL, v24);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionProgList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
          ++v14;
        }
        while ( v14 < v13 );
      }
      v34 = 258;
    }
    klass = v5->klass;
    if ( *(_WORD *)&v5->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&v5->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v30 = sub_AEB880(v5, System_IDisposable_TypeInfo, 0LL, v10);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v30)(v5, *(_QWORD *)(v30 + 8));
    return v34 == 258;
  }
  else
  {
    v32 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    }
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v32);
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

  if ( (byte_42AEFB9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB9 = 1;
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
    sub_B52A5C(0LL, *(_QWORD *)&progStatus);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    missionProgList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v8 )
      break;
    if ( !v10.fields.current )
      sub_B52A5C(v8, v9);
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
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
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

  if ( (byte_42AEFB7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserMissionProgressInfo_TypeInfo);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionMaster___);
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
          v13 = sub_B52A88(Instance);
          sub_B52A28(v13, 0LL);
        }
        v8 = *((_QWORD *)v6 + v7 + 4);
        if ( !v8 )
          break;
        v9 = *(_DWORD *)(v8 + 16);
        v10 = sub_B52A54(UserMissionProgressInfo_TypeInfo);
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
        v5 = *((_DWORD *)v6 + 6);
        if ( (int)++v7 >= v5 )
          return;
      }
LABEL_16:
      sub_B52A5C(Instance, v4);
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
  __int64 v17; // x3
  __int64 v18; // x22
  UserMissionProgressManager_c *v19; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *v20; // x23
  UserMissionProgressInfo_o *v21; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0

  if ( (byte_42AEFB8 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB8 = 1;
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
  v10 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40252128(v10, v9, 0LL);
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
    sub_B52A5C(v12, v11);
  if ( !v10 )
    sub_B52A5C(v12, v11);
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
    v18 = 0LL;
    do
    {
      v19 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v19 = UserMissionProgressManager_TypeInfo;
      }
      v20 = v19->static_fields->missionProgList;
      if ( !v20 )
        sub_B52A5C(v19, v16);
      if ( v20->fields._size <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v21 = v20->fields._items->m_Items[v18];
      if ( !v21 )
        sub_B52A5C(v19, v16);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v21->fields.eventId,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v21->fields.missionId,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v21->fields.currentProgressType,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v21->fields.currentProgStatus,
        v10->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v10->klass->vtable._19_Write.method)(
        v10,
        v21->fields.progNum,
        v10->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v10->klass->vtable._19_Write.method)(
        v10,
        v21->fields.targetNum,
        v10->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
        v10,
        (unsigned int)v21->fields.condMsgType,
        v10->klass->vtable._18_Write.methodPtr);
      ++v18;
    }
    while ( (int)v18 < size );
  }
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v25 = sub_AEB880(v10, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v25)(v10, *(_QWORD *)(v25 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  UserMissionProgressManager_c *v2; // x8

  if ( (byte_42AEFB1 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    byte_42AEFB1 = 1;
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
  return System_String__Concat_44568316(DatFileSavePath, v2->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent(
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_28056352; // x2

  if ( (byte_42AEFAF & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AEFAF = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28056352 = DatFileName__getFileName_28056352(23, eventId, 0, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName_28056352, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent_23242360(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_28056352; // x2

  if ( (byte_42AEFB0 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AEFB0 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28056352 = DatFileName__getFileName_28056352(24, eventId, slot, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName_28056352, 0LL);
}


void __fastcall UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  System_String_o *FileName_28056352; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x19
  UserMissionProgressManager_c *v11; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_42AEFAD & 1) == 0 )
  {
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AEFAD = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28056352 = DatFileName__getFileName_28056352(23, eventId, 0, 0LL);
  v10 = (System_Int32_array **)System_String__Concat_44568316(
                                 (System_String_o *)StringLiteral_886/*"/"*/,
                                 FileName_28056352,
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
  sub_B52920((BattleServantConfConponent_o *)&static_fields->saveName, v10, v4, v5, v6, v7, v8, v9);
}


void __fastcall UserMissionProgressManager__setSaveFileName_23241920(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *FileName_28056352; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x19
  UserMissionProgressManager_c *v13; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_42AEFAE & 1) == 0 )
  {
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&UserMissionProgressManager_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AEFAE = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28056352 = DatFileName__getFileName_28056352(24, eventId, slot, 0LL);
  v12 = (System_Int32_array **)System_String__Concat_44568316(
                                 (System_String_o *)StringLiteral_886/*"/"*/,
                                 FileName_28056352,
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
  sub_B52920((BattleServantConfConponent_o *)&static_fields->saveName, v12, v6, v7, v8, v9, v10, v11);
}