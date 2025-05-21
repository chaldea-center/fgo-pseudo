void __fastcall UserServantNewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_long__o *v7; // x19
  struct UserServantNewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B45EC0 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long___ctor__, v1);
    sub_1BDB878(&System_Collections_Generic_List_long__TypeInfo, v4);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_6679/*"Fgo_20150511_1"*/, v6);
    byte_4B45EC0 = 1;
  }
  UserServantNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6679/*"Fgo_20150511_1"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)UserServantNewManager_TypeInfo->static_fields, StringLiteral_6679/*"Fgo_20150511_1"*/, v2, v3);
  *(_WORD *)&UserServantNewManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_long__o *)sub_1BDBAC4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_36BD5A4 *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = UserServantNewManager_TypeInfo->static_fields;
  static_fields->oldList = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->oldList, (int32_t)v7, v9, v10);
}


void __fastcall UserServantNewManager___ctor(UserServantNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserServantNewManager_c *v4; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int v6; // w9

  if ( (byte_4B45EB9 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Clear__, v1);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v2);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v3);
    byte_4B45EB9 = 1;
  }
  v4 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v4 = UserServantNewManager_TypeInfo;
  }
  oldList = v4->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserServantNewManager_TypeInfo;
    oldList = UserServantNewManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_1BDBAD4(v4, v1);
  }
  v6 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v6;
LABEL_10:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserServantNewManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall UserServantNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4B45EB7 & 1) == 0 )
  {
    sub_1BDB878(&UserServantNewManager_TypeInfo, v1);
    byte_4B45EB7 = 1;
  }
  v2 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__DeleteSaveData((const MethodInfo *)v2);
  UserServantNewManager__ClearSaveDataList(v3);
  *(_WORD *)&UserServantNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserServantNewManager__WriteData(v4);
}


void __fastcall UserServantNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B45EB6 & 1) == 0 )
  {
    sub_1BDB878(&UserServantNewManager_TypeInfo, v1);
    byte_4B45EB6 = 1;
  }
  v2 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserServantNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantNewManager_c *v2; // x0

  if ( (byte_4B45EB8 & 1) == 0 )
  {
    sub_1BDB878(&UserServantNewManager_TypeInfo, v1);
    byte_4B45EB8 = 1;
  }
  v2 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserServantNewManager__IsNew(int64_t userSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserServantNewManager_c *v5; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v8; // w24
  bool v9; // w23

  if ( (byte_4B45EBB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v4);
    byte_4B45EBB = 1;
  }
  v5 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v5 = UserServantNewManager_TypeInfo;
  }
  oldList = v5->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = UserServantNewManager_TypeInfo;
      }
      v5 = (UserServantNewManager_c *)v5->static_fields->oldList;
      if ( !v5 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v5,
             v8 - 1,
             (const MethodInfo_36BDB08 *)Method_System_Collections_Generic_List_long__get_Item__) == userSvtId )
        return !v9;
      v9 = v8 < size;
      if ( size == v8 )
        return !v9;
      v5 = UserServantNewManager_TypeInfo;
      ++v8;
    }
LABEL_16:
    sub_1BDBAD4(v5, method);
  }
  v9 = 0;
  return !v9;
}


void __fastcall UserServantNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  UserServantNewManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x19
  UserServantStorageMaster_o *v9; // x20
  const MethodInfo *v10; // x0

  if ( (byte_4B45EBA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v1);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v2);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v4);
    byte_4B45EBA = 1;
  }
  v5 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v5 = UserServantNewManager_TypeInfo;
  }
  if ( v5->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantStorageMaster___),
          !MasterData_object)
      || (v9 = (UserServantStorageMaster_o *)Instance,
          UserServantMaster__continueDeviceUserServant((UserServantMaster_o *)MasterData_object, 0LL),
          !v9) )
    {
      sub_1BDBAD4(Instance, v7);
    }
    UserServantStorageMaster__continueDeviceUserServant(v9, 0LL);
    v10 = (const MethodInfo *)UserServantNewManager_TypeInfo;
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v10 = (const MethodInfo *)UserServantNewManager_TypeInfo;
    }
    *((_WORD *)v10[2].virtualMethodPointer + 4) = 1;
    UserServantNewManager__WriteData(v10);
  }
}


bool __fastcall UserServantNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantNewManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  UserServantNewManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  UserServantNewManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  UserServantNewManager_c *v17; // x0
  int v18; // w21
  char v19; // w20
  UserServantNewManager_c *v20; // x0
  int v21; // w20
  __int64 v22; // x1
  int64_t v23; // x21
  UserServantNewManager_c *v24; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  UserServantNewManager_c *v33; // x0

  if ( (byte_4B45EBE & 1) == 0 )
  {
    sub_1BDB878(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1BDB878(&System_IDisposable_TypeInfo, v2);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_1BDB878(&ManagerConfig_TypeInfo, v4);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v5);
    byte_4B45EBE = 1;
  }
  v6 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v6 = UserServantNewManager_TypeInfo;
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
    v9 = UserServantNewManager_TypeInfo;
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v9);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v11 = UserServantNewManager_TypeInfo;
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      UserServantNewManager__ClearSaveDataList((const MethodInfo *)v11);
      v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v13 = (System_IO_BinaryReader_o *)sub_1BDBAC4(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v13, v12, 0LL);
      if ( !v13 )
        sub_1BDBAD4(v14, v15);
      v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                                 v13,
                                 v13->klass->vtable._23_ReadChars.methodPtr);
      v17 = UserServantNewManager_TypeInfo;
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
        v17 = UserServantNewManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
      {
        v18 = 5;
      }
      else
      {
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._9_ReadBoolean.method)(
                v13,
                v13->klass->vtable._10_ReadByte.methodPtr);
        v20 = UserServantNewManager_TypeInfo;
        if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
          v20 = UserServantNewManager_TypeInfo;
        }
        v20->static_fields->isContinueDevice = v19 & 1;
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v21 >= 1 )
        {
          do
          {
            v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._17_ReadInt64.method)(
                    v13,
                    v13->klass->vtable._18_ReadUInt64.methodPtr);
            v24 = UserServantNewManager_TypeInfo;
            if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
              v24 = UserServantNewManager_TypeInfo;
            }
            oldList = v24->static_fields->oldList;
            if ( !oldList )
              sub_1BDBAD4(0LL, v22);
            items = oldList->fields._items;
            v27 = Method_System_Collections_Generic_List_long__Add__;
            ++oldList->fields._version;
            if ( !items )
              sub_1BDBAD4(oldList, v22);
            size = oldList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_long___AddWithResize(
                oldList,
                v23,
                *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              oldList->fields._size = size + 1;
              items->m_Items[size] = v23;
            }
            --v21;
          }
          while ( v21 );
        }
        v18 = 8;
      }
      klass = v13->klass;
      v30 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_35;
        }
        v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_35:
        v32 = sub_1C2C00C(v13, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v13, *(_QWORD *)(v32 + 8));
      if ( (v18 | 8) == 8 )
        return 1;
    }
    else
    {
      v33 = UserServantNewManager_TypeInfo;
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      UserServantNewManager__ClearSaveDataList((const MethodInfo *)v33);
    }
    return 0;
  }
  return 1;
}


void __fastcall UserServantNewManager__SetOld(int64_t userSvtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantNewManager_c *v6; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int32_t v8; // w20
  int v9; // w24
  struct UserServantNewManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v12; // x10
  __int64 namespaze_low; // x11

  if ( (byte_4B45EBC & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v5);
    byte_4B45EBC = 1;
  }
  v6 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v6 = UserServantNewManager_TypeInfo;
  }
  oldList = v6->static_fields->oldList;
  if ( !oldList )
    goto LABEL_19;
  v8 = 0;
  v9 = oldList->fields._size & ~(oldList->fields._size >> 31);
  while ( 1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = UserServantNewManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    v6 = (UserServantNewManager_c *)static_fields->oldList;
    if ( !v6 )
      goto LABEL_19;
    if ( v9 == v8 )
      break;
    if ( System_Collections_Generic_List_long___get_Item(
           (System_Collections_Generic_List_long__o *)v6,
           v8,
           (const MethodInfo_36BDB08 *)Method_System_Collections_Generic_List_long__get_Item__) == userSvtId )
      return;
    v6 = UserServantNewManager_TypeInfo;
    ++v8;
  }
  name = v6->_1.name;
  v12 = Method_System_Collections_Generic_List_long__Add__;
  ++HIDWORD(v6->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1BDBAD4(v6, method);
  namespaze_low = SLODWORD(v6->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      (System_Collections_Generic_List_long__o *)v6,
      userSvtId,
      *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    static_fields = UserServantNewManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v6->_1.namespaze) = namespaze_low + 1;
    *(_QWORD *)&name[8 * namespaze_low + 32] = userSvtId;
  }
  static_fields->isModfiy = 1;
}


void __fastcall UserServantNewManager__SetOld_42498688(System_Int64_array *userSvtList, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x22
  int64_t oldList; // x0
  __int64 v9; // x8
  int v10; // w23
  int32_t v11; // w20
  int v12; // w9
  Il2CppClass **v13; // x10
  _QWORD *v14; // x10
  Il2CppClass *v15; // t1
  unsigned __int64 v16; // x20
  int64_t *m_Items; // x23
  unsigned __int64 max_length; // x8
  struct UserServantNewManager_StaticFields *static_fields; // x8
  __int64 v20; // x9
  _QWORD *v21; // x10
  __int64 v22; // x11

  if ( (byte_4B45EBD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Item__, v5);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v6);
    byte_4B45EBD = 1;
  }
  if ( userSvtList )
  {
    v7 = *(_QWORD *)&userSvtList->max_length;
    if ( (int)v7 >= 1 )
    {
      oldList = (int64_t)UserServantNewManager_TypeInfo;
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
        oldList = (int64_t)UserServantNewManager_TypeInfo;
      }
      v9 = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 24);
        if ( v10 < 1 )
        {
LABEL_21:
          v16 = 0LL;
          m_Items = userSvtList->m_Items;
          while ( 1 )
          {
            max_length = userSvtList->max_length;
            if ( v16 >= max_length )
              break;
            if ( m_Items[v16] >= 1 )
            {
              oldList = (int64_t)UserServantNewManager_TypeInfo;
              if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
                oldList = (int64_t)UserServantNewManager_TypeInfo;
                max_length = userSvtList->max_length;
              }
              if ( v16 >= max_length )
                break;
              static_fields = *(struct UserServantNewManager_StaticFields **)(oldList + 184);
              oldList = (int64_t)static_fields->oldList;
              if ( !oldList )
                goto LABEL_36;
              method = (const MethodInfo *)m_Items[v16];
              v20 = *(_QWORD *)(oldList + 16);
              v21 = Method_System_Collections_Generic_List_long__Add__;
              ++*(_DWORD *)(oldList + 28);
              if ( !v20 )
                goto LABEL_36;
              v22 = *(int *)(oldList + 24);
              if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  (System_Collections_Generic_List_long__o *)oldList,
                  (int64_t)method,
                  *(const MethodInfo_36BDDF8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                static_fields = UserServantNewManager_TypeInfo->static_fields;
              }
              else
              {
                *(_DWORD *)(oldList + 24) = v22 + 1;
                *(_QWORD *)(v20 + 8 * v22 + 32) = method;
              }
              static_fields->isModfiy = 1;
            }
            if ( (unsigned int)v7 == ++v16 )
              return;
          }
LABEL_35:
          sub_1BDBADC(oldList, method, v2);
        }
        v11 = 0;
        while ( 1 )
        {
          if ( !*(_DWORD *)(oldList + 224) )
          {
            j_il2cpp_runtime_class_init_0(oldList);
            oldList = (int64_t)UserServantNewManager_TypeInfo;
          }
          oldList = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
          if ( !oldList )
            break;
          oldList = System_Collections_Generic_List_long___get_Item(
                      (System_Collections_Generic_List_long__o *)oldList,
                      v11,
                      (const MethodInfo_36BDB08 *)Method_System_Collections_Generic_List_long__get_Item__);
          v12 = 0;
          while ( 1 )
          {
            if ( userSvtList->max_length == v12 )
              goto LABEL_35;
            v13 = &userSvtList->obj.klass + v12;
            v15 = v13[4];
            v14 = v13 + 4;
            if ( (Il2CppClass *)oldList == v15 )
              break;
            if ( (_DWORD)v7 == ++v12 )
              goto LABEL_19;
          }
          *v14 = 0LL;
LABEL_19:
          if ( ++v11 == v10 )
            goto LABEL_21;
          oldList = (int64_t)UserServantNewManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1BDBAD4(oldList, method);
    }
  }
}


bool __fastcall UserServantNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantNewManager_c *v7; // x0
  struct UserServantNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  UserServantNewManager_c *v10; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  UserServantNewManager_c *v15; // x0
  struct UserServantNewManager_StaticFields *v16; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  int size; // w20
  __int64 v19; // x1
  int32_t i; // w21
  UserServantNewManager_c *v21; // x0
  System_Collections_Generic_List_long__o *v22; // x0
  int64_t Item; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_4B45EBF & 1) == 0 )
  {
    sub_1BDB878(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1BDB878(&System_IDisposable_TypeInfo, v2);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_1BDB878(&ManagerConfig_TypeInfo, v5);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v6);
    byte_4B45EBF = 1;
  }
  v7 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v7 = UserServantNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = UserServantNewManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( !v9->static_fields->UseMock )
  {
    v10 = UserServantNewManager_TypeInfo;
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v10);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v13 = (System_IO_BinaryWriter_o *)sub_1BDBAC4(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_63486724(v13, v12, 0LL);
    v15 = UserServantNewManager_TypeInfo;
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v15 = UserServantNewManager_TypeInfo;
    }
    v16 = v15->static_fields;
    oldList = v16->oldList;
    if ( !oldList )
      sub_1BDBAD4(v15, v14);
    if ( !v13 )
      sub_1BDBAD4(v15, v14);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
      v13,
      v16->SAVE_DATA_VERSION,
      v13->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v13->klass->vtable._8_Write.method)(
      v13,
      UserServantNewManager_TypeInfo->static_fields->isContinueDevice,
      v13->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
      v13,
      (unsigned int)size,
      v13->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v21 = UserServantNewManager_TypeInfo;
        if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
          v21 = UserServantNewManager_TypeInfo;
        }
        v22 = v21->static_fields->oldList;
        if ( !v22 )
          sub_1BDBAD4(0LL, v19);
        Item = System_Collections_Generic_List_long___get_Item(
                 v22,
                 i,
                 (const MethodInfo_36BDB08 *)Method_System_Collections_Generic_List_long__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v13->klass->vtable._19_Write.method)(
          v13,
          Item,
          v13->klass->vtable._20_Write.methodPtr);
      }
    }
    klass = v13->klass;
    v25 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        p_offset += 4;
        if ( !v25 )
          goto LABEL_27;
      }
      v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_27:
      v27 = sub_1C2C00C(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v13, *(_QWORD *)(v27 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserServantNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B45EB5 & 1) == 0 )
  {
    sub_1BDB878(&AndroidUtil_TypeInfo, v1);
    sub_1BDB878(&DatFileName_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v3);
    byte_4B45EB5 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(5, 0LL);
  return System_String__Concat_62610508(DatFileSavePath, (System_String_o *)StringLiteral_1061/*"/"*/, FileName, 0LL);
}