void __fastcall UserServantLockManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  System_Collections_Generic_List_long__o *v9; // x19
  struct UserServantLockManager_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4357B80 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&UserServantLockManager_TypeInfo);
    sub_B70694(&StringLiteral_6704/*"Fgo_20150511"*/);
    byte_4357B80 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserServantLockManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6704/*"Fgo_20150511"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6704/*"Fgo_20150511"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  v10 = UserServantLockManager_TypeInfo->static_fields;
  v10->lockList = v9;
  sub_B70630((BattleServantConfConponent_o *)&v10->lockList, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
}


void __fastcall UserServantLockManager___ctor(UserServantLockManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantLockManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantLockManager_c *v2; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8

  if ( (byte_4357B7C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&UserServantLockManager_TypeInfo);
    byte_4357B7C = 1;
  }
  v2 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v2 = UserServantLockManager_TypeInfo;
  }
  lockList = v2->static_fields->lockList;
  if ( !lockList )
    goto LABEL_13;
  if ( lockList->fields._size < 1 )
    return;
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    lockList = UserServantLockManager_TypeInfo->static_fields->lockList;
    if ( !lockList )
LABEL_13:
      sub_B7076C(v2, v1);
  }
  System_Collections_Generic_List_long___Clear(
    lockList,
    (const MethodInfo_30BC594 *)Method_System_Collections_Generic_List_long__Clear__);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserServantLockManager__DeleteSaveData(const MethodInfo *method)
{
  UserServantLockManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4357B7B & 1) == 0 )
  {
    sub_B70694(&UserServantLockManager_TypeInfo);
    byte_4357B7B = 1;
  }
  v1 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Int64_array *__fastcall UserServantLockManager__GetLockList(const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_long__o *v4; // x20
  struct System_String_array *items; // x8
  signed __int64 max_length; // x23
  unsigned __int64 v7; // x24
  struct System_String_array *v8; // x21
  int64_t v9; // x21

  if ( (byte_4357B7F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B70694(&System_Collections_Generic_List_long__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&UserServantLockManager_TypeInfo);
    byte_4357B7F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v4 = (System_Collections_Generic_List_long__o *)sub_B70764(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_30BB42C *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (DataManager_o *)UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    Instance = (DataManager_o *)UserServantLockManager_TypeInfo;
  }
  items = Instance[1].fields.saveNameList->fields._items;
  if ( !items )
    goto LABEL_24;
  max_length = (int)items->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)UserServantLockManager_TypeInfo;
      }
      v8 = Instance[1].fields.saveNameList->fields._items;
      if ( !v8 )
        break;
      if ( v7 >= v8->max_length )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v9 = (int64_t)v8->bounds[v7 + 4];
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v9,
                                    (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Instance )
      {
        if ( !v4 )
          break;
        System_Collections_Generic_List_long___Add(
          v4,
          v9,
          (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v7 >= max_length )
        goto LABEL_22;
      Instance = (DataManager_o *)UserServantLockManager_TypeInfo;
    }
LABEL_24:
    sub_B7076C(Instance, v2);
  }
LABEL_22:
  if ( !v4 )
    goto LABEL_24;
  return System_Collections_Generic_List_long___ToArray(
           v4,
           (const MethodInfo_30BE294 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_String_o *__fastcall UserServantLockManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4357B7A & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_4357B7A = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(6, 0LL);
  return System_String__Concat_44760452(DatFileSavePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


void __fastcall UserServantLockManager__Initialize(const MethodInfo *method)
{
  ;
}


bool __fastcall UserServantLockManager__IsLock(int64_t userSvtId, const MethodInfo *method)
{
  UserServantLockManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v7; // x23

  if ( (byte_4357B7D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B70694(&UserServantLockManager_TypeInfo);
    byte_4357B7D = 1;
  }
  v3 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v3 = UserServantLockManager_TypeInfo;
  }
  lockList = v3->static_fields->lockList;
  if ( !lockList )
LABEL_20:
    sub_B7076C(v3, method);
  size = lockList->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserServantLockManager_TypeInfo;
    }
    v7 = v3->static_fields->lockList;
    if ( !v7 )
      goto LABEL_20;
    if ( v7->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    if ( v7->fields._items->m_Items[i] == userSvtId )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v3 = UserServantLockManager_TypeInfo;
  }
  return 1;
}


bool __fastcall UserServantLockManager__ReadData(const MethodInfo *method)
{
  UserServantLockManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserServantLockManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserServantLockManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  UserServantLockManager_c *v12; // x0
  int v13; // w20
  int i; // w23
  __int64 v15; // x1
  int64_t v16; // x21
  UserServantLockManager_c *v17; // x0
  System_Collections_Generic_List_long__o *lockList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  UserServantLockManager_c *v23; // x0
  int v24; // [xsp+8h] [xbp-48h]

  if ( (byte_4357B7E & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_long__Add__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&UserServantLockManager_TypeInfo);
    byte_4357B7E = 1;
  }
  v1 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v1 = UserServantLockManager_TypeInfo;
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
  v4 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v6 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    }
    UserServantLockManager__ClearSaveDataList((const MethodInfo *)v6);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B7076C(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    v12 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      v12 = UserServantLockManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
    {
      v24 = 141;
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
              v8,
              v8->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v13 >= 1 )
      {
        for ( i = 0; i < v13; ++i )
        {
          v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._17_ReadInt64.method)(
                  v8,
                  v8->klass->vtable._18_ReadUInt64.methodPtr);
          v17 = UserServantLockManager_TypeInfo;
          if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserServantLockManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
            v17 = UserServantLockManager_TypeInfo;
          }
          lockList = v17->static_fields->lockList;
          if ( !lockList )
            sub_B7076C(0LL, v15);
          System_Collections_Generic_List_long___Add(
            lockList,
            v16,
            (const MethodInfo_30BC188 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      v24 = 126;
    }
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v22 = sub_B08590(v8, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v22)(v8, *(_QWORD *)(v22 + 8));
    return v24 == 126;
  }
  else
  {
    v23 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    }
    UserServantLockManager__ClearSaveDataList((const MethodInfo *)v23);
    return 0;
  }
}