void __fastcall LastUsedDeckNumberManager___cctor(const MethodInfo *method)
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
  LastUsedDeckNumberManager_c *v19; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x19
  struct LastUsedDeckNumberManager_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E7D38 & 1) == 0 )
  {
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_6703/*"Fgo_20210906"*/, v14, v15, v16);
    byte_42E7D38 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)LastUsedDeckNumberManager_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_6703/*"Fgo_20210906"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6703/*"Fgo_20210906"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = LastUsedDeckNumberManager_TypeInfo;
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 0;
  v19->static_fields->isContinueDevice = 0;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  v21 = LastUsedDeckNumberManager_TypeInfo->static_fields;
  v21->lastUsedInfoList = (struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v21->lastUsedInfoList,
    (System_Int32_array **)v20,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall LastUsedDeckNumberManager___ctor(LastUsedDeckNumberManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager__ClearSaveDataList(const MethodInfo *method)
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
  LastUsedDeckNumberManager_c *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *lastUsedInfoList; // x8

  if ( (byte_42E7D32 & 1) == 0 )
  {
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__, v7, v8, v9);
    byte_42E7D32 = 1;
  }
  v10 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v10 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10->static_fields->lastUsedInfoList;
  if ( !lastUsedInfoList )
    goto LABEL_16;
  if ( lastUsedInfoList->fields._size >= 1 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) == 0
      || v10->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v10),
          (lastUsedInfoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)LastUsedDeckNumberManager_TypeInfo->static_fields->lastUsedInfoList) != 0LL) )
    {
      System_Collections_Generic_List_XWeaponTrail_Element___Clear(
        lastUsedInfoList,
        (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Clear__);
      v10 = LastUsedDeckNumberManager_TypeInfo;
      goto LABEL_12;
    }
LABEL_16:
    sub_B5D69C(v10, v1);
  }
LABEL_12:
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = LastUsedDeckNumberManager_TypeInfo;
  }
  v10->static_fields->isContinueDevice = 0;
  v10->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteData(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  LastUsedDeckNumberManager___c__DisplayClass11_0_o *v23; // x20
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v24; // x0
  __int64 v25; // x1
  LastUsedDeckNumberManager_c *v26; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x21
  peRenderTexture_ChangeLayerObject_o *v29; // x0
  WarBoardManager_TaskList_o *v30; // x19
  LastUsedDeckNumberManager_c *v31; // x0

  if ( (byte_42E7D35 & 1) == 0 )
  {
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__, v17, v18, v19);
    sub_B5D5C4(&LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo, v20, v21, v22);
    byte_42E7D35 = 1;
  }
  v23 = (LastUsedDeckNumberManager___c__DisplayClass11_0_o *)sub_B5D694(LastUsedDeckNumberManager___c__DisplayClass11_0_TypeInfo);
  LastUsedDeckNumberManager___c__DisplayClass11_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_15;
  v23->fields.questId = questId;
  v26 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v26 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v26->static_fields->lastUsedInfoList;
  v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v28,
    (Il2CppObject *)v23,
    Method_LastUsedDeckNumberManager___c__DisplayClass11_0__DeleteData_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_15;
  v29 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v29 )
    return;
  v30 = (WarBoardManager_TaskList_o *)v29;
  v31 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v31 = LastUsedDeckNumberManager_TypeInfo;
  }
  v24 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v31->static_fields->lastUsedInfoList;
  if ( !v24 )
LABEL_15:
    sub_B5D69C(v24, v25);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    v24,
    v30,
    (const MethodInfo_305896C *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Remove__);
  LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy = 1;
}


void __fastcall LastUsedDeckNumberManager__DeleteSaveData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  LastUsedDeckNumberManager_c *v4; // x0
  const MethodInfo *v5; // x0
  System_String_o *SaveFileName; // x19

  if ( (byte_42E7D30 & 1) == 0 )
  {
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v1, v2, v3);
    byte_42E7D30 = 1;
  }
  v4 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v4);
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName(v5);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
    System_IO_File__Delete(SaveFileName, 0LL);
}


int32_t __fastcall LastUsedDeckNumberManager__GetDeckNumber(int32_t questId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  LastUsedDeckNumberManager___c__DisplayClass10_0_o *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  LastUsedDeckNumberManager_c *v23; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x21
  peRenderTexture_ChangeLayerObject_o *v26; // x0

  if ( (byte_42E7D34 & 1) == 0 )
  {
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__, v14, v15, v16);
    sub_B5D5C4(&LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo, v17, v18, v19);
    byte_42E7D34 = 1;
  }
  v20 = (LastUsedDeckNumberManager___c__DisplayClass10_0_o *)sub_B5D694(LastUsedDeckNumberManager___c__DisplayClass10_0_TypeInfo);
  LastUsedDeckNumberManager___c__DisplayClass10_0___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_11;
  v20->fields.questId = questId;
  v23 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v23 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v23->static_fields->lastUsedInfoList;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v20,
    Method_LastUsedDeckNumberManager___c__DisplayClass10_0__GetDeckNumber_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
LABEL_11:
    sub_B5D69C(v21, v22);
  v26 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v25,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( v26 )
    LODWORD(v26) = HIDWORD(v26->fields.gameObject);
  return (int)v26;
}


System_String_o *__fastcall LastUsedDeckNumberManager__GetSaveFileName(const MethodInfo *method)
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

  if ( (byte_42E7D2F & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DatFileName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42E7D2F = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(34, 0LL);
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


void __fastcall LastUsedDeckNumberManager__Initialize(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  LastUsedDeckNumberManager_c *v4; // x0

  if ( (byte_42E7D31 & 1) == 0 )
  {
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v1, v2, v3);
    byte_42E7D31 = 1;
  }
  v4 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  LastUsedDeckNumberManager__ReadData((const MethodInfo *)v4);
}


bool __fastcall LastUsedDeckNumberManager__ReadData(const MethodInfo *method)
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
  LastUsedDeckNumberManager_c *v19; // x0
  ManagerConfig_c *v20; // x0
  LastUsedDeckNumberManager_c *v22; // x0
  System_String_o *SaveFileName; // x19
  LastUsedDeckNumberManager_c *v24; // x0
  System_IO_Stream_o *v25; // x20
  System_IO_BinaryReader_o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  System_String_o *v29; // x20
  LastUsedDeckNumberManager_c *v30; // x0
  __int64 v31; // x3
  char v32; // w20
  LastUsedDeckNumberManager_c *v33; // x0
  int v34; // w20
  int i; // w26
  int32_t v36; // w22
  int32_t v37; // w23
  __int64 v38; // x24
  LastUsedDeckNumberManager_LastUsedInfo_o *v39; // x21
  __int64 v40; // x0
  __int64 v41; // x1
  LastUsedDeckNumberManager_c *v42; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *lastUsedInfoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 v47; // x0
  LastUsedDeckNumberManager_c *v48; // x0
  int v49; // [xsp+8h] [xbp-68h]

  if ( (byte_42E7D36 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v13, v14, v15);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v16, v17, v18);
    byte_42E7D36 = 1;
  }
  v19 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v19 = LastUsedDeckNumberManager_TypeInfo;
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
  v22 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v22);
  if ( System_IO_File__Exists(SaveFileName, 0LL) )
  {
    v24 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v24);
    v25 = (System_IO_Stream_o *)System_IO_File__OpenRead(SaveFileName, 0LL);
    v26 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
    System_IO_BinaryReader___ctor(v26, v25, 0LL);
    if ( !v26 )
      sub_B5D69C(v27, v28);
    v29 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._22_ReadString.method)(
                               v26,
                               v26->klass->vtable._23_ReadChars.methodPtr);
    v30 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      v30 = LastUsedDeckNumberManager_TypeInfo;
    }
    if ( System_String__op_Inequality(v30->static_fields->SAVE_DATA_VERSION, v29, 0LL) )
    {
      v49 = 208;
    }
    else
    {
      v32 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._9_ReadBoolean.method)(
              v26,
              v26->klass->vtable._10_ReadByte.methodPtr);
      v33 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v33 = LastUsedDeckNumberManager_TypeInfo;
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
          v38 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v26->klass->vtable._17_ReadInt64.method)(
                  v26,
                  v26->klass->vtable._18_ReadUInt64.methodPtr);
          v39 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B5D694(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
          LastUsedDeckNumberManager_LastUsedInfo___ctor(v39, 0LL);
          if ( !v39 )
            sub_B5D69C(v40, v41);
          v39->fields.questId = v36;
          v39->fields.deckNumber = v37;
          v39->fields.time = v38;
          v42 = LastUsedDeckNumberManager_TypeInfo;
          if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
            v42 = LastUsedDeckNumberManager_TypeInfo;
          }
          lastUsedInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v42->static_fields->lastUsedInfoList;
          if ( !lastUsedInfoList )
            sub_B5D69C(0LL, v41);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            lastUsedInfoList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
        }
      }
      v49 = 193;
    }
    klass = v26->klass;
    if ( *(_WORD *)&v26->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v45;
        p_offset += 4;
        if ( v45 >= *(unsigned __int16 *)&v26->klass->_2.bitflags1 )
          goto LABEL_40;
      }
      v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_40:
      v47 = sub_AF54C0(v26, System_IDisposable_TypeInfo, 0LL, v31);
    }
    (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v47)(v26, *(_QWORD *)(v47 + 8));
    return v49 == 193;
  }
  else
  {
    v48 = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    }
    LastUsedDeckNumberManager__ClearSaveDataList((const MethodInfo *)v48);
    return 0;
  }
}


void __fastcall LastUsedDeckNumberManager__SetDeckNumber(int32_t questId, int32_t deckNumber, const MethodInfo *method)
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  LastUsedDeckNumberManager___c__DisplayClass9_0_o *v51; // x20
  void *UsedDeckNumberManager_LastUsedInfo; // x0
  const MethodInfo *v53; // x1
  int64_t Time; // x21
  LastUsedDeckNumberManager_c *v55; // x8
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *lastUsedInfoList; // x22
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v57; // x23
  peRenderTexture_ChangeLayerObject_o *v58; // x0
  LastUsedDeckNumberManager_c *v59; // x0
  __int64 v60; // x8
  int32_t v61; // w22
  BalanceConfig_c *v62; // x0
  LastUsedDeckNumberManager_c *v63; // x8
  LastUsedDeckNumberManager___c_c *v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x22
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x8
  System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *_9__9_1; // x23
  Il2CppObject *v68; // x24
  struct LastUsedDeckNumberManager___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  int32_t v76; // w22
  LastUsedDeckNumberManager_LastUsedInfo_o *v77; // x22
  int32_t v78; // w8
  LastUsedDeckNumberManager_c *v79; // x0

  if ( (byte_42E7D33 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, deckNumber, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo,
      v12,
      v13,
      v14);
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LastUsedDeckNumberManager_LastUsedInfo_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&NetworkManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__, v39, v40, v41);
    sub_B5D5C4(&Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__, v42, v43, v44);
    sub_B5D5C4(&LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&LastUsedDeckNumberManager___c_TypeInfo, v48, v49, v50);
    byte_42E7D33 = 1;
  }
  v51 = (LastUsedDeckNumberManager___c__DisplayClass9_0_o *)sub_B5D694(LastUsedDeckNumberManager___c__DisplayClass9_0_TypeInfo);
  LastUsedDeckNumberManager___c__DisplayClass9_0___ctor(v51, 0LL);
  if ( !v51 )
    goto LABEL_47;
  v51->fields.questId = questId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v55 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v55 = LastUsedDeckNumberManager_TypeInfo;
  }
  lastUsedInfoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v55->static_fields->lastUsedInfoList;
  v57 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v57,
    (Il2CppObject *)v51,
    Method_LastUsedDeckNumberManager___c__DisplayClass9_0__SetDeckNumber_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_LastUsedDeckNumberManager_LastUsedInfo___ctor__);
  if ( !lastUsedInfoList )
    goto LABEL_47;
  v58 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          lastUsedInfoList,
          (System_Predicate_T__o *)v57,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Find__);
  if ( !v58 )
  {
    UsedDeckNumberManager_LastUsedInfo = LastUsedDeckNumberManager_TypeInfo;
    if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      UsedDeckNumberManager_LastUsedInfo = LastUsedDeckNumberManager_TypeInfo;
    }
    v60 = *(_QWORD *)(*((_QWORD *)UsedDeckNumberManager_LastUsedInfo + 23) + 16LL);
    if ( v60 )
    {
      v61 = *(_DWORD *)(v60 + 24);
      v62 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v62 = BalanceConfig_TypeInfo;
      }
      if ( v61 >= v62->static_fields->MemoryDeckLimitByQuest )
      {
        v63 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v63 = LastUsedDeckNumberManager_TypeInfo;
        }
        v64 = LastUsedDeckNumberManager___c_TypeInfo;
        v65 = (System_Collections_Generic_IEnumerable_TSource__o *)v63->static_fields->lastUsedInfoList;
        if ( (BYTE3(LastUsedDeckNumberManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager___c_TypeInfo);
          v64 = LastUsedDeckNumberManager___c_TypeInfo;
        }
        static_fields = v64->static_fields;
        _9__9_1 = static_fields->__9__9_1;
        if ( !_9__9_1 )
        {
          if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v64);
            static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          }
          v68 = (Il2CppObject *)static_fields->__9;
          _9__9_1 = (System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__o *)sub_B5D694(System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__TypeInfo);
          System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo____ctor(
            _9__9_1,
            v68,
            Method_LastUsedDeckNumberManager___c__SetDeckNumber_b__9_1__,
            (const MethodInfo_2C39DD0 *)Method_System_Func_LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo__LastUsedDeckNumberManager_LastUsedInfo___ctor__);
          v69 = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
          v69->__9__9_1 = _9__9_1;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v69->__9__9_1,
            (System_Int32_array **)_9__9_1,
            v70,
            v71,
            v72,
            v73,
            v74,
            v75);
        }
        UsedDeckNumberManager_LastUsedInfo = System_Linq_Enumerable__Aggregate_LastUsedDeckNumberManager_LastUsedInfo_(
                                               v65,
                                               (System_Func_TSource__TSource__TSource__o *)_9__9_1,
                                               (const MethodInfo_1C96720 *)Method_System_Linq_Enumerable_Aggregate_LastUsedDeckNumberManager_LastUsedInfo___);
        if ( !UsedDeckNumberManager_LastUsedInfo )
          goto LABEL_47;
        v76 = *((_DWORD *)UsedDeckNumberManager_LastUsedInfo + 4);
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        }
        LastUsedDeckNumberManager__DeleteData(v76, v53);
      }
      v77 = (LastUsedDeckNumberManager_LastUsedInfo_o *)sub_B5D694(LastUsedDeckNumberManager_LastUsedInfo_TypeInfo);
      LastUsedDeckNumberManager_LastUsedInfo___ctor(v77, 0LL);
      if ( v77 )
      {
        v78 = v51->fields.questId;
        v77->fields.time = Time;
        v77->fields.questId = v78;
        v77->fields.deckNumber = deckNumber;
        v79 = LastUsedDeckNumberManager_TypeInfo;
        if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
          v79 = LastUsedDeckNumberManager_TypeInfo;
        }
        UsedDeckNumberManager_LastUsedInfo = v79->static_fields->lastUsedInfoList;
        if ( UsedDeckNumberManager_LastUsedInfo )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UsedDeckNumberManager_LastUsedInfo,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__Add__);
          goto LABEL_45;
        }
      }
    }
LABEL_47:
    sub_B5D69C(UsedDeckNumberManager_LastUsedInfo, v53);
  }
  HIDWORD(v58->fields.gameObject) = deckNumber;
  v58->fields.renderer = (struct UnityEngine_Renderer_o *)Time;
  v59 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
LABEL_45:
    v59 = LastUsedDeckNumberManager_TypeInfo;
  }
  v59->static_fields->isModfiy = 1;
}


bool __fastcall LastUsedDeckNumberManager__WriteData(const MethodInfo *method)
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
  LastUsedDeckNumberManager_c *v19; // x0
  struct LastUsedDeckNumberManager_StaticFields *static_fields; // x8
  bool *p_isModfiy; // x8
  _BOOL4 isModfiy; // t1
  ManagerConfig_c *v23; // x0
  LastUsedDeckNumberManager_c *v25; // x0
  System_String_o *SaveFileName; // x0
  System_IO_Stream_o *v27; // x20
  System_IO_BinaryWriter_o *v28; // x19
  __int64 v29; // x1
  LastUsedDeckNumberManager_c *v30; // x0
  struct LastUsedDeckNumberManager_StaticFields *v31; // x8
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *lastUsedInfoList; // x9
  int size; // w20
  __int64 v34; // x1
  __int64 v35; // x3
  __int64 v36; // x22
  LastUsedDeckNumberManager_c *v37; // x0
  struct System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__o *v38; // x23
  LastUsedDeckNumberManager_LastUsedInfo_o *v39; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 v43; // x0

  if ( (byte_42E7D37 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Count__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_LastUsedDeckNumberManager_LastUsedInfo__get_Item__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v16, v17, v18);
    byte_42E7D37 = 1;
  }
  v19 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v19 = LastUsedDeckNumberManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  isModfiy = static_fields->isModfiy;
  p_isModfiy = &static_fields->isModfiy;
  if ( !isModfiy )
    return 0;
  if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    p_isModfiy = &LastUsedDeckNumberManager_TypeInfo->static_fields->isModfiy;
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
  v25 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
  }
  SaveFileName = LastUsedDeckNumberManager__GetSaveFileName((const MethodInfo *)v25);
  v27 = (System_IO_Stream_o *)System_IO_File__OpenWrite(SaveFileName, 0LL);
  v28 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v28, v27, 0LL);
  v30 = LastUsedDeckNumberManager_TypeInfo;
  if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
    v30 = LastUsedDeckNumberManager_TypeInfo;
  }
  v31 = v30->static_fields;
  lastUsedInfoList = v31->lastUsedInfoList;
  if ( !lastUsedInfoList )
    sub_B5D69C(v30, v29);
  if ( !v28 )
    sub_B5D69C(v30, v29);
  size = lastUsedInfoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v28->klass->vtable._22_Write.method)(
    v28,
    v31->SAVE_DATA_VERSION,
    v28->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v28->klass->vtable._8_Write.method)(
    v28,
    LastUsedDeckNumberManager_TypeInfo->static_fields->isContinueDevice,
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
      v37 = LastUsedDeckNumberManager_TypeInfo;
      if ( (BYTE3(LastUsedDeckNumberManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
        v37 = LastUsedDeckNumberManager_TypeInfo;
      }
      v38 = v37->static_fields->lastUsedInfoList;
      if ( !v38 )
        sub_B5D69C(v37, v34);
      if ( v38->fields._size <= (unsigned int)v36 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v39 = v38->fields._items->m_Items[v36];
      if ( !v39 )
        sub_B5D69C(v37, v34);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.questId,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._17_Write.method)(
        v28,
        (unsigned int)v39->fields.deckNumber,
        v28->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, int64_t, Il2CppMethodPointer))v28->klass->vtable._19_Write.method)(
        v28,
        v39->fields.time,
        v28->klass->vtable._20_Write.methodPtr);
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


void __fastcall LastUsedDeckNumberManager_LastUsedInfo___ctor(
        LastUsedDeckNumberManager_LastUsedInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall LastUsedDeckNumberManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct LastUsedDeckNumberManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E571A & 1) == 0 )
  {
    sub_B5D5C4(&LastUsedDeckNumberManager___c_TypeInfo, v1, v2, v3);
    byte_42E571A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(LastUsedDeckNumberManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = LastUsedDeckNumberManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct LastUsedDeckNumberManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.questId == this->fields.questId;
}