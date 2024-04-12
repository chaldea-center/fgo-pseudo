void __fastcall UserServantCollectionManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  UserServantCollectionManager_c *v9; // x8
  System_Collections_Generic_List_int__o *v10; // x19
  struct UserServantCollectionManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42AE1E8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    sub_B52984(&StringLiteral_6656/*"Fgo_20150511_1"*/);
    byte_42AE1E8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserServantCollectionManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6656/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6656/*"Fgo_20150511_1"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = UserServantCollectionManager_TypeInfo;
  UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = UserServantCollectionManager_TypeInfo->static_fields;
  v11->oldList = v10;
  sub_B52920((BattleServantConfConponent_o *)&v11->oldList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall UserServantCollectionManager___ctor(UserServantCollectionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantCollectionManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  UserServantCollectionManager_c *v2; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8

  if ( (byte_42AE1E1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1E1 = 1;
  }
  v2 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v2 = UserServantCollectionManager_TypeInfo;
  }
  oldList = v2->static_fields->oldList;
  if ( !oldList )
    goto LABEL_16;
  if ( oldList->fields._size >= 1 )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) == 0
      || v2->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v2),
          (oldList = UserServantCollectionManager_TypeInfo->static_fields->oldList) != 0LL) )
    {
      System_Collections_Generic_List_int___Clear(
        oldList,
        (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
      v2 = UserServantCollectionManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B52A5C(v2, v1);
  }
LABEL_12:
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = UserServantCollectionManager_TypeInfo;
  }
  v2->static_fields->isContinueDevice = 0;
  v2->static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  const MethodInfo *v2; // x0
  UserServantCollectionManager_c *v3; // x8
  const MethodInfo *v4; // x0

  if ( (byte_42AE1DF & 1) == 0 )
  {
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1DF = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__DeleteSaveData((const MethodInfo *)v1);
  UserServantCollectionManager__ClearSaveDataList(v2);
  v3 = UserServantCollectionManager_TypeInfo;
  UserServantCollectionManager_TypeInfo->static_fields->isContinueDevice = 1;
  v3->static_fields->isModfiy = 1;
  UserServantCollectionManager__WriteData(v4);
}


void __fastcall UserServantCollectionManager__DeleteSaveData(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42AE1DE & 1) == 0 )
  {
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1DE = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v1);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserServantCollectionManager__Initialize(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0

  if ( (byte_42AE1E0 & 1) == 0 )
  {
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1E0 = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall UserServantCollectionManager__IsNew(int32_t svtId, const MethodInfo *method)
{
  UserServantCollectionManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  __int64 i; // x22
  struct System_Collections_Generic_List_int__o *v7; // x23

  if ( (byte_42AE1E3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1E3 = 1;
  }
  v3 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v3 = UserServantCollectionManager_TypeInfo;
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
      v3 = UserServantCollectionManager_TypeInfo;
    }
    v7 = v3->static_fields->oldList;
    if ( !v7 )
      goto LABEL_20;
    if ( v7->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    if ( v7->fields._items->m_Items[i + 1] == svtId )
      break;
    if ( (int)i + 1 >= size )
      return 1;
    v3 = UserServantCollectionManager_TypeInfo;
  }
  return 0;
}


void __fastcall UserServantCollectionManager__LoginProcess(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x0

  if ( (byte_42AE1E2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1E2 = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v1 = UserServantCollectionManager_TypeInfo;
  }
  if ( v1->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___)) == 0LL )
    {
      sub_B52A5C(Instance, v3);
    }
    UserServantCollectionMaster__continueDeviceUserServantCollection((UserServantCollectionMaster_o *)Instance, v3);
    v4 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v4 = (const MethodInfo *)UserServantCollectionManager_TypeInfo;
    }
    BYTE1(v4[2].klass->_1.gc_desc) = 0;
    LOBYTE(v4[2].klass->_1.gc_desc) = 1;
    UserServantCollectionManager__WriteData(v4);
  }
}


bool __fastcall UserServantCollectionManager__ReadData(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  UserServantCollectionManager_c *v4; // x0
  System_String_o *SaveFileName; // x19
  UserServantCollectionManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  UserServantCollectionManager_c *v12; // x0
  __int64 v13; // x3
  char v14; // w20
  UserServantCollectionManager_c *v15; // x0
  int v16; // w20
  int i; // w23
  __int64 v18; // x1
  int32_t v19; // w21
  UserServantCollectionManager_c *v20; // x0
  System_Collections_Generic_List_int__o *oldList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  UserServantCollectionManager_c *v26; // x0
  int v27; // [xsp+8h] [xbp-48h]

  if ( (byte_42AE1E6 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1E6 = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v1 = UserServantCollectionManager_TypeInfo;
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
  v4 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v6 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    }
    UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v6);
    v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v8 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v8, v7, 0LL);
    if ( !v8 )
      sub_B52A5C(v9, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                               v8,
                               v8->klass->vtable._23_ReadChars.methodPtr);
    v12 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v12 = UserServantCollectionManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
    {
      v27 = 152;
    }
    else
    {
      v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
              v8,
              v8->klass->vtable._10_ReadByte.methodPtr);
      v15 = UserServantCollectionManager_TypeInfo;
      if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        v15 = UserServantCollectionManager_TypeInfo;
      }
      v15->static_fields->isContinueDevice = v14 & 1;
      v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
              v8,
              v8->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v16 >= 1 )
      {
        for ( i = 0; i < v16; ++i )
        {
          v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                  v8,
                  v8->klass->vtable._16_ReadUInt32.methodPtr);
          v20 = UserServantCollectionManager_TypeInfo;
          if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
            v20 = UserServantCollectionManager_TypeInfo;
          }
          oldList = v20->static_fields->oldList;
          if ( !oldList )
            sub_B52A5C(0LL, v18);
          System_Collections_Generic_List_int___Add(
            oldList,
            v19,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      v27 = 137;
    }
    klass = v8->klass;
    if ( *(_WORD *)&v8->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
          goto LABEL_39;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_39:
      v25 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v13);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v25)(v8, *(_QWORD *)(v25 + 8));
    return v27 == 137;
  }
  else
  {
    v26 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    }
    UserServantCollectionManager__ClearSaveDataList((const MethodInfo *)v26);
    return 0;
  }
}


void __fastcall UserServantCollectionManager__SetOld(int32_t svtId, const MethodInfo *method)
{
  UserServantCollectionManager_c *v3; // x0
  struct System_Collections_Generic_List_int__o *oldList; // x8
  int size; // w21
  int v6; // w8
  __int64 v7; // x22
  struct System_Collections_Generic_List_int__o *v8; // x23

  if ( (byte_42AE1E4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1E4 = 1;
  }
  v3 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v3 = UserServantCollectionManager_TypeInfo;
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
        v3 = UserServantCollectionManager_TypeInfo;
      }
      v8 = v3->static_fields->oldList;
      if ( !v8 )
        break;
      if ( v8->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      if ( v8->fields._items->m_Items[v7 + 1] == svtId )
        return;
      v3 = UserServantCollectionManager_TypeInfo;
      ++v7;
      v6 = (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
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
      v3 = UserServantCollectionManager_TypeInfo;
    }
  }
  v3 = (UserServantCollectionManager_c *)v3->static_fields->oldList;
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_int___Add(
    (System_Collections_Generic_List_int__o *)v3,
    svtId,
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall UserServantCollectionManager__SetOld_21484792(System_Int32_array *svtIdList, const MethodInfo *method)
{
  __int64 v3; // x21
  UserServantCollectionManager_c *v4; // x0
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

  if ( (byte_42AE1E5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1E5 = 1;
  }
  if ( svtIdList )
  {
    v3 = *(_QWORD *)&svtIdList->max_length;
    if ( (int)v3 >= 1 )
    {
      v4 = UserServantCollectionManager_TypeInfo;
      if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
        v4 = UserServantCollectionManager_TypeInfo;
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
              v4 = UserServantCollectionManager_TypeInfo;
              if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
                v4 = UserServantCollectionManager_TypeInfo;
                max_length = svtIdList->max_length;
              }
              if ( v11 >= max_length )
                break;
              v4 = (UserServantCollectionManager_c *)v4->static_fields->oldList;
              if ( !v4 )
                goto LABEL_37;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)v4,
                v12[v11],
                (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
              UserServantCollectionManager_TypeInfo->static_fields->isModfiy = 1;
            }
            if ( (__int64)++v11 >= (int)v3 )
              return;
          }
LABEL_36:
          v14 = sub_B52A88(v4);
          sub_B52A28(v14, 0LL);
        }
        v7 = 0LL;
        v8 = &svtIdList->m_Items[1];
        while ( 1 )
        {
          if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v4);
            v4 = UserServantCollectionManager_TypeInfo;
          }
          v9 = v4->static_fields->oldList;
          if ( !v9 )
            break;
          if ( v7 >= (unsigned int)v9->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
          v4 = UserServantCollectionManager_TypeInfo;
        }
      }
LABEL_37:
      sub_B52A5C(v4, method);
    }
  }
}


bool __fastcall UserServantCollectionManager__WriteData(const MethodInfo *method)
{
  UserServantCollectionManager_c *v1; // x0
  struct UserServantCollectionManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v5; // x0
  UserServantCollectionManager_c *v7; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v9; // x20
  System_IO_BinaryWriter_o *v10; // x19
  __int64 v11; // x1
  UserServantCollectionManager_c *v12; // x0
  struct UserServantCollectionManager_StaticFields *v13; // x8
  struct System_Collections_Generic_List_int__o *oldList; // x9
  signed __int64 size; // x20
  __int64 v16; // x1
  __int64 v17; // x3
  unsigned __int64 i; // x22
  UserServantCollectionManager_c *v19; // x0
  struct System_Collections_Generic_List_int__o *v20; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 v24; // x0

  if ( (byte_42AE1E7 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1E7 = 1;
  }
  v1 = UserServantCollectionManager_TypeInfo;
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    v1 = UserServantCollectionManager_TypeInfo;
  }
  static_fields = v1->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    p_isModfiy = &UserServantCollectionManager_TypeInfo->static_fields->isModfiy;
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
    v7 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
    }
    SaveFileName = UserServantCollectionManager__getSaveFileName((const MethodInfo *)v7);
    v9 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
    v10 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
    System_IO_BinaryWriter___ctor_40252128(v10, v9, 0LL);
    v12 = UserServantCollectionManager_TypeInfo;
    if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
      v12 = UserServantCollectionManager_TypeInfo;
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
      UserServantCollectionManager_TypeInfo->static_fields->isContinueDevice,
      v10->klass->vtable._9_Write.methodPtr);
    ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
      v10,
      (unsigned int)size,
      v10->klass->vtable._18_Write.methodPtr);
    if ( (int)size >= 1 )
    {
      for ( i = 0LL; (__int64)i < size; ++i )
      {
        v19 = UserServantCollectionManager_TypeInfo;
        if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
          v19 = UserServantCollectionManager_TypeInfo;
        }
        v20 = v19->static_fields->oldList;
        if ( !v20 )
          sub_B52A5C(v19, v16);
        if ( i >= (unsigned int)v20->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
        ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
          v10,
          (unsigned int)v20->fields._items->m_Items[i + 1],
          v10->klass->vtable._18_Write.methodPtr);
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


System_String_o *__fastcall UserServantCollectionManager__getSaveFileName(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42AE1DD & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AE1DD = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(7, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}