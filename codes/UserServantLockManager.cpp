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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_long__o *v17; // x19
  struct UserServantLockManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B174B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v8, v9);
    sub_1BCA7E0(&UserServantLockManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6753/*"Fgo_20150511"*/, v12, v13);
    byte_4B174B9 = 1;
  }
  UserServantLockManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6753/*"Fgo_20150511"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserServantLockManager_TypeInfo->static_fields,
    StringLiteral_6753/*"Fgo_20150511"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v14,
                                                     v15,
                                                     v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = UserServantLockManager_TypeInfo->static_fields;
  static_fields->lockList = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->lockList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall UserServantLockManager___ctor(UserServantLockManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantLockManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  UserServantLockManager_c *v7; // x0
  struct UserServantLockManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_long__o *lockList; // x9
  int v10; // w10

  if ( (byte_4B174B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v3, v4);
    sub_1BCA7E0(&UserServantLockManager_TypeInfo, v5, v6);
    byte_4B174B5 = 1;
  }
  v7 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v1);
    v7 = UserServantLockManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  lockList = static_fields->lockList;
  if ( !lockList )
    goto LABEL_11;
  if ( lockList->fields._size < 1 )
    return;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    static_fields = UserServantLockManager_TypeInfo->static_fields;
    lockList = static_fields->lockList;
    if ( !lockList )
LABEL_11:
      sub_1BCAA3C(v7, v1);
  }
  v10 = lockList->fields._version + 1;
  lockList->fields._size = 0;
  lockList->fields._version = v10;
  static_fields->isModfiy = 1;
}


void __fastcall UserServantLockManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserServantLockManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B174B4 & 1) == 0 )
  {
    sub_1BCA7E0(&UserServantLockManager_TypeInfo, v1, v2);
    byte_4B174B4 = 1;
  }
  v3 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v1);
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


System_Int64_array *__fastcall UserServantLockManager__GetLockList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int64_t Instance; // x0
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_List_long__o *v27; // x19
  __int64 v28; // x8
  int v29; // w8
  int v30; // w24
  int32_t i; // w21
  int64_t v32; // x22
  struct System_Int64_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10

  if ( (byte_4B174B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&UserServantLockManager_TypeInfo, v19, v20);
    byte_4B174B8 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v27 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (int64_t)UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v22);
    Instance = (int64_t)UserServantLockManager_TypeInfo;
  }
  v28 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v28 )
    goto LABEL_23;
  v29 = *(_DWORD *)(v28 + 24);
  v30 = v29 - 1;
  if ( v29 >= 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance, v22);
        Instance = (int64_t)UserServantLockManager_TypeInfo;
      }
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 16LL);
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)Instance,
                   i,
                   (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !MasterData_object )
        break;
      v32 = Instance;
      Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            Instance,
                            (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Instance )
      {
        if ( !v27 )
          break;
        items = v27->fields._items;
        v34 = Method_System_Collections_Generic_List_long__Add__;
        ++v27->fields._version;
        if ( !items )
          break;
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v27,
            v32,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v27->fields._size = size + 1;
          items->m_Items[size] = v32;
        }
      }
      if ( v30 == i )
        goto LABEL_21;
      Instance = (int64_t)UserServantLockManager_TypeInfo;
    }
LABEL_23:
    sub_1BCAA3C(Instance, v22);
  }
LABEL_21:
  if ( !v27 )
    goto LABEL_23;
  return System_Collections_Generic_List_long___ToArray(
           v27,
           (const MethodInfo_358B748 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_String_o *__fastcall UserServantLockManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B174B3 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B174B3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(6, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall UserServantLockManager__Initialize(const MethodInfo *method)
{
  ;
}


bool __fastcall UserServantLockManager__IsLock(int64_t userSvtId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UserServantLockManager_c *v8; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8
  int size; // w21
  int v11; // w24
  bool v12; // w23

  if ( (byte_4B174B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v4, v5);
    sub_1BCA7E0(&UserServantLockManager_TypeInfo, v6, v7);
    byte_4B174B6 = 1;
  }
  v8 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, method);
    v8 = UserServantLockManager_TypeInfo;
  }
  lockList = v8->static_fields->lockList;
  if ( !lockList )
    goto LABEL_16;
  size = lockList->fields._size;
  if ( size >= 1 )
  {
    v11 = 1;
    v12 = 1;
    while ( 1 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8, method);
        v8 = UserServantLockManager_TypeInfo;
      }
      v8 = (UserServantLockManager_c *)v8->static_fields->lockList;
      if ( !v8 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v8,
             v11 - 1,
             (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__) == userSvtId )
        return v12;
      v12 = v11 < size;
      if ( size == v11 )
        return v12;
      v8 = UserServantLockManager_TypeInfo;
      ++v11;
    }
LABEL_16:
    sub_1BCAA3C(v8, method);
  }
  return 0;
}


bool __fastcall UserServantLockManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UserServantLockManager_c *v11; // x0
  ManagerConfig_c *v12; // x0
  UserServantLockManager_c *v14; // x0
  System_String_o *SaveFileName; // x19
  __int64 v16; // x1
  UserServantLockManager_c *v17; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryReader_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_o *v26; // x20
  UserServantLockManager_c *v27; // x0
  int v28; // w21
  int v29; // w20
  __int64 v30; // x1
  int64_t v31; // x21
  UserServantLockManager_c *v32; // x0
  System_Collections_Generic_List_long__o *lockList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  UserServantLockManager_c *v41; // x0

  if ( (byte_4B174B7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserServantLockManager_TypeInfo, v9, v10);
    byte_4B174B7 = 1;
  }
  v11 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v1);
    v11 = UserServantLockManager_TypeInfo;
  }
  v11->static_fields->isModfiy = 0;
  v12 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v12 = ManagerConfig_TypeInfo;
  }
  if ( !v12->static_fields->UseMock )
  {
    v14 = UserServantLockManager_TypeInfo;
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v1);
    SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v14);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v17 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v16);
      UserServantLockManager__ClearSaveDataList((const MethodInfo *)v17);
      v18 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v22 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v19, v20, v21);
      System_IO_BinaryReader___ctor(v22, v18, 0LL);
      if ( !v22 )
        sub_1BCAA3C(v23, v24);
      v26 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._22_ReadString.method)(
                                 v22,
                                 v22->klass->vtable._23_ReadChars.methodPtr);
      v27 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v25);
        v27 = UserServantLockManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v27->static_fields->SAVE_DATA_VERSION, v26, 0LL) )
      {
        v28 = 5;
      }
      else
      {
        v29 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._15_ReadInt32.method)(
                v22,
                v22->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v29 >= 1 )
        {
          do
          {
            v31 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._17_ReadInt64.method)(
                    v22,
                    v22->klass->vtable._18_ReadUInt64.methodPtr);
            v32 = UserServantLockManager_TypeInfo;
            if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v30);
              v32 = UserServantLockManager_TypeInfo;
            }
            lockList = v32->static_fields->lockList;
            if ( !lockList )
              sub_1BCAA3C(0LL, v30);
            items = lockList->fields._items;
            v35 = Method_System_Collections_Generic_List_long__Add__;
            ++lockList->fields._version;
            if ( !items )
              sub_1BCAA3C(lockList, v30);
            size = lockList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                lockList,
                v31,
                *(const MethodInfo_3589C90 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              lockList->fields._size = size + 1;
              items->m_Items[size] = v31;
            }
            --v29;
          }
          while ( v29 );
        }
        v28 = 8;
      }
      klass = v22->klass;
      v38 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v38;
          p_offset += 4;
          if ( !v38 )
            goto LABEL_33;
        }
        v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_33:
        v40 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v40)(v22, *(_QWORD *)(v40 + 8));
      if ( (v28 | 8) == 8 )
        return 1;
    }
    else
    {
      v41 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v16);
      UserServantLockManager__ClearSaveDataList((const MethodInfo *)v41);
    }
    return 0;
  }
  return 1;
}