void __fastcall UserEquipNewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x19
  struct UserEquipNewManager_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FD62D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__, v1);
    sub_1B640C8(&System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo, v4);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_6608/*"Fgo_20150511_1"*/, v6);
    byte_49FD62D = 1;
  }
  UserEquipNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6608/*"Fgo_20150511_1"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)UserEquipNewManager_TypeInfo->static_fields,
    StringLiteral_6608/*"Fgo_20150511_1"*/,
    v2,
    v3);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 0;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo,
                                                      v7,
                                                      v8);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
  static_fields = UserEquipNewManager_TypeInfo->static_fields;
  static_fields->openList = (struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->openList, (int32_t)v9, v11, v12);
}


void __fastcall UserEquipNewManager___ctor(UserEquipNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserEquipNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserEquipNewManager_c *v4; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_49FD627 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__, v1);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v2);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v3);
    byte_49FD627 = 1;
  }
  v4 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v4 = UserEquipNewManager_TypeInfo;
  }
  openList = v4->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserEquipNewManager_TypeInfo;
    openList = UserEquipNewManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_1B64324(v4);
  }
  size = openList->fields._size;
  v7 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v7;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0LL);
    v4 = UserEquipNewManager_TypeInfo;
  }
LABEL_11:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserEquipNewManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall UserEquipNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_49FD625 & 1) == 0 )
  {
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v1);
    byte_49FD625 = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__DeleteSaveData((const MethodInfo *)v2);
  UserEquipNewManager__ClearSaveDataList(v3);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserEquipNewManager__WriteData(v4);
}


void __fastcall UserEquipNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_49FD624 & 1) == 0 )
  {
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v1);
    byte_49FD624 = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserEquipNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0

  if ( (byte_49FD626 & 1) == 0 )
  {
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v1);
    byte_49FD626 = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEquipNewManager__IsNew(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v8; // x8
  int v9; // w22
  int v10; // w25
  bool v11; // w24

  if ( (byte_49FD629 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__,
      *(_QWORD *)&lv);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v5);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v6);
    byte_49FD629 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  v8 = *(_QWORD *)(*(_QWORD *)&Item[4].fields._size + 16LL);
  if ( !v8 )
    goto LABEL_18;
  v9 = *(_DWORD *)(v8 + 24);
  if ( v9 >= 1 )
  {
    v10 = 1;
    v11 = 1;
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
                                                            v10 - 1,
                                                            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
      if ( !Item )
        break;
      if ( LODWORD(Item->fields._items) == equipId && SHIDWORD(Item->fields._items) < lv )
        return v11;
      v11 = v10 < v9;
      if ( v9 == v10 )
        return v11;
      Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
      ++v10;
    }
LABEL_18:
    sub_1B64324(Item);
  }
  return 0;
}


void __fastcall UserEquipNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserEquipNewManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x0

  if ( (byte_49FD628 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEquipMaster___, v1);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v3);
    byte_49FD628 = 1;
  }
  v4 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v4 = UserEquipNewManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL )
    {
      sub_1B64324(Instance);
    }
    UserEquipMaster__continueDeviceEquipLvInfo((UserEquipMaster_o *)Instance, 0LL);
    v6 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v6 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    }
    *((_WORD *)v6[2].virtualMethodPointer + 4) = 1;
    UserEquipNewManager__WriteData(v6);
  }
}


bool __fastcall UserEquipNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserEquipNewManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  UserEquipNewManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  UserEquipNewManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryReader_o *v16; // x19
  __int64 v17; // x0
  System_String_o *v18; // x20
  UserEquipNewManager_c *v19; // x0
  int v20; // w21
  char v21; // w20
  UserEquipNewManager_c *v22; // x0
  int v23; // w20
  int v24; // w22
  int v25; // w23
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x21
  __int64 v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  UserEquipNewManager_c *v32; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0
  UserEquipNewManager_c *v42; // x0

  if ( (byte_49FD62B & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__, v3);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v5);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v6);
    byte_49FD62B = 1;
  }
  v7 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v7 = UserEquipNewManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( !v8->static_fields->UseMock )
  {
    v10 = UserEquipNewManager_TypeInfo;
    if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v10);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v12 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v12);
      v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v16 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v14, v15);
      System_IO_BinaryReader___ctor(v16, v13, 0LL);
      if ( !v16 )
        sub_1B64324(v17);
      v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                                 v16,
                                 v16->klass->vtable._23_ReadChars.methodPtr);
      v19 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v19 = UserEquipNewManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
      {
        v20 = 5;
      }
      else
      {
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
                v16,
                v16->klass->vtable._10_ReadByte.methodPtr);
        v22 = UserEquipNewManager_TypeInfo;
        if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
          v22 = UserEquipNewManager_TypeInfo;
        }
        v22->static_fields->isContinueDevice = v21 & 1;
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                v16,
                v16->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v23 >= 1 )
        {
          do
          {
            v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                    v16,
                    v16->klass->vtable._16_ReadUInt32.methodPtr);
            v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                    v16,
                    v16->klass->vtable._16_ReadUInt32.methodPtr);
            v28 = sub_1B64314(UserEquipNewManager_UserEquipLvInfo_TypeInfo, v26, v27);
            System_Object___ctor((Il2CppObject *)v28, 0LL);
            if ( !v28 )
              sub_1B64324(v29);
            *(_DWORD *)(v28 + 16) = v24;
            *(_DWORD *)(v28 + 20) = v25;
            v32 = UserEquipNewManager_TypeInfo;
            if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
              v32 = UserEquipNewManager_TypeInfo;
            }
            openList = (System_Collections_Generic_List_object__o *)v32->static_fields->openList;
            if ( !openList )
              sub_1B64324(0LL);
            items = openList->fields._items;
            v35 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__;
            ++openList->fields._version;
            if ( !items )
              sub_1B64324(openList);
            size = openList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                openList,
                (Il2CppObject *)v28,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &items->obj.klass + size;
              openList->fields._size = size + 1;
              v37[4] = (Il2CppClass *)v28;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), v28, v30, v31);
            }
            --v23;
          }
          while ( v23 );
        }
        v20 = 8;
      }
      klass = v16->klass;
      v39 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v39;
          p_offset += 4;
          if ( !v39 )
            goto LABEL_36;
        }
        v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_36:
        v41 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v16, *(_QWORD *)(v41 + 8));
      if ( (v20 | 8) == 8 )
        return 1;
    }
    else
    {
      v42 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v42);
    }
    return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEquipNewManager__SetOld(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *openList; // x0
  __int64 v10; // x8
  int v11; // w8
  int v12; // w23
  int32_t i; // w21
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  UserEquipNewManager_c *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  __int64 v21; // x8
  UserEquipNewManager_c *v22; // x0

  if ( (byte_49FD62A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__, *(_QWORD *)&lv);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v6);
    sub_1B640C8(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v7);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v8);
    byte_49FD62A = 1;
  }
  openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  v10 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 16LL);
  if ( !v10 )
    goto LABEL_29;
  v11 = *(_DWORD *)(v10 + 24);
  v12 = v11 - 1;
  if ( v11 < 1 )
  {
LABEL_15:
    v14 = sub_1B64314(UserEquipNewManager_UserEquipLvInfo_TypeInfo, *(_QWORD *)&lv, method);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 16) = equipId;
      *(_DWORD *)(v14 + 20) = lv;
      v17 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v17 = UserEquipNewManager_TypeInfo;
      }
      openList = (System_Collections_Generic_List_object__o *)v17->static_fields->openList;
      if ( openList )
      {
        items = openList->fields._items;
        v19 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              openList,
              (Il2CppObject *)v14,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = (__int64)items + 8 * size;
            openList->fields._size = size + 1;
            *(_QWORD *)(v21 + 32) = v14;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 32), v14, v15, v16);
          }
          goto LABEL_23;
        }
      }
    }
LABEL_29:
    sub_1B64324(openList);
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
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    if ( !openList )
      goto LABEL_29;
    if ( LODWORD(openList->fields._items) == equipId )
      break;
    if ( v12 == i )
      goto LABEL_15;
    openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  if ( HIDWORD(openList->fields._items) != lv )
  {
    HIDWORD(openList->fields._items) = lv;
    v22 = UserEquipNewManager_TypeInfo;
    if ( UserEquipNewManager_TypeInfo->_2.cctor_finished )
      goto LABEL_24;
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
LABEL_23:
    v22 = UserEquipNewManager_TypeInfo;
LABEL_24:
    v22->static_fields->isModfiy = 1;
  }
}


bool __fastcall UserEquipNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserEquipNewManager_c *v7; // x0
  struct UserEquipNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  UserEquipNewManager_c *v11; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_IO_BinaryWriter_o *v16; // x19
  UserEquipNewManager_c *v17; // x0
  struct UserEquipNewManager_StaticFields *v18; // x8
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x9
  int size; // w20
  int32_t i; // w21
  UserEquipNewManager_c *v22; // x0
  System_Collections_Generic_List_object__o *v23; // x0
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0

  if ( (byte_49FD62C & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1B640C8(&System_IDisposable_TypeInfo, v2);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v4);
    sub_1B640C8(&ManagerConfig_TypeInfo, v5);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v6);
    byte_49FD62C = 1;
  }
  v7 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v7 = UserEquipNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = UserEquipNewManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v9 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v9 = ManagerConfig_TypeInfo;
  }
  if ( v9->static_fields->UseMock )
    return 0;
  v11 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v11);
  v13 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v16 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v14, v15);
  System_IO_BinaryWriter___ctor_61613552(v16, v13, 0LL);
  v17 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v17 = UserEquipNewManager_TypeInfo;
  }
  v18 = v17->static_fields;
  openList = v18->openList;
  if ( !openList )
    sub_1B64324(v17);
  if ( !v16 )
    sub_1B64324(v17);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v18->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    UserEquipNewManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v22 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v22 = UserEquipNewManager_TypeInfo;
      }
      v23 = (System_Collections_Generic_List_object__o *)v22->static_fields->openList;
      if ( !v23 )
        sub_1B64324(0LL);
      Item = System_Collections_Generic_List_object___get_Item(
               v23,
               i,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1B64324(0LL);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        LODWORD(Item[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        HIDWORD(v25[1].klass),
        v16->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v16->klass;
  v27 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_29;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v29 = sub_1BB60A8(v16, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v16, *(_QWORD *)(v29 + 8));
  return 1;
}


System_String_o *__fastcall UserEquipNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FD623 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&DatFileName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FD623 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(8, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


void __fastcall UserEquipNewManager_UserEquipLvInfo___ctor(
        UserEquipNewManager_UserEquipLvInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}