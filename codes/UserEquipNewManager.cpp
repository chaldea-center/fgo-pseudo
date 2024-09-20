void __fastcall UserEquipNewManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_Collections_Generic_List_object__o *v3; // x19
  struct UserEquipNewManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5C3B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6634/*"Fgo_20150511_1"*/);
    byte_4A5C3B3 = 1;
  }
  UserEquipNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6634/*"Fgo_20150511_1"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)UserEquipNewManager_TypeInfo->static_fields,
    StringLiteral_6634/*"Fgo_20150511_1"*/,
    v1,
    v2);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
  static_fields = UserEquipNewManager_TypeInfo->static_fields;
  static_fields->openList = (struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->openList, (int32_t)v3, v5, v6);
}


void __fastcall UserEquipNewManager___ctor(UserEquipNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserEquipNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4A5C3AD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3AD = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v2 = UserEquipNewManager_TypeInfo;
  }
  openList = v2->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserEquipNewManager_TypeInfo;
    openList = UserEquipNewManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_1B8880C(v2, v1);
  }
  size = openList->fields._size;
  v5 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v5;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0LL);
    v2 = UserEquipNewManager_TypeInfo;
  }
LABEL_11:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserEquipNewManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void __fastcall UserEquipNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4A5C3AB & 1) == 0 )
  {
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3AB = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__DeleteSaveData((const MethodInfo *)v1);
  UserEquipNewManager__ClearSaveDataList(v2);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserEquipNewManager__WriteData(v3);
}


void __fastcall UserEquipNewManager__DeleteSaveData(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4A5C3AA & 1) == 0 )
  {
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3AA = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserEquipNewManager__Initialize(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0

  if ( (byte_4A5C3AC & 1) == 0 )
  {
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3AC = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__ReadData((const MethodInfo *)v1);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEquipNewManager__IsNew(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v6; // x8
  int v7; // w22
  int v8; // w25
  bool v9; // w24

  if ( (byte_4A5C3AF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3AF = 1;
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
                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
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
    sub_1B8880C(Item, *(_QWORD *)&lv);
  }
  return 0;
}


void __fastcall UserEquipNewManager__LoginProcess(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_4A5C3AE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3AE = 1;
  }
  v1 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v1 = UserEquipNewManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL )
    {
      sub_1B8880C(Instance, v3);
    }
    UserEquipMaster__continueDeviceEquipLvInfo((UserEquipMaster_o *)Instance, 0LL);
    v4 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v4 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    }
    *((_WORD *)v4[2].virtualMethodPointer + 4) = 1;
    UserEquipNewManager__WriteData(v4);
  }
}


bool __fastcall UserEquipNewManager__ReadData(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserEquipNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserEquipNewManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  UserEquipNewManager_c *v12; // x0
  int v13; // w21
  char v14; // w20
  UserEquipNewManager_c *v15; // x0
  int v16; // w20
  int v17; // w22
  int v18; // w23
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  UserEquipNewManager_c *v24; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  UserEquipNewManager_c *v34; // x0

  if ( (byte_4A5C3B1 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryReader_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3B1 = 1;
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
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v6 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v6);
      v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v8 = (System_IO_BinaryReader_o *)sub_1B887FC(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v8, v7, 0LL);
      if ( !v8 )
        sub_1B8880C(v9, v10);
      v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                                 v8,
                                 v8->klass->vtable._23_ReadChars.methodPtr);
      v12 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v12 = UserEquipNewManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
      {
        v13 = 5;
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
                v8,
                v8->klass->vtable._10_ReadByte.methodPtr);
        v15 = UserEquipNewManager_TypeInfo;
        if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
          v15 = UserEquipNewManager_TypeInfo;
        }
        v15->static_fields->isContinueDevice = v14 & 1;
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v16 >= 1 )
        {
          do
          {
            v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                    v8,
                    v8->klass->vtable._16_ReadUInt32.methodPtr);
            v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                    v8,
                    v8->klass->vtable._16_ReadUInt32.methodPtr);
            v19 = sub_1B887FC(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v19, 0LL);
            if ( !v19 )
              sub_1B8880C(v20, v21);
            *(_DWORD *)(v19 + 16) = v17;
            *(_DWORD *)(v19 + 20) = v18;
            v24 = UserEquipNewManager_TypeInfo;
            if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
              v24 = UserEquipNewManager_TypeInfo;
            }
            openList = (System_Collections_Generic_List_object__o *)v24->static_fields->openList;
            if ( !openList )
              sub_1B8880C(0LL, v21);
            items = openList->fields._items;
            v27 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__;
            ++openList->fields._version;
            if ( !items )
              sub_1B8880C(openList, v21);
            size = openList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                openList,
                (Il2CppObject *)v19,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &items->obj.klass + size;
              openList->fields._size = size + 1;
              v29[4] = (Il2CppClass *)v19;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v19, v22, v23);
            }
            --v16;
          }
          while ( v16 );
        }
        v13 = 8;
      }
      klass = v8->klass;
      v31 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v31;
          p_offset += 4;
          if ( !v31 )
            goto LABEL_36;
        }
        v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_36:
        v33 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v8, *(_QWORD *)(v33 + 8));
      if ( (v13 | 8) == 8 )
        return 1;
    }
    else
    {
      v34 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v34);
    }
    return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEquipNewManager__SetOld(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *openList; // x0
  __int64 v6; // x8
  int v7; // w8
  int v8; // w23
  int32_t i; // w21
  __int64 v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  UserEquipNewManager_c *v13; // x0
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  __int64 v17; // x8
  UserEquipNewManager_c *v18; // x0

  if ( (byte_4A5C3B0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_1B885B0(&UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3B0 = 1;
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
    v10 = sub_1B887FC(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              openList,
              (Il2CppObject *)v10,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            v17 = (__int64)items + 8 * size;
            openList->fields._size = size + 1;
            *(_QWORD *)(v17 + 32) = v10;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), v10, v11, v12);
          }
          goto LABEL_23;
        }
      }
    }
LABEL_29:
    sub_1B8880C(openList, *(_QWORD *)&lv);
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
                                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
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


bool __fastcall UserEquipNewManager__WriteData(const MethodInfo *method)
{
  UserEquipNewManager_c *v1; // x0
  struct UserEquipNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  UserEquipNewManager_c *v5; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryWriter_o *v8; // x19
  __int64 v9; // x1
  UserEquipNewManager_c *v10; // x0
  struct UserEquipNewManager_StaticFields *v11; // x8
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x9
  int size; // w20
  __int64 v14; // x1
  int32_t i; // w21
  UserEquipNewManager_c *v16; // x0
  System_Collections_Generic_List_object__o *v17; // x0
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0

  if ( (byte_4A5C3B2 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_BinaryWriter_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    sub_1B885B0(&ManagerConfig_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5C3B2 = 1;
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
  v7 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v8 = (System_IO_BinaryWriter_o *)sub_1B887FC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61945196(v8, v7, 0LL);
  v10 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v10 = UserEquipNewManager_TypeInfo;
  }
  v11 = v10->static_fields;
  openList = v11->openList;
  if ( !openList )
    sub_1B8880C(v10, v9);
  if ( !v8 )
    sub_1B8880C(v10, v9);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v8->klass->vtable._22_Write.method)(
    v8,
    v11->SAVE_DATA_VERSION,
    v8->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v8->klass->vtable._8_Write.method)(
    v8,
    UserEquipNewManager_TypeInfo->static_fields->isContinueDevice,
    v8->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
    v8,
    (unsigned int)size,
    v8->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v16 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v16 = UserEquipNewManager_TypeInfo;
      }
      v17 = (System_Collections_Generic_List_object__o *)v16->static_fields->openList;
      if ( !v17 )
        sub_1B8880C(0LL, v14);
      Item = System_Collections_Generic_List_object___get_Item(
               v17,
               i,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
      v20 = Item;
      if ( !Item )
        sub_1B8880C(0LL, v19);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        LODWORD(Item[1].klass),
        v8->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v8->klass->vtable._17_Write.method)(
        v8,
        HIDWORD(v20[1].klass),
        v8->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v8->klass;
  v22 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_29;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v24 = sub_1BDA590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
  return 1;
}


System_String_o *__fastcall UserEquipNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5C3A9 & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C3A9 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(8, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


void __fastcall UserEquipNewManager_UserEquipLvInfo___ctor(
        UserEquipNewManager_UserEquipLvInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}