void __fastcall LastUsedDeckNumberManager___cctor(const MethodInfo *method)
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
  LastUsedDeckNumberManager_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct LastUsedDeckNumberManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FC226 & 1) == 0 )
  {
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6600, v10);
    byte_40FC226 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)LastUsedDeckNumberManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6600;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6600;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = LastUsedDeckNumberManager_TypeInfo;
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  v19 = LastUsedDeckNumberManager_TypeInfo->static_fields;
  v19->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v19->lastUsedInfoList,
    (System_Int32_array **)v18,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall LastUsedDeckNumberManager___ctor(LastUsedDeckNumberManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager__ClearSaveDataList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  LastUsedDeckNumberManager_c *v4; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *lastUsedInfoList; // x8

  if ( (byte_40FC220 & 1) == 0 )
  {
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v3);
    byte_40FC220 = 1;
  }
  v4 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v4 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v4->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    goto LABEL_16;
  if ( lastUsedInfoList->fields._size >= 1 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) == 0
      || v4->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v4),
          (lastUsedInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LastUsedDeckNumberManager_TypeInfo->static_fields->lastUsedInfoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        lastUsedInfoList,
        (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
      v4 = LastUsedDeckNumberManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_12:
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = LastUsedDeckNumberManager_TypeInfo;
  }
  v4->static_fields->isContinueDevice = 0;
  v4->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteData(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  LastUsedDeckNumberManager___c__DisplayClass11_0_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  LastUsedDeckNumberManager_c *v17; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x21
  peRenderTexture_ChangeLayerObject_o *v20; // x0
  WarBoardManager_TaskList_o *v21; // x19
  LastUsedDeckNumberManager_c *v22; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v23; // x0

  if ( (byte_40FC223 & 1) == 0 )
  {
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__, v7);
    sub_B16FFC(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v8);
    sub_B16FFC(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v9);
    sub_B16FFC(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__, v10);
    sub_B16FFC(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, v11);
    byte_40FC223 = 1;
  }
  v12 = (LastUsedDeckNumberManager___c__DisplayClass11_0_o *)sub_B170CC(
                                                               LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4);
  LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_15;
  v12->fields.questId = questId;
  v17 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v17 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v17->static_fields->lastUsedInfoList;
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                                   v13,
                                                                   v14,
                                                                   v15,
                                                                   v16);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_15;
  v20 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v20 )
    return;
  v21 = (WarBoardManager_TaskList_o *)v20;
  v22 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v22 = LastUsedDeckNumberManager_TypeInfo;
  }
  v23 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v22->static_fields->lastUsedInfoList;
  if ( !v23 )
LABEL_15:
    sub_B170D4();
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    v23,
    v21,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  const MethodInfo *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_40FC21E & 1) == 0 )
  {
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_40FC21E = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v2);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName(v3);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall LastUsedDeckNumberManager__GetDeckNumber(int32_t questId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  LastUsedDeckNumberManager___c__DisplayClass10_0_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  LastUsedDeckNumberManager_c *v16; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x21
  peRenderTexture_ChangeLayerObject_o *v19; // x0

  if ( (byte_40FC222 & 1) == 0 )
  {
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v6);
    sub_B16FFC(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v7);
    sub_B16FFC(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v8);
    sub_B16FFC(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__, v9);
    sub_B16FFC(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, v10);
    byte_40FC222 = 1;
  }
  v11 = (LastUsedDeckNumberManager___c__DisplayClass10_0_o *)sub_B170CC(
                                                               LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4);
  LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  v11->fields.questId = questId;
  v16 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v16 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v16->static_fields->lastUsedInfoList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                                   v12,
                                                                   v13,
                                                                   v14,
                                                                   v15);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
LABEL_11:
    sub_B170D4();
  v19 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v18,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v19 )
    LODWORD(v19) = HIDWORD(v19->fields.gameObject);
  return (int)v19;
}


System_String_o *__fastcall LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40FC21D & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40FC21D = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


void __fastcall LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0

  if ( (byte_40FC21F & 1) == 0 )
  {
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_40FC21F = 1;
  }
  v2 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  LastUsedDeckNumberManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall LastUsedDeckNumberManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  LastUsedDeckNumberManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  LastUsedDeckNumberManager_c *v10; // x0
  System_String_o *SaveFileName; // x19
  LastUsedDeckNumberManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x19
  System_String_o *v19; // x20
  LastUsedDeckNumberManager_c *v20; // x0
  char v21; // w20
  LastUsedDeckNumberManager_c *v22; // x0
  int v23; // w20
  int i; // w26
  int32_t v25; // w22
  int32_t v26; // w23
  __int64 v27; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  LastUsedDeckNumberManager_LastUsedInfo_o *v32; // x21
  LastUsedDeckNumberManager_c *v33; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lastUsedInfoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  LastUsedDeckNumberManager_c *v39; // x0
  int v40; // [xsp+8h] [xbp-68h]

  if ( (byte_40FC224 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_B16FFC(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v5);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    byte_40FC224 = 1;
  }
  v7 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v7 = LastUsedDeckNumberManager_TypeInfo;
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
  v10 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v10);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v12 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v12);
    v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
    System_IO_BinaryReader___ctor(v18, v13, 0LL);
    if ( !v18 )
      sub_B170D4();
    v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                               v18,
                               v18->klass->vtable._23_ReadChars.methodPtr);
    v20 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v20 = LastUsedDeckNumberManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
    {
      v40 = 208;
    }
    else
    {
      v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
              v18,
              v18->klass->vtable._10_ReadByte.methodPtr);
      v22 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v22 = LastUsedDeckNumberManager_TypeInfo;
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
          v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._17_ReadInt64.method)(
                  v18,
                  v18->klass->vtable._18_ReadUInt64.methodPtr);
          v32 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B170CC(
                                                              LastUsedDeckNumberManager_LastUsedInfo_TypeInfo,
                                                              v28,
                                                              v29,
                                                              v30,
                                                              v31);
          LastUsedDeckNumberManager_LastUsedInfo___ctor(v32, 0LL);
          if ( !v32 )
            sub_B170D4();
          v32->fields.questId = v25;
          v32->fields.deckNumber = v26;
          v32->fields.time = v27;
          v33 = LastUsedDeckNumberManager_TypeInfo;
          if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
            v33 = LastUsedDeckNumberManager_TypeInfo;
          }
          lastUsedInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33->static_fields->lastUsedInfoList;
          if ( !lastUsedInfoList )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lastUsedInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
        }
      }
      v40 = 193;
    }
    klass = v18->klass;
    if ( *(_WORD *)&v18->klass->_2.bitflags1 )
    {
      v36 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        p_offset += 4;
        if ( v36 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v38 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v38)(v18, *(_QWORD *)(v38 + 8));
    return v40 == 193;
  }
  else
  {
    v39 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v39);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  LastUsedDeckNumberManager___c__DisplayClass9_0_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int64_t Time; // x21
  LastUsedDeckNumberManager_c *v28; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v30; // x23
  peRenderTexture_ChangeLayerObject_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  LastUsedDeckNumberManager_c *v36; // x0
  LastUsedDeckNumberManager_c *v37; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *v38; // x8
  int32_t size; // w22
  BalanceConfig_c *v40; // x0
  LastUsedDeckNumberManager_c *v41; // x8
  LastUsedDeckNumberManager___c_c *v42; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x22
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__9_1; // x23
  Il2CppObject *v46; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  LastUsedDeckNumberManager_LastUsedInfo_o *UsedDeckNumberManager_LastUsedInfo; // x0
  const MethodInfo *v55; // x1
  int32_t v56; // w22
  LastUsedDeckNumberManager_LastUsedInfo_o *v57; // x22
  int32_t v58; // w8
  LastUsedDeckNumberManager_c *v59; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x0

  if ( (byte_40FC221 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNumber);
    sub_B16FFC(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___, v7);
    sub_B16FFC(
      &Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__,
      v8);
    sub_B16FFC(
      &System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
      v9);
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v10);
    sub_B16FFC(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v16);
    sub_B16FFC(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v17);
    sub_B16FFC(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__, v18);
    sub_B16FFC(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__, v19);
    sub_B16FFC(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, v20);
    sub_B16FFC(&LastUsedDeckNumberManager___c_TypeInfo, v21);
    byte_40FC221 = 1;
  }
  v22 = (LastUsedDeckNumberManager___c__DisplayClass9_0_o *)sub_B170CC(
                                                              LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo,
                                                              *(_QWORD *)&deckNumber,
                                                              method,
                                                              v3,
                                                              v4);
  LastUsedDeckNumberManager___c__DisplayClass9_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_47;
  v22->fields.questId = questId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v28 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v28 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v28->static_fields->lastUsedInfoList;
  v30 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                                   v23,
                                                                   v24,
                                                                   v25,
                                                                   v26);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v30,
    (Il2CppObject *)v22,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_47;
  v31 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v30,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v31 )
  {
    v37 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v37 = LastUsedDeckNumberManager_TypeInfo;
    }
    v38 = v37->static_fields->lastUsedInfoList;
    if ( v38 )
    {
      size = v38->fields._size;
      v40 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v40 = BalanceConfig_TypeInfo;
      }
      if ( size >= v40->static_fields->MemoryDeckLimitByQuest )
      {
        v41 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v41 = LastUsedDeckNumberManager_TypeInfo;
        }
        v42 = LastUsedDeckNumberManager___c_TypeInfo;
        v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41->static_fields->lastUsedInfoList;
        if ( (BYTE3(LastUsedDeckNumberManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v42 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        static_fields = v42->static_fields;
        _9__9_1 = static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          }
          v46 = (Il2CppObject *)static_fields->__9;
          _9__9_1 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B170CC(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v32, v33, v34, v35);
          System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
            _9__9_1,
            v46,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            (const MethodInfo_2B75C40 *)Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__);
          v47 = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          v47->__9__9_1 = _9__9_1;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v47->__9__9_1,
            (System_Int32_array **)_9__9_1,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
        }
        UsedDeckNumberManager_LastUsedInfo = System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                               v43,
                                               (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                               (const MethodInfo_18C6320 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !UsedDeckNumberManager_LastUsedInfo )
          goto LABEL_47;
        v56 = UsedDeckNumberManager_LastUsedInfo->fields.questId;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        }
        LastUsedDeckNumberManager__DeleteData(v56, v55);
      }
      v57 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B170CC(
                                                          LastUsedDeckNumberManager_LastUsedInfo_TypeInfo,
                                                          v32,
                                                          v33,
                                                          v34,
                                                          v35);
      LastUsedDeckNumberManager_LastUsedInfo___ctor(v57, 0LL);
      if ( v57 )
      {
        v58 = v22->fields.questId;
        v57->fields.time = Time;
        v57->fields.questId = v58;
        v57->fields.deckNumber = deckNumber;
        v59 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v59 = LastUsedDeckNumberManager_TypeInfo;
        }
        v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v59->static_fields->lastUsedInfoList;
        if ( v60 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v60,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
          goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_B170D4();
  }
  HIDWORD(v31->fields.gameObject) = deckNumber;
  v31->fields.renderer = (struct UnityEngine_Renderer_o *)Time;
  v36 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_45:
    v36 = LastUsedDeckNumberManager_TypeInfo;
  }
  v36->static_fields->isModfiy = 1;
}


bool __fastcall LastUsedDeckNumberManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  LastUsedDeckNumberManager_c *v7; // x0
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v11; // x0
  LastUsedDeckNumberManager_c *v13; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_IO_BinaryWriter_o *v20; // x19
  LastUsedDeckNumberManager_c *v21; // x0
  struct LastUsedDeckNumberManager_StaticFields *v22; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  __int64 v25; // x22
  LastUsedDeckNumberManager_c *v26; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *v27; // x23
  LastUsedDeckNumberManager_LastUsedInfo_o *v28; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0

  if ( (byte_40FC225 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__, v5);
    sub_B16FFC(&ManagerConfig_TypeInfo, v6);
    byte_40FC225 = 1;
  }
  v7 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v7 = LastUsedDeckNumberManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    p_isModfiy = &LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy;
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
  v13 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v13);
  v15 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v20 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v16, v17, v18, v19);
  System_IO_BinaryWriter___ctor_39195976(v20, v15, 0LL);
  v21 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v21 = LastUsedDeckNumberManager_TypeInfo;
  }
  v22 = v21->static_fields;
  lastUsedInfoList = v22->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_B170D4();
  if ( !v20 )
    sub_B170D4();
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v20->klass->vtable._22_Write.method)(
    v20,
    v22->SAVE_DATA_VERSION,
    v20->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v20->klass->vtable._8_Write.method)(
    v20,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
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
      v26 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v26 = LastUsedDeckNumberManager_TypeInfo;
      }
      v27 = v26->static_fields->lastUsedInfoList;
      if ( !v27 )
        sub_B170D4();
      if ( v27->fields._size <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v28 = v27->fields._items->m_Items[v25];
      if ( !v28 )
        sub_B170D4();
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.questId,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._17_Write.method)(
        v20,
        (unsigned int)v28->fields.deckNumber,
        v20->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v20->klass->vtable._19_Write.method)(
        v20,
        v28->fields.time,
        v20->klass->vtable._20_Write.methodPtr);
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


void __fastcall LastUsedDeckNumberManager_LastUsedInfo___ctor(
        LastUsedDeckNumberManager_LastUsedInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68FF & 1) == 0 )
  {
    sub_B16FFC(&LastUsedDeckNumberManager___c_TypeInfo, v1);
    byte_40F68FF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(LastUsedDeckNumberManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)LastUsedDeckNumberManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall LastUsedDeckNumberManager___c___ctor(LastUsedDeckNumberManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


LastUsedDeckNumberManager_LastUsedInfo_o *__fastcall LastUsedDeckNumberManager___c___SetDeckNumber_b__9_1(
        LastUsedDeckNumberManager___c_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        LastUsedDeckNumberManager_LastUsedInfo_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B170D4();
  if ( x->fields.time >= y->fields.time )
    return y;
  else
    return x;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass10_0___GetDeckNumber_b__0(
        LastUsedDeckNumberManager___c__DisplayClass10_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.questId == this->fields.questId;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass11_0___DeleteData_b__0(
        LastUsedDeckNumberManager___c__DisplayClass11_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.questId == this->fields.questId;
}


void __fastcall LastUsedDeckNumberManager___c__DisplayClass9_0___ctor(
        LastUsedDeckNumberManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall LastUsedDeckNumberManager___c__DisplayClass9_0___SetDeckNumber_b__0(
        LastUsedDeckNumberManager___c__DisplayClass9_0_o *this,
        LastUsedDeckNumberManager_LastUsedInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.questId == this->fields.questId;
}