void __fastcall UserCommandCodeNewManager___cctor(const MethodInfo *method)
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
  UserCommandCodeNewManager_c *v13; // x8
  System_Collections_Generic_List_long__o *v14; // x19
  struct UserCommandCodeNewManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4188ADF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6618/*"Fgo_20180629_1"*/, v10);
    byte_4188ADF = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserCommandCodeNewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6618/*"Fgo_20180629_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6618/*"Fgo_20180629_1"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserCommandCodeNewManager_TypeInfo;
  UserCommandCodeNewManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v15 = UserCommandCodeNewManager_TypeInfo->static_fields;
  v15->oldList = v14;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->oldList, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
}


void __fastcall UserCommandCodeNewManager___ctor(UserCommandCodeNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserCommandCodeNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserCommandCodeNewManager_c *v4; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8

  if ( (byte_4188AD9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v2);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v3);
    byte_4188AD9 = 1;
  }
  v4 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v4 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v4->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (oldList = UserCommandCodeNewManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_long___Clear(
        oldList,
        (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
      v4 = UserCommandCodeNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserCommandCodeNewManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall UserCommandCodeNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  UserCommandCodeNewManager_c *v4; // x8
  const MethodInfo *v5; // x0

  if ( (byte_4188AD7 & 1) == 0 )
  {
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v1);
    byte_4188AD7 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  UserCommandCodeNewManager__DeleteSaveData((const MethodInfo *)v2);
  UserCommandCodeNewManager__ClearSaveDataList(v3);
  v4 = UserCommandCodeNewManager_TypeInfo;
  UserCommandCodeNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v4->static_fields->isModfiy = 1;
  UserCommandCodeNewManager__WriteData(v5);
}


void __fastcall UserCommandCodeNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4188AD6 & 1) == 0 )
  {
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v1);
    byte_4188AD6 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserCommandCodeNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0

  if ( (byte_4188AD8 & 1) == 0 )
  {
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v1);
    byte_4188AD8 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  UserCommandCodeNewManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserCommandCodeNewManager__IsNew(int64_t userCmdCodeId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserCommandCodeNewManager_c *v5; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v9; // x23

  if ( (byte_4188ADB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v4);
    byte_4188ADB = 1;
  }
  v5 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v5 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v5->static_fields->oldList;
  if ( !oldList )
LABEL_20:
    sub_B2C434(v5, method);
  size = oldList->fields._size;
  if ( size < 1 )
    return 1;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = UserCommandCodeNewManager_TypeInfo;
    }
    v9 = v5->static_fields->oldList;
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( v9->fields._items->m_Items[i] == userCmdCodeId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v5 = UserCommandCodeNewManager_TypeInfo;
  }
  return 0;
}


void __fastcall UserCommandCodeNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserCommandCodeNewManager_c *v4; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_4188ADA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v3);
    byte_4188ADA = 1;
  }
  v4 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v4 = UserCommandCodeNewManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v6);
    }
    UserCommandCodeMaster__continueDeviceUserCommandCode((UserCommandCodeMaster_o *)Instance, v6);
    v7 = (const MethodInfo *)UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      v7 = (const MethodInfo *)UserCommandCodeNewManager_TypeInfo;
    }
    BYTE1(v7[2].klass->_1.gc_desc) = 0;
    LOBYTE(v7[2].klass->_1.gc_desc) = 1;
    UserCommandCodeNewManager__WriteData(v7);
  }
}


bool __fastcall UserCommandCodeNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserCommandCodeNewManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  UserCommandCodeNewManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  UserCommandCodeNewManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  UserCommandCodeNewManager_c *v17; // x0
  __int64 v18; // x3
  char v19; // w20
  UserCommandCodeNewManager_c *v20; // x0
  int v21; // w20
  int i; // w23
  __int64 v23; // x1
  int64_t v24; // x21
  UserCommandCodeNewManager_c *v25; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  UserCommandCodeNewManager_c *v31; // x0
  int v32; // [xsp+8h] [xbp-48h]

  if ( (byte_4188ADD & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v5);
    byte_4188ADD = 1;
  }
  v6 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v6 = UserCommandCodeNewManager_TypeInfo;
  }
  v6->static_fields->isModfiy = 0;
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v9 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v9);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v11 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    UserCommandCodeNewManager__ClearSaveDataList((const MethodInfo *)v11);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v13 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v13, v12, 0LL);
    if ( !v13 )
      sub_B2C434(v14, v15);
    v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                               v13,
                               v13->klass->vtable._23_ReadChars.methodPtr);
    v17 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      v17 = UserCommandCodeNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
    {
      v32 = 152;
    }
    else
    {
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._9_ReadBoolean.method)(
              v13,
              v13->klass->vtable._10_ReadByte.methodPtr);
      v20 = UserCommandCodeNewManager_TypeInfo;
      if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
        v20 = UserCommandCodeNewManager_TypeInfo;
      }
      v20->static_fields->isContinueDevice = v19 & 1;
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
              v13,
              v13->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v21 >= 1 )
      {
        for ( i = 0; i < v21; ++i )
        {
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._17_ReadInt64.method)(
                  v13,
                  v13->klass->vtable._18_ReadUInt64.methodPtr);
          v25 = UserCommandCodeNewManager_TypeInfo;
          if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
            v25 = UserCommandCodeNewManager_TypeInfo;
          }
          oldList = v25->static_fields->oldList;
          if ( !oldList )
            sub_B2C434(0LL, v23);
          System_Collections_Generic_List_long___Add(
            oldList,
            v24,
            (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      v32 = 137;
    }
    klass = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_39;
      }
      v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_39:
      v30 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v18);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v30)(v13, *(_QWORD *)(v30 + 8));
    return v32 == 137;
  }
  else
  {
    v31 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    UserCommandCodeNewManager__ClearSaveDataList((const MethodInfo *)v31);
    return 0;
  }
}


void __fastcall UserCommandCodeNewManager__SetOld(int64_t userCmdCodeId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserCommandCodeNewManager_c *v6; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v9; // w8
  __int64 v10; // x22
  struct System_Collections_Generic_List_long__o *v11; // x23

  if ( (byte_4188ADC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v5);
    byte_4188ADC = 1;
  }
  v6 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v6 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v6->static_fields->oldList;
  if ( !oldList )
    goto LABEL_23;
  size = oldList->fields._size;
  v9 = (BYTE3(v6->vtable._0_Equals.methodPtr) >> 2) & 1;
  if ( size >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( (v9 & 1) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = UserCommandCodeNewManager_TypeInfo;
      }
      v11 = v6->static_fields->oldList;
      if ( !v11 )
        break;
      if ( v11->fields._size <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( v11->fields._items->m_Items[v10] == userCmdCodeId )
        return;
      v6 = UserCommandCodeNewManager_TypeInfo;
      ++v10;
      v9 = (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v10 >= size )
        goto LABEL_17;
    }
LABEL_23:
    sub_B2C434(v6, method);
  }
LABEL_17:
  if ( v9 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = UserCommandCodeNewManager_TypeInfo;
    }
  }
  v6 = (UserCommandCodeNewManager_c *)v6->static_fields->oldList;
  if ( !v6 )
    goto LABEL_23;
  System_Collections_Generic_List_long___Add(
    (System_Collections_Generic_List_long__o *)v6,
    userCmdCodeId,
    (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
  UserCommandCodeNewManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall UserCommandCodeNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserCommandCodeNewManager_c *v7; // x0
  struct UserCommandCodeNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  UserCommandCodeNewManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  UserCommandCodeNewManager_c *v18; // x0
  struct UserCommandCodeNewManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  signed __int64 size; // x20
  __int64 v22; // x1
  __int64 v23; // x3
  unsigned __int64 i; // x22
  UserCommandCodeNewManager_c *v25; // x0
  struct System_Collections_Generic_List_long__o *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0

  if ( (byte_4188ADE & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v6);
    byte_4188ADE = 1;
  }
  v7 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v7 = UserCommandCodeNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &UserCommandCodeNewManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( !v11->static_fields->UseMock )
  {
    v13 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v13);
    v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
    v18 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      v18 = UserCommandCodeNewManager_TypeInfo;
    }
    v19 = v18->static_fields;
    oldList = v19->oldList;
    if ( !oldList )
      sub_B2C434(v18, v17);
    if ( !v16 )
      sub_B2C434(v18, v17);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
      v16,
      v19->SAVE_DATA_VERSION,
      v16->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
      v16,
      UserCommandCodeNewManager_TypeInfo->static_fields->isContinueDevice,
      v16->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
      v16,
      (unsigned int)size,
      v16->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v25 = UserCommandCodeNewManager_TypeInfo;
        if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
          v25 = UserCommandCodeNewManager_TypeInfo;
        }
        v26 = v25->static_fields->oldList;
        if ( !v26 )
          sub_B2C434(v25, v22);
        if ( i >= (unsigned int)v26->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v16->klass->vtable._19_Write.method)(
          v16,
          v26->fields._items->m_Items[i],
          v16->klass->vtable._20_Write.methodPtr);
      }
    }
    klass = v16->klass;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v30 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v23);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v16, *(_QWORD *)(v30 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserCommandCodeNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4188AD5 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4188AD5 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(9, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}