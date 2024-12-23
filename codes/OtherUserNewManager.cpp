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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_long__o *v11; // x19
  struct OtherUserNewManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B67D61 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long___ctor__, v1);
    sub_1BE4ACC(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_6772/*"Fgo_20151127_1"*/, v10);
    byte_4B67D61 = 1;
  }
  OtherUserNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6772/*"Fgo_20151127_1"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)OtherUserNewManager_TypeInfo->static_fields,
    StringLiteral_6772/*"Fgo_20151127_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&OtherUserNewManager_TypeInfo->static_fields->isModfiy = 0;
  v11 = (System_Collections_Generic_List_long__o *)sub_1BE4D18(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_35D3A04 *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = OtherUserNewManager_TypeInfo->static_fields;
  static_fields->oldList = v11;
  sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->oldList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
}


void __fastcall OtherUserNewManager___ctor(OtherUserNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OtherUserNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  OtherUserNewManager_c *v4; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int v6; // w9

  if ( (byte_4B67D5A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Clear__, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v2);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v3);
    byte_4B67D5A = 1;
  }
  v4 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v4 = OtherUserNewManager_TypeInfo;
  }
  oldList = v4->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = OtherUserNewManager_TypeInfo;
    oldList = OtherUserNewManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_1BE4D28(v4, v1);
  }
  v6 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v6;
LABEL_10:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = OtherUserNewManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4B67D58 & 1) == 0 )
  {
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v1);
    byte_4B67D58 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__DeleteSaveData((const MethodInfo *)v2);
  OtherUserNewManager__ClearSaveDataList(v3);
  *(_WORD *)&OtherUserNewManager_TypeInfo->static_fields->isModfiy = 257;
  OtherUserNewManager__WriteData(v4);
}


void __fastcall OtherUserNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B67D57 & 1) == 0 )
  {
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v1);
    byte_4B67D57 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall OtherUserNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0

  if ( (byte_4B67D59 & 1) == 0 )
  {
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v1);
    byte_4B67D59 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall OtherUserNewManager__IsNew(int64_t userId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  OtherUserNewManager_c *v5; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v8; // w24
  bool v9; // w23

  if ( (byte_4B67D5C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Item__, v3);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v4);
    byte_4B67D5C = 1;
  }
  v5 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v5 = OtherUserNewManager_TypeInfo;
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
        v5 = OtherUserNewManager_TypeInfo;
      }
      v5 = (OtherUserNewManager_c *)v5->static_fields->oldList;
      if ( !v5 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v5,
             v8 - 1,
             (const MethodInfo_35D3F68 *)Method_System_Collections_Generic_List_long__get_Item__) == userId )
        return !v9;
      v9 = v8 < size;
      if ( size == v8 )
        return !v9;
      v5 = OtherUserNewManager_TypeInfo;
      ++v8;
    }
LABEL_16:
    sub_1BE4D28(v5, method);
  }
  v9 = 0;
  return !v9;
}


void __fastcall OtherUserNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  OtherUserNewManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_4B67D5B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_OtherUserGameMaster___, v1);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v2);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B67D5B = 1;
  }
  v4 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v4 = OtherUserNewManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
    {
      sub_1BE4D28(Instance, v6);
    }
    OtherUserGameMaster__continueDeviceOtherUser((OtherUserGameMaster_o *)Instance, 0LL);
    v7 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v7 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    }
    *((_WORD *)v7[2].virtualMethodPointer + 4) = 1;
    OtherUserNewManager__WriteData(v7);
  }
}


bool __fastcall OtherUserNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  OtherUserNewManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  OtherUserNewManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v11; // x20
  System_IO_BinaryReader_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  OtherUserNewManager_c *v16; // x0
  int v17; // w21
  char v18; // w20
  OtherUserNewManager_c *v19; // x0
  int v20; // w20
  __int64 v21; // x1
  int64_t v22; // x21
  OtherUserNewManager_c *v23; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0

  if ( (byte_4B67D5F & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v2);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v4);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v5);
    byte_4B67D5F = 1;
  }
  v6 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v6 = OtherUserNewManager_TypeInfo;
  }
  v6->static_fields->isModfiy = 0;
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v9 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v9);
  OtherUserNewManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v11 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v12 = (System_IO_BinaryReader_o *)sub_1BE4D18(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v12, v11, 0LL);
  if ( !v12 )
    sub_1BE4D28(v13, v14);
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._22_ReadString.method)(
                             v12,
                             v12->klass->vtable._23_ReadChars.methodPtr);
  v16 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v16 = OtherUserNewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v16->static_fields->SAVE_DATA_VERSION, v15, 0LL) )
  {
    v17 = 5;
  }
  else
  {
    v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._9_ReadBoolean.method)(
            v12,
            v12->klass->vtable._10_ReadByte.methodPtr);
    v19 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v19 = OtherUserNewManager_TypeInfo;
    }
    v19->static_fields->isContinueDevice = v18 & 1;
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._15_ReadInt32.method)(
            v12,
            v12->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v20 >= 1 )
    {
      do
      {
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v12->klass->vtable._17_ReadInt64.method)(
                v12,
                v12->klass->vtable._18_ReadUInt64.methodPtr);
        v23 = OtherUserNewManager_TypeInfo;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
          v23 = OtherUserNewManager_TypeInfo;
        }
        oldList = v23->static_fields->oldList;
        if ( !oldList )
          sub_1BE4D28(0LL, v21);
        items = oldList->fields._items;
        v26 = Method_System_Collections_Generic_List_long__Add__;
        ++oldList->fields._version;
        if ( !items )
          sub_1BE4D28(oldList, v21);
        size = oldList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            oldList,
            v22,
            *(const MethodInfo_35D4258 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          oldList->fields._size = size + 1;
          items->m_Items[size] = v22;
        }
        --v20;
      }
      while ( v20 );
    }
    v17 = 8;
  }
  klass = v12->klass;
  v29 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_33;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_33:
    v31 = sub_1C36AAC(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v31)(v12, *(_QWORD *)(v31 + 8));
  return (v17 | 8) == 8;
}


void __fastcall OtherUserNewManager__SetOld(int64_t userId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  OtherUserNewManager_c *v6; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int32_t v8; // w20
  int v9; // w24
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v12; // x10
  __int64 namespaze_low; // x11

  if ( (byte_4B67D5D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v5);
    byte_4B67D5D = 1;
  }
  v6 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v6 = OtherUserNewManager_TypeInfo;
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
      v6 = OtherUserNewManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    v6 = (OtherUserNewManager_c *)static_fields->oldList;
    if ( !v6 )
      goto LABEL_19;
    if ( v9 == v8 )
      break;
    if ( System_Collections_Generic_List_long___get_Item(
           (System_Collections_Generic_List_long__o *)v6,
           v8,
           (const MethodInfo_35D3F68 *)Method_System_Collections_Generic_List_long__get_Item__) == userId )
      return;
    v6 = OtherUserNewManager_TypeInfo;
    ++v8;
  }
  name = v6->_1.name;
  v12 = Method_System_Collections_Generic_List_long__Add__;
  ++HIDWORD(v6->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1BE4D28(v6, method);
  namespaze_low = SLODWORD(v6->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      (System_Collections_Generic_List_long__o *)v6,
      userId,
      *(const MethodInfo_35D4258 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    static_fields = OtherUserNewManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v6->_1.namespaze) = namespaze_low + 1;
    *(_QWORD *)&name[8 * namespaze_low + 32] = userId;
  }
  static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__SetOld_41380100(System_Int64_array *userList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x22
  int64_t oldList; // x0
  __int64 v8; // x8
  int v9; // w23
  int32_t v10; // w20
  int v11; // w9
  Il2CppClass **v12; // x10
  _QWORD *v13; // x10
  Il2CppClass *v14; // t1
  unsigned __int64 v15; // x20
  int64_t *m_Items; // x23
  unsigned __int64 max_length; // x8
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  __int64 v19; // x9
  _QWORD *v20; // x10
  __int64 v21; // x11

  if ( (byte_4B67D5E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__Add__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v5);
    byte_4B67D5E = 1;
  }
  if ( userList )
  {
    v6 = *(_QWORD *)&userList->max_length;
    if ( (int)v6 >= 1 )
    {
      oldList = (int64_t)OtherUserNewManager_TypeInfo;
      if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        oldList = (int64_t)OtherUserNewManager_TypeInfo;
      }
      v8 = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 24);
        if ( v9 < 1 )
        {
LABEL_21:
          v15 = 0LL;
          m_Items = userList->m_Items;
          while ( 1 )
          {
            max_length = userList->max_length;
            if ( v15 >= max_length )
              break;
            if ( m_Items[v15] >= 1 )
            {
              oldList = (int64_t)OtherUserNewManager_TypeInfo;
              if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
                oldList = (int64_t)OtherUserNewManager_TypeInfo;
                max_length = userList->max_length;
              }
              if ( v15 >= max_length )
                break;
              static_fields = *(struct OtherUserNewManager_StaticFields **)(oldList + 184);
              oldList = (int64_t)static_fields->oldList;
              if ( !oldList )
                goto LABEL_36;
              method = (const MethodInfo *)m_Items[v15];
              v19 = *(_QWORD *)(oldList + 16);
              v20 = Method_System_Collections_Generic_List_long__Add__;
              ++*(_DWORD *)(oldList + 28);
              if ( !v19 )
                goto LABEL_36;
              v21 = *(int *)(oldList + 24);
              if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
              {
                System_Collections_Generic_List_long___AddWithResize(
                  (System_Collections_Generic_List_long__o *)oldList,
                  (int64_t)method,
                  *(const MethodInfo_35D4258 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                static_fields = OtherUserNewManager_TypeInfo->static_fields;
              }
              else
              {
                *(_DWORD *)(oldList + 24) = v21 + 1;
                *(_QWORD *)(v19 + 8 * v21 + 32) = method;
              }
              static_fields->isModfiy = 1;
            }
            if ( (unsigned int)v6 == ++v15 )
              return;
          }
LABEL_35:
          sub_1BE4D30(oldList, method);
        }
        v10 = 0;
        while ( 1 )
        {
          if ( !*(_DWORD *)(oldList + 224) )
          {
            j_il2cpp_runtime_class_init_0(oldList);
            oldList = (int64_t)OtherUserNewManager_TypeInfo;
          }
          oldList = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
          if ( !oldList )
            break;
          oldList = System_Collections_Generic_List_long___get_Item(
                      (System_Collections_Generic_List_long__o *)oldList,
                      v10,
                      (const MethodInfo_35D3F68 *)Method_System_Collections_Generic_List_long__get_Item__);
          v11 = 0;
          while ( 1 )
          {
            if ( userList->max_length == v11 )
              goto LABEL_35;
            v12 = &userList->obj.klass + v11;
            v14 = v12[4];
            v13 = v12 + 4;
            if ( (Il2CppClass *)oldList == v14 )
              break;
            if ( (_DWORD)v6 == ++v11 )
              goto LABEL_19;
          }
          *v13 = 0LL;
LABEL_19:
          if ( ++v10 == v9 )
            goto LABEL_21;
          oldList = (int64_t)OtherUserNewManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1BE4D28(oldList, method);
    }
  }
}


bool __fastcall OtherUserNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  OtherUserNewManager_c *v7; // x0
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  OtherUserNewManager_c *v10; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  OtherUserNewManager_c *v15; // x0
  struct OtherUserNewManager_StaticFields *v16; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  int size; // w20
  __int64 v19; // x1
  int32_t i; // w21
  OtherUserNewManager_c *v21; // x0
  System_Collections_Generic_List_long__o *v22; // x0
  int64_t Item; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_4B67D60 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v2);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Count__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_long__get_Item__, v4);
    sub_1BE4ACC(&ManagerConfig_TypeInfo, v5);
    sub_1BE4ACC(&OtherUserNewManager_TypeInfo, v6);
    byte_4B67D60 = 1;
  }
  v7 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v7 = OtherUserNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = OtherUserNewManager_TypeInfo->static_fields;
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
    v10 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v10);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v13 = (System_IO_BinaryWriter_o *)sub_1BE4D18(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_62937300(v13, v12, 0LL);
    v15 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v15 = OtherUserNewManager_TypeInfo;
    }
    v16 = v15->static_fields;
    oldList = v16->oldList;
    if ( !oldList )
      sub_1BE4D28(v15, v14);
    if ( !v13 )
      sub_1BE4D28(v15, v14);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
      v13,
      v16->SAVE_DATA_VERSION,
      v13->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v13->klass->vtable._8_Write.method)(
      v13,
      OtherUserNewManager_TypeInfo->static_fields->isContinueDevice,
      v13->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
      v13,
      (unsigned int)size,
      v13->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v21 = OtherUserNewManager_TypeInfo;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
          v21 = OtherUserNewManager_TypeInfo;
        }
        v22 = v21->static_fields->oldList;
        if ( !v22 )
          sub_1BE4D28(0LL, v19);
        Item = System_Collections_Generic_List_long___get_Item(
                 v22,
                 i,
                 (const MethodInfo_35D3F68 *)Method_System_Collections_Generic_List_long__get_Item__);
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
      v27 = sub_1C36AAC(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v13, *(_QWORD *)(v27 + 8));
  }
  return 1;
}


System_String_o *__fastcall OtherUserNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B67D56 & 1) == 0 )
  {
    sub_1BE4ACC(&AndroidUtil_TypeInfo, v1);
    sub_1BE4ACC(&DatFileName_TypeInfo, v2);
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, v3);
    byte_4B67D56 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(12, 0LL);
  return System_String__Concat_62710068(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}