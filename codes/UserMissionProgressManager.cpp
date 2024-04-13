void __fastcall UserMissionProgressManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  UserMissionProgressManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct UserMissionProgressManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E71BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6694/*"Fgo_20160211_1"*/, v14, v15, v16);
    byte_42E71BB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionProgressManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6694/*"Fgo_20160211_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6694/*"Fgo_20160211_1"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = UserMissionProgressManager_TypeInfo;
  UserMissionProgressManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserMissionProgressInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserMissionProgressInfo___ctor__);
  v21 = UserMissionProgressManager_TypeInfo->static_fields;
  v21->missionProgList = (struct System_Collections_Generic_List_UserMissionProgressInfo__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v21->missionProgList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall UserMissionProgressManager___ctor(UserMissionProgressManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UserMissionProgressManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *missionProgList; // x8

  if ( (byte_42E71B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v4, v5, v6);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v7, v8, v9);
    byte_42E71B5 = 1;
  }
  v10 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v10 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->missionProgList;
  if ( !missionProgList )
    goto LABEL_16;
  if ( missionProgList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (missionProgList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserMissionProgressManager_TypeInfo->static_fields->missionProgList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        missionProgList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Clear__);
      v10 = UserMissionProgressManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = UserMissionProgressManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModfiy = 1;
}


void __fastcall UserMissionProgressManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserMissionProgressManager_c *v4; // x0
  const MethodInfo *v5; // x0
  UserMissionProgressManager_c *v6; // x8
  const MethodInfo *v7; // x0

  if ( (byte_42E71B3 & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v1, v2, v3);
    byte_42E71B3 = 1;
  }
  v4 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__DeleteSaveData((const MethodInfo *)v4);
  UserMissionProgressManager__ClearSaveDataList(v5);
  v6 = UserMissionProgressManager_TypeInfo;
  UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice = 1;
  v6->static_fields->isModfiy = 1;
  UserMissionProgressManager__WriteData(v7);
}


void __fastcall UserMissionProgressManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserMissionProgressManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42E71B2 & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v1, v2, v3);
    byte_42E71B2 = 1;
  }
  v4 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Collections_Generic_List_UserMissionProgressInfo__o *__fastcall UserMissionProgressManager__GetMissionProgInfoList(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserMissionProgressManager_c *v4; // x0

  if ( (byte_42E71BA & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v1, v2, v3);
    byte_42E71BA = 1;
  }
  v4 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v4 = UserMissionProgressManager_TypeInfo;
  }
  return v4->static_fields->missionProgList;
}


void __fastcall UserMissionProgressManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserMissionProgressManager_c *v4; // x0

  if ( (byte_42E71B4 & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v1, v2, v3);
    byte_42E71B4 = 1;
  }
  v4 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall UserMissionProgressManager__ReadData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  const MethodInfo *v16; // x0
  System_String_o *SaveFileName; // x19
  UserMissionProgressManager_c *v18; // x0
  System_IO_Stream_o *v19; // x20
  System_IO_BinaryReader_o *v20; // x28
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x20
  UserMissionProgressManager_c *v24; // x0
  __int64 v25; // x3
  char v26; // w20
  UserMissionProgressManager_c *v27; // x0
  int v28; // w19
  int v29; // w20
  int v30; // w21
  int v31; // w22
  int v32; // w23
  int v33; // w24
  __int64 v34; // x26
  __int64 v35; // x27
  int v36; // w28
  __int64 v37; // x25
  __int64 v38; // x0
  __int64 v39; // x1
  UserMissionProgressManager_c *v40; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionProgList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 v45; // x0
  UserMissionProgressManager_c *v47; // x0
  System_IO_BinaryReader_o *v48; // [xsp+0h] [xbp-70h]
  int v49; // [xsp+8h] [xbp-68h]

  if ( (byte_42E71B6 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v7, v8, v9);
    sub_B5D5C4(&UserMissionProgressInfo_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v13, v14, v15);
    byte_42E71B6 = 1;
  }
  v16 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v16 = (const MethodInfo *)UserMissionProgressManager_TypeInfo;
  }
  LOBYTE(v16[2].klass->_1.gc_desc) = 0;
  SaveFileName = UserMissionProgressManager__getSaveFileName(v16);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v18 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    }
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v18);
    v19 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v20 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v20, v19, 0LL);
    if ( !v20 )
      sub_B5D69C(v21, v22);
    v23 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                               v20,
                               v20->klass->vtable._23_ReadChars.methodPtr);
    v24 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
      v24 = UserMissionProgressManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v24->static_fields->SAVE_DATA_VERSION, v23, 0LL) )
    {
      v49 = 273;
    }
    else
    {
      v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._9_ReadBoolean.method)(
              v20,
              v20->klass->vtable._10_ReadByte.methodPtr);
      v27 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v27 = UserMissionProgressManager_TypeInfo;
      }
      v27->static_fields->isContinueDevice = v26 & 1;
      v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
              v20,
              v20->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v28 >= 1 )
      {
        v29 = 0;
        v48 = v20;
        do
        {
          v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v33 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._17_ReadInt64.method)(
                  v20,
                  v20->klass->vtable._18_ReadUInt64.methodPtr);
          v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._17_ReadInt64.method)(
                  v20,
                  v20->klass->vtable._18_ReadUInt64.methodPtr);
          v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v37 = sub_B5D694(UserMissionProgressInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v37, 0LL);
          if ( !v37 )
            sub_B5D69C(v38, v39);
          *(_DWORD *)(v37 + 16) = v30;
          *(_DWORD *)(v37 + 20) = v31;
          *(_DWORD *)(v37 + 24) = v32;
          *(_DWORD *)(v37 + 28) = v33;
          *(_QWORD *)(v37 + 32) = v34;
          *(_QWORD *)(v37 + 40) = v35;
          *(_DWORD *)(v37 + 48) = v36;
          v40 = UserMissionProgressManager_TypeInfo;
          if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
          {
            v20 = v48;
            if ( !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
              v40 = UserMissionProgressManager_TypeInfo;
            }
          }
          else
          {
            v20 = v48;
          }
          missionProgList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v40->static_fields->missionProgList;
          if ( !missionProgList )
            sub_B5D69C(0LL, v39);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionProgList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
          ++v29;
        }
        while ( v29 < v28 );
      }
      v49 = 258;
    }
    klass = v20->klass;
    if ( *(_WORD *)&v20->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v43;
        p_offset += 4;
        if ( v43 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_33;
      }
      v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_33:
      v45 = sub_AF54C0(v20, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v45)(v20, *(_QWORD *)(v45 + 8));
    return v49 == 258;
  }
  else
  {
    v47 = UserMissionProgressManager_TypeInfo;
    if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    }
    UserMissionProgressManager__ClearSaveDataList((const MethodInfo *)v47);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserMissionProgressManager__SetAchiveMission(
        int32_t missionId,
        int32_t progStatus,
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
  UserMissionProgressManager_c *v18; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *missionProgList; // x0
  UserMissionProgressManager_c *v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E71B9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__,
      progStatus,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__, v12, v13, v14);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v15, v16, v17);
    byte_42E71B9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v18 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v18 = UserMissionProgressManager_TypeInfo;
  }
  missionProgList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18->static_fields->missionProgList;
  if ( !missionProgList )
    sub_B5D69C(0LL, *(_QWORD *)&progStatus);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    missionProgList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserMissionProgressInfo__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__MoveNext__);
    if ( !v21 )
      break;
    if ( !v23.fields.current )
      sub_B5D69C(v21, v22);
    if ( HIDWORD(v23.fields.current[1].klass) == missionId && LODWORD(v23.fields.current[1].monitor) == 4 )
    {
      if ( HIDWORD(v23.fields.current[1].monitor) == progStatus )
        break;
      HIDWORD(v23.fields.current[1].monitor) = progStatus;
      v20 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v20 = UserMissionProgressManager_TypeInfo;
      }
      v20->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserMissionProgressInfo__Dispose__);
}


void __fastcall UserMissionProgressManager__SetMissionProgData(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
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
  void *Instance; // x0
  __int64 v18; // x1
  int v19; // w8
  void *v20; // x20
  __int64 v21; // x22
  __int64 v22; // x8
  int v23; // w27
  __int64 v24; // x21
  const MethodInfo *v25; // x1
  UserMissionProgressManager_c *v26; // x0
  __int64 v27; // x0

  if ( (byte_42E71B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&UserMissionProgressInfo_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v14, v15, v16);
    byte_42E71B7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = EventMissionMaster__getEventMissionList((EventMissionMaster_o *)Instance, eventId, 0LL);
  if ( Instance )
  {
    v19 = *((_DWORD *)Instance + 6);
    v20 = Instance;
    if ( v19 >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v21 >= v19 )
        {
          v27 = sub_B5D6C8(Instance);
          sub_B5D668(v27, 0LL);
        }
        v22 = *((_QWORD *)v20 + v21 + 4);
        if ( !v22 )
          break;
        v23 = *(_DWORD *)(v22 + 16);
        v24 = sub_B5D694(UserMissionProgressInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v24, 0LL);
        *(_DWORD *)(v24 + 16) = eventId;
        *(_DWORD *)(v24 + 20) = v23;
        UserMissionProgressInfo__checkMissionCond((UserMissionProgressInfo_o *)v24, v25);
        v26 = UserMissionProgressManager_TypeInfo;
        if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
          v26 = UserMissionProgressManager_TypeInfo;
        }
        Instance = v26->static_fields->missionProgList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserMissionProgressInfo__Add__);
        v19 = *((_DWORD *)v20 + 6);
        if ( (int)++v21 >= v19 )
          return;
      }
LABEL_16:
      sub_B5D69C(Instance, v18);
    }
  }
}


bool __fastcall UserMissionProgressManager__WriteData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UserMissionProgressManager_c *v19; // x0
  struct UserMissionProgressManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v23; // x0
  UserMissionProgressManager_c *v25; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v27; // x20
  System_IO_BinaryWriter_o *v28; // x19
  __int64 v29; // x1
  UserMissionProgressManager_c *v30; // x0
  struct UserMissionProgressManager_StaticFields *v31; // x8
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *missionProgList; // x9
  int size; // w20
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x22
  UserMissionProgressManager_c *v37; // x0
  struct System_Collections_Generic_List_UserMissionProgressInfo__o *v38; // x23
  UserMissionProgressInfo_o *v39; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0

  if ( (byte_42E71B8 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionProgressInfo__get_Item__, v10, v11, v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v16, v17, v18);
    byte_42E71B8 = 1;
  }
  v19 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v19 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    p_isModfiy = &UserMissionProgressManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v23 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v23 = ManagerConfig_TypeInfo;
  }
  if ( v23->static_fields->UseMock )
    return 0;
  v25 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  SaveFileName = UserMissionProgressManager__getSaveFileName((const MethodInfo *)v25);
  v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v28, v27, 0LL);
  v30 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v30 = UserMissionProgressManager_TypeInfo;
  }
  v31 = v30->static_fields;
  missionProgList = v31->missionProgList;
  if ( !missionProgList )
    sub_B5D69C(v30, v29);
  if ( !v28 )
    sub_B5D69C(v30, v29);
  size = missionProgList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v28->klass->vtable._22_Write.method)(
    v28,
    v31->SAVE_DATA_VERSION,
    v28->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v28->klass->vtable._8_Write.method)(
    v28,
    UserMissionProgressManager_TypeInfo->static_fields->isContinueDevice,
    v28->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
    v28,
    (unsigned int)size,
    v28->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v36 = 0LL;
    do
    {
      v37 = UserMissionProgressManager_TypeInfo;
      if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
        v37 = UserMissionProgressManager_TypeInfo;
      }
      v38 = v37->static_fields->missionProgList;
      if ( !v38 )
        sub_B5D69C(v37, v34);
      if ( v38->fields._size <= (unsigned int)v36 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v39 = v38->fields._items->m_Items[v36];
      if ( !v39 )
        sub_B5D69C(v37, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.eventId,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.missionId,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.currentProgressType,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.currentProgStatus,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v28->klass->vtable._19_Write.method)(
        v28,
        v39->fields.progNum,
        v28->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v28->klass->vtable._19_Write.method)(
        v28,
        v39->fields.targetNum,
        v28->klass->vtable._20_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.condMsgType,
        v28->klass->vtable._18_Write.methodPtr);
      ++v36;
    }
    while ( (int)v36 < size );
  }
  klass = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      p_offset += 4;
      if ( v41 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v43 = sub_AF54C0(v28, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v43)(v28, *(_QWORD *)(v43 + 8));
  return 1;
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *DatFileSavePath; // x19
  UserMissionProgressManager_c *v8; // x8

  if ( (byte_42E71B1 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v4, v5, v6);
    byte_42E71B1 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v8 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v8 = UserMissionProgressManager_TypeInfo;
  }
  return System_String__Concat_44577788(DatFileSavePath, v8->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent(
        int32_t eventId,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_28254688; // x2

  if ( (byte_42E71AF & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v8, v9, v10);
    byte_42E71AF = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28254688 = DatFileName__getFileName_28254688(23, eventId, 0, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName_28254688, 0LL);
}


System_String_o *__fastcall UserMissionProgressManager__getSaveFileNameByEvent_22533216(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *DatFileSavePath; // x21
  System_String_o *FileName_28254688; // x2

  if ( (byte_42E71B0 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, slot, (_DWORD)method, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v9, v10, v11);
    byte_42E71B0 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28254688 = DatFileName__getFileName_28254688(24, eventId, slot, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName_28254688, 0LL);
}


void __fastcall UserMissionProgressManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *FileName_28254688; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x19
  UserMissionProgressManager_c *v19; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_42E71AD & 1) == 0 )
  {
    sub_B5D5C4(&DatFileName_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v8, v9, v10);
    byte_42E71AD = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28254688 = DatFileName__getFileName_28254688(23, eventId, 0, 0LL);
  v18 = (System_Int32_array **)System_String__Concat_44577788(
                                 (System_String_o *)StringLiteral_885/*"/"*/,
                                 FileName_28254688,
                                 0LL);
  v19 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v19 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->saveName = (struct System_String_o *)v18;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->saveName, v18, v12, v13, v14, v15, v16, v17);
}


void __fastcall UserMissionProgressManager__setSaveFileName_22532776(
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *FileName_28254688; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x19
  UserMissionProgressManager_c *v20; // x8
  struct UserMissionProgressManager_StaticFields *static_fields; // x0

  if ( (byte_42E71AE & 1) == 0 )
  {
    sub_B5D5C4(&DatFileName_TypeInfo, slot, (_DWORD)method, v3);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v9, v10, v11);
    byte_42E71AE = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28254688 = DatFileName__getFileName_28254688(24, eventId, slot, 0LL);
  v19 = (System_Int32_array **)System_String__Concat_44577788(
                                 (System_String_o *)StringLiteral_885/*"/"*/,
                                 FileName_28254688,
                                 0LL);
  v20 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
    v20 = UserMissionProgressManager_TypeInfo;
  }
  static_fields = v20->static_fields;
  static_fields->saveName = (struct System_String_o *)v19;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->saveName, v19, v13, v14, v15, v16, v17, v18);
}