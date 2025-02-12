void __fastcall UserServantCollectionManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v11; // x19
  struct UserServantCollectionManager_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BB59F0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_6791/*"Feed20NodeName"*/, v10);
    byte_4BB59F0 = 1;
  }
  UserServantCollectionManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6791/*"Feed20NodeName"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)UserServantCollectionManager_TypeInfo->static_fields,
    StringLiteral_6791/*"Feed20NodeName"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  static_fields->oldList = v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->oldList, (int64_t)v11, v13, v14, v15, v16, v17, v18);
}


void __fastcall UserServantCollectionManager___ctor(UserServantCollectionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantCollectionManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserServantCollectionManager_c *v4; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int v6; // w9

  if ( (byte_4BB59E9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v2);
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v3);
    byte_4BB59E9 = 1;
  }
  v4 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v4->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserServantCollectionManager_TypeInfo;
    oldList = UserServantCollectionManager_TypeInfo->static_fields->oldList;
    if ( !oldList )
LABEL_13:
      sub_1C13F80(v4, v1);
  }
  v6 = oldList->fields._version + 1;
  oldList->fields._size = 0;
  oldList->fields._version = v6;
LABEL_10:
  if ( !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  *(_WORD *)&v4->static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4BB59E7 & 1) == 0 )
  {
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v1);
    byte_4BB59E7 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__DeleteSaveData((const MethodInfo *)v2);
  UserServantCollectionManager__ClearSaveDataList(v3);
  *(_WORD *)&UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 257;
  UserServantCollectionManager__WriteData(v4);
}


void __fastcall UserServantCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4BB59E6 & 1) == 0 )
  {
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v1);
    byte_4BB59E6 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserServantCollectionManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0

  if ( (byte_4BB59E8 & 1) == 0 )
  {
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v1);
    byte_4BB59E8 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall UserServantCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UserServantCollectionManager_c *v5; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  int v8; // w24
  bool v9; // w23

  if ( (byte_4BB59EB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v3);
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v4);
    byte_4BB59EB = 1;
  }
  v5 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v5 = UserServantCollectionManager_TypeInfo;
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
        v5 = UserServantCollectionManager_TypeInfo;
      }
      v5 = (UserServantCollectionManager_c *)v5->static_fields->oldList;
      if ( !v5 )
        break;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v5,
             v8 - 1,
             (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
        return !v9;
      v9 = v8 < size;
      if ( size == v8 )
        return !v9;
      v5 = UserServantCollectionManager_TypeInfo;
      ++v8;
    }
LABEL_16:
    sub_1C13F80(v5, method);
  }
  v9 = 0;
  return !v9;
}


void __fastcall UserServantCollectionManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserServantCollectionManager_c *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_4BB59EA & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v1);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v3);
    byte_4BB59EA = 1;
  }
  v4 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v4 = UserServantCollectionManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_1C13F80(Instance, v6);
    }
    UserServantCollectionMaster__continueDeviceUserServantCollection((UserServantCollectionMaster_o *)Instance, 0LL);
    v7 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v7 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    }
    *((_WORD *)v7[2].virtualMethodPointer + 4) = 1;
    UserServantCollectionManager__WriteData(v7);
  }
}


bool __fastcall UserServantCollectionManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionManager_c *v6; // x0
  ManagerConfig_c *v7; // x0
  UserServantCollectionManager_c *v9; // x0
  System_String_o *SaveFileName; // x19
  UserServantCollectionManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  UserServantCollectionManager_c *v17; // x0
  int v18; // w21
  char v19; // w20
  UserServantCollectionManager_c *v20; // x0
  int v21; // w20
  __int64 v22; // x1
  int32_t v23; // w21
  UserServantCollectionManager_c *v24; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  UserServantCollectionManager_c *v33; // x0

  if ( (byte_4BB59EE & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1C13D24(&System_IDisposable_TypeInfo, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_1C13D24(&ManagerConfig_TypeInfo, v4);
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v5);
    byte_4BB59EE = 1;
  }
  v6 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v6 = UserServantCollectionManager_TypeInfo;
  }
  v6->static_fields->isModfiy = 0;
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    v9 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v9);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v11 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v11);
      v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v13 = (System_IO_BinaryReader_o *)sub_1C13F70(System_IO_BinaryReader_TypeInfo);
      System_IO_BinaryReader___ctor(v13, v12, 0LL);
      if ( !v13 )
        sub_1C13F80(v14, v15);
      v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                                 v13,
                                 v13->klass->vtable._23_ReadChars.methodPtr);
      v17 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        v17 = UserServantCollectionManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
      {
        v18 = 5;
      }
      else
      {
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._9_ReadBoolean.method)(
                v13,
                v13->klass->vtable._10_ReadByte.methodPtr);
        v20 = UserServantCollectionManager_TypeInfo;
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
          v20 = UserServantCollectionManager_TypeInfo;
        }
        v20->static_fields->isContinueDevice = v19 & 1;
        v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v21 >= 1 )
        {
          do
          {
            v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                    v13,
                    v13->klass->vtable._16_ReadUInt32.methodPtr);
            v24 = UserServantCollectionManager_TypeInfo;
            if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
              v24 = UserServantCollectionManager_TypeInfo;
            }
            oldList = v24->static_fields->oldList;
            if ( !oldList )
              sub_1C13F80(0LL, v22);
            items = oldList->fields._items;
            v27 = Method_System_Collections_Generic_List_int__Add__;
            ++oldList->fields._version;
            if ( !items )
              sub_1C13F80(oldList, v22);
            size = oldList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                oldList,
                v23,
                *(const MethodInfo_36101A8 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              oldList->fields._size = size + 1;
              items->m_Items[size + 1] = v23;
            }
            --v21;
          }
          while ( v21 );
        }
        v18 = 8;
      }
      klass = v13->klass;
      v30 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v30;
          p_offset += 4;
          if ( !v30 )
            goto LABEL_35;
        }
        v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_35:
        v32 = sub_1C65D04(v13, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v32)(v13, *(_QWORD *)(v32 + 8));
      if ( (v18 | 8) == 8 )
        return 1;
    }
    else
    {
      v33 = UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v33);
    }
    return 0;
  }
  return 1;
}


void __fastcall UserServantCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserServantCollectionManager_c *v6; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int32_t v8; // w20
  int v9; // w24
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v12; // x10
  __int64 namespaze_low; // x11

  if ( (byte_4BB59EC & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v5);
    byte_4BB59EC = 1;
  }
  v6 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v6 = UserServantCollectionManager_TypeInfo;
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
      v6 = UserServantCollectionManager_TypeInfo;
    }
    static_fields = v6->static_fields;
    v6 = (UserServantCollectionManager_c *)static_fields->oldList;
    if ( !v6 )
      goto LABEL_19;
    if ( v9 == v8 )
      break;
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)v6,
           v8,
           (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
      return;
    v6 = UserServantCollectionManager_TypeInfo;
    ++v8;
  }
  name = v6->_1.name;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(v6->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1C13F80(v6, method);
  namespaze_low = SLODWORD(v6->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v6,
      svtId,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    static_fields = UserServantCollectionManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v6->_1.namespaze) = namespaze_low + 1;
    *(_DWORD *)&name[4 * namespaze_low + 32] = svtId;
  }
  static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__SetOld_41737604(System_Int32_array *svtIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x22
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Collections_Generic_List_int__o *v8; // x8
  int size; // w23
  int32_t v10; // w20
  int v11; // w9
  char *v12; // x10
  _DWORD *v13; // x10
  int v14; // t1
  unsigned __int64 v15; // x20
  int32_t *v16; // x23
  unsigned __int64 max_length; // x8
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  const char *items; // x9
  _QWORD *v20; // x10
  __int64 v21; // x11

  if ( (byte_4BB59ED & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v5);
    byte_4BB59ED = 1;
  }
  if ( svtIdList )
  {
    v6 = *(_QWORD *)&svtIdList->max_length;
    if ( (int)v6 >= 1 )
    {
      oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
      if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
      }
      v8 = *(struct System_Collections_Generic_List_int__o **)(*(_QWORD *)&oldList[4].fields._size + 16LL);
      if ( v8 )
      {
        size = v8->fields._size;
        if ( size < 1 )
        {
LABEL_21:
          v15 = 0LL;
          v16 = &svtIdList->m_Items[1];
          while ( 1 )
          {
            max_length = svtIdList->max_length;
            if ( v15 >= max_length )
              break;
            if ( v16[v15] >= 1 )
            {
              oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
              if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
                oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
                max_length = svtIdList->max_length;
              }
              if ( v15 >= max_length )
                break;
              static_fields = *(struct UserServantCollectionManager_StaticFields **)&oldList[4].fields._size;
              oldList = static_fields->oldList;
              if ( !oldList )
                goto LABEL_36;
              method = (const MethodInfo *)(unsigned int)v16[v15];
              items = (const char *)oldList->fields._items;
              v20 = Method_System_Collections_Generic_List_int__Add__;
              ++oldList->fields._version;
              if ( !items )
                goto LABEL_36;
              v21 = oldList->fields._size;
              if ( (unsigned int)v21 >= *((_DWORD *)items + 6) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  oldList,
                  (int32_t)method,
                  *(const MethodInfo_36101A8 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
                static_fields = UserServantCollectionManager_TypeInfo->static_fields;
              }
              else
              {
                oldList->fields._size = v21 + 1;
                *(_DWORD *)&items[4 * v21 + 32] = (_DWORD)method;
              }
              static_fields->isModfiy = 1;
            }
            if ( (unsigned int)v6 == ++v15 )
              return;
          }
LABEL_35:
          sub_1C13F88(oldList, method);
        }
        v10 = 0;
        while ( 1 )
        {
          if ( !oldList[5].fields._size )
          {
            j_il2cpp_runtime_class_init_0(oldList);
            oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
          }
          oldList = *(System_Collections_Generic_List_int__o **)(*(_QWORD *)&oldList[4].fields._size + 16LL);
          if ( !oldList )
            break;
          oldList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                oldList,
                                                                v10,
                                                                (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
          v11 = 0;
          while ( 1 )
          {
            if ( svtIdList->max_length == v11 )
              goto LABEL_35;
            v12 = (char *)svtIdList + 4 * v11;
            v14 = *((_DWORD *)v12 + 8);
            v13 = v12 + 32;
            if ( (_DWORD)oldList == v14 )
              break;
            if ( (_DWORD)v6 == ++v11 )
              goto LABEL_19;
          }
          *v13 = 0;
LABEL_19:
          if ( ++v10 == size )
            goto LABEL_21;
          oldList = (System_Collections_Generic_List_int__o *)UserServantCollectionManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1C13F80(oldList, method);
    }
  }
}


bool __fastcall UserServantCollectionManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantCollectionManager_c *v7; // x0
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v9; // x0
  UserServantCollectionManager_c *v10; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  UserServantCollectionManager_c *v15; // x0
  struct UserServantCollectionManager_StaticFields *v16; // x8
  struct System_Collections_Generic_List_int__o *oldList; // x9
  int size; // w20
  __int64 v19; // x1
  int32_t i; // w21
  UserServantCollectionManager_c *v21; // x0
  System_Collections_Generic_List_int__o *v22; // x0
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_4BB59EF & 1) == 0 )
  {
    sub_1C13D24(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1C13D24(&System_IDisposable_TypeInfo, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Count__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1C13D24(&ManagerConfig_TypeInfo, v5);
    sub_1C13D24(&UserServantCollectionManager_TypeInfo, v6);
    byte_4BB59EF = 1;
  }
  v7 = UserServantCollectionManager_TypeInfo;
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v7 = UserServantCollectionManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    static_fields = UserServantCollectionManager_TypeInfo->static_fields;
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
    v10 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v10);
    v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v13 = (System_IO_BinaryWriter_o *)sub_1C13F70(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_63206436(v13, v12, 0LL);
    v15 = UserServantCollectionManager_TypeInfo;
    if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v15 = UserServantCollectionManager_TypeInfo;
    }
    v16 = v15->static_fields;
    oldList = v16->oldList;
    if ( !oldList )
      sub_1C13F80(v15, v14);
    if ( !v13 )
      sub_1C13F80(v15, v14);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
      v13,
      v16->SAVE_DATA_VERSION,
      v13->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v13->klass->vtable._8_Write.method)(
      v13,
      UserServantCollectionManager_TypeInfo->static_fields->isContinueDevice,
      v13->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
      v13,
      (unsigned int)size,
      v13->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v21 = UserServantCollectionManager_TypeInfo;
        if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
          v21 = UserServantCollectionManager_TypeInfo;
        }
        v22 = v21->static_fields->oldList;
        if ( !v22 )
          sub_1C13F80(0LL, v19);
        Item = System_Collections_Generic_List_int___get_Item(
                 v22,
                 i,
                 (const MethodInfo_360FEB8 *)Method_System_Collections_Generic_List_int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
          v13,
          Item,
          v13->klass->vtable._18_Write.methodPtr);
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
      v27 = sub_1C65D04(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v27)(v13, *(_QWORD *)(v27 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserServantCollectionManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4BB59E5 & 1) == 0 )
  {
    sub_1C13D24(&AndroidUtil_TypeInfo, v1);
    sub_1C13D24(&DatFileName_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_1123/*"/"*/, v3);
    byte_4BB59E5 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(7, 0LL);
  return System_String__Concat_62979204(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}