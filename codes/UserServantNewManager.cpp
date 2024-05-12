void __fastcall UserServantNewManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  UserServantNewManager_c *v9; // x8
  System_Collections_Generic_List_long__o *v10; // x19
  struct UserServantNewManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_439122C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    sub_B775C4(&StringLiteral_6761/*"Fgo_20150511_1"*/);
    byte_439122C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserServantNewManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6761/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6761/*"Fgo_20150511_1"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserServantNewManager_TypeInfo;
  UserServantNewManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v11 = UserServantNewManager_TypeInfo->static_fields;
  v11->oldList = v10;
  sub_B77560((BattleServantConfConponent_o *)&v11->oldList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall UserServantNewManager___ctor(UserServantNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantNewManager_c *v2; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8

  if ( (byte_4391225 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391225 = 1;
  }
  v2 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v2 = UserServantNewManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2), (oldList = UserServantNewManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_long___Clear(
        oldList,
        (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
      v2 = UserServantNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7769C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserServantNewManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall UserServantNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  UserServantNewManager_c *v3; // x8
  const MethodInfo *v4; // x0

  if ( (byte_4391223 & 1) == 0 )
  {
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391223 = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__DeleteSaveData((const MethodInfo *)v1);
  UserServantNewManager__ClearSaveDataList(v2);
  v3 = UserServantNewManager_TypeInfo;
  UserServantNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v3->static_fields->isModfiy = 1;
  UserServantNewManager__WriteData(v4);
}


void __fastcall UserServantNewManager__DeleteSaveData(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4391222 & 1) == 0 )
  {
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391222 = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserServantNewManager__Initialize(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0

  if ( (byte_4391224 & 1) == 0 )
  {
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391224 = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  UserServantNewManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserServantNewManager__IsNew(int64_t userSvtId, const MethodInfo *method)
{
  UserServantNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v7; // x23

  if ( (byte_4391227 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391227 = 1;
  }
  v3 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v3 = UserServantNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
LABEL_20:
    sub_B7769C(v3, method);
  size = oldList->fields._size;
  if ( size < 1 )
    return 1;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserServantNewManager_TypeInfo;
    }
    v7 = v3->static_fields->oldList;
    if ( !v7 )
      goto LABEL_20;
    if ( v7->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( v7->fields._items->m_Items[i] == userSvtId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v3 = UserServantNewManager_TypeInfo;
  }
  return 0;
}


void __fastcall UserServantNewManager__LoginProcess(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x19
  UserServantStorageMaster_o *v5; // x20
  const MethodInfo *v6; // x0

  if ( (byte_4391226 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391226 = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v1 = UserServantNewManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantStorageMaster___),
          !MasterData_WarQuestSelectionMaster)
      || (v5 = (UserServantStorageMaster_o *)Instance,
          UserServantMaster__continueDeviceUserServant(MasterData_WarQuestSelectionMaster, v3),
          !v5) )
    {
      sub_B7769C(Instance, v3);
    }
    UserServantStorageMaster__continueDeviceUserServant(v5, v3);
    v6 = (const MethodInfo *)UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v6 = (const MethodInfo *)UserServantNewManager_TypeInfo;
    }
    BYTE1(v6[2].klass->_1.gc_desc) = 0;
    LOBYTE(v6[2].klass->_1.gc_desc) = 1;
    UserServantNewManager__WriteData(v6);
  }
}


bool __fastcall UserServantNewManager__ReadData(const MethodInfo *method)
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
  char v13; // w20
  UserServantNewManager_c *v14; // x0
  int v15; // w20
  int i; // w23
  __int64 v17; // x1
  int64_t v18; // x21
  UserServantNewManager_c *v19; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  UserServantNewManager_c *v25; // x0
  int v26; // [xsp+8h] [xbp-48h]

  if ( (byte_439122A & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryReader_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_439122A = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v1 = UserServantNewManager_TypeInfo;
  }
  v1->static_fields->isModfiy = 0;
  v2 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 1;
  v4 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  }
  SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v6 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    UserServantNewManager__ClearSaveDataList((const MethodInfo *)v6);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B77694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B7769C(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    v12 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v12 = UserServantNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
    {
      v26 = 152;
    }
    else
    {
      v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
              v8,
              v8->klass->vtable._10_ReadByte.methodPtr);
      v14 = UserServantNewManager_TypeInfo;
      if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
        v14 = UserServantNewManager_TypeInfo;
      }
      v14->static_fields->isContinueDevice = v13 & 1;
      v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
              v8,
              v8->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v15 >= 1 )
      {
        for ( i = 0; i < v15; ++i )
        {
          v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._17_ReadInt64.method)(
                  v8,
                  v8->klass->vtable._18_ReadUInt64.methodPtr);
          v19 = UserServantNewManager_TypeInfo;
          if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserServantNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
            v19 = UserServantNewManager_TypeInfo;
          }
          oldList = v19->static_fields->oldList;
          if ( !oldList )
            sub_B7769C(0LL, v17);
          System_Collections_Generic_List_long___Add(
            oldList,
            v18,
            (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      v26 = 137;
    }
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_39;
      }
      v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_39:
      v24 = sub_B0F4C0(v8, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v24)(v8, *(_QWORD *)(v24 + 8));
    return v26 == 137;
  }
  else
  {
    v25 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    UserServantNewManager__ClearSaveDataList((const MethodInfo *)v25);
    return 0;
  }
}


void __fastcall UserServantNewManager__SetOld(int64_t userSvtId, const MethodInfo *method)
{
  UserServantNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v6; // w8
  __int64 v7; // x22
  struct System_Collections_Generic_List_long__o *v8; // x23

  if ( (byte_4391228 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391228 = 1;
  }
  v3 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v3 = UserServantNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
    goto LABEL_23;
  size = oldList->fields._size;
  v6 = (BYTE3(v3->vtable._0_Equals.methodPtr) >> 2) & 1;
  if ( size >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( (v6 & 1) != 0 && !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3);
        v3 = UserServantNewManager_TypeInfo;
      }
      v8 = v3->static_fields->oldList;
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( v8->fields._items->m_Items[v7] == userSvtId )
        return;
      v3 = UserServantNewManager_TypeInfo;
      ++v7;
      v6 = (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v7 >= size )
        goto LABEL_17;
    }
LABEL_23:
    sub_B7769C(v3, method);
  }
LABEL_17:
  if ( v6 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = UserServantNewManager_TypeInfo;
    }
  }
  v3 = (UserServantNewManager_c *)v3->static_fields->oldList;
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_long___Add(
    (System_Collections_Generic_List_long__o *)v3,
    userSvtId,
    (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
  UserServantNewManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserServantNewManager__SetOld_35684740(System_Int64_array *userSvtList, const MethodInfo *method)
{
  __int64 v3; // x21
  UserServantNewManager_c *v4; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  signed __int64 size; // x22
  unsigned __int64 v7; // x23
  int64_t *v8; // x24
  struct System_Collections_Generic_List_long__o *v9; // x25
  __int64 v10; // x10
  unsigned __int64 v11; // x22
  int64_t *m_Items; // x23
  unsigned __int64 max_length; // x8
  __int64 v14; // x0

  if ( (byte_4391229 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_4391229 = 1;
  }
  if ( userSvtList )
  {
    v3 = *(_QWORD *)&userSvtList->max_length;
    if ( (int)v3 >= 1 )
    {
      v4 = UserServantNewManager_TypeInfo;
      if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
        v4 = UserServantNewManager_TypeInfo;
      }
      oldList = v4->static_fields->oldList;
      if ( oldList )
      {
        size = oldList->fields._size;
        if ( (int)size < 1 )
        {
LABEL_25:
          v11 = 0LL;
          m_Items = userSvtList->m_Items;
          while ( 1 )
          {
            max_length = userSvtList->max_length;
            if ( v11 >= max_length )
              break;
            if ( m_Items[v11] >= 1 )
            {
              v4 = UserServantNewManager_TypeInfo;
              if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserServantNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
                v4 = UserServantNewManager_TypeInfo;
                max_length = userSvtList->max_length;
              }
              if ( v11 >= max_length )
                break;
              v4 = (UserServantNewManager_c *)v4->static_fields->oldList;
              if ( !v4 )
                goto LABEL_37;
              System_Collections_Generic_List_long___Add(
                (System_Collections_Generic_List_long__o *)v4,
                m_Items[v11],
                (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
              UserServantNewManager_TypeInfo->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v11 >= (int)v3 )
              return;
          }
LABEL_36:
          v14 = sub_B776C8(v4);
          sub_B77668(v14, 0LL);
        }
        v7 = 0LL;
        v8 = userSvtList->m_Items;
        while ( 1 )
        {
          if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v4);
            v4 = UserServantNewManager_TypeInfo;
          }
          v9 = v4->static_fields->oldList;
          if ( !v9 )
            break;
          if ( v7 >= (unsigned int)v9->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v10 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v10 >= userSvtList->max_length )
              goto LABEL_36;
            if ( v9->fields._items->m_Items[v7] == v8[v10] )
              break;
            if ( (int)++v10 >= (int)v3 )
              goto LABEL_24;
          }
          v8[v10] = 0LL;
LABEL_24:
          if ( (__int64)++v7 >= size )
            goto LABEL_25;
          v4 = UserServantNewManager_TypeInfo;
        }
      }
LABEL_37:
      sub_B7769C(v4, method);
    }
  }
}


bool __fastcall UserServantNewManager__WriteData(const MethodInfo *method)
{
  UserServantNewManager_c *v1; // x0
  struct UserServantNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  UserServantNewManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  UserServantNewManager_c *v12; // x0
  struct UserServantNewManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  signed __int64 size; // x20
  __int64 v16; // x1
  unsigned __int64 i; // x22
  UserServantNewManager_c *v18; // x0
  struct System_Collections_Generic_List_long__o *v19; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0

  if ( (byte_439122B & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryWriter_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UserServantNewManager_TypeInfo);
    byte_439122B = 1;
  }
  v1 = UserServantNewManager_TypeInfo;
  if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    v1 = UserServantNewManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &UserServantNewManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    v7 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
    }
    SaveFileName = UserServantNewManager__getSaveFileName((const MethodInfo *)v7);
    v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v10 = (System_IO_BinaryWriter_o *)sub_B77694(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40221404(v10, v9, 0LL);
    v12 = UserServantNewManager_TypeInfo;
    if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
      v12 = UserServantNewManager_TypeInfo;
    }
    v13 = v12->static_fields;
    oldList = v13->oldList;
    if ( !oldList )
      sub_B7769C(v12, v11);
    if ( !v10 )
      sub_B7769C(v12, v11);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
      v10,
      v13->SAVE_DATA_VERSION,
      v10->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
      v10,
      UserServantNewManager_TypeInfo->static_fields->isContinueDevice,
      v10->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
      v10,
      (unsigned int)size,
      v10->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v18 = UserServantNewManager_TypeInfo;
        if ( (BYTE3(UserServantNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserServantNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
          v18 = UserServantNewManager_TypeInfo;
        }
        v19 = v18->static_fields->oldList;
        if ( !v19 )
          sub_B7769C(v18, v16);
        if ( i >= (unsigned int)v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v10->klass->vtable._19_Write.method)(
          v10,
          v19->fields._items->m_Items[i],
          v10->klass->vtable._20_Write.methodPtr);
      }
    }
    klass = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v23 = sub_B0F4C0(v10, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v10, *(_QWORD *)(v23 + 8));
  }
  return 1;
}


System_String_o *__fastcall UserServantNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4391221 & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_4391221 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(5, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}