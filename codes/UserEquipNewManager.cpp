void __fastcall UserEquipNewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  UserEquipNewManager_c *v13; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct UserEquipNewManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4188B14 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo, v8);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6613/*"Fgo_20150511_1"*/, v10);
    byte_4188B14 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserEquipNewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6613/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6613/*"Fgo_20150511_1"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserEquipNewManager_TypeInfo;
  UserEquipNewManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
  v15 = UserEquipNewManager_TypeInfo->static_fields;
  v15->openList = (struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->openList, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
}


void __fastcall UserEquipNewManager___ctor(UserEquipNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserEquipNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserEquipNewManager_c *v4; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *openList; // x8

  if ( (byte_4188B0E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v2);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v3);
    byte_4188B0E = 1;
  }
  v4 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v4 = UserEquipNewManager_TypeInfo;
  }
  openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->openList;
  if ( !openList )
    goto LABEL_16;
  if ( openList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserEquipNewManager_TypeInfo->static_fields->openList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        openList,
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__);
      v4 = UserEquipNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = UserEquipNewManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall UserEquipNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  const MethodInfo *v3; // x0
  UserEquipNewManager_c *v4; // x8
  const MethodInfo *v5; // x0

  if ( (byte_4188B0C & 1) == 0 )
  {
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v1);
    byte_4188B0C = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__DeleteSaveData((const MethodInfo *)v2);
  UserEquipNewManager__ClearSaveDataList(v3);
  v4 = UserEquipNewManager_TypeInfo;
  UserEquipNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v4->static_fields->isModfiy = 1;
  UserEquipNewManager__WriteData(v5);
}


void __fastcall UserEquipNewManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4188B0B & 1) == 0 )
  {
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v1);
    byte_4188B0B = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v2);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserEquipNewManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  UserEquipNewManager_c *v2; // x0

  if ( (byte_4188B0D & 1) == 0 )
  {
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v1);
    byte_4188B0D = 1;
  }
  v2 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEquipNewManager__IsNew(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UserEquipNewManager_c *v7; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int size; // w22
  __int64 i; // x23
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *v11; // x24
  UserEquipNewManager_UserEquipLvInfo_o *v12; // x8

  if ( (byte_4188B10 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, *(_QWORD *)&lv);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v5);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v6);
    byte_4188B10 = 1;
  }
  v7 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v7 = UserEquipNewManager_TypeInfo;
  }
  openList = v7->static_fields->openList;
  if ( !openList )
LABEL_22:
    sub_B2C434(v7, *(_QWORD *)&lv);
  size = openList->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = UserEquipNewManager_TypeInfo;
    }
    v11 = v7->static_fields->openList;
    if ( !v11 )
      goto LABEL_22;
    if ( v11->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v12 = v11->fields._items->m_Items[i];
    if ( !v12 )
      goto LABEL_22;
    if ( v12->fields.equipId == equipId && v12->fields.equipLv < lv )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v7 = UserEquipNewManager_TypeInfo;
  }
  return 1;
}


void __fastcall UserEquipNewManager__LoginProcess(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  UserEquipNewManager_c *v4; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_4188B0F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEquipMaster___, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v3);
    byte_4188B0F = 1;
  }
  v4 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v4 = UserEquipNewManager_TypeInfo;
  }
  if ( v4->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL )
    {
      sub_B2C434(Instance, v6);
    }
    UserEquipMaster__continueDeviceEquipLvInfo((UserEquipMaster_o *)Instance, v6);
    v7 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v7 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    }
    BYTE1(v7[2].klass->_1.gc_desc) = 0;
    LOBYTE(v7[2].klass->_1.gc_desc) = 1;
    UserEquipNewManager__WriteData(v7);
  }
}


bool __fastcall UserEquipNewManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserEquipNewManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  UserEquipNewManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  UserEquipNewManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  UserEquipNewManager_c *v18; // x0
  __int64 v19; // x3
  char v20; // w20
  UserEquipNewManager_c *v21; // x0
  int v22; // w20
  int i; // w25
  int32_t v24; // w22
  int32_t v25; // w23
  UserEquipNewManager_UserEquipLvInfo_o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  UserEquipNewManager_c *v29; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *openList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0
  UserEquipNewManager_c *v35; // x0
  int v36; // [xsp+8h] [xbp-68h]

  if ( (byte_4188B12 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v5);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v6);
    byte_4188B12 = 1;
  }
  v7 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v7 = UserEquipNewManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 0;
  v8 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 1;
  v10 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v10);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v12 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    }
    UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v12);
    v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v14, v13, 0LL);
    if ( !v14 )
      sub_B2C434(v15, v16);
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v18 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v18 = UserEquipNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
    {
      v36 = 188;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
              v14,
              v14->klass->vtable._10_ReadByte.methodPtr);
      v21 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v21 = UserEquipNewManager_TypeInfo;
      }
      v21->static_fields->isContinueDevice = v20 & 1;
      v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
              v14,
              v14->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v22 >= 1 )
      {
        for ( i = 0; i < v22; ++i )
        {
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                  v14,
                  v14->klass->vtable._16_ReadUInt32.methodPtr);
          v26 = (UserEquipNewManager_UserEquipLvInfo_o *)sub_B2C42C(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
          UserEquipNewManager_UserEquipLvInfo___ctor(v26, 0LL);
          if ( !v26 )
            sub_B2C434(v27, v28);
          v26->fields.equipId = v24;
          v26->fields.equipLv = v25;
          v29 = UserEquipNewManager_TypeInfo;
          if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
            v29 = UserEquipNewManager_TypeInfo;
          }
          openList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29->static_fields->openList;
          if ( !openList )
            sub_B2C434(0LL, v28);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            openList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
        }
      }
      v36 = 173;
    }
    klass = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v32;
        p_offset += 4;
        if ( v32 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v34 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v14, *(_QWORD *)(v34 + 8));
    return v36 == 173;
  }
  else
  {
    v35 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    }
    UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v35);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEquipNewManager__SetOld(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserEquipNewManager_c *v9; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int size; // w21
  __int64 i; // x23
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *v13; // x24
  UserEquipNewManager_UserEquipLvInfo_o *v14; // x8
  UserEquipNewManager_c *v15; // x0
  UserEquipNewManager_UserEquipLvInfo_o *v16; // x21
  UserEquipNewManager_c *v17; // x0

  if ( (byte_4188B11 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__, *(_QWORD *)&lv);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v6);
    sub_B2C35C(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v7);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v8);
    byte_4188B11 = 1;
  }
  v9 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v9 = UserEquipNewManager_TypeInfo;
  }
  openList = v9->static_fields->openList;
  if ( !openList )
    goto LABEL_32;
  size = openList->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    v16 = (UserEquipNewManager_UserEquipLvInfo_o *)sub_B2C42C(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    UserEquipNewManager_UserEquipLvInfo___ctor(v16, 0LL);
    if ( v16 )
    {
      v16->fields.equipId = equipId;
      v16->fields.equipLv = lv;
      v17 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v17 = UserEquipNewManager_TypeInfo;
      }
      v9 = (UserEquipNewManager_c *)v17->static_fields->openList;
      if ( v9 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v9,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_B2C434(v9, *(_QWORD *)&lv);
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = UserEquipNewManager_TypeInfo;
    }
    v13 = v9->static_fields->openList;
    if ( !v13 )
      goto LABEL_32;
    if ( v13->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v13->fields._items->m_Items[i];
    if ( !v14 )
      goto LABEL_32;
    if ( v14->fields.equipId == equipId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_23;
    v9 = UserEquipNewManager_TypeInfo;
  }
  if ( v14->fields.equipLv != lv )
  {
    v14->fields.equipLv = lv;
    v15 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_30;
    }
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
LABEL_29:
    v15 = UserEquipNewManager_TypeInfo;
LABEL_30:
    v15->static_fields->isModfiy = 1;
  }
}


bool __fastcall UserEquipNewManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserEquipNewManager_c *v7; // x0
  struct UserEquipNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  UserEquipNewManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  UserEquipNewManager_c *v18; // x0
  struct UserEquipNewManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x9
  int size; // w20
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x22
  UserEquipNewManager_c *v25; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *v26; // x23
  UserEquipNewManager_UserEquipLvInfo_o *v27; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0

  if ( (byte_4188B13 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v6);
    byte_4188B13 = 1;
  }
  v7 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v7 = UserEquipNewManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &UserEquipNewManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v11 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  if ( v11->static_fields->UseMock )
    return 0;
  v13 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
  v18 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v18 = UserEquipNewManager_TypeInfo;
  }
  v19 = v18->static_fields;
  openList = v19->openList;
  if ( !openList )
    sub_B2C434(v18, v17);
  if ( !v16 )
    sub_B2C434(v18, v17);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v19->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    UserEquipNewManager_TypeInfo->static_fields->isContinueDevice,
    v16->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
    v16,
    (unsigned int)size,
    v16->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v24 = 0LL;
    do
    {
      v25 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v25 = UserEquipNewManager_TypeInfo;
      }
      v26 = v25->static_fields->openList;
      if ( !v26 )
        sub_B2C434(v25, v22);
      if ( v26->fields._size <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = v26->fields._items->m_Items[v24];
      if ( !v27 )
        sub_B2C434(v25, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.equipId,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.equipLv,
        v16->klass->vtable._18_Write.methodPtr);
      ++v24;
    }
    while ( (int)v24 < size );
  }
  klass = v16->klass;
  if ( *(_WORD *)&v16->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v29;
      p_offset += 4;
      if ( v29 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v31 = sub_AC5258(v16, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v31)(v16, *(_QWORD *)(v31 + 8));
  return 1;
}


System_String_o *__fastcall UserEquipNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4188B0A & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4188B0A = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(8, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall UserEquipNewManager_UserEquipLvInfo___ctor(
        UserEquipNewManager_UserEquipLvInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}