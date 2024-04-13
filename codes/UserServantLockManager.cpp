void __fastcall UserServantLockManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_List_long__o *v19; // x19
  struct UserServantLockManager_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42EE66C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserServantLockManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6691/*"Fgo_20150511"*/, v14, v15, v16);
    byte_42EE66C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserServantLockManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6691/*"Fgo_20150511"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6691/*"Fgo_20150511"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 0;
  v19 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v19,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  v20 = UserServantLockManager_TypeInfo->static_fields;
  v20->lockList = v19;
  sub_B5D560((BattleServantConfConponent_o *)&v20->lockList, (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
}


void __fastcall UserServantLockManager___ctor(UserServantLockManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantLockManager__ClearSaveDataList(const MethodInfo *method)
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
  UserServantLockManager_c *v10; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8

  if ( (byte_42EE668 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Clear__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v4, v5, v6);
    sub_B5D5C4(&UserServantLockManager_TypeInfo, v7, v8, v9);
    byte_42EE668 = 1;
  }
  v10 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v10 = UserServantLockManager_TypeInfo;
  }
  lockList = v10->static_fields->lockList;
  if ( !lockList )
    goto LABEL_13;
  if ( lockList->fields._size < 1 )
    return;
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    lockList = UserServantLockManager_TypeInfo->static_fields->lockList;
    if ( !lockList )
LABEL_13:
      sub_B5D69C(v10, v1);
  }
  System_Collections_Generic_List_long___Clear(
    lockList,
    (const MethodInfo_3047B94 *)Method_System_Collections_Generic_List_long__Clear__);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserServantLockManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserServantLockManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42EE667 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantLockManager_TypeInfo, v1, v2, v3);
    byte_42EE667 = 1;
  }
  v4 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Int64_array *__fastcall UserServantLockManager__GetLockList(const MethodInfo *method)
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  DataManager_o *Instance; // x0
  __int64 v32; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x19
  System_Collections_Generic_List_long__o *v34; // x20
  struct System_String_array *items; // x8
  signed __int64 max_length; // x23
  unsigned __int64 v37; // x24
  struct System_String_array *v38; // x21
  int64_t v39; // x21

  if ( (byte_42EE66B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__ToArray__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26, v27);
    sub_B5D5C4(&UserServantLockManager_TypeInfo, v28, v29, v30);
    byte_42EE66B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(Instance, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v34 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v34,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
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
    v37 = 0LL;
    while ( 1 )
    {
      if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (DataManager_o *)UserServantLockManager_TypeInfo;
      }
      v38 = Instance[1].fields.saveNameList->fields._items;
      if ( !v38 )
        break;
      if ( v37 >= v38->max_length )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      v39 = (int64_t)v38->bounds[v37 + 4];
      Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    v39,
                                    (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Instance )
      {
        if ( !v34 )
          break;
        System_Collections_Generic_List_long___Add(
          v34,
          v39,
          (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      }
      if ( (__int64)++v37 >= max_length )
        goto LABEL_22;
      Instance = (DataManager_o *)UserServantLockManager_TypeInfo;
    }
LABEL_24:
    sub_B5D69C(Instance, v32);
  }
LABEL_22:
  if ( !v34 )
    goto LABEL_24;
  return System_Collections_Generic_List_long___ToArray(
           v34,
           (const MethodInfo_3049894 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_String_o *__fastcall UserServantLockManager__GetSaveFileName(const MethodInfo *method)
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

  if ( (byte_42EE666 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EE666 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(6, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall UserServantLockManager__Initialize(const MethodInfo *method)
{
  ;
}


bool __fastcall UserServantLockManager__IsLock(int64_t userSvtId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UserServantLockManager_c *v11; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v15; // x23

  if ( (byte_42EE669 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UserServantLockManager_TypeInfo, v8, v9, v10);
    byte_42EE669 = 1;
  }
  v11 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v11 = UserServantLockManager_TypeInfo;
  }
  lockList = v11->static_fields->lockList;
  if ( !lockList )
LABEL_20:
    sub_B5D69C(v11, method);
  size = lockList->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = UserServantLockManager_TypeInfo;
    }
    v15 = v11->static_fields->lockList;
    if ( !v15 )
      goto LABEL_20;
    if ( v15->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    if ( v15->fields._items->m_Items[i] == userSvtId )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v11 = UserServantLockManager_TypeInfo;
  }
  return 1;
}


bool __fastcall UserServantLockManager__ReadData(const MethodInfo *method)
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
  UserServantLockManager_c *v16; // x0
  ManagerConfig_c *v17; // x0
  UserServantLockManager_c *v19; // x0
  System_String_o *SaveFileName; // x19
  UserServantLockManager_c *v21; // x0
  System_IO_Stream_o *v22; // x20
  System_IO_BinaryReader_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x20
  UserServantLockManager_c *v27; // x0
  __int64 v28; // x3
  int v29; // w20
  int i; // w23
  __int64 v31; // x1
  int64_t v32; // x21
  UserServantLockManager_c *v33; // x0
  System_Collections_Generic_List_long__o *lockList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  UserServantLockManager_c *v39; // x0
  int v40; // [xsp+8h] [xbp-48h]

  if ( (byte_42EE66A & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v7, v8, v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserServantLockManager_TypeInfo, v13, v14, v15);
    byte_42EE66A = 1;
  }
  v16 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v16 = UserServantLockManager_TypeInfo;
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
  v19 = UserServantLockManager_TypeInfo;
  if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  }
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v19);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v21 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    }
    UserServantLockManager__ClearSaveDataList((const MethodInfo *)v21);
    v22 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v23 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v23, v22, 0LL);
    if ( !v23 )
      sub_B5D69C(v24, v25);
    v26 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._22_ReadString.method)(
                               v23,
                               v23->klass->vtable._23_ReadChars.methodPtr);
    v27 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      v27 = UserServantLockManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v27->static_fields->SAVE_DATA_VERSION, v26, 0LL) )
    {
      v40 = 141;
    }
    else
    {
      v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._15_ReadInt32.method)(
              v23,
              v23->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v29 >= 1 )
      {
        for ( i = 0; i < v29; ++i )
        {
          v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v23->klass->vtable._17_ReadInt64.method)(
                  v23,
                  v23->klass->vtable._18_ReadUInt64.methodPtr);
          v33 = UserServantLockManager_TypeInfo;
          if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserServantLockManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
            v33 = UserServantLockManager_TypeInfo;
          }
          lockList = v33->static_fields->lockList;
          if ( !lockList )
            sub_B5D69C(0LL, v31);
          System_Collections_Generic_List_long___Add(
            lockList,
            v32,
            (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      v40 = 126;
    }
    klass = v23->klass;
    if ( *(_WORD *)&v23->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v38 = sub_AF54C0(v23, System_IDisposable_TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v38)(v23, *(_QWORD *)(v38 + 8));
    return v40 == 126;
  }
  else
  {
    v39 = UserServantLockManager_TypeInfo;
    if ( (BYTE3(UserServantLockManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantLockManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    }
    UserServantLockManager__ClearSaveDataList((const MethodInfo *)v39);
    return 0;
  }
}