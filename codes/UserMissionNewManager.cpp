void __fastcall UserMissionNewManager___cctor(const MethodInfo *method)
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
  UserMissionNewManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct UserMissionNewManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x19
  struct UserMissionNewManager_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_42E71AA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__,
      v1,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6695/*"Fgo_20160323_1"*/, v14, v15, v16);
    byte_42E71AA = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionNewManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6695/*"Fgo_20160323_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6695/*"Fgo_20160323_1"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = UserMissionNewManager_TypeInfo;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v19->static_fields->isNew = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v21 = UserMissionNewManager_TypeInfo->static_fields;
  v21->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v21->missionNewInfoList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v29 = UserMissionNewManager_TypeInfo->static_fields;
  v29->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v28;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v29->oldNewInfoList,
    (System_Int32_array **)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall UserMissionNewManager___ctor(UserMissionNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionNewManager__ClearSaveDataList(const MethodInfo *method)
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
  UserMissionNewManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *missionNewInfoList; // x8

  if ( (byte_42E71A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__, v1, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__,
      v4,
      v5,
      v6);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v7, v8, v9);
    byte_42E71A5 = 1;
  }
  v10 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v10 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    goto LABEL_16;
  if ( missionNewInfoList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (missionNewInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserMissionNewManager_TypeInfo->static_fields->missionNewInfoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        missionNewInfoList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
      v10 = UserMissionNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = UserMissionNewManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModfiy = 1;
}


void __fastcall UserMissionNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserMissionNewManager_c *v4; // x0
  const MethodInfo *v5; // x0
  UserMissionNewManager_c *v6; // x8
  const MethodInfo *v7; // x0

  if ( (byte_42E71A3 & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v1, v2, v3);
    byte_42E71A3 = 1;
  }
  v4 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  UserMissionNewManager__DeleteSaveData((const MethodInfo *)v4);
  UserMissionNewManager__ClearSaveDataList(v5);
  v6 = UserMissionNewManager_TypeInfo;
  UserMissionNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v6->static_fields->isModfiy = 1;
  UserMissionNewManager__WriteData(v7);
}


void __fastcall UserMissionNewManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserMissionNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42E71A2 & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v1, v2, v3);
    byte_42E71A2 = 1;
  }
  v4 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserMissionNewManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserMissionProgressManager_c *v4; // x0

  if ( (byte_42E71A4 & 1) == 0 )
  {
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v1, v2, v3);
    byte_42E71A4 = 1;
  }
  v4 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall UserMissionNewManager__ReadData(const MethodInfo *method)
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
  UserMissionNewManager_c *v18; // x0
  System_IO_Stream_o *v19; // x20
  System_IO_BinaryReader_o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x20
  UserMissionNewManager_c *v24; // x0
  __int64 v25; // x3
  char v26; // w20
  UserMissionNewManager_c *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // w20
  int i; // w26
  int32_t v36; // w22
  int32_t v37; // w23
  char v38; // w24
  UserMissionNewManager_UserMissionNewInfo_o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  UserMissionNewManager_c *v42; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionNewInfoList; // x0
  UserMissionNewManager_c *v44; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  System_Int32_array **v46; // x1
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  __int64 v50; // x0
  UserMissionNewManager_c *v52; // x0
  int v53; // [xsp+8h] [xbp-68h]

  if ( (byte_42E71A6 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v7, v8, v9);
    sub_B5D5C4(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v13, v14, v15);
    byte_42E71A6 = 1;
  }
  v16 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v16 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  }
  LOBYTE(v16[2].klass->_1.gc_desc) = 0;
  SaveFileName = UserMissionNewManager__getSaveFileName(v16);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v18 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    }
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v18);
    v19 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v20 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v20, v19, 0LL);
    if ( !v20 )
      sub_B5D69C(v21, v22);
    v23 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                               v20,
                               v20->klass->vtable._23_ReadChars.methodPtr);
    v24 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v24 = UserMissionNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v24->static_fields->SAVE_DATA_VERSION, v23, 0LL) )
    {
      v53 = 209;
    }
    else
    {
      v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._9_ReadBoolean.method)(
              v20,
              v20->klass->vtable._10_ReadByte.methodPtr);
      v27 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v27 = UserMissionNewManager_TypeInfo;
      }
      v27->static_fields->isContinueDevice = v26 & 1;
      v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
              v20,
              v20->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v34 >= 1 )
      {
        for ( i = 0; i < v34; ++i )
        {
          v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v37 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
                  v20,
                  v20->klass->vtable._16_ReadUInt32.methodPtr);
          v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._9_ReadBoolean.method)(
                  v20,
                  v20->klass->vtable._10_ReadByte.methodPtr);
          v39 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B5D694(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
          UserMissionNewManager_UserMissionNewInfo___ctor(v39, 0LL);
          if ( !v39 )
            sub_B5D69C(v40, v41);
          v39->fields.eventId = v36;
          v39->fields.missionId = v37;
          v39->fields.isNew = v38 & 1;
          v42 = UserMissionNewManager_TypeInfo;
          if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
            v42 = UserMissionNewManager_TypeInfo;
          }
          missionNewInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v42->static_fields->missionNewInfoList;
          if ( !missionNewInfoList )
            sub_B5D69C(0LL, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionNewInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        }
      }
      v44 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v44 = UserMissionNewManager_TypeInfo;
      }
      static_fields = v44->static_fields;
      v46 = (System_Int32_array **)static_fields->missionNewInfoList;
      static_fields->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v46;
      sub_B5D560((BattleServantConfConponent_o *)&static_fields->oldNewInfoList, v46, v28, v29, v30, v31, v32, v33);
      v53 = 194;
    }
    klass = v20->klass;
    if ( *(_WORD *)&v20->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v48;
        p_offset += 4;
        if ( v48 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      v50 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_35:
      v50 = sub_AF54C0(v20, System_IDisposable_TypeInfo, 0LL, v25);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v50)(v20, *(_QWORD *)(v50 + 8));
    return v53 == 194;
  }
  else
  {
    v52 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    }
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v52);
    return 0;
  }
}


void __fastcall UserMissionNewManager__SetClearNewFlg(const MethodInfo *method)
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UserMissionNewManager_c *v16; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *missionNewInfoList; // x0
  UserMissionNewManager_c *v18; // x0
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E71A9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      v1,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v4,
      v5,
      v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v13, v14, v15);
    byte_42E71A9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v16 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v16 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v16->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B5D69C(0LL, v1);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    missionNewInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v19 )
      break;
    if ( !v21.fields.current )
      sub_B5D69C(v19, v20);
    if ( LOBYTE(v21.fields.current[1].monitor) )
    {
      LOBYTE(v21.fields.current[1].monitor) = 0;
      v18 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v18 = UserMissionNewManager_TypeInfo;
      }
      v18->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool __fastcall UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UserMissionNewManager_c *missionNewInfoList; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *oldNewInfoList; // x9
  _BOOL8 v28; // x0
  __int64 v29; // x1
  char v30; // w21
  char v31; // w20
  UserMissionNewManager_UserMissionNewInfo_o *v32; // x21
  int32_t currentEventId; // w8
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42E71A8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v23, v24, v25);
    byte_42E71A8 = 1;
  }
  memset(&v35, 0, sizeof(v35));
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
    v31 = 1;
LABEL_21:
    v32 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B5D694(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
    UserMissionNewManager_UserMissionNewInfo___ctor(v32, 0LL);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      missionNewInfoList = UserMissionNewManager_TypeInfo;
    }
    if ( v32 )
    {
      currentEventId = missionNewInfoList->static_fields->currentEventId;
      v32->fields.isNew = 1;
      v32->fields.eventId = currentEventId;
      v32->fields.missionId = targetMissionId;
      missionNewInfoList = (UserMissionNewManager_c *)missionNewInfoList->static_fields->missionNewInfoList;
      if ( missionNewInfoList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)missionNewInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
        return v31;
      }
    }
LABEL_28:
    sub_B5D69C(missionNewInfoList, method);
  }
  if ( (BYTE3(missionNewInfoList->vtable._0_Equals.methodPtr) & 4) != 0 && !missionNewInfoList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(missionNewInfoList);
    oldNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserMissionNewManager_TypeInfo->static_fields->oldNewInfoList;
    if ( !oldNewInfoList )
      goto LABEL_28;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    oldNewInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v28 )
      break;
    if ( !v35.fields.current )
      sub_B5D69C(v28, v29);
    if ( HIDWORD(v35.fields.current[1].klass) == targetMissionId )
    {
      v30 = 0;
      v31 = LOBYTE(v35.fields.current[1].monitor) != 0;
      goto LABEL_17;
    }
  }
  v30 = 1;
  v31 = 1;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
  if ( (v30 & 1) != 0 )
    goto LABEL_21;
  return v31;
}


bool __fastcall UserMissionNewManager__WriteData(const MethodInfo *method)
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
  UserMissionNewManager_c *v19; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v23; // x0
  UserMissionNewManager_c *v25; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v27; // x20
  System_IO_BinaryWriter_o *v28; // x19
  __int64 v29; // x1
  UserMissionNewManager_c *v30; // x0
  struct UserMissionNewManager_StaticFields *v31; // x8
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w20
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x22
  UserMissionNewManager_c *v37; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *v38; // x23
  UserMissionNewManager_UserMissionNewInfo_o *v39; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0

  if ( (byte_42E71A7 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v16, v17, v18);
    byte_42E71A7 = 1;
  }
  v19 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v19 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    p_isModfiy = &UserMissionNewManager_TypeInfo->static_fields->isModfiy;
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
  v25 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v25);
  v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v28, v27, 0LL);
  v30 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v30 = UserMissionNewManager_TypeInfo;
  }
  v31 = v30->static_fields;
  missionNewInfoList = v31->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B5D69C(v30, v29);
  if ( !v28 )
    sub_B5D69C(v30, v29);
  size = missionNewInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v28->klass->vtable._22_Write.method)(
    v28,
    v31->SAVE_DATA_VERSION,
    v28->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v28->klass->vtable._8_Write.method)(
    v28,
    UserMissionNewManager_TypeInfo->static_fields->isContinueDevice,
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
      v37 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v37 = UserMissionNewManager_TypeInfo;
      }
      v38 = v37->static_fields->missionNewInfoList;
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v28->klass->vtable._8_Write.method)(
        v28,
        v39->fields.isNew,
        v28->klass->vtable._9_Write.methodPtr);
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


System_String_o *__fastcall UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *DatFileSavePath; // x19
  UserMissionNewManager_c *v8; // x8

  if ( (byte_42E71A1 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v4, v5, v6);
    byte_42E71A1 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v8 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v8 = UserMissionNewManager_TypeInfo;
  }
  return System_String__Concat_44577788(DatFileSavePath, v8->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
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

  if ( (byte_42E71A0 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v8, v9, v10);
    byte_42E71A0 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28254688 = DatFileName__getFileName_28254688(25, eventId, 0, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName_28254688, 0LL);
}


void __fastcall UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
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
  System_Int32_array **v18; // x20
  UserMissionNewManager_c *v19; // x8
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_42E719F & 1) == 0 )
  {
    sub_B5D5C4(&DatFileName_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserMissionNewManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v8, v9, v10);
    byte_42E719F = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28254688 = DatFileName__getFileName_28254688(25, eventId, 0, 0LL);
  v18 = (System_Int32_array **)System_String__Concat_44577788(
                                 (System_String_o *)StringLiteral_885/*"/"*/,
                                 FileName_28254688,
                                 0LL);
  v19 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v19 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  static_fields->saveName = (struct System_String_o *)v18;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->saveName, v18, v12, v13, v14, v15, v16, v17);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void __fastcall UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}