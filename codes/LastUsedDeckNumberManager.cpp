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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct LastUsedDeckNumberManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_41870FB & 1) == 0 )
  {
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6624/*"Fgo_20210906"*/, v10);
    byte_41870FB = 1;
  }
  static_fields = (BattleServantConfConponent_o *)LastUsedDeckNumberManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6624/*"Fgo_20210906"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6624/*"Fgo_20210906"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = LastUsedDeckNumberManager_TypeInfo;
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  v15 = LastUsedDeckNumberManager_TypeInfo->static_fields;
  v15->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->lastUsedInfoList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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

  if ( (byte_41870F5 & 1) == 0 )
  {
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v3);
    byte_41870F5 = 1;
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
        (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
      v4 = LastUsedDeckNumberManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B2C434(v4, v1);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  LastUsedDeckNumberManager___c__DisplayClass11_0_o *v9; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v10; // x0
  __int64 v11; // x1
  LastUsedDeckNumberManager_c *v12; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x21
  peRenderTexture_ChangeLayerObject_o *v15; // x0
  WarBoardManager_TaskList_o *v16; // x19
  LastUsedDeckNumberManager_c *v17; // x0

  if ( (byte_41870F8 & 1) == 0 )
  {
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__, v4);
    sub_B2C35C(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v5);
    sub_B2C35C(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v6);
    sub_B2C35C(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__, v7);
    sub_B2C35C(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, v8);
    byte_41870F8 = 1;
  }
  v9 = (LastUsedDeckNumberManager___c__DisplayClass11_0_o *)sub_B2C42C(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
  LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  v9->fields.questId = questId;
  v12 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v12 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v12->static_fields->lastUsedInfoList;
  v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_15;
  v15 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v15 )
    return;
  v16 = (WarBoardManager_TaskList_o *)v15;
  v17 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v17 = LastUsedDeckNumberManager_TypeInfo;
  }
  v10 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v17->static_fields->lastUsedInfoList;
  if ( !v10 )
LABEL_15:
    sub_B2C434(v10, v11);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    v10,
    v16,
    (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0
  const MethodInfo *v3; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_41870F3 & 1) == 0 )
  {
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_41870F3 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  LastUsedDeckNumberManager___c__DisplayClass10_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  LastUsedDeckNumberManager_c *v11; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x21
  peRenderTexture_ChangeLayerObject_o *v14; // x0

  if ( (byte_41870F7 & 1) == 0 )
  {
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v3);
    sub_B2C35C(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v4);
    sub_B2C35C(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v5);
    sub_B2C35C(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__, v6);
    sub_B2C35C(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, v7);
    byte_41870F7 = 1;
  }
  v8 = (LastUsedDeckNumberManager___c__DisplayClass10_0_o *)sub_B2C42C(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
  LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_11;
  v8->fields.questId = questId;
  v11 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v11 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v11->static_fields->lastUsedInfoList;
  v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
LABEL_11:
    sub_B2C434(v9, v10);
  v14 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v14 )
    LODWORD(v14) = HIDWORD(v14->fields.gameObject);
  return (int)v14;
}


System_String_o *__fastcall LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_41870F2 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_41870F2 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  LastUsedDeckNumberManager_c *v2; // x0

  if ( (byte_41870F4 & 1) == 0 )
  {
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v1);
    byte_41870F4 = 1;
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
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  LastUsedDeckNumberManager_c *v18; // x0
  __int64 v19; // x3
  char v20; // w20
  LastUsedDeckNumberManager_c *v21; // x0
  int v22; // w20
  int i; // w26
  int32_t v24; // w22
  int32_t v25; // w23
  __int64 v26; // x24
  LastUsedDeckNumberManager_LastUsedInfo_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  LastUsedDeckNumberManager_c *v30; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lastUsedInfoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  LastUsedDeckNumberManager_c *v36; // x0
  int v37; // [xsp+8h] [xbp-68h]

  if ( (byte_41870F9 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_B2C35C(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v5);
    sub_B2C35C(&ManagerConfig_TypeInfo, v6);
    byte_41870F9 = 1;
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
    v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v14, v13, 0LL);
    if ( !v14 )
      sub_B2C434(v15, v16);
    v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                               v14,
                               v14->klass->vtable._23_ReadChars.methodPtr);
    v18 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v18 = LastUsedDeckNumberManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
    {
      v37 = 208;
    }
    else
    {
      v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
              v14,
              v14->klass->vtable._10_ReadByte.methodPtr);
      v21 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v21 = LastUsedDeckNumberManager_TypeInfo;
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
          v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._17_ReadInt64.method)(
                  v14,
                  v14->klass->vtable._18_ReadUInt64.methodPtr);
          v27 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B2C42C(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
          LastUsedDeckNumberManager_LastUsedInfo___ctor(v27, 0LL);
          if ( !v27 )
            sub_B2C434(v28, v29);
          v27->fields.questId = v24;
          v27->fields.deckNumber = v25;
          v27->fields.time = v26;
          v30 = LastUsedDeckNumberManager_TypeInfo;
          if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
            v30 = LastUsedDeckNumberManager_TypeInfo;
          }
          lastUsedInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->static_fields->lastUsedInfoList;
          if ( !lastUsedInfoList )
            sub_B2C434(0LL, v29);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lastUsedInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
        }
      }
      v37 = 193;
    }
    klass = v14->klass;
    if ( *(_WORD *)&v14->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v33;
        p_offset += 4;
        if ( v33 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v35 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v14, *(_QWORD *)(v35 + 8));
    return v37 == 193;
  }
  else
  {
    v36 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v36);
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
  const MethodInfo *v22; // x1
  int64_t Time; // x21
  LastUsedDeckNumberManager_c *v24; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x23
  peRenderTexture_ChangeLayerObject_o *v27; // x0
  LastUsedDeckNumberManager_c *v28; // x0
  __int64 v29; // x8
  int32_t v30; // w22
  BalanceConfig_c *v31; // x0
  LastUsedDeckNumberManager_c *v32; // x8
  LastUsedDeckNumberManager___c_c *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__9_1; // x23
  Il2CppObject *v37; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t v45; // w22
  LastUsedDeckNumberManager_LastUsedInfo_o *v46; // x22
  int32_t v47; // w8
  LastUsedDeckNumberManager_c *v48; // x0

  if ( (byte_41870F6 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&deckNumber);
    sub_B2C35C(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___, v5);
    sub_B2C35C(
      &Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__,
      v6);
    sub_B2C35C(
      &System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
      v7);
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v8);
    sub_B2C35C(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v12);
    sub_B2C35C(&NetworkManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v14);
    sub_B2C35C(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v15);
    sub_B2C35C(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__, v16);
    sub_B2C35C(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__, v17);
    sub_B2C35C(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, v18);
    sub_B2C35C(&LastUsedDeckNumberManager___c_TypeInfo, v19);
    byte_41870F6 = 1;
  }
  v20 = (LastUsedDeckNumberManager___c__DisplayClass9_0_o *)sub_B2C42C(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
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
  v24 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v24 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v24->static_fields->lastUsedInfoList;
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)v20,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_47;
  v27 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v26,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v27 )
  {
    UsedDeckNumberManager_LastUsedInfo = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      UsedDeckNumberManager_LastUsedInfo = LastUsedDeckNumberManager_TypeInfo;
    }
    v29 = *(_QWORD *)(*((_QWORD *)UsedDeckNumberManager_LastUsedInfo + 23) + 16LL);
    if ( v29 )
    {
      v30 = *(_DWORD *)(v29 + 24);
      v31 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v31 = BalanceConfig_TypeInfo;
      }
      if ( v30 >= v31->static_fields->MemoryDeckLimitByQuest )
      {
        v32 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v32 = LastUsedDeckNumberManager_TypeInfo;
        }
        v33 = LastUsedDeckNumberManager___c_TypeInfo;
        v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32->static_fields->lastUsedInfoList;
        if ( (BYTE3(LastUsedDeckNumberManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v33 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        static_fields = v33->static_fields;
        _9__9_1 = static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          }
          v37 = (Il2CppObject *)static_fields->__9;
          _9__9_1 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B2C42C(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
          System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
            _9__9_1,
            v37,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            (const MethodInfo_271CD04 *)Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__);
          v38 = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          v38->__9__9_1 = _9__9_1;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v38->__9__9_1,
            (System_Int32_array **)_9__9_1,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        UsedDeckNumberManager_LastUsedInfo = System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                               v34,
                                               (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                               (const MethodInfo_1736A88 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !UsedDeckNumberManager_LastUsedInfo )
          goto LABEL_47;
        v45 = *((_DWORD *)UsedDeckNumberManager_LastUsedInfo + 4);
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        }
        LastUsedDeckNumberManager__DeleteData(v45, v22);
      }
      v46 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B2C42C(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
      LastUsedDeckNumberManager_LastUsedInfo___ctor(v46, 0LL);
      if ( v46 )
      {
        v47 = v20->fields.questId;
        v46->fields.time = Time;
        v46->fields.questId = v47;
        v46->fields.deckNumber = deckNumber;
        v48 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v48 = LastUsedDeckNumberManager_TypeInfo;
        }
        UsedDeckNumberManager_LastUsedInfo = v48->static_fields->lastUsedInfoList;
        if ( UsedDeckNumberManager_LastUsedInfo )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UsedDeckNumberManager_LastUsedInfo,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
          goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_B2C434(UsedDeckNumberManager_LastUsedInfo, v22);
  }
  HIDWORD(v27->fields.gameObject) = deckNumber;
  v27->fields.renderer = (struct UnityEngine_Renderer_o *)Time;
  v28 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_45:
    v28 = LastUsedDeckNumberManager_TypeInfo;
  }
  v28->static_fields->isModfiy = 1;
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
  System_IO_BinaryWriter_o *v16; // x19
  __int64 v17; // x1
  LastUsedDeckNumberManager_c *v18; // x0
  struct LastUsedDeckNumberManager_StaticFields *v19; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  __int64 v22; // x1
  __int64 v23; // x3
  __int64 v24; // x22
  LastUsedDeckNumberManager_c *v25; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *v26; // x23
  LastUsedDeckNumberManager_LastUsedInfo_o *v27; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0

  if ( (byte_41870FA & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__, v5);
    sub_B2C35C(&ManagerConfig_TypeInfo, v6);
    byte_41870FA = 1;
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
  v16 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v16, v15, 0LL);
  v18 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v18 = LastUsedDeckNumberManager_TypeInfo;
  }
  v19 = v18->static_fields;
  lastUsedInfoList = v19->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_B2C434(v18, v17);
  if ( !v16 )
    sub_B2C434(v18, v17);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v16->klass->vtable._22_Write.method)(
    v16,
    v19->SAVE_DATA_VERSION,
    v16->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v16->klass->vtable._8_Write.method)(
    v16,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
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
      v25 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v25 = LastUsedDeckNumberManager_TypeInfo;
      }
      v26 = v25->static_fields->lastUsedInfoList;
      if ( !v26 )
        sub_B2C434(v25, v22);
      if ( v26->fields._size <= (unsigned int)v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v27 = v26->fields._items->m_Items[v24];
      if ( !v27 )
        sub_B2C434(v25, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.questId,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._17_Write.method)(
        v16,
        (unsigned int)v27->fields.deckNumber,
        v16->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v16->klass->vtable._19_Write.method)(
        v16,
        v27->fields.time,
        v16->klass->vtable._20_Write.methodPtr);
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


void __fastcall LastUsedDeckNumberManager_LastUsedInfo___ctor(
        LastUsedDeckNumberManager_LastUsedInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184215 & 1) == 0 )
  {
    sub_B2C35C(&LastUsedDeckNumberManager___c_TypeInfo, v1);
    byte_4184215 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(LastUsedDeckNumberManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, x);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.questId == this->fields.questId;
}