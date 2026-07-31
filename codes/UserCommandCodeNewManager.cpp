void UserCommandCodeNewManager___cctor(const MethodInfo *method)
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
  struct UserCommandCodeNewManager_StaticFields *static_fields; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5939C3E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6946/*"Fgo_20180629_1"*/);
    byte_5939C3E = 1;
  }
  v7 = StringLiteral_6946/*"Fgo_20180629_1"*/;
  UserCommandCodeNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6946/*"Fgo_20180629_1"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UserCommandCodeNewManager_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = System_Collections_Generic_List_long__TypeInfo;
  *(_WORD *)&UserCommandCodeNewManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(v8);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = UserCommandCodeNewManager_TypeInfo->static_fields;
  static_fields->oldList = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->oldList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
}


void UserCommandCodeNewManager___ctor(UserCommandCodeNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserCommandCodeNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int v4; // w9

  if ( (byte_5939C38 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C38 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
    v2 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = UserCommandCodeNewManager_TypeInfo;
    oldList = UserCommandCodeNewManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_21FFECC(v2, v1);
  }
  v4 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v4;
LABEL_10:
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    v2 = UserCommandCodeNewManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void UserCommandCodeNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_5939C36 & 1) == 0 )
  {
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C36 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
  UserCommandCodeNewManager__DeleteSaveData((const MethodInfo *)v2);
  UserCommandCodeNewManager__ClearSaveDataList(v3);
  *(_WORD *)&UserCommandCodeNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserCommandCodeNewManager__WriteData(v4);
}


void UserCommandCodeNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_5939C35 & 1) == 0 )
  {
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C35 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
  SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


void UserCommandCodeNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0

  if ( (byte_5939C37 & 1) == 0 )
  {
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C37 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
  UserCommandCodeNewManager__ReadData((const MethodInfo *)v2);
}


bool UserCommandCodeNewManager__IsNew(int64_t userCmdCodeId, const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w22
  bool v6; // w23
  int32_t v7; // w20
  UserCommandCodeNewManager_c *v8; // x0

  if ( (byte_5939C3A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C3A = 1;
  }
  v3 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, method);
    v3 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = UserCommandCodeNewManager_TypeInfo;
      if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, method);
        v8 = UserCommandCodeNewManager_TypeInfo;
      }
      v3 = (UserCommandCodeNewManager_c *)v8->static_fields->oldList;
      if ( !v3 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v3,
             v7,
             (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__) != userCmdCodeId )
      {
        v6 = ++v7 >= size;
        if ( size != v7 )
          continue;
      }
      return v6;
    }
LABEL_16:
    sub_21FFECC(v3, method);
  }
  return 1;
}


void UserCommandCodeNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x0

  if ( (byte_5939C39 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C39 = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
    v2 = UserCommandCodeNewManager_TypeInfo;
  }
  if ( v2->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___)) == 0 )
    {
      sub_21FFECC(Instance, v4);
    }
    UserCommandCodeMaster__continueDeviceUserCommandCode((UserCommandCodeMaster_o *)Instance, 0);
    v6 = (const MethodInfo *)UserCommandCodeNewManager_TypeInfo;
    if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v5);
      v6 = (const MethodInfo *)UserCommandCodeNewManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 4) = 1;
    UserCommandCodeNewManager__WriteData(v6);
  }
}


bool UserCommandCodeNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  ManagerConfig_c *v3; // x8
  int v4; // w10
  bool v5; // w20
  UserCommandCodeNewManager_c *v6; // x0
  System_String_o *SaveFileName; // x19
  __int64 v8; // x1
  UserCommandCodeNewManager_c *v9; // x0
  System_IO_Stream_o *v10; // x20
  System_IO_BinaryReader_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x19
  UserCommandCodeNewManager_c *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  char v19; // w19
  UserCommandCodeNewManager_c *v20; // x0
  int v21; // w19
  __int64 v22; // x1
  int64_t v23; // x20
  UserCommandCodeNewManager_c *v24; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int *p_offset; // x10
  __int64 v32; // x0
  UserCommandCodeNewManager_c *v33; // x0
  System_IO_BinaryReader_o *v35; // [xsp+28h] [xbp-28h]

  if ( (byte_5939C3C & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryReader_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C3C = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
    v2 = UserCommandCodeNewManager_TypeInfo;
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
  v6 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
  SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v6);
  if ( System_IO_File__Exists(SaveFileName, 0) )
  {
    v9 = UserCommandCodeNewManager_TypeInfo;
    if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v8);
    UserCommandCodeNewManager__ClearSaveDataList((const MethodInfo *)v9);
    v10 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
    v11 = (System_IO_BinaryReader_o *)sub_21FFEBC(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v11, v10, 0);
    v35 = v11;
    if ( !v11 )
      sub_21FFECC(v12, v13);
    v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v11->klass->vtable._22_ReadString.methodPtr)(
                               v11,
                               v11->klass->vtable._22_ReadString.method);
    v16 = UserCommandCodeNewManager_TypeInfo;
    if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v14);
      v16 = UserCommandCodeNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0) )
    {
      v5 = 0;
    }
    else
    {
      if ( !v35 )
        sub_21FFECC(0, v17);
      v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v35->klass->vtable._9_ReadBoolean.methodPtr)(
              v35,
              v35->klass->vtable._9_ReadBoolean.method);
      v20 = UserCommandCodeNewManager_TypeInfo;
      if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v18);
        v20 = UserCommandCodeNewManager_TypeInfo;
      }
      v20->static_fields->isContinueDevice = v19 & 1;
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v35->klass->vtable._15_ReadInt32.methodPtr)(
              v35,
              v35->klass->vtable._15_ReadInt32.method);
      if ( v21 >= 1 )
      {
        do
        {
          v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v35->klass->vtable._17_ReadInt64.methodPtr)(
                  v35,
                  v35->klass->vtable._17_ReadInt64.method);
          v24 = UserCommandCodeNewManager_TypeInfo;
          if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v22);
            v24 = UserCommandCodeNewManager_TypeInfo;
          }
          oldList = v24->static_fields->oldList;
          if ( !oldList
            || (items = oldList->fields._items,
                v27 = Method_System_Collections_Generic_List_long__Add__,
                ++oldList->fields._version,
                !items) )
          {
            sub_21FFECC(oldList, v22);
          }
          size = oldList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              oldList,
              v23,
              *(const MethodInfo_4438164 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
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
      v5 = 1;
    }
    if ( v35 )
    {
      klass = v35->klass;
      v30 = *(unsigned __int16 *)&v35->klass->_2.rank;
      if ( *(_WORD *)&v35->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_37;
        }
        v32 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_37:
        v32 = sub_2237E2C(v35, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v35, *(_QWORD *)(v32 + 8));
    }
  }
  else
  {
    v33 = UserCommandCodeNewManager_TypeInfo;
    if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v8);
    UserCommandCodeNewManager__ClearSaveDataList((const MethodInfo *)v33);
    return 0;
  }
  return v5;
}


void UserCommandCodeNewManager__SetOld(int64_t userCmdCodeId, const MethodInfo *method)
{
  UserCommandCodeNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w22
  int32_t i; // w20
  UserCommandCodeNewManager_c *v7; // x0
  struct UserCommandCodeNewManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v10; // x10
  __int64 namespaze_low; // x11

  if ( (byte_5939C3B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C3B = 1;
  }
  v3 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, method);
    v3 = UserCommandCodeNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_23;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v7 = UserCommandCodeNewManager_TypeInfo;
      if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, method);
        v7 = UserCommandCodeNewManager_TypeInfo;
      }
      v3 = (UserCommandCodeNewManager_c *)v7->static_fields->oldList;
      if ( !v3 )
        goto LABEL_23;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v3,
             i,
             (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__) == userCmdCodeId )
        return;
    }
    v3 = UserCommandCodeNewManager_TypeInfo;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = UserCommandCodeNewManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v3 = (UserCommandCodeNewManager_c *)static_fields->oldList;
  if ( !v3
    || (name = v3->_1.name, v10 = Method_System_Collections_Generic_List_long__Add__, ++HIDWORD(v3->_1.namespaze), !name) )
  {
LABEL_23:
    sub_21FFECC(v3, method);
  }
  namespaze_low = SLODWORD(v3->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      (System_Collections_Generic_List_long__o *)v3,
      userCmdCodeId,
      *(const MethodInfo_4438164 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    static_fields = UserCommandCodeNewManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v3->_1.namespaze) = namespaze_low + 1;
    *(_QWORD *)&name[8 * namespaze_low + 32] = userCmdCodeId;
  }
  static_fields->isModfiy = 1;
}


bool UserCommandCodeNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserCommandCodeNewManager_c *v2; // x0
  struct UserCommandCodeNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v4; // x0
  UserCommandCodeNewManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  UserCommandCodeNewManager_c *v10; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x9
  int size; // w19
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t i; // w20
  UserCommandCodeNewManager_c *v16; // x0
  System_Collections_Generic_List_long__o *v17; // x0
  int64_t Item; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v20; // x9
  int *p_offset; // x10
  __int64 v22; // x0
  System_IO_BinaryWriter_o *v24; // [xsp+28h] [xbp-38h]

  if ( (byte_5939C3D & 1) == 0 )
  {
    sub_21FFC50(&System_IO_BinaryWriter_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UserCommandCodeNewManager_TypeInfo);
    byte_5939C3D = 1;
  }
  v2 = UserCommandCodeNewManager_TypeInfo;
  if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
    v2 = UserCommandCodeNewManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !*(&v2->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v2, v1);
    static_fields = UserCommandCodeNewManager_TypeInfo->static_fields;
  }
  v4 = ManagerConfig_TypeInfo;
  static_fields->isModfiy = 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v4, v1);
    v4 = ManagerConfig_TypeInfo;
  }
  if ( !v4->static_fields->UseMock )
  {
    v5 = UserCommandCodeNewManager_TypeInfo;
    if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v1);
    SaveFileName = UserCommandCodeNewManager__getSaveFileName((const MethodInfo *)v5);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
    v8 = (System_IO_BinaryWriter_o *)sub_21FFEBC(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_76739708(v8, v7, 0);
    v10 = UserCommandCodeNewManager_TypeInfo;
    v24 = v8;
    if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v9);
      v10 = UserCommandCodeNewManager_TypeInfo;
    }
    oldList = v10->static_fields->oldList;
    if ( !oldList )
      sub_21FFECC(v10, v9);
    if ( !v8 )
      sub_21FFECC(0, v9);
    size = oldList->fields._size;
    v24->klass->vtable._22_Write.methodPtr();
    v24->klass->vtable._8_Write.methodPtr();
    if ( !v24 )
      sub_21FFECC(0, v13);
    v24->klass->vtable._17_Write.methodPtr();
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v16 = UserCommandCodeNewManager_TypeInfo;
        if ( !*(&UserCommandCodeNewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo, v14);
          v16 = UserCommandCodeNewManager_TypeInfo;
        }
        v17 = v16->static_fields->oldList;
        if ( !v17 )
          sub_21FFECC(0, v14);
        Item = System_Collections_Generic_List_long___get_Item(
                 v17,
                 i,
                 (const MethodInfo_4437E70 *)Method_System_Collections_Generic_List_long__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, const MethodInfo *))v24->klass->vtable._19_Write.methodPtr)(
          v24,
          Item,
          v24->klass->vtable._19_Write.method);
      }
    }
    klass = v24->klass;
    v20 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_28;
      }
      v22 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_28:
      v22 = sub_2237E2C(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v24, *(_QWORD *)(v22 + 8));
  }
  return 1;
}


System_String_o *UserCommandCodeNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_5939C34 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&DatFileName_TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_5939C34 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !*(&DatFileName_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v2);
  FileName = DatFileName__getFileName(9, 0);
  return System_String__Concat_75481624(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0);
}