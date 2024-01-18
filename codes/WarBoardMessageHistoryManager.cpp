void __fastcall WarBoardMessageHistoryManager___cctor(const MethodInfo *method)
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
  WarBoardMessageHistoryManager_c *v13; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct WarBoardMessageHistoryManager_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4186528 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v1);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v8);
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_6628/*"Fgo_20220427"*/, v10);
    byte_4186528 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6628/*"Fgo_20220427"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6628/*"Fgo_20220427"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = WarBoardMessageHistoryManager_TypeInfo;
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  v15 = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  v15->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v14;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->infoList, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
}


void __fastcall WarBoardMessageHistoryManager___ctor(WarBoardMessageHistoryManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  WarBoardMessageHistoryManager_c *v4; // x0
  __int64 v5; // x1
  WarBoardMessageHistoryManager_c *v6; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  WarBoardMessageHistoryManager_c *v8; // x0

  if ( (byte_4186523 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__, v2);
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v3);
    byte_4186523 = 1;
  }
  v4 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v4 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v6 = WarBoardMessageHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v6 = WarBoardMessageHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6->static_fields->infoList;
    if ( !infoList )
      sub_B2C434(0LL, v5);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__);
  }
  v8 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v8 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v8->static_fields->isContinueDevice = 0;
  v8->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMessageHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4186521 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v1);
    byte_4186521 = 1;
  }
  v2 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall WarBoardMessageHistoryManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4186520 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&DatFileName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4186520 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(38, 0LL);
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMessageHistoryManager_c *v2; // x0

  if ( (byte_4186522 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v1);
    byte_4186522 = 1;
  }
  v2 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  WarBoardMessageHistoryManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardMessageHistoryManager__IsHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardMessageHistoryManager___c__DisplayClass9_0_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  WarBoardMessageHistoryManager_c *v15; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_4186524 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&sceneType);
    sub_B2C35C(&Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v7);
    sub_B2C35C(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__, v9);
    sub_B2C35C(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo, v10);
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v11);
    byte_4186524 = 1;
  }
  v12 = (WarBoardMessageHistoryManager___c__DisplayClass9_0_o *)sub_B2C42C(WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo);
  WarBoardMessageHistoryManager___c__DisplayClass9_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_9;
  v12->fields.stageId = stageId;
  v12->fields.sceneType = sceneType;
  v12->fields.idx = idx;
  v15 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v15 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v15->static_fields->infoList;
  v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
LABEL_9:
    sub_B2C434(v13, v14);
  return System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           infoList,
           (System_Predicate_T__o *)v17,
           (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0LL;
}


bool __fastcall WarBoardMessageHistoryManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  WarBoardMessageHistoryManager_c *v10; // x0
  System_String_o *FilePath; // x19
  WarBoardMessageHistoryManager_c *v12; // x0
  System_IO_Stream_o *v13; // x20
  System_IO_BinaryReader_o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  WarBoardMessageHistoryManager_c *v18; // x0
  __int64 v19; // x3
  char v20; // w20
  WarBoardMessageHistoryManager_c *v21; // x0
  int v22; // w20
  int i; // w26
  int32_t v24; // w22
  int32_t v25; // w23
  int32_t v26; // w24
  WarBoardMessageHistoryManager_HistoryInfo_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  WarBoardMessageHistoryManager_c *v30; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  int v36; // [xsp+8h] [xbp-68h]

  if ( (byte_4186526 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B2C35C(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v2);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v6);
    byte_4186526 = 1;
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
  v10 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  FilePath = WarBoardMessageHistoryManager__GetFilePath((const MethodInfo *)v10);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v12 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
  }
  WarBoardMessageHistoryManager__ClearSaveData((const MethodInfo *)v12);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v13 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v14 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v14, v13, 0LL);
  if ( !v14 )
    sub_B2C434(v15, v16);
  v17 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._22_ReadString.method)(
                             v14,
                             v14->klass->vtable._23_ReadChars.methodPtr);
  v18 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v18 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v18->static_fields->SAVE_DATA_VERSION, v17, 0LL) )
  {
    v36 = 200;
  }
  else
  {
    v20 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._9_ReadBoolean.method)(
            v14,
            v14->klass->vtable._10_ReadByte.methodPtr);
    v21 = WarBoardMessageHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v21 = WarBoardMessageHistoryManager_TypeInfo;
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
        v26 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v14->klass->vtable._15_ReadInt32.method)(
                v14,
                v14->klass->vtable._16_ReadUInt32.methodPtr);
        v27 = (WarBoardMessageHistoryManager_HistoryInfo_o *)sub_B2C42C(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
        WarBoardMessageHistoryManager_HistoryInfo___ctor(v27, 0LL);
        if ( !v27 )
          sub_B2C434(v28, v29);
        v27->fields.stageId = v24;
        v27->fields.sceneType = v25;
        v27->fields.idx = v26;
        v30 = WarBoardMessageHistoryManager_TypeInfo;
        if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
          v30 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v30->static_fields->infoList;
        if ( !infoList )
          sub_B2C434(0LL, v29);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
      }
    }
    v36 = 189;
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
        goto LABEL_38;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v35 = sub_AC5258(v14, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v35)(v14, *(_QWORD *)(v35 + 8));
  return v36 == 189;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMessageHistoryManager__SaveHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardMessageHistoryManager___c__DisplayClass10_0_o *v14; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x0
  __int64 v16; // x1
  WarBoardMessageHistoryManager_c *v17; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x21
  WarBoardMessageHistoryManager_HistoryInfo_o *v20; // x20
  WarBoardMessageHistoryManager_c *v21; // x0

  if ( (byte_4186525 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&sceneType);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__, v8);
    sub_B2C35C(&Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v9);
    sub_B2C35C(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__, v11);
    sub_B2C35C(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo, v12);
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v13);
    byte_4186525 = 1;
  }
  v14 = (WarBoardMessageHistoryManager___c__DisplayClass10_0_o *)sub_B2C42C(WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo);
  WarBoardMessageHistoryManager___c__DisplayClass10_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  v14->fields.stageId = stageId;
  v14->fields.sceneType = sceneType;
  v14->fields.idx = idx;
  v17 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v17 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v17->static_fields->infoList;
  v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         infoList,
         (System_Predicate_T__o *)v19,
         (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v20 = (WarBoardMessageHistoryManager_HistoryInfo_o *)sub_B2C42C(WarBoardMessageHistoryManager_HistoryInfo_TypeInfo);
  WarBoardMessageHistoryManager_HistoryInfo___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_16;
  v20->fields.stageId = v14->fields.stageId;
  v20->fields.sceneType = v14->fields.sceneType;
  v20->fields.idx = v14->fields.idx;
  v21 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v21 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v21->static_fields->infoList;
  if ( !v15 )
LABEL_16:
    sub_B2C434(v15, v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v15,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 1;
}


bool __fastcall WarBoardMessageHistoryManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WarBoardMessageHistoryManager_c *v7; // x0
  bool isModfiy; // w8
  ManagerConfig_c *v9; // x0
  const MethodInfo *v10; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  WarBoardMessageHistoryManager_c *v15; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v19; // x1
  __int64 v20; // x3
  __int64 v21; // x22
  WarBoardMessageHistoryManager_c *v22; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *v23; // x23
  unsigned int *v24; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0

  if ( (byte_4186527 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B2C35C(&System_IDisposable_TypeInfo, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__, v4);
    sub_B2C35C(&ManagerConfig_TypeInfo, v5);
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v6);
    byte_4186527 = 1;
  }
  v7 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v7 = WarBoardMessageHistoryManager_TypeInfo;
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
      v10 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v10 = (const MethodInfo *)WarBoardMessageHistoryManager_TypeInfo;
      }
      LOBYTE(v10[2].klass->_1.gc_desc) = 0;
      FilePath = WarBoardMessageHistoryManager__GetFilePath(v10);
      v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
      v13 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
      System_IO_BinaryWriter___ctor_39287252(v13, v12, 0LL);
      v15 = WarBoardMessageHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v15 = WarBoardMessageHistoryManager_TypeInfo;
      }
      static_fields = v15->static_fields;
      infoList = static_fields->infoList;
      if ( !infoList )
        sub_B2C434(v15, v14);
      if ( !v13 )
        sub_B2C434(v15, v14);
      size = infoList->fields._size;
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
        v13,
        static_fields->SAVE_DATA_VERSION,
        v13->klass[1]._1.image);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v13->klass->vtable._8_Write.method)(
        v13,
        WarBoardMessageHistoryManager_TypeInfo->static_fields->isContinueDevice,
        v13->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        (unsigned int)size,
        v13->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v21 = 0LL;
        do
        {
          v22 = WarBoardMessageHistoryManager_TypeInfo;
          if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
            v22 = WarBoardMessageHistoryManager_TypeInfo;
          }
          v23 = v22->static_fields->infoList;
          if ( !v23 )
            sub_B2C434(v22, v19);
          if ( v23->fields._size <= (unsigned int)v21 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v24 = (unsigned int *)v23->fields._items->m_Items[v21];
          if ( !v24 )
            sub_B2C434(v22, v19);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
            v13,
            v24[4],
            v13->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
            v13,
            v24[5],
            v13->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
            v13,
            v24[6],
            v13->klass->vtable._18_Write.methodPtr);
          ++v21;
        }
        while ( (int)v21 < size );
      }
      klass = v13->klass;
      if ( *(_WORD *)&v13->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
        {
          ++v26;
          p_offset += 4;
          if ( v26 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
            goto LABEL_34;
        }
        v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_34:
        v28 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v20);
      }
      (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v28)(v13, *(_QWORD *)(v28 + 8));
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}