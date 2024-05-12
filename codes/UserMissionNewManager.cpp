void __fastcall UserMissionNewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  UserMissionNewManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct UserMissionNewManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct UserMissionNewManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4389D9A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    sub_B775C4(&StringLiteral_6764/*"Fgo_20160323_1"*/);
    byte_4389D9A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionNewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6764/*"Fgo_20160323_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6764/*"Fgo_20160323_1"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserMissionNewManager_TypeInfo;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v9->static_fields->isNew = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v11 = UserMissionNewManager_TypeInfo->static_fields;
  v11->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&v11->missionNewInfoList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v19 = UserMissionNewManager_TypeInfo->static_fields;
  v19->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&v19->oldNewInfoList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall UserMissionNewManager___ctor(UserMissionNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *missionNewInfoList; // x8

  if ( (byte_4389D95 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    byte_4389D95 = 1;
  }
  v2 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v2 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v2->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    goto LABEL_16;
  if ( missionNewInfoList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (missionNewInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserMissionNewManager_TypeInfo->static_fields->missionNewInfoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        missionNewInfoList,
        (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
      v2 = UserMissionNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7769C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserMissionNewManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall UserMissionNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserMissionNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  UserMissionNewManager_c *v3; // x8
  const MethodInfo *v4; // x0

  if ( (byte_4389D93 & 1) == 0 )
  {
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    byte_4389D93 = 1;
  }
  v1 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  UserMissionNewManager__DeleteSaveData((const MethodInfo *)v1);
  UserMissionNewManager__ClearSaveDataList(v2);
  v3 = UserMissionNewManager_TypeInfo;
  UserMissionNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v3->static_fields->isModfiy = 1;
  UserMissionNewManager__WriteData(v4);
}


void __fastcall UserMissionNewManager__DeleteSaveData(const MethodInfo *method)
{
  UserMissionNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4389D92 & 1) == 0 )
  {
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    byte_4389D92 = 1;
  }
  v1 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserMissionNewManager__Initialize(const MethodInfo *method)
{
  UserMissionProgressManager_c *v1; // x0

  if ( (byte_4389D94 & 1) == 0 )
  {
    sub_B775C4(&UserMissionProgressManager_TypeInfo);
    byte_4389D94 = 1;
  }
  v1 = UserMissionProgressManager_TypeInfo;
  if ( (BYTE3(UserMissionProgressManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionProgressManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionProgressManager_TypeInfo);
  }
  UserMissionProgressManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserMissionNewManager__ReadData(const MethodInfo *method)
{
  const MethodInfo *v1; // x0
  System_String_o *SaveFileName; // x19
  UserMissionNewManager_c *v3; // x0
  System_IO_Stream_o *v4; // x20
  System_IO_BinaryReader_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  UserMissionNewManager_c *v9; // x0
  char v10; // w20
  UserMissionNewManager_c *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w20
  int i; // w26
  int32_t v20; // w22
  int32_t v21; // w23
  char v22; // w24
  UserMissionNewManager_UserMissionNewInfo_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  UserMissionNewManager_c *v26; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionNewInfoList; // x0
  UserMissionNewManager_c *v28; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  System_Int32_array **v30; // x1
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0
  UserMissionNewManager_c *v36; // x0
  int v37; // [xsp+8h] [xbp-68h]

  if ( (byte_4389D96 & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryReader_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
    sub_B775C4(&UserMissionNewManager_UserMissionNewInfo_TypeInfo);
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    byte_4389D96 = 1;
  }
  v1 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v1 = (const MethodInfo *)UserMissionNewManager_TypeInfo;
  }
  LOBYTE(v1[2].klass->_1.gc_desc) = 0;
  SaveFileName = UserMissionNewManager__getSaveFileName(v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v3 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    }
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v3);
    v4 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v5 = (System_IO_BinaryReader_o *)sub_B77694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v5, v4, 0LL);
    if ( !v5 )
      sub_B7769C(v6, v7);
    v8 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._22_ReadString.method)(
                              v5,
                              v5->klass->vtable._23_ReadChars.methodPtr);
    v9 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v9 = UserMissionNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v9->static_fields->SAVE_DATA_VERSION, v8, 0LL) )
    {
      v37 = 209;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._9_ReadBoolean.method)(
              v5,
              v5->klass->vtable._10_ReadByte.methodPtr);
      v11 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v11 = UserMissionNewManager_TypeInfo;
      }
      v11->static_fields->isContinueDevice = v10 & 1;
      v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
              v5,
              v5->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v18 >= 1 )
      {
        for ( i = 0; i < v18; ++i )
        {
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._15_ReadInt32.method)(
                  v5,
                  v5->klass->vtable._16_ReadUInt32.methodPtr);
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v5->klass->vtable._9_ReadBoolean.method)(
                  v5,
                  v5->klass->vtable._10_ReadByte.methodPtr);
          v23 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B77694(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
          UserMissionNewManager_UserMissionNewInfo___ctor(v23, 0LL);
          if ( !v23 )
            sub_B7769C(v24, v25);
          v23->fields.eventId = v20;
          v23->fields.missionId = v21;
          v23->fields.isNew = v22 & 1;
          v26 = UserMissionNewManager_TypeInfo;
          if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
            v26 = UserMissionNewManager_TypeInfo;
          }
          missionNewInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v26->static_fields->missionNewInfoList;
          if ( !missionNewInfoList )
            sub_B7769C(0LL, v25);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionNewInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        }
      }
      v28 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v28 = UserMissionNewManager_TypeInfo;
      }
      static_fields = v28->static_fields;
      v30 = (System_Int32_array **)static_fields->missionNewInfoList;
      static_fields->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v30;
      sub_B77560((BattleServantConfConponent_o *)&static_fields->oldNewInfoList, v30, v12, v13, v14, v15, v16, v17);
      v37 = 194;
    }
    klass = v5->klass;
    if ( *(_WORD *)&v5->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&v5->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_35:
      v34 = sub_B0F4C0(v5, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v5, *(_QWORD *)(v34 + 8));
    return v37 == 194;
  }
  else
  {
    v36 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    }
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v36);
    return 0;
  }
}


void __fastcall UserMissionNewManager__SetClearNewFlg(const MethodInfo *method)
{
  __int64 v1; // x1
  UserMissionNewManager_c *v2; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *missionNewInfoList; // x0
  UserMissionNewManager_c *v4; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4389D99 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    byte_4389D99 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  v2 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v2 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v2->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B7769C(0LL, v1);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    missionNewInfoList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v7,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v5 )
      break;
    if ( !v7.fields.current )
      sub_B7769C(v5, v6);
    if ( LOBYTE(v7.fields.current[1].monitor) )
    {
      LOBYTE(v7.fields.current[1].monitor) = 0;
      v4 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v4 = UserMissionNewManager_TypeInfo;
      }
      v4->static_fields->isModfiy = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v7,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool __fastcall UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
{
  UserMissionNewManager_c *missionNewInfoList; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *oldNewInfoList; // x9
  _BOOL8 v5; // x0
  __int64 v6; // x1
  char v7; // w21
  char v8; // w20
  UserMissionNewManager_UserMissionNewInfo_o *v9; // x21
  int32_t currentEventId; // w8
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4389D98 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_B775C4(&UserMissionNewManager_UserMissionNewInfo_TypeInfo);
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    byte_4389D98 = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
    v8 = 1;
LABEL_21:
    v9 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B77694(UserMissionNewManager_UserMissionNewInfo_TypeInfo);
    UserMissionNewManager_UserMissionNewInfo___ctor(v9, 0LL);
    missionNewInfoList = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      missionNewInfoList = UserMissionNewManager_TypeInfo;
    }
    if ( v9 )
    {
      currentEventId = missionNewInfoList->static_fields->currentEventId;
      v9->fields.isNew = 1;
      v9->fields.eventId = currentEventId;
      v9->fields.missionId = targetMissionId;
      missionNewInfoList = (UserMissionNewManager_c *)missionNewInfoList->static_fields->missionNewInfoList;
      if ( missionNewInfoList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)missionNewInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
        return v8;
      }
    }
LABEL_28:
    sub_B7769C(missionNewInfoList, method);
  }
  if ( (BYTE3(missionNewInfoList->vtable._0_Equals.methodPtr) & 4) != 0 && !missionNewInfoList->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(missionNewInfoList);
    oldNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserMissionNewManager_TypeInfo->static_fields->oldNewInfoList;
    if ( !oldNewInfoList )
      goto LABEL_28;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    oldNewInfoList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__);
    if ( !v5 )
      break;
    if ( !v12.fields.current )
      sub_B7769C(v5, v6);
    if ( HIDWORD(v12.fields.current[1].klass) == targetMissionId )
    {
      v7 = 0;
      v8 = LOBYTE(v12.fields.current[1].monitor) != 0;
      goto LABEL_17;
    }
  }
  v7 = 1;
  v8 = 1;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
  if ( (v7 & 1) != 0 )
    goto LABEL_21;
  return v8;
}


bool __fastcall UserMissionNewManager__WriteData(const MethodInfo *method)
{
  UserMissionNewManager_c *v1; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  UserMissionNewManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  UserMissionNewManager_c *v12; // x0
  struct UserMissionNewManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w20
  __int64 v16; // x1
  __int64 v17; // x22
  UserMissionNewManager_c *v18; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *v19; // x23
  UserMissionNewManager_UserMissionNewInfo_o *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0

  if ( (byte_4389D97 & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryWriter_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    byte_4389D97 = 1;
  }
  v1 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v1 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &UserMissionNewManager_TypeInfo->static_fields->isModfiy;
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
  v7 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
  }
  SaveFileName = UserMissionNewManager__getSaveFileName((const MethodInfo *)v7);
  v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v10 = (System_IO_BinaryWriter_o *)sub_B77694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40221404(v10, v9, 0LL);
  v12 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v12 = UserMissionNewManager_TypeInfo;
  }
  v13 = v12->static_fields;
  missionNewInfoList = v13->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B7769C(v12, v11);
  if ( !v10 )
    sub_B7769C(v12, v11);
  size = missionNewInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
    v10,
    v13->SAVE_DATA_VERSION,
    v10->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
    v10,
    UserMissionNewManager_TypeInfo->static_fields->isContinueDevice,
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
      v18 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v18 = UserMissionNewManager_TypeInfo;
      }
      v19 = v18->static_fields->missionNewInfoList;
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
        v10,
        v20->fields.isNew,
        v10->klass->vtable._9_Write.methodPtr);
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


System_String_o *__fastcall UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  UserMissionNewManager_c *v2; // x8

  if ( (byte_4389D91 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    byte_4389D91 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  v2 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v2 = UserMissionNewManager_TypeInfo;
  }
  return System_String__Concat_44901936(DatFileSavePath, v2->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_28016868; // x2

  if ( (byte_4389D90 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_4389D90 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28016868 = DatFileName__getFileName_28016868(25, eventId, 0, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName_28016868, 0LL);
}


void __fastcall UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
{
  System_String_o *FileName_28016868; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Int32_array **v10; // x20
  UserMissionNewManager_c *v11; // x8
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_4389D8F & 1) == 0 )
  {
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&UserMissionNewManager_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_4389D8F = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_28016868 = DatFileName__getFileName_28016868(25, eventId, 0, 0LL);
  v10 = (System_Int32_array **)System_String__Concat_44901936(
                                 (System_String_o *)StringLiteral_892/*"/"*/,
                                 FileName_28016868,
                                 0LL);
  v11 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v11 = UserMissionNewManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->saveName = (struct System_String_o *)v10;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->saveName, v10, v4, v5, v6, v7, v8, v9);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void __fastcall UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}