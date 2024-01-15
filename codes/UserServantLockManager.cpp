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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_long__o *v17; // x19
  struct UserServantLockManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40FF6A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B16FFC(&UserServantLockManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6588/*"Fgo_20150511"*/, v10);
    byte_40FF6A7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserServantLockManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6588/*"Fgo_20150511"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6588/*"Fgo_20150511"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v13,
                                                     v14,
                                                     v15,
                                                     v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = UserServantLockManager_TypeInfo->static_fields;
  v18->lockList = v17;
  sub_B16F98((BattleServantConfConponent_o *)&v18->lockList, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_40FF6A3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Clear__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v2);
    sub_B16FFC(&UserServantLockManager_TypeInfo, v3);
    byte_40FF6A3 = 1;
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
      sub_B170D4();
  }
  System_Collections_Generic_List_long___Clear(
    lockList,
    (const MethodInfo_2F168AC *)Method_System_Collections_Generic_List_long__Clear__);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserServantLockManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *SaveFileName; // x19
  UserServantLockManager_c *v3; // x0

  if ( (byte_40FF6A2 & 1) == 0 )
  {
    sub_B16FFC(&UserServantLockManager_TypeInfo, v1);
    byte_40FF6A2 = 1;
  }
  v3 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v3);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_long__o *v17; // x20
  UserServantLockManager_c *v18; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8
  signed __int64 size; // x23
  unsigned __int64 v21; // x24
  struct System_Collections_Generic_List_long__o *v22; // x21
  int64_t v23; // x21

  if ( (byte_40FF6A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__ToArray__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&UserServantLockManager_TypeInfo, v10);
    byte_40FF6A6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v17 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v13,
                                                     v14,
                                                     v15,
                                                     v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  v18 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v18 = UserServantLockManager_TypeInfo;
  }
  lockList = v18->static_fields->lockList;
  if ( !lockList )
    goto LABEL_24;
  size = lockList->fields._size;
  if ( (int)size >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = UserServantLockManager_TypeInfo;
      }
      v22 = v18->static_fields->lockList;
      if ( !v22 )
        break;
      if ( v21 >= (unsigned int)v22->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v23 = v22->fields._items->m_Items[v21];
      if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             v23,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__) )
      {
        if ( !v17 )
          break;
        System_Collections_Generic_List_long___Add(
          v17,
          v23,
          (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v21 >= size )
        goto LABEL_22;
      v18 = UserServantLockManager_TypeInfo;
    }
LABEL_24:
    sub_B170D4();
  }
LABEL_22:
  if ( !v17 )
    goto LABEL_24;
  return System_Collections_Generic_List_long___ToArray(
           v17,
           (const MethodInfo_2F185AC *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_String_o *__fastcall UserServantLockManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40FF6A1 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40FF6A1 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(6, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName, 0LL);
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

  if ( (byte_40FF6A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_B16FFC(&UserServantLockManager_TypeInfo, v4);
    byte_40FF6A4 = 1;
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
    sub_B170D4();
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_IO_BinaryReader_o *v17; // x19
  System_String_o *v18; // x20
  UserServantLockManager_c *v19; // x0
  int v20; // w20
  int i; // w23
  int64_t v22; // x21
  UserServantLockManager_c *v23; // x0
  System_Collections_Generic_List_long__o *lockList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  UserServantLockManager_c *v29; // x0
  int v30; // [xsp+8h] [xbp-48h]

  if ( (byte_40FF6A5 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&UserServantLockManager_TypeInfo, v5);
    byte_40FF6A5 = 1;
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
    v17 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v13, v14, v15, v16);
    System_IO_BinaryReader___ctor(v17, v12, 0LL);
    if ( !v17 )
      sub_B170D4();
    v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._22_ReadString.method)(
                               v17,
                               v17->klass->vtable._23_ReadChars.methodPtr);
    v19 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      v19 = UserServantLockManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
    {
      v30 = 141;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._15_ReadInt32.method)(
              v17,
              v17->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v20 >= 1 )
      {
        for ( i = 0; i < v20; ++i )
        {
          v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v17->klass->vtable._17_ReadInt64.method)(
                  v17,
                  v17->klass->vtable._18_ReadUInt64.methodPtr);
          v23 = UserServantLockManager_TypeInfo;
          if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserServantLockManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
            v23 = UserServantLockManager_TypeInfo;
          }
          lockList = v23->static_fields->lockList;
          if ( !lockList )
            sub_B170D4();
          System_Collections_Generic_List_long___Add(
            lockList,
            v22,
            (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      v30 = 126;
    }
    klass = v17->klass;
    if ( *(_WORD *)&v17->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v28 = sub_AAFEF8(v17, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v17, *(_QWORD *)(v28 + 8));
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