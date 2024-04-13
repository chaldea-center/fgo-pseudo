void __fastcall UserServantNewManager___cctor(const MethodInfo *method)
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
  UserServantNewManager_c *v19; // x8
  System_Collections_Generic_List_long__o *v20; // x19
  struct UserServantNewManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EE69A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6692/*"Fgo_20150511_1"*/, v14, v15, v16);
    byte_42EE69A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserServantNewManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6692/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6692/*"Fgo_20150511_1"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = UserServantNewManager_TypeInfo;
  UserServantNewManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v21 = UserServantNewManager_TypeInfo->static_fields;
  v21->oldList = v20;
  sub_B5D560((BattleServantConfConponent_o *)&v21->oldList, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
}


void __fastcall UserServantNewManager___ctor(UserServantNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantNewManager__ClearSaveDataList(const MethodInfo *method)
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
  UserServantNewManager_c *v10; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8

  if ( (byte_42EE693 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v4, v5, v6);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v7, v8, v9);
    byte_42EE693 = 1;
  }
  v10 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v10 = UserServantNewManager_TypeInfo;
  }
  oldList = v10->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10), (oldList = UserServantNewManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_long___Clear(
        oldList,
        (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
      v10 = UserServantNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = UserServantNewManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModfiy = 1;
}


void __fastcall UserServantNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserServantNewManager_c *v4; // x0
  const MethodInfo *v5; // x0
  UserServantNewManager_c *v6; // x8
  const MethodInfo *v7; // x0

  if ( (byte_42EE691 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v1, v2, v3);
    byte_42EE691 = 1;
  }
  v4 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__DeleteSaveData((const MethodInfo *)v4);
  UserServantNewManager__ClearSaveDataList(v5);
  v6 = UserServantNewManager_TypeInfo;
  UserServantNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v6->static_fields->isModfiy = 1;
  UserServantNewManager__WriteData(v7);
}


void __fastcall UserServantNewManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserServantNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42EE690 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v1, v2, v3);
    byte_42EE690 = 1;
  }
  v4 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserServantNewManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserServantNewManager_c *v4; // x0

  if ( (byte_42EE692 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v1, v2, v3);
    byte_42EE692 = 1;
  }
  v4 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall UserServantNewManager__IsNew(int64_t userSvtId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserServantNewManager_c *v11; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v15; // x23

  if ( (byte_42EE695 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v8, v9, v10);
    byte_42EE695 = 1;
  }
  v11 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v11 = UserServantNewManager_TypeInfo;
  }
  oldList = v11->static_fields->oldList;
  if ( !oldList )
LABEL_20:
    sub_B5D69C(v11, method);
  size = oldList->fields._size;
  if ( size < 1 )
    return 1;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = UserServantNewManager_TypeInfo;
    }
    v15 = v11->static_fields->oldList;
    if ( !v15 )
      goto LABEL_20;
    if ( v15->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( v15->fields._items->m_Items[i] == userSvtId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v11 = UserServantNewManager_TypeInfo;
  }
  return 0;
}


void __fastcall UserServantNewManager__LoginProcess(const MethodInfo *method)
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
  UserServantNewManager_c *v13; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v15; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x19
  UserServantStorageMaster_o *v17; // x20
  const MethodInfo *v18; // x0

  if ( (byte_42EE694 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v10, v11, v12);
    byte_42EE694 = 1;
  }
  v13 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v13 = UserServantNewManager_TypeInfo;
  }
  if ( v13->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantStorageMaster___),
          !MasterData_WarQuestSelectionMaster)
      || (v17 = (UserServantStorageMaster_o *)Instance,
          UserServantMaster__continueDeviceUserServant(MasterData_WarQuestSelectionMaster, v15),
          !v17) )
    {
      sub_B5D69C(Instance, v15);
    }
    UserServantStorageMaster__continueDeviceUserServant(v17, v15);
    v18 = (const MethodInfo *)UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v18 = (const MethodInfo *)UserServantNewManager_TypeInfo;
    }
    BYTE1(v18[2].klass->_1.gc_desc) = 0;
    LOBYTE(v18[2].klass->_1.gc_desc) = 1;
    UserServantNewManager__WriteData(v18);
  }
}


bool __fastcall UserServantNewManager__ReadData(const MethodInfo *method)
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
  UserServantNewManager_c *v16; // x0
  ManagerConfig_c *v17; // x0
  UserServantNewManager_c *v19; // x0
  System_String_o *SaveFileName; // x19
  UserServantNewManager_c *v21; // x0
  System_IO_Stream_o *v22; // x20
  System_IO_BinaryReader_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x20
  UserServantNewManager_c *v27; // x0
  __int64 v28; // x3
  char v29; // w20
  UserServantNewManager_c *v30; // x0
  int v31; // w20
  int i; // w23
  __int64 v33; // x1
  int64_t v34; // x21
  UserServantNewManager_c *v35; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0
  UserServantNewManager_c *v41; // x0
  int v42; // [xsp+8h] [xbp-48h]

  if ( (byte_42EE698 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v7, v8, v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v13, v14, v15);
    byte_42EE698 = 1;
  }
  v16 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v16 = UserServantNewManager_TypeInfo;
  }
  v16->static_fields->isModfiy = 0;
  v17 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v17 = ManagerConfig_TypeInfo;
  }
  if ( v17->static_fields->UseMock )
    return 1;
  v19 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v19);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v21 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    UserServantNewManager__ClearSaveDataList((const MethodInfo *)v21);
    v22 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v23 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v23, v22, 0LL);
    if ( !v23 )
      sub_B5D69C(v24, v25);
    v26 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                               v23,
                               v23->klass->vtable._23_ReadChars.methodPtr);
    v27 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v27 = UserServantNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v27->static_fields->SAVE_DATA_VERSION, v26, 0LL) )
    {
      v42 = 152;
    }
    else
    {
      v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._9_ReadBoolean.method)(
              v23,
              v23->klass->vtable._10_ReadByte.methodPtr);
      v30 = UserServantNewManager_TypeInfo;
      if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
        v30 = UserServantNewManager_TypeInfo;
      }
      v30->static_fields->isContinueDevice = v29 & 1;
      v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
              v23,
              v23->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v31 >= 1 )
      {
        for ( i = 0; i < v31; ++i )
        {
          v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._17_ReadInt64.method)(
                  v23,
                  v23->klass->vtable._18_ReadUInt64.methodPtr);
          v35 = UserServantNewManager_TypeInfo;
          if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserServantNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
            v35 = UserServantNewManager_TypeInfo;
          }
          oldList = v35->static_fields->oldList;
          if ( !oldList )
            sub_B5D69C(0LL, v33);
          System_Collections_Generic_List_long___Add(
            oldList,
            v34,
            (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      v42 = 137;
    }
    klass = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v38 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        p_offset += 4;
        if ( v38 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_39;
      }
      v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_39:
      v40 = sub_AF54C0(v23, System_IDisposable_TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v40)(v23, *(_QWORD *)(v40 + 8));
    return v42 == 137;
  }
  else
  {
    v41 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    UserServantNewManager__ClearSaveDataList((const MethodInfo *)v41);
    return 0;
  }
}


void __fastcall UserServantNewManager__SetOld(int64_t userSvtId, const MethodInfo *method)
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
  UserServantNewManager_c *v14; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v17; // w8
  __int64 v18; // x22
  struct System_Collections_Generic_List_long__o *v19; // x23

  if ( (byte_42EE696 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v11, v12, v13);
    byte_42EE696 = 1;
  }
  v14 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v14 = UserServantNewManager_TypeInfo;
  }
  oldList = v14->static_fields->oldList;
  if ( !oldList )
    goto LABEL_23;
  size = oldList->fields._size;
  v17 = (BYTE3(v14->vtable._0_Equals.methodPtr) >> 2) & 1;
  if ( size >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( (v17 & 1) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = UserServantNewManager_TypeInfo;
      }
      v19 = v14->static_fields->oldList;
      if ( !v19 )
        break;
      if ( v19->fields._size <= (unsigned int)v18 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( v19->fields._items->m_Items[v18] == userSvtId )
        return;
      v14 = UserServantNewManager_TypeInfo;
      ++v18;
      v17 = (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v18 >= size )
        goto LABEL_17;
    }
LABEL_23:
    sub_B5D69C(v14, method);
  }
LABEL_17:
  if ( v17 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = UserServantNewManager_TypeInfo;
    }
  }
  v14 = (UserServantNewManager_c *)v14->static_fields->oldList;
  if ( !v14 )
    goto LABEL_23;
  System_Collections_Generic_List_long___Add(
    (System_Collections_Generic_List_long__o *)v14,
    userSvtId,
    (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
  UserServantNewManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserServantNewManager__SetOld_35224388(System_Int64_array *userSvtList, const MethodInfo *method)
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
  __int64 v14; // x21
  UserServantNewManager_c *v15; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  signed __int64 size; // x22
  unsigned __int64 v18; // x23
  int64_t *v19; // x24
  struct System_Collections_Generic_List_long__o *v20; // x25
  __int64 v21; // x10
  unsigned __int64 v22; // x22
  int64_t *m_Items; // x23
  unsigned __int64 max_length; // x8
  __int64 v25; // x0

  if ( (byte_42EE697 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v8, v9, v10);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v11, v12, v13);
    byte_42EE697 = 1;
  }
  if ( userSvtList )
  {
    v14 = *(_QWORD *)&userSvtList->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = UserServantNewManager_TypeInfo;
      if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
        v15 = UserServantNewManager_TypeInfo;
      }
      oldList = v15->static_fields->oldList;
      if ( oldList )
      {
        size = oldList->fields._size;
        if ( (int)size < 1 )
        {
LABEL_25:
          v22 = 0LL;
          m_Items = userSvtList->m_Items;
          while ( 1 )
          {
            max_length = userSvtList->max_length;
            if ( v22 >= max_length )
              break;
            if ( m_Items[v22] >= 1 )
            {
              v15 = UserServantNewManager_TypeInfo;
              if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserServantNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
                v15 = UserServantNewManager_TypeInfo;
                max_length = userSvtList->max_length;
              }
              if ( v22 >= max_length )
                break;
              v15 = (UserServantNewManager_c *)v15->static_fields->oldList;
              if ( !v15 )
                goto LABEL_37;
              System_Collections_Generic_List_long___Add(
                (System_Collections_Generic_List_long__o *)v15,
                m_Items[v22],
                (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
              UserServantNewManager_TypeInfo->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v22 >= (int)v14 )
              return;
          }
LABEL_36:
          v25 = sub_B5D6C8(v15);
          sub_B5D668(v25, 0LL);
        }
        v18 = 0LL;
        v19 = userSvtList->m_Items;
        while ( 1 )
        {
          if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v15);
            v15 = UserServantNewManager_TypeInfo;
          }
          v20 = v15->static_fields->oldList;
          if ( !v20 )
            break;
          if ( v18 >= (unsigned int)v20->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v21 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v21 >= userSvtList->max_length )
              goto LABEL_36;
            if ( v20->fields._items->m_Items[v18] == v19[v21] )
              break;
            if ( (int)++v21 >= (int)v14 )
              goto LABEL_24;
          }
          v19[v21] = 0LL;
LABEL_24:
          if ( (__int64)++v18 >= size )
            goto LABEL_25;
          v15 = UserServantNewManager_TypeInfo;
        }
      }
LABEL_37:
      sub_B5D69C(v15, method);
    }
  }
}


bool __fastcall UserServantNewManager__WriteData(const MethodInfo *method)
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
  UserServantNewManager_c *v19; // x0
  struct UserServantNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v23; // x0
  UserServantNewManager_c *v25; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v27; // x20
  System_IO_BinaryWriter_o *v28; // x19
  __int64 v29; // x1
  UserServantNewManager_c *v30; // x0
  struct UserServantNewManager_StaticFields *v31; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  signed __int64 size; // x20
  __int64 v34; // x1
  __int64 v35; // x3
  unsigned __int64 i; // x22
  UserServantNewManager_c *v37; // x0
  struct System_Collections_Generic_List_long__o *v38; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 v42; // x0

  if ( (byte_42EE699 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v10, v11, v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v16, v17, v18);
    byte_42EE699 = 1;
  }
  v19 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v19 = UserServantNewManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    p_isModfiy = &UserServantNewManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v23 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v23 = ManagerConfig_TypeInfo;
  }
  if ( !v23->static_fields->UseMock )
  {
    v25 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v25);
    v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v28 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40360312(v28, v27, 0LL);
    v30 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v30 = UserServantNewManager_TypeInfo;
    }
    v31 = v30->static_fields;
    oldList = v31->oldList;
    if ( !oldList )
      sub_B5D69C(v30, v29);
    if ( !v28 )
      sub_B5D69C(v30, v29);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v28->klass->vtable._22_Write.method)(
      v28,
      v31->SAVE_DATA_VERSION,
      v28->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v28->klass->vtable._8_Write.method)(
      v28,
      UserServantNewManager_TypeInfo->static_fields->isContinueDevice,
      v28->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
      v28,
      (unsigned int)size,
      v28->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v37 = UserServantNewManager_TypeInfo;
        if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserServantNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
          v37 = UserServantNewManager_TypeInfo;
        }
        v38 = v37->static_fields->oldList;
        if ( !v38 )
          sub_B5D69C(v37, v34);
        if ( i >= (unsigned int)v38->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v28->klass->vtable._19_Write.method)(
          v28,
          v38->fields._items->m_Items[i],
          v28->klass->vtable._20_Write.methodPtr);
      }
    }
    klass = v28->klass;
    if ( *(_WORD *)&v28->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v40;
        p_offset += 4;
        if ( v40 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v42 = sub_AF54C0(v28, System_IDisposable_TypeInfo, 0LL, v35);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v42)(v28, *(_QWORD *)(v42 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserServantNewManager__getSaveFileName(const MethodInfo *method)
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
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42EE68F & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EE68F = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(5, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}