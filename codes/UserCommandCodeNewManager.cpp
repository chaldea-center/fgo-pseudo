void __fastcall UserCommandCodeNewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  UserCommandCodeNewManager_c *v9; // x8
  System_Collections_Generic_List_long__o *v10; // x19
  struct UserCommandCodeNewManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42B14CC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    sub_B52984(&StringLiteral_6661/*"Fgo_20180629_1"*/);
    byte_42B14CC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserCommandCodeNewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6661/*"Fgo_20180629_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6661/*"Fgo_20180629_1"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserCommandCodeNewManager_TypeInfo;
  UserCommandCodeNewManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v11 = UserCommandCodeNewManager_TypeInfo->static_fields;
  v11->oldList = v10;
  sub_B52920((BattleServantConfConponent_o *)&v11->oldList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall UserCommandCodeNewManager___ctor(UserCommandCodeNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserCommandCodeNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8

  if ( (byte_42B14C6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14C6 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v2 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (oldList = UserCommandCodeNewManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_long___Clear(
        oldList,
        (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__);
      v2 = UserCommandCodeNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B52A5C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserCommandCodeNewManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall UserCommandCodeNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  UserCommandCodeNewManager_c *v3; // x8
  const MethodInfo *v4; // x0

  if ( (byte_42B14C4 & 1) == 0 )
  {
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14C4 = 1;
  }
  v1 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  UserCommandCodeNewManager__DeleteSaveData((const MethodInfo *)v1);
  UserCommandCodeNewManager__ClearSaveDataList(v2);
  v3 = UserCommandCodeNewManager_TypeInfo;
  UserCommandCodeNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v3->static_fields->isModfiy = 1;
  UserCommandCodeNewManager__WriteData(v4);
}


void __fastcall UserCommandCodeNewManager__DeleteSaveData(const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42B14C3 & 1) == 0 )
  {
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14C3 = 1;
  }
  v1 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserCommandCodeNewManager__Initialize(const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v1; // x0

  if ( (byte_42B14C5 & 1) == 0 )
  {
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14C5 = 1;
  }
  v1 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  UserCommandCodeNewManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserCommandCodeNewManager__IsNew(int64_t userCmdCodeId, const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v7; // x23

  if ( (byte_42B14C8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14C8 = 1;
  }
  v3 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v3 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
LABEL_20:
    sub_B52A5C(v3, method);
  size = oldList->fields._size;
  if ( size < 1 )
    return 1;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserCommandCodeNewManager_TypeInfo;
    }
    v7 = v3->static_fields->oldList;
    if ( !v7 )
      goto LABEL_20;
    if ( v7->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( v7->fields._items->m_Items[i] == userCmdCodeId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v3 = UserCommandCodeNewManager_TypeInfo;
  }
  return 0;
}


void __fastcall UserCommandCodeNewManager__LoginProcess(const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v1; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_42B14C7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14C7 = 1;
  }
  v1 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v1 = UserCommandCodeNewManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0LL )
    {
      sub_B52A5C(Instance, v3);
    }
    UserCommandCodeMaster__continueDeviceUserCommandCode((UserCommandCodeMaster_o *)Instance, v3);
    v4 = (const MethodInfo *)UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      v4 = (const MethodInfo *)UserCommandCodeNewManager_TypeInfo;
    }
    BYTE1(v4[2].klass->_1.gc_desc) = 0;
    LOBYTE(v4[2].klass->_1.gc_desc) = 1;
    UserCommandCodeNewManager__WriteData(v4);
  }
}


bool __fastcall UserCommandCodeNewManager__ReadData(const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserCommandCodeNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserCommandCodeNewManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  UserCommandCodeNewManager_c *v12; // x0
  __int64 v13; // x3
  char v14; // w20
  UserCommandCodeNewManager_c *v15; // x0
  int v16; // w20
  int i; // w23
  __int64 v18; // x1
  int64_t v19; // x21
  UserCommandCodeNewManager_c *v20; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  UserCommandCodeNewManager_c *v26; // x0
  int v27; // [xsp+8h] [xbp-48h]

  if ( (byte_42B14CA & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14CA = 1;
  }
  v1 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v1 = UserCommandCodeNewManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  }
  SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v6 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    UserCommandCodeNewManager__ClearSaveDataList((const MethodInfo *)v6);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B52A5C(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    v12 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      v12 = UserCommandCodeNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
    {
      v27 = 152;
    }
    else
    {
      v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
              v8,
              v8->klass->vtable._10_ReadByte.methodPtr);
      v15 = UserCommandCodeNewManager_TypeInfo;
      if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
        v15 = UserCommandCodeNewManager_TypeInfo;
      }
      v15->static_fields->isContinueDevice = v14 & 1;
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
              v8,
              v8->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v16 >= 1 )
      {
        for ( i = 0; i < v16; ++i )
        {
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._17_ReadInt64.method)(
                  v8,
                  v8->klass->vtable._18_ReadUInt64.methodPtr);
          v20 = UserCommandCodeNewManager_TypeInfo;
          if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
            v20 = UserCommandCodeNewManager_TypeInfo;
          }
          oldList = v20->static_fields->oldList;
          if ( !oldList )
            sub_B52A5C(0LL, v18);
          System_Collections_Generic_List_long___Add(
            oldList,
            v19,
            (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      v27 = 137;
    }
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_39;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_39:
      v25 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v13);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v25)(v8, *(_QWORD *)(v25 + 8));
    return v27 == 137;
  }
  else
  {
    v26 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    UserCommandCodeNewManager__ClearSaveDataList((const MethodInfo *)v26);
    return 0;
  }
}


void __fastcall UserCommandCodeNewManager__SetOld(int64_t userCmdCodeId, const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v6; // w8
  __int64 v7; // x22
  struct System_Collections_Generic_List_long__o *v8; // x23

  if ( (byte_42B14C9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14C9 = 1;
  }
  v3 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v3 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_23;
  size = oldList->fields._size;
  v6 = (BYTE3(v3->vtable._0_Equals.methodPtr) >> 2) & 1;
  if ( size >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( (v6 & 1) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = UserCommandCodeNewManager_TypeInfo;
      }
      v8 = v3->static_fields->oldList;
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( v8->fields._items->m_Items[v7] == userCmdCodeId )
        return;
      v3 = UserCommandCodeNewManager_TypeInfo;
      ++v7;
      v6 = (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v7 >= size )
        goto LABEL_17;
    }
LABEL_23:
    sub_B52A5C(v3, method);
  }
LABEL_17:
  if ( v6 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserCommandCodeNewManager_TypeInfo;
    }
  }
  v3 = (UserCommandCodeNewManager_c *)v3->static_fields->oldList;
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_long___Add(
    (System_Collections_Generic_List_long__o *)v3,
    userCmdCodeId,
    (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
  UserCommandCodeNewManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall UserCommandCodeNewManager__WriteData(const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v1; // x0
  struct UserCommandCodeNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  UserCommandCodeNewManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  UserCommandCodeNewManager_c *v12; // x0
  struct UserCommandCodeNewManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  signed __int64 size; // x20
  __int64 v16; // x1
  __int64 v17; // x3
  unsigned __int64 i; // x22
  UserCommandCodeNewManager_c *v19; // x0
  struct System_Collections_Generic_List_long__o *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0

  if ( (byte_42B14CB & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&UserCommandCodeNewManager_TypeInfo);
    byte_42B14CB = 1;
  }
  v1 = UserCommandCodeNewManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    v1 = UserCommandCodeNewManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &UserCommandCodeNewManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v7 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
    }
    SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v7);
    v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v10 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40252128(v10, v9, 0LL);
    v12 = UserCommandCodeNewManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
      v12 = UserCommandCodeNewManager_TypeInfo;
    }
    v13 = v12->static_fields;
    oldList = v13->oldList;
    if ( !oldList )
      sub_B52A5C(v12, v11);
    if ( !v10 )
      sub_B52A5C(v12, v11);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
      v10,
      v13->SAVE_DATA_VERSION,
      v10->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
      v10,
      UserCommandCodeNewManager_TypeInfo->static_fields->isContinueDevice,
      v10->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
      v10,
      (unsigned int)size,
      v10->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v19 = UserCommandCodeNewManager_TypeInfo;
        if ( (BYTE3(UserCommandCodeNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
          v19 = UserCommandCodeNewManager_TypeInfo;
        }
        v20 = v19->static_fields->oldList;
        if ( !v20 )
          sub_B52A5C(v19, v16);
        if ( i >= (unsigned int)v20->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v10->klass->vtable._19_Write.method)(
          v10,
          v20->fields._items->m_Items[i],
          v10->klass->vtable._20_Write.methodPtr);
      }
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
          goto LABEL_36;
      }
      v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v24 = sub_AEB880(v10, System_IDisposable_TypeInfo, 0LL, v17);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v10, *(_QWORD *)(v24 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserCommandCodeNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42B14C2 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42B14C2 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(9, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}