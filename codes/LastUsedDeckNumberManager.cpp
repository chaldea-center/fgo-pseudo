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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x19
  struct LastUsedDeckNumberManager_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4213EB3 & 1) == 0 )
  {
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_6641/*"Fgo_20210906"*/, v10);
    byte_4213EB3 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)LastUsedDeckNumberManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6641/*"Fgo_20210906"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6641/*"Fgo_20210906"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = LastUsedDeckNumberManager_TypeInfo;
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  v17 = LastUsedDeckNumberManager_TypeInfo->static_fields;
  v17->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->lastUsedInfoList,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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

  if ( (byte_4213EAD & 1) == 0 )
  {
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__, v2);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v3);
    byte_4213EAD = 1;
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
        (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
      v4 = LastUsedDeckNumberManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B0D97C(v4);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  LastUsedDeckNumberManager___c__DisplayClass11_0_o *v10; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  LastUsedDeckNumberManager_c *v14; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v16; // x21
  peRenderTexture_ChangeLayerObject_o *v17; // x0
  WarBoardManager_TaskList_o *v18; // x19
  LastUsedDeckNumberManager_c *v19; // x0

  if ( (byte_4213EB0 & 1) == 0 )
  {
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__, v5);
    sub_B0D8A4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v6);
    sub_B0D8A4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v7);
    sub_B0D8A4(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__, v8);
    sub_B0D8A4(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, v9);
    byte_4213EB0 = 1;
  }
  v10 = (LastUsedDeckNumberManager___c__DisplayClass11_0_o *)sub_B0D974(
                                                               LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo,
                                                               method,
                                                               v2);
  LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_15;
  v10->fields.questId = questId;
  v14 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v14 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v14->static_fields->lastUsedInfoList;
  v16 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                                   v12,
                                                                   v13);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_15;
  v17 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v17 )
    return;
  v18 = (WarBoardManager_TaskList_o *)v17;
  v19 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v19 = LastUsedDeckNumberManager_TypeInfo;
  }
  v11 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v19->static_fields->lastUsedInfoList;
  if ( !v11 )
LABEL_15:
    sub_B0D97C(v11);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    v11,
    v18,
    (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  const MethodInfo *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_4213EAB & 1) == 0 )
  {
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_4213EAB = 1;
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  LastUsedDeckNumberManager___c__DisplayClass10_0_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  LastUsedDeckNumberManager_c *v13; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x21
  peRenderTexture_ChangeLayerObject_o *v16; // x0

  if ( (byte_4213EAF & 1) == 0 )
  {
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v4);
    sub_B0D8A4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v5);
    sub_B0D8A4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v6);
    sub_B0D8A4(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__, v7);
    sub_B0D8A4(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, v8);
    byte_4213EAF = 1;
  }
  v9 = (LastUsedDeckNumberManager___c__DisplayClass10_0_o *)sub_B0D974(
                                                              LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo,
                                                              method,
                                                              v2);
  LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  v9->fields.questId = questId;
  v13 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v13 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v13->static_fields->lastUsedInfoList;
  v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                                   v11,
                                                                   v12);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
LABEL_11:
    sub_B0D97C(v10);
  v16 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v16 )
    LODWORD(v16) = HIDWORD(v16->fields.gameObject);
  return (int)v16;
}


System_String_o *__fastcall LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4213EAA & 1) == 0 )
  {
    sub_B0D8A4(&AndroidUtil_TypeInfo, v1);
    sub_B0D8A4(&DatFileName_TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_879/*"/"*/, v3);
    byte_4213EAA = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0LL);
  return System_String__Concat_43852188(DatFileSavePath, (System_String_o *)StringLiteral_879/*"/"*/, FileName, 0LL);
}


void __fastcall LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0

  if ( (byte_4213EAC & 1) == 0 )
  {
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_4213EAC = 1;
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
  System_IO_BinaryReader_o *v16; // x19
  __int64 v17; // x0
  System_String_o *v18; // x20
  LastUsedDeckNumberManager_c *v19; // x0
  char v20; // w20
  LastUsedDeckNumberManager_c *v21; // x0
  int v22; // w20
  int i; // w26
  int32_t v24; // w22
  int32_t v25; // w23
  __int64 v26; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  LastUsedDeckNumberManager_LastUsedInfo_o *v29; // x21
  __int64 v30; // x0
  LastUsedDeckNumberManager_c *v31; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lastUsedInfoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0
  LastUsedDeckNumberManager_c *v37; // x0
  int v38; // [xsp+8h] [xbp-68h]

  if ( (byte_4213EB1 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_B0D8A4(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v5);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v6);
    byte_4213EB1 = 1;
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
    v16 = (System_IO_BinaryReader_o *)sub_B0D974(System_IO_BinaryReader_TypeInfo, v14, v15);
    System_IO_BinaryReader___ctor(v16, v13, 0LL);
    if ( !v16 )
      sub_B0D97C(v17);
    v18 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._22_ReadString.method)(
                               v16,
                               v16->klass->vtable._23_ReadChars.methodPtr);
    v19 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v19 = LastUsedDeckNumberManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v19->static_fields->SAVE_DATA_VERSION, v18, 0LL) )
    {
      v38 = 208;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._9_ReadBoolean.method)(
              v16,
              v16->klass->vtable._10_ReadByte.methodPtr);
      v21 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v21 = LastUsedDeckNumberManager_TypeInfo;
      }
      v21->static_fields->isContinueDevice = v20 & 1;
      v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
              v16,
              v16->klass->vtable._16_ReadUInt32.methodPtr);
      if ( v22 >= 1 )
      {
        for ( i = 0; i < v22; ++i )
        {
          v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          v25 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._15_ReadInt32.method)(
                  v16,
                  v16->klass->vtable._16_ReadUInt32.methodPtr);
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v16->klass->vtable._17_ReadInt64.method)(
                  v16,
                  v16->klass->vtable._18_ReadUInt64.methodPtr);
          v29 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B0D974(
                                                              LastUsedDeckNumberManager_LastUsedInfo_TypeInfo,
                                                              v27,
                                                              v28);
          LastUsedDeckNumberManager_LastUsedInfo___ctor(v29, 0LL);
          if ( !v29 )
            sub_B0D97C(v30);
          v29->fields.questId = v24;
          v29->fields.deckNumber = v25;
          v29->fields.time = v26;
          v31 = LastUsedDeckNumberManager_TypeInfo;
          if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
            v31 = LastUsedDeckNumberManager_TypeInfo;
          }
          lastUsedInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v31->static_fields->lastUsedInfoList;
          if ( !lastUsedInfoList )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lastUsedInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
        }
      }
      v38 = 193;
    }
    klass = v16->klass;
    if ( *(_WORD *)&v16->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v36 = sub_AA67A0(v16, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v36)(v16, *(_QWORD *)(v36 + 8));
    return v38 == 193;
  }
  else
  {
    v37 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v37);
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  LastUsedDeckNumberManager___c__DisplayClass9_0_o *v20; // x20
  void *UsedDeckNumberManager_LastUsedInfo; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t Time; // x21
  LastUsedDeckNumberManager_c *v25; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v27; // x23
  peRenderTexture_ChangeLayerObject_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  LastUsedDeckNumberManager_c *v31; // x0
  __int64 v32; // x8
  int32_t v33; // w22
  BalanceConfig_c *v34; // x0
  LastUsedDeckNumberManager_c *v35; // x8
  LastUsedDeckNumberManager___c_c *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x22
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__9_1; // x23
  Il2CppObject *v40; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x1
  int32_t v49; // w22
  LastUsedDeckNumberManager_LastUsedInfo_o *v50; // x22
  int32_t v51; // w8
  LastUsedDeckNumberManager_c *v52; // x0

  if ( (byte_4213EAE & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNumber);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___, v5);
    sub_B0D8A4(
      &Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__,
      v6);
    sub_B0D8A4(
      &System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
      v7);
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_B0D8A4(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v12);
    sub_B0D8A4(&NetworkManager_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v14);
    sub_B0D8A4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v15);
    sub_B0D8A4(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__, v16);
    sub_B0D8A4(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__, v17);
    sub_B0D8A4(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, v18);
    sub_B0D8A4(&LastUsedDeckNumberManager___c_TypeInfo, v19);
    byte_4213EAE = 1;
  }
  v20 = (LastUsedDeckNumberManager___c__DisplayClass9_0_o *)sub_B0D974(
                                                              LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo,
                                                              *(_QWORD *)&deckNumber,
                                                              method);
  LastUsedDeckNumberManager___c__DisplayClass9_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_47;
  v20->fields.questId = questId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v25 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v25 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v25->static_fields->lastUsedInfoList;
  v27 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
                                                                   v22,
                                                                   v23);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v27,
    (Il2CppObject *)v20,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_47;
  v28 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v27,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v28 )
  {
    UsedDeckNumberManager_LastUsedInfo = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      UsedDeckNumberManager_LastUsedInfo = LastUsedDeckNumberManager_TypeInfo;
    }
    v32 = *(_QWORD *)(*((_QWORD *)UsedDeckNumberManager_LastUsedInfo + 23) + 16LL);
    if ( v32 )
    {
      v33 = *(_DWORD *)(v32 + 24);
      v34 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v34 = BalanceConfig_TypeInfo;
      }
      if ( v33 >= v34->static_fields->MemoryDeckLimitByQuest )
      {
        v35 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v35 = LastUsedDeckNumberManager_TypeInfo;
        }
        v36 = LastUsedDeckNumberManager___c_TypeInfo;
        v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35->static_fields->lastUsedInfoList;
        if ( (BYTE3(LastUsedDeckNumberManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v36 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        static_fields = v36->static_fields;
        _9__9_1 = static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          }
          v40 = (Il2CppObject *)static_fields->__9;
          _9__9_1 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B0D974(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v29, v30);
          System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
            _9__9_1,
            v40,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            (const MethodInfo_2623AB8 *)Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__);
          v41 = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          v41->__9__9_1 = _9__9_1;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v41->__9__9_1,
            (System_Int32_array **)_9__9_1,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47);
        }
        UsedDeckNumberManager_LastUsedInfo = System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                               v37,
                                               (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                               (const MethodInfo_1717644 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !UsedDeckNumberManager_LastUsedInfo )
          goto LABEL_47;
        v49 = *((_DWORD *)UsedDeckNumberManager_LastUsedInfo + 4);
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        }
        LastUsedDeckNumberManager__DeleteData(v49, v48);
      }
      v50 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B0D974(
                                                          LastUsedDeckNumberManager_LastUsedInfo_TypeInfo,
                                                          v29,
                                                          v30);
      LastUsedDeckNumberManager_LastUsedInfo___ctor(v50, 0LL);
      if ( v50 )
      {
        v51 = v20->fields.questId;
        v50->fields.time = Time;
        v50->fields.questId = v51;
        v50->fields.deckNumber = deckNumber;
        v52 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v52 = LastUsedDeckNumberManager_TypeInfo;
        }
        UsedDeckNumberManager_LastUsedInfo = v52->static_fields->lastUsedInfoList;
        if ( UsedDeckNumberManager_LastUsedInfo )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UsedDeckNumberManager_LastUsedInfo,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
          goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_B0D97C(UsedDeckNumberManager_LastUsedInfo);
  }
  HIDWORD(v28->fields.gameObject) = deckNumber;
  v28->fields.renderer = (struct UnityEngine_Renderer_o *)Time;
  v31 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_45:
    v31 = LastUsedDeckNumberManager_TypeInfo;
  }
  v31->static_fields->isModfiy = 1;
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
  System_IO_BinaryWriter_o *v18; // x19
  LastUsedDeckNumberManager_c *v19; // x0
  struct LastUsedDeckNumberManager_StaticFields *v20; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  __int64 v23; // x22
  LastUsedDeckNumberManager_c *v24; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *v25; // x23
  LastUsedDeckNumberManager_LastUsedInfo_o *v26; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0

  if ( (byte_4213EB2 & 1) == 0 )
  {
    sub_B0D8A4(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v2);
    sub_B0D8A4(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__, v5);
    sub_B0D8A4(&ManagerConfig_TypeInfo, v6);
    byte_4213EB2 = 1;
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
  v18 = (System_IO_BinaryWriter_o *)sub_B0D974(System_IO_BinaryWriter_TypeInfo, v16, v17);
  System_IO_BinaryWriter___ctor_39036700(v18, v15, 0LL);
  v19 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v19 = LastUsedDeckNumberManager_TypeInfo;
  }
  v20 = v19->static_fields;
  lastUsedInfoList = v20->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_B0D97C(v19);
  if ( !v18 )
    sub_B0D97C(v19);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v18->klass->vtable._22_Write.method)(
    v18,
    v20->SAVE_DATA_VERSION,
    v18->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v18->klass->vtable._8_Write.method)(
    v18,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
    v18->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
    v18,
    (unsigned int)size,
    v18->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    v23 = 0LL;
    do
    {
      v24 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v24 = LastUsedDeckNumberManager_TypeInfo;
      }
      v25 = v24->static_fields->lastUsedInfoList;
      if ( !v25 )
        sub_B0D97C(v24);
      if ( v25->fields._size <= (unsigned int)v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v26 = v25->fields._items->m_Items[v23];
      if ( !v26 )
        sub_B0D97C(v24);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v26->fields.questId,
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v18->klass->vtable._17_Write.method)(
        v18,
        (unsigned int)v26->fields.deckNumber,
        v18->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v18->klass->vtable._19_Write.method)(
        v18,
        v26->fields.time,
        v18->klass->vtable._20_Write.methodPtr);
      ++v23;
    }
    while ( (int)v23 < size );
  }
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_37;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_37:
    v30 = sub_AA67A0(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v30)(v18, *(_QWORD *)(v30 + 8));
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
  Il2CppObject *v3; // x19
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0

  if ( (byte_4210F96 & 1) == 0 )
  {
    sub_B0D8A4(&LastUsedDeckNumberManager___c_TypeInfo, v1);
    byte_4210F96 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(LastUsedDeckNumberManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.questId == this->fields.questId;
}