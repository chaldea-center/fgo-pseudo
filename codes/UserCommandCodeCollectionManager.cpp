void __fastcall UserCommandCodeCollectionManager___cctor(const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v17; // x19
  struct UserCommandCodeCollectionManager_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B17466 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6759/*"Fgo_20180629_1"*/, v12, v13);
    byte_4B17466 = 1;
  }
  UserCommandCodeCollectionManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6759/*"Fgo_20180629_1"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)UserCommandCodeCollectionManager_TypeInfo->static_fields,
    StringLiteral_6759/*"Fgo_20180629_1"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  *(_WORD *)&UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  static_fields = UserCommandCodeCollectionManager_TypeInfo->static_fields;
  static_fields->oldList = v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->oldList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall UserCommandCodeCollectionManager___ctor(
        UserCommandCodeCollectionManager_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserCommandCodeCollectionManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  UserCommandCodeCollectionManager_c *v7; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int v9; // w9

  if ( (byte_4B1745F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v3, v4);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v5, v6);
    byte_4B1745F = 1;
  }
  v7 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
    v7 = UserCommandCodeCollectionManager_TypeInfo;
  }
  oldList = v7->static_fields->oldList;
  if ( !oldList )
    goto LABEL_13;
  if ( oldList->fields._size < 1 )
    goto LABEL_10;
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v7 = UserCommandCodeCollectionManager_TypeInfo;
    oldList = UserCommandCodeCollectionManager_TypeInfo->static_fields->oldList;
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
    v7 = UserCommandCodeCollectionManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void __fastcall UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserCommandCodeCollectionManager_c *v3; // x0
  const MethodInfo *v4; // x0
  const MethodInfo *v5; // x0

  if ( (byte_4B1745D & 1) == 0 )
  {
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v1, v2);
    byte_4B1745D = 1;
  }
  v3 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
  UserCommandCodeCollectionManager__DeleteSaveData((const MethodInfo *)v3);
  UserCommandCodeCollectionManager__ClearSaveDataList(v4);
  *(_WORD *)&UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy = 257;
  UserCommandCodeCollectionManager__WriteData(v5);
}


void __fastcall UserCommandCodeCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserCommandCodeCollectionManager_c *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4B1745C & 1) == 0 )
  {
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v1, v2);
    byte_4B1745C = 1;
  }
  v3 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
  SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserCommandCodeCollectionManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UserCommandCodeCollectionManager_c *v3; // x0

  if ( (byte_4B1745E & 1) == 0 )
  {
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v1, v2);
    byte_4B1745E = 1;
  }
  v3 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
  UserCommandCodeCollectionManager__ReadData((const MethodInfo *)v3);
}


bool __fastcall UserCommandCodeCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UserCommandCodeCollectionManager_c *v8; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  int v11; // w24
  bool v12; // w23

  if ( (byte_4B17461 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v4, v5);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v6, v7);
    byte_4B17461 = 1;
  }
  v8 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, method);
    v8 = UserCommandCodeCollectionManager_TypeInfo;
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
        v8 = UserCommandCodeCollectionManager_TypeInfo;
      }
      v8 = (UserCommandCodeCollectionManager_c *)v8->static_fields->oldList;
      if ( !v8 )
        break;
      if ( System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v8,
             v11 - 1,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
        return !v12;
      v12 = v11 < size;
      if ( size == v11 )
        return !v12;
      v8 = UserCommandCodeCollectionManager_TypeInfo;
      ++v11;
    }
LABEL_16:
    sub_1BCAA3C(v8, method);
  }
  v12 = 0;
  return !v12;
}


void __fastcall UserCommandCodeCollectionManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  UserCommandCodeCollectionManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x0

  if ( (byte_4B17460 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v5, v6);
    byte_4B17460 = 1;
  }
  v7 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
    v7 = UserCommandCodeCollectionManager_TypeInfo;
  }
  if ( v7->static_fields->isContinueDevice )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
    {
      sub_1BCAA3C(Instance, v9);
    }
    UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
      (UserCommandCodeCollectionMaster_o *)Instance,
      0LL);
    v11 = (const MethodInfo *)UserCommandCodeCollectionManager_TypeInfo;
    if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v10);
      v11 = (const MethodInfo *)UserCommandCodeCollectionManager_TypeInfo;
    }
    *((_WORD *)v11[2].virtualMethodPointer + 4) = 1;
    UserCommandCodeCollectionManager__WriteData(v11);
  }
}


bool __fastcall UserCommandCodeCollectionManager__ReadData(const MethodInfo *method)
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
  UserCommandCodeCollectionManager_c *v11; // x0
  ManagerConfig_c *v12; // x0
  UserCommandCodeCollectionManager_c *v14; // x0
  System_String_o *SaveFileName; // x19
  __int64 v16; // x1
  UserCommandCodeCollectionManager_c *v17; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryReader_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_o *v26; // x20
  UserCommandCodeCollectionManager_c *v27; // x0
  int v28; // w21
  __int64 v29; // x1
  char v30; // w20
  UserCommandCodeCollectionManager_c *v31; // x0
  int v32; // w20
  __int64 v33; // x1
  int32_t v34; // w21
  UserCommandCodeCollectionManager_c *v35; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  System_IO_BinaryReader_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  UserCommandCodeCollectionManager_c *v44; // x0

  if ( (byte_4B17464 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryReader_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v5, v6);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v7, v8);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v9, v10);
    byte_4B17464 = 1;
  }
  v11 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
    v11 = UserCommandCodeCollectionManager_TypeInfo;
  }
  v11->static_fields->isModfiy = 0;
  v12 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v1);
    v12 = ManagerConfig_TypeInfo;
  }
  if ( !v12->static_fields->UseMock )
  {
    v14 = UserCommandCodeCollectionManager_TypeInfo;
    if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
    SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v14);
    if ( System_IO_File__Exists(SaveFileName, 0LL) )
    {
      v17 = UserCommandCodeCollectionManager_TypeInfo;
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v16);
      UserCommandCodeCollectionManager__ClearSaveDataList((const MethodInfo *)v17);
      v18 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
      v22 = (System_IO_BinaryReader_o *)sub_1BCAA2C(System_IO_BinaryReader_TypeInfo, v19, v20, v21);
      System_IO_BinaryReader___ctor(v22, v18, 0LL);
      if ( !v22 )
        sub_1BCAA3C(v23, v24);
      v26 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._22_ReadString.method)(
                                 v22,
                                 v22->klass->vtable._23_ReadChars.methodPtr);
      v27 = UserCommandCodeCollectionManager_TypeInfo;
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v25);
        v27 = UserCommandCodeCollectionManager_TypeInfo;
      }
      if ( System_String__op_Inequality(v27->static_fields->SAVE_DATA_VERSION, v26, 0LL) )
      {
        v28 = 5;
      }
      else
      {
        v30 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._9_ReadBoolean.method)(
                v22,
                v22->klass->vtable._10_ReadByte.methodPtr);
        v31 = UserCommandCodeCollectionManager_TypeInfo;
        if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v29);
          v31 = UserCommandCodeCollectionManager_TypeInfo;
        }
        v31->static_fields->isContinueDevice = v30 & 1;
        v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._15_ReadInt32.method)(
                v22,
                v22->klass->vtable._16_ReadUInt32.methodPtr);
        if ( v32 >= 1 )
        {
          do
          {
            v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v22->klass->vtable._15_ReadInt32.method)(
                    v22,
                    v22->klass->vtable._16_ReadUInt32.methodPtr);
            v35 = UserCommandCodeCollectionManager_TypeInfo;
            if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v33);
              v35 = UserCommandCodeCollectionManager_TypeInfo;
            }
            oldList = v35->static_fields->oldList;
            if ( !oldList )
              sub_1BCAA3C(0LL, v33);
            items = oldList->fields._items;
            v38 = Method_System_Collections_Generic_List_int__Add__;
            ++oldList->fields._version;
            if ( !items )
              sub_1BCAA3C(oldList, v33);
            size = oldList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                oldList,
                v34,
                *(const MethodInfo_3584C38 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              oldList->fields._size = size + 1;
              items->m_Items[size + 1] = v34;
            }
            --v32;
          }
          while ( v32 );
        }
        v28 = 8;
      }
      klass = v22->klass;
      v41 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          --v41;
          p_offset += 4;
          if ( !v41 )
            goto LABEL_35;
        }
        v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_35:
        v43 = sub_1C1C7C0(v22, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v43)(v22, *(_QWORD *)(v43 + 8));
      if ( (v28 | 8) == 8 )
        return 1;
    }
    else
    {
      v44 = UserCommandCodeCollectionManager_TypeInfo;
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v16);
      UserCommandCodeCollectionManager__ClearSaveDataList((const MethodInfo *)v44);
    }
    return 0;
  }
  return 1;
}


void __fastcall UserCommandCodeCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UserCommandCodeCollectionManager_c *v10; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int32_t v12; // w20
  int v13; // w24
  struct UserCommandCodeCollectionManager_StaticFields *static_fields; // x8
  const char *name; // x9
  _QWORD *v16; // x10
  __int64 namespaze_low; // x11

  if ( (byte_4B17462 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v8, v9);
    byte_4B17462 = 1;
  }
  v10 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, method);
    v10 = UserCommandCodeCollectionManager_TypeInfo;
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
      v10 = UserCommandCodeCollectionManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    v10 = (UserCommandCodeCollectionManager_c *)static_fields->oldList;
    if ( !v10 )
      goto LABEL_19;
    if ( v13 == v12 )
      break;
    if ( System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)v10,
           v12,
           (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId )
      return;
    v10 = UserCommandCodeCollectionManager_TypeInfo;
    ++v12;
  }
  name = v10->_1.name;
  v16 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(v10->_1.namespaze);
  if ( !name )
LABEL_19:
    sub_1BCAA3C(v10, method);
  namespaze_low = SLODWORD(v10->_1.namespaze);
  if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)v10,
      svtId,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    static_fields = UserCommandCodeCollectionManager_TypeInfo->static_fields;
  }
  else
  {
    LODWORD(v10->_1.namespaze) = namespaze_low + 1;
    *(_DWORD *)&name[4 * namespaze_low + 32] = svtId;
  }
  static_fields->isModfiy = 1;
}


void __fastcall UserCommandCodeCollectionManager__SetOld_41273916(
        System_Int32_array *svtIdList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x22
  System_Collections_Generic_List_int__o *oldList; // x0
  struct System_Collections_Generic_List_int__o *v12; // x8
  int size; // w23
  int32_t v14; // w20
  int v15; // w9
  char *v16; // x10
  _DWORD *v17; // x10
  int v18; // t1
  unsigned __int64 v19; // x20
  int32_t *v20; // x23
  unsigned __int64 max_length; // x8
  struct UserCommandCodeCollectionManager_StaticFields *static_fields; // x8
  const char *items; // x9
  _QWORD *v24; // x10
  __int64 v25; // x11

  if ( (byte_4B17463 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v6, v7);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v8, v9);
    byte_4B17463 = 1;
  }
  if ( svtIdList )
  {
    v10 = *(_QWORD *)&svtIdList->max_length;
    if ( (int)v10 >= 1 )
    {
      oldList = (System_Collections_Generic_List_int__o *)UserCommandCodeCollectionManager_TypeInfo;
      if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, method);
        oldList = (System_Collections_Generic_List_int__o *)UserCommandCodeCollectionManager_TypeInfo;
      }
      v12 = *(struct System_Collections_Generic_List_int__o **)(*(_QWORD *)&oldList[4].fields._size + 16LL);
      if ( v12 )
      {
        size = v12->fields._size;
        if ( size < 1 )
        {
LABEL_21:
          v19 = 0LL;
          v20 = &svtIdList->m_Items[1];
          while ( 1 )
          {
            max_length = svtIdList->max_length;
            if ( v19 >= max_length )
              break;
            if ( v20[v19] >= 1 )
            {
              oldList = (System_Collections_Generic_List_int__o *)UserCommandCodeCollectionManager_TypeInfo;
              if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, method);
                oldList = (System_Collections_Generic_List_int__o *)UserCommandCodeCollectionManager_TypeInfo;
                max_length = svtIdList->max_length;
              }
              if ( v19 >= max_length )
                break;
              static_fields = *(struct UserCommandCodeCollectionManager_StaticFields **)&oldList[4].fields._size;
              oldList = static_fields->oldList;
              if ( !oldList )
                goto LABEL_36;
              method = (const MethodInfo *)(unsigned int)v20[v19];
              items = (const char *)oldList->fields._items;
              v24 = Method_System_Collections_Generic_List_int__Add__;
              ++oldList->fields._version;
              if ( !items )
                goto LABEL_36;
              v25 = oldList->fields._size;
              if ( (unsigned int)v25 >= *((_DWORD *)items + 6) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  oldList,
                  (int32_t)method,
                  *(const MethodInfo_3584C38 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                static_fields = UserCommandCodeCollectionManager_TypeInfo->static_fields;
              }
              else
              {
                oldList->fields._size = v25 + 1;
                *(_DWORD *)&items[4 * v25 + 32] = (_DWORD)method;
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
          if ( !oldList[5].fields._size )
          {
            j_il2cpp_runtime_class_init_0(oldList, method);
            oldList = (System_Collections_Generic_List_int__o *)UserCommandCodeCollectionManager_TypeInfo;
          }
          oldList = *(System_Collections_Generic_List_int__o **)(*(_QWORD *)&oldList[4].fields._size + 16LL);
          if ( !oldList )
            break;
          oldList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                oldList,
                                                                v14,
                                                                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
          v15 = 0;
          while ( 1 )
          {
            if ( svtIdList->max_length == v15 )
              goto LABEL_35;
            v16 = (char *)svtIdList + 4 * v15;
            v18 = *((_DWORD *)v16 + 8);
            v17 = v16 + 32;
            if ( (_DWORD)oldList == v18 )
              break;
            if ( (_DWORD)v10 == ++v15 )
              goto LABEL_19;
          }
          *v17 = 0;
LABEL_19:
          if ( ++v14 == size )
            goto LABEL_21;
          oldList = (System_Collections_Generic_List_int__o *)UserCommandCodeCollectionManager_TypeInfo;
        }
      }
LABEL_36:
      sub_1BCAA3C(oldList, method);
    }
  }
}


bool __fastcall UserCommandCodeCollectionManager__WriteData(const MethodInfo *method)
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
  UserCommandCodeCollectionManager_c *v13; // x0
  struct UserCommandCodeCollectionManager_StaticFields *static_fields; // x8
  ManagerConfig_c *v15; // x0
  UserCommandCodeCollectionManager_c *v16; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_IO_BinaryWriter_o *v22; // x19
  __int64 v23; // x1
  UserCommandCodeCollectionManager_c *v24; // x0
  struct UserCommandCodeCollectionManager_StaticFields *v25; // x8
  struct System_Collections_Generic_List_int__o *oldList; // x9
  int size; // w20
  __int64 v28; // x1
  int32_t i; // w21
  UserCommandCodeCollectionManager_c *v30; // x0
  System_Collections_Generic_List_int__o *v31; // x0
  unsigned int Item; // w0
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0

  if ( (byte_4B17465 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_BinaryWriter_TypeInfo, v1, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v7, v8);
    sub_1BCA7E0(&ManagerConfig_TypeInfo, v9, v10);
    sub_1BCA7E0(&UserCommandCodeCollectionManager_TypeInfo, v11, v12);
    byte_4B17465 = 1;
  }
  v13 = UserCommandCodeCollectionManager_TypeInfo;
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
    v13 = UserCommandCodeCollectionManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( !static_fields->isModfiy )
    return 0;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13, v1);
    static_fields = UserCommandCodeCollectionManager_TypeInfo->static_fields;
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
    v16 = UserCommandCodeCollectionManager_TypeInfo;
    if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v1);
    SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v16);
    v18 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v22 = (System_IO_BinaryWriter_o *)sub_1BCAA2C(System_IO_BinaryWriter_TypeInfo, v19, v20, v21);
    System_IO_BinaryWriter___ctor_62639712(v22, v18, 0LL);
    v24 = UserCommandCodeCollectionManager_TypeInfo;
    if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v23);
      v24 = UserCommandCodeCollectionManager_TypeInfo;
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
      UserCommandCodeCollectionManager_TypeInfo->static_fields->isContinueDevice,
      v22->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
      v22,
      (unsigned int)size,
      v22->klass->vtable._18_Write.methodPtr);
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v30 = UserCommandCodeCollectionManager_TypeInfo;
        if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo, v28);
          v30 = UserCommandCodeCollectionManager_TypeInfo;
        }
        v31 = v30->static_fields->oldList;
        if ( !v31 )
          sub_1BCAA3C(0LL, v28);
        Item = System_Collections_Generic_List_int___get_Item(
                 v31,
                 i,
                 (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
          v22,
          Item,
          v22->klass->vtable._18_Write.methodPtr);
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


System_String_o *__fastcall UserCommandCodeCollectionManager__getSaveFileName(const MethodInfo *method)
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

  if ( (byte_4B1745B & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B1745B = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(10, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}