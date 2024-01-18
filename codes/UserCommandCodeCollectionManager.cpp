void __fastcall UserCommandCodeCollectionManager___cctor(const MethodInfo *method)
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
  UserCommandCodeCollectionManager_c *v13; // x8
  System_Collections_Generic_List_int__o *v14; // x19
  struct UserCommandCodeCollectionManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4188ABB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6618/*"Fgo_20180629_1"*/, v10);
    byte_4188ABB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserCommandCodeCollectionManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6618/*"Fgo_20180629_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6618/*"Fgo_20180629_1"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserCommandCodeCollectionManager_TypeInfo;
  UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = UserCommandCodeCollectionManager_TypeInfo->static_fields;
  v15->oldList = v14;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->oldList, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
}


void __fastcall UserCommandCodeCollectionManager___ctor(
        UserCommandCodeCollectionManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserCommandCodeCollectionManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserCommandCodeCollectionManager_c *v4; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8

  if ( (byte_4188AB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v2);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v3);
    byte_4188AB4 = 1;
  }
  v4 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v4 = UserCommandCodeCollectionManager_TypeInfo;
  }
  oldList = v4->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (oldList = UserCommandCodeCollectionManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_int___Clear(
        oldList,
        (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
      v4 = UserCommandCodeCollectionManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserCommandCodeCollectionManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeCollectionManager_c *v2; // x0
  const MethodInfo *v3; // x0
  UserCommandCodeCollectionManager_c *v4; // x8
  const MethodInfo *v5; // x0

  if ( (byte_4188AB2 & 1) == 0 )
  {
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v1);
    byte_4188AB2 = 1;
  }
  v2 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__DeleteSaveData((const MethodInfo *)v2);
  UserCommandCodeCollectionManager__ClearSaveDataList(v3);
  v4 = UserCommandCodeCollectionManager_TypeInfo;
  UserCommandCodeCollectionManager_TypeInfo->static_fields->isContinueDevice = 1;
  v4->static_fields->isModfiy = 1;
  UserCommandCodeCollectionManager__WriteData(v5);
}


void __fastcall UserCommandCodeCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeCollectionManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4188AB1 & 1) == 0 )
  {
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v1);
    byte_4188AB1 = 1;
  }
  v2 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserCommandCodeCollectionManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeCollectionManager_c *v2; // x0

  if ( (byte_4188AB3 & 1) == 0 )
  {
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v1);
    byte_4188AB3 = 1;
  }
  v2 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserCommandCodeCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserCommandCodeCollectionManager_c *v5; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_int__o *v9; // x23

  if ( (byte_4188AB6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v4);
    byte_4188AB6 = 1;
  }
  v5 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v5 = UserCommandCodeCollectionManager_TypeInfo;
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
      v5 = UserCommandCodeCollectionManager_TypeInfo;
    }
    v9 = v5->static_fields->oldList;
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( v9->fields._items->m_Items[i + 1] == svtId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v5 = UserCommandCodeCollectionManager_TypeInfo;
  }
  return 0;
}


void __fastcall UserCommandCodeCollectionManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserCommandCodeCollectionManager_c *v4; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_4188AB5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v3);
    byte_4188AB5 = 1;
  }
  v4 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v4 = UserCommandCodeCollectionManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v6);
    }
    UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
      (UserCommandCodeCollectionMaster_o *)Instance,
      v6);
    v7 = (const MethodInfo *)UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      v7 = (const MethodInfo *)UserCommandCodeCollectionManager_TypeInfo;
    }
    BYTE1(v7[2].klass->_1.gc_desc) = 0;
    LOBYTE(v7[2].klass->_1.gc_desc) = 1;
    UserCommandCodeCollectionManager__WriteData(v7);
  }
}


bool __fastcall UserCommandCodeCollectionManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserCommandCodeCollectionManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  UserCommandCodeCollectionManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  UserCommandCodeCollectionManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  UserCommandCodeCollectionManager_c *v17; // x0
  __int64 v18; // x3
  char v19; // w20
  UserCommandCodeCollectionManager_c *v20; // x0
  int v21; // w20
  int i; // w23
  __int64 v23; // x1
  int32_t v24; // w21
  UserCommandCodeCollectionManager_c *v25; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  UserCommandCodeCollectionManager_c *v31; // x0
  int v32; // [xsp+8h] [xbp-48h]

  if ( (byte_4188AB9 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v5);
    byte_4188AB9 = 1;
  }
  v6 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v6 = UserCommandCodeCollectionManager_TypeInfo;
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
  v9 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v9);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v11 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    }
    UserCommandCodeCollectionManager__ClearSaveDataList((const MethodInfo *)v11);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v13 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v13, v12, 0LL);
    if ( !v13 )
      sub_B2C434(v14, v15);
    v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                               v13,
                               v13->klass->vtable._23_ReadChars.methodPtr);
    v17 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      v17 = UserCommandCodeCollectionManager_TypeInfo;
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
      v20 = UserCommandCodeCollectionManager_TypeInfo;
      if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
        v20 = UserCommandCodeCollectionManager_TypeInfo;
      }
      v20->static_fields->isContinueDevice = v19 & 1;
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
              v13,
              v13->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v21 >= 1 )
      {
        for ( i = 0; i < v21; ++i )
        {
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                  v13,
                  v13->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = UserCommandCodeCollectionManager_TypeInfo;
          if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
            v25 = UserCommandCodeCollectionManager_TypeInfo;
          }
          oldList = v25->static_fields->oldList;
          if ( !oldList )
            sub_B2C434(0LL, v23);
          System_Collections_Generic_List_int___Add(
            oldList,
            v24,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
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
    v31 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    }
    UserCommandCodeCollectionManager__ClearSaveDataList((const MethodInfo *)v31);
    return 0;
  }
}


void __fastcall UserCommandCodeCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserCommandCodeCollectionManager_c *v6; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  int v9; // w8
  __int64 v10; // x22
  struct System_Collections_Generic_List_int__o *v11; // x23

  if ( (byte_4188AB7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v5);
    byte_4188AB7 = 1;
  }
  v6 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v6 = UserCommandCodeCollectionManager_TypeInfo;
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
        v6 = UserCommandCodeCollectionManager_TypeInfo;
      }
      v11 = v6->static_fields->oldList;
      if ( !v11 )
        break;
      if ( v11->fields._size <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( v11->fields._items->m_Items[v10 + 1] == svtId )
        return;
      v6 = UserCommandCodeCollectionManager_TypeInfo;
      ++v10;
      v9 = (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
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
      v6 = UserCommandCodeCollectionManager_TypeInfo;
    }
  }
  v6 = (UserCommandCodeCollectionManager_c *)v6->static_fields->oldList;
  if ( !v6 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v6,
    svtId,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserCommandCodeCollectionManager__SetOld_26962764(
        System_Int32_array *svtIdList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x21
  UserCommandCodeCollectionManager_c *v7; // x0
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

  if ( (byte_4188AB8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v5);
    byte_4188AB8 = 1;
  }
  if ( svtIdList )
  {
    v6 = *(_QWORD *)&svtIdList->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = UserCommandCodeCollectionManager_TypeInfo;
      if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
        v7 = UserCommandCodeCollectionManager_TypeInfo;
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
              v7 = UserCommandCodeCollectionManager_TypeInfo;
              if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
                v7 = UserCommandCodeCollectionManager_TypeInfo;
                max_length = svtIdList->max_length;
              }
              if ( v14 >= max_length )
                break;
              v7 = (UserCommandCodeCollectionManager_c *)v7->static_fields->oldList;
              if ( !v7 )
                goto LABEL_37;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v7,
                v15[v14],
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
              UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v14 >= (int)v6 )
              return;
          }
LABEL_36:
          v17 = sub_B2C460(v7);
          sub_B2C400(v17, 0LL);
        }
        v10 = 0LL;
        v11 = &svtIdList->m_Items[1];
        while ( 1 )
        {
          if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v7);
            v7 = UserCommandCodeCollectionManager_TypeInfo;
          }
          v12 = v7->static_fields->oldList;
          if ( !v12 )
            break;
          if ( v10 >= (unsigned int)v12->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
          v7 = UserCommandCodeCollectionManager_TypeInfo;
        }
      }
LABEL_37:
      sub_B2C434(v7, method);
    }
  }
}


bool __fastcall UserCommandCodeCollectionManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserCommandCodeCollectionManager_c *v7; // x0
  struct UserCommandCodeCollectionManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  UserCommandCodeCollectionManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  UserCommandCodeCollectionManager_c *v18; // x0
  struct UserCommandCodeCollectionManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_int__o *oldList; // x9
  signed __int64 size; // x20
  __int64 v22; // x1
  __int64 v23; // x3
  unsigned __int64 i; // x22
  UserCommandCodeCollectionManager_c *v25; // x0
  struct System_Collections_Generic_List_int__o *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0

  if ( (byte_4188ABA & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v6);
    byte_4188ABA = 1;
  }
  v7 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v7 = UserCommandCodeCollectionManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy;
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
    v13 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    }
    SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v13);
    v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
    v18 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      v18 = UserCommandCodeCollectionManager_TypeInfo;
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
      UserCommandCodeCollectionManager_TypeInfo->static_fields->isContinueDevice,
      v16->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
      v16,
      (unsigned int)size,
      v16->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v25 = UserCommandCodeCollectionManager_TypeInfo;
        if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
          v25 = UserCommandCodeCollectionManager_TypeInfo;
        }
        v26 = v25->static_fields->oldList;
        if ( !v26 )
          sub_B2C434(v25, v22);
        if ( i >= (unsigned int)v26->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
          v16,
          (unsigned int)v26->fields._items->m_Items[i + 1],
          v16->klass->vtable._18_Write.methodPtr);
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


System_String_o *__fastcall UserCommandCodeCollectionManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4188AB0 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4188AB0 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(10, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}