void __fastcall WarBoardMovieHistoryManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct WarBoardMovieHistoryManager_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  struct WarBoardMovieHistoryManager_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42AEA68 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
    sub_B52984(&WarBoardMovieHistoryManager_TypeInfo);
    sub_B52984(&StringLiteral_6672/*"Fgo_20220601"*/);
    sub_B52984(&StringLiteral_15528/*"WarBoardStartMovie"*/);
    byte_42AEA68 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6672/*"Fgo_20220601"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6672/*"Fgo_20220601"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_15528/*"WarBoardStartMovie"*/;
  v9->SAVE_KEY_START_MOVIE = (struct System_String_o *)StringLiteral_15528/*"WarBoardStartMovie"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->SAVE_KEY_START_MOVIE, v10, v11, v12, v13, v14, v15, v16);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  v18 = WarBoardMovieHistoryManager_TypeInfo->static_fields;
  v18->infoList = (struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *)v17;
  sub_B52920((BattleServantConfConponent_o *)&v18->infoList, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall WarBoardMovieHistoryManager___ctor(WarBoardMovieHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMovieHistoryManager__AddHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  WarBoardMovieHistoryManager_c *v16; // x0

  if ( (byte_42AEA65 & 1) == 0 )
  {
    sub_B52984(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    sub_B52984(&WarBoardMovieHistoryManager_TypeInfo);
    byte_42AEA65 = 1;
  }
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  if ( !WarBoardMovieHistoryManager__ExistsHistory(questId, phase, saveKey, method) )
  {
    v7 = sub_B52A54(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v7, 0LL);
    if ( !v7 )
      goto LABEL_14;
    *(_QWORD *)(v7 + 24) = saveKey;
    *(_DWORD *)(v7 + 16) = questId;
    *(_DWORD *)(v7 + 20) = phase;
    sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)saveKey, v10, v11, v12, v13, v14, v15);
    v16 = WarBoardMovieHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v16 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16->static_fields->infoList;
    if ( !infoList )
LABEL_14:
      sub_B52A5C(infoList, v9);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      infoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 1;
  }
}


void __fastcall WarBoardMovieHistoryManager__ClearSaveData(const MethodInfo *method)
{
  WarBoardMovieHistoryManager_c *v1; // x0
  __int64 v2; // x1
  WarBoardMovieHistoryManager_c *v3; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  WarBoardMovieHistoryManager_c *v5; // x0

  if ( (byte_42AEA63 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__);
    sub_B52984(&WarBoardMovieHistoryManager_TypeInfo);
    byte_42AEA63 = 1;
  }
  v1 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v1 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_WarBoardMovieHistoryManager_HistoryInfo___) )
  {
    v3 = WarBoardMovieHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      v3 = WarBoardMovieHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v3->static_fields->infoList;
    if ( !infoList )
      sub_B52A5C(0LL, v2);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Clear__);
  }
  v5 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v5 = WarBoardMovieHistoryManager_TypeInfo;
  }
  v5->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMovieHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  WarBoardMovieHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_42AEA61 & 1) == 0 )
  {
    sub_B52984(&WarBoardMovieHistoryManager_TypeInfo);
    byte_42AEA61 = 1;
  }
  v1 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


bool __fastcall WarBoardMovieHistoryManager__ExistsHistory(
        int32_t questId,
        int32_t phase,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  WarBoardMovieHistoryManager_c *v16; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v18; // x20

  if ( (byte_42AEA64 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__);
    sub_B52984(&Method_System_Predicate_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
    sub_B52984(&System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
    sub_B52984(&Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__);
    sub_B52984(&WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
    sub_B52984(&WarBoardMovieHistoryManager_TypeInfo);
    byte_42AEA64 = 1;
  }
  v7 = sub_B52A54(WarBoardMovieHistoryManager___c__DisplayClass9_0_TypeInfo);
  WarBoardMovieHistoryManager___c__DisplayClass9_0___ctor((WarBoardMovieHistoryManager___c__DisplayClass9_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 24) = saveKey;
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = phase;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)saveKey, v10, v11, v12, v13, v14, v15);
  v16 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v16 = WarBoardMovieHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v16->static_fields->infoList;
  v18 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_WarBoardMovieHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_WarBoardMovieHistoryManager___c__DisplayClass9_0__ExistsHistory_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_WarBoardMovieHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
LABEL_9:
    sub_B52A5C(v8, v9);
  return System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           infoList,
           (System_Predicate_T__o *)v18,
           (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Find__) != 0LL;
}


System_String_o *__fastcall WarBoardMovieHistoryManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42AEA60 & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AEA60 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(39, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMovieHistoryManager__Initialize(const MethodInfo *method)
{
  WarBoardMovieHistoryManager_c *v1; // x0

  if ( (byte_42AEA62 & 1) == 0 )
  {
    sub_B52984(&WarBoardMovieHistoryManager_TypeInfo);
    byte_42AEA62 = 1;
  }
  v1 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  WarBoardMovieHistoryManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall WarBoardMovieHistoryManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  WarBoardMovieHistoryManager_c *v4; // x0
  System_String_o *FilePath; // x19
  WarBoardMovieHistoryManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  WarBoardMovieHistoryManager_c *v12; // x0
  __int64 v13; // x3
  int v14; // w20
  int i; // w26
  int v16; // w22
  int v17; // w23
  System_Int32_array **v18; // x24
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  WarBoardMovieHistoryManager_c *v29; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v32; // x10
  int32_t *p_offset; // x11
  __int64 v34; // x0
  int v35; // [xsp+8h] [xbp-68h]

  if ( (byte_42AEA66 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryReader_TypeInfo);
    sub_B52984(&WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&WarBoardMovieHistoryManager_TypeInfo);
    byte_42AEA66 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v4 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMovieHistoryManager__GetFilePath((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v6 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
  }
  WarBoardMovieHistoryManager__ClearSaveData((const MethodInfo *)v6);
  WarBoardMovieHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_B52A54(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_B52A5C(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v12 = WarBoardMovieHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
  {
    v35 = 189;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v14 >= 1 )
    {
      for ( i = 0; i < v14; ++i )
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v18 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                                       v8,
                                       v8->klass->vtable._23_ReadChars.methodPtr);
        v19 = sub_B52A54(WarBoardMovieHistoryManager_HistoryInfo_TypeInfo);
        WarBoardMovieHistoryManager_HistoryInfo___ctor((WarBoardMovieHistoryManager_HistoryInfo_o *)v19, 0LL);
        if ( !v19 )
          sub_B52A5C(v20, v21);
        *(_QWORD *)(v19 + 24) = v18;
        *(_DWORD *)(v19 + 16) = v16;
        *(_DWORD *)(v19 + 20) = v17;
        sub_B52920((BattleServantConfConponent_o *)(v19 + 24), v18, v22, v23, v24, v25, v26, v27);
        v29 = WarBoardMovieHistoryManager_TypeInfo;
        if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
          v29 = WarBoardMovieHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v29->static_fields->infoList;
        if ( !infoList )
          sub_B52A5C(0LL, v28);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__Add__);
      }
    }
    v35 = 178;
  }
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      p_offset += 4;
      if ( v32 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_35;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_35:
    v34 = sub_AEB880(v8, System_IDisposable_TypeInfo, 0LL, v13);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v34)(v8, *(_QWORD *)(v34 + 8));
  return v35 == 178;
}


bool __fastcall WarBoardMovieHistoryManager__WriteData(const MethodInfo *method)
{
  WarBoardMovieHistoryManager_c *v1; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v3; // x0
  const MethodInfo *v4; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  WarBoardMovieHistoryManager_c *v9; // x0
  struct WarBoardMovieHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v13; // x1
  __int64 v14; // x3
  __int64 v15; // x22
  WarBoardMovieHistoryManager_c *v16; // x0
  struct System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__o *v17; // x23
  WarBoardMovieHistoryManager_HistoryInfo_o *v18; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0

  if ( (byte_42AEA67 & 1) == 0 )
  {
    sub_B52984(&System_IO_BinaryWriter_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardMovieHistoryManager_HistoryInfo__get_Item__);
    sub_B52984(&ManagerConfig_TypeInfo);
    sub_B52984(&WarBoardMovieHistoryManager_TypeInfo);
    byte_42AEA67 = 1;
  }
  v1 = WarBoardMovieHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
    v1 = WarBoardMovieHistoryManager_TypeInfo;
  }
  isModfiy = v1->static_fields->isModfiy;
  if ( isModfiy )
  {
    v3 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v3 = ManagerConfig_TypeInfo;
    }
    if ( v3->static_fields->UseMock )
    {
      return 0;
    }
    else
    {
      v4 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v4 = (const MethodInfo *)WarBoardMovieHistoryManager_TypeInfo;
      }
      LOBYTE(v4[2].klass->_1.name) = 0;
      FilePath = WarBoardMovieHistoryManager__GetFilePath(v4);
      v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v7 = (System_IO_BinaryWriter_o *)sub_B52A54(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_40252128(v7, v6, 0LL);
      v9 = WarBoardMovieHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
        v9 = WarBoardMovieHistoryManager_TypeInfo;
      }
      static_fields = v9->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B52A5C(v9, v8);
      if ( !v7 )
        sub_B52A5C(v9, v8);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v7->klass->vtable._22_Write.method)(
        v7,
        static_fields->SAVE_DATA_VERSION,
        v7->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
        v7,
        (unsigned int)size,
        v7->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v15 = 0LL;
        do
        {
          v16 = WarBoardMovieHistoryManager_TypeInfo;
          if ( (BYTE3(WarBoardMovieHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
            v16 = WarBoardMovieHistoryManager_TypeInfo;
          }
          v17 = v16->static_fields->infoList;
          if ( !v17 )
            sub_B52A5C(v16, v13);
          if ( v17->fields._size <= (unsigned int)v15 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          v18 = v17->fields._items->m_Items[v15];
          if ( !v18 )
            sub_B52A5C(v16, v13);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
            v7,
            (unsigned int)v18->fields.questId,
            v7->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
            v7,
            (unsigned int)v18->fields.phase,
            v7->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v7->klass->vtable._22_Write.method)(
            v7,
            v18->fields.saveKey,
            v7->klass[1]._1.image);
          ++v15;
        }
        while ( (int)v15 < size );
      }
      klass = v7->klass;
      if ( *(_WORD *)&v7->klass->_2.bitflags1 )
      {
        v20 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v20;
          p_offset += 4;
          if ( v20 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v22 = sub_AEB880(v7, System_IDisposable_TypeInfo, 0LL, v14);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v22)(v7, *(_QWORD *)(v22 + 8));
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
    sub_B52A5C(this, 0LL);
  return x->fields.questId == this->fields.questId
      && x->fields.phase == this->fields.phase
      && System_String__op_Equality(x->fields.saveKey, this->fields.saveKey, 0LL);
}