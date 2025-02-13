void __fastcall OtherUserNewManager___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  System_Collections_Generic_List_long__o *v7; // x19
  struct OtherUserNewManager_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDD70D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    sub_1C21E38(&StringLiteral_6805/*"Fgo_20151127_1"*/);
    byte_4BDD70D = 1;
  }
  OtherUserNewManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6805/*"Fgo_20151127_1"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)OtherUserNewManager_TypeInfo->static_fields,
    StringLiteral_6805/*"Fgo_20151127_1"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  *(_WORD *)&OtherUserNewManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_long__o *)sub_1C22084(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_3636894 *)Method_System_Collections_Generic_List_long___ctor__);
  static_fields = OtherUserNewManager_TypeInfo->static_fields;
  static_fields->oldList = v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->oldList, (int64_t)v7, v9, v10, v11, v12, v13, v14);
}


void __fastcall OtherUserNewManager___ctor(OtherUserNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OtherUserNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  OtherUserNewManager_c *v2; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int v4; // w9

  if ( (byte_4BDD706 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD706 = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v2 = OtherUserNewManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = OtherUserNewManager_TypeInfo;
    oldList = OtherUserNewManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_1C22094(v2, v1);
  }
  v4 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v4;
LABEL_10:
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = OtherUserNewManager_TypeInfo;
  }
  *(_WORD *)&v2->static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x0

  if ( (byte_4BDD704 & 1) == 0 )
  {
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD704 = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__DeleteSaveData((const MethodInfo *)v1);
  OtherUserNewManager__ClearSaveDataList(v2);
  *(_WORD *)&OtherUserNewManager_TypeInfo->static_fields->isModfiy = 257;
  OtherUserNewManager__WriteData(v3);
}


void __fastcall OtherUserNewManager__DeleteSaveData(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4BDD703 & 1) == 0 )
  {
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD703 = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall OtherUserNewManager__Initialize(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0

  if ( (byte_4BDD705 & 1) == 0 )
  {
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD705 = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall OtherUserNewManager__IsNew(int64_t userId, const MethodInfo *method)
{
  OtherUserNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v6; // w24
  bool v7; // w23

  if ( (byte_4BDD708 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD708 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v3 = OtherUserNewManager_TypeInfo;
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
        v3 = OtherUserNewManager_TypeInfo;
      }
      v3 = (OtherUserNewManager_c *)v3->static_fields->oldList;
      if ( !v3 )
        break;
      if ( System_Collections_Generic_List_long___get_Item(
             (System_Collections_Generic_List_long__o *)v3,
             v6 - 1,
             (const MethodInfo_3636DF8 *)Method_System_Collections_Generic_List_long__get_Item__) == userId )
        return !v7;
      v7 = v6 < size;
      if ( size == v6 )
        return !v7;
      v3 = OtherUserNewManager_TypeInfo;
      ++v6;
    }
LABEL_16:
    sub_1C22094(v3, method);
  }
  v7 = 0;
  return !v7;
}


void __fastcall OtherUserNewManager__LoginProcess(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_4BDD707 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD707 = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v1 = OtherUserNewManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
    {
      sub_1C22094(Instance, v3);
    }
    OtherUserGameMaster__continueDeviceOtherUser((OtherUserGameMaster_o *)Instance, 0LL);
    v4 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v4 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    }
    *((_WORD *)v4[2].virtualMethodPointer + 4) = 1;
    OtherUserNewManager__WriteData(v4);
  }
}


bool __fastcall OtherUserNewManager__ReadData(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  OtherUserNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  OtherUserNewManager_c *v11; // x0
  int v12; // w21
  char v13; // w20
  OtherUserNewManager_c *v14; // x0
  int v15; // w20
  __int64 v16; // x1
  int64_t v17; // x21
  OtherUserNewManager_c *v18; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  struct System_Int64_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0

  if ( (byte_4BDD70B & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryReader_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD70B = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v1 = OtherUserNewManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v4);
  OtherUserNewManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v7 = (System_IO_BinaryReader_o *)sub_1C22084(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                             v7,
                             v7->klass->vtable._23_ReadChars.methodPtr);
  v11 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v11 = OtherUserNewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0LL) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._9_ReadBoolean.method)(
            v7,
            v7->klass->vtable._10_ReadByte.methodPtr);
    v14 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v14 = OtherUserNewManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._15_ReadInt32.method)(
            v7,
            v7->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v15 >= 1 )
    {
      do
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._17_ReadInt64.method)(
                v7,
                v7->klass->vtable._18_ReadUInt64.methodPtr);
        v18 = OtherUserNewManager_TypeInfo;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
          v18 = OtherUserNewManager_TypeInfo;
        }
        oldList = v18->static_fields->oldList;
        if ( !oldList )
          sub_1C22094(0LL, v16);
        items = oldList->fields._items;
        v21 = Method_System_Collections_Generic_List_long__Add__;
        ++oldList->fields._version;
        if ( !items )
          sub_1C22094(oldList, v16);
        size = oldList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_long___AddWithResize(
            oldList,
            v17,
            *(const MethodInfo_36370E8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          oldList->fields._size = size + 1;
          items->m_Items[size] = v17;
        }
        --v15;
      }
      while ( v15 );
    }
    v12 = 8;
  }
  klass = v7->klass;
  v24 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_33:
    v26 = sub_1C73E18(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v26)(v7, *(_QWORD *)(v26 + 8));
  return (v12 | 8) == 8;
}


void __fastcall OtherUserNewManager__SetOld(int64_t userId, const MethodInfo *method)
{
  OtherUserNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int32_t v5; // w20
  int v6; // w24
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v9; // x10
  __int64 namespaze_low; // x11

  if ( (byte_4BDD709 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD709 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v3 = OtherUserNewManager_TypeInfo;
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
      v3 = OtherUserNewManager_TypeInfo;
    }
    static_fields = v3->static_fields;
    v3 = (OtherUserNewManager_c *)static_fields->oldList;
    if ( !v3 )
      goto LABEL_19;
    if ( v6 == v5 )
      break;
    if ( System_Collections_Generic_List_long___get_Item(
           (System_Collections_Generic_List_long__o *)v3,
           v5,
           (const MethodInfo_3636DF8 *)Method_System_Collections_Generic_List_long__get_Item__) == userId )
      return;
    v3 = OtherUserNewManager_TypeInfo;
    ++v5;
  }
  name = v3->_1.name;
  v9 = Method_System_Collections_Generic_List_long__Add__;
  ++HIDWORD(v3->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1C22094(v3, method);
  namespaze_low = SLODWORD(v3->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_long___AddWithResize(
      (System_Collections_Generic_List_long__o *)v3,
      userId,
      *(const MethodInfo_36370E8 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
    static_fields = OtherUserNewManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v3->_1.namespaze) = namespaze_low + 1;
    *(_QWORD *)&name[8 * namespaze_low + 32] = userId;
  }
  static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__SetOld_41685876(System_Int64_array *userList, const MethodInfo *method)
{
  __int64 v3; // x22
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
  unsigned __int64 max_length; // x8
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  __int64 v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11

  if ( (byte_4BDD70A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD70A = 1;
  }
  if ( userList )
  {
    v3 = *(_QWORD *)&userList->max_length;
    if ( (int)v3 >= 1 )
    {
      oldList = (int64_t)OtherUserNewManager_TypeInfo;
      if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        oldList = (int64_t)OtherUserNewManager_TypeInfo;
      }
      v5 = *(_QWORD *)(*(_QWORD *)(oldList + 184) + 16LL);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 24);
        if ( v6 < 1 )
        {
LABEL_21:
          v12 = 0LL;
          m_Items = userList->m_Items;
          while ( 1 )
          {
            max_length = userList->max_length;
            if ( v12 >= max_length )
              break;
            if ( m_Items[v12] >= 1 )
            {
              oldList = (int64_t)OtherUserNewManager_TypeInfo;
              if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
                oldList = (int64_t)OtherUserNewManager_TypeInfo;
                max_length = userList->max_length;
              }
              if ( v12 >= max_length )
                break;
              static_fields = *(struct OtherUserNewManager_StaticFields **)(oldList + 184);
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
                  *(const MethodInfo_36370E8 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                static_fields = OtherUserNewManager_TypeInfo->static_fields;
              }
              else
              {
                *(_DWORD *)(oldList + 24) = v18 + 1;
                *(_QWORD *)(v16 + 8 * v18 + 32) = method;
              }
              static_fields->isModfiy = 1;
            }
            if ( (unsigned int)v3 == ++v12 )
              return;
          }
LABEL_35:
          sub_1C2209C(oldList, method);
        }
        v7 = 0;
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
                      v7,
                      (const MethodInfo_3636DF8 *)Method_System_Collections_Generic_List_long__get_Item__);
          v8 = 0;
          while ( 1 )
          {
            if ( userList->max_length == v8 )
              goto LABEL_35;
            v9 = &userList->obj.klass + v8;
            v11 = v9[4];
            v10 = v9 + 4;
            if ( (Il2CppClass *)oldList == v11 )
              break;
            if ( (_DWORD)v3 == ++v8 )
              goto LABEL_19;
          }
          *v10 = 0LL;
LABEL_19:
          if ( ++v7 == v6 )
            goto LABEL_21;
          oldList = (int64_t)OtherUserNewManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1C22094(oldList, method);
    }
  }
}


bool __fastcall OtherUserNewManager__WriteData(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v3; // x0
  OtherUserNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  OtherUserNewManager_c *v9; // x0
  struct OtherUserNewManager_StaticFields *v10; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  int size; // w20
  __int64 v13; // x1
  int32_t i; // w21
  OtherUserNewManager_c *v15; // x0
  System_Collections_Generic_List_long__o *v16; // x0
  int64_t Item; // x0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0

  if ( (byte_4BDD70C & 1) == 0 )
  {
    sub_1C21E38(&System_IO_BinaryWriter_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_1C21E38(&ManagerConfig_TypeInfo);
    sub_1C21E38(&OtherUserNewManager_TypeInfo);
    byte_4BDD70C = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v1 = OtherUserNewManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    static_fields = OtherUserNewManager_TypeInfo->static_fields;
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
    v4 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v4);
    v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v7 = (System_IO_BinaryWriter_o *)sub_1C22084(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_63353968(v7, v6, 0LL);
    v9 = OtherUserNewManager_TypeInfo;
    if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v9 = OtherUserNewManager_TypeInfo;
    }
    v10 = v9->static_fields;
    oldList = v10->oldList;
    if ( !oldList )
      sub_1C22094(v9, v8);
    if ( !v7 )
      sub_1C22094(v9, v8);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v7->klass->vtable._22_Write.method)(
      v7,
      v10->SAVE_DATA_VERSION,
      v7->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v7->klass->vtable._8_Write.method)(
      v7,
      OtherUserNewManager_TypeInfo->static_fields->isContinueDevice,
      v7->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
      v7,
      (unsigned int)size,
      v7->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v15 = OtherUserNewManager_TypeInfo;
        if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
          v15 = OtherUserNewManager_TypeInfo;
        }
        v16 = v15->static_fields->oldList;
        if ( !v16 )
          sub_1C22094(0LL, v13);
        Item = System_Collections_Generic_List_long___get_Item(
                 v16,
                 i,
                 (const MethodInfo_3636DF8 *)Method_System_Collections_Generic_List_long__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v7->klass->vtable._19_Write.method)(
          v7,
          Item,
          v7->klass->vtable._20_Write.methodPtr);
      }
    }
    klass = v7->klass;
    v19 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_27;
      }
      v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_27:
      v21 = sub_1C73E18(v7, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v7, *(_QWORD *)(v21 + 8));
  }
  return 1;
}


System_String_o *__fastcall OtherUserNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BDD702 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&DatFileName_TypeInfo);
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    byte_4BDD702 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(12, 0LL);
  return System_String__Concat_63126736(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}