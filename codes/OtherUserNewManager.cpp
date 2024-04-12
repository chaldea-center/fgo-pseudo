void __fastcall OtherUserNewManager___cctor(const MethodInfo *method)
{
  struct OtherUserNewManager_StaticFields *static_fields; // x0
  OtherUserNewManager_c *v2; // x8
  System_Collections_Generic_List_long__o *v3; // x19
  struct OtherUserNewManager_StaticFields *v4; // x0

  if ( (byte_42ADBC5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B52984(&System_Collections_Generic_List_long__TypeInfo);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    sub_B52984(&StringLiteral_6657/*"Fgo_20151127_1"*/);
    byte_42ADBC5 = 1;
  }
  static_fields = OtherUserNewManager_TypeInfo->static_fields;
  static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6657/*"Fgo_20151127_1"*/;
  sub_B52920(static_fields);
  v2 = OtherUserNewManager_TypeInfo;
  OtherUserNewManager_TypeInfo->static_fields->isModfiy = 0;
  v2->static_fields->isContinueDevice = 0;
  v3 = (System_Collections_Generic_List_long__o *)sub_B52A54(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_2FE1070 *)Method_System_Collections_Generic_List_long___ctor__);
  v4 = OtherUserNewManager_TypeInfo->static_fields;
  v4->oldList = v3;
  sub_B52920(&v4->oldList);
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

  if ( (byte_42ADBBE & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBBE = 1;
  }
  v2 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v2 = OtherUserNewManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2), (oldList = OtherUserNewManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_long___Clear(
        oldList,
        (const MethodInfo_2FE21D8 *)Method_System_Collections_Generic_List_long__Clear__);
      v2 = OtherUserNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B52A5C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = OtherUserNewManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  const MethodInfo *v2; // x0
  OtherUserNewManager_c *v3; // x8
  const MethodInfo *v4; // x0

  if ( (byte_42ADBBC & 1) == 0 )
  {
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBBC = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  OtherUserNewManager__DeleteSaveData((const MethodInfo *)v1);
  OtherUserNewManager__ClearSaveDataList(v2);
  v3 = OtherUserNewManager_TypeInfo;
  OtherUserNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v3->static_fields->isModfiy = 1;
  OtherUserNewManager__WriteData(v4);
}


void __fastcall OtherUserNewManager__DeleteSaveData(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42ADBBB & 1) == 0 )
  {
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBBB = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall OtherUserNewManager__Initialize(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0

  if ( (byte_42ADBBD & 1) == 0 )
  {
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBBD = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  OtherUserNewManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall OtherUserNewManager__IsNew(int64_t userId, const MethodInfo *method)
{
  OtherUserNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_long__o *v7; // x23

  if ( (byte_42ADBC0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBC0 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v3 = OtherUserNewManager_TypeInfo;
  }
  oldList = v3->static_fields->oldList;
  if ( !oldList )
LABEL_20:
    sub_B52A5C(v3, method);
  size = oldList->fields._size;
  if ( size < 1 )
    return 1;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = OtherUserNewManager_TypeInfo;
    }
    v7 = v3->static_fields->oldList;
    if ( !v7 )
      goto LABEL_20;
    if ( v7->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( v7->fields._items->m_Items[i] == userId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v3 = OtherUserNewManager_TypeInfo;
  }
  return 0;
}


void __fastcall OtherUserNewManager__LoginProcess(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_42ADBBF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_OtherUserGameMaster___);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42ADBBF = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v1 = OtherUserNewManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_OtherUserGameMaster___)) == 0LL )
    {
      sub_B52A5C(Instance, v3);
    }
    OtherUserGameMaster__continueDeviceOtherUser((OtherUserGameMaster_o *)Instance, v3);
    v4 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v4 = (const MethodInfo *)OtherUserNewManager_TypeInfo;
    }
    BYTE1(v4[2].klass->_1.gc_desc) = 0;
    LOBYTE(v4[2].klass->_1.gc_desc) = 1;
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
  __int64 v12; // x3
  char v13; // w20
  OtherUserNewManager_c *v14; // x0
  int v15; // w20
  int i; // w23
  __int64 v17; // x1
  int64_t v18; // x21
  OtherUserNewManager_c *v19; // x0
  System_Collections_Generic_List_long__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0
  int v25; // [xsp+8h] [xbp-48h]

  if ( (byte_42ADBC3 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBC3 = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v1 = OtherUserNewManager_TypeInfo;
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
  v4 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  }
  SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v4);
  OtherUserNewManager__ClearSaveDataList((const MethodInfo *)SaveFileName);
  if ( !System_IO_File__Exists(SaveFileName, 0LL) )
    return 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
  v7 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._22_ReadString.method)(
                             v7,
                             v7->klass->vtable._23_ReadChars.methodPtr);
  v11 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v11 = OtherUserNewManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0LL) )
  {
    v25 = 152;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._9_ReadBoolean.method)(
            v7,
            v7->klass->vtable._10_ReadByte.methodPtr);
    v14 = OtherUserNewManager_TypeInfo;
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
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
      for ( i = 0; i < v15; ++i )
      {
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v7->klass->vtable._17_ReadInt64.method)(
                v7,
                v7->klass->vtable._18_ReadUInt64.methodPtr);
        v19 = OtherUserNewManager_TypeInfo;
        if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
          v19 = OtherUserNewManager_TypeInfo;
        }
        oldList = v19->static_fields->oldList;
        if ( !oldList )
          sub_B52A5C(0LL, v17);
        System_Collections_Generic_List_long___Add(
          oldList,
          v18,
          (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
    v25 = 137;
  }
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_36;
    }
    v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_36:
    v24 = sub_AEB880(v7, System_IDisposable_TypeInfo, 0LL, v12);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v24)(v7, *(_QWORD *)(v24 + 8));
  return v25 == 137;
}


void __fastcall OtherUserNewManager__SetOld(int64_t userId, const MethodInfo *method)
{
  OtherUserNewManager_c *v3; // x0
  struct System_Collections_Generic_List_long__o *oldList; // x8
  int size; // w21
  int v6; // w8
  __int64 v7; // x22
  struct System_Collections_Generic_List_long__o *v8; // x23

  if ( (byte_42ADBC1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBC1 = 1;
  }
  v3 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v3 = OtherUserNewManager_TypeInfo;
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
        v3 = OtherUserNewManager_TypeInfo;
      }
      v8 = v3->static_fields->oldList;
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( v8->fields._items->m_Items[v7] == userId )
        return;
      v3 = OtherUserNewManager_TypeInfo;
      ++v7;
      v6 = (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
      if ( (int)v7 >= size )
        goto LABEL_17;
    }
LABEL_23:
    sub_B52A5C(v3, method);
  }
LABEL_17:
  if ( v6 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = OtherUserNewManager_TypeInfo;
    }
  }
  v3 = (OtherUserNewManager_c *)v3->static_fields->oldList;
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_long___Add(
    (System_Collections_Generic_List_long__o *)v3,
    userId,
    (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
  OtherUserNewManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall OtherUserNewManager__SetOld_20798756(System_Int64_array *userList, const MethodInfo *method)
{
  __int64 v3; // x21
  OtherUserNewManager_c *v4; // x0
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

  if ( (byte_42ADBC2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_long__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBC2 = 1;
  }
  if ( userList )
  {
    v3 = *(_QWORD *)&userList->max_length;
    if ( (int)v3 >= 1 )
    {
      v4 = OtherUserNewManager_TypeInfo;
      if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
        v4 = OtherUserNewManager_TypeInfo;
      }
      oldList = v4->static_fields->oldList;
      if ( oldList )
      {
        size = oldList->fields._size;
        if ( (int)size < 1 )
        {
LABEL_25:
          v11 = 0LL;
          m_Items = userList->m_Items;
          while ( 1 )
          {
            max_length = userList->max_length;
            if ( v11 >= max_length )
              break;
            if ( m_Items[v11] >= 1 )
            {
              v4 = OtherUserNewManager_TypeInfo;
              if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
                v4 = OtherUserNewManager_TypeInfo;
                max_length = userList->max_length;
              }
              if ( v11 >= max_length )
                break;
              v4 = (OtherUserNewManager_c *)v4->static_fields->oldList;
              if ( !v4 )
                goto LABEL_37;
              System_Collections_Generic_List_long___Add(
                (System_Collections_Generic_List_long__o *)v4,
                m_Items[v11],
                (const MethodInfo_2FE1DCC *)Method_System_Collections_Generic_List_long__Add__);
              OtherUserNewManager_TypeInfo->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v11 >= (int)v3 )
              return;
          }
LABEL_36:
          v14 = sub_B52A88(v4);
          sub_B52A28(v14, 0LL);
        }
        v7 = 0LL;
        v8 = userList->m_Items;
        while ( 1 )
        {
          if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v4);
            v4 = OtherUserNewManager_TypeInfo;
          }
          v9 = v4->static_fields->oldList;
          if ( !v9 )
            break;
          if ( v7 >= (unsigned int)v9->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v10 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v10 >= userList->max_length )
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
          v4 = OtherUserNewManager_TypeInfo;
        }
      }
LABEL_37:
      sub_B52A5C(v4, method);
    }
  }
}


bool __fastcall OtherUserNewManager__WriteData(const MethodInfo *method)
{
  OtherUserNewManager_c *v1; // x0
  struct OtherUserNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  OtherUserNewManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  OtherUserNewManager_c *v12; // x0
  struct OtherUserNewManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_long__o *oldList; // x9
  signed __int64 size; // x20
  __int64 v16; // x1
  __int64 v17; // x3
  unsigned __int64 i; // x22
  OtherUserNewManager_c *v19; // x0
  struct System_Collections_Generic_List_long__o *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0

  if ( (byte_42ADBC4 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&OtherUserNewManager_TypeInfo);
    byte_42ADBC4 = 1;
  }
  v1 = OtherUserNewManager_TypeInfo;
  if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    v1 = OtherUserNewManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &OtherUserNewManager_TypeInfo->static_fields->isModfiy;
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
    v7 = OtherUserNewManager_TypeInfo;
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
    }
    SaveFileName = OtherUserNewManager__getSaveFileName((const MethodInfo *)v7);
    v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v10 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40252128(v10, v9, 0LL);
    v12 = OtherUserNewManager_TypeInfo;
    if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
      v12 = OtherUserNewManager_TypeInfo;
    }
    v13 = v12->static_fields;
    oldList = v13->oldList;
    if ( !oldList )
      sub_B52A5C(v12, v11);
    if ( !v10 )
      sub_B52A5C(v12, v11);
    size = oldList->fields._size;
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v10->klass->vtable._22_Write.method)(
      v10,
      v13->SAVE_DATA_VERSION,
      v10->klass[1]._1.image);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v10->klass->vtable._8_Write.method)(
      v10,
      OtherUserNewManager_TypeInfo->static_fields->isContinueDevice,
      v10->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
      v10,
      (unsigned int)size,
      v10->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v19 = OtherUserNewManager_TypeInfo;
        if ( (BYTE3(OtherUserNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserNewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
          v19 = OtherUserNewManager_TypeInfo;
        }
        v20 = v19->static_fields->oldList;
        if ( !v20 )
          sub_B52A5C(v19, v16);
        if ( i >= (unsigned int)v20->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v10->klass->vtable._19_Write.method)(
          v10,
          v20->fields._items->m_Items[i],
          v10->klass->vtable._20_Write.methodPtr);
      }
    }
    klass = v10->klass;
    if ( *(_WORD *)&v10->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v24 = sub_AEB880(v10, System_IDisposable_TypeInfo, 0LL, v17);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v24)(v10, *(_QWORD *)(v24 + 8));
  }
  return 1;
}


System_String_o *__fastcall OtherUserNewManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42ADBBA & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42ADBBA = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(12, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}