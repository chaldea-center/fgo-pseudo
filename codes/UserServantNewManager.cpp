void UserServantNewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_List_long__o *v7; // x19
  struct UserServantNewManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2DE4D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C94098(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    sub_1C94098(&StringLiteral_6677/*"Fgo_20150511_1"*/);
    byte_4D2DE4D = 1;
  }
  UserServantNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6677/*"Fgo_20150511_1"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)UserServantNewManager_TypeInfo->static_fields,
    StringLiteral_6677/*"Fgo_20150511_1"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&UserServantNewManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_long__o *)sub_1C942E4(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3852614 *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = UserServantNewManager_TypeInfo->static_fields;
  static_fields->oldList = v7;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->oldList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
}


void UserServantNewManager___ctor(UserServantNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserServantNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantNewManager_c *v2; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int v4; // w9

  if ( (byte_4D2DE46 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE46 = 1;
  }
  v2 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v2 = UserServantNewManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserServantNewManager_TypeInfo;
    oldList = UserServantNewManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_1C942F0(v2, v1);
  }
  v4 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v4;
LABEL_10:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserServantNewManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void UserServantNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4D2DE44 & 1) == 0 )
  {
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE44 = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__DeleteSaveData((const MethodInfo *)v1);
  UserServantNewManager__ClearSaveDataList(v2);
  *(_WORD *)&UserServantNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserServantNewManager__WriteData(v3);
}


void UserServantNewManager__DeleteSaveData(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4D2DE43 & 1) == 0 )
  {
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE43 = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


void UserServantNewManager__Initialize(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0

  if ( (byte_4D2DE45 & 1) == 0 )
  {
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE45 = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__ReadData((const MethodInfo *)v1);
}


bool UserServantNewManager__IsNew(int64_t userSvtId, const MethodInfo *method)
{
  UserServantNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v6; // w24
  bool v7; // w23

  if ( (byte_4D2DE48 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE48 = 1;
  }
  v3 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v3 = UserServantNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    v6 = 1;
    v7 = 1;
    while ( 1 )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = UserServantNewManager_TypeInfo;
      }
      v3 = (UserServantNewManager_c *)v3->static_fields->oldList;
      if ( !v3 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v3,
             v6 - 1,
             (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__) == userSvtId )
        return !v7;
      v7 = v6 < size;
      if ( size == v6 )
        return !v7;
      v3 = UserServantNewManager_TypeInfo;
      ++v6;
    }
LABEL_16:
    sub_1C942F0(v3, method);
  }
  v7 = 0;
  return !v7;
}


void UserServantNewManager__LoginProcess(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19
  UserServantStorageMaster_o *v5; // x20
  const MethodInfo *v6; // x0

  if ( (byte_4D2DE47 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE47 = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v1 = UserServantNewManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantStorageMaster___),
          !MasterData_object)
      || (v5 = (UserServantStorageMaster_o *)Instance,
          UserServantMaster__continueDeviceUserServant((UserServantMaster_o *)MasterData_object, 0),
          !v5) )
    {
      sub_1C942F0(Instance, v3);
    }
    UserServantStorageMaster__continueDeviceUserServant(v5, 0);
    v6 = (const MethodInfo *)UserServantNewManager_TypeInfo;
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v6 = (const MethodInfo *)UserServantNewManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 4) = 1;
    UserServantNewManager__WriteData(v6);
  }
}


bool UserServantNewManager__ReadData(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserServantNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserServantNewManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  UserServantNewManager_c *v12; // x0
  int v13; // w21
  char v14; // w20
  UserServantNewManager_c *v15; // x0
  int v16; // w20
  __int64 v17; // x1
  int64_t v18; // x21
  UserServantNewManager_c *v19; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  UserServantNewManager_c *v28; // x0

  if ( (byte_4D2DE4B & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryReader_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE4B = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v1 = UserServantNewManager_TypeInfo;
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
    v4 = UserServantNewManager_TypeInfo;
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v4);
    if ( System_IO_File__Exists(SaveFileName, 0) )
    {
      v6 = UserServantNewManager_TypeInfo;
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      UserServantNewManager__ClearSaveDataList((const MethodInfo *)v6);
      v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
      v8 = (System_IO_BinaryReader_o *)sub_1C942E4(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v8, v7, 0);
      if ( !v8 )
        sub_1C942F0(v9, v10);
      v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                                 v8,
                                 v8->klass->vtable._22_ReadString.method);
      v12 = UserServantNewManager_TypeInfo;
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
        v12 = UserServantNewManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0) )
      {
        v13 = 5;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
                v8,
                v8->klass->vtable._9_ReadBoolean.method);
        v15 = UserServantNewManager_TypeInfo;
        if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
          v15 = UserServantNewManager_TypeInfo;
        }
        v15->static_fields->isContinueDevice = v14 & 1;
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v16 >= 1 )
        {
          do
          {
            v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._17_ReadInt64.methodPtr)(
                    v8,
                    v8->klass->vtable._17_ReadInt64.method);
            v19 = UserServantNewManager_TypeInfo;
            if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
              v19 = UserServantNewManager_TypeInfo;
            }
            oldList = v19->static_fields->oldList;
            if ( !oldList )
              sub_1C942F0(0, v17);
            items = oldList->fields._items;
            v22 = Method_System_Collections_Generic_List_long__Add__;
            ++oldList->fields._version;
            if ( !items )
              sub_1C942F0(oldList, v17);
            size = oldList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                oldList,
                v18,
                *(const MethodInfo_3852E68 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
            }
            else
            {
              oldList->fields._size = size + 1;
              items->m_Items[size] = v18;
            }
            --v16;
          }
          while ( v16 );
        }
        v13 = 8;
      }
      klass = v8->klass;
      v25 = *(unsigned __int16 *)&v8->klass->_2.rank;
      if ( *(_WORD *)&v8->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v25;
          p_offset += 4;
          if ( !v25 )
            goto LABEL_35;
        }
        v27 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_35:
        v27 = sub_1C6A420(v8, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v27)(v8, *(_QWORD *)(v27 + 8));
      if ( (v13 | 8) == 8 )
        return 1;
    }
    else
    {
      v28 = UserServantNewManager_TypeInfo;
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      UserServantNewManager__ClearSaveDataList((const MethodInfo *)v28);
    }
    return 0;
  }
  return 1;
}


void UserServantNewManager__SetOld(int64_t userSvtId, const MethodInfo *method)
{
  UserServantNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int32_t v5; // w20
  int v6; // w24
  struct UserServantNewManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v9; // x10
  __int64 namespaze_low; // x11

  if ( (byte_4D2DE49 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE49 = 1;
  }
  v3 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v3 = UserServantNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_19;
  v5 = 0;
  v6 = oldList->fields._size & ~(oldList->fields._size >> 31);
  while ( 1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserServantNewManager_TypeInfo;
    }
    static_fields = v3->static_fields;
    v3 = (UserServantNewManager_c *)static_fields->oldList;
    if ( !v3 )
      goto LABEL_19;
    if ( v6 == v5 )
      break;
    if ( System_Collections_Generic_List_long___get_Item(
           (System_Collections_Generic_List_long__o *)v3,
           v5,
           (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__) == userSvtId )
      return;
    v3 = UserServantNewManager_TypeInfo;
    ++v5;
  }
  name = v3->_1.name;
  v9 = Method_System_Collections_Generic_List_long__Add__;
  ++HIDWORD(v3->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1C942F0(v3, method);
  namespaze_low = SLODWORD(v3->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      (System_Collections_Generic_List_long__o *)v3,
      userSvtId,
      *(const MethodInfo_3852E68 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    static_fields = UserServantNewManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v3->_1.namespaze) = namespaze_low + 1;
    *(_QWORD *)&name[8 * namespaze_low + 32] = userSvtId;
  }
  static_fields->isModfiy = 1;
}


void UserServantNewManager__SetOld_44439716(System_Int64_array *userSvtList, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x22
  int64_t oldList; // x0
  __int64 v5; // x8
  int v6; // w23
  int32_t v7; // w20
  int v8; // w9
  Il2CppClass **v9; // x10
  _QWORD *v10; // x10
  Il2CppClass *v11; // t1
  unsigned __int64 v12; // x20
  int64_t *m_Items; // x23
  unsigned __int64 max_length_low; // x8
  struct UserServantNewManager_StaticFields *static_fields; // x8
  __int64 v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11

  if ( (byte_4D2DE4A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE4A = 1;
  }
  if ( userSvtList )
  {
    max_length = userSvtList->max_length;
    if ( (int)max_length >= 1 )
    {
      oldList = (int64_t)UserServantNewManager_TypeInfo;
      if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
        oldList = (int64_t)UserServantNewManager_TypeInfo;
      }
      v5 = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 24);
        if ( v6 < 1 )
        {
LABEL_21:
          v12 = 0;
          m_Items = userSvtList->m_Items;
          while ( 1 )
          {
            max_length_low = LODWORD(userSvtList->max_length);
            if ( v12 >= max_length_low )
              break;
            if ( m_Items[v12] >= 1 )
            {
              oldList = (int64_t)UserServantNewManager_TypeInfo;
              if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
                oldList = (int64_t)UserServantNewManager_TypeInfo;
                max_length_low = LODWORD(userSvtList->max_length);
              }
              if ( v12 >= max_length_low )
                break;
              static_fields = *(struct UserServantNewManager_StaticFields **)(oldList + 184);
              oldList = (int64_t)static_fields->oldList;
              if ( !oldList )
                goto LABEL_36;
              method = (const MethodInfo *)m_Items[v12];
              v16 = *(_QWORD *)(oldList + 16);
              v17 = Method_System_Collections_Generic_List_long__Add__;
              ++*(_DWORD *)(oldList + 28);
              if ( !v16 )
                goto LABEL_36;
              v18 = *(int *)(oldList + 24);
              if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  (System_Collections_Generic_List_long__o *)oldList,
                  (int64_t)method,
                  *(const MethodInfo_3852E68 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                static_fields = UserServantNewManager_TypeInfo->static_fields;
              }
              else
              {
                *(_DWORD *)(oldList + 24) = v18 + 1;
                *(_QWORD *)(v16 + 8 * v18 + 32) = method;
              }
              static_fields->isModfiy = 1;
            }
            if ( (unsigned int)max_length == ++v12 )
              return;
          }
LABEL_35:
          sub_1C942F8(oldList);
        }
        v7 = 0;
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
                      v7,
                      (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__);
          v8 = 0;
          while ( 1 )
          {
            if ( LODWORD(userSvtList->max_length) == v8 )
              goto LABEL_35;
            v9 = &userSvtList->obj.klass + v8;
            v11 = v9[4];
            v10 = v9 + 4;
            if ( (Il2CppClass *)oldList == v11 )
              break;
            if ( (_DWORD)max_length == ++v8 )
              goto LABEL_19;
          }
          *v10 = 0;
LABEL_19:
          if ( ++v7 == v6 )
            goto LABEL_21;
          oldList = (int64_t)UserServantNewManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1C942F0(oldList, method);
    }
  }
}


bool UserServantNewManager__WriteData(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  struct UserServantNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  UserServantNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  UserServantNewManager_c *v9; // x0
  struct UserServantNewManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  int size; // w20
  __int64 v13; // x1
  int32_t i; // w21
  UserServantNewManager_c *v15; // x0
  System_Collections_Generic_List_long__o *v16; // x0
  int64_t Item; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4D2DE4C & 1) == 0 )
  {
    sub_1C94098(&System_IO_BinaryWriter_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C94098(&ManagerConfig_TypeInfo);
    sub_1C94098(&UserServantNewManager_TypeInfo);
    byte_4D2DE4C = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v1 = UserServantNewManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = UserServantNewManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( !v3->static_fields->UseMock )
  {
    v4 = UserServantNewManager_TypeInfo;
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v4);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
    v7 = (System_IO_BinaryWriter_o *)sub_1C942E4(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_65327072(v7, v6, 0);
    v9 = UserServantNewManager_TypeInfo;
    if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v9 = UserServantNewManager_TypeInfo;
    }
    v10 = v9->static_fields;
    oldList = v10->oldList;
    if ( !oldList )
      sub_1C942F0(v9, v8);
    if ( !v7 )
      sub_1C942F0(v9, v8);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v7->klass->vtable._22_Write.methodPtr)(
      v7,
      v10->SAVE_DATA_VERSION,
      v7->klass->vtable._22_Write.method);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v7->klass->vtable._8_Write.methodPtr)(
      v7,
      UserServantNewManager_TypeInfo->static_fields->isContinueDevice,
      v7->klass->vtable._8_Write.method);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
      v7,
      (unsigned int)size,
      v7->klass->vtable._17_Write.method);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v15 = UserServantNewManager_TypeInfo;
        if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
          v15 = UserServantNewManager_TypeInfo;
        }
        v16 = v15->static_fields->oldList;
        if ( !v16 )
          sub_1C942F0(0, v13);
        Item = System_Collections_Generic_List_long___get_Item(
                 v16,
                 i,
                 (const MethodInfo_3852B78 *)Method_System_Collections_Generic_List_long__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, const MethodInfo *))v7->klass->vtable._19_Write.methodPtr)(
          v7,
          Item,
          v7->klass->vtable._19_Write.method);
      }
    }
    klass = v7->klass;
    v19 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_27;
      }
      v21 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_27:
      v21 = sub_1C6A420(v7, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v7, *(_QWORD *)(v21 + 8));
  }
  return 1;
}


System_String_o *UserServantNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4D2DE42 & 1) == 0 )
  {
    sub_1C94098(&AndroidUtil_TypeInfo);
    sub_1C94098(&DatFileName_TypeInfo);
    sub_1C94098(&StringLiteral_1041/*"/"*/);
    byte_4D2DE42 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(5, 0);
  return System_String__Concat_64456008(DatFileSavePath, (System_String_o *)StringLiteral_1041/*"/"*/, FileName, 0);
}