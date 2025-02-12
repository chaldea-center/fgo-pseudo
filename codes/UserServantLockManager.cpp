void __fastcall UserServantLockManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x19
  struct UserServantLockManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BC8DD7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v1);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1C1ABD4(&UserServantLockManager_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_6793/*"Fgo_20150511"*/, v10);
    byte_4BC8DD7 = 1;
  }
  UserServantLockManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6793/*"Fgo_20150511"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)UserServantLockManager_TypeInfo->static_fields,
    StringLiteral_6793/*"Fgo_20150511"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 0;
  v11 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = UserServantLockManager_TypeInfo->static_fields;
  static_fields->lockList = v11;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->lockList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
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
  struct UserServantLockManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_long__o *lockList; // x9
  int v7; // w10

  if ( (byte_4BC8DD3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Clear__, v1);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v2);
    sub_1C1ABD4(&UserServantLockManager_TypeInfo, v3);
    byte_4BC8DD3 = 1;
  }
  v4 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v4 = UserServantLockManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  lockList = static_fields->lockList;
  if ( !lockList )
    goto LABEL_11;
  if ( lockList->fields._size < 1 )
    return;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    static_fields = UserServantLockManager_TypeInfo->static_fields;
    lockList = static_fields->lockList;
    if ( !lockList )
LABEL_11:
      sub_1C1AE30(v4, v1);
  }
  v7 = lockList->fields._version + 1;
  lockList->fields._size = 0;
  lockList->fields._version = v7;
  static_fields->isModfiy = 1;
}


void __fastcall UserServantLockManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantLockManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4BC8DD2 & 1) == 0 )
  {
    sub_1C1ABD4(&UserServantLockManager_TypeInfo, v1);
    byte_4BC8DD2 = 1;
  }
  v2 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
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
  int64_t Instance; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_long__o *v14; // x19
  __int64 v15; // x8
  int v16; // w8
  int v17; // w24
  int32_t i; // w21
  int64_t v19; // x22
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_4BC8DD6 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v2);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__ToArray__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Item__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1C1ABD4(&UserServantLockManager_TypeInfo, v10);
    byte_4BC8DD6 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v14 = (System_Collections_Generic_List_long__o *)sub_1C1AE20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3624070 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (int64_t)UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    Instance = (int64_t)UserServantLockManager_TypeInfo;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v15 )
    goto LABEL_23;
  v16 = *(_DWORD *)(v15 + 24);
  v17 = v16 - 1;
  if ( v16 >= 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (int64_t)UserServantLockManager_TypeInfo;
      }
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 16LL);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)Instance,
                   i,
                   (const MethodInfo_36245D4 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !MasterData_object )
        break;
      v19 = Instance;
      Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            Instance,
                            (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Instance )
      {
        if ( !v14 )
          break;
        items = v14->fields._items;
        v21 = Method_System_Collections_Generic_List_long__Add__;
        ++v14->fields._version;
        if ( !items )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v14,
            v19,
            *(const MethodInfo_36248C4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          items->m_Items[size] = v19;
        }
      }
      if ( v17 == i )
        goto LABEL_21;
      Instance = (int64_t)UserServantLockManager_TypeInfo;
    }
LABEL_23:
    sub_1C1AE30(Instance, v12);
  }
LABEL_21:
  if ( !v14 )
    goto LABEL_23;
  return System_Collections_Generic_List_long___ToArray(
           v14,
           (const MethodInfo_362637C *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_String_o *__fastcall UserServantLockManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BC8DD1 & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidUtil_TypeInfo, v1);
    sub_1C1ABD4(&DatFileName_TypeInfo, v2);
    sub_1C1ABD4(&StringLiteral_1123/*"/"*/, v3);
    byte_4BC8DD1 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(6, 0LL);
  return System_String__Concat_63051628(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
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
  int v8; // w24
  bool v9; // w23

  if ( (byte_4BC8DD4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_1C1ABD4(&UserServantLockManager_TypeInfo, v4);
    byte_4BC8DD4 = 1;
  }
  v5 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v5 = UserServantLockManager_TypeInfo;
  }
  lockList = v5->static_fields->lockList;
  if ( !lockList )
    goto LABEL_16;
  size = lockList->fields._size;
  if ( size >= 1 )
  {
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = UserServantLockManager_TypeInfo;
      }
      v5 = (UserServantLockManager_c *)v5->static_fields->lockList;
      if ( !v5 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v5,
             v8 - 1,
             (const MethodInfo_36245D4 *)Method_System_Collections_Generic_List_long__get_Item__) == userSvtId )
        return v9;
      v9 = v8 < size;
      if ( size == v8 )
        return v9;
      v5 = UserServantLockManager_TypeInfo;
      ++v8;
    }
LABEL_16:
    sub_1C1AE30(v5, method);
  }
  return 0;
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
  int v18; // w21
  int v19; // w20
  __int64 v20; // x1
  int64_t v21; // x21
  UserServantLockManager_c *v22; // x0
  System_Collections_Generic_List_long__o *lockList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  UserServantLockManager_c *v31; // x0

  if ( (byte_4BC8DD5 & 1) == 0 )
  {
    sub_1C1ABD4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v2);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_1C1ABD4(&ManagerConfig_TypeInfo, v4);
    sub_1C1ABD4(&UserServantLockManager_TypeInfo, v5);
    byte_4BC8DD5 = 1;
  }
  v6 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v6 = UserServantLockManager_TypeInfo;
  }
  v6->static_fields->isModfiy = 0;
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    v9 = UserServantLockManager_TypeInfo;
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v9);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v11 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      UserServantLockManager__ClearSaveDataList((const MethodInfo *)v11);
      v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v13 = (System_IO_BinaryReader_o *)sub_1C1AE20(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v13, v12, 0LL);
      if ( !v13 )
        sub_1C1AE30(v14, v15);
      v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                                 v13,
                                 v13->klass->vtable._23_ReadChars.methodPtr);
      v17 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
        v17 = UserServantLockManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
      {
        v18 = 5;
      }
      else
      {
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v19 >= 1 )
        {
          do
          {
            v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._17_ReadInt64.method)(
                    v13,
                    v13->klass->vtable._18_ReadUInt64.methodPtr);
            v22 = UserServantLockManager_TypeInfo;
            if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
              v22 = UserServantLockManager_TypeInfo;
            }
            lockList = v22->static_fields->lockList;
            if ( !lockList )
              sub_1C1AE30(0LL, v20);
            items = lockList->fields._items;
            v25 = Method_System_Collections_Generic_List_long__Add__;
            ++lockList->fields._version;
            if ( !items )
              sub_1C1AE30(lockList, v20);
            size = lockList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                lockList,
                v21,
                *(const MethodInfo_36248C4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              lockList->fields._size = size + 1;
              items->m_Items[size] = v21;
            }
            --v19;
          }
          while ( v19 );
        }
        v18 = 8;
      }
      klass = v13->klass;
      v28 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_33;
        }
        v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_33:
        v30 = sub_1C6CBB4(v13, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v30)(v13, *(_QWORD *)(v30 + 8));
      if ( (v18 | 8) == 8 )
        return 1;
    }
    else
    {
      v31 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      UserServantLockManager__ClearSaveDataList((const MethodInfo *)v31);
    }
    return 0;
  }
  return 1;
}