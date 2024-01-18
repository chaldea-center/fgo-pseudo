void __fastcall UserServantLockManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_List_long__o *v13; // x19
  struct UserServantLockManager_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418D234 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B2C35C(&UserServantLockManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6612/*"Fgo_20150511"*/, v10);
    byte_418D234 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserServantLockManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6612/*"Fgo_20150511"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6612/*"Fgo_20150511"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 0;
  v13 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v14 = UserServantLockManager_TypeInfo->static_fields;
  v14->lockList = v13;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->lockList, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
}


void __fastcall UserServantLockManager___ctor(UserServantLockManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantLockManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserServantLockManager_c *v4; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8

  if ( (byte_418D230 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v2);
    sub_B2C35C(&UserServantLockManager_TypeInfo, v3);
    byte_418D230 = 1;
  }
  v4 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v4 = UserServantLockManager_TypeInfo;
  }
  lockList = v4->static_fields->lockList;
  if ( !lockList )
    goto LABEL_13;
  if ( lockList->fields._size < 1 )
    return;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    lockList = UserServantLockManager_TypeInfo->static_fields->lockList;
    if ( !lockList )
LABEL_13:
      sub_B2C434(v4, v1);
  }
  System_Collections_Generic_List_long___Clear(
    lockList,
    (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserServantLockManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantLockManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_418D22F & 1) == 0 )
  {
    sub_B2C35C(&UserServantLockManager_TypeInfo, v1);
    byte_418D22F = 1;
  }
  v2 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Int64_array *__fastcall UserServantLockManager__GetLockList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_long__o *v14; // x20
  struct System_String_array *items; // x8
  signed __int64 max_length; // x23
  unsigned __int64 v17; // x24
  struct System_String_array *v18; // x21
  int64_t v19; // x21

  if ( (byte_418D233 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&UserServantLockManager_TypeInfo, v10);
    byte_418D233 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
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
    v17 = 0LL;
    while ( 1 )
    {
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)UserServantLockManager_TypeInfo;
      }
      v18 = Instance[1].fields.saveNameList->fields._items;
      if ( !v18 )
        break;
      if ( v17 >= v18->max_length )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v19 = (int64_t)v18->bounds[v17 + 4];
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v19,
                                    (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Instance )
      {
        if ( !v14 )
          break;
        System_Collections_Generic_List_long___Add(
          v14,
          v19,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v17 >= max_length )
        goto LABEL_22;
      Instance = (DataManager_o *)UserServantLockManager_TypeInfo;
    }
LABEL_24:
    sub_B2C434(Instance, v12);
  }
LABEL_22:
  if ( !v14 )
    goto LABEL_24;
  return System_Collections_Generic_List_long___ToArray(
           v14,
           (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_String_o *__fastcall UserServantLockManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_418D22E & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_418D22E = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(6, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall UserServantLockManager__Initialize(const MethodInfo *method)
{
  ;
}


bool __fastcall UserServantLockManager__IsLock(int64_t userSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserServantLockManager_c *v5; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v9; // x23

  if ( (byte_418D231 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_B2C35C(&UserServantLockManager_TypeInfo, v4);
    byte_418D231 = 1;
  }
  v5 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v5 = UserServantLockManager_TypeInfo;
  }
  lockList = v5->static_fields->lockList;
  if ( !lockList )
LABEL_20:
    sub_B2C434(v5, method);
  size = lockList->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = UserServantLockManager_TypeInfo;
    }
    v9 = v5->static_fields->lockList;
    if ( !v9 )
      goto LABEL_20;
    if ( v9->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    if ( v9->fields._items->m_Items[i] == userSvtId )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v5 = UserServantLockManager_TypeInfo;
  }
  return 1;
}


bool __fastcall UserServantLockManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantLockManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  UserServantLockManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  UserServantLockManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  UserServantLockManager_c *v17; // x0
  __int64 v18; // x3
  int v19; // w20
  int i; // w23
  __int64 v21; // x1
  int64_t v22; // x21
  UserServantLockManager_c *v23; // x0
  System_Collections_Generic_List_long__o *lockList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  UserServantLockManager_c *v29; // x0
  int v30; // [xsp+8h] [xbp-48h]

  if ( (byte_418D232 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&UserServantLockManager_TypeInfo, v5);
    byte_418D232 = 1;
  }
  v6 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v6 = UserServantLockManager_TypeInfo;
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
  v9 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v9);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v11 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    }
    UserServantLockManager__ClearSaveDataList((const MethodInfo *)v11);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v13 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v13, v12, 0LL);
    if ( !v13 )
      sub_B2C434(v14, v15);
    v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                               v13,
                               v13->klass->vtable._23_ReadChars.methodPtr);
    v17 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      v17 = UserServantLockManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
    {
      v30 = 141;
    }
    else
    {
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
              v13,
              v13->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v19 >= 1 )
      {
        for ( i = 0; i < v19; ++i )
        {
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._17_ReadInt64.method)(
                  v13,
                  v13->klass->vtable._18_ReadUInt64.methodPtr);
          v23 = UserServantLockManager_TypeInfo;
          if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserServantLockManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
            v23 = UserServantLockManager_TypeInfo;
          }
          lockList = v23->static_fields->lockList;
          if ( !lockList )
            sub_B2C434(0LL, v21);
          System_Collections_Generic_List_long___Add(
            lockList,
            v22,
            (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      v30 = 126;
    }
    klass = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v28 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v18);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v13, *(_QWORD *)(v28 + 8));
    return v30 == 126;
  }
  else
  {
    v29 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    }
    UserServantLockManager__ClearSaveDataList((const MethodInfo *)v29);
    return 0;
  }
}