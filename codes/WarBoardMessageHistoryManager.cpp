void __fastcall WarBoardMessageHistoryManager___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  WarBoardMessageHistoryManager_c *v9; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  struct WarBoardMessageHistoryManager_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4351714 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    sub_B70694(&StringLiteral_6720/*"Fgo_20220427"*/);
    byte_4351714 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6720/*"Fgo_20220427"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6720/*"Fgo_20220427"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WarBoardMessageHistoryManager_TypeInfo;
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v9->static_fields->isContinueDevice = 0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  v11 = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  v11->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v10;
  sub_B70630((BattleServantConfConponent_o *)&v11->infoList, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall WarBoardMessageHistoryManager___ctor(WarBoardMessageHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__ClearSaveData(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0
  __int64 v2; // x1
  WarBoardMessageHistoryManager_c *v3; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  WarBoardMessageHistoryManager_c *v5; // x0

  if ( (byte_435170F & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__);
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    byte_435170F = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v1 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v3 = WarBoardMessageHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v3 = WarBoardMessageHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v3->static_fields->infoList;
    if ( !infoList )
      sub_B7076C(0LL, v2);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__);
  }
  v5 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v5 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v5->static_fields->isContinueDevice = 0;
  v5->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_435170D & 1) == 0 )
  {
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    byte_435170D = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall WarBoardMessageHistoryManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_435170C & 1) == 0 )
  {
    sub_B70694(&AndroidUtil_TypeInfo);
    sub_B70694(&DatFileName_TypeInfo);
    sub_B70694(&StringLiteral_890/*"/"*/);
    byte_435170C = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(38, 0LL);
  return System_String__Concat_44760452(DatFileSavePath, (System_String_o *)StringLiteral_890/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0

  if ( (byte_435170E & 1) == 0 )
  {
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    byte_435170E = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  WarBoardMessageHistoryManager__ReadData((const MethodInfo *)v1);
}


bool __fastcall WarBoardMessageHistoryManager__IsHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  WarBoardMessageHistoryManager___c__DisplayClass9_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  WarBoardMessageHistoryManager_c *v10; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v12; // x20

  if ( (byte_4351710 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__);
    sub_B70694(&Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
    sub_B70694(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_B70694(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__);
    sub_B70694(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4351710 = 1;
  }
  v7 = (WarBoardMessageHistoryManager___c__DisplayClass9_0_o *)sub_B70764(WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
  WarBoardMessageHistoryManager___c__DisplayClass9_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_9;
  v7->fields.stageId = stageId;
  v7->fields.sceneType = sceneType;
  v7->fields.idx = idx;
  v10 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v10 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v10->static_fields->infoList;
  v12 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
LABEL_9:
    sub_B7076C(v8, v9);
  return System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           infoList,
           (System_Predicate_T__o *)v12,
           (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0LL;
}


bool __fastcall WarBoardMessageHistoryManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  WarBoardMessageHistoryManager_c *v4; // x0
  System_String_o *FilePath; // x19
  WarBoardMessageHistoryManager_c *v6; // x0
  System_IO_Stream_o *v7; // x20
  System_IO_BinaryReader_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x20
  WarBoardMessageHistoryManager_c *v12; // x0
  char v13; // w20
  WarBoardMessageHistoryManager_c *v14; // x0
  int v15; // w20
  int i; // w26
  int32_t v17; // w22
  int32_t v18; // w23
  int32_t v19; // w24
  WarBoardMessageHistoryManager_HistoryInfo_o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  WarBoardMessageHistoryManager_c *v23; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  int v29; // [xsp+8h] [xbp-68h]

  if ( (byte_4351712 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryReader_TypeInfo);
    sub_B70694(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4351712 = 1;
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
  v4 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v4);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v6 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  WarBoardMessageHistoryManager__ClearSaveData((const MethodInfo *)v6);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v8 = (System_IO_BinaryReader_o *)sub_B70764(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v8, v7, 0LL);
  if ( !v8 )
    sub_B7076C(v9, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._22_ReadString.method)(
                             v8,
                             v8->klass->vtable._23_ReadChars.methodPtr);
  v12 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v12 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v12->static_fields->SAVE_DATA_VERSION, v11, 0LL) )
  {
    v29 = 200;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._9_ReadBoolean.method)(
            v8,
            v8->klass->vtable._10_ReadByte.methodPtr);
    v14 = WarBoardMessageHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v14 = WarBoardMessageHistoryManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
            v8,
            v8->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v15 >= 1 )
    {
      for ( i = 0; i < v15; ++i )
      {
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v8->klass->vtable._15_ReadInt32.method)(
                v8,
                v8->klass->vtable._16_ReadUInt32.methodPtr);
        v20 = (WarBoardMessageHistoryManager_HistoryInfo_o *)sub_B70764(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
        WarBoardMessageHistoryManager_HistoryInfo___ctor(v20, 0LL);
        if ( !v20 )
          sub_B7076C(v21, v22);
        v20->fields.stageId = v17;
        v20->fields.sceneType = v18;
        v20->fields.idx = v19;
        v23 = WarBoardMessageHistoryManager_TypeInfo;
        if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
          v23 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v23->static_fields->infoList;
        if ( !infoList )
          sub_B7076C(0LL, v22);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
      }
    }
    v29 = 189;
  }
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_38;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v28 = sub_B08590(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v28)(v8, *(_QWORD *)(v28 + 8));
  return v29 == 189;
}


void __fastcall WarBoardMessageHistoryManager__SaveHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  WarBoardMessageHistoryManager___c__DisplayClass10_0_o *v7; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x0
  __int64 v9; // x1
  WarBoardMessageHistoryManager_c *v10; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v12; // x21
  WarBoardMessageHistoryManager_HistoryInfo_o *v13; // x20
  WarBoardMessageHistoryManager_c *v14; // x0

  if ( (byte_4351711 & 1) == 0 )
  {
    sub_B70694(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__);
    sub_B70694(&Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
    sub_B70694(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
    sub_B70694(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__);
    sub_B70694(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4351711 = 1;
  }
  v7 = (WarBoardMessageHistoryManager___c__DisplayClass10_0_o *)sub_B70764(WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
  WarBoardMessageHistoryManager___c__DisplayClass10_0___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_16;
  v7->fields.stageId = stageId;
  v7->fields.sceneType = sceneType;
  v7->fields.idx = idx;
  v10 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v10 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v10->static_fields->infoList;
  v12 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         infoList,
         (System_Predicate_T__o *)v12,
         (const MethodInfo_3025F48 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v13 = (WarBoardMessageHistoryManager_HistoryInfo_o *)sub_B70764(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
  WarBoardMessageHistoryManager_HistoryInfo___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  v13->fields.stageId = v7->fields.stageId;
  v13->fields.sceneType = v7->fields.sceneType;
  v13->fields.idx = v7->fields.idx;
  v14 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v14 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14->static_fields->infoList;
  if ( !v8 )
LABEL_16:
    sub_B7076C(v8, v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall WarBoardMessageHistoryManager__WriteData(const MethodInfo *method)
{
  WarBoardMessageHistoryManager_c *v1; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v3; // x0
  const MethodInfo *v4; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  WarBoardMessageHistoryManager_c *v9; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v13; // x1
  __int64 v14; // x22
  WarBoardMessageHistoryManager_c *v15; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *v16; // x23
  unsigned int *v17; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0

  if ( (byte_4351713 & 1) == 0 )
  {
    sub_B70694(&System_IO_BinaryWriter_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__);
    sub_B70694(&ManagerConfig_TypeInfo);
    sub_B70694(&WarBoardMessageHistoryManager_TypeInfo);
    byte_4351713 = 1;
  }
  v1 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v1 = WarBoardMessageHistoryManager_TypeInfo;
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
      v4 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v4 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
      }
      LOBYTE(v4[2].klass->_1.gc_desc) = 0;
      FilePath = WarBoardMessageHistoryManager__GetFilePath(v4);
      v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v7 = (System_IO_BinaryWriter_o *)sub_B70764(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_39879612(v7, v6, 0LL);
      v9 = WarBoardMessageHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v9 = WarBoardMessageHistoryManager_TypeInfo;
      }
      static_fields = v9->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B7076C(v9, v8);
      if ( !v7 )
        sub_B7076C(v9, v8);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v7->klass->vtable._22_Write.method)(
        v7,
        static_fields->SAVE_DATA_VERSION,
        v7->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v7->klass->vtable._8_Write.method)(
        v7,
        WarBoardMessageHistoryManager_TypeInfo->static_fields->isContinueDevice,
        v7->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
        v7,
        (unsigned int)size,
        v7->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v14 = 0LL;
        do
        {
          v15 = WarBoardMessageHistoryManager_TypeInfo;
          if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
            v15 = WarBoardMessageHistoryManager_TypeInfo;
          }
          v16 = v15->static_fields->infoList;
          if ( !v16 )
            sub_B7076C(v15, v13);
          if ( v16->fields._size <= (unsigned int)v14 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          v17 = (unsigned int *)v16->fields._items->m_Items[v14];
          if ( !v17 )
            sub_B7076C(v15, v13);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
            v7,
            v17[4],
            v7->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
            v7,
            v17[5],
            v7->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
            v7,
            v17[6],
            v7->klass->vtable._18_Write.methodPtr);
          ++v14;
        }
        while ( (int)v14 < size );
      }
      klass = v7->klass;
      if ( *(_WORD *)&v7->klass->_2.bitflags1 )
      {
        v19 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v19;
          p_offset += 4;
          if ( v19 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v21 = sub_B08590(v7, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v21)(v7, *(_QWORD *)(v21 + 8));
      return 1;
    }
  }
  return isModfiy;
}


void __fastcall WarBoardMessageHistoryManager_HistoryInfo___ctor(
        WarBoardMessageHistoryManager_HistoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMessageHistoryManager___c__DisplayClass10_0___ctor(
        WarBoardMessageHistoryManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardMessageHistoryManager___c__DisplayClass10_0___SaveHistory_b__0(
        WarBoardMessageHistoryManager___c__DisplayClass10_0_o *this,
        WarBoardMessageHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}


void __fastcall WarBoardMessageHistoryManager___c__DisplayClass9_0___ctor(
        WarBoardMessageHistoryManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardMessageHistoryManager___c__DisplayClass9_0___IsHistory_b__0(
        WarBoardMessageHistoryManager___c__DisplayClass9_0_o *this,
        WarBoardMessageHistoryManager_HistoryInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}