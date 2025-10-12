void UserEquipNewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct UserEquipNewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C38E36 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6669/*"Fgo_20150511_1"*/);
    byte_4C38E36 = 1;
  }
  UserEquipNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6669/*"Fgo_20150511_1"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)UserEquipNewManager_TypeInfo->static_fields, StringLiteral_6669/*"Fgo_20150511_1"*/, v1, v2);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
  static_fields = UserEquipNewManager_TypeInfo->static_fields;
  static_fields->openList = (struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->openList, (int32_t)v3, v5, v6);
}


void UserEquipNewManager___ctor(UserEquipNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserEquipNewManager__ClearSaveDataList(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int32_t size; // w2
  int v4; // w9

  if ( (byte_4C38E30 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E30 = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v1 = UserEquipNewManager_TypeInfo;
  }
  openList = v1->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = UserEquipNewManager_TypeInfo;
    openList = UserEquipNewManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_1C32E7C(v1);
  }
  size = openList->fields._size;
  v4 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v4;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0);
    v1 = UserEquipNewManager_TypeInfo;
  }
LABEL_11:
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = UserEquipNewManager_TypeInfo;
  }
  *(_WORD *)&v1->static_fields->isModfiy = 1;
}


void UserEquipNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4C38E2E & 1) == 0 )
  {
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E2E = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__DeleteSaveData((const MethodInfo *)v1);
  UserEquipNewManager__ClearSaveDataList(v2);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserEquipNewManager__WriteData(v3);
}


void UserEquipNewManager__DeleteSaveData(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4C38E2D & 1) == 0 )
  {
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E2D = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0) )
    System_IO_File__Delete(SaveFileName, 0);
}


void UserEquipNewManager__Initialize(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0

  if ( (byte_4C38E2F & 1) == 0 )
  {
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E2F = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__ReadData((const MethodInfo *)v1);
}


bool UserEquipNewManager__IsNew(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x8
  int v7; // w22
  int v8; // w25
  bool v9; // w24

  if ( (byte_4C38E32 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E32 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  v6 = *(_QWORD *)(*(_QWORD *)&Item[4].fields._size + 16LL);
  if ( !v6 )
    goto LABEL_18;
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 >= 1 )
  {
    v8 = 1;
    v9 = 1;
    while ( 1 )
    {
      if ( !Item[5].fields._size )
      {
        j_il2cpp_runtime_class_init_0(Item);
        Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
      }
      Item = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&Item[4].fields._size + 16LL);
      if ( !Item )
        break;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v8 - 1,
                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
      if ( !Item )
        break;
      if ( LODWORD(Item->fields._items) == equipId && SHIDWORD(Item->fields._items) < lv )
        return v9;
      v9 = v8 < v7;
      if ( v7 == v8 )
        return v9;
      Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
      ++v8;
    }
LABEL_18:
    sub_1C32E7C(Item);
  }
  return 0;
}


void UserEquipNewManager__LoginProcess(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4C38E31 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E31 = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v1 = UserEquipNewManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0 )
    {
      sub_1C32E7C(Instance);
    }
    UserEquipMaster__continueDeviceEquipLvInfo((UserEquipMaster_o *)Instance, 0);
    v3 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v3 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    }
    *((_WORD *)v3[2].virtualMethodPointer + 4) = 1;
    UserEquipNewManager__WriteData(v3);
  }
}


bool UserEquipNewManager__ReadData(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserEquipNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserEquipNewManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  System_String_o *v10; // x20
  UserEquipNewManager_c *v11; // x0
  int v12; // w21
  char v13; // w20
  UserEquipNewManager_c *v14; // x0
  int v15; // w20
  int v16; // w22
  int v17; // w23
  __int64 v18; // x21
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UserEquipNewManager_c *v22; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  UserEquipNewManager_c *v32; // x0

  if ( (byte_4C38E34 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryReader_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E34 = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v1 = UserEquipNewManager_TypeInfo;
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
    v4 = UserEquipNewManager_TypeInfo;
    if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v4);
    if ( System_IO_File__Exists(SaveFileName, 0) )
    {
      v6 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v6);
      v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0);
      v8 = (System_IO_BinaryReader_o *)sub_1C32E6C(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v8, v7, 0);
      if ( !v8 )
        sub_1C32E7C(v9);
      v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._22_ReadString.methodPtr)(
                                 v8,
                                 v8->klass->vtable._22_ReadString.method);
      v11 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v11 = UserEquipNewManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
      {
        v12 = 5;
      }
      else
      {
        v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._9_ReadBoolean.methodPtr)(
                v8,
                v8->klass->vtable._9_ReadBoolean.method);
        v14 = UserEquipNewManager_TypeInfo;
        if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
          v14 = UserEquipNewManager_TypeInfo;
        }
        v14->static_fields->isContinueDevice = v13 & 1;
        v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                v8,
                v8->klass->vtable._15_ReadInt32.method);
        if ( v15 >= 1 )
        {
          do
          {
            v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v8->klass->vtable._15_ReadInt32.methodPtr)(
                    v8,
                    v8->klass->vtable._15_ReadInt32.method);
            v18 = sub_1C32E6C(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v18, 0);
            if ( !v18 )
              sub_1C32E7C(v19);
            *(_DWORD *)(v18 + 16) = v16;
            *(_DWORD *)(v18 + 20) = v17;
            v22 = UserEquipNewManager_TypeInfo;
            if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
              v22 = UserEquipNewManager_TypeInfo;
            }
            openList = (System_Collections_Generic_List_object__o *)v22->static_fields->openList;
            if ( !openList )
              sub_1C32E7C(0);
            items = openList->fields._items;
            v25 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__;
            ++openList->fields._version;
            if ( !items )
              sub_1C32E7C(openList);
            size = openList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                openList,
                (Il2CppObject *)v18,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              openList->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v18;
              sub_1C32BC4((CGThumbnailListItem_o *)(v27 + 4), v18, v20, v21);
            }
            --v15;
          }
          while ( v15 );
        }
        v12 = 8;
      }
      klass = v8->klass;
      v29 = *(unsigned __int16 *)&v8->klass->_2.rank;
      if ( *(_WORD *)&v8->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v29;
          p_offset += 4;
          if ( !v29 )
            goto LABEL_36;
        }
        v31 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_36:
        v31 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v8, *(_QWORD *)(v31 + 8));
      if ( (v12 | 8) == 8 )
        return 1;
    }
    else
    {
      v32 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v32);
    }
    return 0;
  }
  return 1;
}


void UserEquipNewManager__SetOld(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *openList; // x0
  __int64 v6; // x8
  int v7; // w8
  int v8; // w23
  int32_t i; // w21
  __int64 v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UserEquipNewManager_c *v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  __int64 v17; // x8
  UserEquipNewManager_c *v18; // x0

  if ( (byte_4C38E33 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_1C32C20(&UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E33 = 1;
  }
  openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  v6 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 16LL);
  if ( !v6 )
    goto LABEL_29;
  v7 = *(_DWORD *)(v6 + 24);
  v8 = v7 - 1;
  if ( v7 < 1 )
  {
LABEL_15:
    v10 = sub_1C32E6C(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 16) = equipId;
      *(_DWORD *)(v10 + 20) = lv;
      v13 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v13 = UserEquipNewManager_TypeInfo;
      }
      openList = (System_Collections_Generic_List_object__o *)v13->static_fields->openList;
      if ( openList )
      {
        items = openList->fields._items;
        v15 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              openList,
              (Il2CppObject *)v10,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = (__int64)items + 8 * size;
            openList->fields._size = size + 1;
            *(_QWORD *)(v17 + 32) = v10;
            sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 32), v10, v11, v12);
          }
          goto LABEL_23;
        }
      }
    }
LABEL_29:
    sub_1C32E7C(openList);
  }
  for ( i = 0; ; ++i )
  {
    if ( !openList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(openList);
      openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
    }
    openList = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&openList[4].fields._size + 16LL);
    if ( !openList )
      goto LABEL_29;
    openList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              openList,
                                                              i,
                                                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    if ( !openList )
      goto LABEL_29;
    if ( LODWORD(openList->fields._items) == equipId )
      break;
    if ( v8 == i )
      goto LABEL_15;
    openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  if ( HIDWORD(openList->fields._items) != lv )
  {
    HIDWORD(openList->fields._items) = lv;
    v18 = UserEquipNewManager_TypeInfo;
    if ( UserEquipNewManager_TypeInfo->_2.cctor_finished )
      goto LABEL_24;
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
LABEL_23:
    v18 = UserEquipNewManager_TypeInfo;
LABEL_24:
    v18->static_fields->isModfiy = 1;
  }
}


bool UserEquipNewManager__WriteData(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  struct UserEquipNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  UserEquipNewManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  UserEquipNewManager_c *v9; // x0
  struct UserEquipNewManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x9
  int size; // w20
  int32_t i; // w21
  UserEquipNewManager_c *v14; // x0
  System_Collections_Generic_List_object__o *v15; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v17; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4C38E35 & 1) == 0 )
  {
    sub_1C32C20(&System_IO_BinaryWriter_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_1C32C20(&ManagerConfig_TypeInfo);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38E35 = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v1 = UserEquipNewManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = UserEquipNewManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  if ( v3->static_fields->UseMock )
    return 0;
  v5 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v5);
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0);
  v8 = (System_IO_BinaryWriter_o *)sub_1C32E6C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64429848(v8, v7, 0);
  v9 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v9 = UserEquipNewManager_TypeInfo;
  }
  v10 = v9->static_fields;
  openList = v10->openList;
  if ( !openList )
    sub_1C32E7C(v9);
  if ( !v8 )
    sub_1C32E7C(v9);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v8->klass->vtable._22_Write.methodPtr)(
    v8,
    v10->SAVE_DATA_VERSION,
    v8->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v8->klass->vtable._8_Write.methodPtr)(
    v8,
    UserEquipNewManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v14 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v14 = UserEquipNewManager_TypeInfo;
      }
      v15 = (System_Collections_Generic_List_object__o *)v14->static_fields->openList;
      if ( !v15 )
        sub_1C32E7C(0);
      Item = System_Collections_Generic_List_object___get_Item(
               v15,
               i,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
      v17 = Item;
      if ( !Item )
        sub_1C32E7C(0);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v8->klass->vtable._17_Write.methodPtr)(
        v8,
        HIDWORD(v17[1].klass),
        v8->klass->vtable._17_Write.method);
    }
  }
  klass = v8->klass;
  v19 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_29;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_29:
    v21 = sub_1C83438(v8, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  return 1;
}


System_String_o *UserEquipNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C38E2C & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    sub_1C32C20(&DatFileName_TypeInfo);
    sub_1C32C20(&StringLiteral_1048/*"/"*/);
    byte_4C38E2C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(8, 0);
  return System_String__Concat_63556792(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void UserEquipNewManager_UserEquipLvInfo___ctor(UserEquipNewManager_UserEquipLvInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}