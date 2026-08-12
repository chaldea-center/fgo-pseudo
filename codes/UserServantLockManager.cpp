void UserServantLockManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_List_long__c *v8; // x0
  System_Collections_Generic_List_long__o *v9; // x19
  struct UserServantLockManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5971E36 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&UserServantLockManager_TypeInfo);
    sub_2213A60(&StringLiteral_6953/*"Fgo_20150511"*/);
    byte_5971E36 = 1;
  }
  v7 = StringLiteral_6953/*"Fgo_20150511"*/;
  UserServantLockManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6953/*"Fgo_20150511"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserServantLockManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_long__TypeInfo;
  UserServantLockManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_long__o *)sub_2213CCC(v8);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = UserServantLockManager_TypeInfo->static_fields;
  static_fields->lockList = v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->lockList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
}


void UserServantLockManager___ctor(UserServantLockManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserServantLockManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantLockManager_c *v2; // x0
  struct UserServantLockManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_long__o *lockList; // x9
  int v5; // w10

  if ( (byte_5971E33 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_long__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&UserServantLockManager_TypeInfo);
    byte_5971E33 = 1;
  }
  v2 = UserServantLockManager_TypeInfo;
  if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v1);
    v2 = UserServantLockManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  lockList = static_fields->lockList;
  if ( !lockList )
    goto LABEL_11;
  if ( lockList->fields._size < 1 )
    return;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = UserServantLockManager_TypeInfo->static_fields;
    lockList = static_fields->lockList;
    if ( !lockList )
LABEL_11:
      sub_2213CDC(v2, v1);
  }
  v5 = lockList->fields._version + 1;
  lockList->fields._size = 0;
  lockList->fields._version = v5;
  static_fields->isModfiy = 1;
}


void UserServantLockManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantLockManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5971E32 & 1) == 0 )
  {
    sub_2213A60(&UserServantLockManager_TypeInfo);
    byte_5971E32 = 1;
  }
  v2 = UserServantLockManager_TypeInfo;
  if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v1);
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


System_Int64_array *UserServantLockManager__GetLockList(const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v2; // x1
  Il2CppObject *MasterData_object; // x19
  System_Collections_Generic_List_long__o *v4; // x20
  __int64 v5; // x8
  int v6; // w24
  int32_t v7; // w21
  UserServantLockManager_c *v8; // x0
  int64_t v9; // x22
  struct System_Int64_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10

  if ( (byte_5971E35 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_long___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_long__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&UserServantLockManager_TypeInfo);
    byte_5971E35 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  v4 = (System_Collections_Generic_List_long__o *)sub_2213CCC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_446BA10 *)Method_System_Collections_Generic_List_long___ctor__);
  Instance = (int64_t)UserServantLockManager_TypeInfo;
  if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v2);
    Instance = (int64_t)UserServantLockManager_TypeInfo;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v5 )
    goto LABEL_22;
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = UserServantLockManager_TypeInfo;
      if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v2);
        v8 = UserServantLockManager_TypeInfo;
      }
      Instance = (int64_t)v8->static_fields->lockList;
      if ( !Instance )
        break;
      Instance = System_Collections_Generic_List_long___get_Item(
                   (System_Collections_Generic_List_long__o *)Instance,
                   v7,
                   (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__);
      if ( !MasterData_object )
        break;
      v9 = Instance;
      Instance = (int64_t)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                            Instance,
                            (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( Instance )
      {
        if ( !v4 )
          break;
        items = v4->fields._items;
        v11 = Method_System_Collections_Generic_List_long__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_long___AddWithResize(
            v4,
            v9,
            *(const MethodInfo_446C29C **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = v9;
        }
      }
      if ( v6 == ++v7 )
        goto LABEL_20;
    }
LABEL_22:
    sub_2213CDC(Instance, v2);
  }
LABEL_20:
  if ( !v4 )
    goto LABEL_22;
  return System_Collections_Generic_List_long___ToArray(
           v4,
           (const MethodInfo_446DD1C *)Method_System_Collections_Generic_List_long__ToArray__);
}


System_String_o *UserServantLockManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5971E31 & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&DatFileName_TypeInfo);
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    byte_5971E31 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(6, 0);
  return System_String__Concat_75694928(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}


bool UserServantLockManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantLockManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w20
  UserServantLockManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  UserServantLockManager_c *v9; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x19
  UserServantLockManager_c *v16; // x0
  __int64 v17; // x1
  int v18; // w19
  __int64 v19; // x1
  int64_t v20; // x20
  UserServantLockManager_c *v21; // x0
  System_Collections_Generic_List_long__o *lockList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v27; // x9
  int *p_offset; // x10
  __int64 v29; // x0
  UserServantLockManager_c *v30; // x0
  System_IO_BinaryReader_o *v32; // [xsp+28h] [xbp-28h]

  if ( (byte_5971E34 & 1) == 0 )
  {
    sub_2213A60(&System_IO_BinaryReader_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&ManagerConfig_TypeInfo);
    sub_2213A60(&UserServantLockManager_TypeInfo);
    byte_5971E34 = 1;
  }
  v2 = UserServantLockManager_TypeInfo;
  if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v1);
    v2 = UserServantLockManager_TypeInfo;
  }
  v3 = ManagerConfig_TypeInfo;
  v4 = *(&ManagerConfig_TypeInfo->_2.cctor_finished + 1);
  v2->static_fields->isModfiy = 0;
  if ( !v4 )
  {
    j_il2cpp_runtime_class_init_0(v3, v1);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 1;
  v6 = UserServantLockManager_TypeInfo;
  if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v1);
  SaveFileName = UserServantLockManager__GetSaveFileName((const MethodInfo *)v6);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v9 = UserServantLockManager_TypeInfo;
    if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v8);
    UserServantLockManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v11 = (System_IO_BinaryReader_o *)sub_2213CCC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0);
    v32 = v11;
    if ( !v11 )
      sub_2213CDC(v12, v13);
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                               v11,
                               v11->klass->vtable._22_ReadString.method);
    v16 = UserServantLockManager_TypeInfo;
    if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v14);
      v16 = UserServantLockManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0) )
    {
      v5 = 0;
    }
    else
    {
      if ( !v32 )
        sub_2213CDC(0, v17);
      v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v32->klass->vtable._15_ReadInt32.methodPtr)(
              v32,
              v32->klass->vtable._15_ReadInt32.method);
      if ( v18 >= 1 )
      {
        do
        {
          v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v32->klass->vtable._17_ReadInt64.methodPtr)(
                  v32,
                  v32->klass->vtable._17_ReadInt64.method);
          v21 = UserServantLockManager_TypeInfo;
          if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v19);
            v21 = UserServantLockManager_TypeInfo;
          }
          lockList = v21->static_fields->lockList;
          if ( !lockList
            || (items = lockList->fields._items,
                v24 = Method_System_Collections_Generic_List_long__Add__,
                ++lockList->fields._version,
                !items) )
          {
            sub_2213CDC(lockList, v19);
          }
          size = lockList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              lockList,
              v20,
              *(const MethodInfo_446C29C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            lockList->fields._size = size + 1;
            items->m_Items[size] = v20;
          }
          --v18;
        }
        while ( v18 );
      }
      v5 = 1;
    }
    if ( v32 )
    {
      klass = v32->klass;
      v27 = *(unsigned __int16 *)&v32->klass->_2.rank;
      if ( *(_WORD *)&v32->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v27;
          p_offset += 4;
          if ( !v27 )
            goto LABEL_35;
        }
        v29 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_35:
        v29 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v29)(v32, *(_QWORD *)(v29 + 8));
    }
  }
  else
  {
    v30 = UserServantLockManager_TypeInfo;
    if ( !*(&UserServantLockManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserServantLockManager_TypeInfo, v8);
    UserServantLockManager__ClearSaveDataList((const MethodInfo *)v30);
    return 0;
  }
  return v5;
}