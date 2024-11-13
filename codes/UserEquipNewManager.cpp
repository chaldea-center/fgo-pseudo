void __fastcall UserEquipNewManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v17; // x19
  struct UserEquipNewManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1747C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6754/*"Fgo_20150511_1"*/, v12, v13);
    byte_4B1747C = 1;
  }
  UserEquipNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6754/*"Fgo_20150511_1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserEquipNewManager_TypeInfo->static_fields,
    StringLiteral_6754/*"Fgo_20150511_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
  static_fields = UserEquipNewManager_TypeInfo->static_fields;
  static_fields->openList = (struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->openList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall UserEquipNewManager___ctor(UserEquipNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserEquipNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  UserEquipNewManager_c *v7; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int32_t size; // w2
  int v10; // w9

  if ( (byte_4B17476 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v3, v4);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v5, v6);
    byte_4B17476 = 1;
  }
  v7 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    v7 = UserEquipNewManager_TypeInfo;
  }
  openList = v7->static_fields->openList;
  if ( !openList )
    goto LABEL_14;
  if ( openList->fields._size < 1 )
    goto LABEL_11;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = UserEquipNewManager_TypeInfo;
    openList = UserEquipNewManager_TypeInfo->static_fields->openList;
    if ( !openList )
LABEL_14:
      sub_1BCAA3C(v7, v1);
  }
  size = openList->fields._size;
  v10 = openList->fields._version + 1;
  openList->fields._size = 0;
  openList->fields._version = v10;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)openList->fields._items, 0, size, 0LL);
    v7 = UserEquipNewManager_TypeInfo;
  }
LABEL_11:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = UserEquipNewManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall UserEquipNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserEquipNewManager_c *v3; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4B17474 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v1, v2);
    byte_4B17474 = 1;
  }
  v3 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  UserEquipNewManager__DeleteSaveData((const MethodInfo *)v3);
  UserEquipNewManager__ClearSaveDataList(v4);
  *(_WORD *)&UserEquipNewManager_TypeInfo->static_fields->isModfiy = 257;
  UserEquipNewManager__WriteData(v5);
}


void __fastcall UserEquipNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserEquipNewManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B17473 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v1, v2);
    byte_4B17473 = 1;
  }
  v3 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserEquipNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserEquipNewManager_c *v3; // x0

  if ( (byte_4B17475 & 1) == 0 )
  {
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v1, v2);
    byte_4B17475 = 1;
  }
  v3 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  UserEquipNewManager__ReadData((const MethodInfo *)v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEquipNewManager__IsNew(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v10; // x8
  int v11; // w22
  int v12; // w25
  bool v13; // w24

  if ( (byte_4B17478 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__,
      *(_QWORD *)&lv,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v5, v6);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v7, v8);
    byte_4B17478 = 1;
  }
  Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, *(_QWORD *)&lv);
    Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  v10 = *(_QWORD *)(*(_QWORD *)&Item[4].fields._size + 16LL);
  if ( !v10 )
    goto LABEL_18;
  v11 = *(_DWORD *)(v10 + 24);
  if ( v11 >= 1 )
  {
    v12 = 1;
    v13 = 1;
    while ( 1 )
    {
      if ( !Item[5].fields._size )
      {
        j_il2cpp_runtime_class_init_0(Item, *(_QWORD *)&lv);
        Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
      }
      Item = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&Item[4].fields._size + 16LL);
      if ( !Item )
        break;
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            v12 - 1,
                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
      if ( !Item )
        break;
      if ( LODWORD(Item->fields._items) == equipId && SHIDWORD(Item->fields._items) < lv )
        return v13;
      v13 = v12 < v11;
      if ( v11 == v12 )
        return v13;
      Item = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
      ++v12;
    }
LABEL_18:
    sub_1BCAA3C(Item, *(_QWORD *)&lv);
  }
  return 0;
}


void __fastcall UserEquipNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  UserEquipNewManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x0

  if ( (byte_4B17477 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v5, v6);
    byte_4B17477 = 1;
  }
  v7 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    v7 = UserEquipNewManager_TypeInfo;
  }
  if ( v7->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v9);
    }
    UserEquipMaster__continueDeviceEquipLvInfo((UserEquipMaster_o *)Instance, 0LL);
    v11 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v10);
      v11 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    }
    *((_WORD *)v11[2].virtualMethodPointer + 4) = 1;
    UserEquipNewManager__WriteData(v11);
  }
}


bool __fastcall UserEquipNewManager__ReadData(const MethodInfo *method)
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
  UserEquipNewManager_c *v13; // x0
  ManagerConfig_c *v14; // x0
  UserEquipNewManager_c *v16; // x0
  System_String_o *SaveFileName; // x19
  __int64 v18; // x1
  UserEquipNewManager_c *v19; // x0
  System_IO_Stream_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_IO_BinaryReader_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  System_String_o *v28; // x20
  UserEquipNewManager_c *v29; // x0
  int v30; // w21
  __int64 v31; // x1
  char v32; // w20
  UserEquipNewManager_c *v33; // x0
  int v34; // w20
  int v35; // w22
  int v36; // w23
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  int64_t v40; // x21
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UserEquipNewManager_c *v49; // x0
  System_Collections_Generic_List_object__o *openList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v56; // x9
  int32_t *p_offset; // x10
  __int64 v58; // x0
  UserEquipNewManager_c *v59; // x0

  if ( (byte_4B1747A & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v11, v12);
    byte_4B1747A = 1;
  }
  v13 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    v13 = UserEquipNewManager_TypeInfo;
  }
  v13->static_fields->isModfiy = 0;
  v14 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v14 = ManagerConfig_TypeInfo;
  }
  if ( !v14->static_fields->UseMock )
  {
    v16 = UserEquipNewManager_TypeInfo;
    if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v16);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v19 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v18);
      UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v19);
      v20 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v24 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v21, v22, v23);
      System_IO_BinaryReader___ctor(v24, v20, 0LL);
      if ( !v24 )
        sub_1BCAA3C(v25, v26);
      v28 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._22_ReadString.method)(
                                 v24,
                                 v24->klass->vtable._23_ReadChars.methodPtr);
      v29 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v27);
        v29 = UserEquipNewManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v29->static_fields->SAVE_DATA_VERSION, v28, 0LL) )
      {
        v30 = 5;
      }
      else
      {
        v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._9_ReadBoolean.method)(
                v24,
                v24->klass->vtable._10_ReadByte.methodPtr);
        v33 = UserEquipNewManager_TypeInfo;
        if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v31);
          v33 = UserEquipNewManager_TypeInfo;
        }
        v33->static_fields->isContinueDevice = v32 & 1;
        v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                v24,
                v24->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v34 >= 1 )
        {
          do
          {
            v35 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                    v24,
                    v24->klass->vtable._16_ReadUInt32.methodPtr);
            v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v24->klass->vtable._15_ReadInt32.method)(
                    v24,
                    v24->klass->vtable._16_ReadUInt32.methodPtr);
            v40 = sub_1BCAA2C(UserEquipNewManager_UserEquipLvInfo_TypeInfo, v37, v38, v39);
            System_Object___ctor((Il2CppObject *)v40, 0LL);
            if ( !v40 )
              sub_1BCAA3C(v41, v42);
            *(_DWORD *)(v40 + 16) = v35;
            *(_DWORD *)(v40 + 20) = v36;
            v49 = UserEquipNewManager_TypeInfo;
            if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v42);
              v49 = UserEquipNewManager_TypeInfo;
            }
            openList = (System_Collections_Generic_List_object__o *)v49->static_fields->openList;
            if ( !openList )
              sub_1BCAA3C(0LL, v42);
            items = openList->fields._items;
            v52 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__;
            ++openList->fields._version;
            if ( !items )
              sub_1BCAA3C(openList, v42);
            size = openList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                openList,
                (Il2CppObject *)v40,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            }
            else
            {
              v54 = &items->obj.klass + size;
              openList->fields._size = size + 1;
              v54[4] = (Il2CppClass *)v40;
              sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), v40, v43, v44, v45, v46, v47, v48);
            }
            --v34;
          }
          while ( v34 );
        }
        v30 = 8;
      }
      klass = v24->klass;
      v56 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v56;
          p_offset += 4;
          if ( !v56 )
            goto LABEL_36;
        }
        v58 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_36:
        v58 = sub_1C1C7C0(v24, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v58)(v24, *(_QWORD *)(v58 + 8));
      if ( (v30 | 8) == 8 )
        return 1;
    }
    else
    {
      v59 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v18);
      UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v59);
    }
    return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEquipNewManager__SetOld(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *openList; // x0
  __int64 v15; // x8
  int v16; // w8
  int v17; // w23
  int32_t i; // w21
  int64_t v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UserEquipNewManager_c *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x8
  UserEquipNewManager_c *v31; // x0

  if ( (byte_4B17479 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__,
      *(_QWORD *)&lv,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v8, v9);
    sub_1BCA7E0(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v12, v13);
    byte_4B17479 = 1;
  }
  openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, *(_QWORD *)&lv);
    openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  v15 = *(_QWORD *)(*(_QWORD *)&openList[4].fields._size + 16LL);
  if ( !v15 )
    goto LABEL_29;
  v16 = *(_DWORD *)(v15 + 24);
  v17 = v16 - 1;
  if ( v16 < 1 )
  {
LABEL_15:
    v19 = sub_1BCAA2C(UserEquipNewManager_UserEquipLvInfo_TypeInfo, *(_QWORD *)&lv, method, v3);
    System_Object___ctor((Il2CppObject *)v19, 0LL);
    if ( v19 )
    {
      *(_DWORD *)(v19 + 16) = equipId;
      *(_DWORD *)(v19 + 20) = lv;
      v26 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, *(_QWORD *)&lv);
        v26 = UserEquipNewManager_TypeInfo;
      }
      openList = (System_Collections_Generic_List_object__o *)v26->static_fields->openList;
      if ( openList )
      {
        items = openList->fields._items;
        v28 = Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__;
        ++openList->fields._version;
        if ( items )
        {
          size = openList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              openList,
              (Il2CppObject *)v19,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = (__int64)items + 8 * size;
            openList->fields._size = size + 1;
            *(_QWORD *)(v30 + 32) = v19;
            sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 32), v19, v20, v21, v22, v23, v24, v25);
          }
          goto LABEL_23;
        }
      }
    }
LABEL_29:
    sub_1BCAA3C(openList, *(_QWORD *)&lv);
  }
  for ( i = 0; ; ++i )
  {
    if ( !openList[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(openList, *(_QWORD *)&lv);
      openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
    }
    openList = *(System_Collections_Generic_List_object__o **)(*(_QWORD *)&openList[4].fields._size + 16LL);
    if ( !openList )
      goto LABEL_29;
    openList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              openList,
                                                              i,
                                                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
    if ( !openList )
      goto LABEL_29;
    if ( LODWORD(openList->fields._items) == equipId )
      break;
    if ( v17 == i )
      goto LABEL_15;
    openList = (System_Collections_Generic_List_object__o *)UserEquipNewManager_TypeInfo;
  }
  if ( HIDWORD(openList->fields._items) != lv )
  {
    HIDWORD(openList->fields._items) = lv;
    v31 = UserEquipNewManager_TypeInfo;
    if ( UserEquipNewManager_TypeInfo->_2.cctor_finished )
      goto LABEL_24;
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, *(_QWORD *)&lv);
LABEL_23:
    v31 = UserEquipNewManager_TypeInfo;
LABEL_24:
    v31->static_fields->isModfiy = 1;
  }
}


bool __fastcall UserEquipNewManager__WriteData(const MethodInfo *method)
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
  UserEquipNewManager_c *v13; // x0
  struct UserEquipNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  UserEquipNewManager_c *v17; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_IO_BinaryWriter_o *v23; // x19
  __int64 v24; // x1
  UserEquipNewManager_c *v25; // x0
  struct UserEquipNewManager_StaticFields *v26; // x8
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x9
  int size; // w20
  __int64 v29; // x1
  int32_t i; // w21
  UserEquipNewManager_c *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4B1747B & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v11, v12);
    byte_4B1747B = 1;
  }
  v13 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
    v13 = UserEquipNewManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = UserEquipNewManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( v15->static_fields->UseMock )
    return 0;
  v17 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v1);
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v17);
  v19 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v23 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v20, v21, v22);
  System_IO_BinaryWriter___ctor_62639712(v23, v19, 0LL);
  v25 = UserEquipNewManager_TypeInfo;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v24);
    v25 = UserEquipNewManager_TypeInfo;
  }
  v26 = v25->static_fields;
  openList = v26->openList;
  if ( !openList )
    sub_1BCAA3C(v25, v24);
  if ( !v23 )
    sub_1BCAA3C(v25, v24);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v23->klass->vtable._22_Write.method)(
    v23,
    v26->SAVE_DATA_VERSION,
    v23->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v23->klass->vtable._8_Write.method)(
    v23,
    UserEquipNewManager_TypeInfo->static_fields->isContinueDevice,
    v23->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
    v23,
    (unsigned int)size,
    v23->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v31 = UserEquipNewManager_TypeInfo;
      if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v29);
        v31 = UserEquipNewManager_TypeInfo;
      }
      v32 = (System_Collections_Generic_List_object__o *)v31->static_fields->openList;
      if ( !v32 )
        sub_1BCAA3C(0LL, v29);
      Item = System_Collections_Generic_List_object___get_Item(
               v32,
               i,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__);
      v35 = Item;
      if ( !Item )
        sub_1BCAA3C(0LL, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        LODWORD(Item[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v23->klass->vtable._17_Write.method)(
        v23,
        HIDWORD(v35[1].klass),
        v23->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v23->klass;
  v37 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_29;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_29:
    v39 = sub_1C1C7C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  return 1;
}


System_String_o *__fastcall UserEquipNewManager__getSaveFileName(const MethodInfo *method)
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

  if ( (byte_4B17472 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17472 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(8, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


void __fastcall UserEquipNewManager_UserEquipLvInfo___ctor(
        UserEquipNewManager_UserEquipLvInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}