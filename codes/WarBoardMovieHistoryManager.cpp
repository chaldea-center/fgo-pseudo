void __fastcall WarBoardMovieHistoryManager___cctor(const MethodInfo *method)
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
  __int64 v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v13; // x1
  struct WarBoardMovieHistoryManager_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40F8583 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v8);
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6605/*"Fgo_20220601"*/, v10);
    sub_B16FFC(&StringLiteral_15361/*"WarBoardStartMovie"*/, v11);
    byte_40F8583 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_6605/*"Fgo_20220601"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6605/*"Fgo_20220601"*/;
  sub_B16F98(static_fields, v13, v2, v3, v4, v5, v6, v7);
  v14 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_15361/*"WarBoardStartMovie"*/;
  v14->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_15361/*"WarBoardStartMovie"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v14->SAVE_KEY_START_MOVIE, v15, v16, v17, v18, v19, v20, v21);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v27 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v27->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)&v27->infoList, (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
}


void __fastcall WarBoardMovieHistoryManager___ctor(WarBoardMovieHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMovieHistoryManager__AddHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  WarBoardMovieHistoryManager_c *v20; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0

  if ( (byte_40F8580 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&phase);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v7);
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v8);
    byte_40F8580 = 1;
  }
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v13 = sub_B170CC(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v9, v10, v11, v12);
    WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v13, 0LL);
    if ( !v13 )
      goto LABEL_14;
    *(_QWORD *)(v13 + 24) = saveKey;
    *(_DWORD *)(v13 + 16) = questId;
    *(_DWORD *)(v13 + 20) = phase;
    sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)saveKey, v14, v15, v16, v17, v18, v19);
    v20 = WarBoardMovieHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v20 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v20->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      infoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 1;
  }
}


void __fastcall WarBoardMovieHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WarBoardMovieHistoryManager_c *v4; // x0
  WarBoardMovieHistoryManager_c *v5; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  WarBoardMovieHistoryManager_c *v7; // x0

  if ( (byte_40F857E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__, v2);
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v3);
    byte_40F857E = 1;
  }
  v4 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v4 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___) )
  {
    v5 = WarBoardMovieHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v5 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5->static_fields->infoList;
    if ( !infoList )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__);
  }
  v7 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v7 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v7->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_40F857C & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v1);
    byte_40F857C = 1;
  }
  v2 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMovieHistoryManager__ExistsHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  WarBoardMovieHistoryManager_c *v24; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v26; // x20

  if ( (byte_40F857F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&phase);
    sub_B16FFC(&Method_System_Predicate_WarBoardMovieHistoryManager_HistoryInfo___ctor__, v8);
    sub_B16FFC(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__, v10);
    sub_B16FFC(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, v11);
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v12);
    byte_40F857F = 1;
  }
  v13 = sub_B170CC(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo, *(_QWORD *)&phase, saveKey, method, v4);
  WarBoardMovieHistoryManager___c__DisplayClass9_0___ctor(
    (WarBoardMovieHistoryManager___c__DisplayClass9_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_9;
  *(_QWORD *)(v13 + 24) = saveKey;
  *(_DWORD *)(v13 + 16) = questId;
  *(_DWORD *)(v13 + 20) = phase;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)saveKey, v14, v15, v16, v17, v18, v19);
  v24 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v24 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v24->static_fields->infoList;
  v26 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo,
                                                                   v20,
                                                                   v21,
                                                                   v22,
                                                                   v23);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
LABEL_9:
    sub_B170D4();
  return System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           infoList,
           (System_Predicate_T__o *)v26,
           (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0LL;
}


System_String_o *__fastcall WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_40F857B & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871/*"/"*/, v3);
    byte_40F857B = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(39, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMovieHistoryManager_c *v2; // x0

  if ( (byte_40F857D & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v1);
    byte_40F857D = 1;
  }
  v2 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  WarBoardMovieHistoryManager__ReadData((const MethodInfo *)v2);
}


bool __fastcall WarBoardMovieHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  WarBoardMovieHistoryManager_c *v10; // x0
  System_String_o *FilePath; // x19
  WarBoardMovieHistoryManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x19
  System_String_o *v19; // x20
  WarBoardMovieHistoryManager_c *v20; // x0
  int v21; // w20
  int i; // w26
  int v23; // w22
  int v24; // w23
  System_Int32_array **v25; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  WarBoardMovieHistoryManager_c *v37; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 v42; // x0
  int v43; // [xsp+8h] [xbp-68h]

  if ( (byte_40F8581 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v2);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v6);
    byte_40F8581 = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v10 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v12 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  WarBoardMovieHistoryManager__ClearSaveData((const MethodInfo *)v12);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
  System_IO_BinaryReader___ctor(v18, v13, 0LL);
  if ( !v18 )
    sub_B170D4();
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  v20 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v20 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
  {
    v43 = 189;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
            v18,
            v18->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v21 >= 1 )
    {
      for ( i = 0; i < v21; ++i )
      {
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                                       v18,
                                       v18->klass->vtable._23_ReadChars.methodPtr);
        v30 = sub_B170CC(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo, v26, v27, v28, v29);
        WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v30, 0LL);
        if ( !v30 )
          sub_B170D4();
        *(_QWORD *)(v30 + 24) = v25;
        *(_DWORD *)(v30 + 16) = v23;
        *(_DWORD *)(v30 + 20) = v24;
        sub_B16F98((BattleServantConfConponent_o *)(v30 + 24), v25, v31, v32, v33, v34, v35, v36);
        v37 = WarBoardMovieHistoryManager_TypeInfo;
        if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
          v37 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v37->static_fields->infoList;
        if ( !infoList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
      }
    }
    v43 = 178;
  }
  klass = v18->klass;
  if ( *(_WORD *)&v18->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      p_offset += 4;
      if ( v40 >= *(unsigned __int16 *)&v18->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v42 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v42)(v18, *(_QWORD *)(v42 + 8));
  return v43 == 178;
}


bool __fastcall WarBoardMovieHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardMovieHistoryManager_c *v7; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v9; // x0
  const MethodInfo *v10; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_IO_BinaryWriter_o *v17; // x19
  WarBoardMovieHistoryManager_c *v18; // x0
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v22; // x22
  WarBoardMovieHistoryManager_c *v23; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *v24; // x23
  WarBoardMovieHistoryManager_HistoryInfo_o *v25; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0

  if ( (byte_40F8582 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&WarBoardMovieHistoryManager_TypeInfo, v6);
    byte_40F8582 = 1;
  }
  v7 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v7 = WarBoardMovieHistoryManager_TypeInfo;
  }
  isModfiy = v7->static_fields->isModfiy;
  if ( isModfiy )
  {
    v9 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v9 = ManagerConfig_TypeInfo;
    }
    if ( v9->static_fields->UseMock )
    {
      return 0;
    }
    else
    {
      v10 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v10 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
      }
      LOBYTE(v10[2].klass->_1.name) = 0;
      FilePath = WarBoardMovieHistoryManager__GetFilePath(v10);
      v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v17 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v13, v14, v15, v16);
      System_IO_BinaryWriter___ctor_39195976(v17, v12, 0LL);
      v18 = WarBoardMovieHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v18 = WarBoardMovieHistoryManager_TypeInfo;
      }
      static_fields = v18->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B170D4();
      if ( !v17 )
        sub_B170D4();
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v17->klass->vtable._22_Write.method)(
        v17,
        static_fields->SAVE_DATA_VERSION,
        v17->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
        v17,
        (unsigned int)size,
        v17->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v22 = 0LL;
        do
        {
          v23 = WarBoardMovieHistoryManager_TypeInfo;
          if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
            v23 = WarBoardMovieHistoryManager_TypeInfo;
          }
          v24 = v23->static_fields->infoList;
          if ( !v24 )
            sub_B170D4();
          if ( v24->fields._size <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v25 = v24->fields._items->m_Items[v22];
          if ( !v25 )
            sub_B170D4();
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
            v17,
            (unsigned int)v25->fields.questId,
            v17->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
            v17,
            (unsigned int)v25->fields.phase,
            v17->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v17->klass->vtable._22_Write.method)(
            v17,
            v25->fields.saveKey,
            v17->klass[1]._1.image);
          ++v22;
        }
        while ( (int)v22 < size );
      }
      klass = v17->klass;
      if ( *(_WORD *)&v17->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v27;
          p_offset += 4;
          if ( v27 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v29 = sub_AAFEF8(v17, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v17, *(_QWORD *)(v29 + 8));
      return 1;
    }
  }
  return isModfiy;
}


void __fastcall WarBoardMovieHistoryManager_HistoryInfo___ctor(
        WarBoardMovieHistoryManager_HistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMovieHistoryManager___c__DisplayClass9_0___ctor(
        WarBoardMovieHistoryManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardMovieHistoryManager___c__DisplayClass9_0___ExistsHistory_b__0(
        WarBoardMovieHistoryManager___c__DisplayClass9_0_o *this,
        WarBoardMovieHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0LL);
}