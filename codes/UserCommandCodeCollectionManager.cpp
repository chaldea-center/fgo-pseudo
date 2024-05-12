void __fastcall UserCommandCodeCollectionManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  UserCommandCodeCollectionManager_c *v9; // x8
  System_Collections_Generic_List_int__o *v10; // x19
  struct UserCommandCodeCollectionManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438CAD5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    sub_B775C4(&StringLiteral_6766/*"Fgo_20180629_1"*/);
    byte_438CAD5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserCommandCodeCollectionManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6766/*"Fgo_20180629_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6766/*"Fgo_20180629_1"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserCommandCodeCollectionManager_TypeInfo;
  UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v11 = UserCommandCodeCollectionManager_TypeInfo->static_fields;
  v11->oldList = v10;
  sub_B77560((BattleServantConfConponent_o *)&v11->oldList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
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
  UserCommandCodeCollectionManager_c *v2; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8

  if ( (byte_438CACE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CACE = 1;
  }
  v2 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v2 = UserCommandCodeCollectionManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (oldList = UserCommandCodeCollectionManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_int___Clear(
        oldList,
        (const MethodInfo_30E61F4 *)Method_System_Collections_Generic_List_int__Clear__);
      v2 = UserCommandCodeCollectionManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B7769C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserCommandCodeCollectionManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserCommandCodeCollectionManager_c *v1; // x0
  const MethodInfo *v2; // x0
  UserCommandCodeCollectionManager_c *v3; // x8
  const MethodInfo *v4; // x0

  if ( (byte_438CACC & 1) == 0 )
  {
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CACC = 1;
  }
  v1 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__DeleteSaveData((const MethodInfo *)v1);
  UserCommandCodeCollectionManager__ClearSaveDataList(v2);
  v3 = UserCommandCodeCollectionManager_TypeInfo;
  UserCommandCodeCollectionManager_TypeInfo->static_fields->isContinueDevice = 1;
  v3->static_fields->isModfiy = 1;
  UserCommandCodeCollectionManager__WriteData(v4);
}


void __fastcall UserCommandCodeCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  UserCommandCodeCollectionManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_438CACB & 1) == 0 )
  {
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CACB = 1;
  }
  v1 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserCommandCodeCollectionManager__Initialize(const MethodInfo *method)
{
  UserCommandCodeCollectionManager_c *v1; // x0

  if ( (byte_438CACD & 1) == 0 )
  {
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CACD = 1;
  }
  v1 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserCommandCodeCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  UserCommandCodeCollectionManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_int__o *v7; // x23

  if ( (byte_438CAD0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CAD0 = 1;
  }
  v3 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v3 = UserCommandCodeCollectionManager_TypeInfo;
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
      v3 = UserCommandCodeCollectionManager_TypeInfo;
    }
    v7 = v3->static_fields->oldList;
    if ( !v7 )
      goto LABEL_20;
    if ( v7->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    if ( v7->fields._items->m_Items[i + 1] == svtId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v3 = UserCommandCodeCollectionManager_TypeInfo;
  }
  return 0;
}


void __fastcall UserCommandCodeCollectionManager__LoginProcess(const MethodInfo *method)
{
  UserCommandCodeCollectionManager_c *v1; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_438CACF & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CACF = 1;
  }
  v1 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v1 = UserCommandCodeCollectionManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___)) == 0LL )
    {
      sub_B7769C(Instance, v3);
    }
    UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
      (UserCommandCodeCollectionMaster_o *)Instance,
      v3);
    v4 = (const MethodInfo *)UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      v4 = (const MethodInfo *)UserCommandCodeCollectionManager_TypeInfo;
    }
    BYTE1(v4[2].klass->_1.gc_desc) = 0;
    LOBYTE(v4[2].klass->_1.gc_desc) = 1;
    UserCommandCodeCollectionManager__WriteData(v4);
  }
}


bool __fastcall UserCommandCodeCollectionManager__ReadData(const MethodInfo *method)
{
  UserCommandCodeCollectionManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserCommandCodeCollectionManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserCommandCodeCollectionManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  UserCommandCodeCollectionManager_c *v12; // x0
  char v13; // w20
  UserCommandCodeCollectionManager_c *v14; // x0
  int v15; // w20
  int i; // w23
  __int64 v17; // x1
  int32_t v18; // w21
  UserCommandCodeCollectionManager_c *v19; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  UserCommandCodeCollectionManager_c *v25; // x0
  int v26; // [xsp+8h] [xbp-48h]

  if ( (byte_438CAD3 & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryReader_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CAD3 = 1;
  }
  v1 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v1 = UserCommandCodeCollectionManager_TypeInfo;
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
  v4 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v6 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    }
    UserCommandCodeCollectionManager__ClearSaveDataList((const MethodInfo *)v6);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B77694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B7769C(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    v12 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      v12 = UserCommandCodeCollectionManager_TypeInfo;
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
      v14 = UserCommandCodeCollectionManager_TypeInfo;
      if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
        v14 = UserCommandCodeCollectionManager_TypeInfo;
      }
      v14->static_fields->isContinueDevice = v13 & 1;
      v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
              v8,
              v8->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v15 >= 1 )
      {
        for ( i = 0; i < v15; ++i )
        {
          v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                  v8,
                  v8->klass->vtable._16_ReadUInt32.methodPtr);
          v19 = UserCommandCodeCollectionManager_TypeInfo;
          if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
            v19 = UserCommandCodeCollectionManager_TypeInfo;
          }
          oldList = v19->static_fields->oldList;
          if ( !oldList )
            sub_B7769C(0LL, v17);
          System_Collections_Generic_List_int___Add(
            oldList,
            v18,
            (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
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
    v25 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    }
    UserCommandCodeCollectionManager__ClearSaveDataList((const MethodInfo *)v25);
    return 0;
  }
}


void __fastcall UserCommandCodeCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  UserCommandCodeCollectionManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  int v6; // w8
  __int64 v7; // x22
  struct System_Collections_Generic_List_int__o *v8; // x23

  if ( (byte_438CAD1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CAD1 = 1;
  }
  v3 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v3 = UserCommandCodeCollectionManager_TypeInfo;
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
        v3 = UserCommandCodeCollectionManager_TypeInfo;
      }
      v8 = v3->static_fields->oldList;
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      if ( v8->fields._items->m_Items[v7 + 1] == svtId )
        return;
      v3 = UserCommandCodeCollectionManager_TypeInfo;
      ++v7;
      v6 = (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
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
      v3 = UserCommandCodeCollectionManager_TypeInfo;
    }
  }
  v3 = (UserCommandCodeCollectionManager_c *)v3->static_fields->oldList;
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v3,
    svtId,
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserCommandCodeCollectionManager__SetOld_28256008(
        System_Int32_array *svtIdList,
        const MethodInfo *method)
{
  __int64 v3; // x21
  UserCommandCodeCollectionManager_c *v4; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  signed __int64 size; // x22
  unsigned __int64 v7; // x23
  int32_t *v8; // x24
  struct System_Collections_Generic_List_int__o *v9; // x25
  __int64 v10; // x10
  unsigned __int64 v11; // x22
  int32_t *v12; // x23
  unsigned __int64 max_length; // x8
  __int64 v14; // x0

  if ( (byte_438CAD2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CAD2 = 1;
  }
  if ( svtIdList )
  {
    v3 = *(_QWORD *)&svtIdList->max_length;
    if ( (int)v3 >= 1 )
    {
      v4 = UserCommandCodeCollectionManager_TypeInfo;
      if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
        v4 = UserCommandCodeCollectionManager_TypeInfo;
      }
      oldList = v4->static_fields->oldList;
      if ( oldList )
      {
        size = oldList->fields._size;
        if ( (int)size < 1 )
        {
LABEL_25:
          v11 = 0LL;
          v12 = &svtIdList->m_Items[1];
          while ( 1 )
          {
            max_length = svtIdList->max_length;
            if ( v11 >= max_length )
              break;
            if ( v12[v11] >= 1 )
            {
              v4 = UserCommandCodeCollectionManager_TypeInfo;
              if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
                v4 = UserCommandCodeCollectionManager_TypeInfo;
                max_length = svtIdList->max_length;
              }
              if ( v11 >= max_length )
                break;
              v4 = (UserCommandCodeCollectionManager_c *)v4->static_fields->oldList;
              if ( !v4 )
                goto LABEL_37;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v4,
                v12[v11],
                (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
              UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v11 >= (int)v3 )
              return;
          }
LABEL_36:
          v14 = sub_B776C8(v4);
          sub_B77668(v14, 0LL);
        }
        v7 = 0LL;
        v8 = &svtIdList->m_Items[1];
        while ( 1 )
        {
          if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v4);
            v4 = UserCommandCodeCollectionManager_TypeInfo;
          }
          v9 = v4->static_fields->oldList;
          if ( !v9 )
            break;
          if ( v7 >= (unsigned int)v9->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v10 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v10 >= svtIdList->max_length )
              goto LABEL_36;
            if ( v9->fields._items->m_Items[v7 + 1] == v8[v10] )
              break;
            if ( (int)++v10 >= (int)v3 )
              goto LABEL_24;
          }
          v8[v10] = 0;
LABEL_24:
          if ( (__int64)++v7 >= size )
            goto LABEL_25;
          v4 = UserCommandCodeCollectionManager_TypeInfo;
        }
      }
LABEL_37:
      sub_B7769C(v4, method);
    }
  }
}


bool __fastcall UserCommandCodeCollectionManager__WriteData(const MethodInfo *method)
{
  UserCommandCodeCollectionManager_c *v1; // x0
  struct UserCommandCodeCollectionManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  UserCommandCodeCollectionManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  UserCommandCodeCollectionManager_c *v12; // x0
  struct UserCommandCodeCollectionManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_int__o *oldList; // x9
  signed __int64 size; // x20
  __int64 v16; // x1
  unsigned __int64 i; // x22
  UserCommandCodeCollectionManager_c *v18; // x0
  struct System_Collections_Generic_List_int__o *v19; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0

  if ( (byte_438CAD4 & 1) == 0 )
  {
    sub_B775C4(&System_IO_BinaryWriter_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&ManagerConfig_TypeInfo);
    sub_B775C4(&UserCommandCodeCollectionManager_TypeInfo);
    byte_438CAD4 = 1;
  }
  v1 = UserCommandCodeCollectionManager_TypeInfo;
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    v1 = UserCommandCodeCollectionManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &UserCommandCodeCollectionManager_TypeInfo->static_fields->isModfiy;
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
    v7 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
    }
    SaveFileName = UserCommandCodeCollectionManager__getSaveFileName((const MethodInfo *)v7);
    v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v10 = (System_IO_BinaryWriter_o *)sub_B77694(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40221404(v10, v9, 0LL);
    v12 = UserCommandCodeCollectionManager_TypeInfo;
    if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
      v12 = UserCommandCodeCollectionManager_TypeInfo;
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
      UserCommandCodeCollectionManager_TypeInfo->static_fields->isContinueDevice,
      v10->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
      v10,
      (unsigned int)size,
      v10->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v18 = UserCommandCodeCollectionManager_TypeInfo;
        if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
          v18 = UserCommandCodeCollectionManager_TypeInfo;
        }
        v19 = v18->static_fields->oldList;
        if ( !v19 )
          sub_B7769C(v18, v16);
        if ( i >= (unsigned int)v19->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
          v10,
          (unsigned int)v19->fields._items->m_Items[i + 1],
          v10->klass->vtable._18_Write.methodPtr);
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


System_String_o *__fastcall UserCommandCodeCollectionManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_438CACA & 1) == 0 )
  {
    sub_B775C4(&AndroidUtil_TypeInfo);
    sub_B775C4(&DatFileName_TypeInfo);
    sub_B775C4(&StringLiteral_892/*"/"*/);
    byte_438CACA = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(10, 0LL);
  return System_String__Concat_44904220(DatFileSavePath, (System_String_o *)StringLiteral_892/*"/"*/, FileName, 0LL);
}