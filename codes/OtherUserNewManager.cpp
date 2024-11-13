void __fastcall OtherUserNewManager___cctor(const MethodInfo *method)
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
  struct OtherUserNewManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B1734F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v8, v9);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6755/*"Fgo_20151127_1"*/, v12, v13);
    byte_4B1734F = 1;
  }
  OtherUserNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6755/*"Fgo_20151127_1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)OtherUserNewManager_TypeInfo->static_fields,
    StringLiteral_6755/*"Fgo_20151127_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&OtherUserNewManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v14,
                                                     v15,
                                                     v16);
  System_Collections_Generic_List_long____ctor(
    v17,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = OtherUserNewManager_TypeInfo->static_fields;
  static_fields->oldList = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->oldList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall OtherUserNewManager___ctor(OtherUserNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OtherUserNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  OtherUserNewManager_c *v7; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int v9; // w9

  if ( (byte_4B17348 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Clear__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v3, v4);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v5, v6);
    byte_4B17348 = 1;
  }
  v7 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    v7 = OtherUserNewManager_TypeInfo;
  }
  oldList = v7->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = OtherUserNewManager_TypeInfo;
    oldList = OtherUserNewManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_1BCAA3C(v7, v1);
  }
  v9 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v9;
LABEL_10:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = OtherUserNewManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OtherUserNewManager_c *v3; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4B17346 & 1) == 0 )
  {
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v1, v2);
    byte_4B17346 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
  OtherUserNewManager__DeleteSaveData((const MethodInfo *)v3);
  OtherUserNewManager__ClearSaveDataList(v4);
  *(_WORD *)&OtherUserNewManager_TypeInfo->static_fields->isModfiy = 257;
  OtherUserNewManager__WriteData(v5);
}


void __fastcall OtherUserNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OtherUserNewManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B17345 & 1) == 0 )
  {
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v1, v2);
    byte_4B17345 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall OtherUserNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  OtherUserNewManager_c *v3; // x0

  if ( (byte_4B17347 & 1) == 0 )
  {
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v1, v2);
    byte_4B17347 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
  OtherUserNewManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall OtherUserNewManager__IsNew(int64_t userId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  OtherUserNewManager_c *v8; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v11; // w24
  bool v12; // w23

  if ( (byte_4B1734A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v4, v5);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v6, v7);
    byte_4B1734A = 1;
  }
  v8 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
    v8 = OtherUserNewManager_TypeInfo;
  }
  oldList = v8->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  size = oldList->fields._size;
  if ( size >= 1 )
  {
    v11 = 1;
    v12 = 1;
    while ( 1 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8, method);
        v8 = OtherUserNewManager_TypeInfo;
      }
      v8 = (OtherUserNewManager_c *)v8->static_fields->oldList;
      if ( !v8 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v8,
             v11 - 1,
             (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__) == userId )
        return !v12;
      v12 = v11 < size;
      if ( size == v11 )
        return !v12;
      v8 = OtherUserNewManager_TypeInfo;
      ++v11;
    }
LABEL_16:
    sub_1BCAA3C(v8, method);
  }
  v12 = 0;
  return !v12;
}


void __fastcall OtherUserNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  OtherUserNewManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x0

  if ( (byte_4B17349 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v1, v2);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B17349 = 1;
  }
  v7 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    v7 = OtherUserNewManager_TypeInfo;
  }
  if ( v7->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v9);
    }
    OtherUserGameMaster__continueDeviceOtherUser((OtherUserGameMaster_o *)Instance, 0LL);
    v11 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v10);
      v11 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    }
    *((_WORD *)v11[2].virtualMethodPointer + 4) = 1;
    OtherUserNewManager__WriteData(v11);
  }
}


bool __fastcall OtherUserNewManager__ReadData(const MethodInfo *method)
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
  OtherUserNewManager_c *v11; // x0
  ManagerConfig_c *v12; // x0
  OtherUserNewManager_c *v14; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_IO_BinaryReader_o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_String_o *v24; // x20
  OtherUserNewManager_c *v25; // x0
  int v26; // w21
  __int64 v27; // x1
  char v28; // w20
  OtherUserNewManager_c *v29; // x0
  int v30; // w20
  __int64 v31; // x1
  int64_t v32; // x21
  OtherUserNewManager_c *v33; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0

  if ( (byte_4B1734D & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v9, v10);
    byte_4B1734D = 1;
  }
  v11 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    v11 = OtherUserNewManager_TypeInfo;
  }
  v11->static_fields->isModfiy = 0;
  v12 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v12 = ManagerConfig_TypeInfo;
  }
  if ( v12->static_fields->UseMock )
    return 1;
  v14 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v14);
  OtherUserNewManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v16 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v20 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v17, v18, v19);
  System_IO_BinaryReader___ctor(v20, v16, 0LL);
  if ( !v20 )
    sub_1BCAA3C(v21, v22);
  v24 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._22_ReadString.method)(
                             v20,
                             v20->klass->vtable._23_ReadChars.methodPtr);
  v25 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v23);
    v25 = OtherUserNewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v25->static_fields->SAVE_DATA_VERSION, v24, 0LL) )
  {
    v26 = 5;
  }
  else
  {
    v28 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._9_ReadBoolean.method)(
            v20,
            v20->klass->vtable._10_ReadByte.methodPtr);
    v29 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v27);
      v29 = OtherUserNewManager_TypeInfo;
    }
    v29->static_fields->isContinueDevice = v28 & 1;
    v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._15_ReadInt32.method)(
            v20,
            v20->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v30 >= 1 )
    {
      do
      {
        v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v20->klass->vtable._17_ReadInt64.method)(
                v20,
                v20->klass->vtable._18_ReadUInt64.methodPtr);
        v33 = OtherUserNewManager_TypeInfo;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v31);
          v33 = OtherUserNewManager_TypeInfo;
        }
        oldList = v33->static_fields->oldList;
        if ( !oldList )
          sub_1BCAA3C(0LL, v31);
        items = oldList->fields._items;
        v36 = Method_System_Collections_Generic_List_long__Add__;
        ++oldList->fields._version;
        if ( !items )
          sub_1BCAA3C(oldList, v31);
        size = oldList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            oldList,
            v32,
            *(const MethodInfo_3589C90 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          oldList->fields._size = size + 1;
          items->m_Items[size] = v32;
        }
        --v30;
      }
      while ( v30 );
    }
    v26 = 8;
  }
  klass = v20->klass;
  v39 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      p_offset += 4;
      if ( !v39 )
        goto LABEL_33;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_33:
    v41 = sub_1C1C7C0(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v41)(v20, *(_QWORD *)(v41 + 8));
  return (v26 | 8) == 8;
}


void __fastcall OtherUserNewManager__SetOld(int64_t userId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  OtherUserNewManager_c *v10; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int32_t v12; // w20
  int v13; // w24
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v16; // x10
  __int64 namespaze_low; // x11

  if ( (byte_4B1734B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v6, v7);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v8, v9);
    byte_4B1734B = 1;
  }
  v10 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
    v10 = OtherUserNewManager_TypeInfo;
  }
  oldList = v10->static_fields->oldList;
  if ( !oldList )
    goto LABEL_19;
  v12 = 0;
  v13 = oldList->fields._size & ~(oldList->fields._size >> 31);
  while ( 1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10, method);
      v10 = OtherUserNewManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    v10 = (OtherUserNewManager_c *)static_fields->oldList;
    if ( !v10 )
      goto LABEL_19;
    if ( v13 == v12 )
      break;
    if ( System_Collections_Generic_List_long___get_Item(
           (System_Collections_Generic_List_long__o *)v10,
           v12,
           (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__) == userId )
      return;
    v10 = OtherUserNewManager_TypeInfo;
    ++v12;
  }
  name = v10->_1.name;
  v16 = Method_System_Collections_Generic_List_long__Add__;
  ++HIDWORD(v10->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1BCAA3C(v10, method);
  namespaze_low = SLODWORD(v10->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      (System_Collections_Generic_List_long__o *)v10,
      userId,
      *(const MethodInfo_3589C90 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    static_fields = OtherUserNewManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v10->_1.namespaze) = namespaze_low + 1;
    *(_QWORD *)&name[8 * namespaze_low + 32] = userId;
  }
  static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__SetOld_41141724(System_Int64_array *userList, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x22
  int64_t oldList; // x0
  __int64 v12; // x8
  int v13; // w23
  int32_t v14; // w20
  int v15; // w9
  Il2CppClass **v16; // x10
  _QWORD *v17; // x10
  Il2CppClass *v18; // t1
  unsigned __int64 v19; // x20
  int64_t *m_Items; // x23
  unsigned __int64 max_length; // x8
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  __int64 v23; // x9
  _QWORD *v24; // x10
  __int64 v25; // x11

  if ( (byte_4B1734C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v6, v7);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v8, v9);
    byte_4B1734C = 1;
  }
  if ( userList )
  {
    v10 = *(_QWORD *)&userList->max_length;
    if ( (int)v10 >= 1 )
    {
      oldList = (int64_t)OtherUserNewManager_TypeInfo;
      if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
        oldList = (int64_t)OtherUserNewManager_TypeInfo;
      }
      v12 = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 + 24);
        if ( v13 < 1 )
        {
LABEL_21:
          v19 = 0LL;
          m_Items = userList->m_Items;
          while ( 1 )
          {
            max_length = userList->max_length;
            if ( v19 >= max_length )
              break;
            if ( m_Items[v19] >= 1 )
            {
              oldList = (int64_t)OtherUserNewManager_TypeInfo;
              if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, method);
                oldList = (int64_t)OtherUserNewManager_TypeInfo;
                max_length = userList->max_length;
              }
              if ( v19 >= max_length )
                break;
              static_fields = *(struct OtherUserNewManager_StaticFields **)(oldList + 184);
              oldList = (int64_t)static_fields->oldList;
              if ( !oldList )
                goto LABEL_36;
              method = (const MethodInfo *)m_Items[v19];
              v23 = *(_QWORD *)(oldList + 16);
              v24 = Method_System_Collections_Generic_List_long__Add__;
              ++*(_DWORD *)(oldList + 28);
              if ( !v23 )
                goto LABEL_36;
              v25 = *(int *)(oldList + 24);
              if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  (System_Collections_Generic_List_long__o *)oldList,
                  (int64_t)method,
                  *(const MethodInfo_3589C90 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                static_fields = OtherUserNewManager_TypeInfo->static_fields;
              }
              else
              {
                *(_DWORD *)(oldList + 24) = v25 + 1;
                *(_QWORD *)(v23 + 8 * v25 + 32) = method;
              }
              static_fields->isModfiy = 1;
            }
            if ( (unsigned int)v10 == ++v19 )
              return;
          }
LABEL_35:
          sub_1BCAA44(oldList, method);
        }
        v14 = 0;
        while ( 1 )
        {
          if ( !*(_DWORD *)(oldList + 224) )
          {
            j_il2cpp_runtime_class_init_0(oldList, method);
            oldList = (int64_t)OtherUserNewManager_TypeInfo;
          }
          oldList = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
          if ( !oldList )
            break;
          oldList = System_Collections_Generic_List_long___get_Item(
                      (System_Collections_Generic_List_long__o *)oldList,
                      v14,
                      (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
          v15 = 0;
          while ( 1 )
          {
            if ( userList->max_length == v15 )
              goto LABEL_35;
            v16 = &userList->obj.klass + v15;
            v18 = v16[4];
            v17 = v16 + 4;
            if ( (Il2CppClass *)oldList == v18 )
              break;
            if ( (_DWORD)v10 == ++v15 )
              goto LABEL_19;
          }
          *v17 = 0LL;
LABEL_19:
          if ( ++v14 == v13 )
            goto LABEL_21;
          oldList = (int64_t)OtherUserNewManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1BCAA3C(oldList, method);
    }
  }
}


bool __fastcall OtherUserNewManager__WriteData(const MethodInfo *method)
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
  OtherUserNewManager_c *v13; // x0
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  OtherUserNewManager_c *v16; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryWriter_o *v22; // x19
  __int64 v23; // x1
  OtherUserNewManager_c *v24; // x0
  struct OtherUserNewManager_StaticFields *v25; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  int size; // w20
  __int64 v28; // x1
  int32_t i; // w21
  OtherUserNewManager_c *v30; // x0
  System_Collections_Generic_List_long__o *v31; // x0
  int64_t Item; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0

  if ( (byte_4B1734E & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__get_Item__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&OtherUserNewManager_TypeInfo, v11, v12);
    byte_4B1734E = 1;
  }
  v13 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    v13 = OtherUserNewManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = OtherUserNewManager_TypeInfo->static_fields;
  }
  static_fields->isModfiy = 0;
  v15 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v15 = ManagerConfig_TypeInfo;
  }
  if ( !v15->static_fields->UseMock )
  {
    v16 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v1);
    SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v16);
    v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v22 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v19, v20, v21);
    System_IO_BinaryWriter___ctor_62639712(v22, v18, 0LL);
    v24 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v23);
      v24 = OtherUserNewManager_TypeInfo;
    }
    v25 = v24->static_fields;
    oldList = v25->oldList;
    if ( !oldList )
      sub_1BCAA3C(v24, v23);
    if ( !v22 )
      sub_1BCAA3C(v24, v23);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v22->klass->vtable._22_Write.method)(
      v22,
      v25->SAVE_DATA_VERSION,
      v22->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v22->klass->vtable._8_Write.method)(
      v22,
      OtherUserNewManager_TypeInfo->static_fields->isContinueDevice,
      v22->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
      v22,
      (unsigned int)size,
      v22->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v30 = OtherUserNewManager_TypeInfo;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo, v28);
          v30 = OtherUserNewManager_TypeInfo;
        }
        v31 = v30->static_fields->oldList;
        if ( !v31 )
          sub_1BCAA3C(0LL, v28);
        Item = System_Collections_Generic_List_long___get_Item(
                 v31,
                 i,
                 (const MethodInfo_35899A0 *)Method_System_Collections_Generic_List_long__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v22->klass->vtable._19_Write.method)(
          v22,
          Item,
          v22->klass->vtable._20_Write.methodPtr);
      }
    }
    klass = v22->klass;
    v34 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_27;
      }
      v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_27:
      v36 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v36)(v22, *(_QWORD *)(v36 + 8));
  }
  return 1;
}


System_String_o *__fastcall OtherUserNewManager__getSaveFileName(const MethodInfo *method)
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

  if ( (byte_4B17344 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17344 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(12, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}