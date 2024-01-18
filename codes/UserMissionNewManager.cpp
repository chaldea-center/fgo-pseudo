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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct UserMissionNewManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  struct UserMissionNewManager_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4187048 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo, v8);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6616/*"Fgo_20160323_1"*/, v10);
    byte_4187048 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionNewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6616/*"Fgo_20160323_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6616/*"Fgo_20160323_1"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserMissionNewManager_TypeInfo;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v13->static_fields->isNew = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v15 = UserMissionNewManager_TypeInfo->static_fields;
  v15->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->missionNewInfoList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v23 = UserMissionNewManager_TypeInfo->static_fields;
  v23->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v23->oldNewInfoList,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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

  if ( (byte_4187043 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v2);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v3);
    byte_4187043 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
      v4 = UserMissionNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
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

  if ( (byte_4187041 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v1);
    byte_4187041 = 1;
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

  if ( (byte_4187040 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v1);
    byte_4187040 = 1;
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

  if ( (byte_4187042 & 1) == 0 )
  {
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v1);
    byte_4187042 = 1;
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
  System_IO_BinaryReader_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x20
  UserMissionNewManager_c *v14; // x0
  __int64 v15; // x3
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
  UserMissionNewManager_UserMissionNewInfo_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  UserMissionNewManager_c *v32; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionNewInfoList; // x0
  UserMissionNewManager_c *v34; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  System_Int32_array **v36; // x1
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0
  UserMissionNewManager_c *v42; // x0
  int v43; // [xsp+8h] [xbp-68h]

  if ( (byte_4187044 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v3);
    sub_B2C35C(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v4);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v5);
    byte_4187044 = 1;
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
    v10 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v10, v9, 0LL);
    if ( !v10 )
      sub_B2C434(v11, v12);
    v13 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._22_ReadString.method)(
                               v10,
                               v10->klass->vtable._23_ReadChars.methodPtr);
    v14 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v14 = UserMissionNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v14->static_fields->SAVE_DATA_VERSION, v13, 0LL) )
    {
      v43 = 209;
    }
    else
    {
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._9_ReadBoolean.method)(
              v10,
              v10->klass->vtable._10_ReadByte.methodPtr);
      v17 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v17 = UserMissionNewManager_TypeInfo;
      }
      v17->static_fields->isContinueDevice = v16 & 1;
      v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
              v10,
              v10->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v24 >= 1 )
      {
        for ( i = 0; i < v24; ++i )
        {
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._15_ReadInt32.method)(
                  v10,
                  v10->klass->vtable._16_ReadUInt32.methodPtr);
          v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v10->klass->vtable._9_ReadBoolean.method)(
                  v10,
                  v10->klass->vtable._10_ReadByte.methodPtr);
          v29 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B2C42C(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
          UserMissionNewManager_UserMissionNewInfo___ctor(v29, 0LL);
          if ( !v29 )
            sub_B2C434(v30, v31);
          v29->fields.eventId = v26;
          v29->fields.missionId = v27;
          v29->fields.isNew = v28 & 1;
          v32 = UserMissionNewManager_TypeInfo;
          if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
            v32 = UserMissionNewManager_TypeInfo;
          }
          missionNewInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32->static_fields->missionNewInfoList;
          if ( !missionNewInfoList )
            sub_B2C434(0LL, v31);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionNewInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        }
      }
      v34 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v34 = UserMissionNewManager_TypeInfo;
      }
      static_fields = v34->static_fields;
      v36 = (System_Int32_array **)static_fields->missionNewInfoList;
      static_fields->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v36;
      sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->oldNewInfoList, v36, v18, v19, v20, v21, v22, v23);
      v43 = 194;
    }
    klass = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_35:
      v40 = sub_AC5258(v10, System_IDisposable_TypeInfo, 0LL, v15);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v40)(v10, *(_QWORD *)(v40 + 8));
    return v43 == 194;
  }
  else
  {
    v42 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    }
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v42);
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
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187047 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      v1);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v2);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__, v4);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v5);
    byte_4187047 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v6 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v6 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B2C434(0LL, v1);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    missionNewInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v11,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v9 )
      break;
    if ( !v11.fields.current )
      sub_B2C434(v9, v10);
    if ( LOBYTE(v11.fields.current[1].monitor) )
    {
      LOBYTE(v11.fields.current[1].monitor) = 0;
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
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool __fastcall UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UserMissionNewManager_c *missionNewInfoList; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *oldNewInfoList; // x9
  _BOOL8 v12; // x0
  __int64 v13; // x1
  char v14; // w21
  char v15; // w20
  UserMissionNewManager_UserMissionNewInfo_o *v16; // x21
  int32_t currentEventId; // w8
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4187046 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v7);
    sub_B2C35C(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v8);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v9);
    byte_4187046 = 1;
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
    v16 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B2C42C(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
        return v15;
      }
    }
LABEL_28:
    sub_B2C434(missionNewInfoList, method);
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
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v12 )
      break;
    if ( !v19.fields.current )
      sub_B2C434(v12, v13);
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
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
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
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  UserMissionNewManager_c *v18; // x0
  struct UserMissionNewManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w20
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x22
  UserMissionNewManager_c *v25; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *v26; // x23
  UserMissionNewManager_UserMissionNewInfo_o *v27; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0

  if ( (byte_4187045 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v6);
    byte_4187045 = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
  v18 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v18 = UserMissionNewManager_TypeInfo;
  }
  v19 = v18->static_fields;
  missionNewInfoList = v19->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B2C434(v18, v17);
  if ( !v16 )
    sub_B2C434(v18, v17);
  size = missionNewInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v19->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    UserMissionNewManager_TypeInfo->static_fields->isContinueDevice,
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
      v25 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v25 = UserMissionNewManager_TypeInfo;
      }
      v26 = v25->static_fields->missionNewInfoList;
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
        v16,
        v27->fields.isNew,
        v16->klass->vtable._9_Write.methodPtr);
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


System_String_o *__fastcall UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  UserMissionNewManager_c *v4; // x8

  if ( (byte_418703F & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v2);
    byte_418703F = 1;
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
  return System_String__Concat_44305532(DatFileSavePath, v4->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_27462416; // x2

  if ( (byte_418703E & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&DatFileName_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v4);
    byte_418703E = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27462416 = DatFileName__getFileName_27462416(25, eventId, 0, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName_27462416, 0LL);
}


void __fastcall UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
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
  System_Int32_array **v12; // x20
  UserMissionNewManager_c *v13; // x8
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_418703D & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, method);
    sub_B2C35C(&UserMissionNewManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v4);
    byte_418703D = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27462416 = DatFileName__getFileName_27462416(25, eventId, 0, 0LL);
  v12 = (System_Int32_array **)System_String__Concat_44305532(
                                 (System_String_o *)StringLiteral_872/*"/"*/,
                                 FileName_27462416,
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
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->saveName, v12, v6, v7, v8, v9, v10, v11);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void __fastcall UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}