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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct UserMissionNewManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  struct UserMissionNewManager_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_40F9752 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo, v8);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6592/*"Fgo_20160323_1"*/, v10);
    byte_40F9752 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserMissionNewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6592/*"Fgo_20160323_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6592/*"Fgo_20160323_1"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserMissionNewManager_TypeInfo;
  UserMissionNewManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v13->static_fields->isNew = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v19 = UserMissionNewManager_TypeInfo->static_fields;
  v19->missionNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v19->missionNewInfoList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__TypeInfo,
                                                                                                  v26,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo___ctor__);
  v31 = UserMissionNewManager_TypeInfo->static_fields;
  v31->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v31->oldNewInfoList,
    (System_Int32_array **)v30,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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

  if ( (byte_40F974D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v2);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v3);
    byte_40F974D = 1;
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
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Clear__);
      v4 = UserMissionNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
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

  if ( (byte_40F974B & 1) == 0 )
  {
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v1);
    byte_40F974B = 1;
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

  if ( (byte_40F974A & 1) == 0 )
  {
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v1);
    byte_40F974A = 1;
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

  if ( (byte_40F974C & 1) == 0 )
  {
    sub_B16FFC(&UserMissionProgressManager_TypeInfo, v1);
    byte_40F974C = 1;
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_IO_BinaryReader_o *v14; // x19
  System_String_o *v15; // x20
  UserMissionNewManager_c *v16; // x0
  char v17; // w20
  UserMissionNewManager_c *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int v25; // w20
  int i; // w26
  int32_t v27; // w22
  int32_t v28; // w23
  char v29; // w24
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  UserMissionNewManager_UserMissionNewInfo_o *v34; // x21
  UserMissionNewManager_c *v35; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionNewInfoList; // x0
  UserMissionNewManager_c *v37; // x0
  struct UserMissionNewManager_StaticFields *static_fields; // x8
  System_Int32_array **v39; // x1
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0
  UserMissionNewManager_c *v45; // x0
  int v46; // [xsp+8h] [xbp-68h]

  if ( (byte_40F974E & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v3);
    sub_B16FFC(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v4);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v5);
    byte_40F974E = 1;
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
    v14 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v10, v11, v12, v13);
    System_IO_BinaryReader___ctor(v14, v9, 0LL);
    if ( !v14 )
      sub_B170D4();
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v16 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v16 = UserMissionNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0LL) )
    {
      v46 = 209;
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
              v14,
              v14->klass->vtable._10_ReadByte.methodPtr);
      v18 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v18 = UserMissionNewManager_TypeInfo;
      }
      v18->static_fields->isContinueDevice = v17 & 1;
      v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
              v14,
              v14->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v25 >= 1 )
      {
        for ( i = 0; i < v25; ++i )
        {
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
                  v14,
                  v14->klass->vtable._10_ReadByte.methodPtr);
          v34 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B170CC(
                                                                UserMissionNewManager_UserMissionNewInfo_TypeInfo,
                                                                v30,
                                                                v31,
                                                                v32,
                                                                v33);
          UserMissionNewManager_UserMissionNewInfo___ctor(v34, 0LL);
          if ( !v34 )
            sub_B170D4();
          v34->fields.eventId = v27;
          v34->fields.missionId = v28;
          v34->fields.isNew = v29 & 1;
          v35 = UserMissionNewManager_TypeInfo;
          if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
            v35 = UserMissionNewManager_TypeInfo;
          }
          missionNewInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v35->static_fields->missionNewInfoList;
          if ( !missionNewInfoList )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            missionNewInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v34,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        }
      }
      v37 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v37 = UserMissionNewManager_TypeInfo;
      }
      static_fields = v37->static_fields;
      v39 = (System_Int32_array **)static_fields->missionNewInfoList;
      static_fields->oldNewInfoList = (struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *)v39;
      sub_B16F98((BattleServantConfConponent_o *)&static_fields->oldNewInfoList, v39, v19, v20, v21, v22, v23, v24);
      v46 = 194;
    }
    klass = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v41 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v41;
        p_offset += 4;
        if ( v41 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_35;
      }
      v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_35:
      v43 = sub_AAFEF8(v14, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v14, *(_QWORD *)(v43 + 8));
    return v46 == 194;
  }
  else
  {
    v45 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    }
    UserMissionNewManager__ClearSaveDataList((const MethodInfo *)v45);
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
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9751 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      v1);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v2);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__, v4);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v5);
    byte_40F9751 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  v6 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v6 = UserMissionNewManager_TypeInfo;
  }
  missionNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v6->static_fields->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    missionNewInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    if ( LOBYTE(v9.fields.current[1].monitor) )
    {
      LOBYTE(v9.fields.current[1].monitor) = 0;
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
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
}


bool __fastcall UserMissionNewManager__SetIsNewMissionInfo(int32_t targetMissionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserMissionNewManager_c *v13; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *oldNewInfoList; // x9
  char v15; // w21
  char v16; // w20
  UserMissionNewManager_UserMissionNewInfo_o *v17; // x21
  UserMissionNewManager_c *v18; // x0
  int32_t currentEventId; // w8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *missionNewInfoList; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40F9750 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v10);
    sub_B16FFC(&UserMissionNewManager_UserMissionNewInfo_TypeInfo, v11);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v12);
    byte_40F9750 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v13 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v13 = UserMissionNewManager_TypeInfo;
  }
  oldNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v13->static_fields->oldNewInfoList;
  if ( !oldNewInfoList )
    goto LABEL_28;
  if ( oldNewInfoList->fields._size < 1 )
  {
    v16 = 1;
LABEL_21:
    v17 = (UserMissionNewManager_UserMissionNewInfo_o *)sub_B170CC(
                                                          UserMissionNewManager_UserMissionNewInfo_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3,
                                                          v4);
    UserMissionNewManager_UserMissionNewInfo___ctor(v17, 0LL);
    v18 = UserMissionNewManager_TypeInfo;
    if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
      v18 = UserMissionNewManager_TypeInfo;
    }
    if ( v17 )
    {
      currentEventId = v18->static_fields->currentEventId;
      v17->fields.isNew = 1;
      v17->fields.eventId = currentEventId;
      v17->fields.missionId = targetMissionId;
      missionNewInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18->static_fields->missionNewInfoList;
      if ( missionNewInfoList )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          missionNewInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__Add__);
        UserMissionNewManager_TypeInfo->static_fields->isModfiy = 1;
        return v16;
      }
    }
LABEL_28:
    sub_B170D4();
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    oldNewInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UserMissionNewManager_TypeInfo->static_fields->oldNewInfoList;
    if ( !oldNewInfoList )
      goto LABEL_28;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    oldNewInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__MoveNext__) )
  {
    if ( !v22.fields.current )
      sub_B170D4();
    if ( HIDWORD(v22.fields.current[1].klass) == targetMissionId )
    {
      v15 = 0;
      v16 = LOBYTE(v22.fields.current[1].monitor) != 0;
      goto LABEL_17;
    }
  }
  v15 = 1;
  v16 = 1;
LABEL_17:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UserMissionNewManager_UserMissionNewInfo__Dispose__);
  if ( (v15 & 1) != 0 )
    goto LABEL_21;
  return v16;
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x19
  UserMissionNewManager_c *v21; // x0
  struct UserMissionNewManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *missionNewInfoList; // x9
  int size; // w20
  __int64 v25; // x22
  UserMissionNewManager_c *v26; // x0
  struct System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__o *v27; // x23
  UserMissionNewManager_UserMissionNewInfo_o *v28; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0

  if ( (byte_40F974F & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserMissionNewManager_UserMissionNewInfo__get_Item__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v6);
    byte_40F974F = 1;
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
  v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
  System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
  v21 = UserMissionNewManager_TypeInfo;
  if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
    v21 = UserMissionNewManager_TypeInfo;
  }
  v22 = v21->static_fields;
  missionNewInfoList = v22->missionNewInfoList;
  if ( !missionNewInfoList )
    sub_B170D4();
  if ( !v20 )
    sub_B170D4();
  size = missionNewInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
    v20,
    v22->SAVE_DATA_VERSION,
    v20->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
    v20,
    UserMissionNewManager_TypeInfo->static_fields->isContinueDevice,
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
      v26 = UserMissionNewManager_TypeInfo;
      if ( (BYTE3(UserMissionNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserMissionNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserMissionNewManager_TypeInfo);
        v26 = UserMissionNewManager_TypeInfo;
      }
      v27 = v26->static_fields->missionNewInfoList;
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
        v20,
        v28->fields.isNew,
        v20->klass->vtable._9_Write.methodPtr);
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


System_String_o *__fastcall UserMissionNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  UserMissionNewManager_c *v4; // x8

  if ( (byte_40F9749 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v2);
    byte_40F9749 = 1;
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
  return System_String__Concat_43743732(DatFileSavePath, v4->static_fields->saveName, 0LL);
}


System_String_o *__fastcall UserMissionNewManager__getSaveFileNameByEvent(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *DatFileSavePath; // x20
  System_String_o *FileName_27471060; // x2

  if ( (byte_40F9748 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, method);
    sub_B16FFC(&DatFileName_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v4);
    byte_40F9748 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27471060 = DatFileName__getFileName_27471060(25, eventId, 0, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName_27471060, 0LL);
}


void __fastcall UserMissionNewManager__setSaveFileName(int32_t eventId, const MethodInfo *method)
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
  System_Int32_array **v12; // x20
  UserMissionNewManager_c *v13; // x8
  struct UserMissionNewManager_StaticFields *static_fields; // x0

  if ( (byte_40F9747 & 1) == 0 )
  {
    sub_B16FFC(&DatFileName_TypeInfo, method);
    sub_B16FFC(&UserMissionNewManager_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v4);
    byte_40F9747 = 1;
  }
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName_27471060 = DatFileName__getFileName_27471060(25, eventId, 0, 0LL);
  v12 = (System_Int32_array **)System_String__Concat_43743732(
                                 (System_String_o *)StringLiteral_871/*"/"*/,
                                 FileName_27471060,
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
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->saveName, v12, v6, v7, v8, v9, v10, v11);
  UserMissionNewManager_TypeInfo->static_fields->currentEventId = eventId;
}


void __fastcall UserMissionNewManager_UserMissionNewInfo___ctor(
        UserMissionNewManager_UserMissionNewInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}