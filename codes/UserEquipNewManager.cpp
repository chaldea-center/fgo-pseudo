void __fastcall UserEquipNewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  UserEquipNewManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct UserEquipNewManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EA1DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6692/*"Fgo_20150511_1"*/, v14, v15, v16);
    byte_42EA1DC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)UserEquipNewManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6692/*"Fgo_20150511_1"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6692/*"Fgo_20150511_1"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = UserEquipNewManager_TypeInfo;
  UserEquipNewManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo___ctor__);
  v21 = UserEquipNewManager_TypeInfo->static_fields;
  v21->openList = (struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *)v20;
  sub_B5D560((BattleServantConfConponent_o *)&v21->openList, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
}


void __fastcall UserEquipNewManager___ctor(UserEquipNewManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserEquipNewManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UserEquipNewManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *openList; // x8

  if ( (byte_42EA1D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v4, v5, v6);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v7, v8, v9);
    byte_42EA1D6 = 1;
  }
  v10 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v10 = UserEquipNewManager_TypeInfo;
  }
  openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->openList;
  if ( !openList )
    goto LABEL_16;
  if ( openList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (openList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UserEquipNewManager_TypeInfo->static_fields->openList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        openList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Clear__);
      v10 = UserEquipNewManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = UserEquipNewManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModfiy = 1;
}


void __fastcall UserEquipNewManager__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserEquipNewManager_c *v4; // x0
  const MethodInfo *v5; // x0
  UserEquipNewManager_c *v6; // x8
  const MethodInfo *v7; // x0

  if ( (byte_42EA1D4 & 1) == 0 )
  {
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v1, v2, v3);
    byte_42EA1D4 = 1;
  }
  v4 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__DeleteSaveData((const MethodInfo *)v4);
  UserEquipNewManager__ClearSaveDataList(v5);
  v6 = UserEquipNewManager_TypeInfo;
  UserEquipNewManager_TypeInfo->static_fields->isContinueDevice = 1;
  v6->static_fields->isModfiy = 1;
  UserEquipNewManager__WriteData(v7);
}


void __fastcall UserEquipNewManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserEquipNewManager_c *v4; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42EA1D3 & 1) == 0 )
  {
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v1, v2, v3);
    byte_42EA1D3 = 1;
  }
  v4 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v4);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


void __fastcall UserEquipNewManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserEquipNewManager_c *v4; // x0

  if ( (byte_42EA1D5 & 1) == 0 )
  {
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v1, v2, v3);
    byte_42EA1D5 = 1;
  }
  v4 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__ReadData((const MethodInfo *)v4);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserEquipNewManager__IsNew(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UserEquipNewManager_c *v12; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int size; // w22
  __int64 i; // x23
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *v16; // x24
  UserEquipNewManager_UserEquipLvInfo_o *v17; // x8

  if ( (byte_42EA1D8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__,
      lv,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v6, v7, v8);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v9, v10, v11);
    byte_42EA1D8 = 1;
  }
  v12 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v12 = UserEquipNewManager_TypeInfo;
  }
  openList = v12->static_fields->openList;
  if ( !openList )
LABEL_22:
    sub_B5D69C(v12, *(_QWORD *)&lv);
  size = openList->fields._size;
  if ( size < 1 )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = UserEquipNewManager_TypeInfo;
    }
    v16 = v12->static_fields->openList;
    if ( !v16 )
      goto LABEL_22;
    if ( v16->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v17 = v16->fields._items->m_Items[i];
    if ( !v17 )
      goto LABEL_22;
    if ( v17->fields.equipId == equipId && v17->fields.equipLv < lv )
      break;
    if ( (int)i + 1 >= size )
      return 0;
    v12 = UserEquipNewManager_TypeInfo;
  }
  return 1;
}


void __fastcall UserEquipNewManager__LoginProcess(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UserEquipNewManager_c *v10; // x0
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x0

  if ( (byte_42EA1D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v7, v8, v9);
    byte_42EA1D7 = 1;
  }
  v10 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v10 = UserEquipNewManager_TypeInfo;
  }
  if ( v10->static_fields->isContinueDevice )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___)) == 0LL )
    {
      sub_B5D69C(Instance, v12);
    }
    UserEquipMaster__continueDeviceEquipLvInfo((UserEquipMaster_o *)Instance, v12);
    v13 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v13 = (const MethodInfo *)UserEquipNewManager_TypeInfo;
    }
    BYTE1(v13[2].klass->_1.gc_desc) = 0;
    LOBYTE(v13[2].klass->_1.gc_desc) = 1;
    UserEquipNewManager__WriteData(v13);
  }
}


bool __fastcall UserEquipNewManager__ReadData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UserEquipNewManager_c *v19; // x0
  ManagerConfig_c *v20; // x0
  UserEquipNewManager_c *v22; // x0
  System_String_o *SaveFileName; // x19
  UserEquipNewManager_c *v24; // x0
  System_IO_Stream_o *v25; // x20
  System_IO_BinaryReader_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  UserEquipNewManager_c *v30; // x0
  __int64 v31; // x3
  char v32; // w20
  UserEquipNewManager_c *v33; // x0
  int v34; // w20
  int i; // w25
  int32_t v36; // w22
  int32_t v37; // w23
  UserEquipNewManager_UserEquipLvInfo_o *v38; // x21
  __int64 v39; // x0
  __int64 v40; // x1
  UserEquipNewManager_c *v41; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *openList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v44; // x10
  int32_t *p_offset; // x11
  __int64 v46; // x0
  UserEquipNewManager_c *v47; // x0
  int v48; // [xsp+8h] [xbp-68h]

  if ( (byte_42EA1DA & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__, v7, v8, v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v16, v17, v18);
    byte_42EA1DA = 1;
  }
  v19 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v19 = UserEquipNewManager_TypeInfo;
  }
  v19->static_fields->isModfiy = 0;
  v20 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v20 = ManagerConfig_TypeInfo;
  }
  if ( v20->static_fields->UseMock )
    return 1;
  v22 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v22);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v24 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    }
    UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v24);
    v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v26, v25, 0LL);
    if ( !v26 )
      sub_B5D69C(v27, v28);
    v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                               v26,
                               v26->klass->vtable._23_ReadChars.methodPtr);
    v30 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
      v30 = UserEquipNewManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v30->static_fields->SAVE_DATA_VERSION, v29, 0LL) )
    {
      v48 = 188;
    }
    else
    {
      v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._9_ReadBoolean.method)(
              v26,
              v26->klass->vtable._10_ReadByte.methodPtr);
      v33 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v33 = UserEquipNewManager_TypeInfo;
      }
      v33->static_fields->isContinueDevice = v32 & 1;
      v34 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
              v26,
              v26->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v34 >= 1 )
      {
        for ( i = 0; i < v34; ++i )
        {
          v36 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                  v26,
                  v26->klass->vtable._16_ReadUInt32.methodPtr);
          v37 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._15_ReadInt32.method)(
                  v26,
                  v26->klass->vtable._16_ReadUInt32.methodPtr);
          v38 = (UserEquipNewManager_UserEquipLvInfo_o *)sub_B5D694(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
          UserEquipNewManager_UserEquipLvInfo___ctor(v38, 0LL);
          if ( !v38 )
            sub_B5D69C(v39, v40);
          v38->fields.equipId = v36;
          v38->fields.equipLv = v37;
          v41 = UserEquipNewManager_TypeInfo;
          if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
            v41 = UserEquipNewManager_TypeInfo;
          }
          openList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v41->static_fields->openList;
          if ( !openList )
            sub_B5D69C(0LL, v40);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            openList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
        }
      }
      v48 = 173;
    }
    klass = v26->klass;
    if ( *(_WORD *)&v26->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v44;
        p_offset += 4;
        if ( v44 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v46 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v46 = sub_AF54C0(v26, System_IDisposable_TypeInfo, 0LL, v31);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v46)(v26, *(_QWORD *)(v46 + 8));
    return v48 == 173;
  }
  else
  {
    v47 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    }
    UserEquipNewManager__ClearSaveDataList((const MethodInfo *)v47);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserEquipNewManager__SetOld(int32_t equipId, int32_t lv, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UserEquipNewManager_c *v18; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x8
  int size; // w21
  __int64 i; // x23
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *v22; // x24
  UserEquipNewManager_UserEquipLvInfo_o *v23; // x8
  UserEquipNewManager_c *v24; // x0
  UserEquipNewManager_UserEquipLvInfo_o *v25; // x21
  UserEquipNewManager_c *v26; // x0

  if ( (byte_42EA1D9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__,
      lv,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v9, v10, v11);
    sub_B5D5C4(&UserEquipNewManager_UserEquipLvInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v15, v16, v17);
    byte_42EA1D9 = 1;
  }
  v18 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v18 = UserEquipNewManager_TypeInfo;
  }
  openList = v18->static_fields->openList;
  if ( !openList )
    goto LABEL_32;
  size = openList->fields._size;
  if ( size < 1 )
  {
LABEL_23:
    v25 = (UserEquipNewManager_UserEquipLvInfo_o *)sub_B5D694(UserEquipNewManager_UserEquipLvInfo_TypeInfo);
    UserEquipNewManager_UserEquipLvInfo___ctor(v25, 0LL);
    if ( v25 )
    {
      v25->fields.equipId = equipId;
      v25->fields.equipLv = lv;
      v26 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v26 = UserEquipNewManager_TypeInfo;
      }
      v18 = (UserEquipNewManager_c *)v26->static_fields->openList;
      if ( v18 )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__Add__);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_B5D69C(v18, *(_QWORD *)&lv);
  }
  for ( i = 0LL; ; ++i )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = UserEquipNewManager_TypeInfo;
    }
    v22 = v18->static_fields->openList;
    if ( !v22 )
      goto LABEL_32;
    if ( v22->fields._size <= (unsigned int)i )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v23 = v22->fields._items->m_Items[i];
    if ( !v23 )
      goto LABEL_32;
    if ( v23->fields.equipId == equipId )
      break;
    if ( (int)i + 1 >= size )
      goto LABEL_23;
    v18 = UserEquipNewManager_TypeInfo;
  }
  if ( v23->fields.equipLv != lv )
  {
    v23->fields.equipLv = lv;
    v24 = UserEquipNewManager_TypeInfo;
    if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
      || UserEquipNewManager_TypeInfo->_2.cctor_finished )
    {
      goto LABEL_30;
    }
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
LABEL_29:
    v24 = UserEquipNewManager_TypeInfo;
LABEL_30:
    v24->static_fields->isModfiy = 1;
  }
}


bool __fastcall UserEquipNewManager__WriteData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UserEquipNewManager_c *v19; // x0
  struct UserEquipNewManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v23; // x0
  UserEquipNewManager_c *v25; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v27; // x20
  System_IO_BinaryWriter_o *v28; // x19
  __int64 v29; // x1
  UserEquipNewManager_c *v30; // x0
  struct UserEquipNewManager_StaticFields *v31; // x8
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *openList; // x9
  int size; // w20
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x22
  UserEquipNewManager_c *v37; // x0
  struct System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__o *v38; // x23
  UserEquipNewManager_UserEquipLvInfo_o *v39; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0

  if ( (byte_42EA1DB & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEquipNewManager_UserEquipLvInfo__get_Item__, v10, v11, v12);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v16, v17, v18);
    byte_42EA1DB = 1;
  }
  v19 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v19 = UserEquipNewManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    p_isModfiy = &UserEquipNewManager_TypeInfo->static_fields->isModfiy;
  }
  *p_isModfiy = 0;
  v23 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v23 = ManagerConfig_TypeInfo;
  }
  if ( v23->static_fields->UseMock )
    return 0;
  v25 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  SaveFileName = UserEquipNewManager__getSaveFileName((const MethodInfo *)v25);
  v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v28, v27, 0LL);
  v30 = UserEquipNewManager_TypeInfo;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
    v30 = UserEquipNewManager_TypeInfo;
  }
  v31 = v30->static_fields;
  openList = v31->openList;
  if ( !openList )
    sub_B5D69C(v30, v29);
  if ( !v28 )
    sub_B5D69C(v30, v29);
  size = openList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v28->klass->vtable._22_Write.method)(
    v28,
    v31->SAVE_DATA_VERSION,
    v28->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v28->klass->vtable._8_Write.method)(
    v28,
    UserEquipNewManager_TypeInfo->static_fields->isContinueDevice,
    v28->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
    v28,
    (unsigned int)size,
    v28->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v36 = 0LL;
    do
    {
      v37 = UserEquipNewManager_TypeInfo;
      if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
        v37 = UserEquipNewManager_TypeInfo;
      }
      v38 = v37->static_fields->openList;
      if ( !v38 )
        sub_B5D69C(v37, v34);
      if ( v38->fields._size <= (unsigned int)v36 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v39 = v38->fields._items->m_Items[v36];
      if ( !v39 )
        sub_B5D69C(v37, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.equipId,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.equipLv,
        v28->klass->vtable._18_Write.methodPtr);
      ++v36;
    }
    while ( (int)v36 < size );
  }
  klass = v28->klass;
  if ( *(_WORD *)&v28->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      p_offset += 4;
      if ( v41 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v43 = sub_AF54C0(v28, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v43)(v28, *(_QWORD *)(v43 + 8));
  return 1;
}


System_String_o *__fastcall UserEquipNewManager__getSaveFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42EA1D2 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EA1D2 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(8, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall UserEquipNewManager_UserEquipLvInfo___ctor(
        UserEquipNewManager_UserEquipLvInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}