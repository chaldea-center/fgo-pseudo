void __fastcall UserServantCollectionManager___cctor(const MethodInfo *method)
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
  UserServantCollectionManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x19
  struct UserServantCollectionManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4212CA2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6630/*"Fgo_20150511_1"*/, v10);
    byte_4212CA2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserServantCollectionManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6630/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6630/*"Fgo_20150511_1"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserServantCollectionManager_TypeInfo;
  UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = UserServantCollectionManager_TypeInfo->static_fields;
  v17->oldList = v16;
  sub_B0D840((BattleServantConfConponent_o *)&v17->oldList, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
}


void __fastcall UserServantCollectionManager___ctor(UserServantCollectionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantCollectionManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserServantCollectionManager_c *v4; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8

  if ( (byte_4212C9B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v2);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v3);
    byte_4212C9B = 1;
  }
  v4 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v4->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (oldList = UserServantCollectionManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_int___Clear(
        oldList,
        (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
      v4 = UserServantCollectionManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(v4);
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  const MethodInfo *v3; // x0
  UserServantCollectionManager_c *v4; // x8
  const MethodInfo *v5; // x0

  if ( (byte_4212C99 & 1) == 0 )
  {
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v1);
    byte_4212C99 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__DeleteSaveData((const MethodInfo *)v2);
  UserServantCollectionManager__ClearSaveDataList(v3);
  v4 = UserServantCollectionManager_TypeInfo;
  UserServantCollectionManager_TypeInfo->static_fields->isContinueDevice = 1;
  v4->static_fields->isModfiy = 1;
  UserServantCollectionManager__WriteData(v5);
}


void __fastcall UserServantCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4212C98 & 1) == 0 )
  {
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v1);
    byte_4212C98 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserServantCollectionManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0

  if ( (byte_4212C9A & 1) == 0 )
  {
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v1);
    byte_4212C9A = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserServantCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserServantCollectionManager_c *v5; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_int__o *v9; // x23

  if ( (byte_4212C9D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v4);
    byte_4212C9D = 1;
  }
  v5 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v5 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v5->static_fields->oldList;
  if ( !oldList )
LABEL_20:
    sub_B0D97C(v5);
  size = oldList->fields._size;
  if ( size < 1 )
    return 1;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = UserServantCollectionManager_TypeInfo;
    }
    v9 = v5->static_fields->oldList;
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    if ( v9->fields._items->m_Items[i + 1] == svtId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v5 = UserServantCollectionManager_TypeInfo;
  }
  return 0;
}


void __fastcall UserServantCollectionManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserServantCollectionManager_c *v4; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_4212C9C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v3);
    byte_4212C9C = 1;
  }
  v4 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_B0D97C(Instance);
    }
    UserServantCollectionMaster__continueDeviceUserServantCollection((UserServantCollectionMaster_o *)Instance, v6);
    v7 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v7 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    }
    BYTE1(v7[2].klass->_1.gc_desc) = 0;
    LOBYTE(v7[2].klass->_1.gc_desc) = 1;
    UserServantCollectionManager__WriteData(v7);
  }
}


bool __fastcall UserServantCollectionManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  UserServantCollectionManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  UserServantCollectionManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_IO_BinaryReader_o *v15; // x19
  __int64 v16; // x0
  System_String_o *v17; // x20
  UserServantCollectionManager_c *v18; // x0
  char v19; // w20
  UserServantCollectionManager_c *v20; // x0
  int v21; // w20
  int i; // w23
  int32_t v23; // w21
  UserServantCollectionManager_c *v24; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0
  UserServantCollectionManager_c *v30; // x0
  int v31; // [xsp+8h] [xbp-48h]

  if ( (byte_4212CA0 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v4);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v5);
    byte_4212CA0 = 1;
  }
  v6 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v6 = UserServantCollectionManager_TypeInfo;
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
  v9 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v9);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v11 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    }
    UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v11);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v15 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v13, v14);
    System_IO_BinaryReader___ctor(v15, v12, 0LL);
    if ( !v15 )
      sub_B0D97C(v16);
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._22_ReadString.method)(
                               v15,
                               v15->klass->vtable._23_ReadChars.methodPtr);
    v18 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v18 = UserServantCollectionManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
    {
      v31 = 152;
    }
    else
    {
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._9_ReadBoolean.method)(
              v15,
              v15->klass->vtable._10_ReadByte.methodPtr);
      v20 = UserServantCollectionManager_TypeInfo;
      if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        v20 = UserServantCollectionManager_TypeInfo;
      }
      v20->static_fields->isContinueDevice = v19 & 1;
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
              v15,
              v15->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v21 >= 1 )
      {
        for ( i = 0; i < v21; ++i )
        {
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v15->klass->vtable._15_ReadInt32.method)(
                  v15,
                  v15->klass->vtable._16_ReadUInt32.methodPtr);
          v24 = UserServantCollectionManager_TypeInfo;
          if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
            v24 = UserServantCollectionManager_TypeInfo;
          }
          oldList = v24->static_fields->oldList;
          if ( !oldList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_int___Add(
            oldList,
            v23,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      v31 = 137;
    }
    klass = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_39;
      }
      v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_39:
      v29 = sub_AA67A0(v15, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v15, *(_QWORD *)(v29 + 8));
    return v31 == 137;
  }
  else
  {
    v30 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    }
    UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v30);
    return 0;
  }
}


void __fastcall UserServantCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionManager_c *v6; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  int v9; // w8
  __int64 v10; // x22
  struct System_Collections_Generic_List_int__o *v11; // x23

  if ( (byte_4212C9E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v5);
    byte_4212C9E = 1;
  }
  v6 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v6 = UserServantCollectionManager_TypeInfo;
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
        v6 = UserServantCollectionManager_TypeInfo;
      }
      v11 = v6->static_fields->oldList;
      if ( !v11 )
        break;
      if ( v11->fields._size <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( v11->fields._items->m_Items[v10 + 1] == svtId )
        return;
      v6 = UserServantCollectionManager_TypeInfo;
      ++v10;
      v9 = (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v10 >= size )
        goto LABEL_17;
    }
LABEL_23:
    sub_B0D97C(v6);
  }
LABEL_17:
  if ( v9 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = UserServantCollectionManager_TypeInfo;
    }
  }
  v6 = (UserServantCollectionManager_c *)v6->static_fields->oldList;
  if ( !v6 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v6,
    svtId,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__SetOld_21239912(System_Int32_array *svtIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x21
  UserServantCollectionManager_c *v7; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  signed __int64 size; // x22
  unsigned __int64 v10; // x23
  int32_t *v11; // x24
  struct System_Collections_Generic_List_int__o *v12; // x25
  __int64 v13; // x10
  unsigned __int64 v14; // x22
  int32_t *v15; // x23
  unsigned __int64 max_length; // x8
  __int64 v17; // x0

  if ( (byte_4212C9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v5);
    byte_4212C9F = 1;
  }
  if ( svtIdList )
  {
    v6 = *(_QWORD *)&svtIdList->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = UserServantCollectionManager_TypeInfo;
      if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        v7 = UserServantCollectionManager_TypeInfo;
      }
      oldList = v7->static_fields->oldList;
      if ( oldList )
      {
        size = oldList->fields._size;
        if ( (int)size < 1 )
        {
LABEL_25:
          v14 = 0LL;
          v15 = &svtIdList->m_Items[1];
          while ( 1 )
          {
            max_length = svtIdList->max_length;
            if ( v14 >= max_length )
              break;
            if ( v15[v14] >= 1 )
            {
              v7 = UserServantCollectionManager_TypeInfo;
              if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
                v7 = UserServantCollectionManager_TypeInfo;
                max_length = svtIdList->max_length;
              }
              if ( v14 >= max_length )
                break;
              v7 = (UserServantCollectionManager_c *)v7->static_fields->oldList;
              if ( !v7 )
                goto LABEL_37;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v7,
                v15[v14],
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
              UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v14 >= (int)v6 )
              return;
          }
LABEL_36:
          v17 = sub_B0D9A8(v7);
          sub_B0D948(v17, 0LL);
        }
        v10 = 0LL;
        v11 = &svtIdList->m_Items[1];
        while ( 1 )
        {
          if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = UserServantCollectionManager_TypeInfo;
          }
          v12 = v7->static_fields->oldList;
          if ( !v12 )
            break;
          if ( v10 >= (unsigned int)v12->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          v13 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v13 >= svtIdList->max_length )
              goto LABEL_36;
            if ( v12->fields._items->m_Items[v10 + 1] == v11[v13] )
              break;
            if ( (int)++v13 >= (int)v6 )
              goto LABEL_24;
          }
          v11[v13] = 0;
LABEL_24:
          if ( (__int64)++v10 >= size )
            goto LABEL_25;
          v7 = UserServantCollectionManager_TypeInfo;
        }
      }
LABEL_37:
      sub_B0D97C(v7);
    }
  }
}


bool __fastcall UserServantCollectionManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantCollectionManager_c *v7; // x0
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  UserServantCollectionManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_IO_BinaryWriter_o *v18; // x19
  UserServantCollectionManager_c *v19; // x0
  struct UserServantCollectionManager_StaticFields *v20; // x8
  struct System_Collections_Generic_List_int__o *oldList; // x9
  signed __int64 size; // x20
  unsigned __int64 i; // x22
  UserServantCollectionManager_c *v24; // x0
  struct System_Collections_Generic_List_int__o *v25; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0

  if ( (byte_4212CA1 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v5);
    sub_B0D8A4(&UserServantCollectionManager_TypeInfo, v6);
    byte_4212CA1 = 1;
  }
  v7 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v7 = UserServantCollectionManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &UserServantCollectionManager_TypeInfo->static_fields->isModfiy;
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
    v13 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    }
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v13);
    v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v18 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v16, v17);
    System_IO_BinaryWriter___ctor_39036700(v18, v15, 0LL);
    v19 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v19 = UserServantCollectionManager_TypeInfo;
    }
    v20 = v19->static_fields;
    oldList = v20->oldList;
    if ( !oldList )
      sub_B0D97C(v19);
    if ( !v18 )
      sub_B0D97C(v19);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
      v18,
      v20->SAVE_DATA_VERSION,
      v18->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
      v18,
      UserServantCollectionManager_TypeInfo->static_fields->isContinueDevice,
      v18->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
      v18,
      (unsigned int)size,
      v18->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v24 = UserServantCollectionManager_TypeInfo;
        if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
          v24 = UserServantCollectionManager_TypeInfo;
        }
        v25 = v24->static_fields->oldList;
        if ( !v25 )
          sub_B0D97C(v24);
        if ( i >= (unsigned int)v25->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
          v18,
          (unsigned int)v25->fields._items->m_Items[i + 1],
          v18->klass->vtable._18_Write.methodPtr);
      }
    }
    klass = v18->klass;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v27 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        p_offset += 4;
        if ( v27 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v29 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v18, *(_QWORD *)(v29 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserServantCollectionManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4212C97 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4212C97 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(7, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}