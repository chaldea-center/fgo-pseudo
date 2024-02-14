void __fastcall UserMissionNewManager___cctor(const MethodInfo *method)
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
  UserMissionNewManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  struct UserMissionNewManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  struct UserMissionNewManager_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_421378E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo, v8);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6633/*"Fgo_20160323_1"*/, v10);
    byte_421378E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionNewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6633/*"Fgo_20160323_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6633/*"Fgo_20160323_1"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserMissionNewManager_TypeInfo;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v13->static_fields->isNew = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v17 = UserMissionNewManager_TypeInfo->static_fields;
  v17->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->missionNewInfoList,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v27 = UserMissionNewManager_TypeInfo->static_fields;
  v27->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v27->oldNewInfoList,
    (System_Int32_array **)v26,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
}


void __fastcall UserMissionNewManager___ctor(UserMissionNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserMissionNewManager_c *v4; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *missionNewInfoList; // x8

  if ( (byte_4213789 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v2);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v3);
    byte_4213789 = 1;
  }
  v4 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v4 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    goto LABEL_16;
  if ( missionNewInfoList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (missionNewInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserMissionNewManager_TypeInfo->static_fields->missionNewInfoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        missionNewInfoList,
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
      v4 = UserMissionNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(v4);
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserMissionNewManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall UserMissionNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  UserMissionNewManager_c *v4; // x8
  const MethodInfo *v5; // x0

  if ( (byte_4213787 & 1) == 0 )
  {
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v1);
    byte_4213787 = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  UserMissionNewManager__DeleteSaveData((const MethodInfo *)v2);
  UserMissionNewManager__ClearSaveDataList(v3);
  v4 = UserMissionNewManager_TypeInfo;
  UserMissionNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v4->static_fields->isModfiy = 1;
  UserMissionNewManager__WriteData(v5);
}


void __fastcall UserMissionNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4213786 & 1) == 0 )
  {
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v1);
    byte_4213786 = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserMissionNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionProgressManager_c *v2; // x0

  if ( (byte_4213788 & 1) == 0 )
  {
    sub_B0D8A4(&UserMissionProgressManager_TypeInfo, v1);
    byte_4213788 = 1;
  }
  v2 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserMissionNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0
  System_String_o *SaveFileName; // x19
  UserMissionNewManager_c *v8; // x0
  System_IO_Stream_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_IO_BinaryReader_o *v12; // x19
  __int64 v13; // x0
  System_String_o *v14; // x20
  UserMissionNewManager_c *v15; // x0
  char v16; // w20
  UserMissionNewManager_c *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int v24; // w20
  int i; // w26
  int32_t v26; // w22
  int32_t v27; // w23
  char v28; // w24
  __int64 v29; // x1
  __int64 v30; // x2
  UserMissionNewManager_UserMissionNewInfo_o *v31; // x21
  __int64 v32; // x0
  UserMissionNewManager_c *v33; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionNewInfoList; // x0
  UserMissionNewManager_c *v35; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  System_Int32_array **v37; // x1
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 v41; // x0
  UserMissionNewManager_c *v43; // x0
  int v44; // [xsp+8h] [xbp-68h]

  if ( (byte_421378A & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v3);
    sub_B0D8A4(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v4);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v5);
    byte_421378A = 1;
  }
  v6 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v6 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  }
  LOBYTE(v6[2].klass->_1.gc_desc) = 0;
  SaveFileName = UserMissionNewManager__getSaveFileName(v6);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v8 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    }
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v8);
    v9 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v12 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v10, v11);
    System_IO_BinaryReader___ctor(v12, v9, 0LL);
    if ( !v12 )
      sub_B0D97C(v13);
    v14 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                               v12,
                               v12->klass->vtable._23_ReadChars.methodPtr);
    v15 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v15 = UserMissionNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v15->static_fields->SAVE_DATA_VERSION, v14, 0LL) )
    {
      v44 = 209;
    }
    else
    {
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._9_ReadBoolean.method)(
              v12,
              v12->klass->vtable._10_ReadByte.methodPtr);
      v17 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v17 = UserMissionNewManager_TypeInfo;
      }
      v17->static_fields->isContinueDevice = v16 & 1;
      v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
              v12,
              v12->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v24 >= 1 )
      {
        for ( i = 0; i < v24; ++i )
        {
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                  v12,
                  v12->klass->vtable._16_ReadUInt32.methodPtr);
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
                  v12,
                  v12->klass->vtable._16_ReadUInt32.methodPtr);
          v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._9_ReadBoolean.method)(
                  v12,
                  v12->klass->vtable._10_ReadByte.methodPtr);
          v31 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B0D974(
                                                                UserMissionNewManager_UserMissionNewInfo_TypeInfo,
                                                                v29,
                                                                v30);
          UserMissionNewManager_UserMissionNewInfo___ctor(v31, 0LL);
          if ( !v31 )
            sub_B0D97C(v32);
          v31->fields.eventId = v26;
          v31->fields.missionId = v27;
          v31->fields.isNew = v28 & 1;
          v33 = UserMissionNewManager_TypeInfo;
          if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
            v33 = UserMissionNewManager_TypeInfo;
          }
          missionNewInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33->static_fields->missionNewInfoList;
          if ( !missionNewInfoList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionNewInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        }
      }
      v35 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v35 = UserMissionNewManager_TypeInfo;
      }
      static_fields = v35->static_fields;
      v37 = (System_Int32_array **)static_fields->missionNewInfoList;
      static_fields->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v37;
      sub_B0D840((BattleServantConfConponent_o *)&static_fields->oldNewInfoList, v37, v18, v19, v20, v21, v22, v23);
      v44 = 194;
    }
    klass = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_35:
      v41 = sub_AA67A0(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v12, *(_QWORD *)(v41 + 8));
    return v44 == 194;
  }
  else
  {
    v43 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    }
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v43);
    return 0;
  }
}


void __fastcall UserMissionNewManager__SetClearNewFlg(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserMissionNewManager_c *v6; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *missionNewInfoList; // x0
  UserMissionNewManager_c *v8; // x0
  _BOOL8 v9; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421378D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      v1);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v2);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__, v4);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v5);
    byte_421378D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  v6 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v6 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    missionNewInfoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v10,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v9 )
      break;
    if ( !v10.fields.current )
      sub_B0D97C(v9);
    if ( LOBYTE(v10.fields.current[1].monitor) )
    {
      LOBYTE(v10.fields.current[1].monitor) = 0;
      v8 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v8 = UserMissionNewManager_TypeInfo;
      }
      v8->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool __fastcall UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserMissionNewManager_c *missionNewInfoList; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *oldNewInfoList; // x9
  _BOOL8 v13; // x0
  char v14; // w21
  char v15; // w20
  UserMissionNewManager_UserMissionNewInfo_o *v16; // x21
  int32_t currentEventId; // w8
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_421378C & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v8);
    sub_B0D8A4(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v9);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v10);
    byte_421378C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  missionNewInfoList = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
  }
  oldNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)missionNewInfoList->static_fields->oldNewInfoList;
  if ( !oldNewInfoList )
    goto LABEL_28;
  if ( oldNewInfoList->fields._size < 1 )
  {
    v15 = 1;
LABEL_21:
    v16 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B0D974(
                                                          UserMissionNewManager_UserMissionNewInfo_TypeInfo,
                                                          method,
                                                          v2);
    UserMissionNewManager_UserMissionNewInfo___ctor(v16, 0LL);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      missionNewInfoList = UserMissionNewManager_TypeInfo;
    }
    if ( v16 )
    {
      currentEventId = missionNewInfoList->static_fields->currentEventId;
      v16->fields.isNew = 1;
      v16->fields.eventId = currentEventId;
      v16->fields.missionId = targetMissionId;
      missionNewInfoList = (UserMissionNewManager_c *)missionNewInfoList->static_fields->missionNewInfoList;
      if ( missionNewInfoList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)missionNewInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
        return v15;
      }
    }
LABEL_28:
    sub_B0D97C(missionNewInfoList);
  }
  if ( (BYTE3(missionNewInfoList->vtable._0_Equals.methodPtr) & 4) != 0 && !missionNewInfoList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(missionNewInfoList);
    oldNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserMissionNewManager_TypeInfo->static_fields->oldNewInfoList;
    if ( !oldNewInfoList )
      goto LABEL_28;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    oldNewInfoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v13 )
      break;
    if ( !v19.fields.current )
      sub_B0D97C(v13);
    if ( HIDWORD(v19.fields.current[1].klass) == targetMissionId )
    {
      v14 = 0;
      v15 = LOBYTE(v19.fields.current[1].monitor) != 0;
      goto LABEL_17;
    }
  }
  v14 = 1;
  v15 = 1;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
  if ( (v14 & 1) != 0 )
    goto LABEL_21;
  return v15;
}


bool __fastcall UserMissionNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserMissionNewManager_c *v7; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  UserMissionNewManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_IO_BinaryWriter_o *v18; // x19
  UserMissionNewManager_c *v19; // x0
  struct UserMissionNewManager_StaticFields *v20; // x8
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w20
  __int64 v23; // x22
  UserMissionNewManager_c *v24; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *v25; // x23
  UserMissionNewManager_UserMissionNewInfo_o *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0

  if ( (byte_421378B & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__, v4);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v6);
    byte_421378B = 1;
  }
  v7 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v7 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &UserMissionNewManager_TypeInfo->static_fields->isModfiy;
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
  v13 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v18 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v16, v17);
  System_IO_BinaryWriter___ctor_39036700(v18, v15, 0LL);
  v19 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v19 = UserMissionNewManager_TypeInfo;
  }
  v20 = v19->static_fields;
  missionNewInfoList = v20->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B0D97C(v19);
  if ( !v18 )
    sub_B0D97C(v19);
  size = missionNewInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
    v18,
    v20->SAVE_DATA_VERSION,
    v18->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
    v18,
    UserMissionNewManager_TypeInfo->static_fields->isContinueDevice,
    v18->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
    v18,
    (unsigned int)size,
    v18->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v23 = 0LL;
    do
    {
      v24 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v24 = UserMissionNewManager_TypeInfo;
      }
      v25 = v24->static_fields->missionNewInfoList;
      if ( !v25 )
        sub_B0D97C(v24);
      if ( v25->fields._size <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v26 = v25->fields._items->m_Items[v23];
      if ( !v26 )
        sub_B0D97C(v24);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v26->fields.eventId,
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v26->fields.missionId,
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
        v18,
        v26->fields.isNew,
        v18->klass->vtable._9_Write.methodPtr);
      ++v23;
    }
    while ( (int)v23 < size );
  }
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v30 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v18, *(_QWORD *)(v30 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  UserMissionNewManager_c *v4; // x8

  if ( (byte_4213785 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v2);
    byte_4213785 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v4 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v4 = UserMissionNewManager_TypeInfo;
  }
  return System_String__Concat_43849904(DatFileSavePath, v4->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_27230320; // x2

  if ( (byte_4213784 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, method);
    sub_B0D8A4(&DatFileName_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v4);
    byte_4213784 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27230320 = DatFileName__getFileName_27230320(25, eventId, 0, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName_27230320, 0LL);
}


void __fastcall UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *FileName_27230320; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x20
  UserMissionNewManager_c *v13; // x8
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_4213783 & 1) == 0 )
  {
    sub_B0D8A4(&DatFileName_TypeInfo, method);
    sub_B0D8A4(&UserMissionNewManager_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v4);
    byte_4213783 = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27230320 = DatFileName__getFileName_27230320(25, eventId, 0, 0LL);
  v12 = (System_Int32_array **)System_String__Concat_43849904(
                                 (System_String_o *)StringLiteral_879/*"/"*/,
                                 FileName_27230320,
                                 0LL);
  v13 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v13 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  static_fields->saveName = (struct System_String_o *)v12;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->saveName, v12, v6, v7, v8, v9, v10, v11);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void __fastcall UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}