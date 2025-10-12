void UserServantLockManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_long__o *v3; // x19
  struct UserServantLockManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C38E76 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&UserServantLockManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6668/*"Fgo_20150511"*/);
    byte_4C38E76 = 1;
  }
  UserServantLockManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6668/*"Fgo_20150511"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)UserServantLockManager_TypeInfo->static_fields, StringLiteral_6668/*"Fgo_20150511"*/, v1, v2);
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = UserServantLockManager_TypeInfo->static_fields;
  static_fields->lockList = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->lockList, (int32_t)v3, v5, v6);
}


void UserServantLockManager___ctor(UserServantLockManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserServantLockManager__ClearSaveDataList(const MethodInfo *method)
{
  UserServantLockManager_c *v1; // x0
  struct UserServantLockManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_long__o *lockList; // x9
  int v4; // w10

  if ( (byte_4C38E72 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&UserServantLockManager_TypeInfo);
    byte_4C38E72 = 1;
  }
  v1 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v1 = UserServantLockManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  lockList = static_fields->lockList;
  if ( !lockList )
    goto LABEL_11;
  if ( lockList->fields._size < 1 )
    return;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = UserServantLockManager_TypeInfo->static_fields;
    lockList = static_fields->lockList;
    if ( !lockList )
LABEL_11:
      sub_1C32E7C(v1);
  }
  v4 = lockList->fields._version + 1;
  lockList->fields._size = 0;
  lockList->fields._version = v4;
  static_fields->isModfiy = 1;
}


void UserServantLockManager__DeleteSaveData(const MethodInfo *method)
{
  UserServantLockManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C38E71 & 1) == 0 )
  {
    sub_1C32C20(&UserServantLockManager_TypeInfo);
    byte_4C38E71 = 1;
  }
  v1 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


System_Int64_array *UserServantLockManager__GetLockList(const MethodInfo *method)
{
  int64_t Instance; // x0
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_long__o *v3; // x19
  __int64 v4; // x8
  int v5; // w8
  int v6; // w24
  int32_t i; // w21
  int64_t v8; // x22
  struct System_Int64_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10

  if ( (byte_4C38E75 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UserServantLockManager_TypeInfo);
    byte_4C38E75 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v3 = (System_Collections_Generic_List_long__o *)sub_1C32E6C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_377FF9C *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (int64_t)UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    Instance = (int64_t)UserServantLockManager_TypeInfo;
  }
  v4 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v4 )
    goto LABEL_23;
  v5 = *(_DWORD *)(v4 + 24);
  v6 = v5 - 1;
  if ( v5 >= 1 )
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
                   (const MethodInfo_3780500 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !MasterData_object )
        break;
      v8 = Instance;
      Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            Instance,
                            (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Instance )
      {
        if ( !v3 )
          break;
        items = v3->fields._items;
        v10 = Method_System_Collections_Generic_List_long__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v3,
            v8,
            *(const MethodInfo_37807F0 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v8;
        }
      }
      if ( v6 == i )
        goto LABEL_21;
      Instance = (int64_t)UserServantLockManager_TypeInfo;
    }
LABEL_23:
    sub_1C32E7C(Instance);
  }
LABEL_21:
  if ( !v3 )
    goto LABEL_23;
  return System_Collections_Generic_List_long___ToArray(
           v3,
           (const MethodInfo_37822A8 *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_String_o *UserServantLockManager__GetSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C38E70 & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C38E70 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(6, 0);
  return System_String__Concat_63556792(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void UserServantLockManager__Initialize(const MethodInfo *method)
{
  ;
}


bool UserServantLockManager__IsLock(int64_t userSvtId, const MethodInfo *method)
{
  UserServantLockManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *lockList; // x8
  int size; // w21
  int v6; // w24
  bool v7; // w23

  if ( (byte_4C38E73 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C32C20(&UserServantLockManager_TypeInfo);
    byte_4C38E73 = 1;
  }
  v3 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v3 = UserServantLockManager_TypeInfo;
  }
  lockList = v3->static_fields->lockList;
  if ( !lockList )
    goto LABEL_16;
  size = lockList->fields._size;
  if ( size >= 1 )
  {
    v6 = 1;
    v7 = 1;
    while ( 1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = UserServantLockManager_TypeInfo;
      }
      v3 = (UserServantLockManager_c *)v3->static_fields->lockList;
      if ( !v3 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v3,
             v6 - 1,
             (const MethodInfo_3780500 *)Method_System_Collections_Generic_List_long__get_Item__) == userSvtId )
        return v7;
      v7 = v6 < size;
      if ( size == v6 )
        return v7;
      v3 = UserServantLockManager_TypeInfo;
      ++v6;
    }
LABEL_16:
    sub_1C32E7C(v3);
  }
  return 0;
}


bool UserServantLockManager__ReadData(const MethodInfo *method)
{
  UserServantLockManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserServantLockManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserServantLockManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  System_String_o *v10; // x20
  UserServantLockManager_c *v11; // x0
  int v12; // w21
  int v13; // w20
  int64_t v14; // x21
  UserServantLockManager_c *v15; // x0
  System_Collections_Generic_List_long__o *lockList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  UserServantLockManager_c *v24; // x0

  if ( (byte_4C38E74 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryReader_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&UserServantLockManager_TypeInfo);
    byte_4C38E74 = 1;
  }
  v1 = UserServantLockManager_TypeInfo;
  if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    v1 = UserServantLockManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( !v2->static_fields->UseMock )
  {
    v4 = UserServantLockManager_TypeInfo;
    if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
    SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v4);
    if ( System_IO_File__Exists(SaveFileName, 0) )
    {
      v6 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      UserServantLockManager__ClearSaveDataList((const MethodInfo *)v6);
      v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
      v8 = (System_IO_BinaryReader_o *)sub_1C32E6C(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v8, v7, 0);
      if ( !v8 )
        sub_1C32E7C(v9);
      v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                                 v8,
                                 v8->klass->vtable._22_ReadString.method);
      v11 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
        v11 = UserServantLockManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
      {
        v12 = 5;
      }
      else
      {
        v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v13 >= 1 )
        {
          do
          {
            v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._17_ReadInt64.methodPtr)(
                    v8,
                    v8->klass->vtable._17_ReadInt64.method);
            v15 = UserServantLockManager_TypeInfo;
            if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
              v15 = UserServantLockManager_TypeInfo;
            }
            lockList = v15->static_fields->lockList;
            if ( !lockList )
              sub_1C32E7C(0);
            items = lockList->fields._items;
            v18 = Method_System_Collections_Generic_List_long__Add__;
            ++lockList->fields._version;
            if ( !items )
              sub_1C32E7C(lockList);
            size = lockList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                lockList,
                v14,
                *(const MethodInfo_37807F0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              lockList->fields._size = size + 1;
              items->m_Items[size] = v14;
            }
            --v13;
          }
          while ( v13 );
        }
        v12 = 8;
      }
      klass = v8->klass;
      v21 = *(unsigned __int16 *)&v8->klass->_2.rank;
      if ( *(_WORD *)&v8->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v21;
          p_offset += 4;
          if ( !v21 )
            goto LABEL_33;
        }
        v23 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_33:
        v23 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v23)(v8, *(_QWORD *)(v23 + 8));
      if ( (v12 | 8) == 8 )
        return 1;
    }
    else
    {
      v24 = UserServantLockManager_TypeInfo;
      if ( !UserServantLockManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo);
      UserServantLockManager__ClearSaveDataList((const MethodInfo *)v24);
    }
    return 0;
  }
  return 1;
}