void __fastcall OtherUserNewManager___cctor(const MethodInfo *method)
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
  OtherUserNewManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_long__o *v18; // x19
  struct OtherUserNewManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F7FF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6590, v10);
    byte_40F7FF0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)OtherUserNewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6590;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6590;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = OtherUserNewManager_TypeInfo;
  OtherUserNewManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v14,
                                                     v15,
                                                     v16,
                                                     v17);
  System_Collections_Generic_List_long____ctor(
    v18,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v19 = OtherUserNewManager_TypeInfo->static_fields;
  v19->oldList = v18;
  sub_B16F98((BattleServantConfConponent_o *)&v19->oldList, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
}


void __fastcall OtherUserNewManager___ctor(OtherUserNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OtherUserNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  OtherUserNewManager_c *v4; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8

  if ( (byte_40F7FE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v2);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v3);
    byte_40F7FE9 = 1;
  }
  v4 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v4 = OtherUserNewManager_TypeInfo;
  }
  oldList = v4->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4), (oldList = OtherUserNewManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_long___Clear(
        oldList,
        (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
      v4 = OtherUserNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = OtherUserNewManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  OtherUserNewManager_c *v4; // x8
  const MethodInfo *v5; // x0

  if ( (byte_40F7FE7 & 1) == 0 )
  {
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v1);
    byte_40F7FE7 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  OtherUserNewManager__DeleteSaveData((const MethodInfo *)v2);
  OtherUserNewManager__ClearSaveDataList(v3);
  v4 = OtherUserNewManager_TypeInfo;
  OtherUserNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v4->static_fields->isModfiy = 1;
  OtherUserNewManager__WriteData(v5);
}


void __fastcall OtherUserNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_40F7FE6 & 1) == 0 )
  {
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v1);
    byte_40F7FE6 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall OtherUserNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0

  if ( (byte_40F7FE8 & 1) == 0 )
  {
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v1);
    byte_40F7FE8 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  OtherUserNewManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall OtherUserNewManager__IsNew(int64_t userId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  OtherUserNewManager_c *v5; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v9; // x23

  if ( (byte_40F7FEB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v4);
    byte_40F7FEB = 1;
  }
  v5 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v5 = OtherUserNewManager_TypeInfo;
  }
  oldList = v5->static_fields->oldList;
  if ( !oldList )
LABEL_20:
    sub_B170D4();
  size = oldList->fields._size;
  if ( size < 1 )
    return 1;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = OtherUserNewManager_TypeInfo;
    }
    v9 = v5->static_fields->oldList;
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    if ( v9->fields._items->m_Items[i] == userId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v5 = OtherUserNewManager_TypeInfo;
  }
  return 0;
}


void __fastcall OtherUserNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  OtherUserNewManager_c *v4; // x0
  WebViewManager_o *Instance; // x0
  OtherUserGameMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x0

  if ( (byte_40F7FEA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v1);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F7FEA = 1;
  }
  v4 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v4 = OtherUserNewManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (OtherUserGameMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    OtherUserGameMaster__continueDeviceOtherUser(MasterData_WarQuestSelectionMaster, v7);
    v8 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v8 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    }
    BYTE1(v8[2].klass->_1.gc_desc) = 0;
    LOBYTE(v8[2].klass->_1.gc_desc) = 1;
    OtherUserNewManager__WriteData(v8);
  }
}


bool __fastcall OtherUserNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  OtherUserNewManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  OtherUserNewManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_IO_BinaryReader_o *v16; // x19
  System_String_o *v17; // x20
  OtherUserNewManager_c *v18; // x0
  char v19; // w20
  OtherUserNewManager_c *v20; // x0
  int v21; // w20
  int i; // w23
  int64_t v23; // x21
  OtherUserNewManager_c *v24; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  int v30; // [xsp+8h] [xbp-48h]

  if ( (byte_40F7FEE & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v5);
    byte_40F7FEE = 1;
  }
  v6 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v6 = OtherUserNewManager_TypeInfo;
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
  v9 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v9);
  OtherUserNewManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v11 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v16 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v12, v13, v14, v15);
  System_IO_BinaryReader___ctor(v16, v11, 0LL);
  if ( !v16 )
    sub_B170D4();
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                             v16,
                             v16->klass->vtable._23_ReadChars.methodPtr);
  v18 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v18 = OtherUserNewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v30 = 152;
  }
  else
  {
    v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
            v16,
            v16->klass->vtable._10_ReadByte.methodPtr);
    v20 = OtherUserNewManager_TypeInfo;
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v20 = OtherUserNewManager_TypeInfo;
    }
    v20->static_fields->isContinueDevice = v19 & 1;
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
            v16,
            v16->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v21 >= 1 )
    {
      for ( i = 0; i < v21; ++i )
      {
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._17_ReadInt64.method)(
                v16,
                v16->klass->vtable._18_ReadUInt64.methodPtr);
        v24 = OtherUserNewManager_TypeInfo;
        if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
          v24 = OtherUserNewManager_TypeInfo;
        }
        oldList = v24->static_fields->oldList;
        if ( !oldList )
          sub_B170D4();
        System_Collections_Generic_List_long___Add(
          oldList,
          v23,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
    v30 = 137;
  }
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v27;
      p_offset += 4;
      if ( v27 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v29 = sub_AAFEF8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v16, *(_QWORD *)(v29 + 8));
  return v30 == 137;
}


void __fastcall OtherUserNewManager__SetOld(int64_t userId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  OtherUserNewManager_c *v6; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v9; // w8
  __int64 v10; // x22
  struct System_Collections_Generic_List_long__o *v11; // x23
  System_Collections_Generic_List_long__o *v12; // x0

  if ( (byte_40F7FEC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v5);
    byte_40F7FEC = 1;
  }
  v6 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v6 = OtherUserNewManager_TypeInfo;
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
        v6 = OtherUserNewManager_TypeInfo;
      }
      v11 = v6->static_fields->oldList;
      if ( !v11 )
        break;
      if ( v11->fields._size <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v11->fields._items->m_Items[v10] == userId )
        return;
      v6 = OtherUserNewManager_TypeInfo;
      ++v10;
      v9 = (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v10 >= size )
        goto LABEL_17;
    }
LABEL_23:
    sub_B170D4();
  }
LABEL_17:
  if ( v9 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = OtherUserNewManager_TypeInfo;
    }
  }
  v12 = v6->static_fields->oldList;
  if ( !v12 )
    goto LABEL_23;
  System_Collections_Generic_List_long___Add(
    v12,
    userId,
    (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
  OtherUserNewManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__SetOld_21273112(System_Int64_array *userList, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  OtherUserNewManager_c *v8; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  signed __int64 size; // x22
  unsigned __int64 v11; // x23
  int64_t *v12; // x24
  struct System_Collections_Generic_List_long__o *v13; // x25
  __int64 v14; // x10
  unsigned __int64 v15; // x22
  int64_t *m_Items; // x23
  unsigned __int64 max_length; // x8
  System_Collections_Generic_List_long__o *v18; // x0

  if ( (byte_40F7FED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v5);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v6);
    byte_40F7FED = 1;
  }
  if ( userList )
  {
    v7 = *(_QWORD *)&userList->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = OtherUserNewManager_TypeInfo;
      if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        v8 = OtherUserNewManager_TypeInfo;
      }
      oldList = v8->static_fields->oldList;
      if ( oldList )
      {
        size = oldList->fields._size;
        if ( (int)size < 1 )
        {
LABEL_25:
          v15 = 0LL;
          m_Items = userList->m_Items;
          while ( 1 )
          {
            max_length = userList->max_length;
            if ( v15 >= max_length )
              break;
            if ( m_Items[v15] >= 1 )
            {
              v8 = OtherUserNewManager_TypeInfo;
              if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
                v8 = OtherUserNewManager_TypeInfo;
                max_length = userList->max_length;
              }
              if ( v15 >= max_length )
                break;
              v18 = v8->static_fields->oldList;
              if ( !v18 )
                goto LABEL_37;
              System_Collections_Generic_List_long___Add(
                v18,
                m_Items[v15],
                (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
              OtherUserNewManager_TypeInfo->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v15 >= (int)v7 )
              return;
          }
LABEL_36:
          sub_B17100(v8, method, v2);
          sub_B170A0();
        }
        v11 = 0LL;
        v12 = userList->m_Items;
        while ( 1 )
        {
          if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v8);
            v8 = OtherUserNewManager_TypeInfo;
          }
          v13 = v8->static_fields->oldList;
          if ( !v13 )
            break;
          if ( v11 >= (unsigned int)v13->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v14 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v14 >= userList->max_length )
              goto LABEL_36;
            if ( v13->fields._items->m_Items[v11] == v12[v14] )
              break;
            if ( (int)++v14 >= (int)v7 )
              goto LABEL_24;
          }
          v12[v14] = 0LL;
LABEL_24:
          if ( (__int64)++v11 >= size )
            goto LABEL_25;
          v8 = OtherUserNewManager_TypeInfo;
        }
      }
LABEL_37:
      sub_B170D4();
    }
  }
}


bool __fastcall OtherUserNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  OtherUserNewManager_c *v7; // x0
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  OtherUserNewManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x19
  OtherUserNewManager_c *v21; // x0
  struct OtherUserNewManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  signed __int64 size; // x20
  unsigned __int64 i; // x22
  OtherUserNewManager_c *v26; // x0
  struct System_Collections_Generic_List_long__o *v27; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0

  if ( (byte_40F7FEF & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&OtherUserNewManager_TypeInfo, v6);
    byte_40F7FEF = 1;
  }
  v7 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v7 = OtherUserNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &OtherUserNewManager_TypeInfo->static_fields->isModfiy;
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
    v13 = OtherUserNewManager_TypeInfo;
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    }
    SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v13);
    v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
    System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
    v21 = OtherUserNewManager_TypeInfo;
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v21 = OtherUserNewManager_TypeInfo;
    }
    v22 = v21->static_fields;
    oldList = v22->oldList;
    if ( !oldList )
      sub_B170D4();
    if ( !v20 )
      sub_B170D4();
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
      v20,
      v22->SAVE_DATA_VERSION,
      v20->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
      v20,
      OtherUserNewManager_TypeInfo->static_fields->isContinueDevice,
      v20->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
      v20,
      (unsigned int)size,
      v20->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v26 = OtherUserNewManager_TypeInfo;
        if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
          v26 = OtherUserNewManager_TypeInfo;
        }
        v27 = v26->static_fields->oldList;
        if ( !v27 )
          sub_B170D4();
        if ( i >= (unsigned int)v27->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v20->klass->vtable._19_Write.method)(
          v20,
          v27->fields._items->m_Items[i],
          v20->klass->vtable._20_Write.methodPtr);
      }
    }
    klass = v20->klass;
    if ( *(_WORD *)&v20->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v29;
        p_offset += 4;
        if ( v29 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v31 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v20, *(_QWORD *)(v31 + 8));
  }
  return 1;
}


System_String_o *__fastcall OtherUserNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40F7FE5 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40F7FE5 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(12, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}