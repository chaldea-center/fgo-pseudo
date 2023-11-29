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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  struct WarBoardMessageHistoryManager_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40F8571 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v8);
    sub_B16FFC(&WarBoardMessageHistoryManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_6604, v10);
    byte_40F8571 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardMessageHistoryManager_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6604;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6604;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = WarBoardMessageHistoryManager_TypeInfo;
  WarBoardMessageHistoryManager_TypeInfo->static_fields->isModfiy = 0;
  v13->static_fields->isContinueDevice = 0;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  v19 = WarBoardMessageHistoryManager_TypeInfo->static_fields;
  v19->infoList = (struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *)v18;
  sub_B16F98((BattleServantConfConponent_o *)&v19->infoList, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
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
  WarBoardMessageHistoryManager_c *v5; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *infoList; // x0
  WarBoardMessageHistoryManager_c *v7; // x0

  if ( (byte_40F856C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__, v2);
    sub_B16FFC(&WarBoardMessageHistoryManager_TypeInfo, v3);
    byte_40F856C = 1;
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
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardMessageHistoryManager_HistoryInfo___) )
  {
    v5 = WarBoardMessageHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v5 = WarBoardMessageHistoryManager_TypeInfo;
    }
    infoList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v5->static_fields->infoList;
    if ( !infoList )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      infoList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Clear__);
  }
  v7 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v7 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v7->static_fields->isContinueDevice = 0;
  v7->static_fields->isModfiy = 1;
}


void __fastcall WarBoardMessageHistoryManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMessageHistoryManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_40F856A & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMessageHistoryManager_TypeInfo, v1);
    byte_40F856A = 1;
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

  if ( (byte_40F8569 & 1) == 0 )
  {
    sub_B16FFC(&AndroidUtil_TypeInfo, v1);
    sub_B16FFC(&DatFileName_TypeInfo, v2);
    sub_B16FFC(&StringLiteral_871, v3);
    byte_40F8569 = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(38, 0LL);
  return System_String__Concat_43746016(DatFileSavePath, (System_String_o *)StringLiteral_871, FileName, 0LL);
}


void __fastcall WarBoardMessageHistoryManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardMessageHistoryManager_c *v2; // x0

  if ( (byte_40F856B & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMessageHistoryManager_TypeInfo, v1);
    byte_40F856B = 1;
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardMessageHistoryManager___c__DisplayClass9_0_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  WarBoardMessageHistoryManager_c *v18; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20

  if ( (byte_40F856D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__,
      *(_QWORD *)&sceneType);
    sub_B16FFC(&Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v8);
    sub_B16FFC(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__, v10);
    sub_B16FFC(&WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo, v11);
    sub_B16FFC(&WarBoardMessageHistoryManager_TypeInfo, v12);
    byte_40F856D = 1;
  }
  v13 = (WarBoardMessageHistoryManager___c__DisplayClass9_0_o *)sub_B170CC(
                                                                  WarBoardMessageHistoryManager___c__DisplayClass9_0_TypeInfo,
                                                                  *(_QWORD *)&sceneType,
                                                                  *(_QWORD *)&idx,
                                                                  method,
                                                                  v4);
  WarBoardMessageHistoryManager___c__DisplayClass9_0___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.stageId = stageId;
  v13->fields.sceneType = sceneType;
  v13->fields.idx = idx;
  v18 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v18 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v18->static_fields->infoList;
  v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                                                   v14,
                                                                   v15,
                                                                   v16,
                                                                   v17);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_WarBoardMessageHistoryManager___c__DisplayClass9_0__IsHistory_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
LABEL_9:
    sub_B170D4();
  return System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           infoList,
           (System_Predicate_T__o *)v20,
           (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) != 0LL;
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_BinaryReader_o *v18; // x19
  System_String_o *v19; // x20
  WarBoardMessageHistoryManager_c *v20; // x0
  char v21; // w20
  WarBoardMessageHistoryManager_c *v22; // x0
  int v23; // w20
  int i; // w26
  int32_t v25; // w22
  int32_t v26; // w23
  int32_t v27; // w24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  WarBoardMessageHistoryManager_HistoryInfo_o *v32; // x21
  WarBoardMessageHistoryManager_c *v33; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *infoList; // x0
  System_IO_BinaryReader_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  int v39; // [xsp+8h] [xbp-68h]

  if ( (byte_40F856F & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryReader_TypeInfo, v1);
    sub_B16FFC(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, v2);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&WarBoardMessageHistoryManager_TypeInfo, v6);
    byte_40F856F = 1;
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
  v18 = (System_IO_BinaryReader_o *)sub_B170CC(System_IO_BinaryReader_TypeInfo, v14, v15, v16, v17);
  System_IO_BinaryReader___ctor(v18, v13, 0LL);
  if ( !v18 )
    sub_B170D4();
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._22_ReadString.method)(
                             v18,
                             v18->klass->vtable._23_ReadChars.methodPtr);
  v20 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v20 = WarBoardMessageHistoryManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v20->static_fields->SAVE_DATA_VERSION, v19, 0LL) )
  {
    v39 = 200;
  }
  else
  {
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._9_ReadBoolean.method)(
            v18,
            v18->klass->vtable._10_ReadByte.methodPtr);
    v22 = WarBoardMessageHistoryManager_TypeInfo;
    if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      v22 = WarBoardMessageHistoryManager_TypeInfo;
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
        v27 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v18->klass->vtable._15_ReadInt32.method)(
                v18,
                v18->klass->vtable._16_ReadUInt32.methodPtr);
        v32 = (WarBoardMessageHistoryManager_HistoryInfo_o *)sub_B170CC(
                                                               WarBoardMessageHistoryManager_HistoryInfo_TypeInfo,
                                                               v28,
                                                               v29,
                                                               v30,
                                                               v31);
        WarBoardMessageHistoryManager_HistoryInfo___ctor(v32, 0LL);
        if ( !v32 )
          sub_B170D4();
        v32->fields.stageId = v25;
        v32->fields.sceneType = v26;
        v32->fields.idx = v27;
        v33 = WarBoardMessageHistoryManager_TypeInfo;
        if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
          v33 = WarBoardMessageHistoryManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33->static_fields->infoList;
        if ( !infoList )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          infoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
      }
    }
    v39 = 189;
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
        goto LABEL_38;
    }
    v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_38:
    v38 = sub_AAFEF8(v18, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v38)(v18, *(_QWORD *)(v38 + 8));
  return v39 == 189;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardMessageHistoryManager__SaveHistory(
        int32_t stageId,
        int32_t sceneType,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardMessageHistoryManager___c__DisplayClass10_0_o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  WarBoardMessageHistoryManager_c *v20; // x0
  System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *infoList; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  WarBoardMessageHistoryManager_HistoryInfo_o *v27; // x20
  WarBoardMessageHistoryManager_c *v28; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x0

  if ( (byte_40F856E & 1) == 0 )
  {
    sub_B16FFC(&WarBoardMessageHistoryManager_HistoryInfo_TypeInfo, *(_QWORD *)&sceneType);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__, v9);
    sub_B16FFC(&Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__, v10);
    sub_B16FFC(&System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__, v12);
    sub_B16FFC(&WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo, v13);
    sub_B16FFC(&WarBoardMessageHistoryManager_TypeInfo, v14);
    byte_40F856E = 1;
  }
  v15 = (WarBoardMessageHistoryManager___c__DisplayClass10_0_o *)sub_B170CC(
                                                                   WarBoardMessageHistoryManager___c__DisplayClass10_0_TypeInfo,
                                                                   *(_QWORD *)&sceneType,
                                                                   *(_QWORD *)&idx,
                                                                   method,
                                                                   v4);
  WarBoardMessageHistoryManager___c__DisplayClass10_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_16;
  v15->fields.stageId = stageId;
  v15->fields.sceneType = sceneType;
  v15->fields.idx = idx;
  v20 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v20 = WarBoardMessageHistoryManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v20->static_fields->infoList;
  v22 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_WarBoardMessageHistoryManager_HistoryInfo__TypeInfo,
                                                                   v16,
                                                                   v17,
                                                                   v18,
                                                                   v19);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_WarBoardMessageHistoryManager___c__DisplayClass10_0__SaveHistory_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardMessageHistoryManager_HistoryInfo___ctor__);
  if ( !infoList )
    goto LABEL_16;
  if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
         infoList,
         (System_Predicate_T__o *)v22,
         (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Find__) )
  {
    return;
  }
  v27 = (WarBoardMessageHistoryManager_HistoryInfo_o *)sub_B170CC(
                                                         WarBoardMessageHistoryManager_HistoryInfo_TypeInfo,
                                                         v23,
                                                         v24,
                                                         v25,
                                                         v26);
  WarBoardMessageHistoryManager_HistoryInfo___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_16;
  v27->fields.stageId = v15->fields.stageId;
  v27->fields.sceneType = v15->fields.sceneType;
  v27->fields.idx = v15->fields.idx;
  v28 = WarBoardMessageHistoryManager_TypeInfo;
  if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
    v28 = WarBoardMessageHistoryManager_TypeInfo;
  }
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v28->static_fields->infoList;
  if ( !v29 )
LABEL_16:
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v29,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__Add__);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_IO_BinaryWriter_o *v17; // x19
  WarBoardMessageHistoryManager_c *v18; // x0
  struct WarBoardMessageHistoryManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *infoList; // x9
  int size; // w20
  __int64 v22; // x22
  WarBoardMessageHistoryManager_c *v23; // x0
  struct System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__o *v24; // x23
  unsigned int *v25; // x23
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v27; // x10
  int32_t *p_offset; // x11
  __int64 v29; // x0

  if ( (byte_40F8570 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_B16FFC(&System_IDisposable_TypeInfo, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardMessageHistoryManager_HistoryInfo__get_Item__, v4);
    sub_B16FFC(&ManagerConfig_TypeInfo, v5);
    sub_B16FFC(&WarBoardMessageHistoryManager_TypeInfo, v6);
    byte_40F8570 = 1;
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
      v17 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v13, v14, v15, v16);
      System_IO_BinaryWriter___ctor_39195976(v17, v12, 0LL);
      v18 = WarBoardMessageHistoryManager_TypeInfo;
      if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
        v18 = WarBoardMessageHistoryManager_TypeInfo;
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
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v17->klass->vtable._8_Write.method)(
        v17,
        WarBoardMessageHistoryManager_TypeInfo->static_fields->isContinueDevice,
        v17->klass->vtable._9_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
        v17,
        (unsigned int)size,
        v17->klass->vtable._18_Write.methodPtr);
      if ( size >= 1 )
      {
        v22 = 0LL;
        do
        {
          v23 = WarBoardMessageHistoryManager_TypeInfo;
          if ( (BYTE3(WarBoardMessageHistoryManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
            v23 = WarBoardMessageHistoryManager_TypeInfo;
          }
          v24 = v23->static_fields->infoList;
          if ( !v24 )
            sub_B170D4();
          if ( v24->fields._size <= (unsigned int)v22 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v25 = (unsigned int *)v24->fields._items->m_Items[v22];
          if ( !v25 )
            sub_B170D4();
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
            v17,
            v25[4],
            v17->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
            v17,
            v25[5],
            v17->klass->vtable._18_Write.methodPtr);
          ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
            v17,
            v25[6],
            v17->klass->vtable._18_Write.methodPtr);
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.stageId == this->fields.stageId
      && x->fields.sceneType == this->fields.sceneType
      && x->fields.idx == this->fields.idx;
}