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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct UserEquipNewManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FAB36 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo, v8);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6589, v10);
    byte_40FAB36 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserEquipNewManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6589;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6589;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = UserEquipNewManager_TypeInfo;
  UserEquipNewManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
  v19 = UserEquipNewManager_TypeInfo->static_fields;
  v19->openList = (struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v19->openList, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
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

  if ( (byte_40FAB30 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v2);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v3);
    byte_40FAB30 = 1;
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
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__);
      v4 = UserEquipNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
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

  if ( (byte_40FAB2E & 1) == 0 )
  {
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v1);
    byte_40FAB2E = 1;
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

  if ( (byte_40FAB2D & 1) == 0 )
  {
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v1);
    byte_40FAB2D = 1;
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

  if ( (byte_40FAB2F & 1) == 0 )
  {
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v1);
    byte_40FAB2F = 1;
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

  if ( (byte_40FAB32 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, *(_QWORD *)&lv);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v5);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v6);
    byte_40FAB32 = 1;
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
    sub_B170D4();
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  WebViewManager_o *Instance; // x0
  UserEquipMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x0

  if ( (byte_40FAB31 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v3);
    byte_40FAB31 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_WarQuestSelectionMaster = (UserEquipMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL )
    {
      sub_B170D4();
    }
    UserEquipMaster__continueDeviceEquipLvInfo(MasterData_WarQuestSelectionMaster, v7);
    v8 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v8 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    }
    BYTE1(v8[2].klass->_1.gc_desc) = 0;
    LOBYTE(v8[2].klass->_1.gc_desc) = 1;
    UserEquipNewManager__WriteData(v8);
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x19
  System_String_o *v19; // x20
  UserEquipNewManager_c *v20; // x0
  char v21; // w20
  UserEquipNewManager_c *v22; // x0
  int v23; // w20
  int i; // w25
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  UserEquipNewManager_UserEquipLvInfo_o *v31; // x21
  UserEquipNewManager_c *v32; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *openList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  UserEquipNewManager_c *v38; // x0
  int v39; // [xsp+8h] [xbp-68h]

  if ( (byte_40FAB34 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__, v3);
    sub_B16FFC(&ManagerConfig_TypeInfo, v4);
    sub_B16FFC(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v5);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v6);
    byte_40FAB34 = 1;
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
    v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
    System_IO_BinaryReader___ctor(v18, v13, 0LL);
    if ( !v18 )
      sub_B170D4();
    v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                               v18,
                               v18->klass->vtable._23_ReadChars.methodPtr);
    v20 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v20 = UserEquipNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
    {
      v39 = 188;
    }
    else
    {
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
              v18,
              v18->klass->vtable._10_ReadByte.methodPtr);
      v22 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v22 = UserEquipNewManager_TypeInfo;
      }
      v22->static_fields->isContinueDevice = v21 & 1;
      v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
              v18,
              v18->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v23 >= 1 )
      {
        for ( i = 0; i < v23; ++i )
        {
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                  v18,
                  v18->klass->vtable._16_ReadUInt32.methodPtr);
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                  v18,
                  v18->klass->vtable._16_ReadUInt32.methodPtr);
          v31 = (UserEquipNewManager_UserEquipLvInfo_o *)sub_B170CC(
                                                           UserEquipNewManager_UserEquipLvInfo_TypeInfo,
                                                           v27,
                                                           v28,
                                                           v29,
                                                           v30);
          UserEquipNewManager_UserEquipLvInfo___ctor(v31, 0LL);
          if ( !v31 )
            sub_B170D4();
          v31->fields.equipId = v25;
          v31->fields.equipLv = v26;
          v32 = UserEquipNewManager_TypeInfo;
          if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
            v32 = UserEquipNewManager_TypeInfo;
          }
          openList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v32->static_fields->openList;
          if ( !openList )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            openList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
        }
      }
      v39 = 173;
    }
    klass = v18->klass;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v37 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v37)(v18, *(_QWORD *)(v37 + 8));
    return v39 == 173;
  }
  else
  {
    v38 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    }
    UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v38);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEquipNewManager__SetOld(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UserEquipNewManager_c *v11; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int size; // w21
  __int64 i; // x23
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *v15; // x24
  UserEquipNewManager_UserEquipLvInfo_o *v16; // x8
  UserEquipNewManager_c *v17; // x0
  UserEquipNewManager_UserEquipLvInfo_o *v18; // x21
  UserEquipNewManager_c *v19; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x0

  if ( (byte_40FAB33 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__, *(_QWORD *)&lv);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v8);
    sub_B16FFC(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v9);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v10);
    byte_40FAB33 = 1;
  }
  v11 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v11 = UserEquipNewManager_TypeInfo;
  }
  openList = v11->static_fields->openList;
  if ( !openList )
    goto LABEL_32;
  size = openList->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    v18 = (UserEquipNewManager_UserEquipLvInfo_o *)sub_B170CC(
                                                     UserEquipNewManager_UserEquipLvInfo_TypeInfo,
                                                     *(_QWORD *)&lv,
                                                     method,
                                                     v3,
                                                     v4);
    UserEquipNewManager_UserEquipLvInfo___ctor(v18, 0LL);
    if ( v18 )
    {
      v18->fields.equipId = equipId;
      v18->fields.equipLv = lv;
      v19 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v19 = UserEquipNewManager_TypeInfo;
      }
      v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v19->static_fields->openList;
      if ( v20 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_B170D4();
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = UserEquipNewManager_TypeInfo;
    }
    v15 = v11->static_fields->openList;
    if ( !v15 )
      goto LABEL_32;
    if ( v15->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v16 = v15->fields._items->m_Items[i];
    if ( !v16 )
      goto LABEL_32;
    if ( v16->fields.equipId == equipId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_23;
    v11 = UserEquipNewManager_TypeInfo;
  }
  if ( v16->fields.equipLv != lv )
  {
    v16->fields.equipLv = lv;
    v17 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_30;
    }
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
LABEL_29:
    v17 = UserEquipNewManager_TypeInfo;
LABEL_30:
    v17->static_fields->isModfiy = 1;
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x19
  UserEquipNewManager_c *v21; // x0
  struct UserEquipNewManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x9
  int size; // w20
  __int64 v25; // x22
  UserEquipNewManager_c *v26; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *v27; // x23
  UserEquipNewManager_UserEquipLvInfo_o *v28; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0

  if ( (byte_40FAB35 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v6);
    byte_40FAB35 = 1;
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
  v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
  System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
  v21 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v21 = UserEquipNewManager_TypeInfo;
  }
  v22 = v21->static_fields;
  openList = v22->openList;
  if ( !openList )
    sub_B170D4();
  if ( !v20 )
    sub_B170D4();
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
    v20,
    v22->SAVE_DATA_VERSION,
    v20->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
    v20,
    UserEquipNewManager_TypeInfo->static_fields->isContinueDevice,
    v20->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
    v20,
    (unsigned int)size,
    v20->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v25 = 0LL;
    do
    {
      v26 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v26 = UserEquipNewManager_TypeInfo;
      }
      v27 = v26->static_fields->openList;
      if ( !v27 )
        sub_B170D4();
      if ( v27->fields._size <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v28 = v27->fields._items->m_Items[v25];
      if ( !v28 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.equipId,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.equipLv,
        v20->klass->vtable._18_Write.methodPtr);
      ++v25;
    }
    while ( (int)v25 < size );
  }
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v32 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v32)(v20, *(_QWORD *)(v32 + 8));
  return 1;
}


System_String_o *__fastcall UserEquipNewManager__getSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40FAB2C & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40FAB2C = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(8, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


void __fastcall UserEquipNewManager_UserEquipLvInfo___ctor(
        UserEquipNewManager_UserEquipLvInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}